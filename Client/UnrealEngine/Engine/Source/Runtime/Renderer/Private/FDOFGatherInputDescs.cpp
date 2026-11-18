// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDOFGatherInputDescs @ 145127280

FDOFGatherInputDescs * __thiscall
_anon_85C081EE::FDOFGatherInputDescs::FDOFGatherInputDescs(FDOFGatherInputDescs *this)

{
  uint uVar1;
  byte bVar2;
  
  *(undefined8 *)&this->SceneColor = 0;
  *(undefined8 *)&(this->SceneColor).field_0x8 = 1;
  *(undefined8 *)&(this->SceneColor).field_0x10 = 0;
  *(undefined4 *)&(this->SceneColor).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->SceneColor).field_0x20 = 0;
  *(undefined4 *)&(this->SceneColor).field_0x24 = 1;
  *(undefined4 *)&(this->SceneColor).field_0x28 = 1;
  *(undefined4 *)&(this->SceneColor).field_0x2c = 0x10001;
  *(undefined4 *)&(this->SceneColor).field_0x30 = 0x101;
  *(undefined2 *)&(this->SceneColor).field_0x34 = 0xff00;
  *(undefined8 *)&(this->SceneColor).field_0x40 = 0;
  *(int *)&(this->SceneColor).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->SceneColor).field_0x48 = 0;
  *(undefined4 *)&(this->SceneColor).field_0x4c = 1;
  *(undefined8 *)&this->SeparateCoc = 0;
  *(undefined8 *)&(this->SeparateCoc).field_0x8 = 1;
  *(undefined8 *)&(this->SeparateCoc).field_0x10 = 0;
  *(undefined4 *)&(this->SeparateCoc).field_0x18 = 0;
  bVar2 = (byte)GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->SeparateCoc).field_0x20 = 0;
  *(int *)&(this->SeparateCoc).field_0x1c = (1 << (bVar2 & 0x1f)) + -1;
  *(undefined4 *)&(this->SeparateCoc).field_0x24 = 1;
  *(undefined4 *)&(this->SeparateCoc).field_0x28 = 1;
  *(undefined4 *)&(this->SeparateCoc).field_0x2c = 0x10001;
  *(undefined4 *)&(this->SeparateCoc).field_0x30 = 0x101;
  *(undefined2 *)&(this->SeparateCoc).field_0x34 = 0xff00;
  *(undefined8 *)&(this->SeparateCoc).field_0x40 = 0;
  *(undefined4 *)&(this->SeparateCoc).field_0x48 = 0;
  *(undefined4 *)&(this->SeparateCoc).field_0x4c = 1;
  return this;
}

