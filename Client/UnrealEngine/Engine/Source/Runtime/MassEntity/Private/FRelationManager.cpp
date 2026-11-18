// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 23

// FRelationManager @ 1471dbc20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FRelationManager * __thiscall
UE::Mass::FRelationManager::FRelationManager(FRelationManager *this,FMassEntityManager *param_1)

{
  this->EntityManager = param_1;
  this->TypeManager = (param_1->TypeManager).Object;
  *(undefined8 *)&this->RelationsDataMap = 0;
  *(undefined8 *)&(this->RelationsDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->RelationsDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->RelationsDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->RelationsDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RelationsDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->RelationsDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RelationsDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->RelationsDataMap).field_0x48 = 0;
  return this;
}

// CreateRelationData @ 14720bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationData * __thiscall
UE::Mass::FRelationManager::CreateRelationData(FRelationManager *this,FTypeHandle param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar5;
  FTypeInfo *pFVar6;
  FRelationData *pFVar7;
  longlong *plVar8;
  FObjectKey local_res10;
  undefined1 auStackY_248 [32];
  TPairInitializer<UE::Mass::FTypeHandle_const_&,UE::Mass::FRelationData_&&> local_218;
  FObjectKey local_208;
  FObjectKey *local_200;
  undefined1 *local_1f8;
  undefined1 local_1e8 [160];
  ForAnyElementType local_148;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [160];
  ForAnyElementType local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_res10 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar5 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)&local_res10);
  pFVar7 = (FRelationData *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    pFVar7 = (FRelationData *)0x0;
  }
  if (pFVar7 != (FRelationData *)0x0) {
    local_218.Value = (FRelationData *)&local_res10;
    bVar4 = `UE::Mass::FRelationManager::CreateRelationData'::__l3::<lambda_1>::operator()
                      (&local_218.Value);
    param_1.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(TObjectKey<UStruct_const_>)local_res10;
    if (!bVar4) {
      return pFVar7;
    }
  }
  local_208 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pFVar6 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
           ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                   *)&this->TypeManager->TypeDataMap,(FTypeHandle *)&local_208);
  if ((pFVar6 == (FTypeInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RelationInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassTypeManager.h"
                         ,0x125,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FRelationData *)(*pcVar2)();
    return pFVar7;
  }
  if (((pFVar6->Traits).TypeIndex != '\x03') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FRelationData *)(*pcVar2)();
    return pFVar7;
  }
  Relations::FRelationTypeTraits::FRelationTypeTraits
            ((FRelationTypeTraits *)local_e8,(FRelationTypeTraits *)&pFVar6->Traits);
  Relations::FRelationTypeTraits::FRelationTypeTraits
            ((FRelationTypeTraits *)local_1e8,(FRelationTypeTraits *)local_e8);
  local_200 = &local_res10;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_1f8 = local_1e8;
  local_138._8_8_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Mass::FTypeHandle_const_&,UE::Mass::FRelationData_&&>_>
            ((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
              *)&this->RelationsDataMap,&local_218,(bool *)&local_200);
  local_f0 = 0;
  lVar1 = *(longlong *)&this->RelationsDataMap;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,0,local_138._8_4_);
  iVar3 = SUB84(local_138._8_8_,4);
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_1e8._80_8_ != 0) {
    plVar8 = (longlong *)(local_1e8 + 0x60);
    if ((longlong *)local_1e8._120_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_1e8._120_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_e8._80_8_ != 0) {
    plVar8 = (longlong *)(local_e8 + 0x60);
    if ((longlong *)local_e8._120_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_e8._120_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return (FRelationData *)((longlong)(int)local_218.Key * 0x120 + lVar1 + 0x10);
}

// CreateRelationInstances @ 14720c070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::CreateRelationInstances
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypeHandle param_1,TArrayView<FMassEntityHandle,int> *param_2,
          TArrayView<FMassEntityHandle,int> *param_3)

{
  FArchetypeGroupType FVar1;
  FMassEntityHandle FVar2;
  FMassEntityHandle FVar3;
  FMassEntityManager *pFVar4;
  FObjectKey FVar5;
  FMassCommandBuffer *this_00;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  DWORD DVar14;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar15;
  FMassEntityHandle *pFVar16;
  FMassEntityHandle *pFVar17;
  FMassRelationFragment *pFVar18;
  FObjectKey FVar19;
  UClass *pUVar20;
  FMassBatchedEntityCommand *pFVar21;
  FName *pFVar22;
  IEntityStorageInterface *pIVar23;
  longlong *plVar24;
  FGroupEntities *pFVar25;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar26;
  FMassBatchedEntityCommand *pFVar27;
  uint uVar28;
  FArchetypeGroupHandle FVar29;
  FObjectKey FVar30;
  TArrayView<FMassEntityHandle,int> *pTVar31;
  FMassBatchedEntityCommand *pFVar32;
  int iVar33;
  FRelationManager *pFVar34;
  int iVar35;
  FArchetypeGroupID FVar36;
  undefined1 auStackY_458 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403;
  undefined1 local_402;
  undefined1 local_401;
  StorageSelector local_400 [8];
  FRelationData *local_3f8;
  FArchetypeGroupHandle local_3f0;
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  TArrayView<FMassEntityHandle,int> *local_3d8;
  FMassEntityHandle local_3d0;
  FRelationManager *local_3c8;
  undefined1 local_3c0 [8];
  FObjectKey local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  FLLMScope local_3a8 [2];
  FMassEntityHandle local_3a0;
  undefined8 local_398;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_390;
  undefined8 local_380;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_378;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_370;
  TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> local_360;
  uint local_358;
  undefined4 uStack_354;
  FMassEntityHandle local_350;
  FMassEntityHandle local_348;
  FMassEntityHandle local_340;
  TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> local_338;
  FObjectKey local_330;
  FArchetypeGroupHandle local_328;
  FMemScope local_320;
  longlong local_318;
  TReferenceControllerBase<1> *pTStack_310;
  FMassEntityHandle *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FMassEntityHandle *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FMassEntityHandle *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FMassEntityHandle *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FMassEntityHandle *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FMassArchetypeEntityCollection *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FName local_2a8;
  FName local_2a0;
  TArrayView<FMassEntityHandle_const_,int> local_298;
  TArrayView<FMassEntityHandle_const_,int> local_288;
  TArrayView<FMassEntityHandle_const_,int> local_278;
  TArrayView<FMassEntityHandle_const_,int> local_268;
  TArrayView<FMassEntityHandle_const_,int> local_258;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_248;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_238;
  FHierarchyEntitiesContainer local_228;
  FEntityBuilder local_1c8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3d8 = param_3;
  local_3f0 = (FArchetypeGroupHandle)param_2;
  local_3c8 = this;
  local_3b8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  local_378 = __return_storage_ptr__;
  if ((param_1.TypeKey.ObjectKey.ObjectIndex == 0) &&
     (param_1.TypeKey.ObjectKey.ObjectSerialNumber == 0)) {
    local_408 = (undefined1)param_1.TypeKey.ObjectKey.ObjectSerialNumber;
    bVar9 = `UE::Mass::FRelationManager::CreateRelationInstances'::__l3::<lambda_1>::operator()
                      (&local_408);
    if (!bVar9) goto LAB_14720c163;
  }
  if (param_2->ArrayNum == 0) {
    local_407 = 0;
    bVar9 = `UE::Mass::FRelationManager::CreateRelationInstances'::__l6::<lambda_2>::operator()
                      (&local_407);
    if (!bVar9) goto LAB_14720c163;
  }
  if (param_3->ArrayNum == 0) {
    local_406 = 0;
    bVar9 = `UE::Mass::FRelationManager::CreateRelationInstances'::__l6::<lambda_3>::operator()
                      (&local_406);
    if (!bVar9) goto LAB_14720c163;
  }
  if (param_3->ArrayNum != param_2->ArrayNum) {
    if (AITestSuite::TestsInProgress < 1) {
      ``UE::Mass::FRelationManager::CreateRelationInstances'::__l6::<lambda_4>::operator()'::__l16::
      <lambda_1>::operator()(local_3c0);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Relation_Object_15157e680,
                 (FLogCategoryBase *)&LogTestableEnsures);
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
LAB_14720c163:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_3f8 = GetRelationDataChecked(this,param_1);
  iVar35 = param_2->ArrayNum;
  pFVar32 = (FMassBatchedEntityCommand *)0x0;
  uVar11 = 0;
  FVar29 = (FArchetypeGroupHandle)param_2;
  if (0 < iVar35) {
    iVar33 = iVar35 + -1;
    pFVar27 = pFVar32;
    pFVar21 = pFVar32;
    do {
      uVar12 = (uint)pFVar27;
      uVar13 = uVar11;
      if ((int)uVar12 < local_3d8->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar15;
      }
      local_3d0 = *(FMassEntityHandle *)
                   ((longlong)&pFVar21->_padding_ + (longlong)local_3d8->DataPtr);
      uVar13 = uVar11;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar15;
      }
      bVar9 = true;
      local_3a0 = *(FMassEntityHandle *)((longlong)&pFVar21->_padding_ + (longlong)param_2->DataPtr)
      ;
      if ((local_3a0.Index == 0) || (local_3a0.SerialNumber == 0)) {
        if (AITestSuite::TestsInProgress < 1) {
          if ((local_3a0.Index == 0) || (local_3a0.SerialNumber == 0)) {
            local_404 = 0;
            ``UE::Mass::FRelationManager::CreateRelationInstances'::__l11::<lambda_5>::operator()'::
            __l16::<lambda_1>::operator()(&local_404);
          }
        }
        else if (2 < (byte)LogTestableEnsures._0_1_) {
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Relation_needs__15157e738,
                     (FLogCategoryBase *)&LogTestableEnsures);
        }
LAB_14720c30b:
        bVar9 = false;
      }
      else if ((local_3d0.Index == 0) || (local_3d0.SerialNumber == 0)) {
        if (AITestSuite::TestsInProgress < 1) {
          if ((local_3d0.Index == 0) || (local_3d0.SerialNumber == 0)) {
            local_405 = 0;
            ``UE::Mass::FRelationManager::CreateRelationInstances'::__l11::<lambda_6>::operator()'::
            __l16::<lambda_1>::operator()(&local_405);
          }
        }
        else if (2 < (byte)LogTestableEnsures._0_1_) {
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Relation_needs__15157e7e8,
                     (FLogCategoryBase *)&LogTestableEnsures);
        }
        goto LAB_14720c30b;
      }
      if ((local_3f8->Traits).bHierarchical != false) {
        if (local_3a0.Index == local_3d0.Index) {
          if (local_3a0.SerialNumber == local_3d0.SerialNumber) {
            if (AITestSuite::TestsInProgress < 1) {
              if (local_3a0.SerialNumber == local_3d0.SerialNumber) {
                local_403 = 0;
                ``UE::Mass::FRelationManager::CreateRelationInstances'::__l14::<lambda_7>::
                operator()'::__l16::<lambda_1>::operator()(&local_403);
              }
            }
            else if (2 < (byte)LogTestableEnsures._0_1_) {
              Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Hierarchical_re_15157e898,
                         (FLogCategoryBase *)&LogTestableEnsures);
            }
            bVar9 = false;
          }
        }
      }
      bVar10 = IsSubjectOfRelation(local_3c8,local_3f8,local_3a0,local_3d0);
      if (bVar10) {
        if (AITestSuite::TestsInProgress < 1) {
          bVar9 = IsSubjectOfRelation(local_3c8,local_3f8,local_3a0,local_3d0);
          if (bVar9) {
            local_402 = 0;
            ``UE::Mass::FRelationManager::CreateRelationInstances'::__l17::<lambda_8>::operator()'::
            __l16::<lambda_1>::operator()(&local_402);
          }
        }
        else if (2 < (byte)LogTestableEnsures._0_1_) {
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Relation_betwee_15157e9b0,
                     (FLogCategoryBase *)&LogTestableEnsures);
        }
