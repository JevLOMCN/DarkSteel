// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddObjectToCluster @ 147e5b1c0

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
FActorClusterReferenceProcessor::AddObjectToCluster
          (FActorClusterReferenceProcessor *this,int param_1,FUObjectItem *param_2,UObject *param_3,
          FWorkerContext *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  UObjectBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  FUObjectCluster *pFVar10;
  FWorkBlockifier *this_00;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [8];
  UObject *local_res20;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_90;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_80;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_70;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_60 [2];
  
  local_res10[0] = param_1;
  local_res20 = param_3;
  if (((*(uint *)&param_3->field_0x8 >> 10 & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Obj->HasAnyFlags(RF_NeedLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((param_2->ClusterRootIndex != 0) && (param_2->ClusterRootIndex != this->ClusterRootIndex))
      && (local_res10[0] != this->ClusterRootIndex)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectItem->GetOwnerIndex() == 0 || ObjectItem->GetOwnerIndex() == ClusterRootIndex || ObjectIndex == ClusterRootIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                         ,0x46,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar5 = (**(code **)(*(longlong *)param_3 + 0x28))(param_3);
  if ((cVar5 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj->CanBeInCluster()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                         ,0x47,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_res10[0] == this->ClusterRootIndex) {
    return;
  }
  if (param_2->ClusterRootIndex != 0) {
    return;
  }
  iVar6 = *(int *)&param_3->field_0xc;
  if (iVar6 <= GUObjectArray.ObjLastNonGCIndex) {
    return;
  }
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (FUObjectItem *)0x0;
  pFVar7 = pFVar9;
  if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
    pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
  }
  if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
    return;
  }
  this_00 = &param_4->ObjectsToSerialize;
  *this_00->WipIt = param_3;
  this_00->WipIt = this_00->WipIt + 1;
  if (this_00->WipIt == ((param_4->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
    UE::GC::FWorkBlockifier::PushFullBlockSync(this_00);
  }
  if ((((uint)((ulonglong)(param_2->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ObjectItem->HasAnyFlags(EInternalObjectFlags::ClusterRoot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                         ,0x4b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->ClusterRootIndex = this->ClusterRootIndex;
  pFVar10 = this->Cluster;
  pFVar1 = (pFVar10->Objects).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)(pFVar10->Objects).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (pFVar10->Objects).ArrayNum;
  piVar11 = &(pFVar10->Objects).ArrayMax;
  if (iVar6 == *piVar11) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar10->Objects).AllocatorInstance,piVar11);
  }
  (pFVar10->Objects).ArrayNum = iVar6 + 1;
  *(int *)((pFVar10->Objects).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  if (!param_5) {
    return;
  }
  pUVar2 = *(UObjectBase **)&param_3->field_0x20;
  bVar4 = CanAddToCluster(this,(UObject *)pUVar2);
  if (bVar4) {
    if (pUVar2 != (UObjectBase *)0x0) {
      if (((pUVar2->ObjectFlags >> 10 & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Object->HasAnyFlags(RF_NeedLoad)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                             ,0x74,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2);
      if (pFVar7->ClusterRootIndex != this->ClusterRootIndex) {
        if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
           (pFVar7->ClusterRootIndex == 0)) {
          if (GUObjectArray.ObjLastNonGCIndex < pUVar2->InternalIndex) {
            bVar4 = CanAddToCluster(this,(UObject *)pUVar2);
            if ((bVar4) && ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) == RF_NoFlags)) {
              iVar6 = pUVar2->InternalIndex;
              if ((iVar6 < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                     ,0x443,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar8 = pFVar9;
              if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
                pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
              }
              if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
                AddObjectToCluster(this,pUVar2->InternalIndex,pFVar7,(UObject *)pUVar2,param_4,true)
                ;
                goto LAB_147e5b708;
              }
            }
            if ((4 < (byte)LogLevelActorContainer._0_1_) && ((pUVar2->ObjectFlags >> 10 & 1) != 0))
            {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar2,(FString *)&local_a0,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this->ParentLevel,(FString *)&local_b0,(UObject *)0x0
                         ,None);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                          ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(&local_b0);
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(&local_a0);
            }
            local_e4 = pUVar2->InternalIndex;
            piVar11 = &local_e4;
            pFVar10 = this->Cluster;
            goto LAB_147e5b6fb;
          }
        }
        else {
          if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
            iVar6 = pFVar7->ClusterRootIndex;
          }
          else {
            iVar6 = pUVar2->InternalIndex;
          }
          local_e0 = iVar6;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = pFVar9;
          if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
            pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
          }
          pFVar10 = FUObjectClusterContainer::operator[]
                              (&GUObjectClusters,~pFVar7->ClusterRootIndex);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->Cluster->ReferencedClusters,&local_e0);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&pFVar10->ReferencedByClusters,&this->ClusterRootIndex);
          pFVar12 = (pFVar10->ReferencedClusters).AllocatorInstance.Data;
          iVar6 = (pFVar10->ReferencedClusters).ArrayNum;
          pFVar1 = pFVar12 + (longlong)iVar6 * 4;
          while( true ) {
            if ((pFVar10->ReferencedClusters).ArrayNum != iVar6) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar12 == pFVar1) break;
            local_dc = *(int *)pFVar12;
            if (local_dc != this->ClusterRootIndex) {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&this->Cluster->ReferencedClusters,&local_dc);
            }
            pFVar12 = pFVar12 + 4;
          }
          pFVar12 = (pFVar10->MutableObjects).AllocatorInstance.Data;
          iVar6 = (pFVar10->MutableObjects).ArrayNum;
          pFVar1 = pFVar12 + (longlong)iVar6 * 4;
          while( true ) {
            if ((pFVar10->MutableObjects).ArrayNum != iVar6) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            if (pFVar12 == pFVar1) break;
            local_d8 = *(int *)pFVar12;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this->Cluster->MutableObjects,&local_d8);
            pFVar12 = pFVar12 + 4;
          }
        }
      }
    }
  }
  else {
    local_d4 = pUVar2->InternalIndex;
    piVar11 = &local_d4;
    pFVar10 = this->Cluster;
LAB_147e5b6fb:
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(&pFVar10->MutableObjects,piVar11);
  }
