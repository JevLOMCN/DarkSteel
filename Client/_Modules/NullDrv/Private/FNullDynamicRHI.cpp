// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 105

// FNullDynamicRHI @ 1446c4210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FNullDynamicRHI * __thiscall FNullDynamicRHI::FNullDynamicRHI(FNullDynamicRHI *this)

{
  longlong lVar1;
  wchar_t *pwVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = (longlong)&_vftable__for__FDynamicRHIPSOFallback__;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContextPSOFallback__;
  FLargeMemoryData::FLargeMemoryData(&this->MemoryBuffer,0);
  pwVar2 = FGenericPlatformMisc::GetNullRHIShaderFormat();
  pFVar3 = ::FName::FName(local_res8,pwVar2);
  GMaxRHIShaderPlatform = ShaderFormatToLegacyShaderPlatform(*pFVar3);
  GRHIGlobals.MaxTextureDimensions.Value = 0x4000;
  for (lVar1 = 0x3f; 0x7fffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  GRHIGlobals.MaxTextureMipCount = (int)lVar1 + 1;
  if (0xf < GRHIGlobals.MaxTextureMipCount) {
    GRHIGlobals.MaxTextureMipCount = 0xf;
  }
  return this;
}

// GetInterfaceType @ 1446c5e60

ERHIInterfaceType __thiscall FNullDynamicRHI::GetInterfaceType(FNullDynamicRHI *this)

{
  return Null;
}

// GetName @ 1446c5e80

wchar_t * __thiscall FNullDynamicRHI::GetName(FNullDynamicRHI *this)

{
  return L"Null";
}

// GetStaticBuffer @ 1446c5f90

void * __thiscall FNullDynamicRHI::GetStaticBuffer(FNullDynamicRHI *this,ulong64 param_1)

{
  FLargeMemoryData::Reserve(&this->MemoryBuffer,param_1);
  return (this->MemoryBuffer).Data;
}

// GetStaticTextureBuffer @ 1446c5fc0

void * __thiscall
FNullDynamicRHI::GetStaticTextureBuffer
          (FNullDynamicRHI *this,int param_1,int param_2,EPixelFormat param_3,uint *param_4,
          ulong64 *param_5)

{
  ulong64 uVar1;
  
  uVar1 = CalculateImageBytes(param_1,param_2,0,param_3);
  if (param_5 != (ulong64 *)0x0) {
    *param_5 = uVar1;
  }
  *param_4 = (uint)(uVar1 / (ulonglong)(longlong)param_2);
  FLargeMemoryData::Reserve(&this->MemoryBuffer,uVar1);
  return (this->MemoryBuffer).Data;
}

// Init @ 1446c60b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FNullDynamicRHI::Init(FNullDynamicRHI *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TArrayView<UE::RHI::GPUProfiler::FQueue_const_,int> local_18;
  
  uVar3 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GMaxRHIFeatureLevel = FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].MaxFeatureLevel;
  GRHIGlobals.ShaderPlatformForFeatureLevel[4] = SP_PCD3D_SM6;
  GRHIGlobals.ShaderPlatformForFeatureLevel[0] = SP_NumPlatforms;
  GRHIGlobals.ShaderPlatformForFeatureLevel[1] = SP_PCD3D_ES3_1;
  GRHIGlobals.ShaderPlatformForFeatureLevel[2] = SP_NumPlatforms;
  GRHIGlobals.ShaderPlatformForFeatureLevel[3] = SP_PCD3D_SM5;
  GRHIGlobals.GpuInfo.VendorId = 1;
  if (GRHIGlobals.IsRHIInitialized != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NullDrv\\Private\\NullRHI.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::InitPreRHIResources();
  local_18.ArrayNum = 1;
  local_18.DataPtr = &NullRHIGPUProfilerQueue;
  GRHIGlobals.IsRHIInitialized = true;
  UE::RHI::GPUProfiler::InitializeQueues(&local_18);
  return;
}

// LockBuffer_BottomOfPipe @ 1446c6240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FNullDynamicRHI::LockBuffer_BottomOfPipe
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  FLargeMemoryData::Reserve(&this->MemoryBuffer,(ulonglong)(param_2->Desc).Size);
  return (this->MemoryBuffer).Data;
}

// RHIAdvanceFrameForGetViewportBackBuffer @ 1446c6300

void __thiscall
FNullDynamicRHI::RHIAdvanceFrameForGetViewportBackBuffer
          (FNullDynamicRHI *this,FRHIViewport *param_1,bool param_2)

{
  return;
}

// RHIAliasTextureResources @ 1446c6350

void __thiscall
FNullDynamicRHI::RHIAliasTextureResources
          (FNullDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1,
          TRefCountPtr<FRHITexture> *param_2)

{
  return;
}

