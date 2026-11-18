// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 4

// FGenericDenoiser @ 14eae5d10

FGenericDenoiser * __thiscall
UE::NNEDenoiser::Private::FGenericDenoiser::FGenericDenoiser
          (FGenericDenoiser *this,
          TUniquePtr<UE::NNEDenoiser::Private::IModelInstance,TDefaultDelete<UE::NNEDenoiser::Private::IModelInstance>_>
          param_1,TUniquePtr<UE::NNEDenoiser::Private::IInputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IInputProcess>_>
                  param_2,
          TUniquePtr<UE::NNEDenoiser::Private::IOutputProcess,TDefaultDelete<UE::NNEDenoiser::Private::IOutputProcess>_>
          param_3,FParameters *param_4,
          TUniquePtr<UE::NNEDenoiser::Private::IAutoExposure,TDefaultDelete<UE::NNEDenoiser::Private::IAutoExposure>_>
          param_5,TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> *param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  IModelInstance IVar2;
  IInputProcess IVar3;
  IOutputProcess IVar4;
  IAutoExposure IVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  (this->ModelInstance).Ptr = (IModelInstance *)*param_1.Ptr;
  *param_1.Ptr = (IModelInstance)0x0;
  (this->InputProcess).Ptr = (IInputProcess *)*param_2.Ptr;
  *param_2.Ptr = (IInputProcess)0x0;
  (this->OutputProcess).Ptr = (IOutputProcess *)*param_3.Ptr;
  *param_3.Ptr = (IOutputProcess)0x0;
  iVar6 = (param_4->TilingConfig).Overlap;
  iVar7 = (param_4->TilingConfig).MaxSize;
  iVar8 = (param_4->TilingConfig).MinSize;
  (this->DenoiserParameters).TilingConfig.Alignment = (param_4->TilingConfig).Alignment;
  (this->DenoiserParameters).TilingConfig.Overlap = iVar6;
  (this->DenoiserParameters).TilingConfig.MaxSize = iVar7;
  (this->DenoiserParameters).TilingConfig.MinSize = iVar8;
  (this->AutoExposure).Ptr = (IAutoExposure *)*param_5.Ptr;
  *param_5.Ptr = (IAutoExposure)0x0;
  (this->TransferFunction).Object = param_6->Object;
  pTVar1 = (param_6->SharedReferenceCount).ReferenceController;
  (this->TransferFunction).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->LastExtent).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  (this->Tiling).TileSize.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Tiling).Count.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Tiling).Tiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiling).Tiles.ArrayNum = 0;
  (this->Tiling).Tiles.ArrayMax = 0;
  IVar2 = *param_1.Ptr;
  if (IVar2 != (IModelInstance)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  IVar3 = *param_2.Ptr;
  if (IVar3 != (IInputProcess)0x0) {
    (*(code *)**(undefined8 **)IVar3)(IVar3,1);
  }
  IVar4 = *param_3.Ptr;
  if (IVar4 != (IOutputProcess)0x0) {
    (*(code *)**(undefined8 **)IVar4)(IVar4,1);
  }
  IVar5 = *param_5.Ptr;
  if (IVar5 != (IAutoExposure)0x0) {
    (*(code *)**(undefined8 **)IVar5)(IVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FGenericDenoiser @ 14eae6ae0

void __thiscall
UE::NNEDenoiser::Private::FGenericDenoiser::~FGenericDenoiser(FGenericDenoiser *this)

{
  FScriptContainerElement *pFVar1;
  IAutoExposure *pIVar2;
  IOutputProcess *pIVar3;
  IInputProcess *pIVar4;
  IModelInstance *pIVar5;
  
  pFVar1 = (this->Tiling).Tiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransferFunction).SharedReferenceCount.ReferenceController);
  pIVar2 = (this->AutoExposure).Ptr;
  if (pIVar2 != (IAutoExposure *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->OutputProcess).Ptr;
  if (pIVar3 != (IOutputProcess *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->InputProcess).Ptr;
  if (pIVar4 != (IInputProcess *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->ModelInstance).Ptr;
  if (pIVar5 != (IModelInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eae6b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar5)(pIVar5,1);
    return;
  }
  return;
}

// AddPasses @ 14eaec0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
__thiscall
UE::NNEDenoiser::Private::FGenericDenoiser::AddPasses
          (FGenericDenoiser *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3,
          FRDGTexture *param_4,FRDGTexture *param_5,FRDGTexture *param_6,FRHIGPUMask *param_7,
          FHistory *param_8)

{
  TIntPoint<int> TVar1;
  FScriptContainerElement *pFVar2;
  IInputProcess *pIVar3;
  IModelInstance *pIVar4;
  IAutoExposure *pIVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  FRDGTexture *pFVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
  TVar13;
  FTiling *pFVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *pTVar17;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar18;
  FRDGBuffer *pFVar19;
  ITransferFunction *pIVar20;
  TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar21;
  undefined8 *puVar22;
  int iVar23;
  wchar_t *pwVar24;
  bool bVar25;
  longlong in_stack_00000050;
  undefined1 auStackY_4a8 [32];
  undefined1 local_450 [32];
  void *local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  ForElementType<FSetElementId> local_410;
  int local_408;
  FRDGTexture *local_3f8;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> local_3f0;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> local_3e0;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> local_3d0;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  TIntVector3<int>_u_0 local_3a8;
  undefined8 local_39c;
  int local_394;
  undefined8 local_390;
  int local_388;
  undefined8 local_384;
  undefined8 local_37c;
  undefined4 local_374;
  undefined4 local_370;
  FScriptContainerElement *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  FScriptContainerElement *local_358;
  int iStack_350;
  FRDGBufferDesc local_348;
  undefined1 local_330 [64];
  ForElementType<FSetElementId> local_2f0;
  int local_2e8;
  undefined1 local_2e0 [16];
  longlong lStack_2d0;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_2c8;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_2b8;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_2a8;
  TArrayView<FRDGBuffer_*_const,int> local_298;
  TArrayView<FRDGBuffer_*_const,int> local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  TArrayView<UE::NNE::FTensorShape_const_,int> local_258;
  undefined1 local_248 [16];
  FTiling local_238;
  TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_218;
  undefined1 local_1c8 [40];
  undefined8 local_1a0;
  FRDGAllocator *local_198;
  wchar_t *local_180;
  ForAnyElementType local_178;
  int iStack_170;
  int iStack_16c;
  FRDGPass *local_160;
  undefined4 local_158;
  undefined1 local_150 [32];
  undefined8 local_130;
  ForElementType<FRDGTexture_*> local_128;
  int iStack_120;
  int iStack_11c;
  void *local_110;
  undefined4 local_108;
  undefined1 local_100 [32];
  undefined8 local_e0;
  ForElementType<FRDGBuilder::FExtractedBuffer> local_d8;
  int iStack_d0;
  int iStack_cc;
  void *local_c0;
  undefined4 local_b8;
  int local_b0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_3f8 = (FRDGTexture *)param_7;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.AddPasses");
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId209,"NNEDenoiser.AddPasses",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
               ,0xd1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId209);
  }
  pwVar24 = L"";
  if ((param_3 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ColorTex != FRDGTextureRef{}",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                          ,0xd4,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar13.Ptr = (FHistory *)(*pcVar7)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
            )TVar13.Ptr;
  }
  if ((param_4 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AlbedoTex != FRDGTextureRef{}",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                          ,0xd5,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar13.Ptr = (FHistory *)(*pcVar7)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
            )TVar13.Ptr;
  }
  if ((param_5 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NormalTex != FRDGTextureRef{}",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                          ,0xd6,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar13.Ptr = (FHistory *)(*pcVar7)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
            )TVar13.Ptr;
  }
  if ((param_6 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputTex != FRDGTextureRef{}",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                          ,0xd7,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar13.Ptr = (FHistory *)(*pcVar7)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
            )TVar13.Ptr;
  }
  TVar1.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_3->Desc).field_0x24;
  param_1->_padding_ = 0;
  bVar11 = Prepare(this,TVar1);
  if (!bVar11) {
    local_3a8._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_394 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_388 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_384 = 0;
    local_374 = 0;
    local_3a8._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_39c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_390 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_37c = 1;
    local_370 = 1;
    AddCopyTexturePass((FRDGBuilder *)param_2,param_3,param_6,(FRHICopyTextureInfo *)&local_3a8._s_0
                      );
    goto LAB_14eaeca67;
  }
  local_218.Elements._44_4_ = 0x80;
  local_218.Elements._0_8_ = 0;
  local_218.Elements._8_8_ = 0;
  local_218.Elements._32_8_ = 0;
  local_218.Elements._40_4_ = 0;
  local_218.Elements._48_4_ = 0xffffffff;
  local_218.Elements._52_4_ = 0;
  local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_218.HashSize = 0;
  if (in_stack_00000050 != 0) {
    TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::operator=(&local_218,
                (TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)(in_stack_00000050 + 0x18));
  }
  local_330._0_8_ = 0;
  local_330._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_330._48_4_ = _UNK_150631d98;
  local_330._52_4_ = _UNK_150631d9c;
  local_330._8_8_ = 0;
  local_330._32_8_ = 0;
  local_2f0 = (ForElementType<FSetElementId>)0x0;
  local_2e8 = 0;
  TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=(local_330,&local_218);
  pFVar14 = FTiling::FTiling(&local_238,&this->Tiling);
  local_1c8._0_8_ = param_2;
  FTiling::FTiling((FTiling *)(local_1c8 + 8),pFVar14);
  local_178.Data = (FScriptContainerElement *)___xmm_00000000ffffffff0000008000000000;
  iStack_170 = _UNK_150631d98;
  iStack_16c = _UNK_150631d9c;
  local_1a0 = (void *)0x0;
  local_198 = (FRDGAllocator *)0x0;
  local_180 = (wchar_t *)0x0;
  local_160 = (FRDGPass *)0x0;
  local_158 = 0;
  TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=(&local_1a0,
              (TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)local_330);
  local_150._0_8_ = 0;
  local_150._8_8_ = (FRDGDispatchPass **)0x0;
  local_130._0_4_ = 0;
  local_130._4_4_ = 0;
  local_128.Data = (FRDGTexture **)___xmm_00000000ffffffff0000008000000000;
  iStack_120 = _UNK_150631d98;
  iStack_11c = _UNK_150631d9c;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = (FRDGUniformBuffer **)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  local_d8.Data = ___xmm_00000000ffffffff0000008000000000;
  iStack_d0 = _UNK_150631d98;
  iStack_cc = _UNK_150631d9c;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = -1;
  pFVar2 = (pFVar14->Tiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_2e8 = 0;
  if (local_2f0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2f0);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_330);
  iVar12 = (**(code **)((longlong)*(this->InputProcess).Ptr + 0x18))();
  iVar23 = 0;
  if (0 < iVar12) {
    iVar23 = iVar12;
  }
  if (0 < iVar23) {
    FResourceManager::AddTexture((FResourceManager *)local_1c8,Color,param_3,iVar23);
  }
  pIVar3 = (this->InputProcess).Ptr;
  iVar12 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,1);
  iVar23 = 0;
  if (0 < iVar12) {
    iVar23 = iVar12;
  }
  if (0 < iVar23) {
    FResourceManager::AddTexture((FResourceManager *)local_1c8,Albedo,param_4,iVar23);
  }
  pIVar3 = (this->InputProcess).Ptr;
  iVar12 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,2);
  iVar23 = 0;
  if (0 < iVar12) {
    iVar23 = iVar12;
  }
  if (0 < iVar23) {
    FResourceManager::AddTexture((FResourceManager *)local_1c8,Normal,param_5,iVar23);
  }
  pFVar9 = local_3f8;
  if (local_3f8 != (FRDGTexture *)0x0) {
    pIVar3 = (this->InputProcess).Ptr;
    iVar12 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,3);
    iVar23 = 0;
    if (0 < iVar12) {
      iVar23 = iVar12;
    }
    if (0 < iVar23) {
      FResourceManager::AddTexture((FResourceManager *)local_1c8,Flow,pFVar9,iVar23);
    }
  }
  pIVar3 = (this->InputProcess).Ptr;
  iVar12 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,4);
  iVar23 = 1;
  if (1 < iVar12) {
    iVar23 = iVar12;
  }
  if (0 < iVar23) {
    FResourceManager::AddTexture((FResourceManager *)local_1c8,Output,param_6,iVar23);
  }
  pIVar4 = (this->ModelInstance).Ptr;
  plVar15 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_278);
  pIVar4 = (this->ModelInstance).Ptr;
  local_2e0._8_8_ = *plVar15;
  lStack_2d0 = plVar15[1];
  puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_268);
  local_2c8.DataPtr = (FTensorDesc *)*puVar16;
  local_2c8._8_8_ = puVar16[1];
  CreateBuffersRDG(&local_3d0,(FRDGBuilder *)param_2,&local_2c8,
                   (TArrayView<UE::NNE::FTensorShape_const_,int> *)(local_2e0 + 8));
  pTVar17 = GetOutputTensorShapes(&local_3f0,(this->ModelInstance).Ptr);
  pTVar18 = TArrayView<UE::NNE::FTensorShape_const_,int>::
            TArrayView<UE::NNE::FTensorShape_const_,int><TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>,TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_>_>
                      (&local_258,pTVar17);
  pIVar4 = (this->ModelInstance).Ptr;
  local_2b8.DataPtr = pTVar18->DataPtr;
  local_2b8._8_8_ = *(undefined8 *)&pTVar18->ArrayNum;
  puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,local_248);
  local_2a8.DataPtr = (FTensorDesc *)*puVar16;
  local_2a8._8_8_ = puVar16[1];
  CreateBuffersRDG(&local_3e0,(FRDGBuilder *)param_2,&local_2a8,&local_2b8);
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
  if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.AllocatorInstance.Data);
  }
  pIVar5 = (this->AutoExposure).Ptr;
  if ((this->TransferFunction).Object == (ITransferFunction *)0x0) {
    if (pIVar5 != (IAutoExposure *)0x0) goto LAB_14eaec6a8;
  }
  else if (pIVar5 == (IAutoExposure *)0x0) {
LAB_14eaec6a8:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!TransferFunction.IsValid() && !AutoExposure.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserGenericDenoiser.cpp"
                        ,0x104,
                        L"TransferFunction and AutoExposure either both need to be set or not set.")
    ;
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      TVar13.Ptr = (FHistory *)(*pcVar7)();
      return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
              )TVar13.Ptr;
    }
  }
  else {
    uStack_3b8 = 0x4109;
    local_3c0 = 4;
    uStack_3bc = 2;
    local_348.BytesPerElement = 4;
    local_348.NumElements = 2;
    local_3b0 = 0;
    local_348._12_4_ = uStack_3b4;
    local_348.Usage = VertexBuffer|NNE|ShaderResource|UnorderedAccess|Static;
    local_348.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar19 = FRDGBuilder::CreateBuffer
                        ((FRDGBuilder *)param_2,&local_348,L"AutoExposureOutputBuffer",None);
    pIVar5 = (this->AutoExposure).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,param_2,param_3,pFVar19);
    pIVar20 = TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1>::operator->
                        (&this->TransferFunction);
    (**(code **)((longlong)*pIVar20 + 0x18))(pIVar20,pFVar19);
  }
  iVar23 = 0;
  if (0 < (this->Tiling).Tiles.ArrayNum) {
    do {
      FResourceManager::BeginTile((FResourceManager *)local_1c8,iVar23);
      iVar12 = local_3e0.ArrayNum;
      local_368 = local_3e0.AllocatorInstance.Data;
      if ((local_3e0.ArrayNum < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar13.Ptr = (FHistory *)(*pcVar7)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
                )TVar13.Ptr;
      }
      iVar10 = local_3d0.ArrayNum;
      iStack_360 = iVar12;
      local_358 = local_3d0.AllocatorInstance.Data;
      if ((local_3d0.ArrayNum < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar13.Ptr = (FHistory *)(*pcVar7)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
                )TVar13.Ptr;
      }
      local_298._8_8_ = CONCAT44(uStack_35c,iStack_360);
      iStack_350 = iVar10;
      local_298.DataPtr = (FRDGBuffer **)local_368;
      local_288.DataPtr = (FRDGBuffer **)local_358;
      AddTilePasses((FRDGBuilder *)param_2,(this->ModelInstance).Ptr,(this->InputProcess).Ptr,
                    (this->OutputProcess).Ptr,(FResourceManager *)local_1c8,&local_288,&local_298);
      FResourceManager::EndTile((FResourceManager *)local_1c8);
      iVar23 = iVar23 + 1;
    } while (iVar23 < (this->Tiling).Tiles.ArrayNum);
  }
  puVar16 = (undefined8 *)0x0;
  pTVar21 = (TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)FResourceManager::MakeHistoryResourceMap
                         ((FResourceManager *)local_1c8,
                          (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
                           *)local_a8);
  if (&local_218 != pTVar21) {
    TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
              (&local_218,pTVar21);
  }
  local_60 = 0;
  if ((void *)local_a8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_a8);
  if (local_218.Elements._8_4_ != local_218.Elements._52_4_) {
    if (DebugName.Data.ArrayNum != 0) {
      pwVar24 = (wchar_t *)DebugName.Data.AllocatorInstance;
    }
    puVar22 = ::operator_new(0x68);
    if (puVar22 != (undefined8 *)0x0) {
      local_450._0_8_ = (FScriptContainerElement *)0x0;
      local_428 = ___xmm_00000000ffffffff0000008000000000;
      uStack_420._0_4_ = _UNK_150631d98;
      uStack_420._4_4_ = _UNK_150631d9c;
      local_450._8_8_ = 0;
      local_430 = (void *)0x0;
      local_410 = (ForElementType<FSetElementId>)0x0;
      local_408 = 0;
      TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_450,&local_218);
      *(undefined4 *)(puVar22 + 1) = 0;
      *(undefined8 *)
       &((TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *)(puVar22 + 3))->Elements = 0;
      *puVar22 = &___7FHistory_Private_NNEDenoiser_UE__6B_;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[2] = pwVar24;
      *(undefined4 *)(puVar22 + 8) = 0;
      *(undefined4 *)((longlong)puVar22 + 0x44) = 0x80;
      *(undefined4 *)(puVar22 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)puVar22 + 0x4c) = 0;
      puVar22[0xb] = 0;
      *(undefined4 *)(puVar22 + 0xc) = 0;
      TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)(puVar22 + 3),
                 (TSet<TTuple<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_450);
      local_408 = 0;
      if (local_410 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_410);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(local_450,0,local_450._8_4_);
      bVar11 = local_450._12_4_ != 0;
      local_450._8_8_ = (ulonglong)(uint)local_450._12_4_ << 0x20;
      if (bVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_450,0,(int *)(local_450 + 0xc));
      }
      uVar8 = local_428._4_4_;
      uStack_420 = 0xffffffff;
      local_428 = (FExtractedBuffer *)((ulonglong)local_428._4_4_ << 0x20);
      if (0x80 < uVar8) {
        local_428 = (FExtractedBuffer *)0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_450 + 0x10),0);
      }
      if (local_430 != (void *)0x0) {
        FMemory::Free(local_430);
      }
      puVar16 = puVar22;
      if ((FScriptContainerElement *)local_450._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_450._0_8_);
      }
    }
    if (param_1 == (FRDGBuilder *)local_2e0) {
      if (puVar16 != (undefined8 *)0x0) {
        puVar22 = (undefined8 *)*puVar16;
        goto LAB_14eaec9a3;
      }
    }
    else {
      puVar6 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = (longlong)puVar16;
      if (puVar6 != (undefined8 *)0x0) {
        puVar22 = (undefined8 *)*puVar6;
        puVar16 = puVar6;
LAB_14eaec9a3:
        (*(code *)*puVar22)(puVar16,1);
      }
    }
  }
  if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.AllocatorInstance.Data);
  }
  if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.AllocatorInstance.Data);
  }
  local_b8 = 0;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_100);
  local_108 = 0;
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_150);
  local_158 = 0;
  if (local_160 != (FRDGPass *)0x0) {
    FMemory::Free(local_160);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a0);
  if ((FScriptContainerElement *)local_1c8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._24_8_);
  }
  local_218.HashSize = 0;
  if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_218.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_218);