LAB_147e5b708:
  pUVar2 = *(UObjectBase **)&local_res20->field_0x10;
  if ((pUVar2[5].InternalIndex & 0x80) != 0) {
    return;
  }
  if (pUVar2 != (UObjectBase *)0x0) {
    if (((pUVar2->ObjectFlags >> 10 & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object->HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                           ,0x74,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2);
    if (pFVar7->ClusterRootIndex != this->ClusterRootIndex) {
      if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
         (pFVar7->ClusterRootIndex == 0)) {
        if (GUObjectArray.ObjLastNonGCIndex < pUVar2->InternalIndex) {
          bVar4 = CanAddToCluster(this,(UObject *)pUVar2);
          if ((bVar4) && ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) == RF_NoFlags)) {
            iVar6 = pUVar2->InternalIndex;
            if ((iVar6 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar8 = pFVar9;
            if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
              pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
            }
            if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
              AddObjectToCluster(this,pUVar2->InternalIndex,pFVar7,(UObject *)pUVar2,param_4,true);
              goto LAB_147e5b82d;
            }
          }
          if ((4 < (byte)LogLevelActorContainer._0_1_) && ((pUVar2->ObjectFlags >> 10 & 1) != 0)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar2,(FString *)&local_80,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this->ParentLevel,(FString *)&local_90,(UObject *)0x0,
                       None);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                        ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(&local_90);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(&local_80);
          }
          local_d0 = pUVar2->InternalIndex;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                    (&this->Cluster->MutableObjects,&local_d0);
        }
      }
      else {
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
          iVar6 = pFVar7->ClusterRootIndex;
        }
        else {
          iVar6 = pUVar2->InternalIndex;
        }
        local_cc = iVar6;
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = pFVar9;
        if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
          pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
        }
        pFVar10 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar7->ClusterRootIndex);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->Cluster->ReferencedClusters,&local_cc);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&pFVar10->ReferencedByClusters,&this->ClusterRootIndex);
        pFVar12 = (pFVar10->ReferencedClusters).AllocatorInstance.Data;
        iVar6 = (pFVar10->ReferencedClusters).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar6 * 4;
        while( true ) {
          if ((pFVar10->ReferencedClusters).ArrayNum != iVar6) {
            local_e8 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_e8);
          }
          if (pFVar12 == pFVar1) break;
          local_c8 = *(int *)pFVar12;
          if (local_c8 != this->ClusterRootIndex) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this->Cluster->ReferencedClusters,&local_c8);
          }
          pFVar12 = pFVar12 + 4;
        }
        pFVar12 = (pFVar10->MutableObjects).AllocatorInstance.Data;
        iVar6 = (pFVar10->MutableObjects).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar6 * 4;
        while( true ) {
          if ((pFVar10->MutableObjects).ArrayNum != iVar6) {
            local_e7 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_e7);
          }
          if (pFVar12 == pFVar1) break;
          local_c4 = *(int *)pFVar12;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->Cluster->MutableObjects,&local_c4);
          pFVar12 = pFVar12 + 4;
        }
      }
    }
  }
