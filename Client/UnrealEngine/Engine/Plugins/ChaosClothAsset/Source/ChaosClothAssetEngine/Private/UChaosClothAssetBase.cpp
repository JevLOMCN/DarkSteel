// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 85

// StaticClass @ 14dc28220

UClass * __cdecl UChaosClothAssetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetBase",
               &Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetBase,0x388,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothAssetBase>,
               InternalVTableHelperCtorCaller<UChaosClothAssetBase>,local_res8,
               USkinnedAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton;
}

// UChaosClothAssetBase @ 14dc34e50

UChaosClothAssetBase * __thiscall
UChaosClothAssetBase::UChaosClothAssetBase(UChaosClothAssetBase *this,FVTableHelper *param_1)

{
  USkinnedAsset::USkinnedAsset((USkinnedAsset *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  FDataflowInstance::FDataflowInstance
            (&this->DataflowInstance,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->LODInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODInfo).ArrayNum = 0;
  (this->LODInfo).ArrayMax = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  this->bHasVertexColors = '\0';
  (this->DisableBelowMinLodStripping).Default = false;
  (this->MinLod).Default = 0;
  (this->ShadowPhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FReferenceSkeleton::FReferenceSkeleton(&this->RefSkeleton,true);
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  (this->SkeletalMeshRenderData).Ptr = (FSkeletalMeshRenderData *)0x0;
  (this->RefBasesInvMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefBasesInvMatrix).ArrayNum = 0;
  (this->RefBasesInvMatrix).ArrayMax = 0;
  (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComposedRefPoseMatrices).ArrayNum = 0;
  (this->CachedComposedRefPoseMatrices).ArrayMax = 0;
  return this;
}

// UChaosClothAssetBase @ 14dc34fc0

UChaosClothAssetBase * __thiscall
UChaosClothAssetBase::UChaosClothAssetBase(UChaosClothAssetBase *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int *piVar2;
  FPerQualityLevelInt *pFVar3;
  TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UChaosClothAssetBase *pUVar7;
  FString *pFVar8;
  int iVar9;
  FString local_38;
  
  USkinnedAsset::USkinnedAsset((USkinnedAsset *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  FDataflowInstance::FDataflowInstance
            (&this->DataflowInstance,(UObject *)this,(UDataflow *)0x0,(FName)0x0);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = &this->MinQualityLevelLOD;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this_00 = &this->LODInfo;
  (this->LODInfo).ArrayNum = 0;
  piVar1 = &(this->LODInfo).ArrayNum;
  (this->LODInfo).ArrayMax = 0;
  piVar2 = &(this->LODInfo).ArrayMax;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar3->_padding_ = 0;
  (this->MinQualityLevelLOD)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLOD).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLOD).Default = 0;
  this->bHasVertexColors = '\0';
  (this->DisableBelowMinLodStripping).Default = false;
  (this->MinLod).Default = 0;
  (this->ShadowPhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FReferenceSkeleton::FReferenceSkeleton(&this->RefSkeleton,true);
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  (this->SkeletalMeshRenderData).Ptr = (FSkeletalMeshRenderData *)0x0;
  (this->RefBasesInvMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefBasesInvMatrix).ArrayNum = 0;
  (this->RefBasesInvMatrix).ArrayMax = 0;
  (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComposedRefPoseMatrices).ArrayNum = 0;
  (this->CachedComposedRefPoseMatrices).ArrayMax = 0;
  iVar9 = *piVar1;
  if (iVar9 < 1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd8,8,1 - iVar9,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FSkeletalMeshLODInfo,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0xd8,1 - iVar9);
  }
  else if (1 < iVar9) {
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UChaosClothAssetBase *)(*pcVar4)();
        return pUVar7;
      }
    }
    else if (iVar9 == 0) goto LAB_14dc351e8;
    TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,1,iVar9);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,&this_00->AllocatorInstance,*piVar1,piVar2);
  }
LAB_14dc351e8:
  SetReferenceSkeleton(this,(FReferenceSkeleton *)0x0);
  pFVar8 = ::FString::FString(&local_38,UE::Chaos::ClothAsset::Private::MinLodQualityLevelCVarName);
  if (pFVar3 != (FPerQualityLevelInt *)pFVar8) {
    if ((void *)pFVar3->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar3->_padding_);
    }
    pFVar3->_padding_ = (longlong)(pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->MinQualityLevelLOD)._padding_ = (pFVar8->Data).ArrayNum;
    *(int *)((longlong)&(this->MinQualityLevelLOD)._padding_ + 4) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UChaosClothAssetBase @ 14dc36370

void __thiscall UChaosClothAssetBase::~UChaosClothAssetBase(UChaosClothAssetBase *this)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshRenderData *this_00;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  pFVar1 = (this->CachedComposedRefPoseMatrices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefBasesInvMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    FSkeletalMeshRenderData::~FSkeletalMeshRenderData(this_00);
    ::operator_delete(this_00,0x30);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FReferenceSkeleton::~FReferenceSkeleton(&this->RefSkeleton);
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MinQualityLevelLOD).PerQuality);
  pvVar2 = (void *)(this->MinQualityLevelLOD)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FSkeletalMeshLODInfo,int>
            ((FSkeletalMeshLODInfo *)(this->LODInfo).AllocatorInstance.Data,(this->LODInfo).ArrayNum
            );
  pFVar1 = (this->LODInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowInstance::~FDataflowInstance(&this->DataflowInstance);
  this->_padding_ = (longlong)&___7IDataflowInstanceInterface__6B_;
  this->_padding_ = (longlong)&___7IDataflowContentOwner__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  USkinnedAsset::~USkinnedAsset((USkinnedAsset *)this);
  return;
}

// BeginDestroy @ 14dc39070

void __thiscall UChaosClothAssetBase::BeginDestroy(UChaosClothAssetBase *this)

{
  FSkeletalMeshRenderData *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetBase.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    return;
  }
  return;
}

// CalculateInvRefMatrices @ 14dc3cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UChaosClothAssetBase::CalculateInvRefMatrices(UChaosClothAssetBase *this)

