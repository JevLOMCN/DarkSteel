// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// StaticClass @ 148a287c0

UClass * __cdecl UDataLayerManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerManager",
               &Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton,
               StaticRegisterNativesUDataLayerManager,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerManager>,
               InternalVTableHelperCtorCaller<UDataLayerManager>,local_res8,UObject::StaticClass,
               UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton;
}

// GetDataLayerInstance<UDataLayerAsset_const_*> @ 148a3ad40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerManager::GetDataLayerInstance<UDataLayerAsset_const_*>
          (UDataLayerManager *this,UDataLayerAsset **param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  FString *pFVar3;
  UDataLayerInstance **ppUVar4;
  FString local_18;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  if ((pAVar2 != (AWorldDataLayers *)0x0) && (*param_1 != (UDataLayerAsset *)0x0)) {
    pFVar3 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)*param_1,&local_18,(UObject *)0x0);
    ppUVar4 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&pAVar2->AssetNameToInstance,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar4 != (UDataLayerInstance **)0x0) {
      return *ppUVar4;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstance<FName> @ 148a3add0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerManager::GetDataLayerInstance<FName>(UDataLayerManager *this,FName *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar2 = AWorldDataLayers::GetDataLayerInstance(this_01,param_1);
    return pUVar2;
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerManager<UWorld> @ 148a3aea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __cdecl UDataLayerManager::GetDataLayerManager<UWorld>(UWorld *param_1)

{
  int iVar1;
  ULevel *this;
  IWorldPartitionCell *pIVar2;
  UWorld *pUVar3;
  UWorldPartition *this_00;
  UClass *pUVar4;
  UDataLayerManager *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UDataLayerManager *)0x0;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return (UDataLayerManager *)0x0;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
    this = (param_1->PersistentLevel).field0_0x0.DebugPtr;
    if ((this != (ULevel *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
      pIVar2 = ULevel::GetWorldPartitionRuntimeCell(this);
      if (pIVar2 != (IWorldPartitionCell *)0x0) {
        pUVar3 = (UWorld *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
        this_00 = UWorld::GetWorldPartition(pUVar3);
        goto LAB_148a3af4f;
      }
      pUVar3 = (UWorld *)this->_padding_;
      if (pUVar3 != (UWorld *)0x0) {
        pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          this_00 = UWorld::GetWorldPartition(pUVar3);
          goto LAB_148a3af4f;
        }
      }
    }
    this_00 = (UWorldPartition *)0x0;
  }
  else {
    this_00 = (UWorldPartition *)0x0;
  }
LAB_148a3af4f:
  if (this_00 == (UWorldPartition *)0x0) {
    return (UDataLayerManager *)0x0;
  }
  pUVar5 = UWorldPartition::GetDataLayerManager(this_00);
  return pUVar5;
}

// UDataLayerManager @ 148a42a10

UDataLayerManager * __thiscall UDataLayerManager::UDataLayerManager(UDataLayerManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UDataLayerManager__6B_;
  *(undefined8 *)&this->OnDataLayerInstanceRuntimeStateChanged = 0;
  *(undefined8 *)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->ActiveDataLayersLoadTime = 0;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x48 = 0;
  return this;
}

// UDataLayerManager @ 148a42a80

UDataLayerManager * __thiscall
UDataLayerManager::UDataLayerManager(UDataLayerManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataLayerManager__6B_;
  *(undefined8 *)&this->OnDataLayerInstanceRuntimeStateChanged = 0;
  *(undefined8 *)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->ActiveDataLayersLoadTime = 0;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveDataLayersLoadTime).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x48 = 0;
  return this;
}

// ~UDataLayerManager @ 148a44790

void __thiscall UDataLayerManager::~UDataLayerManager(UDataLayerManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerManager__6B_;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveDataLayersLoadTime).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveDataLayersLoadTime);
  pvVar1 = *(void **)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataLayerInstanceRuntimeStateChanged);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148a45030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FColor param_2,FColor param_3,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_4)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  TVector2<double> *pTVar4;
  float *pfVar5;
  UObjectBaseUtility *this_00;
  UDataLayerInstance *pUVar6;
  code *pcVar7;
  double dVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  UFont *pUVar12;
  UClass *pUVar13;
  UWorld *this_01;
  AWorldDataLayers *this_02;
  FColor *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  double *pdVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  ForAnyElementType FVar27;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147 [7];
  UDataLayerInstance *local_140;
  FString local_138;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  LARGE_INTEGER local_e8;
  FString local_e0;
  FString local_d0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  pTVar9 = param_4;
  if (0 < *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34) {
    pTVar4 = *(TVector2<double> **)((longlong)this + 0x10);
    pfVar5 = *(float **)((longlong)this + 0x18);
    local_res18[0] = param_2.field0_0x0;
    local_res20[0] = param_3.field0_0x0;
    pUVar12 = UEngine::GetSmallFont();
    FWorldPartitionDebugHelper::DrawText
              (*(UCanvas **)((longlong)this + 8),param_1,pUVar12,(FColor *)&local_res18[0]._s_0,
               pTVar4,pfVar5);
    uVar22 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    iVar23 = 0;
    if (0 < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar22,&local_158,0,(int *)((longlong)&local_150 + 4));
    }
    iVar24 = *(int *)&(pTVar9->Elements).field_0x28;
    puVar1 = &(pTVar9->Elements).field_0x10;
    uStack_11c = 1;
    local_108 = 0;
    iStack_10c = local_108;
    if (iVar24 != 0) {
      puVar26 = *(uint **)&(pTVar9->Elements).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uVar22 = *puVar26;
      local_108 = 0;
      iVar23 = 0;
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar23;
        local_108 = local_108 + 0x20;
        iVar23 = iVar23 + 1;
        iStack_10c = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_148a4517d;
        uVar22 = puVar26[lVar15 + 1];
      }
      uStack_11c = -uVar22 & uVar22;
      uVar17 = (ulonglong)uStack_11c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_f8 = (int)lVar15;
      iStack_10c = local_108 + -1 + local_f8;
      if (iVar24 < iStack_10c) {
        iStack_10c = iVar24;
      }
    }
LAB_148a4517d:
    uVar22 = *(uint *)&(pTVar9->Elements).field_0x28;
    uVar21 = uVar22 & 0xffffffe0;
    iStack_100 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
    uStack_110 = 0xffffffff;
    local_128 = pTVar9;
    TStack_b8._padding_ = CONCAT44(uStack_11c,iVar23);
    TStack_b8.CurrentBitIndex = iStack_10c;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    local_c0 = pTVar9;
    iVar19 = (int)uVar22 >> 5;
    TStack_b8._28_4_ = iStack_10c;
    TStack_b8.BaseBitIndex = local_108;
    uStack_98 = CONCAT44(uStack_fc,iStack_100);
    iStack_120 = iVar23;
    local_118 = puVar1;
    iStack_104 = iStack_10c;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar22 < 0) || (iVar24 < (int)uVar22)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(uint *)&(pTVar9->Elements).field_0x28;
    if (uVar22 != uVar3) {
      puVar25 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = puVar1;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar19 * 4);
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar19;
        uVar21 = uVar21 + 0x20;
        iVar19 = iVar19 + 1;
        uVar22 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_148a45280;
        uVar22 = *(uint *)(puVar25 + lVar15 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_f4 = (int)lVar15;
      uVar22 = local_f4 + -1 + uVar21;
      if ((int)uVar3 < (int)uVar22) {
        uVar22 = uVar3;
      }
    }
