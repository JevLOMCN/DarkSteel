// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ProcessObjectArray @ 147e73a70

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
UE::GC::
TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
::ProcessObjectArray
          (TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
           *this,FWorkerContext *param_1)

{
  uint *puVar1;
  UObject ***pppUVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  UClass *this_00;
  UObjectBaseUtility *this_01;
  UObjectBase *pUVar5;
  code *pcVar6;
  FMemberId *pFVar7;
  FActorClusterReferenceProcessor *pFVar8;
  UObject *pUVar9;
  bool bVar10;
  int iVar11;
  FUObjectItem *pFVar12;
  FUObjectItem *pFVar13;
  FUObjectCluster *pFVar14;
  FDebugSchemaStackNode *pFVar15;
  ulonglong uVar16;
  FWorkBlock *pFVar17;
  FWorkerContext *pFVar18;
  uint uVar19;
  UObject **ppUVar20;
  uint uVar21;
  FSchemaView FVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  ushort *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  uchar *puVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  FWorkBlockifier *this_02;
  UObject ***pppUVar32;
  uint uVar33;
  UObject *pUVar34;
  uchar *puVar35;
  uint local_388;
  ulonglong *local_378;
  ushort *local_370;
  undefined1 local_368;
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365;
  undefined1 local_364;
  undefined1 local_363;
  undefined1 local_362;
  undefined1 local_361;
  undefined1 local_360;
  undefined1 local_35f;
  undefined1 local_35e;
  undefined1 local_35d;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  undefined1 local_355;
  undefined1 local_354 [4];
  TDirectDispatcher<FActorClusterReferenceProcessor> local_350;
  uint local_338;
  UObject *local_330;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0 [2];
  UObject *local_298;
  longlong local_290;
  FWorkBlockifier *local_288;
  FWorkerContext *local_280;
  int local_278 [2];
  UObject **local_270;
  ulonglong *local_268;
  byte local_260 [4];
  uint uStack_25c;
  byte local_258;
  uint local_254;
  byte local_250;
  uint local_24c;
  byte local_248;
  uint local_244;
  ulonglong local_240;
  UObject **local_238;
  FWorkerContext *local_230;
  FDebugSchemaStackNode local_228;
  FWorkerContext *local_210;
  FDebugSchemaStackNode local_208;
  FWorkerContext *local_1f0;
  FDebugSchemaStackNode local_1e8;
  FWorkerContext *local_1d0;
  FDebugSchemaStackNode local_1c8;
  FWorkerContext *local_1b0;
  FDebugSchemaStackNode local_1a8;
  UObject **local_188;
  int iStack_180;
  undefined4 uStack_17c;
  UObject **local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FReferenceCollector local_168;
  FActorClusterReferenceProcessor *local_158;
  FWorkerContext *local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  param_1->bIsSuspended = false;
  param_1->bDidWork = true;
  local_158 = this->Processor;
  local_168._padding_ =
       (longlong)&___7__TDefaultCollector_VFActorClusterReferenceProcessor___GC_UE__6B_;
  local_350.Collector = &local_168;
  local_168.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_150 = param_1;
  param_1->ReferencingObject = (UObject *)FGCObject::GGCObjectReferencer;
  pppUVar32 = (param_1->InitialNativeReferences).DataPtr;
  pppUVar2 = pppUVar32 + (param_1->InitialNativeReferences).ArrayNum;
  pFVar8 = local_158;
  local_280 = param_1;
  for (; local_350.Processor = pFVar8, local_350.Context = param_1, pppUVar32 != pppUVar2;
      pppUVar32 = pppUVar32 + 1) {
    ppUVar20 = *pppUVar32;
    if (*ppUVar20 != (UObject *)0x0) {
      if (((*(uint *)&(*ppUVar20)->field_0x8 >> 10 & 1) != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Object->HasAnyFlags(RF_NeedLoad)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                              ,0x74,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,(UObjectBase *)*ppUVar20);
      if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
        if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
           (pFVar12->ClusterRootIndex == 0)) {
          if (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*ppUVar20)->field_0xc) {
            bVar10 = FActorClusterReferenceProcessor::CanAddToCluster(pFVar8,*ppUVar20);
            if (((bVar10) && ((*(uint *)&(*ppUVar20)->field_0x8 & 0x1400) == 0)) &&
               (pFVar13 = FUObjectArray::IndexToObject
                                    (&GUObjectArray,*(int *)&(*ppUVar20)->field_0xc),
               ((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0)) {
              FActorClusterReferenceProcessor::AddObjectToCluster
                        (pFVar8,*(int *)&(*ppUVar20)->field_0xc,pFVar12,*ppUVar20,param_1,true);
            }
            else {
              if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                 ((*(uint *)&(*ppUVar20)->field_0x8 >> 10 & 1) != 0)) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)*ppUVar20,&local_88,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_148,(UObject *)0x0,None)
                ;
                Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                            ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              local_2ac = *(int *)&(*ppUVar20)->field_0xc;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                        (&pFVar8->Cluster->MutableObjects,&local_2ac);
            }
          }
        }
        else {
          if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
            local_2a8 = pFVar12->ClusterRootIndex;
          }
          else {
            local_2a8 = *(int *)&(*ppUVar20)->field_0xc;
          }
          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2a8);
          pFVar14 = FUObjectClusterContainer::operator[]
                              (&GUObjectClusters,~pFVar12->ClusterRootIndex);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&pFVar8->Cluster->ReferencedClusters,&local_2a8);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
          pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
          iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
          while( true ) {
            if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
              local_368 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_368);
            }
            if (pFVar24 == pFVar3) break;
            local_2a0[0] = *(int *)pFVar24;
            if (local_2a0[0] != pFVar8->ClusterRootIndex) {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&pFVar8->Cluster->ReferencedClusters,local_2a0);
            }
            pFVar24 = pFVar24 + 4;
          }
          pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
          iVar11 = (pFVar14->MutableObjects).ArrayNum;
          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
          while( true ) {
            if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
              local_367 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_367);
            }
            if (pFVar24 == pFVar3) break;
            local_278[0] = *(int *)pFVar24;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&pFVar8->Cluster->MutableObjects,local_278);
            pFVar24 = pFVar24 + 4;
          }
        }
      }
    }
    puVar1 = &((local_350.Context)->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar8 = local_350.Processor;
    param_1 = local_350.Context;
  }
  ppUVar20 = (local_280->InitialObjects).DataPtr;
  local_288 = &local_280->ObjectsToSerialize;
  iStack_170 = (local_280->InitialObjects).ArrayNum;
  uStack_16c = *(undefined4 *)&(local_280->InitialObjects).field_0xc;
  do {
    local_178 = ppUVar20;
    (local_280->Stats).NumObjects = (local_280->Stats).NumObjects + iStack_170;
    local_238 = ppUVar20 + iStack_170;
    if (iStack_170 == 0) {
      local_290 = 0;
    }
    else {
      local_290 = *(longlong *)&ppUVar20[1]->field_0x10 + 0x1f0;
    }
    local_270 = ppUVar20;
    if (ppUVar20 != ppUVar20 + iStack_170) {
      do {
        pUVar34 = *local_270;
        this_00 = *(UClass **)&pUVar34->field_0x10;
        this_01 = *(UObjectBaseUtility **)&pUVar34->field_0x20;
        local_330 = pUVar34;
        local_178 = ppUVar20;
        if ((this_00->ClassFlags & CLASS_TokenStreamAssembled) == CLASS_None) {
          UClass::AssembleReferenceTokenStream(this_00,false);
        }
        pFVar18 = local_350.Context;
        pFVar8 = local_350.Processor;
        uVar31 = (this_00->ReferenceSchema).SchemaView;
        (local_350.Context)->ReferencingObject = pUVar34;
        if (((uint)this_00->_padding_ >> 10 & 1) != 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Object->HasAnyFlags(RF_NeedLoad)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                              ,0x74,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = *(int *)((longlong)&this_00->_padding_ + 4);
        if (iVar11 < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x443,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
          pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
        }
        else {
          pFVar12 = (FUObjectItem *)0x0;
        }
        if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
          if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
             (pFVar12->ClusterRootIndex == 0)) {
            if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&this_00->_padding_ + 4)) {
              bVar10 = FActorClusterReferenceProcessor::CanAddToCluster(pFVar8,(UObject *)this_00);
              if ((bVar10) && ((this_00->_padding_ & 0x1400) == 0)) {
                iVar11 = *(int *)((longlong)&this_00->_padding_ + 4);
                if (iVar11 < 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                      ,0x443,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar13 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
                }
                else {
                  pFVar13 = (FUObjectItem *)0x0;
                }
                if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
                  FActorClusterReferenceProcessor::AddObjectToCluster
                            (pFVar8,*(int *)((longlong)&this_00->_padding_ + 4),pFVar12,
                             (UObject *)this_00,pFVar18,true);
                  goto LAB_147e73fb5;
                }
              }
              if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                 (((uint)this_00->_padding_ >> 10 & 1) != 0)) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_128,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_138,(UObject *)0x0,None)
                ;
                Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                            ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
              }
              local_328 = *(int *)((longlong)&this_00->_padding_ + 4);
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                        (&pFVar8->Cluster->MutableObjects,&local_328);
            }
          }
          else {
            if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
              iVar11 = pFVar12->ClusterRootIndex;
            }
            else {
              iVar11 = *(int *)((longlong)&this_00->_padding_ + 4);
            }
            local_324 = iVar11;
            if (iVar11 < 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                  ,0x443,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
              pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
            }
            else {
              pFVar12 = (FUObjectItem *)0x0;
            }
            pFVar14 = FUObjectClusterContainer::operator[]
                                (&GUObjectClusters,~pFVar12->ClusterRootIndex);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&pFVar8->Cluster->ReferencedClusters,&local_324);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
            pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
            iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
            pFVar3 = pFVar24 + (longlong)iVar11 * 4;
            while( true ) {
              if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                local_366 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_366);
              }
              if (pFVar24 == pFVar3) break;
              local_320 = *(int *)pFVar24;
              if (local_320 != pFVar8->ClusterRootIndex) {
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&pFVar8->Cluster->ReferencedClusters,&local_320);
              }
              pFVar24 = pFVar24 + 4;
            }
            pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
            iVar11 = (pFVar14->MutableObjects).ArrayNum;
            pFVar3 = pFVar24 + (longlong)iVar11 * 4;
            while( true ) {
              if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                local_365 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_365);
              }
              if (pFVar24 == pFVar3) break;
              local_31c = *(int *)pFVar24;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&pFVar8->Cluster->MutableObjects,&local_31c);
              pFVar24 = pFVar24 + 4;
            }
          }
        }
