// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cfd790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTwoTrianglesIndexBuffer::InitRHI(FTwoTrianglesIndexBuffer *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  undefined1 *puVar1;
  undefined1 local_98 [40];
  FNameEntryId local_70;
  uint uStack_6c;
  FName FStack_68;
  undefined8 local_60;
  undefined **local_58;
  ushort *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  wchar_t *local_30;
  undefined ***pppuStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_70.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_58 = &___7FResourceArrayUploadArrayView__6B_;
  local_98._32_8_ = &local_58;
  local_50 = GTwoTrianglesIndexBufferData;
  local_98._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_98._24_8_ = L"FTwoTrianglesIndexBuffer";
  local_98._8_4_ = 0xc;
  local_98._12_4_ = 2;
  local_30 = L"FTwoTrianglesIndexBuffer";
  local_98._16_4_ = 0x8001;
  local_40 = 0x20000000c;
  uStack_38 = CONCAT44(local_98._20_4_,0x8001);
  FStack_68.ComparisonIndex.Value = 0;
  FStack_68.Number = 0;
  uStack_6c = 2;
  local_60 = 0;
  local_20 = CONCAT44(2,local_70.Value);
  local_48 = 0xc;
  uStack_18 = 0;
  local_10 = 0;
  pppuStack_28 = (undefined ***)local_98._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_98);
  puVar1 = &this->field_0x20;
  if (puVar1 != local_98) {
    this_00 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_98._0_8_;
    local_98._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_98._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._0_8_);
  }
  return;
}

