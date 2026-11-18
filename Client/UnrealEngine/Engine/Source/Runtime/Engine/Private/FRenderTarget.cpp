// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FRenderTarget @ 148907d90

FRenderTarget * __thiscall FRenderTarget::FRenderTarget(FRenderTarget *this)

{
  (this->RenderTargetTextureRHI).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  return this;
}

// ~FRenderTarget @ 14890e140

void __thiscall FRenderTarget::~FRenderTarget(FRenderTarget *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  this_00 = (this->RenderTargetTextureRHI).Reference;
  if (this_00 == (FRHITexture *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// operator() @ 148910f50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FRenderTarget::ReadFloat16Pixels'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 uVar1;
  ERHIAccess EVar2;
  FRHITransitionInfo_u_8 FVar3;
  undefined8 uVar4;
  FRHITransitionInfo *pFVar5;
  undefined8 uVar6;
  longlong lVar7;
  FRHITransitionInfo_u_8 FVar8;
  FRHITransitionInfo_u_8 *pFVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FRHITransitionInfo local_88;
  
  pFVar9 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)this + 0x20))();
  local_98.ArrayNum = 1;
  local_88._padding_ = CONCAT26(local_88._padding_._6_2_,0xffffffffffff);
  FVar3 = (FRHITransitionInfo_u_8)pFVar9->Resource;
  local_98.DataPtr = &local_88;
  local_88.Type = Texture;
  local_88.AccessBefore = SRVMask;
  local_88.AccessAfter = CopySrc;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  local_88.field1_0x8 = FVar3;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  uVar4 = *(undefined8 *)((longlong)this + 0x18);
  pFVar5 = *(FRHITransitionInfo **)((longlong)this + 8);
  uVar6 = *(undefined8 *)((longlong)this + 0x10);
  lVar7 = *(longlong *)((longlong)this + 0x20);
  FVar8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 0x28);
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  EVar2 = *(ERHIAccess *)((longlong)this + 0x38);
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Textures,true);
  local_98.DataPtr = pFVar5;
  local_98._8_8_ = uVar6;
  local_88._padding_ = lVar7;
  local_88.field1_0x8 = FVar8;
  local_88._16_8_ = uVar1;
  local_88.AccessAfter = EVar2;
  (**(code **)(GDynamicRHI->_padding_ + 0x438))
            (GDynamicRHI,param_1,FVar3.Resource,&local_98,uVar4,&local_88);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  local_98.ArrayNum = 1;
  local_98.DataPtr = &local_88;
  local_88._padding_ = CONCAT26(local_88._padding_._6_2_,0xffffffffffff);
  local_88.Type = Texture;
  local_88.AccessBefore = CopySrc;
  local_88.AccessAfter = SRVMask;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  local_88.field1_0x8 = FVar3;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  return;
}

// operator() @ 1489110f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FRenderTarget::ReadLinearColorPixels'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  undefined8 *puVar2;
  TIntRect<int>_u_0 local_48;
  undefined1 local_38 [16];
  bool local_28;
  undefined7 uStack_27;
  int iStack_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 local_10;
  
  puVar2 = (undefined8 *)(**(code **)(**(longlong **)this + 0x20))();
  local_48._8_4_ = 1;
  local_38._0_6_ = 0xffffffffffff;
  pFVar1 = (FRHITexture *)*puVar2;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)local_38;
  local_28 = true;
  iStack_24 = 0x70;
  local_20 = 0x80;
  local_1c = 0;
  local_10 = 0;
  local_38._8_8_ = pFVar1;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)&local_48._s_0,None);
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 8);
  local_38._0_8_ = *(undefined8 *)((longlong)this + 0x20);
  local_38._8_8_ = *(undefined8 *)((longlong)this + 0x28);
  _local_28 = *(undefined8 *)((longlong)this + 0x30);
  local_48._s_0.Max.field0_0x0 =
       (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x10))->_s_0;
  local_20 = *(uint *)((longlong)this + 0x38);
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,pFVar1,(TIntRect<int> *)&local_48._s_0,
             *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
             (FReadSurfaceDataFlags *)local_38);
  local_48._8_4_ = 1;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)local_38;
  local_38._0_6_ = 0xffffffffffff;
  local_28 = true;
  iStack_24 = 0x80;
  local_20 = 0x70;
  local_1c = 0;
  local_10 = 0;
  local_38._8_8_ = pFVar1;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)&local_48._s_0,None);
  return;
}