LAB_148a45280:
    while( true ) {
      pTVar10 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        param_4 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  ((ulonglong)param_4 & 0xffffffffffffff00);
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&param_4);
      }
      lVar15 = (longlong)TStack_b8.CurrentBitIndex;
      if (((TStack_b8.CurrentBitIndex == uVar22) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar9)) break;
      lVar18 = *(longlong *)&pTVar10->Elements;
      this_00 = *(UObjectBaseUtility **)this;
      pUVar13 = Z_Construct_UClass_UWorld_NoRegister();
      this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar13);
      this_02 = UWorld::GetWorldDataLayers(this_01);
      if (this_02 == (AWorldDataLayers *)0x0) {
        local_140 = (UDataLayerInstance *)0x0;
      }
      else {
        local_140 = AWorldDataLayers::GetDataLayerInstance
                              (this_02,(FName *)(lVar15 * 0x10 + lVar18));
        if (local_140 != (UDataLayerInstance *)0x0) {
          if (((local_158.Data <= (FScriptContainerElement *)&local_140) &&
              ((FScriptContainerElement *)&local_140 <
               local_158.Data + (longlong)local_150._4_4_ * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar23 = (int)local_150;
          if ((int)local_150 == local_150._4_4_) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_158,(int *)((longlong)&local_150 + 4));
          }
          local_150 = CONCAT44(local_150._4_4_,iVar23 + 1);
          *(UDataLayerInstance **)(local_158.Data + (longlong)iVar23 * 8) = local_140;
        }
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    AlgoImpl::
    IntroSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,__UDataLayerManager::DrawDataLayersStatus_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
              ((UDataLayerInstance **)local_158.Data,(int)local_150,param_4._0_1_,
               (<lambda_1> *)&local_148);
    param_4 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)UEngine::GetSmallFont();
    dVar8 = __real_4170000000000000;
    iVar23 = (int)local_150;
    uVar17 = (ulonglong)(int)local_150;
    pFVar2 = local_158.Data + uVar17 * 8;
    FVar27.Data = local_158.Data;
    while( true ) {
      if ((int)uVar17 != iVar23) {
        `TCheckedPointerIterator<UDataLayerInstance_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_147);
      }
      if (FVar27.Data == pFVar2) break;
      pUVar6 = *(UDataLayerInstance **)FVar27.Data;
      (**(code **)(pUVar6->_padding_ + 0x2e0))(pUVar6,&local_138);
      if (GDrawDataLayersLoadTime != 0) {
        lVar15 = *(longlong *)this;
        uVar22 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar6 >> 4)) *
                 -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        if (*(int *)(lVar15 + 0x48) != *(int *)(lVar15 + 0x74)) {
          lVar18 = lVar15 + 0x78;
          if (*(longlong *)(lVar15 + 0x80) != 0) {
            lVar18 = *(longlong *)(lVar15 + 0x80);
          }
          iVar24 = *(int *)(lVar18 + (ulonglong)
                                     (*(int *)(lVar15 + 0x88) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4)
          ;
          if (iVar24 != -1) {
            do {
              lVar18 = *(longlong *)(lVar15 + 0x40) + (longlong)iVar24 * 0x18;
              if (*(UDataLayerInstance **)(*(longlong *)(lVar15 + 0x40) + (longlong)iVar24 * 0x18)
                  == pUVar6) {
                pdVar20 = (double *)(lVar18 + 8);
                if (lVar18 == 0) {
                  pdVar20 = (double *)0x0;
                }
                if (pdVar20 != (double *)0x0) {
                  if (0.0 <= *pdVar20) {
                    FGenericPlatformTime::PrettyTime(local_70,*pdVar20);
                    ::FString::PrintfImpl(&local_d0,L" (took %s)");
                    iVar24 = local_d0.Data.ArrayNum + -1;
                    if (local_d0.Data.ArrayNum == 0) {
                      iVar24 = 0;
                    }
                    ::FString::AppendChars
                              (&local_138,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar24);
                    FVar16.Data = local_70[0].Data.AllocatorInstance.Data;
                    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                      FVar16.Data = local_70[0].Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    QueryPerformanceCounter(&local_e8);
                    FGenericPlatformTime::PrettyTime
                              (&local_80,
                               (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                               *pdVar20 + dVar8);
                    ::FString::PrintfImpl(&local_e0,L" (streaming %s)");
                    iVar24 = local_e0.Data.ArrayNum + -1;
                    if (local_e0.Data.ArrayNum == 0) {
                      iVar24 = 0;
                    }
                    ::FString::AppendChars
                              (&local_138,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar24);
                    FVar16.Data = local_80.Data.AllocatorInstance.Data;
                    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                      FVar16.Data = local_80.Data.AllocatorInstance.Data;
                    }
                  }
                  if (FVar16.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar16.Data);
                  }
                }
                break;
              }
              iVar24 = *(int *)(lVar18 + 0x10);
            } while (iVar24 != -1);
          }
        }
      }
      pfVar5 = *(float **)((longlong)this + 0x18);
      pTVar4 = *(TVector2<double> **)((longlong)this + 0x10);
      pFVar14 = (FColor *)(**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6,local_f0);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar16.Data = local_138.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_90,(wchar_t *)FVar16.Data);
      FWorldPartitionDebugHelper::DrawLegendItem
                (*(UCanvas **)((longlong)this + 8),&local_90,(UFont *)param_4,pFVar14,
                 (FColor *)&local_res20[0]._s_0,pTVar4,pfVar5);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      uVar17 = local_150 & 0xffffffff;
      FVar27.Data = FVar27.Data + 8;
    }
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
  }
  return;
}

// operator() @ 148a45920

bool __thiscall
`UDataLayerManager::GetDataLayerInstances'::__l2::<lambda_1>::operator()
          (void *this,UDataLayerInstance *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UDataLayerInstance *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UDataLayerInstance **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 148a45ef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UDataLayerManager::ConvertArgsToDataLayers'::__l30::<lambda_1>::operator()
          (void *this,UDataLayerInstance *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FString *this_00;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  UDataLayerInstance *local_res8;
  UDataLayerInstance *local_res10;
  void *local_28 [2];
  
  local_res10 = param_1;
  puVar2 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_28);
  pwVar5 = L"";
  if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
  }
  if (*(int *)(puVar2 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (iVar1 == 0) {
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (1 < (byte)LogWorldPartition._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      }
      return false;
    }
    TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>::
    Emplace<UDataLayerInstance_*_const_&>
              (*(TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>
                 **)this,&local_res8,(bool *)&local_res10);
    **(undefined1 **)((longlong)this + 0x10) = 1;
  }
  else {
    this_00 = (FString *)(**(code **)(param_1->_padding_ + 0x2e8))(param_1,local_28);
    iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
    iVar6 = 0;
    if (iVar1 != 0) {
      pwVar5 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
      iVar6 = iVar1 + -1;
    }
    iVar1 = ::FString::Find(this_00,pwVar5,iVar6,IgnoreCase,FromStart,-1);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (iVar1 == 0) {
      TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>::
      Emplace<UDataLayerInstance_*_const_&>
                (*(TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>
                   **)this,&local_res8,(bool *)&local_res10);
      return false;
    }
  }
  return true;
}

// operator() @ 148a46820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDataLayerManager::<lambda_25>::operator()(<lambda_25> *this,FOutputDevice *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UWorld *this_00;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UWorldPartitionSubsystem *this_01;
  FScriptContainerElement *pFVar8;
  FOutputDevice *local_res18;
  FScriptContainerElement *local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  FScriptContainerElement *local_40;
  int *piStack_38;
  undefined8 local_30;
  
  pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  local_30 = CONCAT44(uStack_44,iVar3);
  local_58 = pFVar8;
  piStack_50 = piVar1;
  local_48 = iVar3;
  local_40 = pFVar8;
  piStack_38 = piVar1;
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar8 == pFVar2) {
      return;
    }
    this_00 = *(UWorld **)(*(longlong *)pFVar8 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar5 = UWorld::IsGameWorld(this_00);
      if (bVar5) {
        pUVar6 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar6 != (UClass *)0x0) goto LAB_148a468f9;
LAB_148a46927:
          pUVar6 = (UClass *)0x0;
        }
        else {
          if (pUVar6 == (UClass *)0x0) goto LAB_148a46927;
          UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_148a468f9:
          pUVar7 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_148a46927;
          iVar4 = (int)pUVar7->_padding_;
          if (((int)pUVar6->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_148a46927;
        }
        this_01 = (UWorldPartitionSubsystem *)
                  FSubsystemCollectionBase::GetSubsystemInternal
                            ((FSubsystemCollectionBase *)&this_00->SubsystemCollection,pUVar6);
        if (this_01 != (UWorldPartitionSubsystem *)0x0) {
          piStack_50 = (int *)&local_res18;
          local_58 = (FScriptContainerElement *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`UDataLayerManager::<lambda_25>::operator()'::__l12::<lambda_1>,bool,UWorldPartition_*>
                     ::Call;
          local_res18 = param_1;
          UWorldPartitionSubsystem::ForEachWorldPartition
                    (this_01,(TFunctionRef<bool___cdecl(UWorldPartition_*)> *)&local_58);
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// operator() @ 148a469a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDataLayerManager::<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UWorld *this_00;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UWorldPartitionSubsystem *this_01;
  FScriptContainerElement *pFVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  FScriptContainerElement *local_40;
  int *piStack_38;
  undefined8 local_30;
  
  pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  local_30 = CONCAT44(uStack_44,iVar3);
  local_58 = pFVar8;
  piStack_50 = piVar1;
  local_48 = iVar3;
  local_40 = pFVar8;
  piStack_38 = piVar1;
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar8 == pFVar2) {
      return;
    }
    this_00 = *(UWorld **)(*(longlong *)pFVar8 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar5 = UWorld::IsGameWorld(this_00);
      if (bVar5) {
        FWorldPartitionHelpers::ServerExecConsoleCommand
                  (this_00,&GToggleDataLayerActivationCommandName,param_1);
        pUVar6 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar6 != (UClass *)0x0) goto LAB_148a46a8c;
LAB_148a46aba:
          pUVar6 = (UClass *)0x0;
        }
        else {
          if (pUVar6 == (UClass *)0x0) goto LAB_148a46aba;
          UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_148a46a8c:
          pUVar7 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_148a46aba;
          iVar4 = (int)pUVar7->_padding_;
          if (((int)pUVar6->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_148a46aba;
        }
        this_01 = (UWorldPartitionSubsystem *)
                  FSubsystemCollectionBase::GetSubsystemInternal
                            ((FSubsystemCollectionBase *)&this_00->SubsystemCollection,pUVar6);
        if (this_01 != (UWorldPartitionSubsystem *)0x0) {
          piStack_50 = (int *)&local_res18;
          local_58 = (FScriptContainerElement *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`UDataLayerManager::<lambda_26>::operator()'::__l12::<lambda_1>,bool,UWorldPartition_*>
                     ::Call;
          local_res18 = param_1;
          UWorldPartitionSubsystem::ForEachWorldPartition
                    (this_01,(TFunctionRef<bool___cdecl(UWorldPartition_*)> *)&local_58);
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// operator() @ 148a46b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDataLayerManager::<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UWorld *this_00;
  ForAnyElementType *pFVar4;
  bool bVar5;
  UWorldPartitionSubsystem *this_01;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TLess<FString> local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_58;
  int *piStack_50;
  undefined8 local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_40;
  int *piStack_38;
  int local_30;
  undefined4 uStack_2c;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 < 2) {
    if (2 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      return;
    }
  }
  else {
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = iVar2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_78.AllocatorInstance,iVar2,&local_78.ArrayMax);
    ConstructItems<FString,FString,int>(local_78.AllocatorInstance.Data,(FString *)pFVar3,iVar2);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    TArray<FString,TSizedDefaultAllocator<32>_>::HeapPop<TLess<FString>_>
              (&local_78,&local_68,local_res10,Default);
    bVar5 = GetDataLayerRuntimeStateFromName(&local_68,(EDataLayerRuntimeState *)local_res10);
    if (bVar5) {
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
               (GEngine->WorldList).Array.AllocatorInstance.Data;
      piVar1 = &(GEngine->WorldList).Array.ArrayNum;
      iVar2 = *piVar1;
      pFVar4 = &pTVar6->AllocatorInstance;
      local_48 = CONCAT44(uStack_2c,iVar2);
      local_58 = pTVar6;
      piStack_50 = piVar1;
      local_40 = pTVar6;
      piStack_38 = piVar1;
      local_30 = iVar2;
      while( true ) {
        if (*piVar1 != iVar2) {
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pTVar6 == (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar4 + iVar2)) break;
        this_00 = *(UWorld **)((pTVar6->AllocatorInstance).Data + 0x2c0);
        if ((this_00 != (UWorld *)0x0) && (bVar5 = UWorld::IsGameWorld(this_00), bVar5)) {
          FWorldPartitionHelpers::ServerExecConsoleCommand
                    (this_00,&GSetDataLayerRuntimeStateCommandCommandName,param_1);
          this_01 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
          if (this_01 != (UWorldPartitionSubsystem *)0x0) {
            local_58 = &local_78;
            piStack_50 = (int *)CONCAT71(piStack_50._1_7_,local_res10[0]);
            piStack_38 = (int *)&local_58;
            local_40 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                       UE::Core::Private::Function::
                       TFunctionRefCaller<`UDataLayerManager::<lambda_27>::operator()'::__l36::<lambda_1>,bool,UWorldPartition_*>
                       ::Call;
            UWorldPartitionSubsystem::ForEachWorldPartition
                      (this_01,(TFunctionRef<bool___cdecl(UWorldPartition_*)> *)&local_40);
          }
        }
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar6->ArrayNum;
      }
    }
    else if (2 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 148a46da0

bool __thiscall
`UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_2>::operator()
          (void *this,UDataLayerInstance *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  FName local_res10;
  longlong local_res18;
  
  cVar3 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (cVar3 == '\0') {
    return true;
  }
  (**(code **)(param_1->_padding_ + 800))(param_1,&local_res18);
  lVar2 = local_res18;
  plVar1 = *(longlong **)this;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_res18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar6 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)plVar1[9] - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x10) == lVar2) {
          return true;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_res18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar6 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)plVar1[9] - 1U & (int)((ulonglong)local_res18 >> 0x20) + uVar4)
                    * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x10) == local_res18) {
          return true;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             &local_res10,(bool *)&local_res18);
  return true;
}

// operator() @ 148a47060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UDataLayerManager::DrawDataLayersStatus'::__l8::<lambda_3>::operator()
          (void *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UObjectBaseUtility *this_00;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UWorld *this_01;
  AWorldDataLayers *pAVar11;
  UDataLayerInstance **ppUVar12;
  FWeakObjectPtr *this_02;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  UDataLayerInstance *local_a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar13 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_148a4710d;
      uVar15 = puVar17[lVar13 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_7c = (int)lVar13 + -1 + local_78;
    if (iVar9 < iStack_7c) {
      iStack_7c = iVar9;
    }
  }
LAB_148a4710d:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a47220;
      uVar15 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_148a47220:
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    this_00 = *(UObjectBaseUtility **)this;
    FVar4 = *(FName *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar10);
    pAVar11 = UWorld::GetWorldDataLayers(this_01);
    if (pAVar11 == (AWorldDataLayers *)0x0) {
      local_a0 = (UDataLayerInstance *)0x0;
    }
    else {
      if (FVar4 == (FName)0x0) {
LAB_148a472c1:
        local_a0 = (UDataLayerInstance *)0x0;
      }
      else {
        ppUVar12 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                   ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                           *)&pAVar11->InstanceNameToInstance,FVar4);
        if (ppUVar12 == (UDataLayerInstance **)0x0) {
          this_02 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                     ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                             *)&pAVar11->DeprecatedDataLayerNameToDataLayerInstance,FVar4)->WeakPtr;
          if (this_02 == (FWeakObjectPtr *)0x0) goto LAB_148a472c1;
          local_a0 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_02);
        }
        else {
          local_a0 = *ppUVar12;
        }
      }
      if (local_a0 != (UDataLayerInstance *)0x0) {
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_a0) &&
            ((FScriptContainerElement *)&local_a0 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == param_2->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar9 + 1;
        *(UDataLayerInstance **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_a0
        ;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// operator() @ 148a473b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UDataLayerManager::DrawDataLayersStatus'::__l19::<lambda_4>::operator()
          (void *this,UDataLayerInstance *param_1,EWorldPartitionRuntimeCellState param_2)

{
  UWorldPartitionSubsystem *this_00;
  code *pcVar1;
  ForAnyElementType _Src;
  uint uVar2;
  void *_Src_00;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStackY_2d8 [32];
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> local_288;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined1 local_24c;
  ForAnyElementType local_248;
  undefined8 local_240;
  undefined2 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined1 local_210 [32];
  void *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ForElementType<FSetElementId> local_1d0;
  int local_1c8;
  undefined1 local_1c0 [32];
  void *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ForElementType<FSetElementId> local_180;
  int local_178;
  void *local_170;
  undefined8 local_168;
  TVector<double>_u_0 local_158;
  undefined4 local_140;
  undefined1 local_13c;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_100;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> local_b0;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [3];
  ulonglong local_48;
  
  uVar9 = _UNK_150631d98;
  uVar8 = ___xmm_00000000ffffffff0000008000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_250 = 0;
  local_230 = 0;
  local_24c = 1;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210._0_8_ = (FScriptContainerElement *)0x0;
  local_210._8_8_ = 0;
  local_1f0 = (void *)0x0;
  local_1e8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_1e0 = _UNK_150631d98;
  local_1d0 = (ForElementType<FSetElementId>)0x0;
  local_1c8 = 0;
  local_1c0._0_8_ = (FScriptContainerElement *)0x0;
  local_1c0._8_8_ = 0;
  local_1a0 = (void *)0x0;
  local_198 = ___xmm_00000000ffffffff0000008000000000;
  uStack_190 = _UNK_150631d98;
  local_180 = (ForElementType<FSetElementId>)0x0;
  local_178 = 0;
  local_170 = (void *)0x0;
  local_168 = 0;
  local_238 = 1;
  pFVar6 = (FScriptContainerElement *)(**(code **)(param_1->_padding_ + 800))(param_1,local_278);
  if (((local_248.Data <= pFVar6) && (pFVar6 < local_248.Data + (longlong)local_240._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), uVar8 = ___xmm_00000000ffffffff0000008000000000, uVar9 = _UNK_150631d98,
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_240;
  if ((int)local_240 == local_240._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_248,(int *)((longlong)&local_240 + 4));
    uVar8 = ___xmm_00000000ffffffff0000008000000000;
    uVar9 = _UNK_150631d98;
  }
  _Src.Data = local_248.Data;
  local_130 = iVar5 + 1;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_240 = CONCAT44(local_240._4_4_,local_130);
  *(undefined8 *)(local_248.Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar6;
  lVar7 = (longlong)local_130;
  this_00 = *(UWorldPartitionSubsystem **)this;
  local_158._s_0.X = local_268;
  local_158._s_0.Y = dStack_260;
  local_140 = local_250;
  local_158._s_0.Z = local_258;
  local_13c = local_24c;
  if (local_130 == 0) {
    local_12c = 0;
    local_100.Elements._40_8_ = uVar8;
    local_100.Elements._48_8_ = uVar9;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_130,0,&local_138,local_130,&local_12c);
    memcpy(local_138.Data,_Src.Data,lVar7 << 3);
    local_100.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_100.Elements._48_8_ = _UNK_150631d98;
  }
  local_128 = (undefined1)local_238;
  local_127 = local_238._1_1_;
  local_108 = local_218;
  local_120 = local_230;
  uStack_118 = uStack_228;
  local_100.Elements._0_8_ = 0;
  local_110 = uStack_220;
  local_100.Elements._8_8_ = 0;
  local_100.Elements._32_8_ = 0;
  local_100.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_100.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&local_100,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_210);
  local_b0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_b0.Elements._48_8_ = _UNK_150631d98;
  local_b0.Elements._0_8_ = 0;
  local_b0.Elements._8_8_ = 0;
  local_b0.Elements._32_8_ = 0;
  local_b0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b0.HashSize = 0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::operator=
            (&local_b0,
             (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
             local_1c0);
  _Src_00 = local_170;
  lVar7 = (longlong)(int)local_168;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = (int)local_168;
  if ((int)local_168 == 0) {
    local_54[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(int)local_168,0,&local_60,(int)local_168,local_54);
    memcpy(local_60.Data,_Src_00,lVar7 * 0x48);
  }
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x108,8,1,0,&local_288.AllocatorInstance,1,&local_288.ArrayMax);
  ConstructItems<FWorldPartitionStreamingQuerySource,FWorldPartitionStreamingQuerySource,int>
            (local_288.AllocatorInstance.Data,(FWorldPartitionStreamingQuerySource *)&local_158._s_0
             ,1);
  bVar3 = UWorldPartitionSubsystem::IsStreamingCompleted(this_00,param_2,&local_288,true);
  DestructItems<FWorldPartitionStreamingQuerySource,int>
            ((FWorldPartitionStreamingQuerySource *)local_288.AllocatorInstance.Data,
             local_288.ArrayNum);
  if ((FWorldPartitionStreamingQuerySource *)local_288.AllocatorInstance.Data !=
      (FWorldPartitionStreamingQuerySource *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_b0.HashSize = 0;
  if (local_b0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b0.Elements);
  local_100.HashSize = 0;
  if (local_100.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_100.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_100.Elements);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_170 != (void *)0x0) {
    FMemory::Free(local_170);
  }
  local_178 = 0;
  if (local_180 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_180);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1c0,0,local_1c0._8_4_);
  iVar5 = SUB84(local_1c0._8_8_,4);
  local_1c0._8_8_ = local_1c0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1c0,0,(int *)(local_1c0 + 0xc));
  }
  uVar2 = local_198._4_4_;
  uStack_190 = 0xffffffff;
  local_198 = (ulonglong)local_198._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_198 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1c0 + 0x10),0);
  }
  if (local_1a0 != (void *)0x0) {
    FMemory::Free(local_1a0);
  }
  if ((FScriptContainerElement *)local_1c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c0._0_8_);
  }
  local_1c8 = 0;
  if (local_1d0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d0);
  }
  iVar5 = SUB84(local_210._8_8_,4);
  local_210._8_8_ = local_210._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_210,0,(int *)(local_210 + 0xc));
  }
  uVar2 = local_1e8._4_4_;
  uStack_1e0 = 0xffffffff;
  local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_1e8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_210 + 0x10),0);
  }
  if (local_1f0 != (void *)0x0) {
    FMemory::Free(local_1f0);
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
  return bVar3;
}

