// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf79e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyStructuredBuffer::InitRHI(FEmptyStructuredBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FRHIResource *pFVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  TRefCountPtr<FRHIUnorderedAccessView> TVar6;
  FRHIResource *local_res8;
  FInitializer local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  ERHIAccess local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_88 = 0x10;
  uStack_84 = 4;
  iStack_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_70 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_78 = L"EmptyStructuredBuffer";
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_80 = 0x10109;
  local_68 = RHIGetDefaultResourceState
                       (StructuredBuffer|ShaderResource|UnorderedAccess|Static,false);
  local_50 = CONCAT44(uStack_84,local_88);
  uStack_48 = CONCAT44(iStack_7c,uStack_80);
  local_30 = CONCAT44(uStack_64,local_68);
  uStack_28 = CONCAT44(uStack_5c,uStack_60);
  local_40 = local_78;
  uStack_38 = uStack_70;
  local_20 = CONCAT44(uStack_54,uStack_58);
  TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar4.Reference) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_98,*(FRHIBuffer **)puVar1);
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar2 = &this->field_0x28;
  if ((FRHIShaderResourceView *)puVar2 != TVar5.Reference) {
    pFVar3 = *(FRHIResource **)puVar2;
    *(undefined8 *)puVar2 = *(undefined8 *)TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  local_98._8_8_ = 0;
  local_98._0_8_ = 1;
  FRHIViewDesc::FBufferUAV::FInitializer::SetTypeFromBuffer
            ((FInitializer *)&local_98,*(FRHIBuffer **)puVar1);
  TVar6 = FRHICommandListBase::CreateUnorderedAccessView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x30;
  if ((FRHIUnorderedAccessView *)puVar1 != TVar6.Reference) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