LAB_147e5b82d:
  pUVar2 = *(UObjectBase **)(*(longlong *)&local_res20->field_0x10 + 0x20);
  if (pUVar2 != (UObjectBase *)0x0) {
    if (((pUVar2->ObjectFlags >> 10 & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object->HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                           ,0x74,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2);
    if (pFVar7->ClusterRootIndex != this->ClusterRootIndex) {
      if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
         (pFVar7->ClusterRootIndex == 0)) {
        if (GUObjectArray.ObjLastNonGCIndex < pUVar2->InternalIndex) {
          bVar4 = CanAddToCluster(this,(UObject *)pUVar2);
          if ((bVar4) && ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) == RF_NoFlags)) {
            iVar6 = pUVar2->InternalIndex;
            if ((iVar6 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
              pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
            }
            if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
              AddObjectToCluster(this,pUVar2->InternalIndex,pFVar7,(UObject *)pUVar2,param_4,true);
              return;
            }
          }
          if ((4 < (byte)LogLevelActorContainer._0_1_) && ((pUVar2->ObjectFlags >> 10 & 1) != 0)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar2,(FString *)local_60,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this->ParentLevel,(FString *)&local_70,(UObject *)0x0,
                       None);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                        ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(&local_70);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            ~TArray<wchar_t,TSizedDefaultAllocator<32>_>(local_60);
          }
          local_c0 = pUVar2->InternalIndex;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                    (&this->Cluster->MutableObjects,&local_c0);
        }
      }
      else {
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
          iVar6 = pFVar7->ClusterRootIndex;
        }
        else {
          iVar6 = pUVar2->InternalIndex;
        }
        local_bc = iVar6;
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
          pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
        }
        pFVar10 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar9->ClusterRootIndex);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->Cluster->ReferencedClusters,&local_bc);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&pFVar10->ReferencedByClusters,&this->ClusterRootIndex);
        pFVar12 = (pFVar10->ReferencedClusters).AllocatorInstance.Data;
        iVar6 = (pFVar10->ReferencedClusters).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar6 * 4;
        while( true ) {
          if ((pFVar10->ReferencedClusters).ArrayNum != iVar6) {
            local_e6 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_e6);
          }
          if (pFVar12 == pFVar1) break;
          local_b8 = *(int *)pFVar12;
          if (local_b8 != this->ClusterRootIndex) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this->Cluster->ReferencedClusters,&local_b8);
          }
          pFVar12 = pFVar12 + 4;
        }
        pFVar12 = (pFVar10->MutableObjects).AllocatorInstance.Data;
        iVar6 = (pFVar10->MutableObjects).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar6 * 4;
        while( true ) {
          if ((pFVar10->MutableObjects).ArrayNum != iVar6) {
            local_e5 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_e5);
          }
          if (pFVar12 == pFVar1) break;
          local_b4 = *(int *)pFVar12;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->Cluster->MutableObjects,&local_b4);
          pFVar12 = pFVar12 + 4;
        }
      }
    }
  }
  return;
}

// CanAddToCluster @ 147e5ee50

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
FActorClusterReferenceProcessor::CanAddToCluster
          (FActorClusterReferenceProcessor *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  
  bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,this->ParentLevelPackage);
  if (bVar2) {
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,(UObject *)this->ParentLevel);
    if (bVar2) {
      pUVar4 = ULevel::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000147e5eed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