LAB_14720c3b5:
        if ((int)(uVar12 + 1) < iVar35) {
          pFVar16 = TArrayView<FMassEntityHandle,int>::operator[](local_3d8,iVar33);
          pFVar17 = TArrayView<FMassEntityHandle,int>::operator[](local_3d8,uVar12);
          FVar2 = *pFVar17;
          *pFVar17 = *pFVar16;
          *pFVar16 = FVar2;
          pFVar16 = TArrayView<FMassEntityHandle,int>::operator[](param_2,iVar33);
          pFVar17 = TArrayView<FMassEntityHandle,int>::operator[](param_2,uVar12);
          FVar2 = *pFVar17;
          *pFVar17 = *pFVar16;
          *pFVar16 = FVar2;
        }
        iVar35 = iVar35 + -1;
        iVar33 = iVar33 + -1;
      }
      else {
        if (!bVar9) goto LAB_14720c3b5;
        pFVar27 = (FMassBatchedEntityCommand *)(ulonglong)(uVar12 + 1);
        pFVar21 = (FMassBatchedEntityCommand *)&pFVar21->_padding_;
      }
      param_1.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(TObjectKey<UStruct_const_>)local_3b8;
      FVar29 = local_3f0;
      param_3 = local_3d8;
      this = local_3c8;
    } while ((int)pFVar27 < iVar35);
  }
  if (iVar35 == 0) {
    (local_378->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_378->ArrayNum = 0;
    local_378->ArrayMax = 0;
    return local_378;
  }
  if (iVar35 != *(int *)((longlong)FVar29 + 8)) {
    local_3b8 = (FObjectKey)TArrayView<FMassEntityHandle,int>::operator[](param_3,0);
    iStack_3b0 = iVar35;
    if ((iVar35 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar15;
    }
    param_3->DataPtr = (FMassEntityHandle *)local_3b8;
    *(ulonglong *)&param_3->ArrayNum = CONCAT44(uStack_3ac,iStack_3b0);
    local_3b8 = (FObjectKey)
                TArrayView<FMassEntityHandle,int>::operator[]
                          ((TArrayView<FMassEntityHandle,int> *)FVar29,0);
    iStack_3b0 = iVar35;
    if ((iVar35 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar15;
    }
    *(FObjectKey *)FVar29 = local_3b8;
    *(ulonglong *)((longlong)FVar29 + 8) = CONCAT44(uStack_3ac,iStack_3b0);
  }
  TSharedFromThis<FMassEntityManager,1>::AsShared
            ((TSharedFromThis<FMassEntityManager,1> *)&this->EntityManager->_padding_,
             &local_1c8.EntityManager);
  local_1c8.EntityHandle.Index = 0;
  local_1c8.EntityHandle.SerialNumber = 0;
  local_1c8.Composition.Fragments._16_8_ = 0;
  local_1c8.CachedArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  local_1c8.CachedArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_1c8.Composition.Fragments._24_4_ = 0;
  local_1c8.Composition.Fragments._28_4_ = 0x80;
  local_1c8.Composition.Tags._16_8_ = 0;
  local_1c8.Composition.Tags._24_4_ = 0;
  local_1c8.Composition.Tags._28_4_ = 0x80;
  local_1c8.Composition.ChunkFragments._16_8_ = 0;
  local_1c8.Composition.ChunkFragments._24_4_ = 0;
  local_1c8.Composition.ChunkFragments._28_4_ = 0x80;
  local_1c8.Composition.SharedFragments._16_8_ = 0;
  local_1c8.Composition.SharedFragments._24_4_ = 0;
  local_1c8.Composition.SharedFragments._28_4_ = 0x80;
  local_1c8.Composition.ConstSharedFragments._16_8_ = 0;
  local_1c8.Composition.ConstSharedFragments._24_4_ = 0;
  local_1c8.Composition.ConstSharedFragments._28_4_ = 0x80;
  local_1c8.CachedSharedFragmentValues.HashCache = 0xffffffff;
  local_1c8.CachedSharedFragmentValues.bSorted = true;
  local_1c8.CachedSharedFragmentValues.SharedFragmentBitSet._16_8_ = 0;
  local_1c8.CachedSharedFragmentValues.SharedFragmentBitSet._24_4_ = 0;
  local_1c8.CachedSharedFragmentValues.SharedFragmentBitSet._28_4_ = 0x80;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragmentBitSet._16_8_ = 0;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragmentBitSet._24_4_ = 0;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragmentBitSet._28_4_ = 0x80;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragments.ArrayNum = 0;
  local_1c8.CachedSharedFragmentValues.ConstSharedFragments.ArrayMax = 0;
  local_1c8.CachedSharedFragmentValues.SharedFragments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.CachedSharedFragmentValues.SharedFragments.ArrayNum = 0;
  local_1c8.CachedSharedFragmentValues.SharedFragments.ArrayMax = 0;
  local_1c8.ArchetypeCreationParams.ChunkMemorySize = 0;
  local_1c8.ArchetypeCreationParams.DebugName.ComparisonIndex.Value = 0;
  local_1c8.ArchetypeCreationParams.DebugName.Number = 0;
  local_1c8.ArchetypeCreationParams.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  local_1c8.Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Fragments.ArrayNum = 0;
  local_1c8.Fragments.ArrayMax = 0;
  local_1c8.SharedFragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.SharedFragments.ArrayNum = 0;
  local_1c8.SharedFragments.ArrayMax = 0;
  local_1c8.ConstSharedFragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ConstSharedFragments.ArrayNum = 0;
  local_1c8.ConstSharedFragments.ArrayMax = 0;
  local_1c8.RelationsParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.RelationsParams.ArrayNum = 0;
  local_1c8.RelationsParams.ArrayMax = 0;
  local_1c8.State = Empty;
  pFVar18 = FEntityBuilder::Add_GetRef<FMassRelationFragment>(&local_1c8);
  local_330 = (FObjectKey)param_1.TypeKey.ObjectKey;
  FVar19 = (FObjectKey)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_330);
  if (FVar19 == (FObjectKey)0x0) {
LAB_14720d2db:
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar33 = (int)pUVar20->_padding_;
  if ((*(int *)(*(longlong *)((longlong)FVar19 + 0x10) + 0x38) < iVar33) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)((longlong)FVar19 + 0x10) + 0x30) + (longlong)iVar33 * 8) !=
      &pUVar20->_padding_)) goto LAB_14720d2db;
  FEntityBuilder::Add(&local_1c8,(TNotNull<UScriptStruct_const_*>)FVar19);
  FMassObserverManager::GetOrMakeObserverLock(&local_3c8->EntityManager->ObserverManager,&local_238)
  ;
  FVar29 = local_3f0;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  pFVar27 = pFVar32;
  if (0 < iVar35) {
    do {
      local_3b8 = FVar19;
      pTVar31 = local_3d8;
      uVar28 = (uint)pFVar27;
      uVar12 = local_3d8->ArrayNum - 1;
      uVar13 = uVar28;
      if ((int)uVar12 < (int)uVar28) {
        uVar13 = uVar12;
      }
      uVar12 = uVar11;
      if ((int)uVar13 < local_3d8->ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar15;
      }
      iVar33 = *(int *)((longlong)FVar29 + 8);
      FVar2 = pTVar31->DataPtr[(int)uVar13];
      uVar12 = iVar33 - 1;
      uVar13 = uVar28;
      if ((int)uVar12 < (int)uVar28) {
        uVar13 = uVar12;
      }
      uVar12 = uVar11;
      if ((int)uVar13 < iVar33) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar15;
      }
      FVar3 = *(FMassEntityHandle *)(*(longlong *)FVar29 + (longlong)(int)uVar13 * 8);
      pFVar18->Subject = FVar3;
      pFVar18->Object = FVar2;
      FEntityBuilder::Commit(&local_1c8);
      if (local_1c8.State == Committed) {
LAB_14720c846:
        local_1c8.EntityHandle.Index = 0;
        local_1c8.EntityHandle.SerialNumber = 0;
        local_1c8.State = ReadyToCommit;
      }
      else {
        local_401 = 0;
        bVar9 = `UE::Mass::FEntityBuilder::Reprepare'::__l3::<lambda_1>::operator()(&local_401);
        if (bVar9) goto LAB_14720c846;
      }
      if (((local_3e8.Data <= (FScriptContainerElement *)&local_398) &&
          ((FScriptContainerElement *)&local_398 <
           local_3e8.Data + (longlong)(int)local_3e0._4_4_ * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar15;
      }
      uVar13 = (uint)local_3e0;
      if ((uint)local_3e0 == local_3e0._4_4_) {
        uVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_3e8,(int *)((longlong)&local_3e0 + 4));
      }
      iVar33 = uVar13 + 1;
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar33);
      *(undefined8 *)(local_3e8.Data + (longlong)(int)uVar13 * 8) = local_398;
      uVar12 = uVar11;
      if ((int)uVar13 < iVar33) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        iVar33 = (uint)local_3e0;
      }
      pFVar34 = local_3c8;
      pFVar4 = local_3c8->EntityManager;
      local_350 = *(FMassEntityHandle *)(local_3e8.Data + (longlong)(iVar33 + -1) * 8);
      local_348 = FVar3;
      local_340 = FVar2;
      Relations::Private::HandleRole
                (pFVar4,local_3f8,&local_348,Object,&local_340,&local_350,&local_370);
      Relations::Private::HandleRole
                (pFVar4,local_3f8,&local_340,Subject,&local_348,&local_350,&local_370);
      FVar19 = local_3b8;
      pFVar27 = (FMassBatchedEntityCommand *)(ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < iVar35);
    if (local_370.ArrayNum != 0) {
      FMassCommandBuffer::DestroyEntities
                ((pFVar34->EntityManager->DeferredCommandBuffers).Elements
                 [pFVar34->EntityManager->OpenedCommandBufferIndex].Object,&local_370);
    }
  }
  pFVar34 = local_3c8;
  FVar5 = (FObjectKey)(local_3f8->Traits).RoleTraits.Elements[0].Element;
  FVar30 = FVar19;
  if (FVar5 != (FObjectKey)0x0) {
    FVar30 = FVar5;
  }
  FVar5 = *(FObjectKey *)((local_3f8->Traits).RoleTraits.Elements + 1);
  if (FVar5 != (FObjectKey)0x0) {
    FVar19 = FVar5;
  }
  if ((int)local_3c8->EntityManager->ProcessingScopeCount < 1) {
    local_2e8 = local_3d8->DataPtr;
    iStack_2e0 = local_3d8->ArrayNum;
    local_278._12_4_ = uStack_2dc;
    local_278.ArrayNum = iStack_2e0;
    local_278.DataPtr = local_2e8;
    FMassEntityManager::AddElementToEntities
              (local_3c8->EntityManager,&local_278,(TNotNull<UScriptStruct_const_*>)FVar19);
    FVar29 = local_3f0;
    local_2d8 = *(FMassEntityHandle **)local_3f0;
    iStack_2d0 = *(int *)((longlong)local_3f0 + 8);
    local_268._12_4_ = uStack_2cc;
    local_268.ArrayNum = iStack_2d0;
    local_268.DataPtr = local_2d8;
    FMassEntityManager::AddElementToEntities
              (pFVar34->EntityManager,&local_268,(TNotNull<UScriptStruct_const_*>)FVar30);
    pTVar31 = local_3d8;
  }
  else {
    pFVar21 = ::operator_new(0x38);
    pFVar27 = pFVar32;
    if (pFVar21 != (FMassBatchedEntityCommand *)0x0) {
      pFVar22 = ::FName::FName(&local_2a8,L"AddElement");
      *(FName *)((longlong)&pFVar21->_padding_ + 4) = *pFVar22;
      *(undefined2 *)&pFVar21->_padding_ = 0x200;
      pFVar21->EntitiesAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
      (pFVar21->TargetEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar21->TargetEntities).ArrayNum = 0;
      (pFVar21->TargetEntities).ArrayMax = 0;
      pFVar21[1]._padding_ = (longlong)FVar30;
      pFVar21->_padding_ = (longlong)&___7FMassCommandAddElement__6B_;
      pFVar27 = pFVar21;
    }
    FVar29 = local_3f0;
    local_308 = *(FMassEntityHandle **)local_3f0;
    iStack_300 = *(int *)((longlong)local_3f0 + 8);
    local_298._12_4_ = uStack_2fc;
    local_298.ArrayNum = iStack_300;
    local_298.DataPtr = local_308;
    FMassBatchedEntityCommand::Add(pFVar27,&local_298);
    if (FVar19 != FVar30) {
      local_338.Ptr = (FMassBatchedCommand *)pFVar27;
      FMassCommandBuffer::PushUniqueCommand
                ((pFVar34->EntityManager->DeferredCommandBuffers).Elements
                 [pFVar34->EntityManager->OpenedCommandBufferIndex].Object,&local_338);
      if ((FMassBatchedEntityCommand *)local_338.Ptr != (FMassBatchedEntityCommand *)0x0) {
        (**(code **)(local_338.Ptr)->_padding_)(local_338.Ptr,1);
      }
      pFVar21 = ::operator_new(0x38);
      pFVar27 = pFVar32;
      if (pFVar21 != (FMassBatchedEntityCommand *)0x0) {
        pFVar22 = ::FName::FName(&local_2a0,L"AddElement");
        *(FName *)((longlong)&pFVar21->_padding_ + 4) = *pFVar22;
        *(undefined2 *)&pFVar21->_padding_ = 0x200;
        pFVar21->EntitiesAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
        (pFVar21->TargetEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar21->TargetEntities).ArrayNum = 0;
        (pFVar21->TargetEntities).ArrayMax = 0;
        pFVar21[1]._padding_ = (longlong)FVar19;
        pFVar21->_padding_ = (longlong)&___7FMassCommandAddElement__6B_;
        pFVar27 = pFVar21;
      }
    }
    pTVar31 = local_3d8;
    local_2f8 = local_3d8->DataPtr;
    iStack_2f0 = local_3d8->ArrayNum;
    local_288._12_4_ = uStack_2ec;
    local_288.ArrayNum = iStack_2f0;
    local_288.DataPtr = local_2f8;
    FMassBatchedEntityCommand::Add(pFVar27,&local_288);
    local_360.Ptr = (FMassBatchedCommand *)pFVar27;
    FMassCommandBuffer::PushUniqueCommand
              ((pFVar34->EntityManager->DeferredCommandBuffers).Elements
               [pFVar34->EntityManager->OpenedCommandBufferIndex].Object,&local_360);
    if ((FMassBatchedEntityCommand *)local_360.Ptr != (FMassBatchedEntityCommand *)0x0) {
      (**(code **)(local_360.Ptr)->_padding_)(local_360.Ptr,1);
    }
  }
  if ((local_3f8->Traits).bHierarchical != false) {
    FVar36.ID = 0xffffffff;
    local_228.ContainerPerLevel.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ContainerPerLevel.ArrayNum = 0;
    local_228.ContainerPerLevel.ArrayMax = 0;
    local_228.ExistingElements.Elements._0_8_ = 0;
    local_228.ExistingElements.Elements._8_8_ = 0;
    local_228.ExistingElements.Elements._32_8_ = 0;
    local_228.ExistingElements.Elements._40_4_ = 0;
    local_228.ExistingElements.Elements._44_4_ = 0x80;
    local_228.ExistingElements.Elements._48_4_ = 0xffffffff;
    local_228.ExistingElements.Elements._52_4_ = 0;
    local_228.ExistingElements.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_228.ExistingElements.HashSize = 0;
    if (0 < *(int *)((longlong)FVar29 + 8)) {
      do {
        uVar28 = (uint)pFVar32;
        uVar12 = pTVar31->ArrayNum - 1;
        uVar13 = uVar28;
        if ((int)uVar12 < (int)uVar28) {
          uVar13 = uVar12;
        }
        uVar12 = uVar11;
        if ((int)uVar13 < pTVar31->ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        FVar2 = pTVar31->DataPtr[(int)uVar13];
        uVar12 = *(int *)((longlong)FVar29 + 8) - 1;
        uVar13 = uVar28;
        if ((int)uVar12 < (int)uVar28) {
          uVar13 = uVar12;
        }
        uVar12 = uVar11;
        if ((int)uVar13 < *(int *)((longlong)FVar29 + 8)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        pFVar4 = pFVar34->EntityManager;
        FVar3 = *(FMassEntityHandle *)(*(longlong *)FVar29 + (longlong)(int)uVar13 * 8);
        uVar13 = (local_3f8->Traits).RegisteredGroupType.Identifier;
        bVar9 = FMassEntityManager::IsEntityValid(pFVar4,FVar2);
        if (bVar9) {
          local_400[0] = (StorageSelector)0x0;
          pIVar23 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                      ::__l2::Invokers[(pFVar4->EntityStorage).TypeIndex])
                              (local_400,&pFVar4->EntityStorage);
          plVar24 = (longlong *)
                    (**(code **)((longlong)*pIVar23 + 0x20))(pIVar23,(ulonglong)FVar2 & 0xffffffff);
          pTStack_310 = (TReferenceControllerBase<1> *)plVar24[1];
          local_318 = *plVar24;
          if (pTStack_310 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_310->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_310->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        else {
          local_318 = 0;
          pTStack_310 = (TReferenceControllerBase<1> *)0x0;
        }
        lVar8 = local_318;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_310);
        if (lVar8 == 0) {
LAB_14720ce37:
          uStack_354 = 0;
          local_358 = (local_3f8->Traits).RegisteredGroupType.Identifier;
          local_380 = (ulonglong)local_358;
        }
        else {
          if (((int)uVar13 < 0) || (*(int *)(lVar8 + 0x298) <= (int)uVar13)) {
LAB_14720ce1c:
            iVar35 = -1;
          }
          else {
            lVar26 = lVar8 + 0x280;
            if (*(longlong *)(lVar8 + 0x290) != 0) {
              lVar26 = *(longlong *)(lVar8 + 0x290);
            }
            uVar12 = uVar13;
            if ((int)uVar13 < 0) {
              uVar12 = uVar13 + 0x1f;
            }
            if ((*(uint *)(lVar26 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar13 & 0x1f) & 1) == 0)
            goto LAB_14720ce1c;
            iVar35 = *(int *)(*(longlong *)(lVar8 + 0x270) + (longlong)(int)uVar13 * 8);
          }
          local_380 = CONCAT44(iVar35,uVar13);
          if ((uVar13 == 0xffffffff) || (iVar35 == -1)) goto LAB_14720ce37;
        }
        uVar13 = (uint)(local_380 >> 0x20);
        if (uVar13 < FVar36.ID) {
          FVar36.ID = uVar13;
        }
        FHierarchyEntitiesContainer::StoreUnique(&local_228,uVar13,FVar2);
        FHierarchyEntitiesContainer::StoreUnique(&local_228,uVar13 + 1,FVar3);
        pFVar34 = local_3c8;
        GatherHierarchy(local_3c8,local_3f8,FVar3,&local_228,uVar13 + 2);
        pFVar32 = (FMassBatchedEntityCommand *)(ulonglong)(uVar28 + 1);
        FVar29 = local_3f0;
        pTVar31 = local_3d8;
      } while ((int)(uVar28 + 1) < *(int *)((longlong)local_3f0 + 8));
    }
    pvVar7 = ThreadLocalStoragePointer;
    if ((int)pFVar34->EntityManager->ProcessingScopeCount < 1) {
      if (FVar36.ID < (uint)local_228.ContainerPerLevel.ArrayNum) {
        do {
          local_3f0.GroupID.ID = FVar36.ID;
          local_3f0.GroupType.Identifier = (local_3f8->Traits).RegisteredGroupType.Identifier;
          local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar13 = uVar11;
          if ((int)FVar36.ID < local_228.ContainerPerLevel.ArrayNum) {
            uVar13 = ~FVar36.ID >> 0x1f;
          }
          local_390.ArrayNum = 0;
          local_390.ArrayMax = 0;
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar15;
          }
          local_2c8 = *(FMassEntityHandle **)
                       &local_228.ContainerPerLevel.AllocatorInstance.Data
                        [(longlong)(int)FVar36.ID * 0x10].field_0x0;
          iVar35 = *(int *)(local_228.ContainerPerLevel.AllocatorInstance.Data +
                            (longlong)(int)FVar36.ID * 0x10 + 8);
          if ((iVar35 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar15;
          }
          local_258._12_4_ = uStack_2bc;
          local_258.ArrayNum = iVar35;
          local_258.DataPtr = local_2c8;
          iStack_2c0 = iVar35;
          Utils::CreateEntityCollections
                    (pFVar34->EntityManager,&local_258,FoldDuplicates,&local_390);
          iVar35 = local_390.ArrayNum;
          pFVar4 = pFVar34->EntityManager;
          local_2b8 = (FMassArchetypeEntityCollection *)local_390.AllocatorInstance.Data;
          if ((local_390.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar15;
          }
          iStack_2b0 = iVar35;
          local_248._12_4_ = uStack_2ac;
          local_248.ArrayNum = iVar35;
          local_248.DataPtr = local_2b8;
          FMassEntityManager::BatchGroupEntities(pFVar4,local_3f0,&local_248);
          DestructItems<FMassArchetypeEntityCollection,int>
                    ((FMassArchetypeEntityCollection *)local_390.AllocatorInstance.Data,
                     local_390.ArrayNum);
          if ((FMassArchetypeEntityCollection *)local_390.AllocatorInstance.Data !=
              (FMassArchetypeEntityCollection *)0x0) {
            FMemory::Free(local_390.AllocatorInstance.Data);
          }
          FVar36.ID = FVar36.ID + 1;
        } while (FVar36.ID < (uint)local_228.ContainerPerLevel.ArrayNum);
      }
    }
    else if (FVar36.ID < (uint)local_228.ContainerPerLevel.ArrayNum) {
      do {
        FVar1.Identifier = (local_3f8->Traits).RegisteredGroupType.Identifier;
        local_3f0.GroupID.ID = FVar36.ID;
        local_3f0.GroupType.Identifier = FVar1.Identifier;
        this_00 = (pFVar34->EntityManager->DeferredCommandBuffers).Elements
                  [pFVar34->EntityManager->OpenedCommandBufferIndex].Object;
        uVar13 = uVar11;
        if ((int)FVar36.ID < local_228.ContainerPerLevel.ArrayNum) {
          uVar13 = ~FVar36.ID >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                  (local_228.ContainerPerLevel.AllocatorInstance.Data +
                  (longlong)(int)FVar36.ID * 0x10);
        if ((this_00->bIsFlushing != false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsFlushing() == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                               ,0x77,
                               L"Trying to push commands is not supported while the given buffer is being flushed"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        DVar14 = GetCurrentThreadId();
        if ((this_00->OwnerThreadId != DVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                               ,0x77,
                               L"Commands can be pushed only in the same thread where the command buffer was created."
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        if ((*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                          ::__l2::LLMScope_Name122,L"Mass/PushCommand");
          _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FLLMScope::FLLMScope
                  (local_3a8,
                   `public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                   ::__l2::LLMScope_Name122,false,None,Default,true);
        FMemScope::FMemScope
                  (&local_320,
                   &`public:_void___cdecl_FMassCommandBuffer::PushCommand<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(UE::Mass::FArchetypeGroupHandle&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name122,true);
        local_328 = local_3f0;
        pFVar25 = FMassCommandBuffer::CreateOrAddCommand<UE::Mass::Command::FGroupEntities>(this_00)
        ;
        this_01 = TMapBase<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UE::Mass::FArchetypeGroupHandle_const_&>
                            ((TMapBase<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
                              *)&pFVar25->Groups,
                             (FVar1.Identifier | FVar36.ID >> 0x1f) * 0x17 + FVar36.ID,&local_328);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(this_01,pTVar15);
        this_00->ActiveCommandsCounter = this_00->ActiveCommandsCounter + 1;
        FMemScope::~FMemScope(&local_320);
        FLLMScope::~FLLMScope(local_3a8);
        FVar36.ID = FVar36.ID + 1;
      } while (FVar36.ID < (uint)local_228.ContainerPerLevel.ArrayNum);
    }
    local_228.ExistingElements.HashSize = 0;
    if (local_228.ExistingElements.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_228.ExistingElements.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FMassEntityHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMassEntityHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_228.ExistingElements.Elements);
    DestructItems<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
               local_228.ContainerPerLevel.AllocatorInstance.Data,
               local_228.ContainerPerLevel.ArrayNum);
    if ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
        local_228.ContainerPerLevel.AllocatorInstance.Data !=
        (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_228.ContainerPerLevel.AllocatorInstance.Data);
      goto LAB_14720d27e;
    }
  }
  (local_378->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14720d27e:
  pTVar15 = local_378;
  (local_378->AllocatorInstance).Data = local_3e8.Data;
  local_378->ArrayNum = (uint)local_3e0;
  local_378->ArrayMax = local_3e0._4_4_;
  local_3e0 = 0;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  FEntityBuilder::~FEntityBuilder(&local_1c8);
  return pTVar15;
}

// DestroyRelationInstance @ 147212570

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::DestroyRelationInstance
          (FRelationManager *this,FTypeHandle param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  FMassEntityHandle FVar4;
  bool bVar5;
  undefined1 uVar6;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  int local_res10;
  int iStackX_14;
  FMassEntityHandle local_res18;
  FObjectKey local_38 [2];
  
  local_res18 = param_2;
  local_38[0] = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar7 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)local_38);
  if ((pTVar7 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((pTVar7->field_0x3a == '\0') && (pTVar7->field_0x4a == '\0')) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3784697294012547407>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                         ,0x14f,
                         "RelationData.Traits.RoleTraits[0].RequiresExternalMapping != EExternalMappingRequired::No || RelationData.Traits.RoleTraits[1].RequiresExternalMapping != EExternalMappingRequired::No"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                   *)&pTVar7->field_0xc0,&local_res18);
  puVar9 = &pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  if (puVar9 != (undefined1 *)0x0) {
    puVar10 = *(undefined8 **)(puVar9 + 0x10);
    iVar2 = *(int *)(puVar9 + 0x18);
    puVar1 = puVar10 + iVar2;
    while( true ) {
      if (*(int *)(puVar9 + 0x18) != iVar2) {
        `TCheckedPointerIterator<FMassRelationRoleInstanceHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar10 == puVar1) break;
      if (((uint)((ulonglong)*puVar10 >> 0x20) & 0x3fffffff) == param_3.Index) {
        FMassEntityManager::CreateEntityIndexHandle(this->EntityManager,(int)&local_res10);
        FVar4.SerialNumber = iStackX_14;
        FVar4.Index = local_res10;
        if ((local_res10 != 0) && (iStackX_14 != 0)) {
          FMassEntityManager::DestroyEntity(this->EntityManager,FVar4);
          return true;
        }
      }
      puVar10 = puVar10 + 1;
    }
  }
  return false;
}