LAB_147e73fb5:
        pFVar18 = local_350.Context;
        pFVar8 = local_350.Processor;
        puVar1 = &((local_350.Context)->Stats).NumReferences;
        *puVar1 = *puVar1 + 1;
        if (this_01 != (UObjectBaseUtility *)0x0) {
          if ((*(uint *)&this_01->field_0x8 >> 10 & 1) != 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Object->HasAnyFlags(RF_NeedLoad)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                ,0x74,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = *(int *)&this_01->field_0xc;
          if (iVar11 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                ,0x443,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
            pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
          }
          else {
            pFVar12 = (FUObjectItem *)0x0;
          }
          if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
            if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
               (pFVar12->ClusterRootIndex == 0)) {
              if (GUObjectArray.ObjLastNonGCIndex < *(int *)&this_01->field_0xc) {
                bVar10 = FActorClusterReferenceProcessor::CanAddToCluster(pFVar8,(UObject *)this_01)
                ;
                if ((bVar10) && ((*(uint *)&this_01->field_0x8 & 0x1400) == 0)) {
                  iVar11 = *(int *)&this_01->field_0xc;
                  if (iVar11 < 0) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                        ,0x443,L"");
                    if (bVar10) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                    pFVar13 = FChunkedFixedUObjectArray::operator[]
                                        (&GUObjectArray.ObjObjects,iVar11);
                  }
                  else {
                    pFVar13 = (FUObjectItem *)0x0;
                  }
                  if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0)
                  {
                    FActorClusterReferenceProcessor::AddObjectToCluster
                              (pFVar8,*(int *)&this_01->field_0xc,pFVar12,(UObject *)this_01,pFVar18
                               ,true);
                    goto LAB_147e742fa;
                  }
                }
                if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                   ((*(uint *)&this_01->field_0x8 >> 10 & 1) != 0)) {
                  UObjectBaseUtility::GetFullName(this_01,&local_108,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_118,(UObject *)0x0,
                             None);
                  Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)
                             &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                              ::__l46::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer);
                  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.Data.AllocatorInstance.Data);
                  }
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                }
                local_318 = *(int *)&this_01->field_0xc;
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                          (&pFVar8->Cluster->MutableObjects,&local_318);
              }
            }
            else {
              if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
                iVar11 = pFVar12->ClusterRootIndex;
              }
              else {
                iVar11 = *(int *)&this_01->field_0xc;
              }
              local_314 = iVar11;
              if (iVar11 < 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x443,L"");
                if (bVar10) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
              }
              else {
                pFVar12 = (FUObjectItem *)0x0;
              }
              pFVar14 = FUObjectClusterContainer::operator[]
                                  (&GUObjectClusters,~pFVar12->ClusterRootIndex);
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&pFVar8->Cluster->ReferencedClusters,&local_314);
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
              pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
              iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
              pFVar3 = pFVar24 + (longlong)iVar11 * 4;
              while( true ) {
                if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                  local_364 = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_364);
                }
                if (pFVar24 == pFVar3) break;
                local_310 = *(int *)pFVar24;
                if (local_310 != pFVar8->ClusterRootIndex) {
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (&pFVar8->Cluster->ReferencedClusters,&local_310);
                }
                pFVar24 = pFVar24 + 4;
              }
              pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
              iVar11 = (pFVar14->MutableObjects).ArrayNum;
              pFVar3 = pFVar24 + (longlong)iVar11 * 4;
              while( true ) {
                if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                  local_363 = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_363);
                }
                if (pFVar24 == pFVar3) break;
                local_30c = *(int *)pFVar24;
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&pFVar8->Cluster->MutableObjects,&local_30c);
                pFVar24 = pFVar24 + 4;
              }
            }
          }
        }
