// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf7ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBlackFloat4VertexBuffer::InitRHI(FBlackFloat4VertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FRHIResource *pFVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  TRefCountPtr<FRHIUnorderedAccessView> TVar5;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_c8;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  wchar_t local_68 [12];
  undefined8 uStack_50;
  wchar_t *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_c8.InitialState = SRVCompute;
  local_c8.InitAction = Default;
  local_c8.ClassName.ComparisonIndex.Value = 0x4109;
  local_68[0] = L'\0';
  local_68[1] = L'\0';
  local_68[2] = L'\0';
  local_68[3] = L'\0';
  local_68[4] = L'\0';
  local_68[5] = L'\0';
  local_68[6] = L'\0';
  local_68[7] = L'\0';
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  local_c8.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_84 = 0;
  uStack_80 = 0;
  local_c8.DebugName = local_68;
  uStack_50 = CONCAT44(local_c8.ClassName.Number,0x4109);
  local_c8.OwnerName = (FName)0x1511295f0;
  local_88 = 0x70;
  local_68[8] = L'\x10';
  local_68[9] = L'\0';
  local_68[10] = L'\0';
  local_68[0xb] = L'\0';
  local_c8._padding_ = (longlong)&___7FResourceArrayUploadArrayView__6B_;
  plStack_40 = &local_c8._padding_;
  uStack_30 = 0;
  uStack_74 = 0;
  local_48 = L"BlackFloat4VertexBuffer";
  local_c8.InitialData._0_4_ = 0x10;
  local_28 = 0;
  local_38 = 0x200000070;
  FRHICommandListBase::CreateBuffer(param_1,&local_c8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_c8) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_c8._padding_;
    local_c8._padding_ = 0;
    if (pFVar3 == (FRHIResource *)0x0) goto LAB_145cf7fdb;
    FRHIResource::Release(pFVar3);
  }
  if ((FRHIResource *)local_c8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8._padding_);
  }
LAB_145cf7fdb:
  local_c8.DebugName = (wchar_t *)0x0;
  local_c8._padding_ = 0x10100;
  TVar4 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar2 = &this->field_0x28;
  if ((FRHIShaderResourceView *)puVar2 != TVar4.Reference) {
    pFVar3 = *(FRHIResource **)puVar2;
    *(undefined8 *)puVar2 = *(undefined8 *)TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  local_c8.DebugName = (wchar_t *)0x0;
  local_c8._padding_ = 0x10101;
  TVar5 = FRHICommandListBase::CreateUnorderedAccessView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x30;
  if ((FRHIUnorderedAccessView *)puVar1 != TVar5.Reference) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

