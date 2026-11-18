// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDBufferTexturesDesc @ 1447f27b0

FDBufferTexturesDesc * __thiscall
FDBufferTexturesDesc::FDBufferTexturesDesc(FDBufferTexturesDesc *this)

{
  uint uVar1;
  byte bVar2;
  
  *(undefined8 *)&this->DBufferADesc = 0;
  *(undefined8 *)&(this->DBufferADesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferADesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferADesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferADesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferADesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferADesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferADesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferADesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferADesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferADesc).field_0x40 = 0;
  *(int *)&(this->DBufferADesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferADesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferADesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferBDesc = 0;
  *(undefined8 *)&(this->DBufferBDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferBDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferBDesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferBDesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferBDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferBDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferBDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferBDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferBDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferBDesc).field_0x40 = 0;
  *(int *)&(this->DBufferBDesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferBDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferBDesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferCDesc = 0;
  *(undefined8 *)&(this->DBufferCDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferCDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferCDesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferCDesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferCDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferCDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferCDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferCDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferCDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferCDesc).field_0x40 = 0;
  *(int *)&(this->DBufferCDesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferCDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferCDesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferATexArrayDesc = 0;
  *(undefined8 *)&(this->DBufferATexArrayDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferATexArrayDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferATexArrayDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferATexArrayDesc).field_0x40 = 0;
  *(int *)&(this->DBufferATexArrayDesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferATexArrayDesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferBTexArrayDesc = 0;
  *(undefined8 *)&(this->DBufferBTexArrayDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferBTexArrayDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferBTexArrayDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferBTexArrayDesc).field_0x40 = 0;
  *(int *)&(this->DBufferBTexArrayDesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferBTexArrayDesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferCTexArrayDesc = 0;
  *(undefined8 *)&(this->DBufferCTexArrayDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferCTexArrayDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x20 = 0;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferCTexArrayDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferCTexArrayDesc).field_0x40 = 0;
  *(int *)&(this->DBufferCTexArrayDesc).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferCTexArrayDesc).field_0x4c = 1;
  *(undefined8 *)&this->DBufferMaskDesc = 0;
  *(undefined8 *)&(this->DBufferMaskDesc).field_0x8 = 1;
  *(undefined8 *)&(this->DBufferMaskDesc).field_0x10 = 0;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x18 = 0;
  bVar2 = (byte)GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x20 = 0;
  *(int *)&(this->DBufferMaskDesc).field_0x1c = (1 << (bVar2 & 0x1f)) + -1;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x24 = 1;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x28 = 1;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x30 = 0x101;
  *(undefined2 *)&(this->DBufferMaskDesc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DBufferMaskDesc).field_0x40 = 0;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x48 = 0;
  *(undefined4 *)&(this->DBufferMaskDesc).field_0x4c = 1;
  return this;
}