{
  int *piVar1;
  int *piVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  FReferenceSkeleton *this_00;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 in_XMM2 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStackY_3c8 [32];
  ForAnyElementType local_398;
  int local_390 [2];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  FName local_370;
  int *local_368;
  FString local_360;
  FString local_350;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  TTransform<double> local_2b8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  undefined1 local_158 [64];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  lVar22 = (**(code **)(this->_padding_ + 800))();
  uVar46 = *(uint *)(lVar22 + 8);
  if ((int)uVar46 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar46);
  }
  piVar1 = &(this->RefBasesInvMatrix).ArrayMax;
  piVar2 = &(this->RefBasesInvMatrix).ArrayNum;
  *piVar2 = 0;
  local_368 = piVar2;
  if (*piVar1 != uVar46) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar46,&(this->RefBasesInvMatrix).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,0x10,uVar46,&(this->RefBasesInvMatrix).AllocatorInstance,piVar2,piVar1);
  local_398.Data = (FScriptContainerElement *)0x0;
  local_390[0] = 0;
  local_390[1] = 0;
  if (0 < (int)uVar46) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar46,&local_398,local_390,local_390 + 1);
  }
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_3e45798ee0000000;
  uVar25 = 0;
  local_378 = (longlong)(int)uVar46;
  if (0 < (int)uVar46) {
    lVar22 = 0;
    lVar27 = 0;
    local_380 = 0;
    local_388 = 0;
    do {
      lVar26 = local_380;
      if ((((int)uVar25 < 0) ||
          (lVar23 = (**(code **)(this->_padding_ + 800))(this), *(int *)(lVar23 + 8) <= (int)uVar25)
          ) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BoneIndex >= 0 && BoneIndex < GetRefSkeleton().GetRawBoneNum()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetBase.cpp"
                                    ,0x1ed,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar23 = (**(code **)(this->_padding_ + 800))();
      uVar24 = ~uVar25 >> 0x1f;
      uVar46 = 0;
      if ((int)uVar25 < *(int *)(lVar23 + 0x18)) {
        uVar46 = uVar24;
      }
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar29 = local_388;
      lVar23 = *(longlong *)(lVar23 + 0x10);
      dVar34 = *(double *)(lVar23 + local_388);
      dVar38 = ((double *)(lVar23 + local_388))[1];
      pdVar3 = (double *)(lVar23 + 0x10 + local_388);
      dVar40 = *pdVar3;
      dVar44 = pdVar3[1];
      pdVar3 = (double *)(lVar23 + 0x20 + local_388);
      local_2b8.Translation.XY.m128d_f64[0] = *pdVar3;
      local_2b8.Translation.XY.m128d_f64[1] = pdVar3[1];
      pdVar3 = (double *)(lVar23 + 0x30 + local_388);
      local_2b8.Translation.ZW.m128d_f64[0] = *pdVar3;
      local_2b8.Translation.ZW.m128d_f64[1] = pdVar3[1];
      pdVar3 = (double *)(lVar23 + 0x50 + local_388);
      local_2b8.Scale3D.ZW.m128d_f64[0] = *pdVar3;
      local_2b8.Scale3D.ZW.m128d_f64[1] = pdVar3[1];
      pdVar3 = (double *)(lVar23 + 0x40 + local_388);
      local_2b8.Scale3D.XY.m128d_f64[0] = *pdVar3;
      local_2b8.Scale3D.XY.m128d_f64[1] = pdVar3[1];
      dVar39 = dVar34 * dVar34 + dVar40 * dVar40;
      dVar43 = dVar38 * dVar38 + dVar44 * dVar44;
      auVar45._8_4_ = SUB84(dVar43,0);
      auVar45._0_8_ = dVar39;
      auVar45._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      auVar35._0_8_ = auVar45._8_8_ + dVar39;
      auVar35._8_8_ = dVar39 + dVar43;
      uVar30 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar35._0_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar35._8_8_)
      ;
      auVar45 = sqrtpd(in_XMM2,auVar35);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar35._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar35._8_8_)
      ;
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
      auVar37._0_8_ = (ulonglong)(auVar36._0_8_ * dVar34) & uVar30;
      uVar6 = uVar32 & (ulonglong)(auVar36._8_8_ * dVar38);
      auVar37._8_4_ = (undefined4)uVar6;
      auVar37._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar41._0_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar41._4_4_ =
           ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar41._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar41._12_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_2b8.Rotation.XY.m128d_f64 = (double  [2])(auVar37 | auVar41);
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
      auVar42._0_8_ = uVar31 & (ulonglong)(auVar36._0_8_ * dVar40);
      uVar6 = uVar33 & (ulonglong)(auVar36._8_8_ * dVar44);
      auVar42._8_4_ = (undefined4)uVar6;
      auVar42._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar36._4_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar36._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar36._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar36._12_4_ =
           ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_2b8.Rotation.ZW.m128d_f64 = (double  [2])(auVar42 | auVar36);
      UE::Math::TTransform<double>::ToMatrixWithScale(&local_2b8,&local_258);
      dVar19 = local_258.M[3][3];
      dVar18 = local_258.M[3][2];
      dVar17 = local_258.M[3][1];
      dVar16 = local_258.M[3][0];
      dVar15 = local_258.M[2][3];
      dVar14 = local_258.M[2][2];
      dVar13 = local_258.M[2][1];
      dVar12 = local_258.M[2][0];
      dVar11 = local_258.M[1][3];
      dVar10 = local_258.M[1][2];
      dVar43 = local_258.M[1][1];
      dVar39 = local_258.M[1][0];
      dVar44 = local_258.M[0][3];
      dVar40 = local_258.M[0][2];
      dVar38 = local_258.M[0][1];
      dVar34 = local_258.M[0][0];
      uVar46 = 0;
      if ((int)uVar25 < local_390[0]) {
        uVar46 = uVar24;
      }
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)(local_398.Data + lVar22) = dVar34;
      *(double *)(local_398.Data + lVar22 + 8) = dVar38;
      *(double *)(local_398.Data + lVar22 + 0x10) = dVar40;
      *(double *)(local_398.Data + lVar22 + 0x10 + 8) = dVar44;
      *(double *)(local_398.Data + lVar22 + 0x20) = dVar39;
      *(double *)(local_398.Data + lVar22 + 0x20 + 8) = dVar43;
      *(double *)(local_398.Data + lVar22 + 0x30) = dVar10;
      *(double *)(local_398.Data + lVar22 + 0x30 + 8) = dVar11;
      *(double *)(local_398.Data + lVar22 + 0x40) = dVar12;
      *(double *)(local_398.Data + lVar22 + 0x40 + 8) = dVar13;
      *(double *)(local_398.Data + lVar22 + 0x50) = dVar14;
      *(double *)(local_398.Data + lVar22 + 0x50 + 8) = dVar15;
      *(double *)(local_398.Data + lVar22 + 0x60) = dVar16;
      *(double *)(local_398.Data + lVar22 + 0x60 + 8) = dVar17;
      *(double *)(local_398.Data + lVar22 + 0x70) = dVar18;
      *(double *)(local_398.Data + lVar22 + 0x70 + 8) = dVar19;
      if (0 < (int)uVar25) {
        this_00 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
        uVar21 = FReferenceSkeleton::GetParentIndexInternal
                           (this_00,uVar25,
                            (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)this_00);
        uVar46 = 0;
        if ((int)uVar25 < local_390[0]) {
          uVar46 = uVar24;
        }
        if (uVar46 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar28 = local_398.Data + (longlong)(int)uVar25 * 0x80;
        uVar46 = 0;
        if ((int)uVar21 < local_390[0]) {
          uVar46 = ~uVar21 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        VectorMatrixMultiply
                  (&local_1d8,(TMatrix<double> *)pFVar28,
                   (TMatrix<double> *)(local_398.Data + (longlong)(int)uVar21 * 0x80));
        dVar19 = local_1d8.M[3][3];
        dVar18 = local_1d8.M[3][2];
        dVar17 = local_1d8.M[3][1];
        dVar16 = local_1d8.M[3][0];
        dVar15 = local_1d8.M[2][3];
        dVar14 = local_1d8.M[2][2];
        dVar13 = local_1d8.M[2][1];
        dVar12 = local_1d8.M[2][0];
        dVar11 = local_1d8.M[1][3];
        dVar10 = local_1d8.M[1][2];
        dVar43 = local_1d8.M[1][1];
        dVar39 = local_1d8.M[1][0];
        dVar44 = local_1d8.M[0][3];
        dVar40 = local_1d8.M[0][2];
        dVar38 = local_1d8.M[0][1];
        dVar34 = local_1d8.M[0][0];
        uVar46 = 0;
        if ((int)uVar25 < local_390[0]) {
          uVar46 = uVar24;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)(local_398.Data + lVar22) = dVar34;
        *(double *)(local_398.Data + lVar22 + 8) = dVar38;
        *(double *)(local_398.Data + lVar22 + 0x10) = dVar40;
        *(double *)(local_398.Data + lVar22 + 0x10 + 8) = dVar44;
        *(double *)(local_398.Data + lVar22 + 0x20) = dVar39;
        *(double *)(local_398.Data + lVar22 + 0x20 + 8) = dVar43;
        *(double *)(local_398.Data + lVar22 + 0x30) = dVar10;
        *(double *)(local_398.Data + lVar22 + 0x30 + 8) = dVar11;
        *(double *)(local_398.Data + lVar22 + 0x40) = dVar12;
        *(double *)(local_398.Data + lVar22 + 0x40 + 8) = dVar13;
        *(double *)(local_398.Data + lVar22 + 0x50) = dVar14;
        *(double *)(local_398.Data + lVar22 + 0x50 + 8) = dVar15;
        *(double *)(local_398.Data + lVar22 + 0x60) = dVar16;
        *(double *)(local_398.Data + lVar22 + 0x60 + 8) = dVar17;
        *(double *)(local_398.Data + lVar22 + 0x70) = dVar18;
        *(double *)(local_398.Data + lVar22 + 0x70 + 8) = dVar19;
        lVar26 = local_380;
        lVar29 = local_388;
      }
      uVar46 = 0;
      if ((int)uVar25 < local_390[0]) {
        uVar46 = uVar24;
      }
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22) >> 0x20)
                                 & uVar9,(uint)*(undefined8 *)(local_398.Data + lVar22) & uVar8) <=
                dVar7) &&
              ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 8) >>
                                      0x20) & uVar9,
                                (uint)*(undefined8 *)(local_398.Data + lVar22 + 8) & uVar8) <= dVar7
              )) && ((double)CONCAT44((uint)((ulonglong)
                                             *(undefined8 *)(local_398.Data + lVar22 + 0x10) >> 0x20
                                            ) & uVar9,
                                      (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x10) & uVar8)
                     <= dVar7)) &&
            (((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 0x20) >>
                                     0x20) & uVar9,
                               (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x20) & uVar8) <=
              dVar7 && ((double)CONCAT44((uint)((ulonglong)
                                                *(undefined8 *)(local_398.Data + lVar22 + 0x28) >>
                                               0x20) & uVar9,
                                         (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x28) &
                                         uVar8) <= dVar7)))) &&
           ((uVar46 = (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x30) & uVar8,
            uVar24 = (uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 0x30) >> 0x20) &
                     uVar9,
            (double)CONCAT44(uVar24,uVar46) < dVar7 || (double)CONCAT44(uVar24,uVar46) == dVar7 &&
            ((uVar46 = (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x40) & uVar8,
             uVar24 = (uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 0x40) >> 0x20) &
                      uVar9,
             (double)CONCAT44(uVar24,uVar46) < dVar7 || (double)CONCAT44(uVar24,uVar46) == dVar7 &&
             (uVar46 = (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x48) & uVar8,
             uVar24 = (uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 0x48) >> 0x20) &
                      uVar9,
             (double)CONCAT44(uVar24,uVar46) < dVar7 || (double)CONCAT44(uVar24,uVar46) == dVar7))))
           )) && (uVar46 = (uint)*(undefined8 *)(local_398.Data + lVar22 + 0x50) & uVar8,
                 uVar24 = (uint)((ulonglong)*(undefined8 *)(local_398.Data + lVar22 + 0x50) >> 0x20)
                          & uVar9,
                 (double)CONCAT44(uVar24,uVar46) < dVar7 || (double)CONCAT44(uVar24,uVar46) == dVar7
                 )) && (2 < (byte)LogChaosClothAsset._0_1_)) {
        lVar23 = (**(code **)(this->_padding_ + 800))();
        uVar46 = 0;
        if ((int)uVar25 < *(int *)(lVar23 + 0x28)) {
          uVar46 = ~uVar25 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_370 = *(FName *)(lVar26 + *(longlong *)(lVar23 + 0x20));
        ::FName::ToString(&local_370,&local_350);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_360,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
      }
      uVar46 = 0;
      if ((int)uVar25 < local_390[0]) {
        uVar46 = ~uVar25 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar28 = local_398.Data + lVar22;
      if (((dVar7 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)pFVar28 >> 0x20) & uVar9,
                                     (uint)*(undefined8 *)pFVar28 & uVar8)) ||
          (dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 8) >> 0x20) & uVar9,
                                    SUB84(*(double *)(pFVar28 + 8),0) & uVar8))) ||
         (dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 0x10) >> 0x20) & uVar9,
                                   SUB84(*(double *)(pFVar28 + 0x10),0) & uVar8))) {
LAB_14dc3d3a8:
        FMath::MatrixInverse((TMatrix<double> *)local_158,(TMatrix<double> *)pFVar28);
        in_XMM2 = local_158._48_16_;
        uVar47 = local_118;
        uVar48 = uStack_114;
        uVar49 = uStack_110;
        uVar50 = uStack_10c;
        uVar51 = local_108;
        uVar52 = uStack_104;
        uVar53 = uStack_100;
        uVar54 = uStack_fc;
        uVar55 = local_f8;
        uVar56 = uStack_f4;
        uVar57 = uStack_f0;
        uVar58 = uStack_ec;
        uVar59 = local_e8;
        uVar60 = uStack_e4;
        uVar61 = uStack_e0;
        uVar62 = uStack_dc;
        uVar63 = local_158._0_4_;
        uVar64 = local_158._4_4_;
        uVar65 = local_158._8_4_;
        uVar66 = local_158._12_4_;
        dVar34 = (double)local_158._16_8_;
        dVar38 = (double)local_158._24_8_;
        dVar40 = (double)local_158._32_8_;
        dVar44 = (double)local_158._40_8_;
      }
      else {
        if (((dVar7 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar28 + 0x20) >> 0x20) &
                                       uVar9,(uint)*(undefined8 *)(pFVar28 + 0x20) & uVar8)) ||
            (dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 0x28) >> 0x20) & uVar9
                                      ,SUB84(*(double *)(pFVar28 + 0x28),0) & uVar8))) ||
           (dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 0x30) >> 0x20) & uVar9,
                                     SUB84(*(double *)(pFVar28 + 0x30),0) & uVar8)))
        goto LAB_14dc3d3a8;
        if (((dVar7 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar28 + 0x40) >> 0x20) &
                                       uVar9,(uint)*(undefined8 *)(pFVar28 + 0x40) & uVar8)) ||
            (dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 0x48) >> 0x20) & uVar9
                                      ,SUB84(*(double *)(pFVar28 + 0x48),0) & uVar8))) ||
           (in_XMM2 = (undefined1  [16])UE::Math::TMatrix<double>::Identity.M[1]._16_16_,
           uVar47 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
           uVar48 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
           uVar49 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
           uVar50 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
           uVar51 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
           uVar52 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
           uVar53 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
           uVar54 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
           uVar55 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
           uVar56 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
           uVar57 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
           uVar58 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
           uVar59 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
           uVar60 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
           uVar61 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
           uVar62 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
           uVar63 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
           uVar64 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
           uVar65 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
           uVar66 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
           dVar34 = UE::Math::TMatrix<double>::Identity.M[0][2],
           dVar38 = UE::Math::TMatrix<double>::Identity.M[0][3],
           dVar40 = UE::Math::TMatrix<double>::Identity.M[1][0],
           dVar44 = UE::Math::TMatrix<double>::Identity.M[1][1],
           dVar7 < (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar28 + 0x50) >> 0x20) & uVar9,
                                    SUB84(*(double *)(pFVar28 + 0x50),0) & uVar8)))
        goto LAB_14dc3d3a8;
      }
      uVar46 = 0;
      if ((int)uVar25 < *local_368) {
        uVar46 = ~uVar25 >> 0x1f;
      }
      dVar39 = in_XMM2._0_8_;
      dVar43 = in_XMM2._8_8_;
      local_338 = uVar63;
      uStack_334 = uVar64;
      uStack_330 = uVar65;
      uStack_32c = uVar66;
      local_328 = dVar34;
      dStack_320 = dVar38;
      local_318 = dVar40;
      dStack_310 = dVar44;
      local_308 = in_XMM2;
      local_2f8 = uVar47;
      uStack_2f4 = uVar48;
      uStack_2f0 = uVar49;
      uStack_2ec = uVar50;
      local_2e8 = uVar51;
      uStack_2e4 = uVar52;
      uStack_2e0 = uVar53;
      uStack_2dc = uVar54;
      local_2d8 = uVar55;
      uStack_2d4 = uVar56;
      uStack_2d0 = uVar57;
      uStack_2cc = uVar58;
      local_2c8 = uVar59;
      uStack_2c4 = uVar60;
      uStack_2c0 = uVar61;
      uStack_2bc = uVar62;
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RefBasesInvMatrix).AllocatorInstance.Data;
      local_388 = lVar29 + 0x60;
      local_380 = lVar26 + 0xc;
      uVar25 = uVar25 + 1;
      lVar22 = lVar22 + 0x80;
      pFVar28 = pFVar4 + lVar27;
      *(float *)pFVar28 = (float)(double)CONCAT44(uVar64,uVar63);
      *(float *)(pFVar28 + 4) = (float)(double)CONCAT44(uVar66,uVar65);
      *(float *)(pFVar28 + 8) = (float)dVar34;
      *(float *)(pFVar28 + 0xc) = (float)dVar38;
      pFVar28 = pFVar4 + lVar27 + 0x10;
      *(float *)pFVar28 = (float)dVar40;
      *(float *)(pFVar28 + 4) = (float)dVar44;
      *(float *)(pFVar28 + 8) = (float)dVar39;
      *(float *)(pFVar28 + 0xc) = (float)dVar43;
      pFVar28 = pFVar4 + lVar27 + 0x20;
      *(float *)pFVar28 = (float)(double)CONCAT44(uVar48,uVar47);
      *(float *)(pFVar28 + 4) = (float)(double)CONCAT44(uVar50,uVar49);
      *(float *)(pFVar28 + 8) = (float)(double)CONCAT44(uVar52,uVar51);
      *(float *)(pFVar28 + 0xc) = (float)(double)CONCAT44(uVar54,uVar53);
      pFVar4 = pFVar4 + lVar27 + 0x30;
      *(float *)pFVar4 = (float)(double)CONCAT44(uVar56,uVar55);
      *(float *)(pFVar4 + 4) = (float)(double)CONCAT44(uVar58,uVar57);
      *(float *)(pFVar4 + 8) = (float)(double)CONCAT44(uVar60,uVar59);
      *(float *)(pFVar4 + 0xc) = (float)(double)CONCAT44(uVar62,uVar61);
      lVar27 = lVar27 + 0x40;
      local_378 = local_378 + -1;
    } while (local_378 != 0);
    local_378 = 0;
  }
  if (local_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data);
  }
  return;
}

