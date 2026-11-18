// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// InitRHI @ 1483cf950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSinglePrimitiveStructured::InitRHI(FSinglePrimitiveStructured *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  TRefCountPtr<FRHIBuffer> *pTVar3;
  char cVar4;
  FRHITexture *pFVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIBuffer *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  TRefCountPtr<FRHITexture> TVar10;
  longlong lVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  TRefCountPtr<FRHIShaderResourceView> TVar13;
  undefined1 auStackY_2c8 [32];
  FLLMScope local_288 [2];
  TRefCountPtr<FRHIShaderResourceView> local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  int iStack_264;
  wchar_t *local_260;
  longlong lStack_258;
  ERHIAccess local_250;
  undefined4 uStack_24c;
  ERHIAccess EStack_248;
  ERHITextureInitAction EStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined1 local_230 [24];
  undefined1 local_218 [16];
  longlong lStack_208;
  longlong local_200;
  longlong lStack_1f8;
  wchar_t *local_1f0;
  longlong lStack_1e8;
  wchar_t *local_1e0;
  longlong lStack_1d8;
  FResourceBulkDataInterface *local_1d0;
  undefined1 local_1c8 [28];
  FRHIGPUMask local_1ac;
  uint local_1a8;
  TIntPoint<int>_u_0 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined2 local_194;
  ForElementType<EPixelFormat> local_188;
  int local_180;
  int local_17c;
  wchar_t *local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"FSinglePrimitiveStructuredBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveUniformShaderParameters.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  local_278 = 0x2c;
  local_1c8._0_4_ = 0;
  local_1c8._4_4_ = 0;
  uStack_274 = 1;
  local_1ac.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1c8._8_4_ = 1;
  local_1c8._12_4_ = 0;
  local_178 = L"PrimitiveSceneDataTexture";
  local_1a4 = (TIntPoint<int>_u_0)0x10000002c;
  local_1c8._16_8_ = 0;
  local_1c8._24_4_ = 0.0;
  local_1a8 = 0;
  local_19c._0_2_ = 1;
  local_19c._2_2_ = 1;
  local_198._0_1_ = '\x01';
  local_198._1_1_ = '\x01';
  local_198._2_1_ = Texture2D;
  local_198._3_1_ = PF_A32B32G32R32F;
  local_194._0_1_ = PF_Unknown;
  local_194._1_1_ = 0xff;
  local_188 = (ForElementType<EPixelFormat>)0x0;
  local_180 = 0;
  local_17c = 1;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)local_1c8);
  local_f8 = local_178;
  local_f0 = (undefined4)local_170;
  local_ec = local_170._4_4_;
  local_e8 = local_168;
  local_e0 = local_160;
  local_d8 = local_158;
  if (local_188 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188);
  }
  local_148.Flags = UAV|ShaderResource;
  FLazyName::Resolve(&::ClassName);
  local_e0 = local_238;
  FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
  local_78 = local_f8;
  local_70 = local_f0;
  local_6c = local_ec;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar10 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_230);
  pTVar1 = &this->PrimitiveSceneDataTextureRHI;
  if ((FRHITexture *)pTVar1 != TVar10.Reference) {
    pFVar5 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar10.Reference)->_padding_;
    (TVar10.Reference)->_padding_ = 0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_230._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_230._0_8_);
  }
  pFVar5 = pTVar1->Reference;
  if ((pFVar5 == (FRHITexture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xbb1,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar11 = (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5);
  cVar4 = *(char *)(lVar11 + 0x32);
  if (((((cVar4 != '\0') && (cVar4 != '\x01')) && (cVar4 != '\x02')) &&
      ((cVar4 != '\x03' && (cVar4 != '\x04')))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xba1,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = pTVar1->Reference;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_288,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)(local_230 + 8),
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar11 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5);
  if ((lVar11 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3d8,
                         L"Creating a shader resource view of an FRHITextureReference is not supported."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_280,param_1,pFVar5);
  FMemScope::~FMemScope((FMemScope *)(local_230 + 8));
  FLLMScope::~FLLMScope(local_288);
  pTVar2 = &this->PrimitiveSceneDataTextureSRV;
  if (pTVar2 != &local_280) {
    pFVar6 = pTVar2->Reference;
    pTVar2->Reference = local_280.Reference;
    local_280.Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar6 == (FRHIShaderResourceView *)0x0) goto LAB_1483cfd51;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  if (local_280.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_280.Reference);
  }
LAB_1483cfd51:
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  iStack_264 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_270 = 0x80;
  uStack_26c = 0x10;
  local_260 = L"SkyIrradianceEnvironmentMap";
  lStack_258 = 0;
  uStack_24c = 0;
  EStack_248 = None;
  EStack_244 = Default;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_268 = 0x10101;
  local_250 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Static,false);
  local_200 = CONCAT44(uStack_26c,local_270);
  lStack_1f8 = CONCAT44(iStack_264,uStack_268);
  local_1e0 = (wchar_t *)CONCAT44(uStack_24c,local_250);
  lStack_1d8 = CONCAT44(EStack_244,EStack_248);
  local_1f0 = local_260;
  lStack_1e8 = lStack_258;
  local_1d0 = (FResourceBulkDataInterface *)CONCAT44(uStack_23c,uStack_240);
  TVar12 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)(local_230 + 0x10));
  pTVar3 = &this->SkyIrradianceEnvironmentMapRHI;
  if ((FRHIBuffer *)pTVar3 != TVar12.Reference) {
    this_00 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar12.Reference)->_padding_;
    (TVar12.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)local_230._16_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_230._16_8_);
  }
  local_218._8_8_ = 0;
  lStack_208 = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
            ((FInitializer *)(local_218 + 8),pTVar3->Reference);
  TVar13 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHIBuffer *)local_218,(FInitializer *)pTVar3->Reference);
  pTVar2 = &this->SkyIrradianceEnvironmentMapSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar13.Reference) {
    pFVar6 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar13.Reference;
    *(undefined8 *)TVar13.Reference = 0;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  if ((FRHIResource *)local_218._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_218._0_8_);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleaseRHI @ 1483cfef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FSinglePrimitiveStructured::ReleaseRHI(FSinglePrimitiveStructured *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *pFVar1;
  FRHITexture *this_01;
  
  this_00 = (this->SkyIrradianceEnvironmentMapRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->SkyIrradianceEnvironmentMapRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->SkyIrradianceEnvironmentMapSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SkyIrradianceEnvironmentMapSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_01 = (this->PrimitiveSceneDataTextureRHI).Reference;
  if (this_01 != (FRHITexture *)0x0) {
    (this->PrimitiveSceneDataTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->PrimitiveSceneDataTextureSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->PrimitiveSceneDataTextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// UploadToGPU @ 14842dc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSinglePrimitiveStructured::UploadToGPU
          (FSinglePrimitiveStructured *this,FRHICommandListBase *param_1)

{
  return;
}