LAB_147e742fa:
        puVar1 = &((local_350.Context)->Stats).NumReferences;
        *puVar1 = *puVar1 + 1;
        puVar25 = (ushort *)(uVar31 & 0xfffffffffffffffe);
        ppUVar20 = local_178;
        if (puVar25 != (ushort *)0x0) {
          local_1b0 = local_350.Context;
          local_298 = local_330;
          local_1a8.Prev = (local_350.Context)->SchemaStack;
          local_1a8.Schema.Handle = uVar31;
          uVar31 = uVar31 & 0xffffffffffffff01;
          local_1a8.Member.MemberlessId = 0;
          local_1a8.Member.Index = 0;
          (local_350.Context)->SchemaStack = &local_1a8;
          local_240 = uVar31;
          local_388 = 0;
          do {
            pUVar34 = local_298;
            local_260[0] = (byte)*puVar25 & 0x1f;
            uStack_25c = (uint)(*puVar25 >> 5);
            if (0xf < local_260[0]) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type < EMemberType::Count",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                  ,0x1c7,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            local_258 = (byte)puVar25[1] & 0x1f;
            local_254 = (uint)(puVar25[1] >> 5);
            if (0xf < local_258) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type < EMemberType::Count",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                  ,0x1c7,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            local_250 = (byte)puVar25[2] & 0x1f;
            local_24c = (uint)(puVar25[2] >> 5);
            if (0xf < local_250) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type < EMemberType::Count",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                  ,0x1c7,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            local_248 = (byte)puVar25[3] & 0x1f;
            local_244 = (uint)(puVar25[3] >> 5);
            if (0xf < local_248) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type < EMemberType::Count",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                  ,0x1c7,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            local_268 = (ulonglong *)local_260;
            local_370 = puVar25;
            do {
              pUVar9 = local_330;
              pFVar18 = local_350.Context;
              pFVar8 = local_350.Processor;
              pFVar12 = (FUObjectItem *)0x0;
              uVar29 = *local_268;
              local_378 = (ulonglong *)(&pUVar34->field_0x0 + (uVar29 >> 0x20) * 8);
              pFVar7 = &(local_350.Context)->SchemaStack->Member;
              (local_350.Context)->SchemaStack->Index = local_388;
              (local_350.Context)->SchemaStack->MemberlessId = 0;
              uVar19 = (uint)(uVar29 >> 0x20);
              ppUVar20 = local_178;
              switch(uVar29 & 0xff) {
              case 0:
                goto switchD_147e744bf_caseD_0;
              case 1:
                local_298 = (UObject *)
                            (&pUVar34->field_0x0 + (ulonglong)(uVar19 * 0x800 + 0x800) * 8);
                break;
              case 2:
                if (*local_378 != 0) {
                  if ((*(uint *)(*local_378 + 8) >> 10 & 1) != 0) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Object->HasAnyFlags(RF_NeedLoad)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                        ,0x74,L"");
                    if (bVar10) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  iVar11 = *(int *)(*local_378 + 0xc);
                  if (iVar11 < 0) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                        ,0x443,L"");
                    if (bVar10) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  pFVar13 = pFVar12;
                  if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                    pFVar13 = FChunkedFixedUObjectArray::operator[]
                                        (&GUObjectArray.ObjObjects,iVar11);
                  }
                  if (pFVar13->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                    if ((((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x38) & 1) ==
                         0) && (pFVar13->ClusterRootIndex == 0)) {
                      if (GUObjectArray.ObjLastNonGCIndex <
                          *(int *)&((UObject *)*local_378)->field_0xc) {
                        bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                           (pFVar8,(UObject *)*local_378);
                        if ((bVar10) && ((*(uint *)(*local_378 + 8) & 0x1400) == 0)) {
                          iVar11 = *(int *)(*local_378 + 0xc);
                          if (iVar11 < 0) {
                            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                                ,0x443,L"");
                            if (bVar10) {
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                          }
                          if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                            pFVar12 = FChunkedFixedUObjectArray::operator[]
                                                (&GUObjectArray.ObjObjects,iVar11);
                          }
                          if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3e) & 1
                              ) == 0) {
                            FActorClusterReferenceProcessor::AddObjectToCluster
                                      (pFVar8,*(int *)&((UObject *)*local_378)->field_0xc,pFVar13,
                                       (UObject *)*local_378,pFVar18,true);
                            goto LAB_147e7481a;
                          }
                        }
                        if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                           ((*(uint *)(*local_378 + 8) >> 10 & 1) != 0)) {
                          UObjectBaseUtility::GetFullName
                                    ((UObjectBaseUtility *)*local_378,&local_e8,(UObject *)0x0,None)
                          ;
                          UObjectBaseUtility::GetFullName
                                    ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_f8,
                                     (UObject *)0x0,None);
                          Logging::Private::BasicLog<5>
                                    ((FStaticBasicLogRecord *)
                                     &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                      ::__l46::LOG_Static,
                                     (FLogCategoryBase *)&LogLevelActorContainer);
                          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                          }
                          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                          }
                        }
                        local_308 = *(int *)(*local_378 + 0xc);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                  (&pFVar8->Cluster->MutableObjects,&local_308);
                        puVar1 = &((local_350.Context)->Stats).NumReferences;
                        *puVar1 = *puVar1 + 1;
                        puVar25 = local_370;
                        break;
                      }
                    }
                    else {
                      if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x38) & 1) ==
                          0) {
                        iVar11 = pFVar13->ClusterRootIndex;
                      }
                      else {
                        iVar11 = *(int *)(*local_378 + 0xc);
                      }
                      local_304 = iVar11;
                      if (iVar11 < 0) {
                        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                            ,0x443,L"");
                        if (bVar10) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
                        pFVar12 = FChunkedFixedUObjectArray::operator[]
                                            (&GUObjectArray.ObjObjects,iVar11);
                      }
                      pFVar14 = FUObjectClusterContainer::operator[]
                                          (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                (&pFVar8->Cluster->ReferencedClusters,&local_304);
                      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                      pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                      iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                      pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                      while( true ) {
                        if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                          local_362 = 0;
                          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(&local_362);
                        }
                        if (pFVar24 == pFVar3) break;
                        local_2d4 = *(int *)pFVar24;
                        if (local_2d4 != pFVar8->ClusterRootIndex) {
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->ReferencedClusters,&local_2d4);
                        }
                        pFVar24 = pFVar24 + 4;
                      }
                      pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                      iVar11 = (pFVar14->MutableObjects).ArrayNum;
                      pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                      while( true ) {
                        if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                          local_361 = 0;
                          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(&local_361);
                        }
                        if (pFVar24 == pFVar3) break;
                        local_300 = *(int *)pFVar24;
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar8->Cluster->MutableObjects,&local_300);
                        pFVar24 = pFVar24 + 4;
                      }
                    }
                  }
                }