// CreateDataflowContent @ 14dc44420

TObjectPtr<UDataflowBaseContent> __thiscall
UChaosClothAssetBase::CreateDataflowContent(UChaosClothAssetBase *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  TObjectPtr<UDataflowBaseContent>_u_0 in_RDX;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 local_res10;
  
  puVar1 = &this[-1].RefSkeleton.FinalNameToIndexMap.field_0x8;
  local_res10 = (TObjectPtr<UObject>_u_0)puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  UE::DataflowContextHelpers::CreateNewDataflowContent<UDataflowSkeletalContent>
            ((TObjectPtr<UObject> *)&local_res8.ObjectPtr);
  TVar3 = local_res8;
  local_res10 = (TObjectPtr<UObject>_u_0)puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  UDataflowBaseContent::SetDataflowOwner
            ((UDataflowBaseContent *)TVar3.DebugPtr,(TObjectPtr<UObject> *)&local_res10.ObjectPtr);
  TVar3 = local_res8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (puVar1 != (undefined1 *)0x0) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
  }
  *(undefined1 **)&TVar3.DebugPtr[4].field_0x8 = puVar1;
  UDataflowBaseContent::SetConstructionDirty((UDataflowBaseContent *)TVar3.DebugPtr,true);
  UDataflowBaseContent::SetSimulationDirty((UDataflowBaseContent *)TVar3.DebugPtr,true);
  local_res10.DebugPtr = local_res8.DebugPtr;
  pcVar2 = *(code **)(this->_padding_ + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDataflowBaseContent *)local_res8.DebugPtr != (UDataflowBaseContent *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  (*pcVar2)(this,&local_res10);
  TMulticastDelegateRegistration<void___cdecl(TObjectPtr<AActor>_&),FDefaultDelegateUserPolicy>::
  AddUObject<UChaosClothAssetBase>
            ((TMulticastDelegateRegistration<void___cdecl(TObjectPtr<AActor>_&),FDefaultDelegateUserPolicy>
              *)(local_res8.DebugPtr + 3),(UChaosClothAssetBase *)&local_res10.ObjectPtr,
             (pmf_4acc3a61 *)puVar1);
  (in_RDX.DebugPtr)->_padding_ = (longlong)local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDataflowBaseContent *)local_res8.DebugPtr != (UDataflowBaseContent *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  return (TObjectPtr<UDataflowBaseContent>)in_RDX;
}

// FindSocket @ 14dc47f70

USkeletalMeshSocket * __thiscall
UChaosClothAssetBase::FindSocket(UChaosClothAssetBase *this,FName param_1)

{
  return (USkeletalMeshSocket *)0x0;
}

// FindSocketInfo @ 14dc47f80

USkeletalMeshSocket * __thiscall
UChaosClothAssetBase::FindSocketInfo
          (UChaosClothAssetBase *this,FName param_1,TTransform<double> *param_2,int *param_3,
          int *param_4)

{
  return (USkeletalMeshSocket *)0x0;
}

// GetActiveSocketList @ 14dc490e0

TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetActiveSocketList
          (UChaosClothAssetBase *this,
          TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAssetGuid @ 14dc4a240

FGuid * __thiscall
UChaosClothAssetBase::GetAssetGuid
          (UChaosClothAssetBase *this,FGuid *__return_storage_ptr__,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetBounds @ 14dc4a7c0

TBoxSphereBounds<double,double> * __thiscall
UChaosClothAssetBase::GetBounds
          (UChaosClothAssetBase *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (this->Bounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = (this->Bounds).SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// GetClothSimulationModel @ 14dc4ad50

TSharedPtr<FChaosClothSimulationModel_const_,1> * __thiscall
UChaosClothAssetBase::GetClothSimulationModel
          (UChaosClothAssetBase *this,
          TSharedPtr<FChaosClothSimulationModel_const_,1> *__return_storage_ptr__,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x2d,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (FChaosClothSimulationModel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetClothSimulationModelName @ 14dc4b0a0

FName __thiscall
UChaosClothAssetBase::GetClothSimulationModelName(UChaosClothAssetBase *this,int param_1)

{
  uint in_register_00000014;
  FName FVar1;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// GetCollections @ 14dc4b1e0

TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetCollections(UChaosClothAssetBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x35,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UChaosClothAssetBase::GetCollections(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UChaosClothAssetBase::GetCollections(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UChaosClothAssetBase::GetCollections(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UChaosClothAssetBase::GetCollections'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&`public:_virtual_class_TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UChaosClothAssetBase::GetCollections(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UChaosClothAssetBase::GetCollections(int)const___ptr64'
          ::__l2::EmptyArray;
}

// GetComposedRefPoseMatrix @ 14dc4b2b0

TMatrix<double> * __thiscall
UChaosClothAssetBase::GetComposedRefPoseMatrix
          (UChaosClothAssetBase *this,TMatrix<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetComposedRefPoseMatrix @ 14dc4b320

TMatrix<double> * __thiscall
UChaosClothAssetBase::GetComposedRefPoseMatrix
          (UChaosClothAssetBase *this,TMatrix<double> *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetDataflow @ 14dc4b430

UDataflow * __thiscall UChaosClothAssetBase::GetDataflow(UChaosClothAssetBase *this)

{
  UDataflow *pUVar1;
  
  pUVar1 = FDataflowInstance::GetDataflowAsset(&this->DataflowInstance);
  return pUVar1;
}

// GetDataflow @ 14dc4b450

UDataflow * __thiscall UChaosClothAssetBase::GetDataflow(UChaosClothAssetBase *this)

{
  UDataflow *pUVar1;
  
  pUVar1 = FDataflowInstance::GetDataflowAsset(&this->DataflowInstance);
  return pUVar1;
}

// GetDataflowInstance @ 14dc4b470

FDataflowInstance * __thiscall UChaosClothAssetBase::GetDataflowInstance(UChaosClothAssetBase *this)

{
  return (FDataflowInstance *)&this->_padding_;
}

// GetDataflowInstance @ 14dc4b480

FDataflowInstance * __thiscall UChaosClothAssetBase::GetDataflowInstance(UChaosClothAssetBase *this)

{
  return (FDataflowInstance *)&this->_padding_;
}

// GetDefaultMeshDeformer @ 14dc4b490

UMeshDeformer * __thiscall UChaosClothAssetBase::GetDefaultMeshDeformer(UChaosClothAssetBase *this)

{
  return (UMeshDeformer *)0x0;
}

// GetDefaultMinLod @ 14dc4b4a0

int __thiscall UChaosClothAssetBase::GetDefaultMinLod(UChaosClothAssetBase *this)

{
  return 0;
}

// GetDependentComponents @ 14dc4b4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetDependentComponents
          (UChaosClothAssetBase *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  USkinnedMeshComponent *this_00;
  USkeletalMeshComponent *this_01;
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar8;
  USkeletalMesh *pUVar9;
  USkeletalMesh *pUVar10;
  longlong lVar11;
  USkeletalMeshComponent *local_res10;
  TObjectIterator<UChaosClothComponent> local_78;
  TObjectIterator<USkeletalMeshComponent> local_60;
  TObjectIterator<UChaosClothAssetSKMClothingAsset> local_48;
  
  local_78.Index = 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_78.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ObjectArray.ArrayNum = 0;
  local_78.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UChaosClothComponent::StaticClass();
  GetObjectsOfClass(pUVar7,&local_78.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UChaosClothComponent>::Advance(&local_78);
    lVar11 = (longlong)local_78.Index;
    uVar4 = 0;
    if (local_78.Index < 0) break;
    if (local_78.ObjectArray.ArrayNum <= local_78.Index) break;
    if (local_78.Index < local_78.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_78.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar8;
      }
    }
    this_00 = *(USkinnedMeshComponent **)(local_78.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if (this_00 != (USkinnedMeshComponent *)0x0) {
      pUVar9 = (USkeletalMesh *)USkinnedMeshComponent::GetSkinnedAsset(this_00);
      if (pUVar9 == (USkeletalMesh *)0x0) {
LAB_14dc4b5ba:
        pUVar9 = (USkeletalMesh *)0x0;
      }
      else {
        pUVar7 = StaticClass();
        iVar5 = (int)pUVar7->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) goto LAB_14dc4b5ba;
      }
      if (pUVar9 == (USkeletalMesh *)this) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(USkinnedMeshComponent **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = this_00;
      }
    }
  }
  if (local_78.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ObjectArray.AllocatorInstance.Data);
  }
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  local_48.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UChaosClothAssetSKMClothingAsset::StaticClass();
  GetObjectsOfClass(pUVar7,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UChaosClothAssetSKMClothingAsset>::Advance(&local_48);
    lVar11 = (longlong)local_48.Index;
    if (local_48.Index < 0) break;
    if (local_48.ObjectArray.ArrayNum <= local_48.Index) break;
    uVar6 = uVar4;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_48.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar8;
      }
    }
    lVar11 = *(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if ((lVar11 != 0) && (*(UChaosClothAssetBase **)(lVar11 + 0x38) == this)) {
      pUVar9 = *(USkeletalMesh **)(lVar11 + 0x20);
      if (pUVar9 == (USkeletalMesh *)0x0) {
LAB_14dc4b6df:
        pUVar9 = (USkeletalMesh *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) goto LAB_14dc4b6df;
      }
      if (pUVar9 != (USkeletalMesh *)0x0) {
        local_60.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.ObjectArray.ArrayNum = 0;
        local_60.ObjectArray.ArrayMax = 0;
        local_60.Index = 0xffffffff;
        EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        GetObjectsOfClass(pUVar7,&local_60.ObjectArray,true,RF_ClassDefaultObject,
                          EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<USkeletalMeshComponent>::Advance(&local_60);
          lVar11 = (longlong)local_60.Index;
          if (local_60.Index < 0) break;
          if (local_60.ObjectArray.ArrayNum <= local_60.Index) break;
          uVar6 = uVar4;
          if (local_60.Index < local_60.ObjectArray.ArrayNum) {
            uVar6 = (uint)~local_60.Index >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pTVar8 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar8;
            }
          }
          this_01 = *(USkeletalMeshComponent **)
                     (local_60.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
          if (this_01 != (USkeletalMeshComponent *)0x0) {
            pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
            if (pUVar10 == pUVar9) {
              local_res10 = this_01;
              TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<UActorComponent_*>
                        (__return_storage_ptr__,(UActorComponent **)&local_res10);
            }
          }
        }
        if (local_60.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.ObjectArray.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDisableBelowMinLodStripping @ 14dc4b9a0

FPerPlatformBool * __thiscall
UChaosClothAssetBase::GetDisableBelowMinLodStripping(UChaosClothAssetBase *this)

{
  return &this->DisableBelowMinLodStripping;
}

// GetHasVertexColors @ 14dc4c4b0

bool __thiscall UChaosClothAssetBase::GetHasVertexColors(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,4,ReadOnly);
  return this->bHasVertexColors;
}

// GetLODInfo @ 14dc4ca70

FSkeletalMeshLODInfo * __thiscall
UChaosClothAssetBase::GetLODInfo(UChaosClothAssetBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkeletalMeshLODInfo *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODInfo).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODInfo).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FSkeletalMeshLODInfo *)
           ((this->LODInfo).AllocatorInstance.Data + (longlong)param_1 * 0xd8);
  }
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfo @ 14dc4cb10

FSkeletalMeshLODInfo * __thiscall
UChaosClothAssetBase::GetLODInfo(UChaosClothAssetBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkeletalMeshLODInfo *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODInfo).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODInfo).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSkeletalMeshLODInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FSkeletalMeshLODInfo *)
           ((this->LODInfo).AllocatorInstance.Data + (longlong)param_1 * 0xd8);
  }
  return (FSkeletalMeshLODInfo *)0x0;
}

// GetLODInfoArray @ 14dc4cbb0

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetLODInfoArray(UChaosClothAssetBase *this)

{
  return &this->LODInfo;
}

// GetLODInfoArray @ 14dc4cbc0

TArray<FSkeletalMeshLODInfo,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetLODInfoArray(UChaosClothAssetBase *this)

{
  return &this->LODInfo;
}

// GetLODNum @ 14dc4cbd0

int __thiscall UChaosClothAssetBase::GetLODNum(UChaosClothAssetBase *this)

{
  return (this->LODInfo).ArrayNum;
}

// GetMaterials @ 14dc4cdf0

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetMaterials(UChaosClothAssetBase *this)

{
  return &this->Materials;
}

// GetMaterials @ 14dc4ce00

TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetMaterials(UChaosClothAssetBase *this)

{
  return &this->Materials;
}

// GetMinLod @ 14dc4d350

FPerPlatformInt * __thiscall UChaosClothAssetBase::GetMinLod(UChaosClothAssetBase *this)

{
  return &this->MinLod;
}

// GetMinLodIdx @ 14dc4d360

int __thiscall UChaosClothAssetBase::GetMinLodIdx(UChaosClothAssetBase *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3b0))();
  if (cVar1 != '\0') {
    if (param_1) {
      iVar2 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetLowestValue
                        ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                         &this->MinQualityLevelLOD);
      return iVar2;
    }
    if ((*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x8 !=
         *(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x34) &&
       (-1 < UE::Chaos::ClothAsset::Private::MinLodQualityLevel)) {
      puVar5 = *(undefined1 **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->MinQualityLevelLOD).PerQuality.field_0x38;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 - 1U &
                                UE::Chaos::ClothAsset::Private::MinLodQualityLevel) * 4);
      if (iVar2 != -1) {
        while (piVar4 = (int *)((longlong)iVar2 * 0x10 +
                               *(longlong *)&(this->MinQualityLevelLOD).PerQuality),
              *piVar4 != UE::Chaos::ClothAsset::Private::MinLodQualityLevel) {
          iVar2 = piVar4[2];
          if (iVar2 == -1) {
            return (this->MinQualityLevelLOD).Default;
          }
        }
        piVar3 = piVar4 + 1;
        if (piVar4 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 != (int *)0x0) goto LAB_14dc4d437;
      }
    }
    return (this->MinQualityLevelLOD).Default;
  }
  piVar3 = (int *)(**(code **)(this->_padding_ + 0x3a8))(this);
LAB_14dc4d437:
  return *piVar3;
}

// GetNumClothSimulationModels @ 14dc4d940

int __thiscall UChaosClothAssetBase::GetNumClothSimulationModels(UChaosClothAssetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x29,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetOverlayMaterial @ 14dc4db90

UMaterialInterface * __thiscall UChaosClothAssetBase::GetOverlayMaterial(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,8,ReadOnly);
  return (this->OverlayMaterial).field0_0x0.DebugPtr;
}

// GetOverlayMaterialMaxDrawDistance @ 14dc4dbc0

float __thiscall UChaosClothAssetBase::GetOverlayMaterialMaxDrawDistance(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10,ReadOnly);
  return this->OverlayMaterialMaxDrawDistance;
}

// GetPhysicsAssetForModel @ 14dc4df90

UPhysicsAsset * __thiscall
UChaosClothAssetBase::GetPhysicsAssetForModel(UChaosClothAssetBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x39,L"Pure virtual not implemented (%s)");
  return (UPhysicsAsset *)0x0;
}

