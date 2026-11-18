// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// HandleObjectReference @ 147e6acd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>::HandleObjectReference
          (TDefaultCollector<FActorClusterReferenceProcessor> *this,UObject **param_1,
          UObject *param_2,FProperty *param_3)

{
  FScriptContainerElement *pFVar1;
  FActorClusterReferenceProcessor *this_00;
  FWorkerContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *pFVar5;
  FUObjectItem *pFVar6;
  FUObjectCluster *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  int local_res10 [2];
  UObject *local_res18 [2];
  int local_68;
  int local_64;
  int local_60 [2];
  FString local_58;
  FString local_48;
  
  this_00 = this->Processor;
  pFVar2 = this->Context;
  if (*param_1 != (UObject *)0x0) {
    local_res18[0] = param_2;
    if (((*(uint *)&(*param_1)->field_0x8 >> 10 & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object->HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                           ,0x74,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = *(int *)&(*param_1)->field_0xc;
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (FUObjectItem *)0x0;
    pFVar5 = pFVar6;
    if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
    }
    if (pFVar5->ClusterRootIndex != this_00->ClusterRootIndex) {
      if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
         (pFVar5->ClusterRootIndex == 0)) {
        if (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*param_1)->field_0xc) {
          bVar4 = FActorClusterReferenceProcessor::CanAddToCluster(this_00,*param_1);
          if ((bVar4) && ((*(uint *)&(*param_1)->field_0x8 & 0x1400) == 0)) {
            iVar8 = *(int *)&(*param_1)->field_0xc;
            if ((iVar8 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
              pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
            }
            if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
              FActorClusterReferenceProcessor::AddObjectToCluster
                        (this_00,*(int *)&(*param_1)->field_0xc,pFVar5,*param_1,pFVar2,true);
              return;
            }
          }
          if ((4 < (byte)LogLevelActorContainer._0_1_) &&
             ((*(uint *)&(*param_1)->field_0x8 >> 10 & 1) != 0)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)*param_1,&local_48,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00->ParentLevel,&local_58,(UObject *)0x0,None);
            Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                        ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          local_res10[0] = *(int *)&(*param_1)->field_0xc;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                    (&this_00->Cluster->MutableObjects,local_res10);
        }
      }
      else {
        if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
          iVar8 = pFVar5->ClusterRootIndex;
        }
        else {
          iVar8 = *(int *)&(*param_1)->field_0xc;
        }
        local_68 = iVar8;
        if ((iVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
          pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
        }
        pFVar7 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar6->ClusterRootIndex);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this_00->Cluster->ReferencedClusters,&local_68);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&pFVar7->ReferencedByClusters,&this_00->ClusterRootIndex);
        pFVar9 = (pFVar7->ReferencedClusters).AllocatorInstance.Data;
        iVar8 = (pFVar7->ReferencedClusters).ArrayNum;
        pFVar1 = pFVar9 + (longlong)iVar8 * 4;
        while( true ) {
          if ((pFVar7->ReferencedClusters).ArrayNum != iVar8) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar9 == pFVar1) break;
          local_64 = *(int *)pFVar9;
          if (local_64 != this_00->ClusterRootIndex) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this_00->Cluster->ReferencedClusters,&local_64);
          }
          pFVar9 = pFVar9 + 4;
        }
        pFVar9 = (pFVar7->MutableObjects).AllocatorInstance.Data;
        iVar8 = (pFVar7->MutableObjects).ArrayNum;
        pFVar1 = pFVar9 + (longlong)iVar8 * 4;
        while( true ) {
          if ((pFVar7->MutableObjects).ArrayNum != iVar8) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar9 == pFVar1) break;
          local_60[0] = *(int *)pFVar9;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this_00->Cluster->MutableObjects,local_60);
          pFVar9 = pFVar9 + 4;
        }
      }
    }
  }
  return;
}

