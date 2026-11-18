// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12Payload @ 145a44080

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Payload * __thiscall FD3D12Payload::FD3D12Payload(FD3D12Payload *this,FD3D12Queue *param_1)

{
  undefined4 uVar1;
  FQueue FVar2;
  undefined4 extraout_var;
  
  *(undefined ***)this = &___7FD3D12PayloadBase__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x1a8 = 0;
  *(FD3D12Queue **)&this->field_0x8 = param_1;
  *(undefined4 *)&this->field_0x1b0 = 0;
  *(undefined4 *)&this->field_0x1b4 = 0x18;
  *(undefined8 *)&this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined8 *)&this->field_0x1d0 = 0;
  *(undefined2 *)&this->field_0x1d8 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined8 *)&this->field_0x220 = 0;
  *(undefined8 *)&this->field_0x228 = 0;
  *(undefined8 *)&this->field_0x230 = 0;
  *(undefined8 *)&this->field_0x238 = 0;
  *(undefined8 *)&this->field_0x240 = 0;
  *(undefined8 *)&this->field_0x248 = 0;
  this->field_0x258 = 0;
  this->field_0x268 = 0;
  *(undefined8 *)&this->field_0x270 = 0;
  *(undefined8 *)&this->field_0x278 = 0;
  *(undefined8 *)&this->field_0x280 = 0;
  *(undefined8 *)&this->field_0x288 = 0;
  *(undefined8 *)&this->field_0x290 = 0;
  *(undefined8 *)&this->field_0x298 = 0;
  *(undefined8 *)&this->field_0x2a0 = 0;
  *(undefined8 *)&this->field_0x2a8 = 0;
  *(undefined8 *)&this->field_0x2b0 = 0;
  *(undefined8 *)&this->field_0x2b8 = 0;
  *(undefined8 *)&this->field_0x2d0 = 0;
  *(undefined4 *)&this->field_0x2d8 = 0;
  *(undefined4 *)&this->field_0x2dc = 0x80;
  *(undefined4 *)&this->field_0x2e0 = 0xffffffff;
  *(undefined4 *)&this->field_0x2e4 = 0;
  *(undefined8 *)&this->field_0x2f0 = 0;
  *(undefined4 *)&this->field_0x2f8 = 0;
  *(undefined8 *)&this->field_0x300 = 0;
  *(undefined8 *)&this->field_0x308 = 0;
  *(undefined8 *)&this->field_0x310 = 0;
  *(undefined8 *)&this->field_0x318 = 0;
  FVar2 = FD3D12Queue::GetProfilerQueue(param_1);
  uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  *(undefined8 *)&this->field_0x320 = 0;
  *(undefined8 *)&this->field_0x328 = 0;
  *(undefined4 *)&this->field_0x330 = uVar1;
  *(undefined ***)this = &___7FD3D12Payload__6B_;
  this->field_0x358 = 0;
  return this;
}