// GetPlatformMinLODIdx @ 14dc4dfc0

int __thiscall
UChaosClothAssetBase::GetPlatformMinLODIdx(UChaosClothAssetBase *this,ITargetPlatform *param_1)

{
  return 0;
}

// GetPrivateStaticClass @ 14dc4e1d0

UClass * __cdecl UChaosClothAssetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetBase",
               &Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetBase,0x388,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothAssetBase>,
               InternalVTableHelperCtorCaller<UChaosClothAssetBase>,local_res8,
               USkinnedAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetBase.InnerSingleton;
}

// GetRayTracingMinLOD @ 14dc4ea30

int __thiscall UChaosClothAssetBase::GetRayTracingMinLOD(UChaosClothAssetBase *this)

{
  return this->RayTracingMinLOD;
}

// GetRefBasesInvMatrix @ 14dc4ea40

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetRefBasesInvMatrix(UChaosClothAssetBase *this)

{
  return &this->RefBasesInvMatrix;
}

// GetRefBasesInvMatrix @ 14dc4ea50

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetBase::GetRefBasesInvMatrix(UChaosClothAssetBase *this)

{
  return &this->RefBasesInvMatrix;
}

// GetRefSkeleton @ 14dc4ea60

FReferenceSkeleton * __thiscall UChaosClothAssetBase::GetRefSkeleton(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,2,ReadWrite);
  return &this->RefSkeleton;
}

// GetRefSkeleton @ 14dc4ea90

FReferenceSkeleton * __thiscall UChaosClothAssetBase::GetRefSkeleton(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,2,ReadOnly);
  return &this->RefSkeleton;
}

// GetResourceForRendering @ 14dc4ed80

FSkeletalMeshRenderData * __thiscall
UChaosClothAssetBase::GetResourceForRendering(UChaosClothAssetBase *this)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadWrite);
  return (this->SkeletalMeshRenderData).Ptr;
}

// GetResourceSizeEx @ 14dc4ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChaosClothAssetBase::GetResourceSizeEx(UChaosClothAssetBase *this,FResourceSizeEx *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FSkeletalMeshRenderData *pFVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  longlong *plVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  undefined7 uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_5b8 [32];
  double local_598;
  longlong local_590;
  FString local_588;
  FName local_578;
  FName local_570;
  FResourceSizeEx *local_568;
  FName local_560;
  FName local_558;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  undefined1 local_510 [8];
  TReferenceControllerBase<1> *local_508;
  undefined1 local_500 [8];
  TReferenceControllerBase<1> *local_4f8;
  FArchiveState local_4e8;
  ulong64 local_458;
  undefined1 local_448 [72];
  void *local_400;
  undefined4 local_3f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3f0;
  void *local_3b0;
  undefined4 local_3a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3a0;
  void *local_360;
  undefined4 local_358;
  undefined1 local_348 [72];
  void *local_300;
  undefined4 local_2f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2f0;
  void *local_2b0;
  undefined4 local_2a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2a0;
  void *local_260;
  undefined4 local_258;
  undefined1 local_248 [72];
  void *local_200;
  undefined4 local_1f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1f0;
  void *local_1b0;
  undefined4 local_1a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1a0;
  void *local_160;
  undefined4 local_158;
  undefined1 local_148 [72];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_568 = param_1;
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  lVar7 = (**(code **)(this->_padding_ + 0x398))(this);
  if (lVar7 != 0) {
    pFVar8 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
    FSkeletalMeshRenderData::GetResourceSizeEx(pFVar8,param_1);
  }
  uVar19 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0x4c8))(this);
  uVar16 = uVar19;
  if (0 < iVar6) {
    do {
      puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0x4d0))(this,local_510,uVar16);
      pTVar1 = (TReferenceControllerBase<1> *)puVar9[1];
      pFVar2 = (FChaosClothSimulationModel *)*puVar9;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_508)
      ;
      if (pFVar2 != (FChaosClothSimulationModel *)0x0) {
        FChaosClothSimulationModel::GetResourceSizeEx(pFVar2,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar17 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar17;
      iVar6 = (**(code **)(this->_padding_ + 0x4c8))(this);
    } while ((int)uVar17 < iVar6);
  }
  local_578 = (FName)this->_padding_;
  local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.Data.ArrayNum = 0;
  local_588.Data.ArrayMax = 0;
  ::FName::ToString(&local_578,&local_540);
  pUVar10 = StaticClass();
  local_570 = (FName)pUVar10->_padding_;
  ::FName::ToString(&local_570,&local_550);
  ::FString::AppendfImpl(&local_588,L"---- Memory report for [%s] [%s] ----");
  if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data.AllocatorInstance.Data);
  }
  if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data.AllocatorInstance.Data);
  }
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_348);
  lVar7 = (**(code **)(this->_padding_ + 0x398))(this);
  if (lVar7 != 0) {
    lVar7 = (**(code **)(this->_padding_ + 0x398))(this);
    uVar16 = uVar19;
    uVar18 = uVar19;
    if (0 < *(int *)(lVar7 + 8)) {
      do {
        FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_248);
        plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x398))(this);
        uVar15 = (uint)uVar16;
        uVar17 = 0;
        if ((int)uVar15 < (int)plVar11[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_598 = (double)(longlong)(int)uVar15;
          local_590 = (longlong)(int)plVar11[1];
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FSkeletalMeshLODRenderData::GetResourceSizeEx
                  (*(FSkeletalMeshLODRenderData **)(*plVar11 + uVar18),(FResourceSizeEx *)local_248)
        ;
        FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_248);
        ::FString::AppendfImpl(&local_588,L"\n LODRenderData LOD%d size: %ld bytes");
        local_158 = 0;
        if (local_160 != (void *)0x0) {
          FMemory::Free(local_160);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1a0);
        local_1a8 = 0;
        if (local_1b0 != (void *)0x0) {
          FMemory::Free(local_1b0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1f0);
        local_1f8 = 0;
        if (local_200 != (void *)0x0) {
          FMemory::Free(local_200);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_248 + 8));
        lVar7 = (**(code **)(this->_padding_ + 0x398))(this);
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar7 + 8));
    }
    pFVar8 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
    FSkeletalMeshRenderData::GetResourceSizeEx(pFVar8,(FResourceSizeEx *)local_348);
  }
  FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_348);
  ::FString::AppendfImpl(&local_588,L"\n Total RenderData size: %ld bytes");
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_448);
  iVar6 = (**(code **)(this->_padding_ + 0x4c8))(this);
  if (0 < iVar6) {
    do {
      puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0x4d0))(this,local_500,uVar19);
      pTVar1 = (TReferenceControllerBase<1> *)puVar9[1];
      pFVar2 = (FChaosClothSimulationModel *)*puVar9;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4f8)
      ;
      if (pFVar2 != (FChaosClothSimulationModel *)0x0) {
        for (uVar17 = 0; (int)uVar17 < (pFVar2->ClothSimulationLodModels).ArrayNum;
            uVar17 = uVar17 + 1) {
          FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_148);
          iVar6 = (pFVar2->ClothSimulationLodModels).ArrayNum;
          uVar15 = 0;
          if ((int)uVar17 < iVar6) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          lVar7 = (longlong)iVar6;
          if (uVar15 == 0) {
            local_598 = (double)(longlong)(int)uVar17;
            lVar7 = 0x1506109c0;
            local_590 = (longlong)iVar6;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
          FArchiveState::FArchiveState(&local_4e8);
          uVar14 = (undefined7)((ulonglong)lVar7 >> 8);
          local_4e8._padding_ =
               (longlong)&___7FMemoryCounterArchive_Private_ClothAsset_Chaos_UE__6B_;
          local_458 = 0;
          FArchiveState::SetIsSaving(&local_4e8,true);
          (**(code **)(local_4e8._padding_ + 0x108))(&local_4e8,CONCAT71(uVar14,1));
          local_4e8.ArIsCountingMemory = '\x01';
          FChaosClothSimulationLodModel::Serialize
                    ((FChaosClothSimulationLodModel *)(pFVar3 + (longlong)(int)uVar17 * 0x1f0),
                     (FArchive *)&local_4e8);
          FResourceSizeEx::AddDedicatedSystemMemoryBytes((FResourceSizeEx *)local_148,local_458);
          FArchive::~FArchive((FArchive *)&local_4e8);
          local_598 = (double)FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_148);
          ::FString::AppendfImpl(&local_588,L"\n ClothSimulationModel%d LOD%d size: %ld bytes");
          local_58 = 0;
          if (local_60 != (void *)0x0) {
            FMemory::Free(local_60);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_a0);
          local_a8 = 0;
          if (local_b0 != (void *)0x0) {
            FMemory::Free(local_b0);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_f0);
          local_f8 = 0;
          if (local_100 != (void *)0x0) {
            FMemory::Free(local_100);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_148 + 8));
        }
        FChaosClothSimulationModel::GetResourceSizeEx(pFVar2,(FResourceSizeEx *)local_448);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar17 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar17;
      iVar6 = (**(code **)(this->_padding_ + 0x4c8))(this);
      param_1 = local_568;
    } while ((int)uVar17 < iVar6);
  }
  FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_448);
  ::FString::AppendfImpl(&local_588,L"\n Total ClothSimulationModel(s) size: %ld bytes");
  uVar12 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_448);
  uVar13 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_348);
  local_560 = (FName)this->_padding_;
  ::FName::ToString(&local_560,&local_530);
  local_598 = (double)((float)(longlong)(uVar12 + uVar13) * __real_35800000);
  ::FString::AppendfImpl
            (&local_588,L"\n Total resource size for Cloth Asset [%s]: %ld bytes (%.3f MB)");
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  uVar12 = FResourceSizeEx::GetTotalMemoryBytes(param_1);
  local_558 = (FName)this->_padding_;
  ::FName::ToString(&local_558,&local_520);
  local_598 = (double)((float)(longlong)uVar12 * __real_35800000);
  ::FString::AppendfImpl(&local_588,L"\n Total size for Cloth Asset [%s]: %ld bytes (%.3f MB)");
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogChaosClothAsset._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
  }
  local_358 = 0;
  if (local_360 != (void *)0x0) {
    FMemory::Free(local_360);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3a0);
  local_3a8 = 0;
  if (local_3b0 != (void *)0x0) {
    FMemory::Free(local_3b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3f0);
  local_3f8 = 0;
  if (local_400 != (void *)0x0) {
    FMemory::Free(local_400);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_448 + 8));
  local_258 = 0;
  if (local_260 != (void *)0x0) {
    FMemory::Free(local_260);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2a0);
  local_2a8 = 0;
  if (local_2b0 != (void *)0x0) {
    FMemory::Free(local_2b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2f0);
  local_2f8 = 0;
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_348 + 8));
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  return;
}