LAB_147e7481a:
                puVar1 = &((local_350.Context)->Stats).NumReferences;
                *puVar1 = *puVar1 + 1;
                puVar25 = local_370;
                break;
              case 3:
                local_338 = (uint)local_378[1];
                uVar29 = (ulonglong)(int)local_338;
                plVar26 = (longlong *)*local_378;
                plVar27 = plVar26 + uVar29;
                while( true ) {
                  if ((int)local_378[1] != (int)uVar29) {
                    local_360 = 0;
                    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_360);
                  }
                  pFVar18 = local_350.Context;
                  pFVar8 = local_350.Processor;
                  puVar25 = local_370;
                  if (plVar26 == plVar27) break;
                  if (*plVar26 != 0) {
                    if ((*(uint *)(*plVar26 + 8) >> 10 & 1) != 0) {
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Object->HasAnyFlags(RF_NeedLoad)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                          ,0x74,L"");
                      if (bVar10) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                    pFVar12 = FUObjectArray::ObjectToObjectItem
                                        (&GUObjectArray,(UObjectBase *)*plVar26);
                    if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                      if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                           == 0) && (pFVar12->ClusterRootIndex == 0)) {
                        if (GUObjectArray.ObjLastNonGCIndex <
                            *(int *)&((UObject *)*plVar26)->field_0xc) {
                          bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                             (pFVar8,(UObject *)*plVar26);
                          if ((bVar10) && ((*(uint *)(*plVar26 + 8) & 0x1400) == 0)) {
                            pFVar13 = FUObjectArray::IndexToObject
                                                (&GUObjectArray,*(int *)(*plVar26 + 0xc));
                            if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) &
                                1) == 0) {
                              FActorClusterReferenceProcessor::AddObjectToCluster
                                        (pFVar8,*(int *)&((UObject *)*plVar26)->field_0xc,pFVar12,
                                         (UObject *)*plVar26,pFVar18,true);
                              goto LAB_147e74b47;
                            }
                          }
                          if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                             ((*(uint *)(*plVar26 + 8) >> 10 & 1) != 0)) {
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)*plVar26,&local_c8,(UObject *)0x0,None)
                            ;
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_d8,
                                       (UObject *)0x0,None);
                            Logging::Private::BasicLog<5>
                                      ((FStaticBasicLogRecord *)
                                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                        ::__l46::LOG_Static,
                                       (FLogCategoryBase *)&LogLevelActorContainer);
                            if (local_d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                            }
                            if (local_c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                            }
                          }
                          local_2fc = *(int *)(*plVar26 + 0xc);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                    (&pFVar8->Cluster->MutableObjects,&local_2fc);
                        }
                      }
                      else {
                        if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                            == 0) {
                          local_2f8 = pFVar12->ClusterRootIndex;
                        }
                        else {
                          local_2f8 = *(int *)(*plVar26 + 0xc);
                        }
                        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2f8);
                        pFVar14 = FUObjectClusterContainer::operator[]
                                            (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar8->Cluster->ReferencedClusters,&local_2f8);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                        pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                        iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                            local_35f = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_35f);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2f4 = *(int *)pFVar24;
                          if (local_2f4 != pFVar8->ClusterRootIndex) {
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                      (&pFVar8->Cluster->ReferencedClusters,&local_2f4);
                          }
                          pFVar24 = pFVar24 + 4;
                        }
                        pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                        iVar11 = (pFVar14->MutableObjects).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                            local_35e = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_35e);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2f0 = *(int *)pFVar24;
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->MutableObjects,&local_2f0);
                          pFVar24 = pFVar24 + 4;
                        }
                      }
                    }
                  }
