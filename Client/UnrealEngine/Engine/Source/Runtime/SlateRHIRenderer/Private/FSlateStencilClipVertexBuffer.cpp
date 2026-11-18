// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// InitRHI @ 145fd2e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateStencilClipVertexBuffer::InitRHI
          (FSlateStencilClipVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [40];
  FNameEntryId local_b0;
  uint uStack_ac;
  FName FStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  wchar_t *local_70;
  undefined ***pppuStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  puVar1 = &this->field_0x20;
  if (*(longlong *)&this->field_0x20 != 0) {
    return;
  }
  local_44 = 1;
  local_48 = 0;
  local_40 = 2;
  local_3c = 3;
  local_b0.Value = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_98 = &___7FResourceArrayUploadArrayView__6B_;
  local_d8._32_8_ = &local_98;
  local_d8._24_8_ = L"SlateStencilClipVertexBuffer";
  local_d8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_d8._8_8_ = 0x10;
  local_70 = L"SlateStencilClipVertexBuffer";
  local_d8._16_4_ = 0x4001;
  uStack_78 = CONCAT44(local_d8._20_4_,0x4001);
  FStack_a8.ComparisonIndex.Value = 0;
  FStack_a8.Number = 0;
  uStack_ac = 2;
  local_80 = 0x10;
  local_a0 = 0;
  local_60 = CONCAT44(2,local_b0.Value);
  uStack_58 = 0;
  local_88 = 0x10;
  local_50 = 0;
  local_90 = &local_48;
  pppuStack_68 = (undefined ***)local_d8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_d8);
  local_98 = &___7FResourceArrayUploadInterface__6B_;
  if (puVar1 != local_d8) {
    this_00 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_d8._0_8_;
    local_d8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145fd2fbd;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_d8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d8._0_8_);
  }
LAB_145fd2fbd:
  if ((*(longlong *)puVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexBufferRHI)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ReleaseRHI @ 145fd3010

void __thiscall FSlateStencilClipVertexBuffer::ReleaseRHI(FSlateStencilClipVertexBuffer *this)

{
  FRHIResource *this_00;
  
  this_00 = *(FRHIResource **)&this->field_0x20;
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x20 = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// GetFriendlyName @ 145fd3030

FString * __thiscall
FSlateStencilClipVertexBuffer::GetFriendlyName
          (FSlateStencilClipVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SlateElementVertices");
  return __return_storage_ptr__;
}