// GetShadowPhysicsAsset @ 14dc4f740

UPhysicsAsset * __thiscall UChaosClothAssetBase::GetShadowPhysicsAsset(UChaosClothAssetBase *this)

{
  return (this->ShadowPhysicsAsset).field0_0x0.DebugPtr;
}

// GetSupportRayTracing @ 14dc4fd90

bool __thiscall UChaosClothAssetBase::GetSupportRayTracing(UChaosClothAssetBase *this)

{
  return this->bSupportRayTracing;
}

// GetTargetMeshDeformers @ 14dc4fda0

UMeshDeformerCollection * __thiscall
UChaosClothAssetBase::GetTargetMeshDeformers(UChaosClothAssetBase *this)

{
  return (UMeshDeformerCollection *)0x0;
}

// GetUVChannelData @ 14dc501c0

FMeshUVChannelInfo * __thiscall
UChaosClothAssetBase::GetUVChannelData(UChaosClothAssetBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  FMeshUVChannelInfo *pFVar5;
  uint uVar6;
  
  lVar3 = (**(code **)(this->_padding_ + 0x3c0))();
  if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 8))) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))();
    uVar6 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMeshUVChannelInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    return (FMeshUVChannelInfo *)(*plVar4 + (longlong)param_1 * 0x30 + 0x10);
  }
  return (FMeshUVChannelInfo *)0x0;
}

// HasHalfEdgeBuffer @ 14dc51870

bool __thiscall UChaosClothAssetBase::HasHalfEdgeBuffer(UChaosClothAssetBase *this,int param_1)

{
  return false;
}

// HasValidClothSimulationModels @ 14dc51920

bool __thiscall UChaosClothAssetBase::HasValidClothSimulationModels(UChaosClothAssetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Public\\ChaosClothAsset\\ClothAssetBase.h"
             ,0x25,L"Pure virtual not implemented (%s)");
  return false;
}

// InitResources @ 14dc51b10

void __thiscall UChaosClothAssetBase::InitResources(UChaosClothAssetBase *this)

{
  FSkeletalMeshRenderData *this_00;
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name461,L"ClothAsset/InitResources");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name461,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name461,true);
  USkinnedAsset::UpdateUVChannelData((USkinnedAsset *)this,false);
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if (this_00 != (FSkeletalMeshRenderData *)0x0) {
    bVar1 = (bool)(**(code **)(this->_padding_ + 0x470))(this);
    FSkeletalMeshRenderData::InitResources(this_00,bVar1,(USkinnedAsset *)this);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsMaterialUsed @ 14dc52890

bool __thiscall UChaosClothAssetBase::IsMaterialUsed(UChaosClothAssetBase *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->Materials).ArrayNum)) {
    return true;
  }
  return false;
}

// IsMinLodQualityLevelEnable @ 14dc528b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UChaosClothAssetBase::IsMinLodQualityLevelEnable(UChaosClothAssetBase *this)

{
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseClothAssetMinLODPerQualityLevels != false)) {
    return true;
  }
  return false;
}

// IsReadyForFinishDestroy @ 14dc528e0

bool __thiscall UChaosClothAssetBase::IsReadyForFinishDestroy(UChaosClothAssetBase *this)

{
  FSkeletalMeshRenderData *this_00;
  bool bVar1;
  
  bVar1 = UStreamableRenderAsset::IsReadyForFinishDestroy((UStreamableRenderAsset *)this);
  if (!bVar1) {
    return false;
  }
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  }
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// IsValidLODIndex @ 14dc52b20

bool __thiscall UChaosClothAssetBase::IsValidLODIndex(UChaosClothAssetBase *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->LODInfo).ArrayNum)) {
    return true;
  }
  return false;
}

// NeedCPUData @ 14dc52bf0

bool __thiscall UChaosClothAssetBase::NeedCPUData(UChaosClothAssetBase *this,int param_1)

{
  return false;
}