LAB_147e74b47:
                  uVar29 = (ulonglong)local_338;
                  puVar1 = &((local_350.Context)->Stats).NumReferences;
                  *puVar1 = *puVar1 + 1;
                  plVar26 = plVar26 + 1;
                }
                break;
              case 4:
                uVar29 = *(ulonglong *)(puVar25 + 4);
                FVar22.Handle = uVar29 & 0xfffffffffffffffe | uVar31 & 0xff;
                local_230 = local_350.Context;
                local_228.Prev = (local_350.Context)->SchemaStack;
                local_228.Member.MemberlessId = 0;
                local_228.Member.Index = 0;
                local_228.Schema.Handle = FVar22.Handle;
                (local_350.Context)->SchemaStack = &local_228;
                uVar16 = local_378[1];
                puVar28 = (uchar *)*local_378;
                uVar29 = uVar29 & 0xfffffffffffffffe | uVar31 & 0xfe;
                if (uVar29 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!StructSchema.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                      ,0x202,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                uVar19 = *(uint *)(uVar29 - 8);
                puVar35 = puVar28 + (int)uVar16 * uVar19;
                pFVar15 = local_228.Prev;
                pFVar18 = local_230;
                if (puVar28 != puVar35) {
                  do {
                    GC::Private::
                    VisitNestedStructMembers<UE::GC::TDirectDispatcher<FActorClusterReferenceProcessor>_>
                              (&local_350,FVar22,puVar28);
                    puVar28 = puVar28 + uVar19;
                    pFVar15 = local_228.Prev;
                    pFVar18 = local_230;
                  } while (puVar28 != puVar35);
                }
                goto LAB_147e753d6;
              case 5:
                puVar1 = (uint *)(puVar25 + 4);
                puVar25 = puVar25 + 4;
                uVar19 = *puVar1 >> 0x10;
                plVar27 = (longlong *)(*local_378 + (ulonglong)(*puVar1 & 0xffff) * 8);
                plVar26 = plVar27 + uVar19 * (int)local_378[1];
                local_370 = puVar25;
                if (plVar27 != plVar26) {
                  do {
                    pFVar18 = local_350.Context;
                    pFVar8 = local_350.Processor;
                    if (*plVar27 != 0) {
                      if ((*(uint *)(*plVar27 + 8) >> 10 & 1) != 0) {
                        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!Object->HasAnyFlags(RF_NeedLoad)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                            ,0x74,L"");
                        if (bVar10) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      pFVar12 = FUObjectArray::ObjectToObjectItem
                                          (&GUObjectArray,(UObjectBase *)*plVar27);
                      if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                        if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                             == 0) && (pFVar12->ClusterRootIndex == 0)) {
                          if (GUObjectArray.ObjLastNonGCIndex <
                              *(int *)&((UObject *)*plVar27)->field_0xc) {
                            bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                               (pFVar8,(UObject *)*plVar27);
                            if ((bVar10) && ((*(uint *)(*plVar27 + 8) & 0x1400) == 0)) {
                              pFVar13 = FUObjectArray::IndexToObject
                                                  (&GUObjectArray,*(int *)(*plVar27 + 0xc));
                              if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e)
                                  & 1) == 0) {
                                FActorClusterReferenceProcessor::AddObjectToCluster
                                          (pFVar8,*(int *)&((UObject *)*plVar27)->field_0xc,pFVar12,
                                           (UObject *)*plVar27,pFVar18,true);
                                goto LAB_147e74e44;
                              }
                            }
                            if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                               ((*(uint *)(*plVar27 + 8) >> 10 & 1) != 0)) {
                              UObjectBaseUtility::GetFullName
                                        ((UObjectBaseUtility *)*plVar27,&local_a8,(UObject *)0x0,
                                         None);
                              UObjectBaseUtility::GetFullName
                                        ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_b8,
                                         (UObject *)0x0,None);
                              Logging::Private::BasicLog<5>
                                        ((FStaticBasicLogRecord *)
                                         &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                          ::__l46::LOG_Static,
                                         (FLogCategoryBase *)&LogLevelActorContainer);
                              if (local_b8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                              }
                              if (local_a8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                              }
                            }
                            local_2ec = *(int *)(*plVar27 + 0xc);
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                      (&pFVar8->Cluster->MutableObjects,&local_2ec);
                          }
                        }
                        else {
                          if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1
                              ) == 0) {
                            local_2e8 = pFVar12->ClusterRootIndex;
                          }
                          else {
                            local_2e8 = *(int *)(*plVar27 + 0xc);
                          }
                          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2e8);
                          pFVar14 = FUObjectClusterContainer::operator[]
                                              (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->ReferencedClusters,&local_2e8);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                          pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                          iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                          while( true ) {
                            if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                              local_35d = 0;
                              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                              operator()(&local_35d);
                            }
                            if (pFVar24 == pFVar3) break;
                            local_2e4 = *(int *)pFVar24;
                            if (local_2e4 != pFVar8->ClusterRootIndex) {
                              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                        (&pFVar8->Cluster->ReferencedClusters,&local_2e4);
                            }
                            pFVar24 = pFVar24 + 4;
                          }
                          pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                          iVar11 = (pFVar14->MutableObjects).ArrayNum;
                          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                          while( true ) {
                            if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                              local_35c = 0;
                              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                              operator()(&local_35c);
                            }
                            if (pFVar24 == pFVar3) break;
                            local_2e0 = *(int *)pFVar24;
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                      (&pFVar8->Cluster->MutableObjects,&local_2e0);
                            pFVar24 = pFVar24 + 4;
                          }
                        }
                      }
                    }