// RHIAsyncCreateTexture2D @ 1446c6360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FNullDynamicRHI::RHIAsyncCreateTexture2D
          (FNullDynamicRHI *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ERHIAccess param_6,void **param_7,uint param_8,
          wchar_t *param_9,TRefCountPtr<FBaseGraphTask> *param_10)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  FRHITextureCreateDesc *pFVar5;
  FRHITexture *this_00;
  undefined4 in_register_00000014;
  FRHITexture *pFVar6;
  undefined3 in_register_00000089;
  undefined4 in_stack_0000003c;
  longlong *in_stack_00000060;
  undefined1 auStack_148 [32];
  FRHITextureCreateDesc local_118;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  pFVar6 = (FRHITexture *)CONCAT44(in_register_00000014,param_1);
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar5 = FRHITextureCreateDesc::Create2D
                     (&local_98,(wchar_t *)param_10,param_2,CONCAT31(in_register_00000089,param_3),
                      (EPixelFormat)param_4);
  uVar4 = FClearValueBinding::None.Value._4_8_;
  pFVar5->_padding_ = FClearValueBinding::None._0_8_;
  pFVar5->_padding_ = uVar4;
  *(float *)&pFVar5->_padding_ = FClearValueBinding::None.Value.Color[3];
  pFVar5->_padding_ = CONCAT44(in_stack_0000003c,param_6);
  *(undefined1 *)&pFVar5->_padding_ = (undefined1)param_5;
  pFVar5->InitialState = (ERHIAccess)param_7;
  FRHITextureCreateDesc::FRHITextureCreateDesc(&local_118,pFVar5);
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  puVar3 = (undefined8 *)*in_stack_00000060;
  if (puVar3 != (undefined8 *)0x0) {
    *in_stack_00000060 = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  this_00 = ::operator_new(0x138);
  if (this_00 == (FRHITexture *)0x0) {
    pFVar6->_padding_ = 0;
  }
  else {
    FRHITexture::FRHITexture(this_00,&local_118);
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__FRHIViewableResource__;
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__RHIValidation__FTextureResource__;
    pFVar6->_padding_ = (longlong)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return (TRefCountPtr<FRHITexture>)pFVar6;
}

// RHIAsyncReallocateTexture2D @ 1446c64b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FNullDynamicRHI::RHIAsyncReallocateTexture2D
          (FNullDynamicRHI *this,FRHITexture *param_1,int param_2,int param_3,int param_4,
          FThreadSafeCounter *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  FRHITextureCreateDesc *pFVar5;
  longlong *plVar6;
  FRHITexture *this_00;
  undefined4 in_register_00000084;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  FRHITextureCreateDesc local_128;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  plVar7 = (longlong *)CONCAT44(in_register_00000084,param_2);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
  pFVar5 = FRHITextureCreateDesc::Create2D
                     (&local_a8,L"FNullDynamicRHI::RHIAsyncReallocateTexture2D",param_4,(int)param_5
                      ,*(EPixelFormat *)(lVar4 + 0x33));
  lVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
  uVar1 = *(undefined4 *)(lVar4 + 0xc);
  uVar2 = *(undefined4 *)(lVar4 + 0x10);
  uVar3 = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)&pFVar5->_padding_ = *(undefined4 *)(lVar4 + 8);
  *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = uVar1;
  *(undefined4 *)&pFVar5->_padding_ = uVar2;
  *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = uVar3;
  *(undefined4 *)&pFVar5->_padding_ = *(undefined4 *)(lVar4 + 0x18);
  plVar6 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
  pFVar5->_padding_ = *plVar6;
  *(char *)&pFVar5->_padding_ = (char)param_3;
  lVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
  *(undefined1 *)((longlong)&pFVar5->_padding_ + 1) = *(undefined1 *)(lVar4 + 0x31);
  FRHITextureCreateDesc::FRHITextureCreateDesc(&local_128,pFVar5);
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  this_00 = ::operator_new(0x138);
  if (this_00 == (FRHITexture *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    FRHITexture::FRHITexture(this_00,&local_128);
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__FRHIViewableResource__;
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__RHIValidation__FTextureResource__;
    param_1->_padding_ = (longlong)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return (TRefCountPtr<FRHITexture>)param_1;
}

// RHIBeginBreadcrumbGPU @ 1446c6610

void __thiscall
FNullDynamicRHI::RHIBeginBreadcrumbGPU(FNullDynamicRHI *this,FRHIBreadcrumbNode *param_1)

{
  return;
}

// RHIBeginRenderPass @ 1446c6630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIBeginRenderPass
          (FNullDynamicRHI *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  return;
}

// RHIBeginRenderQuery @ 1446c6640

void __thiscall FNullDynamicRHI::RHIBeginRenderQuery(FNullDynamicRHI *this,FRHIRenderQuery *param_1)

{
  return;
}

// RHIBeginTransitions @ 1446c6670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIBeginTransitions
          (FNullDynamicRHI *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  return;
}

// RHIBindDebugLabelName @ 1446c66e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIBindDebugLabelName
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,wchar_t *param_3)

{
  return;
}

// RHIBlockUntilGPUIdle @ 1446c66f0

void __thiscall FNullDynamicRHI::RHIBlockUntilGPUIdle(FNullDynamicRHI *this)

{
  return;
}

// RHICalcTexturePlatformSize @ 1446c6870

FRHICalcTextureSizeResult * __thiscall
FNullDynamicRHI::RHICalcTexturePlatformSize
          (FNullDynamicRHI *this,FRHICalcTextureSizeResult *__return_storage_ptr__,
          FRHITextureDesc *param_1,uint param_2)

{
  __return_storage_ptr__->Size = 0;
  *(undefined8 *)&__return_storage_ptr__->Align = 0;
  return __return_storage_ptr__;
}

// RHICheckViewportHDRStatus @ 1446c6880

void __thiscall
FNullDynamicRHI::RHICheckViewportHDRStatus(FNullDynamicRHI *this,FRHIViewport *param_1)

{
  return;
}

// RHIClearUAVFloat @ 1446c68d0

void __thiscall
FNullDynamicRHI::RHIClearUAVFloat
          (FNullDynamicRHI *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2)

{
  return;
}

// RHIClearUAVUint @ 1446c68e0

void __thiscall
FNullDynamicRHI::RHIClearUAVUint
          (FNullDynamicRHI *this,FRHIUnorderedAccessView *param_1,TIntVector4<unsigned_int> *param_2
          )

{
  return;
}

// RHIComputeMemorySize @ 1446c6950

uint __thiscall FNullDynamicRHI::RHIComputeMemorySize(FNullDynamicRHI *this,FRHITexture *param_1)

{
  return 0;
}

// RHICopyBufferRegion @ 1446c6960

void __thiscall
FNullDynamicRHI::RHICopyBufferRegion
          (FNullDynamicRHI *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  return;
}

// RHICopyTexture @ 1446c6970

void __thiscall
FNullDynamicRHI::RHICopyTexture
          (FNullDynamicRHI *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  return;
}

// RHICreateBlendState @ 1446c6a30

TRefCountPtr<FRHIBlendState> __thiscall
FNullDynamicRHI::RHICreateBlendState(FNullDynamicRHI *this,FBlendStateInitializerRHI *param_1)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_BlendState);
    *(FRHIResource **)(param_1->RenderTargets).Elements = this_00;
    this_00->_padding_ = (longlong)&___7FRHIBlendState__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
  }
  (param_1->RenderTargets).Elements[0].ColorBlendOp = '\0';
  (param_1->RenderTargets).Elements[0].ColorSrcBlend = '\0';
  (param_1->RenderTargets).Elements[0].ColorDestBlend = '\0';
  (param_1->RenderTargets).Elements[0].AlphaBlendOp = '\0';
  (param_1->RenderTargets).Elements[0].AlphaSrcBlend = '\0';
  (param_1->RenderTargets).Elements[0].AlphaDestBlend = '\0';
  (param_1->RenderTargets).Elements[0].ColorWriteMask = '\0';
  (param_1->RenderTargets).Elements[1].ColorBlendOp = '\0';
  return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
}

// RHICreateBoundShaderState @ 1446c6aa0

TRefCountPtr<FRHIBoundShaderState> __thiscall
FNullDynamicRHI::RHICreateBoundShaderState
          (FNullDynamicRHI *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_BoundShaderState);
    *(FRHIResource **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHIBoundShaderState__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// RHICreateBufferInitializer @ 1446c6b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001446c6caa) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x0001446c6cae */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FNullDynamicRHI::RHICreateBufferInitializer
          (FNullDynamicRHI *this,FRHIBufferInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHIBufferCreateDesc *param_2)

{
  undefined8 uVar1;
  FRHIBuffer *this_00;
  undefined ***pppuVar2;
  longlong *plVar3;
  FRHIBuffer *this_01;
  FRHIBuffer *pFVar4;
  FRHIBuffer *pFVar5;
  undefined1 auStackY_108 [32];
  code *local_d8 [2];
  undefined **local_c8;
  FRHIBuffer *pFStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined ***pppuStack_b0;
  undefined1 local_a8 [40];
  longlong *plStack_80;
  FRHICommandListBase *local_78;
  FRHIBuffer *local_70;
  void *local_68;
  ulong64 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_2->InitAction == ResourceArray) &&
     (param_2->InitialData != (FResourceArrayUploadInterface *)0x0)) {
    (**(code **)((longlong)*param_2->InitialData + 0x18))();
  }
  this_01 = (FRHIBuffer *)0x0;
  pFVar4 = this_01;
  pFVar5 = this_01;
  if (param_2->InitAction == Initializer) {
    FLargeMemoryData::Reserve(&this->MemoryBuffer,(ulonglong)(uint)param_2->_padding_);
    pFVar4 = (FRHIBuffer *)(this->MemoryBuffer).Data;
    pFVar5 = (FRHIBuffer *)(ulonglong)(uint)param_2->_padding_;
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIBuffer::FRHIBuffer(this_00,param_2);
    this_00->_padding_ = (longlong)&___7FNullBuffer_FNullDynamicRHI__6B_;
    this_01 = this_00;
  }
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  pppuStack_b0 = (undefined ***)0x0;
  local_c8 = &
             ___7__TFunction_OwnedObject_V<lambda_5_>__0___0FNullBufferInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFNullBuffer_3_PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                ::Call;
  pFStack_c0 = this_01;
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_a8,param_1,this_01,pFVar4,(ulong64)pFVar5,
             (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_d8);
  if (local_d8[0] != (code *)0x0) {
    pppuVar2 = &local_c8;
    if (pppuStack_b0 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_b0;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  uVar1 = local_a8._8_8_;
  *(undefined8 *)&__return_storage_ptr__->FinalizeCallback = local_a8._0_8_;
  *(longlong **)&(__return_storage_ptr__->FinalizeCallback).field_0x28 = plStack_80;
  *(ulonglong *)&(__return_storage_ptr__->FinalizeCallback).field_0x10 =
       CONCAT44(local_a8._20_4_,local_a8._16_4_);
  *(ulonglong *)&(__return_storage_ptr__->FinalizeCallback).field_0x18 =
       CONCAT44(local_a8._28_4_,local_a8._24_4_);
  *(ulonglong *)&(__return_storage_ptr__->FinalizeCallback).field_0x20 =
       CONCAT44(local_a8._36_4_,local_a8._32_4_);
  if (*(longlong *)&__return_storage_ptr__->FinalizeCallback != 0) {
    local_a8._0_8_ = 0;
  }
  local_d8[0] = (code *)local_a8._0_8_;
  __return_storage_ptr__->CommandList = local_78;
  __return_storage_ptr__->Buffer = local_70;
  __return_storage_ptr__->WritableData = local_68;
  __return_storage_ptr__->WritableSize = uStack_60;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = local_d8[1];
  local_a8._16_4_ = local_c8._0_4_;
  local_a8._20_4_ = local_c8._4_4_;
  local_a8._24_4_ = pFStack_c0._0_4_;
  local_a8._28_4_ = pFStack_c0._4_4_;
  local_a8._32_4_ = local_b8;
  local_a8._36_4_ = uStack_b4;
  plStack_80 = (longlong *)0x0;
  local_d8[1] = (code *)uVar1;
  pppuStack_b0 = (undefined ***)0x0;
  if (local_d8[0] != (code *)0x0) {
    (*(code *)local_c8[2])();
  }
  local_78 = (FRHICommandListBase *)0x0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_70 = (FRHIBuffer *)0x0;
  if (local_a8._0_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x10);
    if (plStack_80 != (longlong *)0x0) {
      plVar3 = plStack_80;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

// RHICreateComputeShader @ 1446c6de0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIComputeShader> __thiscall
FNullDynamicRHI::RHICreateComputeShader
          (FNullDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FRHIShader *)0x0) {
    FRHIShader::FRHIShader(this_00,RRT_ComputeShader,SF_Compute);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FRHIComputeShader__6B_;
    param_1->DataPtr = (uchar *)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIComputeShader>)(FRHIComputeShader *)param_1;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIComputeShader>)(FRHIComputeShader *)param_1;
}

