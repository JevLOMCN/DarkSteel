// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ~FTextureReadBuffer2D @ 14916b260

void __thiscall FTextureReadBuffer2D::~FTextureReadBuffer2D(FTextureReadBuffer2D *this)

{
  FRHITexture *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  this->NumBytes = 0;
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->Buffer).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->SRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// Initialize @ 149186150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureReadBuffer2D::Initialize
          (FTextureReadBuffer2D *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,
          uint param_4,uint param_5,EPixelFormat param_6,ETextureCreateFlags param_7,
          FResourceBulkDataInterface *param_8)

{
  char cVar1;
  FRHITexture *pFVar2;
  FRHIShaderResourceView *this_00;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHITexture> TVar5;
  longlong lVar6;
  TRefCountPtr<FRHIShaderResourceView> *pTVar7;
  undefined1 auStackY_218 [32];
  FLLMScope local_1d8 [2];
  TRefCountPtr<FRHIShaderResourceView> local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  undefined1 local_1c0 [32];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined1 local_176;
  EPixelFormat local_175;
  undefined2 local_174;
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FName local_158;
  FName local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FName local_d8;
  uint local_d0;
  uint local_cc;
  FResourceBulkDataInterface *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FName local_58;
  uint local_50;
  undefined4 local_4c;
  FResourceBulkDataInterface *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uStack_1c4 = param_5;
  local_1c8 = param_4;
  local_1c0._24_8_ = 0;
  local_1a0 = 1;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  this->NumBytes = param_3 * param_4 * param_5;
  local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_17c = 0x10001;
  local_184._4_4_ = param_5;
  local_184._0_4_ = param_4;
  local_175 = param_6;
  local_178 = 0x101;
  local_176 = 0;
  local_174 = 0xff00;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_15c = 1;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_158 = (FName)param_2;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1c0 + 0x18));
  local_d8 = local_158;
  local_d0 = local_150.ComparisonIndex.Value;
  local_cc = local_150.Number;
  local_c8 = (FResourceBulkDataInterface *)local_148;
  local_c0 = local_140;
  local_b8 = local_138;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  local_128.Flags = param_7;
  local_c8 = param_8;
  local_cc = 1;
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
  local_58 = local_d8;
  local_50 = local_d0;
  local_4c = local_cc;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar5 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1c0);
  if ((FRHITexture *)this != TVar5.Reference) {
    pFVar2 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHITexture *)(TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHIResource *)local_1c0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1c0._0_8_);
  }
  pFVar2 = (this->Buffer).Reference;
  if ((pFVar2 == (FRHITexture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xbb1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar6 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
  cVar1 = *(char *)(lVar6 + 0x32);
  if (((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
      ((cVar1 != '\x03' && (cVar1 != '\x04')))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xba1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Buffer).Reference;
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
            (local_1d8,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)(local_1c0 + 8),
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar6 = (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2);
  if ((lVar6 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3d8,
                         L"Creating a shader resource view of an FRHITextureReference is not supported."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_1d0,param_1,pFVar2);
  FMemScope::~FMemScope((FMemScope *)(local_1c0 + 8));
  FLLMScope::~FLLMScope(local_1d8);
  pTVar7 = &this->SRV;
  if (pTVar7 != &local_1d0) {
    this_00 = pTVar7->Reference;
    pTVar7->Reference = local_1d0.Reference;
    local_1d0.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) goto LAB_1491864d5;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_1d0.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1d0.Reference);
  }
LAB_1491864d5:
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