// DestroyRelationInstance @ 1472126c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::DestroyRelationInstance
          (FRelationManager *this,FMassRelationRoleInstanceHandle param_1)

{
  FMassEntityHandle FVar1;
  int local_res8;
  int iStackX_c;
  
  FMassEntityManager::CreateEntityIndexHandle(this->EntityManager,(int)&local_res8);
  FVar1.SerialNumber = iStackX_c;
  FVar1.Index = local_res8;
  if ((local_res8 != 0) && (iStackX_c != 0)) {
    FMassEntityManager::DestroyEntity(this->EntityManager,FVar1);
    return true;
  }
  return false;
}

// GatherHierarchy @ 14721db60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall
UE::Mass::FRelationManager::GatherHierarchy
          (FRelationManager *this,FRelationData *param_1,FMassEntityHandle param_2,
          FHierarchyEntitiesContainer *param_3,uint param_4)

{
  FMassEntityHandle *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res8 [8];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_38;
  
  FRelationData::GetParticipants(param_1,&local_38,this->EntityManager,param_2,Subject);
  if (0 < local_38.ArrayNum) {
    FHierarchyEntitiesContainer::StoreUnique(param_3,param_4,&local_38);
    iVar2 = local_38.ArrayNum;
    pFVar1 = (FMassEntityHandle *)
             (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8);
    FVar3.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if ((FMassEntityHandle *)FVar3.Data == pFVar1) break;
      GatherHierarchy(this,param_1,*(FMassEntityHandle *)FVar3.Data,param_3,param_4 + 1);
      FVar3.Data = FVar3.Data + 8;
    }
  }
  if ((FMassEntityHandle *)local_38.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetRelationDataChecked @ 1472255b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationData * __thiscall
UE::Mass::FRelationManager::GetRelationDataChecked(FRelationManager *this,FTypeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar3;
  FRelationData *pFVar4;
  FObjectKey local_res10 [3];
  
  local_res10[0] = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar3 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)local_res10);
  if (pTVar3 != (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    return (FRelationData *)&pTVar3->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRelationData *)(*pcVar1)();
    return pFVar4;
  }
  return (FRelationData *)&DAT_00000010;
}