// GetDisplayGamma @ 148957fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FRenderTarget::GetDisplayGamma(FRenderTarget *this)

{
  if (GEngine == (UEngine *)0x0) {
    return __real_400ccccd;
  }
  if ((float)((uint)GEngine->DisplayGamma & __xmm_7fffffff7fffffff7fffffff7fffffff) <= 0.0) {
    if (1 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
    GEngine->DisplayGamma = 2.2;
  }
  return GEngine->DisplayGamma;
}

// GetEngineDisplayGamma @ 1489588c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl FRenderTarget::GetEngineDisplayGamma(void)

{
  if (GEngine == (UEngine *)0x0) {
    return __real_400ccccd;
  }
  if ((float)((uint)GEngine->DisplayGamma & __xmm_7fffffff7fffffff7fffffff7fffffff) <= 0.0) {
    if (1 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
    GEngine->DisplayGamma = 2.2;
  }
  return GEngine->DisplayGamma;
}

// GetRenderTargetTexture @ 14895c2c0

TRefCountPtr<FRHITexture> * __thiscall FRenderTarget::GetRenderTargetTexture(FRenderTarget *this)

{
  return &this->RenderTargetTextureRHI;
}

// GetRenderTargetTexture @ 14895c2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FRenderTarget::GetRenderTargetTexture(FRenderTarget *this,FRDGBuilder *param_1)

{
  FRHITexture *pFVar1;
  undefined8 *puVar2;
  FRDGTexture *pFVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  longlong *local_res8;
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x10))();
  pFVar1 = (FRHITexture *)*puVar2;
  pFVar3 = FRDGBuilder::FindExternalTexture(param_1,pFVar1);
  if (pFVar3 == (FRDGTexture *)0x0) {
    TVar4 = CreateRenderTarget((FRHITexture *)&local_res8,(wchar_t *)pFVar1);
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar4.Reference,None);
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x38))();
    }
  }
  return pFVar3;
}

// GetRenderTargetUAV @ 14895c360

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FRenderTarget::GetRenderTargetUAV(FRenderTarget *this)

{
  FRHIUnorderedAccessView *in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TRefCountPtr<FRHIUnorderedAccessView>)in_RDX;
}

// GetShaderResourceTexture @ 14895cdf0

TRefCountPtr<FRHITexture> * __thiscall FRenderTarget::GetShaderResourceTexture(FRenderTarget *this)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014895cdf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TRefCountPtr<FRHITexture> *)(**(code **)(this->_padding_ + 0x10))();
  return pTVar1;
}

// ReadFloat16Pixels @ 148975020

bool __thiscall
FRenderTarget::ReadFloat16Pixels
          (FRenderTarget *this,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,
          ECubeFace param_2)

{
  undefined1 uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  ECubeFace local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  ECubeFace local_28 [3];
  undefined4 uStack_1c;
  longlong local_18;
  undefined4 local_10;
  
  uStack_44 = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_18 = (ulonglong)uStack_36 << 0x10;
  local_58 = 0;
  uStack_50 = 0;
  local_10 = 0;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0x467a0000;
  local_28[1] = 0;
  local_28[2] = uStack_40;
  uStack_1c = 0x467a0000;
  local_48 = param_2;
  local_28[0] = param_2;
  uVar1 = (**(code **)(this->_padding_ + 0x68))(param_2,local_18,local_28,&local_58);
  return (bool)uVar1;
}