// OnAssetChanged @ 14dc52c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosClothAssetBase::OnAssetChanged(UChaosClothAssetBase *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_38;
  FMultiComponentReregisterContext local_28;
  
  uVar5 = 0;
  if (param_1) {
    pTVar4 = GetDependentComponents(this,&local_38);
    FMultiComponentReregisterContext::FMultiComponentReregisterContext(&local_28,pTVar4);
  }
  else {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FMultiComponentReregisterContext::FMultiComponentReregisterContext(&local_28,&local_48);
    local_38.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  while( true ) {
    if (((int)uVar5 < 0) || (local_28.ComponentsPair.ArrayNum <= (int)uVar5)) {
      if (local_28.ComponentsPair.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ComponentsPair.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = 0;
    if ((int)uVar5 < local_28.ComponentsPair.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(UActorComponent **)
         (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10) !=
        (UActorComponent *)0x0) {
      FComponentReregisterContextBase::ReRegister
                ((FComponentReregisterContextBase *)&local_28,
                 *(UActorComponent **)
                  (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10),
                 *(UWorld **)
                  (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8)
                );
    }
    uVar5 = uVar5 + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnPropertyChanged @ 14dc52ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothAssetBase::OnPropertyChanged(UChaosClothAssetBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UChaosClothComponent *this_00;
  USkeletalMeshComponent *this_01;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  EInternalObjectFlags EVar8;
  uint uVar9;
  UClass *pUVar10;
  UChaosClothAssetBase *pUVar11;
  USkeletalMesh *pUVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *this_02;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TObjectIterator<UChaosClothComponent> local_80;
  TObjectIterator<USkeletalMeshComponent> local_68;
  
  local_80.Index = 0xffffffff;
  local_80.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ObjectArray.ArrayNum = 0;
  local_80.ObjectArray.ArrayMax = 0;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = UChaosClothComponent::StaticClass();
  GetObjectsOfClass(pUVar10,&local_80.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    do {
      TObjectIterator<UChaosClothComponent>::Advance(&local_80);
      lVar14 = (longlong)local_80.Index;
      if ((local_80.Index < 0) || (local_80.ObjectArray.ArrayNum <= local_80.Index)) {
        if (local_80.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.ObjectArray.AllocatorInstance.Data);
        }
        local_68.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ObjectArray.ArrayNum = 0;
        local_68.ObjectArray.ArrayMax = 0;
        local_68.Index = 0xffffffff;
        EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        GetObjectsOfClass(pUVar10,&local_68.ObjectArray,true,RF_ClassDefaultObject,
                          EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<USkeletalMeshComponent>::Advance(&local_68);
          lVar14 = (longlong)local_68.Index;
          if ((local_68.Index < 0) || (local_68.ObjectArray.ArrayNum <= local_68.Index)) {
            if (local_68.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.ObjectArray.AllocatorInstance.Data);
            }
            return;
          }
          uVar9 = 0;
          if (local_68.Index < local_68.ObjectArray.ArrayNum) {
            uVar9 = (uint)~local_68.Index >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) break;
          this_01 = *(USkeletalMeshComponent **)
                     (local_68.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
          if ((this_01 != (USkeletalMeshComponent *)0x0) &&
             (pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01),
             pUVar12 != (USkeletalMesh *)0x0)) {
            pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
            USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar12,MeshClothingAssets,ReadWrite);
            local_res20 = (pUVar12->MeshClothingAssets).ArrayNum;
            uVar13 = (ulonglong)(int)local_res20;
            this_02 = (pUVar12->MeshClothingAssets).AllocatorInstance.Data;
            pFVar1 = this_02 + uVar13 * 8;
            while( true ) {
              if ((pUVar12->MeshClothingAssets).ArrayNum != (int)uVar13) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<TObjectPtr<UClothingAssetBase>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (this_02 == pFVar1) break;
              if (*(longlong *)this_02 != 0) {
                pUVar10 = UChaosClothAssetSKMClothingAsset::StaticClass();
                bVar6 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar10);
                if (((bVar6) && (lVar14 = *(longlong *)this_02, lVar14 != 0)) &&
                   (*(UChaosClothAssetBase **)(lVar14 + 0x38) == this)) {
                  pFVar3 = (this_01->ClothingSimulationInstances).AllocatorInstance.Data;
                  iVar2 = (this_01->ClothingSimulationInstances).ArrayNum;
                  pFVar15 = pFVar3 + 0x18;
                  while( true ) {
                    if ((this_01->ClothingSimulationInstances).ArrayNum != iVar2) {
                      local_res18[0] = 0;
                      `TCheckedPointerIterator<FClothingSimulationInstance,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_res18);
                    }
                    if (pFVar15 + -0x18 == pFVar3 + (longlong)iVar2 * 0x28) break;
                    plVar4 = *(longlong **)pFVar15;
                    if (((plVar4 != (longlong *)0x0) &&
                        (cVar7 = (**(code **)(*plVar4 + 0x2d8))(plVar4,lVar14), cVar7 != '\0')) &&
                       (*(longlong **)(pFVar15 + -8) != (longlong *)0x0)) {
                      (**(code **)(**(longlong **)(pFVar15 + -8) + 0x2d8))();
                    }
                    pFVar15 = pFVar15 + 0x28;
                  }
                }
              }
              uVar13 = (ulonglong)local_res20;
              this_02 = this_02 + 8;
            }
          }
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = 0;
      if (local_80.Index < local_80.ObjectArray.ArrayNum) {
        uVar9 = (uint)~local_80.Index >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(UChaosClothComponent **)(local_80.ObjectArray.AllocatorInstance.Data + lVar14 * 8)
      ;
    } while (this_00 == (UChaosClothComponent *)0x0);
    pUVar11 = (UChaosClothAssetBase *)
              USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_00);
    if (pUVar11 == (UChaosClothAssetBase *)0x0) {
LAB_14dc52fba:
      pUVar11 = (UChaosClothAssetBase *)0x0;
    }
    else {
      pUVar10 = StaticClass();
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) goto LAB_14dc52fba;
    }
    if (pUVar11 == this) {
      UChaosClothComponent::UpdateConfigProperties(this_00);
    }
  } while( true );
}

// PostLoad @ 14dc53840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothAssetBase::PostLoad(UChaosClothAssetBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FSkeletalMeshRenderData *this_00;
  longlong *plVar7;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> FVar9;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar10;
  Type TVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  longlong lVar12;
  undefined1 auStackY_1e8 [32];
  undefined2 auStack_1a8 [2];
  undefined1 auStack_1a4 [4];
  ulonglong uStack_1a0;
  void *pvStack_198;
  undefined8 uStack_190;
  short sStack_188;
  ForElementType<FPSOPrecacheVertexFactoryData> FStack_180;
  int iStack_158;
  int iStack_154;
  TRefCountPtr<FBaseGraphTask> aTStack_150 [4];
  TRefCountPtr<FBaseGraphTask> *pTStack_130;
  int iStack_128;
  TArray<FPSOPrecacheVertexFactoryDataPerMaterialIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  TStack_120;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UObject::PostLoad((UObject *)this);
  auStack_1a8[0] = 0;
  (**(code **)(this->_padding_ + 0x4a0))(this,auStack_1a8);
  (**(code **)(this->_padding_ + 0x4a8))(this,auStack_1a8);
  (**(code **)(this->_padding_ + 0x4b0))(this,auStack_1a8);
  bVar3 = IsResourcePSOPrecachingEnabled();
  if ((bVar3) && (lVar6 = (**(code **)(this->_padding_ + 0x398))(this), lVar6 != 0)) {
    lVar6 = (**(code **)(this->_padding_ + 0x180))(this);
    TVar11 = GMaxRHIFeatureLevel;
    if (lVar6 != 0) {
      lVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      TVar11 = (uint)*(byte *)(lVar6 + 0x188);
    }
    iVar4 = (**(code **)(this->_padding_ + 0x448))(this,0);
    TStack_120.AllocatorInstance.SecondaryData =
         (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0;
    TStack_120.ArrayNum = 0;
    TStack_120.ArrayMax = 4;
    USkinnedAsset::GetVertexFactoryTypesPerMaterialIndex
              ((USkinnedAsset *)this,&TStack_120,(USkinnedMeshComponent *)0x0,iVar4,false,TVar11);
    this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
    bVar3 = FSkeletalMeshRenderData::AnyRenderSectionCastsShadows(this_00,iVar4);
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x3c8))(this);
    iVar4 = TStack_120.ArrayNum;
    lVar6 = (longlong)TStack_120.ArrayNum;
    pvStack_198 = (void *)0x0;
    uStack_1a0 = (ulonglong)bVar3 << 0xd | (ulonglong)((uint)uStack_1a0 & 0x8000) | 0x411c00;
    uStack_190 = 0;
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&TStack_120;
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = TStack_120.AllocatorInstance.SecondaryData;
    }
    pFVar10 = (ForElementType<FPSOPrecacheVertexFactoryData> *)((longlong)FVar9 + 0x28);
    while( true ) {
      if (TStack_120.ArrayNum != iVar4) {
        auStack_1a4[0] = 0;
        `TCheckedPointerIterator<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int,0>::operator!='::
        __l2::<lambda_1>::operator()(auStack_1a4);
      }
      if ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5) ==
          (FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(lVar6 * 0x38 + (longlong)FVar9)) break;
      iStack_158 = *(int *)(pFVar10 + 1);
      lVar12 = (longlong)iStack_158;
      sStack_188 = ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5))->MaterialIndex;
      _Src = *pFVar10;
      if (*pFVar10 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        _Src = (ForElementType<FPSOPrecacheVertexFactoryData>)(pFVar10 + -4);
      }
      FStack_180.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      if (iStack_158 == 0) {
        iStack_154 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                  (0x10,8,iStack_158,0,&FStack_180,iStack_158,&iStack_154);
        _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)&FStack_180;
        if (FStack_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          _Dst = FStack_180.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar12 << 4);
      }
      lVar12 = (longlong)sStack_188;
      uVar5 = 0;
      if ((int)sStack_188 < (int)plVar7[1]) {
        uVar5 = (uint)~(int)sStack_188 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*plVar7 + lVar12 * 0x30);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,aTStack_150,&FStack_180);
        pTVar8 = aTStack_150;
        if (pTStack_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar8 = pTStack_130;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,iStack_128);
        if (pTStack_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(pTStack_130);
        }
      }
      if (FStack_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FMemory::Free((void *)FStack_180.SecondaryData);
      }
      pFVar10 = pFVar10 + 7;
    }
    if (pvStack_198 != (void *)0x0) {
      FMemory::Free(pvStack_198);
    }
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&TStack_120;
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = TStack_120.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int>
              ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)FVar9,TStack_120.ArrayNum);
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FMemory::Free((void *)TStack_120.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ReadDataflowContent @ 14dc54100

void __thiscall
UChaosClothAssetBase::ReadDataflowContent
          (UChaosClothAssetBase *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UDataflowBaseContent *pUVar3;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar2 = Z_Construct_UClass_UDataflowSkeletalContent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      pUVar3 = (param_1->field0_0x0).DebugPtr;
      goto LAB_14dc5412a;
    }
  }
  pUVar3 = (UDataflowBaseContent *)0x0;
LAB_14dc5412a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDataflowBaseContent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    return;
  }
  return;
}

// ReleaseResources @ 14dc54b20

void __thiscall UChaosClothAssetBase::ReleaseResources(UChaosClothAssetBase *this)

{
  FSkeletalMeshRenderData *this_00;
  
  this_00 = (this->SkeletalMeshRenderData).Ptr;
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    return;
  }
  return;
}

// ReregisterComponents @ 14dc55780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosClothAssetBase::ReregisterComponents(UChaosClothAssetBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_38;
  FMultiComponentReregisterContext local_28;
  
  pTVar4 = GetDependentComponents(this,&local_38);
  FMultiComponentReregisterContext::FMultiComponentReregisterContext(&local_28,pTVar4);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < local_28.ComponentsPair.ArrayNum));
      uVar5 = uVar5 + 1) {
    uVar3 = 0;
    if ((int)uVar5 < local_28.ComponentsPair.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(UActorComponent **)
         (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10) !=
        (UActorComponent *)0x0) {
      FComponentReregisterContextBase::ReRegister
                ((FComponentReregisterContextBase *)&local_28,
                 *(UActorComponent **)
                  (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10),
                 *(UWorld **)
                  (local_28.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8)
                );
    }
  }
  if (local_28.ComponentsPair.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ComponentsPair.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14dc571f0

void __thiscall UChaosClothAssetBase::Serialize(UChaosClothAssetBase *this,FArchive *param_1)

{
  int iVar1;
  FReferenceSkeleton *pFVar2;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xb9 < iVar1) {
    pFVar2 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    ::operator<<(param_1,pFVar2);
  }
  return;
}

// Serialize @ 14dc57260

void __thiscall
UChaosClothAssetBase::Serialize(UChaosClothAssetBase *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FReferenceSkeleton *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (0xb9 < iVar1) {
    pFVar2 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    ::operator<<((FArchive *)this_00,pFVar2);
  }
  return;
}

// SetDataflow @ 14dc57be0

void __thiscall UChaosClothAssetBase::SetDataflow(UChaosClothAssetBase *this,UDataflow *param_1)

{
  FDataflowInstance::SetDataflowAsset(&this->DataflowInstance,param_1);
  return;
}

// SetHasVertexColors @ 14dc57e60

void __thiscall UChaosClothAssetBase::SetHasVertexColors(UChaosClothAssetBase *this,bool param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,4,ReadWrite);
  this->bHasVertexColors = '\0';
  this->field_0x204 = this->field_0x204 | param_1;
  return;
}

// SetOverlayMaterial @ 14dc59020

void __thiscall
UChaosClothAssetBase::SetOverlayMaterial(UChaosClothAssetBase *this,UMaterialInterface *param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,8,ReadWrite);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OverlayMaterial).field0_0x0.DebugPtr = param_1;
  return;
}

// SetOverlayMaterialMaxDrawDistance @ 14dc59070

void __thiscall
UChaosClothAssetBase::SetOverlayMaterialMaxDrawDistance(UChaosClothAssetBase *this,float param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x10,ReadWrite);
  this->OverlayMaterialMaxDrawDistance = param_1;
  return;
}