// GetRelationEntities @ 147225610

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRelationEntities
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FMassRelationRoleInstanceHandle_const_,int> *param_1)

{
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetRelationEntities(this,&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRelationEntities @ 147225650

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FRelationManager::GetRelationEntities
          (FRelationManager *this,TArrayView<FMassRelationRoleInstanceHandle_const_,int> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FMassRelationRoleInstanceHandle *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMassRelationRoleInstanceHandle *pFVar7;
  uint uVar8;
  undefined8 local_28 [2];
  
  iVar6 = param_1->ArrayNum;
  uVar8 = iVar6 + param_2->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pFVar7 = param_1->DataPtr;
  pFVar2 = pFVar7 + iVar6;
  while( true ) {
    if (pFVar7 == pFVar2) {
      return;
    }
    FMassEntityManager::CreateEntityIndexHandle(this->EntityManager,(int)local_28);
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,piVar1);
    }
    pFVar7 = pFVar7 + 1;
    param_2->ArrayNum = iVar6 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetRelationObjects @ 1472257e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRelationObjects
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRelationData *param_1,FMassEntityHandle param_2)

{
  FRelationData::GetParticipants(param_1,__return_storage_ptr__,this->EntityManager,param_2,Object);
  return __return_storage_ptr__;
}

// GetRelationSubjects @ 147225810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRelationSubjects
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRelationData *param_1,FMassEntityHandle param_2)

