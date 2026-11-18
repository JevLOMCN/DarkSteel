// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf9870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FWhiteVertexBuffer::InitRHI(FWhiteVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_c8;
  undefined8 uStack_90;
  ERHIAccess local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  ERHIAccess local_58;
  ERHIBufferInitAction EStack_54;
  undefined8 uStack_50;
  FName local_48;
  longlong *plStack_40;
  ERHIAccess local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_c8.InitialState = SRVCompute;
  local_c8.InitAction = Default;
  uStack_90 = 0;
  local_c8.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_c8.OwnerName = (FName)0x151129ce0;
  local_74 = 0;
  local_c8.ClassName.ComparisonIndex.Value = 0x4101;
  local_88 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_c8.DebugName = (wchar_t *)&local_68;
  local_68 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_60 = _UNK_15076b1f8;
  uStack_50 = CONCAT44(local_c8.ClassName.Number,local_c8.ClassName.ComparisonIndex.Value);
  local_c8._padding_ = (longlong)&___7FResourceArrayUploadArrayView__6B_;
  plStack_40 = &local_c8._padding_;
  local_48 = local_c8.OwnerName;
  local_28 = CONCAT44(local_74,uStack_78);
  local_58 = local_c8.InitialState;
  EStack_54 = local_c8.InitAction;
  local_c8.InitialData._0_4_ = 0x10;
  uStack_30 = CONCAT44(uStack_7c,uStack_80);
  _local_38 = CONCAT44(2,local_88);
  FRHICommandListBase::CreateBuffer(param_1,&local_c8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_c8) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_c8._padding_;
    local_c8._padding_ = 0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145cf9978;
    FRHIResource::Release(pFVar2);
  }
  if ((FRHIResource *)local_c8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8._padding_);
  }
LAB_145cf9978:
  local_c8.DebugName = (wchar_t *)0x0;
  local_c8._padding_ = 0x10100;
  TVar3 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x28;
  if ((FRHIShaderResourceView *)puVar1 != TVar3.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar3.Reference;
    *(undefined8 *)TVar3.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

