// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FTextureLookupBase @ 145127940

void __thiscall UE::Color::ACES::FTextureLookupBase::~FTextureLookupBase(FTextureLookupBase *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// GetSizeY @ 14514e5a0

uint __thiscall UE::Color::ACES::FTextureLookupBase::GetSizeY(FTextureLookupBase *this)

{
  return 1;
}

// InitRHI @ 145158d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Color::ACES::FTextureLookupBase::InitRHI(FTextureLookupBase *this,FRHICommandListBase *param_1)

{
  char cVar1;
  FRHIResource *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FRHIResource *this_00;
  longlong lVar10;
  undefined1 *_Dst;
  longlong *plVar11;
  ForElementType<EPixelFormat> _Src;
  wchar_t *pwVar12;
  size_t _Size;
  undefined1 auStackY_2e8 [32];
  FLLMScope local_298 [2];
  FRHIResource *local_290;
  FRHIResource *local_288;
  FSamplerStateInitializerRHI local_280;
  FMemScope local_260 [2];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong lStack_1c8;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined2 local_1a7;
  undefined1 local_1a5;
  undefined2 local_1a4;
  ForElementType<EPixelFormat> local_1a0;
  int local_190;
  int local_18c;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  FResourceBulkDataInterface *local_178;
  FName local_170;
  FName local_168;
  undefined1 local_158 [64];
  undefined1 *local_118;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  ERHIAccess local_100;
  ERHITextureInitAction local_fc;
  FResourceBulkDataInterface *local_f8;
  FName local_f0;
  FName local_e8;
  undefined1 local_d8 [48];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FRHICommandListBase *local_78;
  FRHITexture *local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar6 = (**(code **)(this->_padding_ + 0x50))();
  uVar8 = (**(code **)(this->_padding_ + 0x38))(this);
  uVar9 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((this->DebugName).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
  }
  local_250 = 1;
  uStack_248 = 0;
  local_240 = 0;
  local_1b4._4_4_ = uVar8;
  local_1b4._0_4_ = uVar9;
  local_1c0 = 0;
  local_1bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1a0.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_18c = 1;
  local_1a7 = 1;
  local_1d8 = 0;
  local_1a4 = 0xff00;
  local_1ac = 0x10001;
  local_1a8 = 1;
  local_1d0 = 1;
  lStack_1c8 = 0;
  local_1b8 = 0;
  local_190 = 0;
  local_1a5 = uVar6;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_1a0,0,&local_18c);
  iVar5 = local_190;
  _Size = (size_t)local_190;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  local_158[0x32] = local_1a7._1_1_;
  local_158[0x33] = local_1a5;
  local_158[0x34] = (undefined1)local_1a4;
  local_158._36_8_ = local_1b4;
  local_158._44_2_ = (undefined2)local_1ac;
  local_158._46_2_ = local_1ac._2_2_;
  local_158[0x30] = local_1a8;
  local_158[0x31] = (undefined1)local_1a7;
  local_158._24_4_ = local_1c0;
  local_158._32_4_ = local_1b8;
  local_158[0x35] = local_1a4._1_1_;
  local_158._28_4_ = local_1bc;
  local_180 = 0;
  local_178 = (FResourceBulkDataInterface *)0x0;
  local_1d8 = 8;
  local_118 = (undefined1 *)0x0;
  local_10c = 1;
  local_158._0_8_ = 8;
  local_158._8_8_ = local_1d0;
  local_158._16_8_ = lStack_1c8;
  _Src = (ForElementType<EPixelFormat>)&local_1a0;
  if (local_1a0.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    _Src = local_1a0.SecondaryData;
  }
  local_110 = local_190;
  local_188 = (FScriptContainerElement *)pwVar12;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,local_190,1,(ForElementType<EPixelFormat> *)(local_158 + 0x38),local_190,&local_10c
            );
  _Dst = local_158 + 0x38;
  if (local_118 != (undefined1 *)0x0) {
    _Dst = local_118;
  }
  if (iVar5 != 0) {
    memcpy(_Dst,(void *)_Src,_Size);
  }
  local_108 = local_188;
  local_100 = (ERHIAccess)local_180;
  local_fc = local_180._4_4_;
  local_f8 = local_178;
  local_f0 = local_170;
  local_e8 = local_168;
  if (local_1a0.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1a0.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            (param_1,(FRHITextureInitializer *)local_d8,(FRHITextureCreateDesc *)local_158);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_d8);
  if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_d8);
  }
  if (local_a8 != 0) {
    plVar11 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar11 = local_80;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_d8._0_8_ != 0) {
    plVar11 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = &this->_padding_;
  if ((FRHIResource **)plVar11 == &local_290) {
LAB_14515905e:
    if (local_290 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_290);
    }
  }
  else {
    pFVar2 = (FRHIResource *)*plVar11;
    *plVar11 = (longlong)local_290;
    local_290 = (FRHIResource *)0x0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
      goto LAB_14515905e;
    }
  }
  local_280.Filter.Value = '\0';
  local_280.AddressU.Value = '\x01';
  local_280.AddressV.Value = '\x01';
  local_280.AddressW.Value = '\x01';
  local_280.MipBias = 0.0;
  local_280.MinMipLevel = 0.0;
  local_280.MaxMipLevel = 3.4028235e+38;
  local_280.MaxAnisotropy = 0;
  local_280.BorderColor = 0;
  local_280.SamplerComparisonFunction.Value = '\0';
  this_00 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_280);
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != this_00) {
    this->_padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  plVar3 = (longlong *)*plVar11;
  if ((plVar3 == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xbb1,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar10 = (**(code **)(*plVar3 + 0x20))(plVar3);
  cVar1 = *(char *)(lVar10 + 0x32);
  if (((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
      ((cVar1 != '\x03' && (cVar1 != '\x04')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xba1,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar11 = (longlong *)*plVar11;
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
            (local_298,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            (local_260,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar10 = (**(code **)(*plVar11 + 0x28))(plVar11);
  if ((lVar10 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3d8,
                         L"Creating a shader resource view of an FRHITextureReference is not supported."
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_288,param_1,plVar11);
  FMemScope::~FMemScope(local_260);
  FLLMScope::~FLLMScope(local_298);
  plVar11 = &this->_padding_;
  if ((FRHIResource **)plVar11 != &local_288) {
    pFVar2 = (FRHIResource *)*plVar11;
    *plVar11 = (longlong)local_288;
    local_288 = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145159280;
    FRHIResource::Release(pFVar2);
  }
  if (local_288 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_288);
  }
LAB_145159280:
  if (local_118 != (undefined1 *)0x0) {
    FMemory::Free(local_118);
  }
  return;
}