// HandleObjectReferences @ 147e6b060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>::HandleObjectReferences
          (TDefaultCollector<FActorClusterReferenceProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FScriptContainerElement *pFVar1;
  FActorClusterReferenceProcessor *this_00;
  FWorkerContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *pFVar5;
  FUObjectItem *pFVar6;
  FUObjectCluster *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res18 [8];
  UObject *local_res20;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  
  if (0 < param_2) {
    lVar10 = 0;
    local_res20 = param_3;
    do {
      this_00 = this->Processor;
      pFVar2 = this->Context;
      if (param_1[lVar10] != (UObject *)0x0) {
        if (((*(uint *)&param_1[lVar10]->field_0x8 >> 10 & 1) != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Object->HasAnyFlags(RF_NeedLoad)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                               ,0x74,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)&param_1[lVar10]->field_0xc;
        if ((iVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
          pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
        }
        else {
          pFVar5 = (FUObjectItem *)0x0;
        }
        if (pFVar5->ClusterRootIndex != this_00->ClusterRootIndex) {
          if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
             (pFVar5->ClusterRootIndex == 0)) {
            if (GUObjectArray.ObjLastNonGCIndex < *(int *)&param_1[lVar10]->field_0xc) {
              bVar4 = FActorClusterReferenceProcessor::CanAddToCluster(this_00,param_1[lVar10]);
              if ((bVar4) && ((*(uint *)&param_1[lVar10]->field_0x8 & 0x1400) == 0)) {
                iVar8 = *(int *)&param_1[lVar10]->field_0xc;
                if ((iVar8 < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                       ,0x443,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
                }
                else {
                  pFVar6 = (FUObjectItem *)0x0;
                }
                if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
                  FActorClusterReferenceProcessor::AddObjectToCluster
                            (this_00,*(int *)&param_1[lVar10]->field_0xc,pFVar5,param_1[lVar10],
                             pFVar2,true);
                  goto LAB_147e6b3f8;
                }
              }
              if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                 ((*(uint *)&param_1[lVar10]->field_0x8 >> 10 & 1) != 0)) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)param_1[lVar10],&local_48,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00->ParentLevel,&local_58,(UObject *)0x0,None)
                ;
                Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                            ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
              }
              local_68 = *(int *)&param_1[lVar10]->field_0xc;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                        (&this_00->Cluster->MutableObjects,&local_68);
            }
          }
          else {
            if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
              iVar8 = pFVar5->ClusterRootIndex;
            }
            else {
              iVar8 = *(int *)&param_1[lVar10]->field_0xc;
            }
            local_64 = iVar8;
            if ((iVar8 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
              pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar8);
            }
            else {
              pFVar5 = (FUObjectItem *)0x0;
            }
            pFVar7 = FUObjectClusterContainer::operator[]
                               (&GUObjectClusters,~pFVar5->ClusterRootIndex);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this_00->Cluster->ReferencedClusters,&local_64);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&pFVar7->ReferencedByClusters,&this_00->ClusterRootIndex);
            pFVar9 = (pFVar7->ReferencedClusters).AllocatorInstance.Data;
            iVar8 = (pFVar7->ReferencedClusters).ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar8 * 4;
            while( true ) {
              if ((pFVar7->ReferencedClusters).ArrayNum != iVar8) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res18);
              }
              if (pFVar9 == pFVar1) break;
              local_60 = *(int *)pFVar9;
              if (local_60 != this_00->ClusterRootIndex) {
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&this_00->Cluster->ReferencedClusters,&local_60);
              }
              pFVar9 = pFVar9 + 4;
            }
            pFVar9 = (pFVar7->MutableObjects).AllocatorInstance.Data;
            iVar8 = (pFVar7->MutableObjects).ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar8 * 4;
            while( true ) {
              if ((pFVar7->MutableObjects).ArrayNum != iVar8) {
                local_res20 = (UObject *)((ulonglong)local_res20 & 0xffffffffffffff00);
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_res20);
              }
              if (pFVar9 == pFVar1) break;
              local_5c = *(int *)pFVar9;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&this_00->Cluster->MutableObjects,&local_5c);
              pFVar9 = pFVar9 + 4;
            }
          }
        }
      }
LAB_147e6b3f8:
      lVar10 = lVar10 + 1;
    } while (lVar10 < param_2);
  }
  return;
}

// IsIgnoringArchetypeRef @ 147e6e020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FActorClusterReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 147e6e030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>::IsIgnoringTransient
          (TDefaultCollector<FActorClusterReferenceProcessor> *this)

{
  return false;
}