// RHICreateDepthStencilState @ 1446c6e60

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIDepthStencilState> __thiscall
FNullDynamicRHI::RHICreateDepthStencilState
          (FNullDynamicRHI *this,FDepthStencilStateInitializerRHI *param_1)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x20);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_DepthStencilState);
    *(FRHIResource **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHIDepthStencilState__6B_;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
  }
  param_1->bEnableDepthWrite = false;
  param_1->DepthTest = '\0';
  param_1->bEnableFrontFaceStencil = false;
  param_1->FrontFaceStencilTest = '\0';
  param_1->FrontFaceStencilFailStencilOp = '\0';
  param_1->FrontFaceDepthFailStencilOp = '\0';
  param_1->FrontFacePassStencilOp = '\0';
  param_1->bEnableBackFaceStencil = false;
  return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
}

// RHICreateGPUFence @ 1446c6ed0

TRefCountPtr<FRHIGPUFence> __thiscall
FNullDynamicRHI::RHICreateGPUFence(FNullDynamicRHI *this,FName *param_1)

{
  undefined8 uVar1;
  FName this_00;
  undefined8 *in_R8;
  
  this_00 = (FName)::operator_new(0x28);
  if (this_00 != (FName)0x0) {
    uVar1 = *in_R8;
    FRHIResource::FRHIResource((FRHIResource *)this_00,RRT_GPUFence);
    *param_1 = this_00;
    *(undefined ***)this_00 = &___7FRHIGPUFence__6B_;
    *(undefined4 *)&((FRHIResource *)((longlong)this_00 + 0x18))->_padding_ = 0;
    *(undefined ***)this_00 =
         &
         ___7FNullGPUFence__1__RHICreateGPUFence_FNullDynamicRHI__UEAA_AV__TRefCountPtr_VFRHIGPUFence____AEBVFName___Z_6B_
    ;
    *(undefined8 *)((longlong)this_00 + 0x1c) = uVar1;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
}

// RHICreateGeometryShader @ 1446c6f70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIGeometryShader> __thiscall
FNullDynamicRHI::RHICreateGeometryShader
          (FNullDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  
  this_00 = ::operator_new(0x108);
  if (this_00 != (FRHIShader *)0x0) {
    FRHIShader::FRHIShader(this_00,RRT_GeometryShader,SF_Geometry);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FRHIGeometryShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIGeometryShader>)(FRHIGeometryShader *)param_1;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIGeometryShader>)(FRHIGeometryShader *)param_1;
}

// RHICreatePixelShader @ 1446c7100

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIPixelShader> __thiscall
FNullDynamicRHI::RHICreatePixelShader
          (FNullDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  
  this_00 = ::operator_new(0x108);
  if (this_00 != (FRHIShader *)0x0) {
    FRHIShader::FRHIShader(this_00,RRT_PixelShader,SF_Pixel);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FRHIPixelShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)param_1;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)param_1;
}

// RHICreateRasterizerState @ 1446c7170

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

TRefCountPtr<FRHIRasterizerState> __thiscall
FNullDynamicRHI::RHICreateRasterizerState
          (FNullDynamicRHI *this,FRasterizerStateInitializerRHI *param_1)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_RasterizerState);
    *(FRHIResource **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHIRasterizerState__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
  }
  param_1->FillMode = '\0';
  param_1->CullMode = '\0';
  *(undefined2 *)&param_1->field_0x2 = 0;
  param_1->DepthBias = 0.0;
  return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
}

// RHICreateRenderQuery @ 1446c7320

TRefCountPtr<FRHIRenderQuery> __thiscall
FNullDynamicRHI::RHICreateRenderQuery(FNullDynamicRHI *this,ERenderQueryType param_1)

{
  FRHIRenderQuery *pFVar1;
  FRHIResource *this_00;
  undefined4 in_register_00000014;
  
  pFVar1 = (FRHIRenderQuery *)CONCAT44(in_register_00000014,param_1);
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_RenderQuery);
    *(FRHIResource **)pFVar1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHIRenderQuery__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIRenderQuery>)pFVar1;
  }
  *(undefined8 *)pFVar1 = 0;
  return (TRefCountPtr<FRHIRenderQuery>)pFVar1;
}

// RHICreateSamplerState @ 1446c73b0

TRefCountPtr<FRHISamplerState> __thiscall
FNullDynamicRHI::RHICreateSamplerState(FNullDynamicRHI *this,FSamplerStateInitializerRHI *param_1)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_SamplerState);
    *(FRHIResource **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHISamplerState__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
  }
  param_1->Filter = '\0';
  param_1->AddressU = '\0';
  param_1->AddressV = '\0';
  param_1->AddressW = '\0';
  param_1->MipBias = 0.0;
  return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
}