{
  FRelationData::GetParticipants(param_1,__return_storage_ptr__,this->EntityManager,param_2,Subject)
  ;
  return __return_storage_ptr__;
}

// GetRoleEntities @ 147226c60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRoleEntities
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FMassRelationRoleInstanceHandle_const_,int> *param_1)

{
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetRoleEntities(this,&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRoleEntities @ 147226ca0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FRelationManager::GetRoleEntities
          (FRelationManager *this,TArrayView<FMassRelationRoleInstanceHandle_const_,int> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FMassRelationRoleInstanceHandle *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMassRelationRoleInstanceHandle *pFVar7;
  uint uVar8;
  undefined8 local_28 [2];
  
  iVar6 = param_1->ArrayNum;
  uVar8 = iVar6 + param_2->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pFVar7 = param_1->DataPtr;
  pFVar2 = pFVar7 + iVar6;
  while( true ) {
    if (pFVar7 == pFVar2) {
      return;
    }
    FMassEntityManager::CreateEntityIndexHandle(this->EntityManager,(int)local_28);
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,piVar1);
    }
    pFVar7 = pFVar7 + 1;
    param_2->ArrayNum = iVar6 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// IsSubjectOfRelation @ 147233080

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::IsSubjectOfRelation
          (FRelationManager *this,FRelationData *param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Mass_IsSubject> FVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  undefined1 *puVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  longlong lVar15;
  FMassEntityHandle local_res18;
  FMassEntityHandle local_res20;
  FColor_u_0 local_58;
  uint uStack_54;
  FName local_50;
  FName local_48;
  
  FVar7 = StatPtr_STAT_Mass_IsSubject;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_Mass_IsSubject == (FThreadSafeStaticStat<FStat_STAT_Mass_IsSubject>)0x0) {
    pFVar6 = ::FName::FName(&local_50,"STAT_Mass_IsSubject");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Mass_IsSubject>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_IsSubject,*pFVar6,
                       L"Mass Relation IsSubject","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar13.Bits == 0) && (uVar9 == 0)) {
LAB_1472331ce:
    bVar4 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.Bits = FVar13.Bits;
        uStack_54 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                   ,0x1c6);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1472331ce;
    local_58.Bits = FVar13.Bits;
    uStack_54 = uVar9;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar4 = true;
  }
  iVar11 = param_3.Index;
  if (((((param_2.Index != iVar11) || (local_res18.SerialNumber != local_res20.SerialNumber)) &&
       (param_2.Index != 0)) && ((local_res18.SerialNumber != 0 && (iVar11 != 0)))) &&
     (local_res20.SerialNumber != 0)) {
    pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&param_1->RoleMap,&local_res18);
    puVar12 = &pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    if (puVar12 != (undefined1 *)0x0) {
      lVar15 = *(longlong *)(puVar12 + 0x10);
      iVar2 = *(int *)(puVar12 + 0x18);
      lVar1 = lVar15 + (longlong)iVar2 * 8;
      while( true ) {
        if (*(int *)(puVar12 + 0x18) != iVar2) {
          `TCheckedPointerIterator<FMassRelationRoleInstanceHandle_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_res18);
        }
        if (lVar15 == lVar1) goto LAB_147233297;
        FMassEntityManager::CreateEntityIndexHandle(this->EntityManager,(int)&local_res20);
        if ((local_res20.Index == iVar11) && (local_res20.SerialNumber == param_3.SerialNumber))
        break;
        lVar15 = lVar15 + 8;
      }
      bVar10 = true;
      goto LAB_147233299;
    }
  }
LAB_147233297:
  bVar10 = false;
LAB_147233299:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return bVar10;
}

// IsSubjectOfRelation @ 1472332f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::IsSubjectOfRelation
          (FRelationManager *this,FTypeHandle param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar4;
  FRelationData *pFVar5;
  FObjectKey local_res8;
  
  if ((param_1.TypeKey.ObjectKey.ObjectIndex == 0) &&
     (param_1.TypeKey.ObjectKey.ObjectSerialNumber == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RelationTypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                       ,0x1bc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar4 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)&local_res8);
  pFVar5 = (FRelationData *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    pFVar5 = (FRelationData *)0x0;
  }
  if (pFVar5 == (FRelationData *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = IsSubjectOfRelation(this,pFVar5,param_2,param_3);
  }
  return bVar2;
}

// IsSubjectOfRelationRecursive @ 1472333a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::IsSubjectOfRelationRecursive
          (FRelationManager *this,FRelationData *param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Mass_IsSubjectRecursive> FVar13;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar14;
  ForAnyElementType FVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FName FVar19;
  int iVar20;
  uint uVar21;
  int iStackX_1c;
  FMassEntityHandle local_res20;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b0;
  FColor_u_0 local_a0 [2];
  FName local_98;
  FName local_90;
  FMassRelationRoleInstanceHandle *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FName local_68 [2];
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_58;
  
  uVar21 = 0;
  FVar13 = StatPtr_STAT_Mass_IsSubjectRecursive;
  local_res20 = param_3;
  if (StatPtr_STAT_Mass_IsSubjectRecursive ==
      (FThreadSafeStaticStat<FStat_STAT_Mass_IsSubjectRecursive>)0x0) {
    pFVar12 = ::FName::FName(local_68,"STAT_Mass_IsSubjectRecursive");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Mass_IsSubjectRecursive>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_IsSubjectRecursive,*pFVar12,
                        L"Mass Relation IsSubject Recursive","STATGROUP_Mass","STATCAT_Advanced",
                        L"Mass",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar3 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar7 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a0[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_98.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                   ,0x1e9);
        bVar3 = true;
        bVar4 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar7 = true;
      goto LAB_1472334fd;
    }
  }
  bVar4 = bVar8;
  bVar3 = bVar7;
  bVar7 = false;
  FVar19 = local_90;
LAB_1472334fd:
  iVar5 = local_res20.SerialNumber;
  iStackX_1c = param_2.SerialNumber;
  iVar20 = param_3.Index;
  if (((((param_2.Index != iVar20) || (iStackX_1c != local_res20.SerialNumber)) &&
       (param_2.Index != 0)) && ((iStackX_1c != 0 && (iVar20 != 0)))) &&
     (local_res20.SerialNumber != 0)) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
    local_c0.ArrayNum = iVar10 + 1;
    *(FMassEntityHandle *)((longlong)local_c0.AllocatorInstance.Data + (longlong)iVar10 * 8) =
         param_2;
    if (0 < iVar10 + 1) {
      do {
        if (0x3f < (int)uVar21) {
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3784697294012547572>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                             ,500,"SubjectIndex < IterationsLimit");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          break;
        }
        uVar11 = 0;
        if ((int)uVar21 < local_c0.ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        pTVar14 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                          *)&param_1->RoleMap,
                         (FMassEntityHandle *)
                         ((longlong)local_c0.AllocatorInstance.Data + (longlong)(int)uVar21 * 8));
        puVar16 = &pTVar14->field_0x8;
        if (pTVar14 ==
            (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
          puVar16 = (undefined1 *)0x0;
        }
        if (puVar16 != (undefined1 *)0x0) {
          local_78 = *(FMassRelationRoleInstanceHandle **)(puVar16 + 0x10);
          iVar10 = *(int *)(puVar16 + 0x18);
          if ((iVar10 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          local_58._12_4_ = uStack_6c;
          local_58.ArrayNum = iVar10;
          local_58.DataPtr = local_78;
          iStack_70 = iVar10;
          GetRoleEntities(this,&local_58,&local_b0);
          iVar10 = local_b0.ArrayNum;
          uVar17 = (ulonglong)local_b0.ArrayNum;
          pFVar1 = (FMassEntityHandle *)(local_b0.AllocatorInstance.Data + uVar17 * 8);
          for (FVar15.Data = local_b0.AllocatorInstance.Data;
              FVar18.Data = local_b0.AllocatorInstance.Data,
              (FMassEntityHandle *)FVar15.Data != pFVar1; FVar15.Data = FVar15.Data + 8) {
            if ((((FMassEntityHandle *)FVar15.Data)->Index == iVar20) &&
               (((FMassEntityHandle *)FVar15.Data)->SerialNumber == iVar5)) {
              if ((int)((longlong)FVar15.Data - (longlong)local_b0.AllocatorInstance.Data >> 3) !=
                  -1) {
                if ((FMassEntityHandle *)local_b0.AllocatorInstance.Data != (FMassEntityHandle *)0x0
                   ) {
                  FMemory::Free(local_b0.AllocatorInstance.Data);
                }
                if ((FName)local_c0.AllocatorInstance.Data != (FName)0x0) {
                  FMemory::Free(local_c0.AllocatorInstance.Data);
                }
                bVar8 = true;
                goto LAB_14723375a;
              }
              break;
            }
          }
          while( true ) {
            if ((int)uVar17 != iVar10) {
              local_res20 = (FMassEntityHandle)((ulonglong)local_res20 & 0xffffffffffffff00);
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_res20);
            }
            uVar6 = local_b0._8_8_;
            if ((FMassEntityHandle *)FVar18.Data == pFVar1) break;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FMassEntityHandle_const_&>(&local_c0,(FMassEntityHandle *)FVar18.Data);
            uVar17 = local_b0._8_8_ & 0xffffffff;
            FVar18.Data = (FScriptContainerElement *)((longlong)FVar18.Data + 8);
          }
          iVar10 = local_b0.ArrayMax;
          local_b0._8_8_ = (ulonglong)(uint)local_b0.ArrayMax << 0x20;
          if (((longlong)uVar6 < 0) && (iVar10 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
          }
        }
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < local_c0.ArrayNum);
    }
    if ((FMassEntityHandle *)local_b0.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    if ((FName)local_c0.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  bVar8 = false;
LAB_14723375a:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return bVar8;
}

// IsSubjectOfRelationRecursive @ 1472337b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall
UE::Mass::FRelationManager::IsSubjectOfRelationRecursive
          (FRelationManager *this,FTypeHandle param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar4;
  FRelationData *pFVar5;
  FObjectKey local_res8;
  
  if ((param_1.TypeKey.ObjectKey.ObjectIndex == 0) &&
     (param_1.TypeKey.ObjectKey.ObjectSerialNumber == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RelationTypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationManager.cpp"
                       ,0x1dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar4 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)&local_res8);
  pFVar5 = (FRelationData *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    pFVar5 = (FRelationData *)0x0;
  }
  if (pFVar5 == (FRelationData *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = IsSubjectOfRelationRecursive(this,pFVar5,param_2,param_3);
  }
  return bVar2;
}

// OnRelationTypeRegistered @ 147239b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Mass::FRelationManager::OnRelationTypeRegistered
          (FRelationManager *this,FTypeHandle param_1,FRelationTypeTraits *param_2)

{
  int iVar1;
  ERemovalPolicy EVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  longlong lVar5;
  FName FVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  FRelationData *pFVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  TNotNull<UMassProcessor_*> TVar15;
  UScriptStruct *pUVar16;
  FWeakObjectPtr FVar17;
  uint uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FName FVar21;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [8];
  FName local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [128];
  TObjectPtr<UClass>_u_0 local_58;
  UObject *local_50;
  UClass *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f8._24_8_ = this;
  pFVar11 = CreateRelationData(this,param_1);
  if (((pFVar11->Traits).bHierarchical != false) &&
     ((pFVar11->Traits).RegisteredGroupType.Identifier == 0xffffffff)) {
    local_f8._8_8_ = pFVar11;
    `UE::Mass::FRelationManager::OnRelationTypeRegistered'::__l2::<lambda_1>::operator()
              (local_f8 + 8);
  }
  local_58.DebugPtr =
       (UClass *)FWeakObjectPtr::Get(&(param_2->RelationEntityCreationObserverClass).WeakPtr);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_58.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_58.DebugPtr);
  }
  local_50 = FWeakObjectPtr::Get(&(param_2->RelationEntityDestructionObserverClass).WeakPtr);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_50);
  }
  local_48 = UMassRelationEntityGuardDog::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_48);
  }
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 3;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_118,3,&local_10c);
  ConstructItems<TSubclassOf<UMassRelationObserver>,TSubclassOf<UMassRelationObserver>,int>
            (local_118.Data,(TSubclassOf<UMassRelationObserver> *)&local_58.ObjectPtr,3);
  pUVar12 = (UClass *)FWeakObjectPtr::Get(&(param_2->SubjectEntityDestructionObserverClass).WeakPtr)
  ;
  pUVar13 = UMassRelationRoleDestruction::StaticClass();
  if (pUVar12 == pUVar13) {
    pUVar12 = (UClass *)
              FWeakObjectPtr::Get(&(param_2->ObjectEntityDestructionObserverClass).WeakPtr);
    pUVar13 = UMassRelationRoleDestruction::StaticClass();
    if (pUVar12 == pUVar13) {
      pFVar4 = this->EntityManager;
      if (((pFVar11->Traits).RoleTraits.Elements[1].Element ==
           (pFVar11->Traits).RoleTraits.Elements[0].Element) &&
         (EVar2 = (pFVar11->Traits).RoleTraits.Elements[0].DestructionPolicy,
         (pFVar11->Traits).RoleTraits.Elements[1].DestructionPolicy == EVar2)) {
        if (EVar2 != Custom) {
          pUVar14 = GetTransientPackageAsObject();
          TVar15.Val = (UMassProcessor *)NewObject<UMassRelationRoleDestruction>(pUVar14);
          lVar5 = (TVar15.Val)->_padding_;
          *(undefined1 *)&TVar15.Val[5].ExecutionOrder.ExecuteBefore.AllocatorInstance.Data = 2;
          cVar9 = (**(code **)(lVar5 + 0x318))(TVar15.Val,param_1.TypeKey.ObjectKey,pFVar11);
          if (cVar9 != '\0') {
            if ((UScriptStruct *)TVar15.Val[1]._padding_ == (UScriptStruct *)0x0) {
LAB_14723a154:
                    /* WARNING: Subroutine does not return */
              Core::Private::ReportNotNullPtr();
            }
            FMassObserverManager::AddObserverInstance
                      (&pFVar4->ObserverManager,(UScriptStruct *)TVar15.Val[1]._padding_,
                       *(EMassObservedOperationFlags *)((longlong)&TVar15.Val[1]._padding_ + 1),
                       TVar15);
          }
        }
      }
      else {
        uVar19 = 0;
        do {
          if ((pFVar11->Traits).RoleTraits.Elements[uVar19].DestructionPolicy != Custom) {
            pUVar14 = GetTransientPackageAsObject();
            TVar15.Val = (UMassProcessor *)NewObject<UMassRelationRoleDestruction>(pUVar14);
            lVar5 = (TVar15.Val)->_padding_;
            *(char *)&TVar15.Val[5].ExecutionOrder.ExecuteBefore.AllocatorInstance.Data =
                 (char)uVar19;
            cVar9 = (**(code **)(lVar5 + 0x318))(TVar15.Val,param_1.TypeKey.ObjectKey,pFVar11);
            if (cVar9 != '\0') {
              if ((UScriptStruct *)TVar15.Val[1]._padding_ == (UScriptStruct *)0x0)
              goto LAB_14723a154;
              FMassObserverManager::AddObserverInstance
                        (&pFVar4->ObserverManager,(UScriptStruct *)TVar15.Val[1]._padding_,
                         *(EMassObservedOperationFlags *)((longlong)&TVar15.Val[1]._padding_ + 1),
                         TVar15);
            }
          }
          uVar18 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < 2);
      }
      goto LAB_147239f82;
    }
  }
  local_100 = (FName)FWeakObjectPtr::Get(&(param_2->SubjectEntityDestructionObserverClass).WeakPtr);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_100 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_100);
  }
  if (((local_118.Data <= (FRelationData *)&local_100) &&
      (&local_100 < (FName *)(local_118.Data + (longlong)local_10c * 8))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_110 == local_10c) {
    local_110 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118,&local_10c);
  }
  iVar1 = local_110 + 1;
  *(FName *)(local_118.Data + (longlong)local_110 * 8) = local_100;
  local_110 = iVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_100 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_100);
  }
  local_f8._0_8_ = FWeakObjectPtr::Get(&(param_2->ObjectEntityDestructionObserverClass).WeakPtr);
  if ((GC::GIsIncrementalReachabilityPending != false) && ((FName)local_f8._0_8_ != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_f8._0_8_);
  }
  if (((local_118.Data <= (FRelationData *)local_f8) &&
      ((FScriptContainerElement *)local_f8 < local_118.Data + (longlong)local_10c * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_110 == local_10c) {
    local_110 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118,&local_10c);
  }
  iVar1 = local_110 + 1;
  ((FName *)(local_118.Data + (longlong)local_110 * 8))->ComparisonIndex =
       (FNameEntryId)local_f8._0_4_;
  ((FName *)(local_118.Data + (longlong)local_110 * 8))->Number = local_f8._4_4_;
  local_110 = iVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && ((FName)local_f8._0_8_ != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_f8._0_8_);
  }