LAB_147e74e44:
                    plVar27 = plVar27 + uVar19;
                    puVar1 = &((local_350.Context)->Stats).NumReferences;
                    *puVar1 = *puVar1 + 1;
                    uVar31 = local_240;
                  } while (plVar27 != plVar26);
                }
                break;
              case 6:
                puVar30 = (ulonglong *)(puVar25 + 4);
                puVar25 = puVar25 + 4;
                FVar22.Handle = *puVar30 & 0xfffffffffffffffe | uVar31 & 0xff;
                uVar29 = *puVar30 & 0xfffffffffffffffe | uVar31 & 0xfe;
                if (uVar29 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!StructSchema.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                      ,0x21b,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                iVar11 = (int)local_378[1];
                local_370 = puVar25;
                if (iVar11 != *(int *)((longlong)local_378 + 0x34)) {
                  uVar19 = *(uint *)(uVar29 - 8);
                  uVar21 = 0;
                  puVar28 = (uchar *)*local_378;
                  if (0 < iVar11) {
                    uVar33 = 1;
                    do {
                      if ((int)uVar21 < (int)local_378[5]) {
                        if ((int)local_378[5] <= (int)uVar21) {
                          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                              ,0x8c4,L"");
                          if (bVar10) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                        }
                        puVar30 = local_378 + 2;
                        if ((ulonglong *)local_378[4] != (ulonglong *)0x0) {
                          puVar30 = (ulonglong *)local_378[4];
                        }
                        if ((*(uint *)((longlong)puVar30 + (ulonglong)(uVar21 >> 5) * 4) & uVar33)
                            != 0) {
                          local_210 = local_350.Context;
                          local_208.Prev = (local_350.Context)->SchemaStack;
                          local_208.Member.MemberlessId = 0;
                          local_208.Member.Index = 0;
                          (local_350.Context)->SchemaStack = &local_208;
                          local_208.Schema.Handle = FVar22.Handle;
                          GC::Private::
                          VisitNestedStructMembers<UE::GC::TDirectDispatcher<FActorClusterReferenceProcessor>_>
                                    (&local_350,FVar22,puVar28);
                          local_210->SchemaStack = local_208.Prev;
                        }
                      }
                      uVar21 = uVar21 + 1;
                      uVar33 = uVar33 << 1 | (uint)((int)uVar33 < 0);
                      puVar28 = puVar28 + uVar19;
                    } while ((int)uVar21 < iVar11);
                  }
                }
                break;
              case 7:
                pFVar12 = FWeakObjectPtr::Internal_GetObjectItem((FWeakObjectPtr *)(local_378 + 1));
                pFVar18 = local_350.Context;
                pFVar8 = local_350.Processor;
                if (pFVar12 != (FUObjectItem *)0x0) {
                  pUVar5 = (pFVar12->field1_0x8).Object;
                  if (pUVar5 != (UObjectBase *)0x0) {
                    if ((pUVar5->ObjectFlags >> 10 & 1) != 0) {
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Object->HasAnyFlags(RF_NeedLoad)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                          ,0x74,L"");
                      if (bVar10) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                    pFVar12 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar5);
                    if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                      if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                           == 0) && (pFVar12->ClusterRootIndex == 0)) {
                        if (GUObjectArray.ObjLastNonGCIndex < pUVar5->InternalIndex) {
                          bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                             (pFVar8,(UObject *)pUVar5);
                          if ((bVar10) &&
                             ((pUVar5->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) == RF_NoFlags))
                          {
                            pFVar13 = FUObjectArray::IndexToObject
                                                (&GUObjectArray,pUVar5->InternalIndex);
                            if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) &
                                1) == 0) {
                              FActorClusterReferenceProcessor::AddObjectToCluster
                                        (pFVar8,pUVar5->InternalIndex,pFVar12,(UObject *)pUVar5,
                                         pFVar18,true);
                              goto LAB_147e7582c;
                            }
                          }
                          if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                             ((pUVar5->ObjectFlags >> 10 & 1) != 0)) {
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pUVar5,&local_68,(UObject *)0x0,None);
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_78,
                                       (UObject *)0x0,None);
                            Logging::Private::BasicLog<5>
                                      ((FStaticBasicLogRecord *)
                                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                        ::__l46::LOG_Static,
                                       (FLogCategoryBase *)&LogLevelActorContainer);
                            if (local_78.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_78.Data.AllocatorInstance.Data);
                            }
                            if (local_68.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_68.Data.AllocatorInstance.Data);
                            }
                          }
                          local_2cc = pUVar5->InternalIndex;
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                    (&pFVar8->Cluster->MutableObjects,&local_2cc);
                          puVar1 = &((local_350.Context)->Stats).NumReferences;
                          *puVar1 = *puVar1 + 1;
                          puVar25 = local_370;
                          break;
                        }
                      }
                      else {
                        if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                            == 0) {
                          local_2c8 = pFVar12->ClusterRootIndex;
                        }
                        else {
                          local_2c8 = pUVar5->InternalIndex;
                        }
                        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2c8);
                        pFVar14 = FUObjectClusterContainer::operator[]
                                            (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar8->Cluster->ReferencedClusters,&local_2c8);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                        pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                        iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                            local_358 = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_358);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2c4 = *(int *)pFVar24;
                          if (local_2c4 != pFVar8->ClusterRootIndex) {
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                      (&pFVar8->Cluster->ReferencedClusters,&local_2c4);
                          }
                          pFVar24 = pFVar24 + 4;
                        }
                        pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                        iVar11 = (pFVar14->MutableObjects).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                            local_357 = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_357);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2c0 = *(int *)pFVar24;
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->MutableObjects,&local_2c0);
                          pFVar24 = pFVar24 + 4;
                        }
                      }
                    }
                  }