LAB_14eaeca67:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (TUniquePtr<UE::NNEDenoiser::Private::FHistory,TDefaultDelete<UE::NNEDenoiser::Private::FHistory>_>
          )(FHistory *)param_1;
}

// Prepare @ 14eafc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNEDenoiser::Private::FGenericDenoiser::Prepare(FGenericDenoiser *this,TIntPoint<int> param_1)

{
  TArray<UE::NNEDenoiser::Private::FTile,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::NNEDenoiser::Private::FTile,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  IInputProcess *pIVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TIntPoint<int> TVar10;
  TIntPoint<int> TVar11;
  TIntPoint<int> TVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *this_00;
  FTensorDesc *pFVar16;
  FTiling *pFVar17;
  TIntPoint<int> TVar18;
  ForElementType<int> FVar19;
  FTiling local_50;
  
  if ((param_1.field0_0x0._0_4_ == (this->LastExtent).field0_0x0._s_0.X) &&
     (param_1.field0_0x0._4_4_ == (this->LastExtent).field0_0x0._s_0.Y)) {
    return true;
  }
  pIVar7 = (this->InputProcess).Ptr;
  cVar13 = (**(code **)((longlong)*pIVar7 + 8))(pIVar7,(this->ModelInstance).Ptr,0xffffffffffffffff)
  ;
  if (cVar13 == '\0') {
    return false;
  }
  this_00 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)
            (**(code **)((longlong)*(this->ModelInstance).Ptr + 8))();
  pFVar16 = TArrayView<UE::NNE::FTensorDesc_const_,int>::operator[](this_00,0);
  iVar3 = (pFVar16->Shape).Data.ArrayNum;
  FVar19 = (pFVar16->Shape).Data.AllocatorInstance.SecondaryData;
  if (FVar19 == (ForElementType<int>)0x0) {
    FVar19 = (ForElementType<int>)&pFVar16->Shape;
  }
  if (iVar3 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
  }
  else if (3 < iVar3) goto LAB_14eafc49a;
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                      ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar14) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
LAB_14eafc49a:
  uVar4 = *(undefined4 *)((longlong)FVar19 + 0xc);
  if ((iVar3 < 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  iVar3 = (this->DenoiserParameters).TilingConfig.Overlap;
  iVar5 = (this->DenoiserParameters).TilingConfig.MinSize;
  iVar6 = (this->DenoiserParameters).TilingConfig.MaxSize;
  TVar11.field0_0x0._s_0.Y = iVar5;
  TVar11.field0_0x0._s_0.X = iVar5;
  TVar10.field0_0x0._s_0.Y = iVar3;
  TVar10.field0_0x0._s_0.X = iVar3;
  TVar12.field0_0x0._s_0.Y = iVar6;
  TVar12.field0_0x0._s_0.X = iVar6;
  TVar18.field0_0x0._s_0.Y = *(undefined4 *)((longlong)FVar19 + 8);
  TVar18.field0_0x0._s_0.X = uVar4;
  pFVar17 = CreateTiling(&local_50,TVar18,TVar12,TVar11,
                         (this->DenoiserParameters).TilingConfig.Alignment,TVar10,param_1);
  pTVar1 = &(this->Tiling).Tiles;
  pTVar2 = &pFVar17->Tiles;
  (this->Tiling).TileSize.field0_0x0 = (pFVar17->TileSize).field0_0x0;
  (this->Tiling).Count.field0_0x0 = (pFVar17->Count).field0_0x0;
  if (pTVar1 != pTVar2) {
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Tiling).Tiles.ArrayNum = (pFVar17->Tiles).ArrayNum;
    (this->Tiling).Tiles.ArrayMax = (pFVar17->Tiles).ArrayMax;
    (pFVar17->Tiles).ArrayNum = 0;
    (pFVar17->Tiles).ArrayMax = 0;
  }
  if (local_50.Tiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Tiles.AllocatorInstance.Data);
  }
  pIVar7 = (this->InputProcess).Ptr;
  cVar13 = (**(code **)((longlong)*pIVar7 + 0x10))
                     (pIVar7,(this->ModelInstance).Ptr,(this->Tiling).TileSize.field0_0x0);
  if (cVar13 != '\0') {
    (this->LastExtent).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    return true;
  }
  return false;
}