LAB_147239f82:
  iVar1 = local_110;
  local_f8._8_8_ = local_118.Data + (longlong)local_110 * 8;
  FVar20.Data = local_118.Data;
  do {
    while( true ) {
      uVar8 = local_f8._8_8_;
      if (local_110 != iVar1) {
        `TCheckedPointerIterator<TSubclassOf<UMassRelationObserver>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_108);
      }
      if (FVar20.Data == (FScriptContainerElement *)uVar8) {
        if ((FRelationData *)local_118.Data != (FRelationData *)0x0) {
          FMemory::Free(local_118.Data);
        }
        return;
      }
      FVar6 = (((FRelationData *)FVar20.Data)->Traits).RelationName;
      if ((FVar6 != (FName)0x0) &&
         (pUVar12 = UMassRelationObserver::StaticClass(), pUVar12 != (UClass *)0x0)) break;
LAB_14723a111:
      FVar20.Data = (FScriptContainerElement *)
                    &(((FRelationData *)FVar20.Data)->Traits).RelationTagType;
    }
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)((longlong)FVar6 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar6 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((!bVar10) ||
       (FVar6 = (((FRelationData *)FVar20.Data)->Traits).RelationName, FVar6 == (FName)0x0))
    goto LAB_14723a111;
    FVar21.ComparisonIndex.Value = 0;
    FVar21.Number = 0;
    local_f8._16_4_ = 0;
    local_f8._20_4_ = 0;
    pUVar12 = UMassRelationObserver::StaticClass();
    if (pUVar12 != (UClass *)0x0) {
      iVar3 = (int)pUVar12->_padding_;
      if ((*(int *)((longlong)FVar6 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar6 + 0x30) + (longlong)iVar3 * 8)
          != &pUVar12->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        FVar21 = (((FRelationData *)FVar20.Data)->Traits).RelationName;
      }
    }
    pUVar16 = (UScriptStruct *)
              FWeakObjectPtr::Get(&(((FMassEntityManager *)((UScriptStruct *)this)->_padding_)->
                                   Owner).WeakPtr);
    uVar8 = local_f8._16_8_;
    if ((FName)local_f8._16_8_ == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar16,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = UMassRelationObserver::StaticClass();
    CheckIsClassChildOf_Internal(pUVar12,(UClass *)FVar21);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,(UClass *)FVar21);
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._16_8_ = uVar8;
    local_d8._8_8_ = pUVar16;
    TVar15.Val = (UMassProcessor *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      FVar17 = (FWeakObjectPtr)((longlong)local_d8 + 0x50);
      if ((FWeakObjectPtr)local_d8._104_8_ != (FWeakObjectPtr)0x0) {
        FVar17 = (FWeakObjectPtr)local_d8._104_8_;
      }
      (**(code **)(*(longlong *)FVar17 + 0x10))();
    }
    cVar9 = (**(code **)((TVar15.Val)->_padding_ + 0x318))
                      (TVar15.Val,param_1.TypeKey.ObjectKey,pFVar11);
    this = (FRelationManager *)local_f8._24_8_;
    if (cVar9 == '\0') goto LAB_14723a111;
    if ((UScriptStruct *)TVar15.Val[1]._padding_ == (UScriptStruct *)0x0) goto LAB_14723a154;
    FMassObserverManager::AddObserverInstance
              (&(*(FMassEntityManager **)local_f8._24_8_)->ObserverManager,
               (UScriptStruct *)TVar15.Val[1]._padding_,
               *(EMassObservedOperationFlags *)((longlong)&TVar15.Val[1]._padding_ + 1),TVar15);
    FVar20.Data = (FScriptContainerElement *)
                  &(((FRelationData *)FVar20.Data)->Traits).RelationTagType;
  } while( true );
}

// operator() @ 150503140

bool __thiscall
`UE::Mass::FRelationManager::OnRelationTypeRegistered'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547600>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547600>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505031b4;
    }
  }
  bVar2 = false;
LAB_1505031b4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505036f0

bool __thiscall
`UE::Mass::FRelationManager::CreateRelationData'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  bool bVar5;
  FName local_res10;
  FWeakObjectPtr local_res18 [2];
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547501>);
  if (bVar2) {
    local_res18[0].ObjectIndex = **(int **)this;
    local_res18[0].ObjectSerialNumber = (*(int **)this)[1];
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    if (pUVar4 == (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res10.Number = *(uint *)&pUVar4->field_0x1c;
    }
    ::FName::ToString(&local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547501>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050378f;
    }
  }
  bVar2 = false;
LAB_15050378f:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505037c0

bool __thiscall
`UE::Mass::FRelationManager::CreateRelationInstances'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547228>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505058b0

bool __thiscall
`UE::Mass::FRelationManager::CreateRelationInstances'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547232>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547232>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505c40

bool __thiscall
`UE::Mass::FRelationManager::CreateRelationInstances'::__l6::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547233>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547233>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