LAB_147e7582c:
                  puVar1 = &((local_350.Context)->Stats).NumReferences;
                  *puVar1 = *puVar1 + 1;
                  puVar25 = local_370;
                }
                break;
              case 8:
                local_338 = (uint)local_378[1];
                uVar16 = (ulonglong)(int)local_338;
                uVar29 = *local_378;
                uVar23 = uVar16 * 0x20 + uVar29;
                while( true ) {
                  if ((int)local_378[1] != (int)uVar16) {
                    local_356 = 0;
                    `TCheckedPointerIterator<FFieldPath,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_356);
                  }
                  puVar25 = local_370;
                  if (uVar29 == uVar23) break;
                  pFVar12 = FWeakObjectPtr::Internal_GetObjectItem((FWeakObjectPtr *)(uVar29 + 8));
                  pFVar18 = local_350.Context;
                  pFVar8 = local_350.Processor;
                  if (pFVar12 != (FUObjectItem *)0x0) {
                    pUVar5 = (pFVar12->field1_0x8).Object;
                    if (pUVar5 != (UObjectBase *)0x0) {
                      if ((pUVar5->ObjectFlags >> 10 & 1) != 0) {
                        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!Object->HasAnyFlags(RF_NeedLoad)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                            ,0x74,L"");
                        if (bVar10) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      pFVar12 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar5);
                      if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                        if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                             == 0) && (pFVar12->ClusterRootIndex == 0)) {
                          if (GUObjectArray.ObjLastNonGCIndex < pUVar5->InternalIndex) {
                            bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                               (pFVar8,(UObject *)pUVar5);
                            if ((bVar10) &&
                               ((pUVar5->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) == RF_NoFlags)
                               ) {
                              pFVar13 = FUObjectArray::IndexToObject
                                                  (&GUObjectArray,pUVar5->InternalIndex);
                              if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e)
                                  & 1) == 0) {
                                FActorClusterReferenceProcessor::AddObjectToCluster
                                          (pFVar8,pUVar5->InternalIndex,pFVar12,(UObject *)pUVar5,
                                           pFVar18,true);
                                goto LAB_147e75b07;
                              }
                            }
                            if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                               ((pUVar5->ObjectFlags >> 10 & 1) != 0)) {
                              UObjectBaseUtility::GetFullName
                                        ((UObjectBaseUtility *)pUVar5,&local_48,(UObject *)0x0,None)
                              ;
                              UObjectBaseUtility::GetFullName
                                        ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_58,
                                         (UObject *)0x0,None);
                              Logging::Private::BasicLog<5>
                                        ((FStaticBasicLogRecord *)
                                         &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                          ::__l46::LOG_Static,
                                         (FLogCategoryBase *)&LogLevelActorContainer);
                              if (local_58.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_58.Data.AllocatorInstance.Data);
                              }
                              if (local_48.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_48.Data.AllocatorInstance.Data);
                              }
                            }
                            local_2bc = pUVar5->InternalIndex;
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                      (&pFVar8->Cluster->MutableObjects,&local_2bc);
                          }
                        }
                        else {
                          if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1
                              ) == 0) {
                            local_2b8 = pFVar12->ClusterRootIndex;
                          }
                          else {
                            local_2b8 = pUVar5->InternalIndex;
                          }
                          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2b8);
                          pFVar14 = FUObjectClusterContainer::operator[]
                                              (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->ReferencedClusters,&local_2b8);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                          pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                          iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                          while( true ) {
                            if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                              local_355 = 0;
                              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                              operator()(&local_355);
                            }
                            if (pFVar24 == pFVar3) break;
                            local_2b4 = *(int *)pFVar24;
                            if (local_2b4 != pFVar8->ClusterRootIndex) {
                              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                        (&pFVar8->Cluster->ReferencedClusters,&local_2b4);
                            }
                            pFVar24 = pFVar24 + 4;
                          }
                          pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                          iVar11 = (pFVar14->MutableObjects).ArrayNum;
                          pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                          while( true ) {
                            if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                              local_354[0] = 0;
                              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                              operator()(local_354);
                            }
                            if (pFVar24 == pFVar3) break;
                            local_2b0 = *(int *)pFVar24;
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                      (&pFVar8->Cluster->MutableObjects,&local_2b0);
                            pFVar24 = pFVar24 + 4;
                          }
                        }
                      }
                    }
LAB_147e75b07:
                    puVar1 = &((local_350.Context)->Stats).NumReferences;
                    *puVar1 = *puVar1 + 1;
                  }
                  uVar16 = (ulonglong)local_338;
                  uVar29 = uVar29 + 0x20;
                }
                break;
              case 9:
                local_338 = (uint)local_378[1];
                plVar27 = (longlong *)*local_378;
                if (((ulonglong)plVar27 & 1) != 0) {
                  plVar27 = (longlong *)(((longlong)plVar27 >> 0x18) + (longlong)local_378);
                }
                plVar26 = plVar27 + (int)local_338;
                while( true ) {
                  if ((uint)local_378[1] != local_338) {
                    local_35b = 0;
                    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_35b);
                  }
                  pFVar18 = local_350.Context;
                  pFVar8 = local_350.Processor;
                  puVar25 = local_370;
                  if (plVar27 == plVar26) break;
                  if (*plVar27 != 0) {
                    if ((*(uint *)(*plVar27 + 8) >> 10 & 1) != 0) {
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Object->HasAnyFlags(RF_NeedLoad)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                                          ,0x74,L"");
                      if (bVar10) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                    pFVar12 = FUObjectArray::ObjectToObjectItem
                                        (&GUObjectArray,(UObjectBase *)*plVar27);
                    if (pFVar12->ClusterRootIndex != pFVar8->ClusterRootIndex) {
                      if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                           == 0) && (pFVar12->ClusterRootIndex == 0)) {
                        if (GUObjectArray.ObjLastNonGCIndex <
                            *(int *)&((UObject *)*plVar27)->field_0xc) {
                          bVar10 = FActorClusterReferenceProcessor::CanAddToCluster
                                             (pFVar8,(UObject *)*plVar27);
                          if ((bVar10) && ((*(uint *)(*plVar27 + 8) & 0x1400) == 0)) {
                            pFVar13 = FUObjectArray::IndexToObject
                                                (&GUObjectArray,*(int *)(*plVar27 + 0xc));
                            if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) &
                                1) == 0) {
                              FActorClusterReferenceProcessor::AddObjectToCluster
                                        (pFVar8,*(int *)&((UObject *)*plVar27)->field_0xc,pFVar12,
                                         (UObject *)*plVar27,pFVar18,true);
                              goto LAB_147e7514f;
                            }
                          }
                          if ((4 < (byte)LogLevelActorContainer._0_1_) &&
                             ((*(uint *)(*plVar27 + 8) >> 10 & 1) != 0)) {
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)*plVar27,&local_38,(UObject *)0x0,None)
                            ;
                            UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pFVar8->ParentLevel,&local_98,
                                       (UObject *)0x0,None);
                            Logging::Private::BasicLog<5>
                                      ((FStaticBasicLogRecord *)
                                       &`public:_void___cdecl_FActorClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                                        ::__l46::LOG_Static,
                                       (FLogCategoryBase *)&LogLevelActorContainer);
                            if (local_98.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_98.Data.AllocatorInstance.Data);
                            }
                            if (local_38.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_38.Data.AllocatorInstance.Data);
                            }
                          }
                          local_2dc = *(int *)(*plVar27 + 0xc);
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                    (&pFVar8->Cluster->MutableObjects,&local_2dc);
                        }
                      }
                      else {
                        if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x38) & 1)
                            == 0) {
                          local_2d8 = pFVar12->ClusterRootIndex;
                        }
                        else {
                          local_2d8 = *(int *)(*plVar27 + 0xc);
                        }
                        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,local_2d8);
                        pFVar14 = FUObjectClusterContainer::operator[]
                                            (&GUObjectClusters,~pFVar12->ClusterRootIndex);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar8->Cluster->ReferencedClusters,&local_2d8);
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&pFVar14->ReferencedByClusters,&pFVar8->ClusterRootIndex);
                        pFVar24 = (pFVar14->ReferencedClusters).AllocatorInstance.Data;
                        iVar11 = (pFVar14->ReferencedClusters).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->ReferencedClusters).ArrayNum != iVar11) {
                            local_35a = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_35a);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2a4 = *(int *)pFVar24;
                          if (local_2a4 != pFVar8->ClusterRootIndex) {
                            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                      (&pFVar8->Cluster->ReferencedClusters,&local_2a4);
                          }
                          pFVar24 = pFVar24 + 4;
                        }
                        pFVar24 = (pFVar14->MutableObjects).AllocatorInstance.Data;
                        iVar11 = (pFVar14->MutableObjects).ArrayNum;
                        pFVar3 = pFVar24 + (longlong)iVar11 * 4;
                        while( true ) {
                          if ((pFVar14->MutableObjects).ArrayNum != iVar11) {
                            local_359 = 0;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(&local_359);
                          }
                          if (pFVar24 == pFVar3) break;
                          local_2d0 = *(int *)pFVar24;
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&pFVar8->Cluster->MutableObjects,&local_2d0);
                          pFVar24 = pFVar24 + 4;
                        }
                      }
                    }
                  }
