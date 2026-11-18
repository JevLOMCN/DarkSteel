// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145ddb100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FUnitCubeAABBVertexBuffer::InitRHI(FUnitCubeAABBVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  undefined1 *puVar1;
  undefined1 local_b8 [40];
  FNameEntryId local_90;
  uint uStack_8c;
  FName FStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined ***pppuStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_68 = 0x3f000000;
  local_64 = 0x3f000000;
  local_78 = ___xmm_3f000000bf000000bf000000bf000000;
  uStack_70 = _UNK_151158358;
  local_90.Value = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_60 = &___7FResourceArrayUploadArrayView__6B_;
  local_b8._32_8_ = &local_60;
  local_b8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_b8._24_8_ = L"FUnitCubeAABBVertexBuffer";
  local_b8._8_8_ = 0x18;
  local_b8._16_4_ = 0x4001;
  uStack_40 = CONCAT44(local_b8._20_4_,0x4001);
  FStack_88.ComparisonIndex.Value = 0;
  FStack_88.Number = 0;
  local_38 = L"FUnitCubeAABBVertexBuffer";
  uStack_8c = 2;
  local_48 = 0x18;
  local_80 = 0;
  local_28 = CONCAT44(2,local_90.Value);
  local_50 = 0x18;
  uStack_20 = 0;
  local_18 = 0;
  local_58 = &local_78;
  pppuStack_30 = (undefined ***)local_b8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_b8);
  puVar1 = &this->field_0x20;
  if (puVar1 != local_b8) {
    this_00 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_b8._0_8_;
    local_b8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._0_8_);
  }
  return;
}