// SetReferenceSkeleton @ 14dc59240

void __thiscall
UChaosClothAssetBase::SetReferenceSkeleton(UChaosClothAssetBase *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  FScriptContainerElement *_Src;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *this_01;
  FName *pFVar4;
  bool bVar5;
  FName local_res10;
  FMeshBoneInfo local_38;
  FReferenceSkeletonModifier local_28;
  
  this_01 = (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 800))();
  if (param_1 == (FReferenceSkeleton *)0x0) {
    this_01->ArrayNum = 0;
    if (this_01->ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,(ForAnyElementType *)this_01,0,&this_01->ArrayMax);
    }
    this_01[1].ArrayNum = 0;
    if (this_01[1].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,1,&this_01[1].AllocatorInstance,0,&this_01[1].ArrayMax);
    }
    this_01[2].ArrayNum = 0;
    if (this_01[2].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,&this_01[2].AllocatorInstance,0,&this_01[2].ArrayMax);
    }
    this_01[3].ArrayNum = 0;
    if (this_01[3].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,1,&this_01[3].AllocatorInstance,0,&this_01[3].ArrayMax);
    }
    bVar5 = this_01[8].ArrayNum != 1;
    if (!bVar5) {
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)(this_01 + 4));
    }
    this_01[4].ArrayNum = 0;
    if (this_01[4].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,1,&this_01[4].AllocatorInstance,0,&this_01[4].ArrayMax);
    }
    *(undefined4 *)&this_01[7].AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[7].AllocatorInstance.Data + 4) = 0;
    this_01[6].ArrayNum = 0;
    if ((this_01[6].ArrayMax < 0x20) || (0x80 < this_01[6].ArrayMax)) {
      this_01[6].ArrayMax = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(this_01 + 5),0);
    }
    if (bVar5) {
      this_01[8].ArrayNum = 1;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(this_01 + 4));
    }
    this_00 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               *)(this_01 + 9);
    bVar5 = this_01[0xd].ArrayNum != 1;
    if (!bVar5) {
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    this_01[9].ArrayNum = 0;
    if (this_01[9].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,1,(ForAnyElementType *)this_00,0,&this_01[9].ArrayMax);
    }
    *(undefined4 *)&this_01[0xc].AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[0xc].AllocatorInstance.Data + 4) = 0;
    this_01[0xb].ArrayNum = 0;
    if ((this_01[0xb].ArrayMax < 0x20) || (0x80 < this_01[0xb].ArrayMax)) {
      this_01[0xb].ArrayMax = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(this_01 + 10),0);
    }
    if (bVar5) {
      this_01[0xd].ArrayNum = 1;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
    iVar3 = *(int *)((longlong)&this_01[0x11].AllocatorInstance.Data + 4);
    *(undefined4 *)&this_01[0x11].AllocatorInstance.Data = 0;
    if (iVar3 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,(ForAnyElementType *)&this_01[0x10].ArrayNum,0,
                 (int *)((longlong)&this_01[0x11].AllocatorInstance.Data + 4));
    }
    local_28.RefSkeleton = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    local_28.Skeleton = (USkeleton *)0x0;
    local_38.ParentIndex = -1;
    pFVar4 = ::FName::FName(&local_res10,L"Root");
    local_38.Name = *pFVar4;
    FReferenceSkeletonModifier::Add
              (&local_28,&local_38,&UE::Math::TTransform<double>::Identity,false);
    FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_28);
  }
  else {
    TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=(this_01,&param_1->RawRefBoneInfo);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this_01 + 1),
               &param_1->RawRefBonePose);
    TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
              (this_01 + 2,&param_1->FinalRefBoneInfo);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this_01 + 3),
               &param_1->FinalRefBonePose);
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
              ((TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
               (this_01 + 4),&param_1->RawNameToIndexMap);
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
              ((TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
               (this_01 + 9),&param_1->FinalNameToIndexMap);
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(this_01 + 0xe),
               &param_1->RequiredVirtualBones);
    pTVar2 = this_01 + 0xf;
    if (pTVar2 != (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)&param_1->UsedVirtualBoneData
       ) {
      iVar3 = (param_1->UsedVirtualBoneData).ArrayNum;
      piVar1 = &this_01[0xf].ArrayMax;
      _Src = (param_1->UsedVirtualBoneData).AllocatorInstance.Data;
      this_01[0xf].ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    *(bool *)&this_01[0x10].AllocatorInstance.Data = param_1->bOnlyOneRootAllowed;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_01[0x10].ArrayNum,
               &param_1->CachedEndOfBranchIndicesRaw);
  }
  return;
}

// SetResourceForRendering @ 14dc595f0

void __thiscall
UChaosClothAssetBase::SetResourceForRendering
          (UChaosClothAssetBase *this,
          TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *param_1)

{
  TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData>_> *pTVar1;
  FSkeletalMeshRenderData *this_00;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadWrite);
  pTVar1 = &this->SkeletalMeshRenderData;
  if (pTVar1 != param_1) {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FSkeletalMeshRenderData *)0x0;
    if (this_00 != (FSkeletalMeshRenderData *)0x0) {
      FSkeletalMeshRenderData::~FSkeletalMeshRenderData(this_00);
      ::operator_delete(this_00,0x30);
    }
  }
  return;
}

// StaticRegisterNativesUChaosClothAssetBase @ 14dc5a750

void __cdecl UChaosClothAssetBase::StaticRegisterNativesUChaosClothAssetBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UChaosClothAssetBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSimulationActor @ 14dc5e640

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
UChaosClothAssetBase::UpdateSimulationActor(UChaosClothAssetBase *this,TObjectPtr<AActor> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  USkinnedAsset *pUVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  UClass *local_f0;
  undefined8 local_e8 [24];
  undefined8 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = (param_1->field0_0x0).DebugPtr;
  pUVar6 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_1c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14dc5e742;
  pUVar4 = UChaosClothComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14dc5e6a8;
  }
  else {
    pUVar9 = pUVar6;
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14dc5e6a8:
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar9 = pUVar6;
      if (pUVar5 != (UClass *)0x0) {
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar9 = pUVar4;
        }
      }
    }
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_f0 = pUVar4;
  if (pUVar9 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UChaosClothComponent,1,0,_AActor::GetComponents<UChaosClothComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UChaosClothComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UChaosClothComponent,0,0,_AActor::GetComponents<UChaosClothComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UChaosClothComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
LAB_14dc5e742:
  iVar2 = local_20;
  puVar8 = local_e8;
  if (local_28 != (undefined8 *)0x0) {
    puVar8 = local_28;
  }
  puVar1 = puVar8 + local_20;
  while( true ) {
    if (local_20 != iVar2) {
      `TCheckedPointerIterator<UChaosClothComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f8);
    }
    if (puVar8 == puVar1) break;
    pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)*puVar8);
    if (pUVar7 != (USkinnedAsset *)0x0) {
      StaticClass();
    }
    puVar8 = puVar8 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// WriteDataflowContent @ 14dc5ec60

void __thiscall
UChaosClothAssetBase::WriteDataflowContent
          (UChaosClothAssetBase *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  UDataflowBaseContent *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDataflowInstance *pFVar4;
  FName this_01;
  FString *pFVar5;
  UDataflow *local_res10;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar3 = Z_Construct_UClass_UDataflowSkeletalContent_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar3);
    if ((bVar2) &&
       (this_00 = (param_1->field0_0x0).DebugPtr, this_00 != (UDataflowBaseContent *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pcVar1 = *(code **)(this_00->_padding_ + 0x2b8);
      pFVar4 = (FDataflowInstance *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
      local_res10 = FDataflowInstance::GetDataflowAsset(pFVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UDataflow *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      (*pcVar1)(this_00,&local_res10);
      pFVar4 = (FDataflowInstance *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
      this_01 = FDataflowInstance::GetDataflowTerminal(pFVar4);
      pFVar5 = ::FName::ToString((FName *)this_01,&local_18);
      ::FString::operator=(&this_00->DataflowTerminal,pFVar5);
      UDataflowBaseContent::SetConstructionDirty(this_00,true);
      UDataflowBaseContent::SetSimulationDirty(this_00,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// _getUObject @ 14dc61070

UObject * __thiscall UChaosClothAssetBase::_getUObject(UChaosClothAssetBase *this)

{
  return (UObject *)&this[-1].RefSkeleton.FinalNameToIndexMap.field_0x10;
}

// _getUObject`adjustor{8}' @ 14dc61080

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothAssetBase::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UChaosClothAssetBase::_getUObject_adjustor_8__(UChaosClothAssetBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothAssetBase *)&this[-1].CachedComposedRefPoseMatrices.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{48}' @ 14dc61090

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UChaosClothAssetBase::_getUObject`adjustor{48}' (void)const __ptr64 */

UObject * __thiscall UChaosClothAssetBase::_getUObject_adjustor_48__(UChaosClothAssetBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UChaosClothAssetBase *)&this[-1].ReleaseResourcesFence);
  return (UObject *)pUVar1;
}

// execGetOverlayMaterial @ 14dc62390

void __cdecl
UChaosClothAssetBase::execGetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x430))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetOverlayMaterialMaxDrawDistance @ 14dc623d0

void __cdecl
UChaosClothAssetBase::execGetOverlayMaterialMaxDrawDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x438))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetShadowPhysicsAsset @ 14dc62410

void __cdecl
UChaosClothAssetBase::execGetShadowPhysicsAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x348))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execSetOverlayMaterial @ 14dc64130

void __cdecl
UChaosClothAssetBase::execSetOverlayMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,8,ReadWrite);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[0xc].field_0x18 = pUVar2;
  return;
}

// execSetOverlayMaterialMaxDrawDistance @ 14dc641f0

void __cdecl
UChaosClothAssetBase::execSetOverlayMaterialMaxDrawDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)param_1,0x10,ReadWrite);
  *(undefined4 *)&param_1[0xc].field_0x20 = uVar2;
  return;
}