// BroadcastOnDataLayerInstanceRuntimeStateChanged @ 148a4a760

void __thiscall
UDataLayerManager::BroadcastOnDataLayerInstanceRuntimeStateChanged
          (UDataLayerManager *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  UDataLayerInstance *local_18;
  EDataLayerRuntimeState local_10;
  
  lVar3 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar3 == 0) goto LAB_148a4a81f;
  pUVar4 = UDataLayerSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_148a4a7be;
LAB_148a4a7ec:
    pUVar4 = (UClass *)0x0;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_148a4a7ec;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_148a4a7be:
    pUVar5 = UDataLayerSubsystem::StaticClass();
    if (pUVar5 == (UClass *)0x0) goto LAB_148a4a7ec;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148a4a7ec;
  }
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)(lVar3 + 0xac0),pUVar4);
  if (pUVar6 != (USubsystem *)0x0) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6[1]._padding_,
               &local_18);
  }
LAB_148a4a81f:
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnDataLayerInstanceRuntimeStateChanged,&local_18);
  return;
}

// ConvertArgsToDataLayers @ 148a4dc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148a4df26) */
/* WARNING: Removing unreachable block (ram,0x000148a4e341) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataLayerManager::ConvertArgsToDataLayers
          (UDataLayerManager *this,
          TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  UDataLayerManager *this_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  FString *pFVar6;
  void *pvVar7;
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UWorld *this_01;
  AWorldDataLayers *this_02;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_5f8 [32];
  ForAnyElementType local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  undefined1 local_595 [5];
  FString local_590;
  FString local_580;
  FString local_570;
  uint local_560;
  UDataLayerManager *local_558;
  FName local_550;
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *local_548;
  code *local_540;
  code **local_538;
  FString local_530;
  TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator> *local_520
  ;
  FString *local_518;
  undefined1 *local_510;
  code *local_508;
  TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>
  **local_500;
  undefined1 *local_4f8;
  FName local_4f0;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator> local_4b8;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  bVar3 = false;
  local_468.End = (wchar_t *)local_48;
  local_560 = param_1->ArrayNum;
  uVar5 = (ulonglong)(int)local_560;
  local_4b8.Elements._0_8_ = 0;
  pFVar16 = pFVar14 + uVar5 * 0x10;
  local_4b8.Elements._8_8_ = 0;
  local_4b8.Elements._32_8_ = 0;
  local_4b8.Elements._40_4_ = 0;
  local_4b8.Elements._44_4_ = 0x80;
  local_4b8.Elements._48_4_ = 0xffffffff;
  local_4b8.Elements._52_4_ = 0;
  local_4b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4b8.HashSize = 0;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_5a8.Data = (FScriptContainerElement *)0x0;
  local_5a0 = 0;
  local_558 = this;
  local_548 = __return_storage_ptr__;
LAB_148a4dd00:
  do {
    while( true ) {
      if (param_1->ArrayNum != (int)uVar5) {
        local_598 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_598);
      }
      if (pFVar14 == pFVar16) {
        if (bVar3) {
          if (local_468.End < local_468.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,1);
          }
          *local_468.CurPos = L'\0';
          ::FString::FString(&local_570,local_468.Base);
          if (((local_5a8.Data <= (FScriptContainerElement *)&local_570) &&
              ((FScriptContainerElement *)&local_570 <
               local_5a8.Data + (longlong)local_5a0._4_4_ * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar8 = (TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar8;
          }
          iVar4 = (int)local_5a0;
          if ((int)local_5a0 == local_5a0._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_5a8,(int *)((longlong)&local_5a0 + 4));
          }
          local_5a0 = CONCAT44(local_5a0._4_4_,iVar4 + 1);
          pFVar14 = local_5a8.Data + (longlong)iVar4 * 0x10;
          *(undefined8 *)pFVar14 = 0;
          *(FScriptContainerElement **)pFVar14 = local_570.Data.AllocatorInstance.Data;
          local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar14 + 8) = local_570.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_570.Data.ArrayMax;
          local_570.Data.ArrayNum = 0;
          local_570.Data.ArrayMax = 0;
        }
        this_00 = local_558;
        iVar4 = (int)local_5a0;
        pFVar14 = local_5a8.Data + (longlong)(int)local_5a0 * 0x10;
        FVar15.Data = local_5a8.Data;
        while( true ) {
          if ((int)local_5a0 != iVar4) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_595);
          }
          pTVar8 = local_548;
          if (FVar15.Data == pFVar14) break;
          iVar12 = *(int *)(FVar15.Data + 8) + -1;
          if (*(int *)(FVar15.Data + 8) == 0) {
            iVar12 = 0;
          }
          pFVar9 = ::FName::FName(&local_4f0,iVar12,*(wchar_t **)FVar15.Data,FNAME_Add);
          local_550 = *pFVar9;
          local_597 = 0;
          pFVar6 = ::FName::ToString(&local_550,&local_4c8);
          ::FString::Replace(pFVar6,&local_530,L" ",L"",IgnoreCase);
          if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
          }
          local_520 = &local_4b8;
          local_518 = &local_530;
          local_510 = &local_597;
          pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
          this_01 = (UWorld *)
                    UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar10);
          this_02 = UWorld::GetWorldDataLayers(this_01);
          if (this_02 != (AWorldDataLayers *)0x0) {
            local_500 = &local_520;
            local_596 = 0;
            local_4f8 = &local_596;
            local_508 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UDataLayerManager::ConvertArgsToDataLayers'::__l30::<lambda_1>,bool,UDataLayerInstance_*>
                        ::Call;
            local_538 = &local_508;
            local_540 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UDataLayerManager::ForEachDataLayerInstance'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
                        ::Call;
            AWorldDataLayers::ForEachDataLayerInstance
                      (this_02,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_540);
          }
          if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_530.Data.AllocatorInstance.Data);
          }
          FVar15.Data = FVar15.Data + 0x10;
        }
        TSet<UDataLayerInstance_*,DefaultKeyFuncs<UDataLayerInstance_*,0>,FDefaultSetAllocator>::
        Array(&local_4b8,local_548);
        DestructItems<FString,int>((FString *)local_5a8.Data,(int)local_5a0);
        if (local_5a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a8.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
        local_4b8.HashSize = 0;
        if (local_4b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4b8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<UDataLayerInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UDataLayerInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_4b8.Elements);
        return pTVar8;
      }
      if (!bVar3) break;
      if (local_468.End < local_468.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,1);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,&::u__,2);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
      pFVar6 = ::FString::Replace((FString *)pFVar14,&local_4d8,L"\"",L"",IgnoreCase);
      iVar12 = (pFVar6->Data).ArrayNum;
      pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
      iVar4 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar4 = 0;
      }
      uVar13 = (ulong64)iVar4;
      if (local_468.End < local_468.CurPos + uVar13) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar13);
      }
      if (iVar4 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar11,uVar13 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar7 + uVar13 * 2);
      }
      if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      }
      bVar2 = ::FString::EndsWith((FString *)pFVar14,L"\"",1,IgnoreCase);
      if (bVar2) {
        bVar3 = false;
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'\0';
        ::FString::FString(&local_580,local_468.Base);
        if (((local_5a8.Data <= (FScriptContainerElement *)&local_580) &&
            ((FScriptContainerElement *)&local_580 <
             local_5a8.Data + (longlong)local_5a0._4_4_ * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar8 = (TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar8;
        }
        iVar4 = (int)local_5a0;
        if ((int)local_5a0 == local_5a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_5a8,(int *)((longlong)&local_5a0 + 4));
        }
        local_5a0 = CONCAT44(local_5a0._4_4_,iVar4 + 1);
        pFVar11 = local_5a8.Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_580.Data.AllocatorInstance.Data;
        local_580.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 8) = local_580.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_580.Data.ArrayMax;
        local_580.Data.ArrayNum = 0;
        local_580.Data.ArrayMax = 0;
LAB_148a4df21:
        pFVar14 = pFVar14 + 0x10;
        local_468.CurPos = local_468.Base;
        uVar5 = (ulonglong)local_560;
      }
      else {
        uVar5 = (ulonglong)local_560;
        pFVar14 = pFVar14 + 0x10;
      }
    }
    bVar2 = ::FString::StartsWith((FString *)pFVar14,L"\"",1,IgnoreCase);
    if (bVar2) {
      pFVar6 = ::FString::Replace((FString *)pFVar14,&local_4e8,L"\"",L"",IgnoreCase);
      iVar12 = (pFVar6->Data).ArrayNum;
      pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
      iVar4 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar4 = 0;
      }
      uVar13 = (ulong64)iVar4;
      if (local_468.End < local_468.CurPos + uVar13) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar13);
      }
      if (iVar4 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar11,uVar13 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar7 + uVar13 * 2);
      }
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
      bVar2 = ::FString::EndsWith((FString *)pFVar14,L"\"",1,IgnoreCase);
      if (bVar2) {
        iVar4 = *(int *)(pFVar14 + 8) + -1;
        if (*(int *)(pFVar14 + 8) == 0) {
          iVar4 = 0;
        }
        if (1 < iVar4) {
          if (local_468.End < local_468.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,1);
          }
          *local_468.CurPos = L'\0';
          ::FString::FString(&local_590,local_468.Base);
          if (((local_5a8.Data <= (FScriptContainerElement *)&local_590) &&
              ((FScriptContainerElement *)&local_590 <
               local_5a8.Data + (longlong)local_5a0._4_4_ * 0x10)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar8 = (TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar8;
          }
          iVar4 = (int)local_5a0;
          if ((int)local_5a0 == local_5a0._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_5a8,(int *)((longlong)&local_5a0 + 4));
          }
          local_5a0 = CONCAT44(local_5a0._4_4_,iVar4 + 1);
          pFVar11 = local_5a8.Data + (longlong)iVar4 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_590.Data.AllocatorInstance.Data;
          local_590.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar11 + 8) = local_590.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_590.Data.ArrayMax;
          local_590.Data.ArrayNum = 0;
          local_590.Data.ArrayMax = 0;
          goto LAB_148a4df21;
        }
      }
      uVar5 = (ulonglong)local_560;
      bVar3 = true;
      pFVar14 = pFVar14 + 0x10;
      goto LAB_148a4dd00;
    }
    if (((local_5a8.Data <= pFVar14) &&
        (pFVar14 < local_5a8.Data + (longlong)local_5a0._4_4_ * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar8;
    }
    iVar4 = (int)local_5a0;
    if ((int)local_5a0 == local_5a0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_5a8,(int *)((longlong)&local_5a0 + 4));
    }
    local_5a0 = CONCAT44(local_5a0._4_4_,iVar4 + 1);
    ::FString::FString((FString *)(local_5a8.Data + (longlong)iVar4 * 0x10),(FString *)pFVar14);
    uVar5 = (ulonglong)local_560;
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// DeInitialize @ 148a4f2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDataLayerManager::DeInitialize(UDataLayerManager *this)

{
  int *piVar1;
  UClass *pUVar2;
  UWorld *this_00;
  AWorldDataLayers *pAVar3;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pAVar3 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar3 != (AWorldDataLayers *)0x0) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&pAVar3->ActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&pAVar3->LoadedDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&pAVar3->LocalActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&pAVar3->LocalLoadedDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&(pAVar3->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&(pAVar3->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&(pAVar3->EffectiveStates).LocalEffectiveActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              (&(pAVar3->EffectiveStates).LocalEffectiveLoadedDataLayerNames);
    piVar1 = &(pAVar3->EffectiveStates).UpdateEpoch;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

// DrawDataLayersStatus @ 148a50880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDataLayerManager::DrawDataLayersStatus
          (UDataLayerManager *this,UCanvas *param_1,TVector2<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  undefined1 *puVar3;
  code *pcVar4;
  double dVar5;
  FColor FVar6;
  FColor FVar7;
  double dVar8;
  UWorldPartitionSubsystem *pUVar9;
  bool bVar10;
  int iVar11;
  UWorld *pUVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  UPackage *pUVar14;
  FString *pFVar15;
  UFont *pUVar16;
  UClass *pUVar17;
  AWorldDataLayers *pAVar18;
  UDataLayerInstance **ppUVar19;
  FWeakObjectPtr *this_00;
  UDataLayerInstance *pUVar20;
  double *pdVar21;
  longlong *plVar22;
  byte bVar23;
  UObjectBaseUtility *pUVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> FVar28;
  int iVar29;
  double *pdVar30;
  EWorldPartitionRuntimeCellState EVar31;
  double *pdVar32;
  uint uVar33;
  uint *puVar35;
  uint uVar36;
  TMap<UDataLayerInstance_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>_>
  *this_01;
  uint uVar37;
  ForAnyElementType FVar38;
  bool bVar39;
  undefined1 auStackY_368 [32];
  undefined1 local_337;
  undefined1 local_336 [2];
  float local_334;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_330;
  TPairInitializer<UDataLayerInstance_const_*_const_&,double_&&> local_320;
  UDataLayerManager *local_310;
  UWorldPartitionSubsystem *local_308;
  UWorldPartitionSubsystem *local_300;
  int local_2f8;
  FName local_2f4;
  UDataLayerInstance *local_2e8;
  LARGE_INTEGER local_2e0;
  double local_2d8;
  LARGE_INTEGER local_2d0;
  longlong *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  FString local_298;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  UDataLayerManager *local_258;
  UCanvas *local_250;
  TVector2<double>_u_0 *local_248;
  float *local_240;
  TVector2<double>_u_0 local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  code *local_1f8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **local_1f0;
  FString local_1e8;
  double **local_1d8;
  double *local_1d0;
  FString local_1c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1b8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1b0;
  undefined1 *local_1a8;
  undefined1 local_1a0 [8];
  FString local_198 [2];
  undefined4 local_16c;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_118;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  UObjectBaseUtility *pUVar34;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId426,"UDataLayerManager::DrawDataLayersStatus",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerManager.cpp"
               ,0x1aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId426);
  }
  if ((param_1 != (UCanvas *)0x0) && (param_1->SceneView != (FSceneView *)0x0)) {
    local_238._0_4_ = *(undefined4 *)&param_2->field0_0x0;
    local_238._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    local_238._8_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    local_238._12_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_334 = 0.0;
    pUVar12 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar34 = (UObjectBaseUtility *)0x0;
    if (pUVar12 == (UWorld *)0x0) {
      local_308 = (UWorldPartitionSubsystem *)0x0;
    }
    else {
      local_308 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(pUVar12);
    }
    local_248 = &local_238;
    local_240 = &local_334;
    local_258 = this;
    local_250 = param_1;
    pTVar13 = GetEffectiveLoadedDataLayerNames(this);
    local_c8.Elements._0_8_ = 0;
    local_c8.Elements._8_8_ = 0;
    local_c8.Elements._32_8_ = 0;
    uVar33 = 0;
    local_c8.Elements._40_4_ = 0;
    local_c8.Elements._44_4_ = 0x80;
    local_c8.Elements._48_4_ = 0xffffffff;
    local_c8.Elements._52_4_ = 0;
    local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_c8.HashSize = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_c8,pTVar13);
    pTVar13 = GetEffectiveActiveDataLayerNames(this);
    local_118.Elements._0_8_ = 0;
    local_118.Elements._8_8_ = 0;
    local_118.Elements._32_8_ = 0;
    local_118.Elements._40_4_ = 0;
    local_118.Elements._44_4_ = 0x80;
    local_118.Elements._48_4_ = 0xffffffff;
    local_118.Elements._52_4_ = 0;
    local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_118.HashSize = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_118,pTVar13);
    if ((this->_padding_ & 0x10) == 0) {
      pUVar24 = (UObjectBaseUtility *)this->_padding_;
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2202103292564078641>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\DataLayerManager.h"
                          ,0x31,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      pUVar24 = pUVar34;
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar14 = UObjectBaseUtility::GetPackage(pUVar24);
    local_2f4 = (FName)pUVar14->_padding_;
    ::FName::ToString(&local_2f4,&local_1c8);
    pFVar15 = FPaths::GetBaseFilename(local_198,&local_1c8,true);
    UWorld::RemovePIEPrefix(&local_298,pFVar15,(int *)0x0);
    if (local_198[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198[0].Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pUVar16 = UEngine::GetSmallFont();
    FVar38.Data = (FScriptContainerElement *)L"";
    if (local_298.Data.ArrayNum != 0) {
      FVar38.Data = local_298.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_228,(wchar_t *)FVar38.Data);
    FWorldPartitionDebugHelper::DrawText
              (param_1,&local_228,pUVar16,&FColor::Yellow,(TVector2<double> *)&local_238._s_0,
               &local_334);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    FVar7.field0_0x0 = FColor::Cyan.field0_0x0;
    FVar6.field0_0x0 = FColor::White.field0_0x0;
    ::FString::FString(&local_218,L"Loaded Data Layers");
    `UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()
              (&local_258,&local_218,FVar7,FVar6,&local_c8);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    FVar7.field0_0x0 = FColor::Green.field0_0x0;
    FVar6.field0_0x0 = FColor::White.field0_0x0;
    ::FString::FString(&local_208,L"Active Data Layers");
    `UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()
              (&local_258,&local_208,FVar7,FVar6,&local_118);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    local_1b8 = &local_c8;
    local_168._0_8_ = 0;
    local_1b0 = &local_118;
    local_168._8_8_ = 0;
    local_1a8 = local_168;
    local_148 = (uint *)0x0;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_2>,bool,UDataLayerInstance_*>
                ::Call;
    local_1f0 = &local_1b8;
    local_140 = 0;
    local_13c = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = (ForElementType<FSetElementId>)0x0;
    local_120 = 0;
    ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_1f8);
    FVar6 = FColor::Silver;
    ::FString::FString(&local_1e8,L"Unloaded Data Layers");
    `UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()
              (&local_258,&local_1e8,FVar6,(FColor)0xffc0c0c0,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_168);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    uVar36 = local_140;
    (param_2->field0_0x0)._s_0.X =
         (double)(local_334 + __real_41200000) + (param_2->field0_0x0)._s_0.X;
    if (GDrawDataLayersLoadTime == 0) {
      this_01 = &this->ActiveDataLayersLoadTime;
      bVar10 = 1 < *(int *)&(this->ActiveDataLayersLoadTime).field_0x48;
      if (!bVar10) {
        TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
                          *)this_01);
      }
      puVar3 = &(this->ActiveDataLayersLoadTime).field_0xc;
      *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x8 = 0;
      if (*(int *)puVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
      }
      *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x34 = 0;
      iVar29 = *(int *)&(this->ActiveDataLayersLoadTime).field_0x2c;
      *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x28 = 0;
      if ((iVar29 < 0) || (0x80 < iVar29)) {
        *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ActiveDataLayersLoadTime).field_0x10,0);
      }
      if (bVar10) {
        *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x48 = 1;
        TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
                  *)this_01);
      }
    }
    else {
      uStack_2bc = 1;
      local_2a8 = 0;
      uStack_2ac = local_2a8;
      if (local_140 != 0) {
        puVar35 = (uint *)(local_168 + 0x10);
        if (local_148 != (uint *)0x0) {
          puVar35 = local_148;
        }
        uVar37 = *puVar35;
        pUVar24 = pUVar34;
        local_2a8 = 0;
        uVar33 = 0;
        while (uVar37 == 0) {
          iVar29 = (int)pUVar34;
          local_2a8 = (int)pUVar24 + 0x20;
          pUVar24 = (UObjectBaseUtility *)(ulonglong)local_2a8;
          uVar33 = iVar29 + 1;
          pUVar34 = (UObjectBaseUtility *)(ulonglong)uVar33;
          uStack_2ac = local_140;
          if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
          goto LAB_148a50d51;
          uVar37 = puVar35[(longlong)iVar29 + 1];
        }
        uStack_2bc = -uVar37 & uVar37;
        uVar26 = (ulonglong)uStack_2bc * 2 + 1;
        lVar25 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_2f8 = (int)lVar25;
        uStack_2ac = (local_2a8 - 1) + local_2f8;
        if ((int)local_140 < (int)uStack_2ac) {
          uStack_2ac = local_140;
        }
      }
LAB_148a50d51:
      local_2c8 = (longlong *)local_168;
      uStack_2a4 = local_16c;
      local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
      uVar37 = local_140 & 0xffffffe0;
      iStack_2a0 = local_168._8_4_ - local_134;
      uStack_2b0 = 0xffffffff;
      TStack_280.CurrentBitIndex = uStack_2ac;
      TStack_280.UnvisitedBitMask = 0xffffffff;
      TStack_280._padding_ = CONCAT44(uStack_2bc,uVar33);
      iVar29 = (int)local_140 >> 5;
      TStack_280._28_4_ = local_16c;
      TStack_280.BaseBitIndex = local_2a8;
      uStack_260 = CONCAT44(uStack_29c,iStack_2a0);
      bVar23 = (byte)local_140;
      uStack_2c0 = uVar33;
      local_288 = local_2c8;
      TStack_280.Array = local_2b8;
      if (((int)local_140 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar36 != local_140) {
        puVar35 = (uint *)(local_168 + 0x10);
        if (local_148 != (uint *)0x0) {
          puVar35 = local_148;
        }
        uVar33 = -1 << (bVar23 & 0x1f) & puVar35[iVar29];
        while (uVar33 == 0) {
          lVar25 = (longlong)iVar29;
          uVar37 = uVar37 + 0x20;
          iVar29 = iVar29 + 1;
          uVar36 = local_140;
          if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
          goto LAB_148a50e62;
          uVar33 = puVar35[lVar25 + 1];
        }
        uVar26 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar36 = (uVar37 - 1) + (int)lVar25;
        if ((int)local_140 < (int)uVar36) {
          uVar36 = local_140;
        }
      }
LAB_148a50e62:
      while( true ) {
        plVar22 = local_288;
        if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_337);
        }
        if (((TStack_280.CurrentBitIndex == uVar36) &&
            (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
           (plVar22 == (longlong *)local_168)) break;
        FVar2 = *(FName *)(*plVar22 + (longlong)TStack_280.CurrentBitIndex * 0x10);
        pUVar17 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar12 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar17);
        pAVar18 = UWorld::GetWorldDataLayers(pUVar12);
        if (pAVar18 != (AWorldDataLayers *)0x0) {
          if (FVar2 == (FName)0x0) {
LAB_148a50f25:
            pUVar20 = (UDataLayerInstance *)0x0;
          }
          else {
            ppUVar19 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                       ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                               *)&pAVar18->InstanceNameToInstance,FVar2);
            if (ppUVar19 == (UDataLayerInstance **)0x0) {
              this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                         ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                                 *)&pAVar18->DeprecatedDataLayerNameToDataLayerInstance,FVar2)->
                         WeakPtr;
              if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_148a50f25;
              pUVar20 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
            }
            else {
              pUVar20 = *ppUVar19;
            }
          }
          if ((pUVar20 != (UDataLayerInstance *)0x0) &&
             (local_2e8 = pUVar20,
             *(int *)&(this->ActiveDataLayersLoadTime).field_0x8 !=
             *(int *)&(this->ActiveDataLayersLoadTime).field_0x34)) {
            uVar33 = ((uint)((ulonglong)pUVar20 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar20 >> 4))
                     * -0x7a143595;
            uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
            TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
            ::RemoveImpl<UDataLayerInstance_const_*>
                      ((TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
                        *)&this->ActiveDataLayersLoadTime,uVar33 >> 0x10 ^ uVar33,&local_2e8);
          }
        }
        TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
      }
      uVar33 = ((local_118.Elements._8_4_ - local_118.Elements._52_4_) - local_c8.Elements._52_4_) +
               local_c8.Elements._8_4_;
      local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_330.ArrayNum = 0;
      local_330.ArrayMax = 0;
      if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
      }
      if (0 < (int)uVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar33,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
      }
      local_310 = this;
      `UDataLayerManager::DrawDataLayersStatus'::__l8::<lambda_3>::operator()
                (&local_310,&local_c8,&local_330);
      `UDataLayerManager::DrawDataLayersStatus'::__l8::<lambda_3>::operator()
                (&local_310,&local_118,&local_330);
      pUVar9 = local_308;
      dVar8 = __real_c170000000000000;
      dVar5 = __real_4170000000000000;
      iVar29 = local_330.ArrayNum;
      uVar26 = (ulonglong)local_330.ArrayNum;
      pFVar1 = local_330.AllocatorInstance.Data + uVar26 * 8;
      FVar38.Data = local_330.AllocatorInstance.Data;
      while( true ) {
        pdVar32 = (double *)0x0;
        if ((int)uVar26 != iVar29) {
          `TCheckedPointerIterator<UDataLayerInstance_const_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_336);
        }
        if (FVar38.Data == pFVar1) break;
        local_320.Value = *(double **)FVar38.Data;
        uVar33 = ((uint)((ulonglong)local_320.Value >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_320.Value >> 4)) * -0x7a143595;
        uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
        pdVar21 = pdVar32;
        if (*(int *)&(this->ActiveDataLayersLoadTime).field_0x8 !=
            *(int *)&(this->ActiveDataLayersLoadTime).field_0x34) {
          puVar3 = *(undefined1 **)&(this->ActiveDataLayersLoadTime).field_0x40;
          puVar27 = &(this->ActiveDataLayersLoadTime).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar27 = puVar3;
          }
          iVar11 = *(int *)(puVar27 +
                           (ulonglong)
                           (*(int *)&(this->ActiveDataLayersLoadTime).field_0x48 - 1U &
                           (uVar33 >> 0x10 ^ uVar33)) * 4);
          if (iVar11 != -1) {
            do {
              pdVar21 = (double *)
                        (*(longlong *)&this->ActiveDataLayersLoadTime + (longlong)iVar11 * 0x18);
              if (*(UDataLayerInstance **)
                   (*(longlong *)&this->ActiveDataLayersLoadTime + (longlong)iVar11 * 0x18) ==
                  (UDataLayerInstance *)local_320.Value) break;
              iVar11 = *(int *)(pdVar21 + 2);
              pdVar21 = pdVar32;
            } while (iVar11 != -1);
          }
        }
        local_300 = pUVar9;
        pdVar30 = pdVar21 + 1;
        if (pdVar21 == (double *)0x0) {
          pdVar30 = pdVar32;
        }
        plVar22 = (longlong *)
                  (**(code **)(((UDataLayerInstance *)local_320.Value)->_padding_ + 800))
                            (local_320.Value,local_1a0);
        lVar25 = *plVar22;
        uVar33 = ::GetTypeHash((FNameEntryId)(uint)lVar25);
        if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
          FVar28 = (ForElementType<FSetElementId>)&local_118.Hash;
          if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar28 = local_118.Hash.SecondaryData;
          }
          for (iVar11 = *(int *)((longlong)FVar28 +
                                (ulonglong)
                                (local_118.HashSize - 1U & (int)((ulonglong)lVar25 >> 0x20) + uVar33
                                ) * 4); iVar11 != -1;
              iVar11 = *(int *)(local_118.Elements._0_8_ + 8 + (longlong)iVar11 * 0x10)) {
            if (*(longlong *)(local_118.Elements._0_8_ + (longlong)iVar11 * 0x10) == lVar25)
            goto LAB_148a5117c;
          }
        }
        iVar11 = -1;
LAB_148a5117c:
        EVar31 = (iVar11 != -1) + Loaded;
        if (pdVar30 == (double *)0x0) {
          bVar10 = `UDataLayerManager::DrawDataLayersStatus'::__l19::<lambda_4>::operator()
                             (&local_300,(UDataLayerInstance *)local_320.Value,EVar31);
          if (!bVar10) {
            QueryPerformanceCounter(&local_2e0);
            local_1d8 = &local_320.Value;
            local_1d0 = &local_2d8;
            local_2d8 = dVar8 - (double)local_2e0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UDataLayerInstance_const_*_const_&,double_&&>_>
                      ((TSet<TTuple<UDataLayerInstance_const_*,double>,TDefaultMapHashableKeyFuncs<UDataLayerInstance_const_*,double,0>,FDefaultSetAllocator>
                        *)&this->ActiveDataLayersLoadTime,&local_320,(bool *)&local_1d8);
            pdVar30 = (double *)
                      (*(longlong *)&this->ActiveDataLayersLoadTime +
                      ((longlong)(int)local_320.Key * 3 + 1) * 8);
            if (pdVar30 != (double *)0x0) goto LAB_148a5121a;
          }
        }
        else {
LAB_148a5121a:
          if ((*pdVar30 <= 0.0 && *pdVar30 != 0.0) &&
             (bVar10 = `UDataLayerManager::DrawDataLayersStatus'::__l19::<lambda_4>::operator()
                                 (&local_300,(UDataLayerInstance *)local_320.Value,EVar31), bVar10))
          {
            QueryPerformanceCounter(&local_2d0);
            *pdVar30 = (double)local_2d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + *pdVar30
                       + dVar5;
          }
        }
        uVar26 = local_330._8_8_ & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
      }
      if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.AllocatorInstance.Data);
      }
    }
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_168);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DumpDataLayers @ 148a51800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDataLayerManager::DumpDataLayers(UDataLayerManager *this,FOutputDevice *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *pUVar3;
  AWorldDataLayers *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  FName local_res18 [2];
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  this_00 = UWorld::GetWorldDataLayers(pUVar3);
  if (this_00 != (AWorldDataLayers *)0x0) {
    FOutputDevice::Log(param_1,L"====================================================");
    local_res18[0] = (FName)this_00->_padding_;
    ::FName::ToString(local_res18,(FString *)local_28);
    FOutputDevice::LogfImpl(param_1,L" Data Layers for %s");
    if ((AWorldDataLayers *)local_28._0_8_ != (AWorldDataLayers *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    FOutputDevice::Log(param_1,L"====================================================");
    FOutputDevice::Log(param_1,L"");
    pUVar3 = AActor::GetWorld((AActor *)this_00);
    bVar1 = UWorld::IsGameWorld(pUVar3);
    if ((bVar1) &&
       ((local_28._0_8_ = this_00, local_28._8_8_ = param_1,
        pTVar4 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                           (&this_00->EffectiveStates),
        *(int *)&(pTVar4->Elements).field_0x8 != *(int *)&(pTVar4->Elements).field_0x34 ||
        (pTVar4 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                            (&this_00->EffectiveStates),
        *(int *)&(pTVar4->Elements).field_0x8 != *(int *)&(pTVar4->Elements).field_0x34)))) {
      FOutputDevice::Log(param_1,L"----------------------------------------------------");
      FOutputDevice::Log(param_1,L" Data Layers Runtime States");
      pTVar4 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                         (&this_00->EffectiveStates);
      `AWorldDataLayers::DumpDataLayers'::__l5::<lambda_1>::operator()(local_28,L"Loaded",pTVar4);
      pTVar4 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                         (&this_00->EffectiveStates);
      `AWorldDataLayers::DumpDataLayers'::__l5::<lambda_1>::operator()(local_28,L"Active",pTVar4);
      FOutputDevice::Log(param_1,L"----------------------------------------------------");
      FOutputDevice::Log(param_1,L"");
    }
    FOutputDevice::Log(param_1,L"----------------------------------------------------");
    FOutputDevice::Log(param_1,L" Data Layers Hierarchy");
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`AWorldDataLayers::DumpDataLayers'::__l2::<lambda_2>,bool,UDataLayerInstance_*>
               ::Call;
    local_10 = local_28;
    local_28._0_8_ = this_00;
    local_28._8_8_ = param_1;
    AWorldDataLayers::ForEachDataLayerInstance
              (this_00,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_18);
    FOutputDevice::Log(param_1,L"----------------------------------------------------");
  }
  return;
}

// ForEachDataLayerInstance @ 148a538b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDataLayerManager::ForEachDataLayerInstance
          (UDataLayerManager *this,TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  undefined1 local_res18 [16];
  code *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  if (this_01 != (AWorldDataLayers *)0x0) {
    local_28 = *(undefined8 *)param_1;
    local_20 = *(undefined8 *)&param_1->field_0x8;
    local_18 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDataLayerManager::ForEachDataLayerInstance'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
               ::Call;
    local_res18[0] = 0;
    AWorldDataLayers::ForEachDataLayerInstance
              (this_01,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_38);
  }
  return;
}

// ForEachDataLayerInstance @ 148a53940

void __thiscall
UDataLayerManager::ForEachDataLayerInstance
          (UDataLayerManager *this,TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *param_1)

{
  TFunctionRef<bool___cdecl(UDataLayerInstance_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  ForEachDataLayerInstance(this,&local_18);
  return;
}

// GetDataLayerInstanceEffectiveRuntimeState @ 148a55dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState
          (UDataLayerManager *this,UDataLayerInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  EDataLayerRuntimeState EVar3;
  longlong lVar4;
  UWorld *this_00;
  AWorldDataLayers *pAVar5;
  FName *pFVar6;
  undefined1 local_res10 [24];
  
  if (param_1 == (UDataLayerInstance *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
    return Unloaded;
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  pAVar5 = UWorld::GetWorldDataLayers(this_00);
  pFVar6 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,local_res10);
  EVar3 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                    (&pAVar5->EffectiveStates,*pFVar6);
  return EVar3;
}

// GetDataLayerInstanceFromAsset @ 148a55ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerManager::GetDataLayerInstanceFromAsset(UDataLayerManager *this,UDataLayerAsset *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  FString *pFVar3;
  UDataLayerInstance **ppUVar4;
  FString local_18;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  if ((pAVar2 != (AWorldDataLayers *)0x0) && (param_1 != (UDataLayerAsset *)0x0)) {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0)
    ;
    ppUVar4 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&pAVar2->AssetNameToInstance,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar4 != (UDataLayerInstance **)0x0) {
      return *ppUVar4;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceFromAssetName @ 148a56000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerManager::GetDataLayerInstanceFromAssetName(UDataLayerManager *this,FName *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  FString *pFVar3;
  UDataLayerInstance **ppUVar4;
  FString local_18;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  if ((pAVar2 != (AWorldDataLayers *)0x0) && (*param_1 != (FName)0x0)) {
    pFVar3 = ::FName::ToString(param_1,&local_18);
    ppUVar4 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&pAVar2->AssetNameToInstance,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar4 != (UDataLayerInstance **)0x0) {
      return *ppUVar4;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceFromName @ 148a56130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerManager::GetDataLayerInstanceFromName(UDataLayerManager *this,FName *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar2 = AWorldDataLayers::GetDataLayerInstance(this_01,param_1);
    return pUVar2;
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceRuntimeState @ 148a56350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerManager::GetDataLayerInstanceRuntimeState
          (UDataLayerManager *this,UDataLayerInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  EDataLayerRuntimeState EVar3;
  longlong lVar4;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  FName *pFVar5;
  undefined1 local_res10 [24];
  
  if (param_1 == (UDataLayerInstance *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
    return Unloaded;
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  pFVar5 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,local_res10);
  EVar3 = AWorldDataLayers::GetDataLayerRuntimeStateByName(this_01,*pFVar5);
  return EVar3;
}

// GetDataLayerInstances @ 148a56760

TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataLayerManager::GetDataLayerInstances
          (UDataLayerManager *this,
          TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_18;
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDataLayerManager::GetDataLayerInstances'::__l2::<lambda_1>,bool,UDataLayerInstance_*>
             ::Call;
  local_10 = local_res10;
  local_res10[0] = __return_storage_ptr__;
  ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_18);
  return __return_storage_ptr__;
}

// GetEffectiveActiveDataLayerNames @ 148a57a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UDataLayerManager::GetEffectiveActiveDataLayerNames(UDataLayerManager *this)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDataLayerManager::GetEffectiveActiveDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar2 != (AWorldDataLayers *)0x0) {
    pTVar3 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                       (&pAVar2->EffectiveStates);
    return pTVar3;
  }
  return &EmptySet;
}

// GetEffectiveLoadedDataLayerNames @ 148a57bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UDataLayerManager::GetEffectiveLoadedDataLayerNames(UDataLayerManager *this)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDataLayerManager::GetEffectiveLoadedDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar2 != (AWorldDataLayers *)0x0) {
    pTVar3 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                       (&pAVar2->EffectiveStates);
    return pTVar3;
  }
  return &EmptySet;
}

// GetPrivateStaticClass @ 148a5a560

UClass * __cdecl UDataLayerManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerManager",
               &Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton,
               StaticRegisterNativesUDataLayerManager,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerManager>,
               InternalVTableHelperCtorCaller<UDataLayerManager>,local_res8,UObject::StaticClass,
               UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton;
}

// GetWorldDataLayers @ 148a5b620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AWorldDataLayers * __thiscall UDataLayerManager::GetWorldDataLayers(UDataLayerManager *this)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *pAVar2;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar2 = UWorld::GetWorldDataLayers(this_00);
  return pAVar2;
}

// Initialize @ 148a5c260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDataLayerManager::Initialize(UDataLayerManager *this)

{
  UClass *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  if (this_01 != (AWorldDataLayers *)0x0) {
    AWorldDataLayers::InitializeDataLayerRuntimeStates(this_01);
    return;
  }
  return;
}

// IsAllDataLayerInEffectiveRuntimeState @ 148a5d9f0

bool __cdecl
UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState
          (TArrayView<FName_const_,int> *param_1,EDataLayerRuntimeState param_2,
          FWorldDataLayersEffectiveStates *param_3)

{
  FName *pFVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  
  if (param_2 == Activated) {
    pFVar8 = param_1->DataPtr;
    pFVar1 = pFVar8 + param_1->ArrayNum;
    if (pFVar8 != pFVar1) {
      pTVar6 = &param_3->AllEffectiveActiveDataLayerNames;
      do {
        if (param_3->AllEffectiveActiveDataLayerNamesEpoch != param_3->UpdateEpoch) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                    (pTVar6,&param_3->ReplicatedEffectiveActiveDataLayerNames);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                    (pTVar6,&param_3->LocalEffectiveActiveDataLayerNames);
          param_3->AllEffectiveActiveDataLayerNamesEpoch = param_3->UpdateEpoch;
        }
        FVar2 = *pFVar8;
        uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if (*(int *)&(param_3->AllEffectiveActiveDataLayerNames).Elements.field_0x8 ==
            *(int *)&(param_3->AllEffectiveActiveDataLayerNames).Elements.field_0x34) {
          return false;
        }
        FVar3 = (param_3->AllEffectiveActiveDataLayerNames).Hash.SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&(param_3->AllEffectiveActiveDataLayerNames).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((param_3->AllEffectiveActiveDataLayerNames).HashSize - 1U &
                        FVar2.Number + uVar4) * 4);
        if (iVar5 == -1) {
          return false;
        }
        while (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar5 * 0x10) != FVar2) {
          iVar5 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar5 * 0x10);
          if (iVar5 == -1) {
            return false;
          }
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar1);
    }
  }
  else if (param_2 == Loaded) {
    pFVar8 = param_1->DataPtr;
    pFVar1 = pFVar8 + param_1->ArrayNum;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
      pTVar6 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames(param_3);
      FVar2 = *pFVar8;
      uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
        FVar3 = (pTVar6->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&pTVar6->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        (ulonglong)(pTVar6->HashSize - 1U & FVar2.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar5 * 0x10) == FVar2)
            goto LAB_148a5dbdb;
            iVar5 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar5 * 0x10);
          } while (iVar5 != -1);
        }
      }
      pTVar6 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames(param_3);
      FVar2 = *pFVar8;
      uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(pTVar6->Elements).field_0x8 == *(int *)&(pTVar6->Elements).field_0x34) {
        return false;
      }
      FVar3 = (pTVar6->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&pTVar6->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      iVar5 = *(int *)((longlong)FVar7 +
                      (ulonglong)(pTVar6->HashSize - 1U & FVar2.Number + uVar4) * 4);
      if (iVar5 == -1) {
        return false;
      }
      while (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar5 * 0x10) != FVar2) {
        iVar5 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar5 * 0x10);
        if (iVar5 == -1) {
          return false;
        }
      }
LAB_148a5dbdb:
    }
  }
  return true;
}

// IsAllDataLayerInEffectiveRuntimeState @ 148a5dc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState
          (UDataLayerManager *this,TArrayView<FName_const_,int> *param_1,
          EDataLayerRuntimeState param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UWorld *this_00;
  AWorldDataLayers *pAVar5;
  FWorldDataLayersEffectiveStates *pFVar6;
  TArrayView<FName_const_,int> local_18;
  
  pFVar6 = &EmptyStates;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&EmptyStates);
      atexit(`UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState'::__l2::
             _dynamic_atexit_destructor_for__EmptyStates__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  pAVar5 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar5 != (AWorldDataLayers *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x174,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar6 = &pAVar5->EffectiveStates;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar2 = IsAllDataLayerInEffectiveRuntimeState(&local_18,param_2,pFVar6);
  return bVar2;
}

// IsAnyDataLayerInEffectiveRuntimeState @ 148a5dd20

bool __cdecl
UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState
          (TArrayView<FName_const_,int> *param_1,EDataLayerRuntimeState param_2,
          FWorldDataLayersEffectiveStates *param_3)

{
  FName *pFVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  
  if (param_2 == Activated) {
    pFVar8 = param_1->DataPtr;
    pFVar1 = pFVar8 + param_1->ArrayNum;
    if (pFVar8 != pFVar1) {
      pTVar6 = &param_3->AllEffectiveActiveDataLayerNames;
      do {
        if (param_3->AllEffectiveActiveDataLayerNamesEpoch != param_3->UpdateEpoch) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                    (pTVar6,&param_3->ReplicatedEffectiveActiveDataLayerNames);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                    (pTVar6,&param_3->LocalEffectiveActiveDataLayerNames);
          param_3->AllEffectiveActiveDataLayerNamesEpoch = param_3->UpdateEpoch;
        }
        FVar2 = *pFVar8;
        uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if (*(int *)&(param_3->AllEffectiveActiveDataLayerNames).Elements.field_0x8 !=
            *(int *)&(param_3->AllEffectiveActiveDataLayerNames).Elements.field_0x34) {
          FVar3 = (param_3->AllEffectiveActiveDataLayerNames).Hash.SecondaryData;
          FVar7 = (ForElementType<FSetElementId>)&(param_3->AllEffectiveActiveDataLayerNames).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar3;
          }
          iVar5 = *(int *)((longlong)FVar7 +
                          (ulonglong)
                          ((param_3->AllEffectiveActiveDataLayerNames).HashSize - 1U &
                          FVar2.Number + uVar4) * 4);
          if (iVar5 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar5 * 0x10) == FVar2) {
                return true;
              }
              iVar5 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar5 * 0x10);
            } while (iVar5 != -1);
          }
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar1);
    }
  }
  else if (param_2 == Loaded) {
    pFVar8 = param_1->DataPtr;
    pFVar1 = pFVar8 + param_1->ArrayNum;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
      pTVar6 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames(param_3);
      FVar2 = *pFVar8;
      uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
        FVar3 = (pTVar6->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&pTVar6->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        (ulonglong)(pTVar6->HashSize - 1U & FVar2.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar5 * 0x10) == FVar2) {
              return true;
            }
            iVar5 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar5 * 0x10);
          } while (iVar5 != -1);
        }
      }
    }
  }
  return false;
}

// IsAnyDataLayerInEffectiveRuntimeState @ 148a5dec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState
          (UDataLayerManager *this,TArrayView<FName_const_,int> *param_1,
          EDataLayerRuntimeState param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UWorld *this_00;
  AWorldDataLayers *pAVar5;
  FWorldDataLayersEffectiveStates *pFVar6;
  TArrayView<FName_const_,int> local_18;
  
  pFVar6 = &EmptyStates;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&EmptyStates);
      atexit(`UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState'::__l2::
             _dynamic_atexit_destructor_for__EmptyStates__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  pAVar5 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar5 != (AWorldDataLayers *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x174,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar6 = &pAVar5->EffectiveStates;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar2 = IsAnyDataLayerInEffectiveRuntimeState(&local_18,param_2,pFVar6);
  return bVar2;
}

// SetDataLayerInstanceRuntimeState @ 148a68390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDataLayerManager::SetDataLayerInstanceRuntimeState
          (UDataLayerManager *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  
  if (param_1 == (UDataLayerInstance *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
    return false;
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  bVar2 = AWorldDataLayers::SetDataLayerRuntimeState(this_01,param_1,param_2,param_3);
  return bVar2;
}

// SetDataLayerRuntimeState @ 148a68c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDataLayerManager::SetDataLayerRuntimeState
          (UDataLayerManager *this,UDataLayerAsset *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *this_00;
  AWorldDataLayers *pAVar3;
  FString *pFVar4;
  UDataLayerInstance **ppUVar5;
  UDataLayerInstance *pUVar6;
  FString local_18;
  
  if (param_1 == (UDataLayerAsset *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pAVar3 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar3 != (AWorldDataLayers *)0x0) {
    pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0)
    ;
    ppUVar5 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&pAVar3->AssetNameToInstance,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar5 != (UDataLayerInstance **)0x0) {
      pUVar6 = *ppUVar5;
      goto LAB_148a68caa;
    }
  }
  pUVar6 = (UDataLayerInstance *)0x0;
LAB_148a68caa:
  if (pUVar6 == (UDataLayerInstance *)0x0) {
    return false;
  }
  bVar1 = SetDataLayerInstanceRuntimeState(this,pUVar6,param_2,param_3);
  return bVar1;
}

// StaticRegisterNativesUDataLayerManager @ 148a6a430

void __cdecl UDataLayerManager::StaticRegisterNativesUDataLayerManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDataLayerManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDataLayerInstanceEffectiveRuntimeState @ 148a6eda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execGetDataLayerInstanceEffectiveRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  EDataLayerRuntimeState EVar5;
  longlong lVar6;
  UWorld *this;
  AWorldDataLayers *pAVar7;
  FName *pFVar8;
  longlong *local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_res10 + 0x2b0))(local_res10);
    if (lVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOuterWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                         ,0x3b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = (UWorld *)(**(code **)(*plVar3 + 0x2b0))(plVar3);
    pAVar7 = UWorld::GetWorldDataLayers(this);
    pFVar8 = (FName *)(**(code **)(*plVar3 + 800))(plVar3,local_res18);
    EVar5 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                      (&pAVar7->EffectiveStates,*pFVar8);
    *(EDataLayerRuntimeState *)param_3 = EVar5;
    return;
  }
  if (1 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDataLayerInstanceFromAsset @ 148a6f000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execGetDataLayerInstanceFromAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  UWorld *this_00;
  AWorldDataLayers *pAVar3;
  FString *pFVar4;
  UDataLayerInstance **ppUVar5;
  UDataLayerInstance *pUVar6;
  UObjectBaseUtility *local_res10;
  FString local_18;
  
  pUVar6 = (UDataLayerInstance *)0x0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  pAVar3 = UWorld::GetWorldDataLayers(this_00);
  if ((pAVar3 != (AWorldDataLayers *)0x0) && (this != (UObjectBaseUtility *)0x0)) {
    pFVar4 = UObjectBaseUtility::GetPathName(this,&local_18,(UObject *)0x0);
    ppUVar5 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&pAVar3->AssetNameToInstance,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar5 != (UDataLayerInstance **)0x0) {
      pUVar6 = *ppUVar5;
    }
  }
  *(UDataLayerInstance **)param_3 = pUVar6;
  return;
}

// execGetDataLayerInstanceFromName @ 148a6f210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execGetDataLayerInstanceFromName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  UWorld *this;
  AWorldDataLayers *this_00;
  UDataLayerInstance *pUVar3;
  FName *pFVar4;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  this_00 = UWorld::GetWorldDataLayers(this);
  if (this_00 == (AWorldDataLayers *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar3 = AWorldDataLayers::GetDataLayerInstance(this_00,pFVar4);
    *(UDataLayerInstance **)param_3 = pUVar3;
  }
  return;
}

// execGetDataLayerInstanceRuntimeState @ 148a6f2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execGetDataLayerInstanceRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  EDataLayerRuntimeState EVar5;
  longlong lVar6;
  UWorld *this;
  AWorldDataLayers *this_00;
  FName *pFVar7;
  longlong *local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_res10 + 0x2b0))(local_res10);
    if (lVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOuterWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                         ,0x3b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = (UWorld *)(**(code **)(*plVar3 + 0x2b0))(plVar3);
    this_00 = UWorld::GetWorldDataLayers(this);
    pFVar7 = (FName *)(**(code **)(*plVar3 + 800))(plVar3,local_res18);
    EVar5 = AWorldDataLayers::GetDataLayerRuntimeStateByName(this_00,*pFVar7);
    *(EDataLayerRuntimeState *)param_3 = EVar5;
    return;
  }
  if (1 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDataLayerInstances @ 148a6f540

void __cdecl
UDataLayerManager::execGetDataLayerInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **local_res10 [3];
  void *local_28;
  undefined8 local_20;
  code *local_18;
  void ***local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDataLayerManager::GetDataLayerInstances'::__l2::<lambda_1>,bool,UDataLayerInstance_*>
             ::Call;
  local_10 = local_res10;
  ForEachDataLayerInstance
            ((UDataLayerManager *)param_1,
             (TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_18);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_28;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = (void *)0x0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetDataLayerInstanceRuntimeState @ 148a70700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execSetDataLayerInstanceRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  EDataLayerRuntimeState EVar3;
  UDataLayerInstance *pUVar4;
  bool bVar5;
  longlong lVar6;
  UWorld *this;
  AWorldDataLayers *this_00;
  bool bVar7;
  EDataLayerRuntimeState local_res10 [8];
  int local_res18 [2];
  UDataLayerInstance *local_res20;
  
  local_res20 = (UDataLayerInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Unloaded;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar4 = local_res20;
  EVar3 = local_res10[0];
  bVar7 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDataLayerInstance *)0x0) {
    lVar6 = (**(code **)(local_res20->_padding_ + 0x2b0))(local_res20);
    if (lVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOuterWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                         ,0x3b,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = (UWorld *)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4);
    this_00 = UWorld::GetWorldDataLayers(this);
    bVar7 = AWorldDataLayers::SetDataLayerRuntimeState(this_00,pUVar4,EVar3,bVar7);
    *(bool *)param_3 = bVar7;
    return;
  }
  if (1 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetDataLayerRuntimeState @ 148a70ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerManager::execSetDataLayerRuntimeState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  EDataLayerRuntimeState EVar4;
  UObjectBaseUtility *this;
  bool bVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  AWorldDataLayers *pAVar8;
  FString *pFVar9;
  UDataLayerInstance **ppUVar10;
  longlong lVar11;
  UDataLayerInstance *pUVar12;
  bool bVar13;
  EDataLayerRuntimeState local_res10 [8];
  int local_res18 [2];
  UObjectBaseUtility *local_res20;
  FString local_48;
  
  pUVar12 = (UDataLayerInstance *)0x0;
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Unloaded;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_res20;
  EVar4 = local_res10[0];
  bVar13 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar7 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    pAVar8 = UWorld::GetWorldDataLayers(pUVar7);
    if (pAVar8 != (AWorldDataLayers *)0x0) {
      pFVar9 = UObjectBaseUtility::GetPathName(this,&local_48,(UObject *)0x0);
      ppUVar10 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                 ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                         *)&pAVar8->AssetNameToInstance,pFVar9);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (ppUVar10 != (UDataLayerInstance **)0x0) {
        pUVar12 = *ppUVar10;
      }
    }
    if (pUVar12 != (UDataLayerInstance *)0x0) {
      lVar11 = (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
      if (lVar11 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetOuterWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                           ,0x3b,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pUVar7 = (UWorld *)(**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
      pAVar8 = UWorld::GetWorldDataLayers(pUVar7);
      bVar13 = AWorldDataLayers::SetDataLayerRuntimeState(pAVar8,pUVar12,EVar4,bVar13);
      *(bool *)param_3 = bVar13;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// GetDataLayerInstances<FName> @ 148aadfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataLayerManager::GetDataLayerInstances<FName>
          (UDataLayerManager *this,
          TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  bool bVar2;
  void *_Src;
  AWorldDataLayers *this_00;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UDataLayerManager::GetDataLayerInstances<FName>'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this_00 = GetWorldDataLayers(this);
  _Src = _EmptyArray;
  if (this_00 == (AWorldDataLayers *)0x0) {
    lVar4 = (longlong)DAT_15525d6c8;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = DAT_15525d6c8;
    if (DAT_15525d6c8 == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,DAT_15525d6c8,0,&local_28.AllocatorInstance,DAT_15525d6c8,&local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,_Src,lVar4 << 3);
    }
    pTVar3 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pTVar3 = AWorldDataLayers::GetDataLayerInstances(this_00,&local_18,param_1);
    bVar2 = true;
    bVar1 = false;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = pTVar3->ArrayNum;
  __return_storage_ptr__->ArrayMax = pTVar3->ArrayMax;
  pTVar3->ArrayNum = 0;
  pTVar3->ArrayMax = 0;
  if (bVar1) {
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

