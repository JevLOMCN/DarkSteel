// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 5

// ~FARKitTextureResource @ 14cfd0d70

void __thiscall FARKitTextureResource::~FARKitTextureResource(FARKitTextureResource *this)

{
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// GetSizeX @ 14cfd7bd0

uint __thiscall FARKitTextureResource::GetSizeX(FARKitTextureResource *this)

{
  return (this->Size).field0_0x0._s_0.X;
}

// GetSizeY @ 14cfd7bf0

uint __thiscall FARKitTextureResource::GetSizeY(FARKitTextureResource *this)

{
  return (this->Size).field0_0x0._s_0.Y;
}

// InitRHI @ 14cfd9690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FARKitTextureResource::InitRHI(FARKitTextureResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FRHITextureCreateDesc *pFVar3;
  TRefCountPtr<FRHITexture> TVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [16];
  FRHIResource *local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined1 local_148;
  FString local_140;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  ERHIAccess local_d0;
  ERHITextureInitAction local_cc;
  FResourceBulkDataInterface *local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_160 = 0x1010101;
  local_15c = 0;
  local_154 = 0x7f7fffff;
  local_14c = 0;
  local_148 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)(local_178 + 8),
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)local_178,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_168,&local_160);
  FMemScope::~FMemScope((FMemScope *)local_178);
  FLLMScope::~FLLMScope((FLLMScope *)(local_178 + 8));
  plVar1 = &this->_padding_;
  if ((FRHIResource **)plVar1 != &local_168) {
    pFVar2 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)local_168;
    local_168 = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_14cfd97a9;
    FRHIResource::Release(pFVar2);
  }
  if (local_168 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_168);
  }
LAB_14cfd97a9:
  (this->Size).field0_0x0._s_0.Y = 1;
  (this->Size).field0_0x0._s_0.X = 1;
  pFVar3 = FRHITextureCreateDesc::Create2D
                     (&local_a8,L"FARKitTextureResource",
                      (TIntPoint<int>)(this->Size).field0_0x0._s_0,PF_B8G8R8A8);
  pFVar3->_padding_ = 8;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)pFVar3);
  local_d8 = pFVar3->DebugName;
  local_d0 = pFVar3->InitialState;
  local_cc = pFVar3->InitAction;
  local_c8 = pFVar3->BulkData;
  local_c0 = pFVar3->ClassName;
  local_b8 = pFVar3->OwnerName;
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  TVar4 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_178);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar4.Reference) {
    pFVar2 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if ((FName)local_178._0_8_ != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_178._0_8_);
  }
  local_178._0_8_ = this->Owner->_padding_;
  ::FName::ToString((FName *)local_178,&local_140);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar5.Data = local_140.Data.AllocatorInstance.Data;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_1,*plVar1,FVar5.Data);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  FRHICommandListBase::UpdateTextureReference
            (param_1,(this->Owner->TextureReference->TextureReferenceRHI).Reference,
             (FRHITexture *)*plVar1);
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReleaseRHI @ 14cfdcc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FARKitTextureResource::ReleaseRHI(FARKitTextureResource *this)

{
  FRHITextureReference *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->Owner->TextureReference->TextureReferenceRHI).Reference;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,(FRHITexture *)0x0)
  ;
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