LAB_147e7514f:
                  puVar1 = &((local_350.Context)->Stats).NumReferences;
                  *puVar1 = *puVar1 + 1;
                  plVar27 = plVar27 + 1;
                }
                break;
              case 10:
                uVar29 = *(ulonglong *)(puVar25 + 4);
                FVar22.Handle = uVar29 & 0xfffffffffffffffe | uVar31 & 0xff;
                local_1f0 = local_350.Context;
                local_1e8.Prev = (local_350.Context)->SchemaStack;
                local_1e8.Member.MemberlessId = 0;
                local_1e8.Member.Index = 0;
                local_1e8.Schema.Handle = FVar22.Handle;
                (local_350.Context)->SchemaStack = &local_1e8;
                puVar28 = (uchar *)*local_378;
                uVar16 = local_378[1];
                if (((ulonglong)puVar28 & 1) != 0) {
                  puVar28 = (uchar *)(((longlong)puVar28 >> 0x18) + (longlong)local_378);
                }
                uVar29 = uVar29 & 0xfffffffffffffffe | uVar31 & 0xfe;
                if (uVar29 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!StructSchema.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                      ,0x202,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                uVar19 = *(uint *)(uVar29 - 8);
                puVar35 = puVar28 + (int)uVar16 * uVar19;
                pFVar15 = local_1e8.Prev;
                pFVar18 = local_1f0;
                if (puVar28 != puVar35) {
                  do {
                    GC::Private::
                    VisitNestedStructMembers<UE::GC::TDirectDispatcher<FActorClusterReferenceProcessor>_>
                              (&local_350,FVar22,puVar28);
                    puVar28 = puVar28 + uVar19;
                    pFVar15 = local_1e8.Prev;
                    pFVar18 = local_1f0;
                  } while (puVar28 != puVar35);
                }
                goto LAB_147e753d6;
              case 0xb:
                FVar22.Handle = *(ulonglong *)(puVar25 + 4) & 0xfffffffffffffffe | uVar31 & 0xff;
                uVar29 = *(ulonglong *)(puVar25 + 4) & 0xfffffffffffffffe | uVar31 & 0xfe;
                if (uVar29 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!StructSchema.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                      ,0x24b,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                local_1d0 = local_350.Context;
                bVar4 = *(byte *)((ulonglong)*(uint *)(uVar29 - 8) + (longlong)local_378);
                local_1c8.Prev = (local_350.Context)->SchemaStack;
                local_1c8.Member.MemberlessId = 0;
                local_1c8.Member.Index = 0;
                local_1c8.Schema.Handle = FVar22.Handle;
                (local_350.Context)->SchemaStack = &local_1c8;
                if (uVar29 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!StructSchema.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                      ,0x202,L"");
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                uVar19 = *(uint *)(uVar29 - 8);
                puVar30 = (ulonglong *)((ulonglong)(bVar4 * uVar19) + (longlong)local_378);
                pFVar15 = local_1c8.Prev;
                pFVar18 = local_1d0;
                if (local_378 != puVar30) {
                  do {
                    GC::Private::
                    VisitNestedStructMembers<UE::GC::TDirectDispatcher<FActorClusterReferenceProcessor>_>
                              (&local_350,FVar22,(uchar *)local_378);
                    local_378 = (ulonglong *)((longlong)local_378 + (ulonglong)uVar19);
                    pFVar15 = local_1c8.Prev;
                    pFVar18 = local_1d0;
                  } while (local_378 != puVar30);
                }
LAB_147e753d6:
                local_370 = puVar25 + 4;
                pFVar18->SchemaStack = pFVar15;
                puVar25 = local_370;
                break;
              case 0xc:
                (*(code *)**(undefined8 **)*local_378)((undefined8 *)*local_378,local_350.Collector)
                ;
                plVar27 = (longlong *)*local_378;
                if (*(char *)((longlong)plVar27 + 0x11) != '\0') {
                  if ((8 < (ulonglong)plVar27[1]) ||
                     (puVar30 = local_378 + 1, 3 < *(byte *)(plVar27 + 2))) {
                    puVar30 = (ulonglong *)local_378[1];
                  }
                  (**(code **)(*plVar27 + 8))(plVar27,puVar30,local_350.Collector);
                }
                break;
              case 0xd:
                pcVar6 = *(code **)(puVar25 + 4);
                pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&local_330->field_0xc)
                ;
                ppUVar20 = local_178;
                if (((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x31) & 1) == 0) {
                  (*pcVar6)(pUVar9,local_350.Collector);
                  ppUVar20 = local_178;
                }
                goto switchD_147e744bf_caseD_0;
              case 0xe:
                FSlowARO::CallSync(uVar19,local_330,local_350.Collector);
                ppUVar20 = local_178;
                goto switchD_147e744bf_caseD_0;
              case 0xf:
                local_370 = puVar25 + 4;
                (**(code **)(puVar25 + 4))(local_378,local_350.Collector);
                puVar25 = local_370;
                break;
              default:
                GC::Private::LogIllegalTypeFatal((EMemberType)uVar29,local_388,local_330);
                ppUVar20 = local_178;
switchD_147e744bf_caseD_0:
                local_1b0->SchemaStack = local_1a8.Prev;
                goto LAB_147e75dab;
              }
              local_268 = local_268 + 1;
              local_388 = local_388 + 1;
              pUVar34 = local_298;
            } while (local_268 != &local_240);
            puVar25 = puVar25 + 4;
          } while( true );
        }
LAB_147e75dab:
        local_290 = *(longlong *)&local_270[2]->field_0x10 + 0x1f0;
        local_270 = local_270 + 1;
      } while (local_270 != local_238);
    }
    this_02 = local_288;
    local_178 = ppUVar20;
    if (ppUVar20 != (local_280->InitialObjects).DataPtr) {
      this_02 = &local_280->ObjectsToSerialize;
      local_288 = this_02;
      FWorkBlockifier::FreeOwningBlock(this_02,ppUVar20);
    }
    iVar11 = 0x1ef;
    pFVar17 = FWorkBlockifier::PopFullBlockSync(this_02);
    if (pFVar17 == (FWorkBlock *)0x0) {
      pFVar17 = FWorkBlockifier::PopFullBlockSync(this_02);
      if (pFVar17 == (FWorkBlock *)0x0) {
        iVar11 = (int)((longlong)this_02->WipIt + (-8 - (longlong)this_02->Wip) >> 3);
        if (iVar11 == 0) {
          pFVar17 = (FWorkBlock *)0x0;
          iVar11 = 0x1ef;
        }
        else {
          pFVar17 = FWorkBlockifier::PopWipBlock(this_02);
        }
        if (pFVar17 == (FWorkBlock *)0x0) {
          FReferenceCollector::~FReferenceCollector(&local_168);
          return;
        }
      }
    }
    ppUVar20 = pFVar17->Objects;
    if (iVar11 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_188 = ppUVar20;
    iStack_180 = iVar11;
    iStack_170 = iStack_180;
    uStack_16c = uStack_17c;
  } while( true );
}