// ReadFloat16Pixels @ 148975090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderTarget::ReadFloat16Pixels
          (FRenderTarget *this,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,
          FReadSurfaceDataFlags *param_2,TIntRect<int> *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  ulonglong uVar15;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((((*(int *)&param_3->field0_0x0 == 0) && (*(int *)((longlong)&param_3->field0_0x0 + 4) == 0))
      && (*(int *)((longlong)&param_3->field0_0x0 + 8) == 0)) &&
     (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == 0)) {
    lVar11 = (**(code **)(this->_padding_ + 0x28))(this,local_c8);
    uVar2 = *(undefined4 *)(lVar11 + 4);
    puVar12 = (undefined4 *)(**(code **)(this->_padding_ + 0x28))(this,local_c0);
    uVar3 = *puVar12;
    (param_3->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    TVar5._s_0.Y = uVar2;
    TVar5._s_0.X = uVar3;
    (param_3->field0_0x0)._s_0.Max.field0_0x0 = TVar5;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,2,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TVar5 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar6 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  pcVar7 = *(code **)param_2;
  pcVar8 = *(code **)&param_2->bLinearToGamma;
  pcVar1 = *(code **)&param_2->bOutputStencil;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderTarget::ReadFloat16Pixels'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  uVar4 = param_2->GPUIndex;
  local_90[1] = (code *)this;
  *(TIntPoint<int>_u_0 *)(local_90 + 2) = TVar5;
  *(TIntPoint<int>_u_0 *)(local_90 + 3) = TVar6;
  local_90[5] = pcVar7;
  local_90[6] = pcVar8;
  local_90[4] = (code *)param_1;
  local_90[7] = pcVar1;
  *(uint *)(local_90 + 8) = uVar4;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderTarget::ReadFloat16Pixels'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderTarget::ReadFloat16Pixels_::__l2::TSTR_ReadSurfaceFloatCommand249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderTarget::ReadFloat16Pixels'::__l2::TSTR_ReadSurfaceFloatCommand249>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar13);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar14 = local_60;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar14 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar14 = local_90;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  FlushRenderingCommands();
  return 0 < param_1->ArrayNum;
}

// ReadLinearColorPixels @ 1489752e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderTarget::ReadLinearColorPixels
          (FRenderTarget *this,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          FReadSurfaceDataFlags *param_2,TIntRect<int> *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  ulonglong uVar15;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((((*(int *)&param_3->field0_0x0 == 0) && (*(int *)((longlong)&param_3->field0_0x0 + 4) == 0))
      && (*(int *)((longlong)&param_3->field0_0x0 + 8) == 0)) &&
     (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == 0)) {
    lVar11 = (**(code **)(this->_padding_ + 0x28))(this,local_c8);
    uVar2 = *(undefined4 *)(lVar11 + 4);
    puVar12 = (undefined4 *)(**(code **)(this->_padding_ + 0x28))(this,local_c0);
    uVar3 = *puVar12;
    (param_3->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    TVar5._s_0.Y = uVar2;
    TVar5._s_0.X = uVar3;
    (param_3->field0_0x0)._s_0.Max.field0_0x0 = TVar5;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TVar5 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar6 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  pcVar7 = *(code **)param_2;
  pcVar8 = *(code **)&param_2->bLinearToGamma;
  pcVar1 = *(code **)&param_2->bOutputStencil;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderTarget::ReadLinearColorPixels'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  uVar4 = param_2->GPUIndex;
  local_90[1] = (code *)this;
  *(TIntPoint<int>_u_0 *)(local_90 + 2) = TVar5;
  *(TIntPoint<int>_u_0 *)(local_90 + 3) = TVar6;
  local_90[5] = pcVar7;
  local_90[6] = pcVar8;
  local_90[4] = (code *)param_1;
  local_90[7] = pcVar1;
  *(uint *)(local_90 + 8) = uVar4;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderTarget::ReadLinearColorPixels'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderTarget::ReadLinearColorPixels_::__l2::TSTR_ReadSurfaceCommand272>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderTarget::ReadLinearColorPixels'::__l2::TSTR_ReadSurfaceCommand272>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar13);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar14 = local_60;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar14 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar14 = local_90;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  FlushRenderingCommands();
  return 0 < param_1->ArrayNum;
}

// ReadLinearColorPixelsPtr @ 148975530

bool __thiscall
FRenderTarget::ReadLinearColorPixelsPtr
          (FRenderTarget *this,FLinearColor *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  void *pvVar6;
  void *local_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  ECubeFace local_28;
  ERangeCompressionMode EStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_38 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_28 = param_2->CubeFace;
  EStack_24 = param_2->CompressionMode;
  uStack_20 = *(undefined4 *)&param_2->bLinearToGamma;
  fStack_1c = param_2->MaxDepthRange;
  local_18._0_1_ = param_2->bOutputStencil;
  local_18._1_1_ = param_2->MipLevel;
  local_18._2_2_ = *(undefined2 *)&param_2->field_0x12;
  local_18._4_4_ = param_2->ArrayIndex;
  local_30 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_10 = param_2->GPUIndex;
  local_48 = (void *)0x0;
  local_40 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x70))(local_28,&local_48,&local_28,&local_38);
  pvVar6 = local_48;
  if (cVar2 != '\0') {
    if (((int)local_40 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SurfaceData.Num() != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                           ,0x124,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lVar5 = (longlong)(int)local_40;
    if (((int)local_40 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pvVar6 = local_48;
    memcpy(param_1,local_48,lVar5 << 4);
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return (bool)cVar2;
}

// ReadPixels @ 148975650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderTarget::ReadPixels
          (FRenderTarget *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,
          FReadSurfaceDataFlags *param_2,TIntRect<int> *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  ulonglong uVar15;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((((*(int *)&param_3->field0_0x0 == 0) && (*(int *)((longlong)&param_3->field0_0x0 + 4) == 0))
      && (*(int *)((longlong)&param_3->field0_0x0 + 8) == 0)) &&
     (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == 0)) {
    lVar11 = (**(code **)(this->_padding_ + 0x28))(this,local_c8);
    uVar2 = *(undefined4 *)(lVar11 + 4);
    puVar12 = (undefined4 *)(**(code **)(this->_padding_ + 0x28))(this,local_c0);
    uVar3 = *puVar12;
    (param_3->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    TVar5._s_0.Y = uVar2;
    TVar5._s_0.X = uVar3;
    (param_3->field0_0x0)._s_0.Max.field0_0x0 = TVar5;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TVar5 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar6 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  pcVar7 = *(code **)param_2;
  pcVar8 = *(code **)&param_2->bLinearToGamma;
  pcVar1 = *(code **)&param_2->bOutputStencil;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderTarget::ReadPixels'::`2'::<lambda_1>,1,1>::
                       _vftable_;
  uVar4 = param_2->GPUIndex;
  local_90[1] = (code *)this;
  *(TIntPoint<int>_u_0 *)(local_90 + 2) = TVar5;
  *(TIntPoint<int>_u_0 *)(local_90 + 3) = TVar6;
  local_90[5] = pcVar7;
  local_90[6] = pcVar8;
  local_90[4] = (code *)param_1;
  local_90[7] = pcVar1;
  *(uint *)(local_90 + 8) = uVar4;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderTarget::ReadPixels'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderTarget::ReadPixels_::__l2::TSTR_ReadSurfaceCommand204>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderTarget::ReadPixels'::__l2::TSTR_ReadSurfaceCommand204>::Get
                        ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar13);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar14 = local_60;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar14 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar14 = local_90;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  FlushRenderingCommands();
  return 0 < param_1->ArrayNum;
}

// ReadPixelsPtr @ 1489758a0

bool __thiscall
FRenderTarget::ReadPixelsPtr
          (FRenderTarget *this,FColor *param_1,FReadSurfaceDataFlags *param_2,TIntRect<int> *param_3
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  void *pvVar6;
  void *local_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  ECubeFace local_28;
  ERangeCompressionMode EStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_38 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_28 = param_2->CubeFace;
  EStack_24 = param_2->CompressionMode;
  uStack_20 = *(undefined4 *)&param_2->bLinearToGamma;
  fStack_1c = param_2->MaxDepthRange;
  local_18._0_1_ = param_2->bOutputStencil;
  local_18._1_1_ = param_2->MipLevel;
  local_18._2_2_ = *(undefined2 *)&param_2->field_0x12;
  local_18._4_4_ = param_2->ArrayIndex;
  local_30 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_10 = param_2->GPUIndex;
  local_48 = (void *)0x0;
  local_40 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x60))(local_28,&local_48,&local_28,&local_38);
  pvVar6 = local_48;
  if (cVar2 != '\0') {
    lVar5 = (longlong)(int)local_40;
    if (((int)local_40 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pvVar6 = local_48;
    memcpy(param_1,local_48,lVar5 << 2);
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return (bool)cVar2;
}