// RHICreateShaderResourceView @ 1446c74e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FNullDynamicRHI::RHICreateShaderResourceView
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  bool bVar5;
  FRHIResource *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar6;
  undefined8 *in_stack_00000028;
  
  this_00 = ::operator_new(0x30);
  if (this_00 == (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  FRHIResource::FRHIResource(this_00,RRT_ShaderResourceView);
  this_00->_padding_ = (longlong)&___7FRHIView__6B_;
  this_00[1]._padding_ = (longlong)param_3;
  if (param_3 != (FRHIViewDesc *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  uVar3 = *in_stack_00000028;
  FVar4 = *(FName *)(in_stack_00000028 + 1);
  this_00[1].AtomicFlags = (FAtomicFlags)(int)uVar3;
  this_00[1].ResourceType = (char)((ulonglong)uVar3 >> 0x20);
  this_00[1].field_0xd = (char)((ulonglong)uVar3 >> 0x28);
  this_00[1]._padding_ = (short)((ulonglong)uVar3 >> 0x30);
  this_00[1].OwnerName = FVar4;
  if (param_3 == (FRHIViewDesc *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar6.Reference = (FRHIShaderResourceView *)(*pcVar2)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar6.Reference;
    }
  }
  this_00->_padding_ = (longlong)&___7FRHIShaderResourceView__6B_;
  cVar1 = *(char *)&this_00[1].AtomicFlags.Packed;
  if ((cVar1 != '\0') && (cVar1 != '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsSRV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xced,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar6.Reference = (FRHIShaderResourceView *)(*pcVar2)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar6.Reference;
    }
  }
  (param_1->MemManager).Top = (uchar *)this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// RHICreateTextureInitializer @ 1446c7670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001446c7923) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb8 : 0x0001446c7927 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FNullDynamicRHI::RHICreateTextureInitializer
          (FNullDynamicRHI *this,FRHITextureInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong64 uVar9;
  longlong lVar10;
  FRHITexture *this_00;
  undefined ***pppuVar11;
  longlong *plVar12;
  FRHITexture *this_01;
  FRHITexture *pFVar13;
  FRHITexture *pFVar14;
  undefined8 uVar15;
  undefined1 auStackY_1a8 [32];
  code *local_158 [2];
  undefined **local_148;
  FRHITexture *pFStack_140;
  FRHITexture *local_138;
  undefined ***pppuStack_130;
  undefined1 local_128 [40];
  longlong *plStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  undefined ***pppuStack_d0;
  FRHICommandListBase *local_c8;
  FRHITexture *local_c0;
  void *local_b8;
  ulong64 uStack_b0;
  TIntPoint<int>_u_0 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  undefined **local_88;
  FRHITexture *local_80;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_2->InitAction == BulkData) && (param_2->BulkData != (FResourceBulkDataInterface *)0x0))
  {
    (**(code **)((longlong)*param_2->BulkData + 0x18))();
  }
  this_01 = (FRHITexture *)0x0;
  pFVar13 = this_01;
  pFVar14 = this_01;
  if (param_2->InitAction == Initializer) {
    uVar9 = UE::RHITextureUtils::CalculateTexturePlaneSize((FRHITextureDesc *)param_2);
    cVar2 = *(char *)((longlong)&param_2->_padding_ + 2);
    if ((cVar2 == '\x03') || (bVar6 = false, cVar2 == '\x04')) {
      bVar6 = true;
    }
    lVar10 = 1;
    if (bVar6) {
      lVar10 = 6;
    }
    pFVar13 = (FRHITexture *)
              ((ulonglong)*(ushort *)((longlong)&param_2->_padding_ + 6) *
               (ulonglong)*(ushort *)((longlong)&param_2->_padding_ + 4) * lVar10 * uVar9);
    FLargeMemoryData::Reserve(&this->MemoryBuffer,(long64)pFVar13);
    pFVar14 = (FRHITexture *)(this->MemoryBuffer).Data;
  }
  this_00 = ::operator_new(0x138);
  if (this_00 != (FRHITexture *)0x0) {
    FRHITexture::FRHITexture(this_00,param_2);
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__FRHIViewableResource__;
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__RHIValidation__FTextureResource__;
    this_01 = this_00;
  }
  pFStack_140 = this_01;
  local_138 = pFVar14;
  if (this_01 == (FRHITexture *)0x0) {
    pppuStack_130 = (undefined ***)0x0;
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_7_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                   ::Call;
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_01);
    pppuStack_130 = (undefined ***)0x0;
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_7_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                   ::Call;
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  local_70 = (undefined ***)0x0;
  local_88 = &
             ___7__TFunction_OwnedObject_V<lambda_6_>__0___0FNullTextureInitializer_FNullDynamicRHI__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                ::Call;
  local_80 = this_01;
  FRHITextureInitializer::FRHITextureInitializer
            ((FRHITextureInitializer *)local_128,param_1,this_01,pFVar14,(ulong64)pFVar13,
             (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)local_98,
             (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
              *)local_158);
  if (local_98[0] != (code *)0x0) {
    pppuVar11 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar11 = local_70;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_158[0] != (code *)0x0) {
    pppuVar11 = &local_148;
    if (pppuStack_130 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_130;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  uVar7 = local_128._8_8_;
  ppuVar8 = (undefined **)CONCAT44(local_128._20_4_,local_128._16_4_);
  uVar3._4_4_ = local_128._28_4_;
  uVar3._0_4_ = local_128._24_4_;
  *(undefined8 *)&__return_storage_ptr__->FinalizeCallback = local_128._0_8_;
  *(longlong **)&(__return_storage_ptr__->FinalizeCallback).field_0x28 = plStack_100;
  *(undefined ***)&(__return_storage_ptr__->FinalizeCallback).field_0x10 = ppuVar8;
  *(undefined8 *)&(__return_storage_ptr__->FinalizeCallback).field_0x18 = uVar3;
  uVar4._4_4_ = local_128._36_4_;
  uVar4._0_4_ = local_128._32_4_;
  *(undefined8 *)&(__return_storage_ptr__->FinalizeCallback).field_0x20 = uVar4;
  if (*(longlong *)&__return_storage_ptr__->FinalizeCallback != 0) {
    local_128._0_8_ = 0;
  }
  local_158[0] = (code *)local_128._0_8_;
  *(longlong *)&__return_storage_ptr__->GetSubresourceCallback = local_f8;
  *(undefined ****)&(__return_storage_ptr__->GetSubresourceCallback).field_0x28 = pppuStack_d0;
  *(undefined4 *)&(__return_storage_ptr__->GetSubresourceCallback).field_0x10 =
       (undefined4)local_e8[0];
  *(undefined4 *)&(__return_storage_ptr__->GetSubresourceCallback).field_0x14 = local_e8[0]._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->GetSubresourceCallback).field_0x18 =
       (undefined4)local_e8[1];
  *(undefined4 *)&(__return_storage_ptr__->GetSubresourceCallback).field_0x1c = local_e8[1]._4_4_;
  pppuStack_d0 = (undefined ***)0x0;
  uVar15._4_4_ = local_e8[2]._4_4_;
  uVar15._0_4_ = (undefined4)local_e8[2];
  *(undefined8 *)&(__return_storage_ptr__->GetSubresourceCallback).field_0x20 = uVar15;
  if (*(longlong *)&__return_storage_ptr__->GetSubresourceCallback != 0) {
    local_f8 = 0;
  }
  TVar5._s_0.Y = local_a8._s_0.Y;
  TVar5._s_0.X = local_a8._s_0.X;
  __return_storage_ptr__->CommandList = local_c8;
  __return_storage_ptr__->Texture = local_c0;
  __return_storage_ptr__->WritableData = local_b8;
  (__return_storage_ptr__->Desc).Extent.field0_0x0 = TVar5;
  (__return_storage_ptr__->Desc).Depth = (short)uStack_a0;
  (__return_storage_ptr__->Desc).ArraySize = SUB42(uStack_a0,2);
  (__return_storage_ptr__->Desc).Dimension = (char)uStack_9c;
  (__return_storage_ptr__->Desc).Format = SUB41(uStack_9c,1);
  *(short *)&(__return_storage_ptr__->Desc).field_0xe = SUB42(uStack_9c,2);
  __return_storage_ptr__->WritableSize = uStack_b0;
  local_128._0_8_ = 0;
  local_128._8_8_ = local_158[1];
  local_128._16_4_ = local_148._0_4_;
  local_128._20_4_ = local_148._4_4_;
  local_128._24_4_ = pFStack_140._0_4_;
  local_128._28_4_ = pFStack_140._4_4_;
  local_128._32_4_ = local_138._0_4_;
  local_128._36_4_ = local_138._4_4_;
  plStack_100 = (longlong *)0x0;
  local_158[1] = (code *)uVar7;
  pppuStack_130 = (undefined ***)0x0;
  pFStack_140 = (FRHITexture *)uVar3;
  local_138 = (FRHITexture *)uVar4;
  if (local_158[0] != (code *)0x0) {
    ppuVar1 = local_148 + 2;
    local_148 = ppuVar8;
    (*(code *)*ppuVar1)();
    uVar15._4_4_ = local_e8[2]._4_4_;
    uVar15._0_4_ = (undefined4)local_e8[2];
    ppuVar8 = local_148;
  }
  local_148 = ppuVar8;
  pppuStack_130 = pppuStack_d0;
  uVar3 = uStack_f0;
  local_158[0] = (code *)local_f8;
  local_f8 = 0;
  uStack_f0 = local_158[1];
  local_e8[2]._0_4_ = local_138._0_4_;
  local_e8[2]._4_4_ = local_138._4_4_;
  pppuStack_d0 = (undefined ***)0x0;
  local_e8[0]._0_4_ = local_148._0_4_;
  local_e8[0]._4_4_ = local_148._4_4_;
  local_e8[1]._0_4_ = pFStack_140._0_4_;
  local_e8[1]._4_4_ = pFStack_140._4_4_;
  local_158[1] = (code *)uVar3;
  local_138 = (FRHITexture *)uVar15;
  if (local_158[0] != (code *)0x0) {
    pppuVar11 = &local_148;
    if (pppuStack_130 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_130;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_c8 = (FRHICommandListBase *)0x0;
  local_c0 = (FRHITexture *)0x0;
  local_a8._s_0.X = 1;
  local_a8._s_0.Y = 1;
  uStack_a0._0_2_ = 1;
  uStack_a0._2_2_ = 1;
  uStack_9c._0_1_ = Texture2D;
  uStack_9c._1_1_ = PF_Unknown;
  uStack_9c._2_2_ = 0;
  if (local_f8 != 0) {
    pppuVar11 = (undefined ***)local_e8;
    if (pppuStack_d0 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_d0;
    }
    (**(code **)((longlong)*pppuVar11 + 0x10))();
  }
  if (local_128._0_8_ != 0) {
    plVar12 = (longlong *)(local_128 + 0x10);
    if (plStack_100 != (longlong *)0x0) {
      plVar12 = plStack_100;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return __return_storage_ptr__;
}

// RHICreateTransition @ 1446c7a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHICreateTransition
          (FNullDynamicRHI *this,FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  return;
}

// RHICreateUniformBuffer @ 1446c7a60

TRefCountPtr<FRHIUniformBuffer> __thiscall
FNullDynamicRHI::RHICreateUniformBuffer
          (FNullDynamicRHI *this,void *param_1,FRHIUniformBufferLayout *param_2,
          EUniformBufferUsage param_3,EUniformBufferValidation param_4)

{
  FName this_00;
  FRHIResource *this_01;
  uint in_register_0000008c;
  
  this_00.Number = in_register_0000008c;
  this_00.ComparisonIndex.Value = param_3;
  this_01 = ::operator_new(0x50);
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_01,RRT_UniformBuffer);
    this_01[1]._padding_ = 0;
    *(undefined1 *)&this_01[1].AtomicFlags.Packed = 0;
    this_01->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
    this_01[2]._padding_ = 0;
    this_01[2].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_01[2].ResourceType = RRT_None;
    this_01[2].field_0xd = 0;
    this_01[2]._padding_ = 0;
    this_01[2].OwnerName = this_00;
    if (this_00 != (FName)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    *(uint *)&this_01[3]._padding_ = *(uint *)((longlong)this_00 + 0x8c);
    *(FRHIResource **)param_1 = this_01;
    FRHIResource::AddRef(this_01);
    return (TRefCountPtr<FRHIUniformBuffer>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FRHIUniformBuffer>)param_1;
}

// RHICreateUnorderedAccessView @ 1446c7b00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FNullDynamicRHI::RHICreateUnorderedAccessView
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  bool bVar5;
  FRHIResource *this_00;
  TRefCountPtr<FRHIUnorderedAccessView> TVar6;
  undefined8 *in_stack_00000028;
  
  this_00 = ::operator_new(0x30);
  if (this_00 == (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
  }
  FRHIResource::FRHIResource(this_00,RRT_UnorderedAccessView);
  this_00->_padding_ = (longlong)&___7FRHIView__6B_;
  this_00[1]._padding_ = (longlong)param_3;
  if (param_3 != (FRHIViewDesc *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  uVar3 = *in_stack_00000028;
  FVar4 = *(FName *)(in_stack_00000028 + 1);
  this_00[1].AtomicFlags = (FAtomicFlags)(int)uVar3;
  this_00[1].ResourceType = (char)((ulonglong)uVar3 >> 0x20);
  this_00[1].field_0xd = (char)((ulonglong)uVar3 >> 0x28);
  this_00[1]._padding_ = (short)((ulonglong)uVar3 >> 0x30);
  this_00[1].OwnerName = FVar4;
  if (param_3 == (FRHIViewDesc *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar6.Reference = (FRHIUnorderedAccessView *)(*pcVar2)();
      return (TRefCountPtr<FRHIUnorderedAccessView>)TVar6.Reference;
    }
  }
  this_00->_padding_ = (longlong)&___7FRHIUnorderedAccessView__6B_;
  cVar1 = *(char *)&this_00[1].AtomicFlags.Packed;
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsUAV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xce3,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar6.Reference = (FRHIUnorderedAccessView *)(*pcVar2)();
      return (TRefCountPtr<FRHIUnorderedAccessView>)TVar6.Reference;
    }
  }
  (param_1->MemManager).Top = (uchar *)this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHICreateVertexDeclaration @ 1446c7c10

TRefCountPtr<FRHIVertexDeclaration> __thiscall
FNullDynamicRHI::RHICreateVertexDeclaration
          (FNullDynamicRHI *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_VertexDeclaration);
    *(FRHIResource **)(param_1->AllocatorInstance).InlineData[0].Pad = this_00;
    this_00->_padding_ = (longlong)&___7FRHIVertexDeclaration__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIVertexDeclaration>)(FRHIVertexDeclaration *)param_1;
  }
  *(undefined8 *)(param_1->AllocatorInstance).InlineData[0].Pad = 0;
  return (TRefCountPtr<FRHIVertexDeclaration>)(FRHIVertexDeclaration *)param_1;
}

// RHICreateVertexShader @ 1446c7c80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIVertexShader> __thiscall
FNullDynamicRHI::RHICreateVertexShader
          (FNullDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  FRHIShader *this_00;
  
  this_00 = ::operator_new(0x108);
  if (this_00 != (FRHIShader *)0x0) {
    FRHIShader::FRHIShader(this_00,RRT_VertexShader,SF_Vertex);
    param_1->DataPtr = (uchar *)this_00;
    this_00->_padding_ = (longlong)&___7FRHIVertexShader__6B_;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)param_1;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)param_1;
}

// RHICreateViewport @ 1446c7cf0

TRefCountPtr<FRHIViewport> __thiscall
FNullDynamicRHI::RHICreateViewport
          (FNullDynamicRHI *this,void *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
  FRHIResource *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_Viewport);
    *(FRHIResource **)param_1 = this_00;
    this_00->_padding_ = (longlong)&___7FRHIViewport__6B_;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIViewport>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FRHIViewport>)param_1;
}

// RHIDispatchComputeShader @ 1446c7e80

void __thiscall
FNullDynamicRHI::RHIDispatchComputeShader
          (FNullDynamicRHI *this,uint param_1,uint param_2,uint param_3)

{
  return;
}

// RHIDispatchIndirectComputeShader @ 1446c7eb0

void __thiscall
FNullDynamicRHI::RHIDispatchIndirectComputeShader
          (FNullDynamicRHI *this,FRHIBuffer *param_1,uint param_2)

{
  return;
}

// RHIDrawIndexedIndirect @ 1446c7ee0

void __thiscall
FNullDynamicRHI::RHIDrawIndexedIndirect
          (FNullDynamicRHI *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,uint param_4)

{
  return;
}

// RHIDrawIndexedPrimitive @ 1446c7ef0

void __thiscall
FNullDynamicRHI::RHIDrawIndexedPrimitive
          (FNullDynamicRHI *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 1446c7f00

void __thiscall
FNullDynamicRHI::RHIDrawIndexedPrimitiveIndirect
          (FNullDynamicRHI *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  return;
}

// RHIDrawPrimitive @ 1446c7f10

void __thiscall
FNullDynamicRHI::RHIDrawPrimitive(FNullDynamicRHI *this,uint param_1,uint param_2,uint param_3)

{
  return;
}

// RHIDrawPrimitiveIndirect @ 1446c7f20

void __thiscall
FNullDynamicRHI::RHIDrawPrimitiveIndirect(FNullDynamicRHI *this,FRHIBuffer *param_1,uint param_2)

{
  return;
}

// RHIEnableDepthBoundsTest @ 1446c7f30

void __thiscall FNullDynamicRHI::RHIEnableDepthBoundsTest(FNullDynamicRHI *this,bool param_1)

{
  return;
}

// RHIEndBreadcrumbGPU @ 1446c7f40

void __thiscall
FNullDynamicRHI::RHIEndBreadcrumbGPU(FNullDynamicRHI *this,FRHIBreadcrumbNode *param_1)

{
  return;
}

// RHIEndDrawingViewport @ 1446c7f50

void __thiscall
FNullDynamicRHI::RHIEndDrawingViewport
          (FNullDynamicRHI *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
  return;
}

// RHIEndFrame @ 1446c7f60

void __thiscall FNullDynamicRHI::RHIEndFrame(FNullDynamicRHI *this,FRHIEndFrameArgs *param_1)

{
  TRHIPipelineArray<FRHIBreadcrumbNode_*> *pTVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  atomic<void_*> aVar4;
  atomic<void_*> aVar5;
  ulonglong uVar6;
  atomic<unsigned___int64> aVar7;
  atomic<void_*> aVar8;
  bool bVar9;
  LARGE_INTEGER local_res10;
  ulonglong local_res18;
  atomic<void_*> local_res20;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  atomic<void_*> local_68;
  atomic<void_*> aStack_60;
  atomic<void_*> local_58;
  atomic<void_*> aStack_50;
  FQueue_u_0 local_48;
  
  pTVar1 = param_1->GPUBreadcrumbs;
  local_58 = (atomic<void_*>)0x0;
  aStack_50 = (atomic<void_*>)0x0;
  local_48 = NullRHIGPUProfilerQueue.field0_0x0;
  QueryPerformanceCounter(&local_res10);
  aVar8 = (atomic<void_*>)0x0;
  if (aStack_50 == (atomic<void_*>)0x0) {
    aStack_50 = (atomic<void_*>)UE::RHI::GPUProfiler::FEventStream::FChunk::operator_new(0x4000);
    if (aStack_50 == (atomic<void_*>)0x0) {
      aStack_50 = (atomic<void_*>)0x0;
    }
    else {
      *(undefined8 *)aStack_50 = 0;
      *(undefined4 *)((longlong)aStack_50 + 8) = 0;
      (((FIndexedLockFreeLink *)((longlong)aStack_50 + 0x30))->DoubleNext).Ptrs =
           (atomic<unsigned___int64>)0x0;
      *(undefined4 *)((longlong)aStack_50 + 0x38) = 0;
      *(undefined4 *)((longlong)aStack_50 + 0x3c) = 2;
    }
    if (local_58 == (atomic<void_*>)0x0) {
      local_58 = aStack_50;
    }
  }
  if (0x197 < *(uint *)((longlong)aStack_50 + 8)) {
    aVar4 = (atomic<void_*>)UE::RHI::GPUProfiler::FEventStream::FChunk::operator_new(0x4000);
    aVar5 = aVar8;
    if (aVar4 != (atomic<void_*>)0x0) {
      *(undefined8 *)aVar4 = 0;
      *(undefined4 *)((longlong)aVar4 + 8) = 0;
      (((FIndexedLockFreeLink *)((longlong)aVar4 + 0x30))->DoubleNext).Ptrs =
           (atomic<unsigned___int64>)0x0;
      *(undefined4 *)((longlong)aVar4 + 0x38) = 0;
      *(undefined4 *)((longlong)aVar4 + 0x3c) = 2;
      aVar5 = aVar4;
    }
    *(atomic<void_*> *)aStack_50 = aVar5;
    aStack_50 = aVar5;
  }
  uVar6 = (ulonglong)*(uint *)((longlong)aStack_50 + 8);
  *(uint *)((longlong)aStack_50 + 8) = *(uint *)((longlong)aStack_50 + 8) + 1;
  bVar9 = (param_1->StatsFrame).bIsSet;
  aStack_60 = *(atomic<void_*> *)pTVar1;
  local_78 = local_res10;
  uStack_70._4_1_ = bVar9;
  uStack_70._0_4_ = param_1->FrameNumber;
  if (bVar9 == false) {
    local_68 = (atomic<void_*>)0x0;
  }
  else {
    local_68 = (atomic<void_*>)(param_1->StatsFrame).TypedValue;
  }
  *(LARGE_INTEGER *)((atomic<unsigned_int> *)((longlong)aStack_50 + 0x40) + uVar6 * 10) =
       local_res10;
  ((LARGE_INTEGER *)((atomic<unsigned_int> *)((longlong)aStack_50 + 0x40) + uVar6 * 10))[1].s =
       uStack_70;
  ((atomic<void_*> *)((longlong)aStack_50 + 0x50))[uVar6 * 5] = local_68;
  ((atomic<void_*> *)((longlong)aStack_50 + 0x50) + uVar6 * 5)[1] = aStack_60;
  *(undefined1 *)((longlong)((longlong)aStack_50 + 0x60) + uVar6 * 0x28) = 0;
  if (*(longlong *)((atomic<unsigned_int> *)((longlong)aStack_50 + 0x58) + uVar6 * 10) != 0) {
    FRHIBreadcrumbAllocatorArray::AddUnique
              ((FRHIBreadcrumbAllocatorArray *)((longlong)aStack_50 + 0x10),
               *(FRHIBreadcrumbAllocator **)
                (*(longlong *)((atomic<unsigned_int> *)((longlong)aStack_50 + 0x58) + uVar6 * 10) +
                0x28));
  }
  uStack_70 = (_struct_19)CONCAT44(uStack_70._4_4_,1);
  local_78.QuadPart = (LONGLONG)&local_58;
  UE::RHI::GPUProfiler::ProcessEvents
            ((TArrayView<UE::RHI::GPUProfiler::FEventStream,int> *)&local_78.s);
  aVar5 = local_58;
  while (aVar5 != (atomic<void_*>)0x0) {
    local_res20 = *(atomic<void_*> *)aVar5;
    aVar2 = (((FIndexedLockFreeLink *)((longlong)aVar5 + 0x30))->DoubleNext).Ptrs;
    aVar7 = (atomic<unsigned___int64>)((longlong)aVar5 + 0x10);
    if (aVar2 != (atomic<unsigned___int64>)0x0) {
      aVar7 = aVar2;
    }
    local_58 = aVar5;
    DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
              ((TSharedRef<FRHIBreadcrumbAllocator,1> *)aVar7,*(int *)((longlong)aVar5 + 0x38));
    aVar2 = (((FIndexedLockFreeLink *)((longlong)aVar5 + 0x30))->DoubleNext).Ptrs;
    if (aVar2 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)aVar2);
    }
    memset((void *)aVar5,0xe5,0x4000);
    uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
    aVar4 = aVar8;
    if (uVar3 != 0) {
      aVar4 = (atomic<void_*>)
              (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe] + (uVar3 & 0x3fff));
    }
    *(atomic<void_*> *)&((atomic<void_*> *)((longlong)aVar4 + 8))->field_0x0 = aVar5;
    do {
      local_res18 = UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool._0_8_;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      local_res10.QuadPart = ((local_res18 >> 0x1a) + 1) * 0x4000000;
      if ((ulonglong)local_res10 < (local_res18 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      local_res10.QuadPart = local_res10.QuadPart & 0xfffffffffc000000U | (ulonglong)uVar3;
      aVar5 = aVar8;
      if (uVar3 != 0) {
        aVar5 = (atomic<void_*>)
                (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe] + (uVar3 & 0x3fff));
      }
      *(uint *)((longlong)aVar5 + 0x10) = (uint)local_res18 & 0x3ffffff;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      bVar9 = local_res18 == UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool._0_8_;
      if (bVar9) {
        UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool._0_8_ = local_res10;
      }
      UNLOCK();
      aVar5 = local_res20;
    } while (!bVar9);
  }
  return;
}

// RHIEndRenderPass @ 1446c8270

void __thiscall FNullDynamicRHI::RHIEndRenderPass(FNullDynamicRHI *this)

{
  return;
}

// RHIEndRenderQuery @ 1446c8280

void __thiscall FNullDynamicRHI::RHIEndRenderQuery(FNullDynamicRHI *this,FRHIRenderQuery *param_1)

{
  return;
}

// RHIEndTransitions @ 1446c82a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIEndTransitions
          (FNullDynamicRHI *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  return;
}

// RHIFinalizeContext @ 1446c8310

void __thiscall
FNullDynamicRHI::RHIFinalizeContext
          (FNullDynamicRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2)

{
  return;
}

// RHIFinalizeParallelContext @ 1446c8440

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIPlatformCommandList * __thiscall
FNullDynamicRHI::RHIFinalizeParallelContext(FNullDynamicRHI *this,IRHIComputeContext *param_1)

{
  return (IRHIPlatformCommandList *)0x0;
}

// RHIFlushResources @ 1446c8450

void __thiscall FNullDynamicRHI::RHIFlushResources(FNullDynamicRHI *this)

{
  return;
}

// RHIGetAvailableResolutions @ 1446c8460

bool __thiscall
FNullDynamicRHI::RHIGetAvailableResolutions
          (FNullDynamicRHI *this,TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  return false;
}

// RHIGetCommandContext @ 1446c8470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall
FNullDynamicRHI::RHIGetCommandContext
          (FNullDynamicRHI *this,ERHIPipeline param_1,FRHIGPUMask param_2)

{
  return (IRHIComputeContext *)0x0;
}

// RHIGetDefaultContext @ 1446c8480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

IRHICommandContext * __thiscall FNullDynamicRHI::RHIGetDefaultContext(FNullDynamicRHI *this)

{
  IRHICommandContext *pIVar1;
  
  pIVar1 = (IRHICommandContext *)&this->_padding_;
  if (this == (FNullDynamicRHI *)0x0) {
    pIVar1 = (IRHICommandContext *)0x0;
  }
  return pIVar1;
}

// RHIGetNativeDevice @ 1446c8510

void * __thiscall FNullDynamicRHI::RHIGetNativeDevice(FNullDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetNativeInstance @ 1446c8530

void * __thiscall FNullDynamicRHI::RHIGetNativeInstance(FNullDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetParallelCommandContext @ 1446c85a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall
FNullDynamicRHI::RHIGetParallelCommandContext
          (FNullDynamicRHI *this,FRHIParallelRenderPassInfo *param_1,FRHIGPUMask param_2)

{
  return (IRHIComputeContext *)0x0;
}

// RHIGetRenderQueryResult @ 1446c8610

bool __thiscall
FNullDynamicRHI::RHIGetRenderQueryResult
          (FNullDynamicRHI *this,FRHIRenderQuery *param_1,ulong64 *param_2,bool param_3,uint param_4
          )

{
  return true;
}

// RHIGetSupportedResolution @ 1446c8620

void __thiscall
FNullDynamicRHI::RHIGetSupportedResolution(FNullDynamicRHI *this,uint *param_1,uint *param_2)

{
  return;
}

// RHIGetTextureMemoryStats @ 1446c8630

void __thiscall
FNullDynamicRHI::RHIGetTextureMemoryStats(FNullDynamicRHI *this,FTextureMemoryStats *param_1)

{
  return;
}

// RHIGetTextureMemoryVisualizeData @ 1446c8640

bool __thiscall
FNullDynamicRHI::RHIGetTextureMemoryVisualizeData
          (FNullDynamicRHI *this,FColor *param_1,int param_2,int param_3,int param_4,int param_5)

{
  return false;
}

// RHIGetViewportBackBuffer @ 1446c8660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FNullDynamicRHI::RHIGetViewportBackBuffer(FNullDynamicRHI *this,FRHIViewport *param_1)

{
  FRHITexture *this_00;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  FRHITextureCreateDesc local_198;
  FRHITextureCreateDesc local_118;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_198._padding_ = 0;
  local_1a8 = 1;
  local_198._padding_._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_1a4 = 1;
  local_198._padding_ = 1;
  local_198.DebugName = L"FNullDynamicRHI::RHIGetViewportBackBuffer";
  local_198._36_8_ = &DAT_100000001;
  local_198._padding_ = 0;
  local_198._padding_._0_4_ = 0;
  local_198._padding_._0_4_ = 0;
  local_198._padding_._4_4_ = 0x10001;
  local_198._padding_._0_4_ = 0x2000101;
  local_198._padding_._4_2_ = 0xff00;
  local_198._padding_ = 0;
  local_198._padding_._0_4_ = 0;
  local_198._padding_._4_4_ = 1;
  local_198.InitialState = None;
  local_198.InitAction = Default;
  local_198.BulkData = (FResourceBulkDataInterface *)0x0;
  local_198.ClassName.ComparisonIndex.Value = 0;
  local_198.ClassName.Number = 0;
  local_198.OwnerName.ComparisonIndex.Value = 0;
  local_198.OwnerName.Number = 0;
  FRHITextureCreateDesc::FRHITextureCreateDesc(&local_118,&local_198);
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
  local_118._padding_ = 1;
  FRHITextureCreateDesc::FRHITextureCreateDesc(&local_98,&local_118);
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  this_00 = ::operator_new(0x138);
  if (this_00 == (FRHITexture *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    FRHITexture::FRHITexture(this_00,&local_98);
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__FRHIViewableResource__;
    this_00->_padding_ = (longlong)&FNullTexture::_vftable__for__RHIValidation__FTextureResource__;
    *(FRHITexture **)param_1 = this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHILockTexture @ 1446c8830

FRHILockTextureResult * __thiscall
FNullDynamicRHI::RHILockTexture
          (FNullDynamicRHI *this,FRHILockTextureResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  ulong64 *puVar1;
  uchar uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulong64 uVar6;
  
  plVar4 = (longlong *)param_2->_padding_;
  puVar1 = &__return_storage_ptr__->ByteCount;
  __return_storage_ptr__->Data = (void *)0x0;
  *puVar1 = 0;
  __return_storage_ptr__->Stride = 0;
  lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
  uVar2 = *(uchar *)(lVar5 + 0x33);
  lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
  uVar3 = *(uint *)(lVar5 + 0x28);
  lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
  uVar6 = CalculateImageBytes(*(uint *)(lVar5 + 0x24),uVar3,0,uVar2);
  if (puVar1 != (ulong64 *)0x0) {
    *puVar1 = uVar6;
  }
  __return_storage_ptr__->Stride = (uint)(uVar6 / (ulonglong)(longlong)(int)uVar3);
  FLargeMemoryData::Reserve(&this->MemoryBuffer,uVar6);
  __return_storage_ptr__->Data = (this->MemoryBuffer).Data;
  return __return_storage_ptr__;
}

// RHIMapStagingSurface @ 1446c88f0

void __thiscall
FNullDynamicRHI::RHIMapStagingSurface
          (FNullDynamicRHI *this,FRHITexture *param_1,FRHIGPUFence *param_2,void **param_3,
          int *param_4,int *param_5,uint param_6)

{
  return;
}

// RHIMultiDrawIndexedPrimitiveIndirect @ 1446c8900

void __thiscall
FNullDynamicRHI::RHIMultiDrawIndexedPrimitiveIndirect
          (FNullDynamicRHI *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3,
          FRHIBuffer *param_4,uint param_5,uint param_6)

{
  return;
}

// RHIRead3DSurfaceFloatData @ 1446c8a10

void __thiscall
FNullDynamicRHI::RHIRead3DSurfaceFloatData
          (FNullDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,TIntPoint<int> param_3,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// RHIReadSurfaceData @ 1446c8a20

void __thiscall
FNullDynamicRHI::RHIReadSurfaceData
          (FNullDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
          *(int *)((longlong)&param_2->field0_0x0 + 4)) *
          (*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0);
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  memset((param_3->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)iVar2 << 2);
  return;
}

// RHIReadSurfaceFloatData @ 1446c8a90

void __thiscall
FNullDynamicRHI::RHIReadSurfaceFloatData
          (FNullDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_3,ECubeFace param_4,int param_5,
          int param_6)

{
  return;
}

// RHIReleaseTransition @ 1446c8ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNullDynamicRHI::RHIReleaseTransition(FNullDynamicRHI *this,FRHITransition *param_1)

{
  return;
}

// RHIReplaceResources @ 1446c8ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIReplaceResources
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,
          TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// RHIResizeViewport @ 1446c8b00

void __thiscall
FNullDynamicRHI::RHIResizeViewport
          (FNullDynamicRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4)

{
  return;
}

// RHISetBlendState @ 1446c8bd0

void __thiscall
FNullDynamicRHI::RHISetBlendState
          (FNullDynamicRHI *this,FRHIBlendState *param_1,FLinearColor *param_2)

{
  return;
}

// RHISetBoundShaderState @ 1446c8be0

void __thiscall
FNullDynamicRHI::RHISetBoundShaderState(FNullDynamicRHI *this,FRHIBoundShaderState *param_1)

{
  return;
}

// RHISetComputeShader @ 1446c8c20

void __thiscall
FNullDynamicRHI::RHISetComputeShader(FNullDynamicRHI *this,FRHIComputeShader *param_1)

{
  return;
}

// RHISetDepthBounds @ 1446c8c30

void __thiscall
FNullDynamicRHI::RHISetDepthBounds(FNullDynamicRHI *this,float param_1,float param_2)

{
  return;
}

// RHISetDepthStencilState @ 1446c8c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHISetDepthStencilState
          (FNullDynamicRHI *this,FRHIDepthStencilState *param_1,uint param_2)

{
  return;
}

// RHISetMultipleViewports @ 1446c8cb0

void __thiscall
FNullDynamicRHI::RHISetMultipleViewports
          (FNullDynamicRHI *this,uint param_1,FViewportBounds *param_2)

{
  return;
}

// RHISetRasterizerState @ 1446c8cc0

void __thiscall
FNullDynamicRHI::RHISetRasterizerState(FNullDynamicRHI *this,FRHIRasterizerState *param_1)

{
  return;
}

// RHISetScissorRect @ 1446c8cd0

void __thiscall
FNullDynamicRHI::RHISetScissorRect
          (FNullDynamicRHI *this,bool param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  return;
}

// RHISetShaderParameters @ 1446c8ce0

void __thiscall
FNullDynamicRHI::RHISetShaderParameters
          (FNullDynamicRHI *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  return;
}

// RHISetShaderParameters @ 1446c8cf0

void __thiscall
FNullDynamicRHI::RHISetShaderParameters
          (FNullDynamicRHI *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  return;
}

// RHISetShadingRate @ 1446c8dc0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHISetShadingRate
          (FNullDynamicRHI *this,EVRSShadingRate param_1,EVRSRateCombiner param_2)

{
  return;
}

// RHISetStaticUniformBuffer @ 1446c8de0

void __thiscall
FNullDynamicRHI::RHISetStaticUniformBuffer
          (FNullDynamicRHI *this,uchar param_1,FRHIUniformBuffer *param_2)

{
  return;
}

// RHISetStaticUniformBuffers @ 1446c8df0

void __thiscall
FNullDynamicRHI::RHISetStaticUniformBuffers
          (FNullDynamicRHI *this,FUniformBufferStaticBindings *param_1)

{
  return;
}

// RHISetStreamSource @ 1446c8e20

void __thiscall
FNullDynamicRHI::RHISetStreamSource
          (FNullDynamicRHI *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  return;
}

// RHISetViewport @ 1446c8e40

void __thiscall
FNullDynamicRHI::RHISetViewport
          (FNullDynamicRHI *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  return;
}

// RHISubmitCommandLists @ 1446c8e60

void __thiscall
FNullDynamicRHI::RHISubmitCommandLists(FNullDynamicRHI *this,FRHISubmitCommandListsArgs *param_1)

{
  return;
}

// RHITick @ 1446c8e80

void __thiscall FNullDynamicRHI::RHITick(FNullDynamicRHI *this,float param_1)

{
  return;
}

// RHIUnlockTexture @ 1446c8f40

void __thiscall
FNullDynamicRHI::RHIUnlockTexture
          (FNullDynamicRHI *this,FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  return;
}

// RHIUnmapStagingSurface @ 1446c8f50

void __thiscall
FNullDynamicRHI::RHIUnmapStagingSurface(FNullDynamicRHI *this,FRHITexture *param_1,uint param_2)

{
  return;
}

// RHIUpdateAllocationTags @ 1446c8f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIUpdateAllocationTags
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  return;
}

// RHIUpdateTexture2D @ 1446c8fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIUpdateTexture2D
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,uchar *param_6)

{
  return;
}

// RHIUpdateTexture3D @ 1446c8fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIUpdateTexture3D
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4,uint param_5,uint param_6,uchar *param_7)

{
  return;
}

// RHIUpdateUniformBuffer @ 1446c8fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::RHIUpdateUniformBuffer
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIUniformBuffer *param_2,
          void *param_3)

{
  return;
}

// Shutdown @ 1446c9290

void __thiscall FNullDynamicRHI::Shutdown(FNullDynamicRHI *this)

{
  return;
}

// UnlockBuffer_BottomOfPipe @ 1446c92f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNullDynamicRHI::UnlockBuffer_BottomOfPipe
          (FNullDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  return;
}

