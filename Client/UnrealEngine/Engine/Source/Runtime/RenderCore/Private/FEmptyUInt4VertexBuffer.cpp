// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf77e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FEmptyUInt4VertexBuffer::InitRHI(FEmptyUInt4VertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FRHIResource *pFVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  TRefCountPtr<FRHIUnorderedAccessView> TVar5;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_b8;
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
  FName local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  longlong *plStack_38;
  ERHIAccess local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_b8.OwnerName.ComparisonIndex.Value = 0x10;
  local_b8.OwnerName.Number = 0;
  uStack_70 = 0;
  iStack_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_78 = L"EmptyUInt4VertexBuffer";
  uStack_54 = 0;
  uStack_80 = 0x4109;
  local_68 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess|Static,false);
  uStack_48 = CONCAT44(iStack_7c,uStack_80);
  local_b8.DebugName = (wchar_t *)&local_b8.InitialState;
  local_b8._padding_ = (longlong)&___7FResourceArrayUploadArrayView__6B_;
  local_50 = local_b8.OwnerName;
  plStack_38 = &local_b8._padding_;
  uStack_28 = CONCAT44(uStack_5c,uStack_60);
  local_40 = local_78;
  local_b8.InitialState = None;
  local_b8.InitAction = Default;
  local_20 = CONCAT44(uStack_54,uStack_58);
  _local_30 = CONCAT44(2,local_68);
  local_b8.ClassName.ComparisonIndex.Value = 0;
  local_b8.ClassName.Number = 0;
  local_b8.InitialData._0_4_ = 0x10;
  FRHICommandListBase::CreateBuffer(param_1,&local_b8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_b8) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_b8._padding_;
    local_b8._padding_ = 0;
    if (pFVar3 == (FRHIResource *)0x0) goto LAB_145cf78e4;
    FRHIResource::Release(pFVar3);
  }
  if ((FRHIResource *)local_b8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._padding_);
  }
LAB_145cf78e4:
  local_b8.DebugName = (wchar_t *)0x0;
  local_b8._padding_ = 0x13000;
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
  local_b8.DebugName = (wchar_t *)0x0;
  local_b8._padding_ = 0x13001;
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

