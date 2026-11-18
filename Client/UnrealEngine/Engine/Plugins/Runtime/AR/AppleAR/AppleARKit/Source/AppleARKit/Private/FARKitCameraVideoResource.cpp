// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 5

// ~FARKitCameraVideoResource @ 14cfd0c50

void __thiscall
FARKitCameraVideoResource::~FARKitCameraVideoResource(FARKitCameraVideoResource *this)

{
  FRHITexture *pFVar1;
  FRHIUnorderedAccessView *this_00;
  
  this->_padding_ = (longlong)&___7FARKitCameraVideoResource__6B_;
  pFVar1 = (this->VideoTextureCbCr).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VideoTextureY).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_00 = (this->DecodedTextureUAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodedTextureLock);
  pFVar1 = (this->DecodedTextureRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// GetSizeX @ 14cfd7bc0

uint __thiscall FARKitCameraVideoResource::GetSizeX(FARKitCameraVideoResource *this)

{
  return (this->Size).field0_0x0._s_0.X;
}

// GetSizeY @ 14cfd7be0

uint __thiscall FARKitCameraVideoResource::GetSizeY(FARKitCameraVideoResource *this)

{
  return (this->Size).field0_0x0._s_0.Y;
}

// InitRHI @ 14cfd9380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FARKitCameraVideoResource::InitRHI(FARKitCameraVideoResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TRefCountPtr<FRHITexture> *pTVar2;
  FRHIResource *this_00;
  FRHITexture *pFVar3;
  FRHITexture *this_01;
  FRHITextureCreateDesc *pFVar4;
  TRefCountPtr<FRHITexture> TVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [16];
  FRHIResource *local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined1 local_158;
  FString local_150;
  FRHITextureDesc local_138;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  ERHITextureInitAction local_dc;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_170 = 0x1010101;
  local_16c = 0;
  local_164 = 0x7f7fffff;
  local_15c = 0;
  local_158 = 0;
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
            ((FLLMScope *)(local_188 + 8),
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)local_188,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_178,&local_170);
  FMemScope::~FMemScope((FMemScope *)local_188);
  FLLMScope::~FLLMScope((FLLMScope *)(local_188 + 8));
  plVar1 = &this->_padding_;
  if ((FRHIResource **)plVar1 != &local_178) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)local_178;
    local_178 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_14cfd9493;
    FRHIResource::Release(this_00);
  }
  if (local_178 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_178);
  }
LAB_14cfd9493:
  (this->Size).field0_0x0._s_0.Y = 1;
  (this->Size).field0_0x0._s_0.X = 1;
  pFVar4 = FRHITextureCreateDesc::Create2D
                     (&local_b8,L"DecodedTextureRef",(TIntPoint<int>)(this->Size).field0_0x0._s_0,
                      PF_B8G8R8A8);
  pFVar4->_padding_ = 8;
  FRHITextureDesc::FRHITextureDesc(&local_138,(FRHITextureDesc *)pFVar4);
  local_e8 = pFVar4->DebugName;
  local_e0 = pFVar4->InitialState;
  local_dc = pFVar4->InitAction;
  local_d8 = pFVar4->BulkData;
  local_d0 = pFVar4->ClassName;
  local_c8 = pFVar4->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  lpCriticalSection = &this->DecodedTextureLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar5 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_188);
    pTVar2 = &this->DecodedTextureRef;
    if ((FRHITexture *)pTVar2 != TVar5.Reference) {
      pFVar3 = pTVar2->Reference;
      pTVar2->Reference = (FRHITexture *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FName)local_188._0_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_188._0_8_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_138.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    pFVar3 = pTVar2->Reference;
    this_01 = (FRHITexture *)this->_padding_;
    if (this_01 != pFVar3) {
      this->_padding_ = (longlong)pFVar3;
      if (pFVar3 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar3);
      }
      if (this_01 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    local_188._0_4_ = *(uint *)&this->Owner->field_0x18;
    local_188._4_4_ = *(uint *)&this->Owner->field_0x1c;
    ::FName::ToString((FName *)local_188,&local_150);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar6.Data = local_150.Data.AllocatorInstance.Data;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_1,this->_padding_,FVar6.Data);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(*(longlong *)&this->Owner->field_0x140 + 0x20),
               (FRHITexture *)this->_padding_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseRHI @ 14cfdcb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FARKitCameraVideoResource::ReleaseRHI(FARKitCameraVideoResource *this)

{
  FRHITextureReference *pFVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = *(FRHITextureReference **)(*(longlong *)&this->Owner->field_0x140 + 0x20);
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
  this_00 = (this->DecodedTextureRef).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->DecodedTextureRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

