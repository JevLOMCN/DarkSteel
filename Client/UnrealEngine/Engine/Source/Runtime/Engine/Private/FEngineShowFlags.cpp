// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// operator= @ 147c31c20

FEngineShowFlags * __thiscall
FEngineShowFlags::operator=(FEngineShowFlags *this,FEngineShowFlags *param_1)

{
  ForElementType<unsigned_int> FVar1;
  uint uVar2;
  
  uVar2 = (this->PostProcessing ^ param_1->PostProcessing) & 1 ^ *(uint *)this;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 2 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 4 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 8 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x10 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x20 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x40 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x80 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x100 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x200 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x400 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x800 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x1000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x2000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x4000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x8000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x10000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x20000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x40000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x80000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x100000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x200000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x400000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x800000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x1000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x2000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x4000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x8000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x10000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x20000000 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x40000000 ^ uVar2;
  *(uint *)this = uVar2;
  *(uint *)this = (uVar2 ^ *(uint *)param_1) & 0x7fffffff ^ *(uint *)param_1;
  uVar2 = (this->DirectLighting ^ param_1->DirectLighting) & 1 ^ *(uint *)&this->field_0x4;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 2 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 4 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 8 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x100 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x200 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x400 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x800 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0x4 = uVar2;
  *(uint *)&this->field_0x4 =
       (uVar2 ^ *(uint *)&param_1->field_0x4) & 0x7fffffff ^ *(uint *)&param_1->field_0x4;
  uVar2 = (this->Specular ^ param_1->Specular) & 1 ^ *(uint *)&this->field_0x8;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 2 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 4 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 8 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x100 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x200 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x400 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x800 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0x8 = uVar2;
  *(uint *)&this->field_0x8 =
       (uVar2 ^ *(uint *)&param_1->field_0x8) & 0x7fffffff ^ *(uint *)&param_1->field_0x8;
  uVar2 = (this->LightComplexity ^ param_1->LightComplexity) & 1 ^ *(uint *)&this->field_0xc;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 2 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 4 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 8 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x10 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x20 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x40 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x80 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x100 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x200 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x400 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x800 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0xc = uVar2;
  *(uint *)&this->field_0xc =
       (uVar2 ^ *(uint *)&param_1->field_0xc) & 0x7fffffff ^ *(uint *)&param_1->field_0xc;
  uVar2 = (this->ShadowFrustums ^ param_1->ShadowFrustums) & 1 ^ *(uint *)&this->field_0x10;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 2 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 4 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 8 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x100 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x200 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x400 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x800 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x10) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0x10 = uVar2;
  *(uint *)&this->field_0x10 =
       (*(uint *)&param_1->field_0x10 ^ uVar2) & 0x7fffffff ^ *(uint *)&param_1->field_0x10;
  uVar2 = (this->VolumeLightingSamples ^ param_1->VolumeLightingSamples) & 1 ^
          *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 2 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 4 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 8 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x100 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x200 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x400 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x800 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0x14 = uVar2;
  *(uint *)&this->field_0x14 =
       (uVar2 ^ *(uint *)&param_1->field_0x14) & 0x7fffffff ^ *(uint *)&param_1->field_0x14;
  uVar2 = (this->PathTracing ^ param_1->PathTracing) & 1 ^ *(uint *)&this->field_0x18;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x100 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x200 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x400 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x800 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x1000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x80000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x100000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x200000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x8000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x10000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x20000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x40000000 ^ uVar2;
  *(uint *)&this->field_0x18 = uVar2;
  *(uint *)&this->field_0x18 =
       (uVar2 ^ *(uint *)&param_1->field_0x18) & 0x7fffffff ^ *(uint *)&param_1->field_0x18;
  uVar2 = (this->StereoMotionVectors ^ param_1->StereoMotionVectors) & 1 ^
          *(uint *)&this->field_0x1c;
  *(uint *)&this->field_0x1c = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x1c) & 2 ^ uVar2;
  *(uint *)&this->field_0x1c = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x1c) & 4 ^ uVar2;
  *(uint *)&this->field_0x1c = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x1c) & 8 ^ uVar2;
  *(uint *)&this->field_0x1c = uVar2;
  *(uint *)&this->field_0x1c = (uVar2 ^ *(uint *)&param_1->field_0x1c) & 0x10 ^ uVar2;
  if (&this->CustomShowFlags != &param_1->CustomShowFlags) {
    if ((param_1->CustomShowFlags).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(&this->CustomShowFlags,&param_1->CustomShowFlags,0x10);
    }
    FVar1 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->CustomShowFlags).AllocatorInstance.SecondaryData =
         (param_1->CustomShowFlags).AllocatorInstance.SecondaryData;
    (param_1->CustomShowFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->CustomShowFlags).NumBits = (param_1->CustomShowFlags).NumBits;
    (this->CustomShowFlags).MaxBits = (param_1->CustomShowFlags).MaxBits;
    (param_1->CustomShowFlags).NumBits = 0;
    (param_1->CustomShowFlags).MaxBits = 0;
  }
  return this;
}

// AddNameByIndex @ 1485a8180

void __cdecl FEngineShowFlags::AddNameByIndex(uint param_1,FString *param_2)

{
  int iVar1;
  FString local_18;
  
  switch(param_1) {
  case 0:
    ::FString::AppendChars(param_2,"PostProcessing",0xe);
    return;
  case 1:
    ::FString::AppendChars(param_2,"Bloom",5);
    return;
  case 2:
    ::FString::AppendChars(param_2,"LocalExposure",0xd);
    return;
  case 3:
    ::FString::AppendChars(param_2,"Tonemapper",10);
    return;
  case 4:
    ::FString::AppendChars(param_2,"AntiAliasing",0xc);
    return;
  case 5:
    ::FString::AppendChars(param_2,"TemporalAA",10);
    return;
  case 6:
    ::FString::AppendChars(param_2,"AmbientCubemap",0xe);
    return;
  case 7:
    ::FString::AppendChars(param_2,"EyeAdaptation",0xd);
    return;
  case 8:
    ::FString::AppendChars(param_2,"VisualizeHDR",0xc);
    return;
  case 9:
    ::FString::AppendChars(param_2,"VisualizeSkyLightIlluminance",0x1c);
    return;
  case 10:
    ::FString::AppendChars(param_2,"VisualizeLocalFogVolumes",0x18);
    return;
  case 0xb:
    ::FString::AppendChars(param_2,"VisualizeLocalExposure",0x16);
    return;
  case 0xc:
    ::FString::AppendChars(param_2,"LensFlares",10);
    return;
  case 0xd:
    ::FString::AppendChars(param_2,"LensDistortion",0xe);
    return;
  case 0xe:
    ::FString::AppendChars(param_2,"GlobalIllumination",0x12);
    return;
  case 0xf:
    ::FString::AppendChars(param_2,"Vignette",8);
    return;
  case 0x10:
    ::FString::AppendChars(param_2,"Grain",5);
    return;
  case 0x11:
    ::FString::AppendChars(param_2,"AmbientOcclusion",0x10);
    return;
  case 0x12:
    ::FString::AppendChars(param_2,"Decals",6);
    return;
  case 0x13:
    ::FString::AppendChars(param_2,"CameraImperfections",0x13);
    return;
  case 0x14:
    ::FString::AppendChars(param_2,"OnScreenDebug",0xd);
    return;
  case 0x15:
    ::FString::AppendChars(param_2,"OverrideDiffuseAndSpecular",0x1a);
    return;
  case 0x16:
    ::FString::AppendChars(param_2,"LightingOnlyOverride",0x14);
    return;
  case 0x17:
    ::FString::AppendChars(param_2,"ReflectionOverride",0x12);
    return;
  case 0x18:
    ::FString::AppendChars(param_2,"MaterialNormal",0xe);
    return;
  case 0x19:
    ::FString::AppendChars(param_2,"MaterialAmbientOcclusion",0x18);
    return;
  case 0x1a:
    ::FString::AppendChars(param_2,"VisualizeBuffer",0xf);
    return;
  case 0x1b:
    ::FString::AppendChars(param_2,"VisualizeNanite",0xf);
    return;
  case 0x1c:
    ::FString::AppendChars(param_2,"VisualizeLumen",0xe);
    return;
  case 0x1d:
    ::FString::AppendChars(param_2,"VisualizeSubstrate",0x12);
    return;
  case 0x1e:
    ::FString::AppendChars(param_2,"VisualizeGroom",0xe);
    return;
  case 0x1f:
    ::FString::AppendChars(param_2,"VisualizeVirtualShadowMap",0x19);
    return;
  case 0x20:
    ::FString::AppendChars(param_2,"DirectLighting",0xe);
    return;
  case 0x21:
    ::FString::AppendChars(param_2,"DirectionalLights",0x11);
    return;
  case 0x22:
    ::FString::AppendChars(param_2,"PointLights",0xb);
    return;
  case 0x23:
    ::FString::AppendChars(param_2,"SpotLights",10);
    return;
  case 0x24:
    ::FString::AppendChars(param_2,"RectLights",10);
    return;
  case 0x25:
    ::FString::AppendChars(param_2,"ColorGrading",0xc);
    return;
  case 0x26:
    ::FString::AppendChars(param_2,"VectorFields",0xc);
    return;
  case 0x27:
    ::FString::AppendChars(param_2,"DepthOfField",0xc);
    return;
  case 0x28:
    ::FString::AppendChars(param_2,"GBufferHints",0xc);
    return;
  case 0x29:
    ::FString::AppendChars(param_2,"MotionBlur",10);
    return;
  case 0x2a:
    ::FString::AppendChars(param_2,"CompositeDebugPrimitives",0x18);
    return;
  case 0x2b:
    ::FString::AppendChars(param_2,"CompositeEditorPrimitives",0x19);
    return;
  case 0x2c:
    ::FString::AppendChars(param_2,"OpaqueCompositeEditorPrimitives",0x1f);
    return;
  case 0x2d:
    ::FString::AppendChars(param_2,"TestImage",9);
    return;
  case 0x2e:
    ::FString::AppendChars(param_2,"VisualizeDOF",0xc);
    return;
  case 0x2f:
    ::FString::AppendChars(param_2,"VertexColors",0xc);
    return;
  case 0x30:
    ::FString::AppendChars(param_2,"PhysicalMaterialMasks",0x15);
    return;
  case 0x31:
    ::FString::AppendChars(param_2,"Refraction",10);
    return;
  case 0x32:
    ::FString::AppendChars(param_2,"CameraInterpolation",0x13);
    return;
  case 0x33:
    ::FString::AppendChars(param_2,"SceneColorFringe",0x10);
    return;
  case 0x34:
    ::FString::AppendChars(param_2,"ToneCurve",9);
    return;
  case 0x35:
    ::FString::AppendChars(param_2,"SeparateTranslucency",0x14);
    return;
  case 0x36:
    ::FString::AppendChars(param_2,"ScreenPercentage",0x10);
    return;
  case 0x37:
    ::FString::AppendChars(param_2,"VisualizeMotionBlur",0x13);
    return;
  case 0x38:
    ::FString::AppendChars(param_2,"VisualizeMotionVectors",0x16);
    return;
  case 0x39:
    ::FString::AppendChars(param_2,"VisualizeReprojection",0x15);
    return;
  case 0x3a:
    ::FString::AppendChars(param_2,"VisualizeTemporalUpscaler",0x19);
    return;
  case 0x3b:
    ::FString::AppendChars(param_2,"VisualizeTSR",0xc);
    return;
  case 0x3c:
    ::FString::AppendChars(param_2,"MegaLights",10);
    return;
  case 0x3d:
    ::FString::AppendChars(param_2,"ReflectionEnvironment",0x15);
    return;
  case 0x3e:
    ::FString::AppendChars(param_2,"VisualizeOutOfBoundsPixels",0x1a);
    return;
  case 0x3f:
    ::FString::AppendChars(param_2,"Diffuse",7);
    return;
  case 0x40:
    ::FString::AppendChars(param_2,"Specular",8);
    return;
  case 0x41:
    ::FString::AppendChars(param_2,"SelectionOutline",0x10);
    return;
  case 0x42:
    ::FString::AppendChars(param_2,"ScreenSpaceReflections",0x16);
    return;
  case 0x43:
    ::FString::AppendChars(param_2,"LumenReflections",0x10);
    return;
  case 0x44:
    ::FString::AppendChars(param_2,"ContactShadows",0xe);
    return;
  case 0x45:
    ::FString::AppendChars(param_2,"RayTracedDistanceFieldShadows",0x1d);
    return;
  case 0x46:
    ::FString::AppendChars(param_2,"CapsuleShadows",0xe);
    return;
  case 0x47:
    ::FString::AppendChars(param_2,"SubsurfaceScattering",0x14);
    return;
  case 0x48:
    ::FString::AppendChars(param_2,"VisualizeSSS",0xc);
    return;
  case 0x49:
    ::FString::AppendChars(param_2,"VolumetricLightmap",0x12);
    return;
  case 0x4a:
    ::FString::AppendChars(param_2,"IndirectLightingCache",0x15);
    return;
  case 0x4b:
    ::FString::AppendChars(param_2,"DebugAI",7);
    return;
  case 0x4c:
    ::FString::AppendChars(param_2,"VisLog",6);
    return;
  case 0x4d:
    ::FString::AppendChars(param_2,"Navigation",10);
    return;
  case 0x4e:
    ::FString::AppendChars(param_2,"GameplayDebug",0xd);
    return;
  case 0x4f:
    ::FString::AppendChars(param_2,"TexturedLightProfiles",0x15);
    return;
  case 0x50:
    ::FString::AppendChars(param_2,"LightFunctions",0xe);
    return;
  case 0x51:
    ::FString::AppendChars(param_2,"InstancedStaticMeshes",0x15);
    return;
  case 0x52:
    ::FString::AppendChars(param_2,"InstancedFoliage",0x10);
    return;
  case 0x53:
    ::FString::AppendChars(param_2,"HISMCOcclusionBounds",0x14);
    return;
  case 0x54:
    ::FString::AppendChars(param_2,"HISMCClusterTree",0x10);
    return;
  case 0x55:
    ::FString::AppendChars(param_2,"VisualizeInstanceUpdates",0x18);
    return;
  case 0x56:
    ::FString::AppendChars(param_2,"InstancedGrass",0xe);
    return;
  case 0x57:
    ::FString::AppendChars(param_2,"DynamicShadows",0xe);
    return;
  case 0x58:
    ::FString::AppendChars(param_2,"Particles",9);
    return;
  case 0x59:
    ::FString::AppendChars(param_2,"Niagara",7);
    return;
  case 0x5a:
    ::FString::AppendChars(param_2,"HeterogeneousVolumes",0x14);
    return;
  case 0x5b:
    ::FString::AppendChars(param_2,"SkeletalMeshes",0xe);
    return;
  case 0x5c:
    ::FString::AppendChars(param_2,"BuilderBrush",0xc);
    return;
  case 0x5d:
    ::FString::AppendChars(param_2,"Translucency",0xc);
    return;
  case 0x5e:
    ::FString::AppendChars(param_2,"BillboardSprites",0x10);
    return;
  case 0x5f:
    ::FString::AppendChars(param_2,"LOD",3);
    return;
  case 0x60:
    ::FString::AppendChars(param_2,"LightComplexity",0xf);
    return;
  case 0x61:
    ::FString::AppendChars(param_2,"ShaderComplexity",0x10);
    return;
  case 0x62:
    ::FString::AppendChars(param_2,"StationaryLightOverlap",0x16);
    return;
  case 99:
    ::FString::AppendChars(param_2,"LightMapDensity",0xf);
    return;
  case 100:
    ::FString::AppendChars(param_2,"StreamingBounds",0xf);
    return;
  case 0x65:
    ::FString::AppendChars(param_2,"Constraints",0xb);
    return;
  case 0x66:
    ::FString::AppendChars(param_2,"MassProperties",0xe);
    return;
  case 0x67:
    ::FString::AppendChars(param_2,"CameraFrustums",0xe);
    return;
  case 0x68:
    ::FString::AppendChars(param_2,"AudioRadius",0xb);
    return;
  case 0x69:
    ::FString::AppendChars(param_2,"ForceFeedbackRadius",0x13);
    return;
  case 0x6a:
    ::FString::AppendChars(param_2,"BSPSplit",8);
    return;
  case 0x6b:
    ::FString::AppendChars(param_2,"Brushes",7);
    return;
  case 0x6c:
    ::FString::AppendChars(param_2,"Lighting",8);
    return;
  case 0x6d:
    ::FString::AppendChars(param_2,"UnlitRichView",0xd);
    return;
  case 0x6e:
    ::FString::AppendChars(param_2,"UnlitViewmode",0xd);
    return;
  case 0x6f:
    ::FString::AppendChars(param_2,"DeferredLighting",0x10);
    return;
  case 0x70:
    ::FString::AppendChars(param_2,"Editor",6);
    return;
  case 0x71:
    ::FString::AppendChars(param_2,"BSPTriangles",0xc);
    return;
  case 0x72:
    ::FString::AppendChars(param_2,"LargeVertices",0xd);
    return;
  case 0x73:
    ::FString::AppendChars(param_2,"Grid",4);
    return;
  case 0x74:
    ::FString::AppendChars(param_2,"Snap",4);
    return;
  case 0x75:
    ::FString::AppendChars(param_2,"MeshEdges",9);
    return;
  case 0x76:
    ::FString::AppendChars(param_2,"Cover",5);
    return;
  case 0x77:
    ::FString::AppendChars(param_2,"Splines",7);
    return;
  case 0x78:
    ::FString::AppendChars(param_2,"Selection",9);
    return;
  case 0x79:
    ::FString::AppendChars(param_2,"VisualizeLevelInstanceEditing",0x1d);
    return;
  case 0x7a:
    ::FString::AppendChars(param_2,"EditingLevelInstance",0x14);
    return;
  case 0x7b:
    ::FString::AppendChars(param_2,"ModeWidgets",0xb);
    return;
  case 0x7c:
    ::FString::AppendChars(param_2,"Bounds",6);
    return;
  case 0x7d:
    ::FString::AppendChars(param_2,"HitProxies",10);
    return;
  case 0x7e:
    ::FString::AppendChars(param_2,"LightInfluences",0xf);
    return;
  case 0x7f:
    ::FString::AppendChars(param_2,"Pivot",5);
    return;
  case 0x80:
    ::FString::AppendChars(param_2,"ShadowFrustums",0xe);
    return;
  case 0x81:
    ::FString::AppendChars(param_2,"Wireframe",9);
    return;
  case 0x82:
    ::FString::AppendChars(param_2,"Materials",9);
    return;
  case 0x83:
    ::FString::AppendChars(param_2,"StaticMeshes",0xc);
    return;
  case 0x84:
    ::FString::AppendChars(param_2,"Landscape",9);
    return;
  case 0x85:
    ::FString::AppendChars(param_2,"LightRadius",0xb);
    return;
  case 0x86:
    ::FString::AppendChars(param_2,"Fog",3);
    return;
  case 0x87:
    ::FString::AppendChars(param_2,"Volumes",7);
    return;
  case 0x88:
    ::FString::AppendChars(param_2,"Game",4);
    return;
  case 0x89:
    ::FString::AppendChars(param_2,"ActorColoration",0xf);
    return;
  case 0x8a:
    ::FString::AppendChars(param_2,"BSP",3);
    return;
  case 0x8b:
    ::FString::AppendChars(param_2,"Collision",9);
    return;
  case 0x8c:
    ::FString::AppendChars(param_2,"CollisionVisibility",0x13);
    return;
  case 0x8d:
    ::FString::AppendChars(param_2,"CollisionPawn",0xd);
    return;
  case 0x8e:
    ::FString::AppendChars(param_2,"LightShafts",0xb);
    return;
  case 0x8f:
    ::FString::AppendChars(param_2,"PostProcessMaterial",0x13);
    return;
  case 0x90:
    ::FString::AppendChars(param_2,"Atmosphere",10);
    return;
  case 0x91:
    ::FString::AppendChars(param_2,"Cloud",5);
    return;
  case 0x92:
    ::FString::AppendChars(param_2,"CameraAspectRatioBars",0x15);
    return;
  case 0x93:
    ::FString::AppendChars(param_2,"CameraSafeFrames",0x10);
    return;
  case 0x94:
    ::FString::AppendChars(param_2,"TextRender",10);
    return;
  case 0x95:
    ::FString::AppendChars(param_2,"Rendering",9);
    return;
  case 0x96:
    ::FString::AppendChars(param_2,"HighResScreenshotMask",0x15);
    return;
  case 0x97:
    ::FString::AppendChars(param_2,"HMDDistortion",0xd);
    return;
  case 0x98:
    ::FString::AppendChars(param_2,"StereoRendering",0xf);
    return;
  case 0x99:
    ::FString::AppendChars(param_2,"DistanceCulledPrimitives",0x18);
    return;
  case 0x9a:
    ::FString::AppendChars(param_2,"VisualizeLightCulling",0x15);
    return;
  case 0x9b:
    ::FString::AppendChars(param_2,"PrecomputedVisibility",0x15);
    return;
  case 0x9c:
    ::FString::AppendChars(param_2,"SkyLighting",0xb);
    return;
  case 0x9d:
    ::FString::AppendChars(param_2,"PreviewShadowsIndicator",0x17);
    return;
  case 0x9e:
    ::FString::AppendChars(param_2,"PrecomputedVisibilityCells",0x1a);
    return;
  case 0x9f:
    ::FString::AppendChars(param_2,"VisualizeVolumetricLightmap",0x1b);
    return;
  case 0xa0:
    ::FString::AppendChars(param_2,"VolumeLightingSamples",0x15);
    return;
  case 0xa1:
    ::FString::AppendChars(param_2,"Paper2DSprites",0xe);
    return;
  case 0xa2:
    ::FString::AppendChars(param_2,"VisualizeDistanceFieldAO",0x18);
    return;
  case 0xa3:
    ::FString::AppendChars(param_2,"VisualizeMeshDistanceFields",0x1b);
    return;
  case 0xa4:
    ::FString::AppendChars(param_2,"PhysicsField",0xc);
    return;
  case 0xa5:
    ::FString::AppendChars(param_2,"VisualizeGlobalDistanceField",0x1c);
    return;
  case 0xa6:
    ::FString::AppendChars(param_2,"VisualizeLightingOnProbes",0x19);
    return;
  case 0xa7:
    ::FString::AppendChars(param_2,"ScreenSpaceAO",0xd);
    return;
  case 0xa8:
    ::FString::AppendChars(param_2,"DistanceFieldAO",0xf);
    return;
  case 0xa9:
    ::FString::AppendChars(param_2,"LumenGlobalIllumination",0x17);
    return;
  case 0xaa:
    ::FString::AppendChars(param_2,"VolumetricFog",0xd);
    return;
  case 0xab:
    ::FString::AppendChars(param_2,"VisualizeSSR",0xc);
    return;
  case 0xac:
    ::FString::AppendChars(param_2,"VisualizeShadingModels",0x16);
    return;
  case 0xad:
    ::FString::AppendChars(param_2,"VisualizeSenses",0xf);
    return;
  case 0xae:
    ::FString::AppendChars(param_2,"LODColoration",0xd);
    return;
  case 0xaf:
    ::FString::AppendChars(param_2,"HLODColoration",0xe);
    return;
  case 0xb0:
    ::FString::AppendChars(param_2,"QuadOverdraw",0xc);
    return;
  case 0xb1:
    ::FString::AppendChars(param_2,"ShaderComplexityWithQuadOverdraw",0x20);
    return;
  case 0xb2:
    ::FString::AppendChars(param_2,"PrimitiveDistanceAccuracy",0x19);
    return;
  case 0xb3:
    ::FString::AppendChars(param_2,"MeshUVDensityAccuracy",0x15);
    return;
  case 0xb4:
    ::FString::AppendChars(param_2,"MaterialTextureScaleAccuracy",0x1c);
    return;
  case 0xb5:
    ::FString::AppendChars(param_2,"OutputMaterialTextureScales",0x1b);
    return;
  case 0xb6:
    ::FString::AppendChars(param_2,"RequiredTextureResolution",0x19);
    return;
  case 0xb7:
    ::FString::AppendChars(param_2,"VisualizeVirtualTexture",0x17);
    return;
  case 0xb8:
    ::FString::AppendChars(param_2,"WidgetComponents",0x10);
    return;
  case 0xb9:
    ::FString::AppendChars(param_2,"Bones",5);
    return;
  case 0xba:
    ::FString::AppendChars(param_2,"ServerDrawDebug",0xf);
    return;
  case 0xbb:
    ::FString::AppendChars(param_2,"MediaPlanes",0xb);
    return;
  case 0xbc:
    ::FString::AppendChars(param_2,"VREditing",9);
    return;
  case 0xbd:
    ::FString::AppendChars(param_2,"OcclusionMeshes",0xf);
    return;
  case 0xbe:
    ::FString::AppendChars(param_2,"VisualizeInstanceOcclusionQueries",0x21);
    return;
  case 0xbf:
    ::FString::AppendChars(param_2,"DisableOcclusionQueries",0x17);
    return;
  case 0xc0:
    ::FString::AppendChars(param_2,"PathTracing",0xb);
    return;
  case 0xc1:
    ::FString::AppendChars(param_2,"RayTracingDebug",0xf);
    return;
  case 0xc2:
    ::FString::AppendChars(param_2,"VisualizeSkyAtmosphere",0x16);
    return;
  case 0xc3:
    ::FString::AppendChars(param_2,"VisualizeLightFunctionAtlas",0x1b);
    return;
  case 0xc4:
    ::FString::AppendChars(param_2,"VisualizeCalibrationColor",0x19);
    return;
  case 0xc5:
    ::FString::AppendChars(param_2,"VisualizeCalibrationGrayscale",0x1d);
    return;
  case 0xc6:
    ::FString::AppendChars(param_2,"VisualizeCalibrationCustom",0x1a);
    return;
  case 199:
    ::FString::AppendChars(param_2,"VisualizePostProcessStack",0x19);
    return;
  case 200:
    ::FString::AppendChars(param_2,"VirtualTexturePrimitives",0x18);
    return;
  case 0xc9:
    ::FString::AppendChars(param_2,"VisualizeVolumetricCloudConservativeDensity",0x2b);
    return;
  case 0xca:
    ::FString::AppendChars(param_2,"VisualizeVolumetricCloudEmptySpaceSkipping",0x2a);
    return;
  case 0xcb:
    ::FString::AppendChars(param_2,"VirtualShadowMapPersistentData",0x1e);
    return;
  case 0xcc:
    ::FString::AppendChars(param_2,"DebugDrawDistantVirtualSMLights",0x1f);
    return;
  case 0xcd:
    ::FString::AppendChars(param_2,"VirtualTextureResidency",0x17);
    return;
  case 0xce:
    ::FString::AppendChars(param_2,"InputDebugVisualizer",0x14);
    return;
  case 0xcf:
    ::FString::AppendChars(param_2,"LumenScreenTraces",0x11);
    return;
  case 0xd0:
    ::FString::AppendChars(param_2,"LumenDetailTraces",0x11);
    return;
  case 0xd1:
    ::FString::AppendChars(param_2,"LumenGlobalTraces",0x11);
    return;
  case 0xd2:
    ::FString::AppendChars(param_2,"LumenFarFieldTraces",0x13);
    return;
  case 0xd3:
    ::FString::AppendChars(param_2,"LumenSecondaryBounces",0x15);
    return;
  case 0xd4:
    ::FString::AppendChars(param_2,"LumenShortRangeAmbientOcclusion",0x1f);
    return;
  case 0xd5:
    ::FString::AppendChars(param_2,"NaniteMeshes",0xc);
    return;
  case 0xd6:
    ::FString::AppendChars(param_2,"NaniteStreamingGeometry",0x17);
    return;
  case 0xd7:
    ::FString::AppendChars(param_2,"VisualizeGPUSkinCache",0x15);
    return;
  case 0xd8:
    ::FString::AppendChars(param_2,"VisualizeLWCComplexity",0x16);
    return;
  case 0xd9:
    ::FString::AppendChars(param_2,"VisualizeShadowCasters",0x16);
    return;
  case 0xda:
    ::FString::AppendChars(param_2,"ShaderPrint",0xb);
    return;
  case 0xdb:
    ::FString::AppendChars(param_2,"SceneCaptureCopySceneDepth",0x1a);
    return;
  case 0xdc:
    ::FString::AppendChars(param_2,"Cameras",7);
    return;
  case 0xdd:
    ::FString::AppendChars(param_2,"Hair",4);
    return;
  case 0xde:
    ::FString::AppendChars(param_2,"AllowPrimitiveAlphaHoldout",0x1a);
    return;
  case 0xdf:
    ::FString::AppendChars(param_2,"AlphaInvert",0xb);
    return;
  case 0xe0:
    ::FString::AppendChars(param_2,"StereoMotionVectors",0x13);
    return;
  case 0xe1:
    ::FString::AppendChars(param_2,"Clay",4);
    return;
  case 0xe2:
    ::FString::AppendChars(param_2,"Zebra",5);
    return;
  case 0xe3:
    ::FString::AppendChars(param_2,"FrontBackFace",0xd);
    return;
  case 0xe4:
    ::FString::AppendChars(param_2,"RandomColor",0xb);
    return;
  }
  GetCustomShowFlagName(&local_18,param_1 - 0xe5);
  if (1 < local_18.Data.ArrayNum) {
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// EngineOverrideCustomShowFlagsFromCVars @ 1485b4380

void __thiscall FEngineShowFlags::EngineOverrideCustomShowFlagsFromCVars(FEngineShowFlags *this)

{
  uint *puVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPlatformRWLock *SRWLock;
  uint uVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pvVar5 = ThreadLocalStoragePointer;
  uVar9 = 0;
  lVar10 = 0;
  do {
    while( true ) {
      lVar2 = *(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`CustomShowFlagsInternal::GetRegisteredCustomShowFlags'::__l2::
               _dynamic_atexit_destructor_for__RegisteredCustomShowFlags__);
        _Init_thread_footer(&::_TSS0);
      }
      if (RegisteredCustomShowFlags.ArrayNum <= (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001485b4586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        return;
      }
      if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`CustomShowFlagsInternal::GetRegisteredCustomShowFlags'::__l2::
               _dynamic_atexit_destructor_for__RegisteredCustomShowFlags__);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = 0;
      if ((int)uVar9 < RegisteredCustomShowFlags.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (**(code **)(**(longlong **)
                             (RegisteredCustomShowFlags.AllocatorInstance.Data + lVar10 + 0x28) +
                          200))();
      if (iVar7 != 2) break;
LAB_1485b455c:
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x30;
    }
    if ((((int)uVar9 < 0) || ((this->CustomShowFlags).NumBits <= (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)&this->CustomShowFlags;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar3;
    }
    uVar8 = uVar9;
    if ((int)uVar9 < 0) {
      uVar8 = uVar9 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar8 >> 5) * 4);
    uVar8 = 1 << ((byte)uVar9 & 0x1f);
    if (iVar7 == 0) {
      *puVar1 = ~uVar8 & *puVar1;
      goto LAB_1485b455c;
    }
    uVar9 = uVar9 + 1;
    *puVar1 = uVar8 | *puVar1;
    lVar10 = lVar10 + 0x30;
  } while( true );
}

// FindCustomShowFlagByName @ 1485bba20

ECustomShowFlag __cdecl FEngineShowFlags::FindCustomShowFlagByName(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ECustomShowFlag EVar3;
  FPlatformRWLock *SRWLock;
  TMap<FString,FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FEngineShowFlags::ECustomShowFlag,0>_>
  *this;
  ECustomShowFlag *pEVar4;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this = CustomShowFlagsInternal::GetNameToIndex();
  pEVar4 = TMapBase<FString,enum_FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_FEngineShowFlags::ECustomShowFlag,0>_>
           ::Find(this,param_1);
  if (pEVar4 == (ECustomShowFlag *)0x0) {
    EVar3 = None;
  }
  else {
    EVar3 = *pEVar4;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return EVar3;
}

// FindCustomShowFlagDisplayName @ 1485bbab0

bool __cdecl FEngineShowFlags::FindCustomShowFlagDisplayName(FString *param_1,FText *param_2)

{
  ECustomShowFlag EVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FPlatformRWLock *SRWLock;
  TMap<FString,FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FEngineShowFlags::ECustomShowFlag,0>_>
  *this;
  ECustomShowFlag *pEVar8;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  undefined1 local_res18 [8];
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this = CustomShowFlagsInternal::GetNameToIndex();
  pEVar8 = TMapBase<FString,enum_FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_FEngineShowFlags::ECustomShowFlag,0>_>
           ::Find(this,param_1);
  if (pEVar8 == (ECustomShowFlag *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar9 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    EVar1 = *pEVar8;
    uVar10 = 0;
    if ((int)EVar1 < pTVar9->ArrayNum) {
      uVar10 = ~EVar1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    pIVar3 = (param_2->TextData).Reference;
    pIVar4 = *(ITextData **)(pFVar2 + (longlong)(int)EVar1 * 0x30 + 0x10);
    if (pIVar3 != pIVar4) {
      (param_2->TextData).Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    bVar6 = true;
    param_2->Flags = *(uint *)(pFVar2 + (longlong)(int)EVar1 * 0x30 + 0x18);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return bVar6;
}

// FindIndexByName @ 1485bbc70

int __cdecl FEngineShowFlags::FindIndexByName(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ECustomShowFlag EVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FString local_38;
  FString local_28;
  
  if (param_1 == (wchar_t *)0x0) {
    return -1;
  }
  if (param_2 == (wchar_t *)0x0) {
    ::FString::FString(&local_38,param_1);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"PostProcessing");
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"Bloom");
      if (iVar4 == 0) {
        iVar7 = 1;
      }
      else {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar8.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"LocalExposure");
        if (iVar4 == 0) {
          iVar7 = 2;
        }
        else {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar8.Data = local_38.Data.AllocatorInstance.Data;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"Tonemapper");
          if (iVar4 == 0) {
            iVar7 = 3;
          }
          else {
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_38.Data.ArrayNum != 0) {
              FVar8.Data = local_38.Data.AllocatorInstance.Data;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"AntiAliasing");
            if (iVar4 == 0) {
              iVar7 = 4;
            }
            else {
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_38.Data.ArrayNum != 0) {
                FVar8.Data = local_38.Data.AllocatorInstance.Data;
              }
              iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"TemporalAA");
              if (iVar4 == 0) {
                iVar7 = 5;
              }
              else {
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_38.Data.ArrayNum != 0) {
                  FVar8.Data = local_38.Data.AllocatorInstance.Data;
                }
                iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"AmbientCubemap");
                if (iVar4 == 0) {
                  iVar7 = 6;
                }
                else {
                  FVar8.Data = (FScriptContainerElement *)L"";
                  if (local_38.Data.ArrayNum != 0) {
                    FVar8.Data = local_38.Data.AllocatorInstance.Data;
                  }
                  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"EyeAdaptation");
                  if (iVar4 == 0) {
                    iVar7 = 7;
                  }
                  else {
                    FVar8.Data = (FScriptContainerElement *)L"";
                    if (local_38.Data.ArrayNum != 0) {
                      FVar8.Data = local_38.Data.AllocatorInstance.Data;
                    }
                    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,"VisualizeHDR");
                    if (iVar4 == 0) {
                      iVar7 = 8;
                    }
                    else {
                      FVar8.Data = (FScriptContainerElement *)L"";
                      if (local_38.Data.ArrayNum != 0) {
                        FVar8.Data = local_38.Data.AllocatorInstance.Data;
                      }
                      iVar4 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)FVar8.Data,"VisualizeSkyLightIlluminance");
                      if (iVar4 == 0) {
                        iVar7 = 9;
                      }
                      else {
                        FVar8.Data = (FScriptContainerElement *)L"";
                        if (local_38.Data.ArrayNum != 0) {
                          FVar8.Data = local_38.Data.AllocatorInstance.Data;
                        }
                        iVar4 = FGenericPlatformStricmp::Stricmp
                                          ((wchar_t *)FVar8.Data,"VisualizeLocalFogVolumes");
                        if (iVar4 == 0) {
                          iVar7 = 10;
                        }
                        else {
                          FVar8.Data = (FScriptContainerElement *)L"";
                          if (local_38.Data.ArrayNum != 0) {
                            FVar8.Data = local_38.Data.AllocatorInstance.Data;
                          }
                          iVar4 = FGenericPlatformStricmp::Stricmp
                                            ((wchar_t *)FVar8.Data,"VisualizeLocalExposure");
                          if (iVar4 == 0) {
                            iVar7 = 0xb;
                          }
                          else {
                            FVar8.Data = (FScriptContainerElement *)L"";
                            if (local_38.Data.ArrayNum != 0) {
                              FVar8.Data = local_38.Data.AllocatorInstance.Data;
                            }
                            iVar4 = FGenericPlatformStricmp::Stricmp
                                              ((wchar_t *)FVar8.Data,"LensFlares");
                            if (iVar4 == 0) {
                              iVar7 = 0xc;
                            }
                            else {
                              FVar8.Data = (FScriptContainerElement *)L"";
                              if (local_38.Data.ArrayNum != 0) {
                                FVar8.Data = local_38.Data.AllocatorInstance.Data;
                              }
                              iVar4 = FGenericPlatformStricmp::Stricmp
                                                ((wchar_t *)FVar8.Data,"LensDistortion");
                              if (iVar4 == 0) {
                                iVar7 = 0xd;
                              }
                              else {
                                FVar8.Data = (FScriptContainerElement *)L"";
                                if (local_38.Data.ArrayNum != 0) {
                                  FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                }
                                iVar4 = FGenericPlatformStricmp::Stricmp
                                                  ((wchar_t *)FVar8.Data,"GlobalIllumination");
                                if (iVar4 == 0) {
                                  iVar7 = 0xe;
                                }
                                else {
                                  FVar8.Data = (FScriptContainerElement *)L"";
                                  if (local_38.Data.ArrayNum != 0) {
                                    FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                  }
                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                    ((wchar_t *)FVar8.Data,"Vignette");
                                  if (iVar4 == 0) {
                                    iVar7 = 0xf;
                                  }
                                  else {
                                    FVar8.Data = (FScriptContainerElement *)L"";
                                    if (local_38.Data.ArrayNum != 0) {
                                      FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                    }
                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                      ((wchar_t *)FVar8.Data,"Grain");
                                    if (iVar4 == 0) {
                                      iVar7 = 0x10;
                                    }
                                    else {
                                      FVar8.Data = (FScriptContainerElement *)L"";
                                      if (local_38.Data.ArrayNum != 0) {
                                        FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                      }
                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                        ((wchar_t *)FVar8.Data,"AmbientOcclusion");
                                      if (iVar4 == 0) {
                                        iVar7 = 0x11;
                                      }
                                      else {
                                        FVar8.Data = (FScriptContainerElement *)L"";
                                        if (local_38.Data.ArrayNum != 0) {
                                          FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                        }
                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                          ((wchar_t *)FVar8.Data,"Decals");
                                        if (iVar4 == 0) {
                                          iVar7 = 0x12;
                                        }
                                        else {
                                          FVar8.Data = (FScriptContainerElement *)L"";
                                          if (local_38.Data.ArrayNum != 0) {
                                            FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                          }
                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                            ((wchar_t *)FVar8.Data,
                                                             "CameraImperfections");
                                          if (iVar4 == 0) {
                                            iVar7 = 0x13;
                                          }
                                          else {
                                            FVar8.Data = (FScriptContainerElement *)L"";
                                            if (local_38.Data.ArrayNum != 0) {
                                              FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                            }
                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                              ((wchar_t *)FVar8.Data,"OnScreenDebug"
                                                              );
                                            if (iVar4 == 0) {
                                              iVar7 = 0x14;
                                            }
                                            else {
                                              FVar8.Data = (FScriptContainerElement *)L"";
                                              if (local_38.Data.ArrayNum != 0) {
                                                FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                              }
                                              iVar4 = FGenericPlatformStricmp::Stricmp
                                                                ((wchar_t *)FVar8.Data,
                                                                 "OverrideDiffuseAndSpecular");
                                              if (iVar4 == 0) {
                                                iVar7 = 0x15;
                                              }
                                              else {
                                                FVar8.Data = (FScriptContainerElement *)L"";
                                                if (local_38.Data.ArrayNum != 0) {
                                                  FVar8.Data = local_38.Data.AllocatorInstance.Data;
                                                }
                                                iVar4 = FGenericPlatformStricmp::Stricmp
                                                                  ((wchar_t *)FVar8.Data,
                                                                   "LightingOnlyOverride");
                                                if (iVar4 == 0) {
                                                  iVar7 = 0x16;
                                                }
                                                else {
                                                  FVar8.Data = (FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "ReflectionOverride");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x17;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "MaterialNormal");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x18;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "MaterialAmbientOcclusion")
                                                      ;
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x19;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeBuffer");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x1a;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "VisualizeNanite");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x1b;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"VisualizeLumen");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x1c;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "VisualizeSubstrate");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x1d;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "VisualizeGroom");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x1e;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeVirtualShadowMap");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x1f;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "DirectLighting");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x20;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "DirectionalLights");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x21;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "PointLights");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x22;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"SpotLights");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x23;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "RectLights");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x24;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "ColorGrading");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x25;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VectorFields");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x26;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "DepthOfField");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x27;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "GBufferHints");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x28;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "MotionBlur");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x29;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "CompositeDebugPrimitives");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x2a;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "CompositeEditorPrimitives");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x2b;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                                                                                                  
                                                  "OpaqueCompositeEditorPrimitives");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x2c;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "TestImage");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x2d;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisualizeDOF");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x2e;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VertexColors");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x2f;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "PhysicalMaterialMasks"
                                                                            );
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x30;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"Refraction");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x31;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "CameraInterpolation")
                                                              ;
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x32;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "SceneColorFringe");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x33;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "ToneCurve");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x34;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "SeparateTranslucency");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x35;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "ScreenPercentage");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x36;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "VisualizeMotionBlur");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x37;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "VisualizeMotionVectors");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x38;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeReprojection");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x39;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisualizeTemporalUpscaler"
                                                                        );
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x3a;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeTSR");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x3b;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "MegaLights");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x3c;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "ReflectionEnvironment");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x3d;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeOutOfBoundsPixels")
                                                    ;
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x3e;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "Diffuse");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x3f;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Specular");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x40;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "SelectionOutline");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x41;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "ScreenSpaceReflections");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x42;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "LumenReflections");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x43;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "ContactShadows");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x44;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "RayTracedDistanceFieldShadows");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x45;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "CapsuleShadows");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x46;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "SubsurfaceScattering");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x47;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeSSS");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x48;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "VolumetricLightmap");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x49;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "IndirectLightingCache");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x4a;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "DebugAI");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x4b;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisLog");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x4c;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Navigation");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x4d;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "GameplayDebug");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x4e;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "TexturedLightProfiles");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x4f;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "LightFunctions");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x50;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "InstancedStaticMeshes");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x51;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "InstancedFoliage");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x52;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "HISMCOcclusionBounds")
                                                          ;
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x53;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"HISMCClusterTree");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x54;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                                                                                                            
                                                  "VisualizeInstanceUpdates");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x55;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "InstancedGrass");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x56;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "DynamicShadows");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x57;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Particles");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x58;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Niagara");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x59;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "HeterogeneousVolumes");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x5a;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "SkeletalMeshes");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x5b;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "BuilderBrush");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x5c;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Translucency");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x5d;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "BillboardSprites");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x5e;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"LOD");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x5f;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "LightComplexity");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x60;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "ShaderComplexity");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x61;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "StationaryLightOverlap");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x62;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "LightMapDensity");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 99;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "StreamingBounds");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 100;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Constraints");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x65;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"MassProperties");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x66;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "CameraFrustums");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x67;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "AudioRadius");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x68;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "ForceFeedbackRadius");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x69;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "BSPSplit");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x6a;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Brushes");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x6b;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Lighting");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x6c;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"UnlitRichView");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x6d;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "UnlitViewmode");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x6e;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "DeferredLighting");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x6f;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "Editor");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x70;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "BSPTriangles");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x71;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "LargeVertices");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x72;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Grid");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x73;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"Snap");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x74;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "MeshEdges");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x75;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,"Cover");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x76;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "Splines");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x77;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "Selection");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x78;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VisualizeLevelInstanceEditing");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x79;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "EditingLevelInstance");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x7a;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "ModeWidgets");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x7b;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Bounds");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x7c;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "HitProxies");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x7d;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"LightInfluences");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x7e;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "Pivot");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x7f;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "ShadowFrustums");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x80;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "Wireframe");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x81;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "Materials");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x82;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "StaticMeshes");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x83;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Landscape");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x84;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"LightRadius");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x85;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "Fog");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x86;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,"Volumes"
                                                                    );
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x87;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,"Game")
                                                    ;
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x88;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "ActorColoration");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x89;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "BSP");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x8a;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Collision");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x8b;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,
                                                  "CollisionVisibility");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x8c;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "CollisionPawn");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x8d;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "LightShafts");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x8e;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "PostProcessMaterial");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x8f;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Atmosphere");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x90;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"Cloud");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x91;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                                                                                                            
                                                  "CameraAspectRatioBars");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x92;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "CameraSafeFrames");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x93;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "TextRender");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x94;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Rendering");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x95;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "HighResScreenshotMask"
                                                                            );
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0x96;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"HMDDistortion");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0x97;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "StereoRendering");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0x98;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "DistanceCulledPrimitives");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x99;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeLightCulling");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x9a;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "PrecomputedVisibility");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0x9b;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "SkyLighting");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0x9c;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                                                                                                          
                                                  "PreviewShadowsIndicator");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x9d;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "PrecomputedVisibilityCells")
                                                    ;
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0x9e;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                                                                                                  
                                                  "VisualizeVolumetricLightmap");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0x9f;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VolumeLightingSamples");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xa0;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "Paper2DSprites");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xa1;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VisualizeDistanceFieldAO");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xa2;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeMeshDistanceFields"
                                                                      );
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xa3;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "PhysicsField");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xa4;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VisualizeGlobalDistanceField");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xa5;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeLightingOnProbes");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xa6;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "ScreenSpaceAO");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xa7;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "DistanceFieldAO");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xa8;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                                                                                                          
                                                  "LumenGlobalIllumination");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xa9;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VolumetricFog");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xaa;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisualizeSSR");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xab;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeShadingModels")
                                                        ;
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xac;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "VisualizeSenses");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0xad;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"LODColoration");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0xae;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "HLODColoration");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0xaf;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "QuadOverdraw");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xb0;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "ShaderComplexityWithQuadOverdraw");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xb1;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "PrimitiveDistanceAccuracy");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xb2;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "MeshUVDensityAccuracy");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xb3;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "MaterialTextureScaleAccuracy");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xb4;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "OutputMaterialTextureScales"
                                                                      );
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xb5;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "RequiredTextureResolution"
                                                                        );
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xb6;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeVirtualTexture"
                                                                          );
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xb7;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "WidgetComponents");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0xb8;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"Bones");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0xb9;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "ServerDrawDebug");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0xba;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "MediaPlanes");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xbb;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VREditing");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xbc;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "OcclusionMeshes");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xbd;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VisualizeInstanceOcclusionQueries");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xbe;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "DisableOcclusionQueries");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xbf;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "PathTracing");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xc0;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "RayTracingDebug");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xc1;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                                                                                                          
                                                  "VisualizeSkyAtmosphere");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xc2;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeLightFunctionAtlas"
                                                                      );
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xc3;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisualizeCalibrationColor"
                                                                        );
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xc4;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VisualizeCalibrationGrayscale");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xc5;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeCalibrationCustom")
                                                    ;
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xc6;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "VisualizePostProcessStack"
                                                                        );
                                                      if (iVar4 == 0) {
                                                        iVar7 = 199;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "VirtualTexturePrimitives");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 200;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "VisualizeVolumetricCloudConservativeDensity");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xc9;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "VisualizeVolumetricCloudEmptySpaceSkipping");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xca;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "VirtualShadowMapPersistentData");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xcb;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "DebugDrawDistantVirtualSMLights");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xcc;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VirtualTextureResidency");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xcd;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "InputDebugVisualizer");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xce;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "LumenScreenTraces");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xcf;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "LumenDetailTraces");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0xd0;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"LumenGlobalTraces")
                                                            ;
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0xd1;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "LumenFarFieldTraces")
                                                              ;
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0xd2;
                                                              }
                                                              else {
                                                                FVar8.Data = (
                                                  FScriptContainerElement *)L"";
                                                  if (local_38.Data.ArrayNum != 0) {
                                                    FVar8.Data = local_38.Data.AllocatorInstance.
                                                                 Data;
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    ((wchar_t *)FVar8.Data,
                                                                     "LumenSecondaryBounces");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xd3;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                                                                                              
                                                  "LumenShortRangeAmbientOcclusion");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xd4;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "NaniteMeshes");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xd5;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "NaniteStreamingGeometry");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xd6;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "VisualizeGPUSkinCache");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xd7;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                                                                                                          
                                                  "VisualizeLWCComplexity");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xd8;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "VisualizeShadowCasters");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xd9;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "ShaderPrint");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xda;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "SceneCaptureCopySceneDepth");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xdb;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "Cameras");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xdc;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "Hair");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xdd;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                                                                                                      
                                                  "AllowPrimitiveAlphaHoldout");
                                                  if (iVar4 == 0) {
                                                    iVar7 = 0xde;
                                                  }
                                                  else {
                                                    FVar8.Data = (FScriptContainerElement *)L"";
                                                    if (local_38.Data.ArrayNum != 0) {
                                                      FVar8.Data = local_38.Data.AllocatorInstance.
                                                                   Data;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      ((wchar_t *)FVar8.Data,
                                                                       "AlphaInvert");
                                                    if (iVar4 == 0) {
                                                      iVar7 = 0xdf;
                                                    }
                                                    else {
                                                      FVar8.Data = (FScriptContainerElement *)L"";
                                                      if (local_38.Data.ArrayNum != 0) {
                                                        FVar8.Data = local_38.Data.AllocatorInstance
                                                                     .Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        ((wchar_t *)FVar8.Data,
                                                                         "StereoMotionVectors");
                                                      if (iVar4 == 0) {
                                                        iVar7 = 0xe0;
                                                      }
                                                      else {
                                                        FVar8.Data = (FScriptContainerElement *)L"";
                                                        if (local_38.Data.ArrayNum != 0) {
                                                          FVar8.Data = local_38.Data.
                                                                       AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          ((wchar_t *)FVar8.Data,
                                                                           "Clay");
                                                        if (iVar4 == 0) {
                                                          iVar7 = 0xe1;
                                                        }
                                                        else {
                                                          FVar8.Data = (FScriptContainerElement *)
                                                                       L"";
                                                          if (local_38.Data.ArrayNum != 0) {
                                                            FVar8.Data = local_38.Data.
                                                                         AllocatorInstance.Data;
                                                          }
                                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                                            ((wchar_t *)FVar8.Data,
                                                                             "Zebra");
                                                          if (iVar4 == 0) {
                                                            iVar7 = 0xe2;
                                                          }
                                                          else {
                                                            FVar8.Data = (FScriptContainerElement *)
                                                                         L"";
                                                            if (local_38.Data.ArrayNum != 0) {
                                                              FVar8.Data = local_38.Data.
                                                                           AllocatorInstance.Data;
                                                            }
                                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                                              ((wchar_t *)FVar8.Data
                                                                               ,"FrontBackFace");
                                                            if (iVar4 == 0) {
                                                              iVar7 = 0xe3;
                                                            }
                                                            else {
                                                              FVar8.Data = (FScriptContainerElement
                                                                            *)L"";
                                                              if (local_38.Data.ArrayNum != 0) {
                                                                FVar8.Data = local_38.Data.
                                                                             AllocatorInstance.Data;
                                                              }
                                                              iVar4 = FGenericPlatformStricmp::
                                                                      Stricmp((wchar_t *)FVar8.Data,
                                                                              "RandomColor");
                                                              if (iVar4 == 0) {
                                                                iVar7 = 0xe4;
                                                              }
                                                              else {
                                                                EVar5 = FindCustomShowFlagByName
                                                                                  (&local_38);
                                                                iVar7 = EVar5 + 0xe5;
                                                                if (EVar5 == None) {
                                                                  iVar7 = -1;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = 0;
    while( true ) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      wVar1 = *param_2;
      while ((wVar1 != L'\0' && (wVar1 != L','))) {
        param_2 = param_2 + 1;
        ::FString::AppendChar(&local_28,wVar1);
        wVar1 = *param_2;
      }
      if ((local_28.Data.ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Name.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShowFlags.h"
                             ,0x238,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar8.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,param_1);
      iVar7 = iVar4;
      if ((iVar6 == 0) || (iVar7 = -1, *param_2 == L'\0')) break;
      param_2 = param_2 + 1;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar4 = iVar4 + 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return iVar7;
}

// FindNameByIndex @ 1485be180

FString * __cdecl FEngineShowFlags::FindNameByIndex(FString *__return_storage_ptr__,uint param_1)

{
  FString local_e78;
  uint local_e68;
  FString local_e60;
  FString local_e50;
  FString local_e40;
  FString local_e30;
  FString local_e20;
  FString local_e10;
  FString local_e00;
  FString local_df0;
  FString local_de0;
  FString local_dd0;
  FString local_dc0;
  FString local_db0;
  FString local_da0;
  FString local_d90;
  FString local_d80;
  FString local_d70;
  FString local_d60;
  FString local_d50;
  FString local_d40;
  FString local_d30;
  FString local_d20;
  FString local_d10;
  FString local_d00;
  FString local_cf0;
  FString local_ce0;
  FString local_cd0;
  FString local_cc0;
  FString local_cb0;
  FString local_ca0;
  FString local_c90;
  FString local_c80;
  FString local_c70;
  FString local_c60;
  FString local_c50;
  FString local_c40;
  FString local_c30;
  FString local_c20;
  FString local_c10;
  FString local_c00;
  FString local_bf0;
  FString local_be0;
  FString local_bd0;
  FString local_bc0;
  FString local_bb0;
  FString local_ba0;
  FString local_b90;
  FString local_b80;
  FString local_b70;
  FString local_b60;
  FString local_b50;
  FString local_b40;
  FString local_b30;
  FString local_b20;
  FString local_b10;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FString local_9f0;
  FString local_9e0;
  FString local_9d0;
  FString local_9c0;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  ::FString::FString(&local_e78);
  local_e68 = param_1;
  switch(param_1) {
  case 0:
    ::FString::FString(&local_e60,"PostProcessing");
    ::FString::operator=(&local_e78,&local_e60);
    ::FString::~FString(&local_e60);
    break;
  case 1:
    ::FString::FString(&local_e50,"Bloom");
    ::FString::operator=(&local_e78,&local_e50);
    ::FString::~FString(&local_e50);
    break;
  case 2:
    ::FString::FString(&local_e40,"LocalExposure");
    ::FString::operator=(&local_e78,&local_e40);
    ::FString::~FString(&local_e40);
    break;
  case 3:
    ::FString::FString(&local_e30,"Tonemapper");
    ::FString::operator=(&local_e78,&local_e30);
    ::FString::~FString(&local_e30);
    break;
  case 4:
    ::FString::FString(&local_e20,"AntiAliasing");
    ::FString::operator=(&local_e78,&local_e20);
    ::FString::~FString(&local_e20);
    break;
  case 5:
    ::FString::FString(&local_e10,"TemporalAA");
    ::FString::operator=(&local_e78,&local_e10);
    ::FString::~FString(&local_e10);
    break;
  case 6:
    ::FString::FString(&local_e00,"AmbientCubemap");
    ::FString::operator=(&local_e78,&local_e00);
    ::FString::~FString(&local_e00);
    break;
  case 7:
    ::FString::FString(&local_df0,"EyeAdaptation");
    ::FString::operator=(&local_e78,&local_df0);
    ::FString::~FString(&local_df0);
    break;
  case 8:
    ::FString::FString(&local_de0,"VisualizeHDR");
    ::FString::operator=(&local_e78,&local_de0);
    ::FString::~FString(&local_de0);
    break;
  case 9:
    ::FString::FString(&local_dd0,"VisualizeSkyLightIlluminance");
    ::FString::operator=(&local_e78,&local_dd0);
    ::FString::~FString(&local_dd0);
    break;
  case 10:
    ::FString::FString(&local_dc0,"VisualizeLocalFogVolumes");
    ::FString::operator=(&local_e78,&local_dc0);
    ::FString::~FString(&local_dc0);
    break;
  case 0xb:
    ::FString::FString(&local_db0,"VisualizeLocalExposure");
    ::FString::operator=(&local_e78,&local_db0);
    ::FString::~FString(&local_db0);
    break;
  case 0xc:
    ::FString::FString(&local_da0,"LensFlares");
    ::FString::operator=(&local_e78,&local_da0);
    ::FString::~FString(&local_da0);
    break;
  case 0xd:
    ::FString::FString(&local_d90,"LensDistortion");
    ::FString::operator=(&local_e78,&local_d90);
    ::FString::~FString(&local_d90);
    break;
  case 0xe:
    ::FString::FString(&local_d80,"GlobalIllumination");
    ::FString::operator=(&local_e78,&local_d80);
    ::FString::~FString(&local_d80);
    break;
  case 0xf:
    ::FString::FString(&local_d70,"Vignette");
    ::FString::operator=(&local_e78,&local_d70);
    ::FString::~FString(&local_d70);
    break;
  case 0x10:
    ::FString::FString(&local_d60,"Grain");
    ::FString::operator=(&local_e78,&local_d60);
    ::FString::~FString(&local_d60);
    break;
  case 0x11:
    ::FString::FString(&local_d50,"AmbientOcclusion");
    ::FString::operator=(&local_e78,&local_d50);
    ::FString::~FString(&local_d50);
    break;
  case 0x12:
    ::FString::FString(&local_d40,"Decals");
    ::FString::operator=(&local_e78,&local_d40);
    ::FString::~FString(&local_d40);
    break;
  case 0x13:
    ::FString::FString(&local_d30,"CameraImperfections");
    ::FString::operator=(&local_e78,&local_d30);
    ::FString::~FString(&local_d30);
    break;
  case 0x14:
    ::FString::FString(&local_d20,"OnScreenDebug");
    ::FString::operator=(&local_e78,&local_d20);
    ::FString::~FString(&local_d20);
    break;
  case 0x15:
    ::FString::FString(&local_d10,"OverrideDiffuseAndSpecular");
    ::FString::operator=(&local_e78,&local_d10);
    ::FString::~FString(&local_d10);
    break;
  case 0x16:
    ::FString::FString(&local_d00,"LightingOnlyOverride");
    ::FString::operator=(&local_e78,&local_d00);
    ::FString::~FString(&local_d00);
    break;
  case 0x17:
    ::FString::FString(&local_cf0,"ReflectionOverride");
    ::FString::operator=(&local_e78,&local_cf0);
    ::FString::~FString(&local_cf0);
    break;
  case 0x18:
    ::FString::FString(&local_ce0,"MaterialNormal");
    ::FString::operator=(&local_e78,&local_ce0);
    ::FString::~FString(&local_ce0);
    break;
  case 0x19:
    ::FString::FString(&local_cd0,"MaterialAmbientOcclusion");
    ::FString::operator=(&local_e78,&local_cd0);
    ::FString::~FString(&local_cd0);
    break;
  case 0x1a:
    ::FString::FString(&local_cc0,"VisualizeBuffer");
    ::FString::operator=(&local_e78,&local_cc0);
    ::FString::~FString(&local_cc0);
    break;
  case 0x1b:
    ::FString::FString(&local_cb0,"VisualizeNanite");
    ::FString::operator=(&local_e78,&local_cb0);
    ::FString::~FString(&local_cb0);
    break;
  case 0x1c:
    ::FString::FString(&local_ca0,"VisualizeLumen");
    ::FString::operator=(&local_e78,&local_ca0);
    ::FString::~FString(&local_ca0);
    break;
  case 0x1d:
    ::FString::FString(&local_c90,"VisualizeSubstrate");
    ::FString::operator=(&local_e78,&local_c90);
    ::FString::~FString(&local_c90);
    break;
  case 0x1e:
    ::FString::FString(&local_c80,"VisualizeGroom");
    ::FString::operator=(&local_e78,&local_c80);
    ::FString::~FString(&local_c80);
    break;
  case 0x1f:
    ::FString::FString(&local_c70,"VisualizeVirtualShadowMap");
    ::FString::operator=(&local_e78,&local_c70);
    ::FString::~FString(&local_c70);
    break;
  case 0x20:
    ::FString::FString(&local_c60,"DirectLighting");
    ::FString::operator=(&local_e78,&local_c60);
    ::FString::~FString(&local_c60);
    break;
  case 0x21:
    ::FString::FString(&local_c50,"DirectionalLights");
    ::FString::operator=(&local_e78,&local_c50);
    ::FString::~FString(&local_c50);
    break;
  case 0x22:
    ::FString::FString(&local_c40,"PointLights");
    ::FString::operator=(&local_e78,&local_c40);
    ::FString::~FString(&local_c40);
    break;
  case 0x23:
    ::FString::FString(&local_c30,"SpotLights");
    ::FString::operator=(&local_e78,&local_c30);
    ::FString::~FString(&local_c30);
    break;
  case 0x24:
    ::FString::FString(&local_c20,"RectLights");
    ::FString::operator=(&local_e78,&local_c20);
    ::FString::~FString(&local_c20);
    break;
  case 0x25:
    ::FString::FString(&local_c10,"ColorGrading");
    ::FString::operator=(&local_e78,&local_c10);
    ::FString::~FString(&local_c10);
    break;
  case 0x26:
    ::FString::FString(&local_c00,"VectorFields");
    ::FString::operator=(&local_e78,&local_c00);
    ::FString::~FString(&local_c00);
    break;
  case 0x27:
    ::FString::FString(&local_bf0,"DepthOfField");
    ::FString::operator=(&local_e78,&local_bf0);
    ::FString::~FString(&local_bf0);
    break;
  case 0x28:
    ::FString::FString(&local_be0,"GBufferHints");
    ::FString::operator=(&local_e78,&local_be0);
    ::FString::~FString(&local_be0);
    break;
  case 0x29:
    ::FString::FString(&local_bd0,"MotionBlur");
    ::FString::operator=(&local_e78,&local_bd0);
    ::FString::~FString(&local_bd0);
    break;
  case 0x2a:
    ::FString::FString(&local_bc0,"CompositeDebugPrimitives");
    ::FString::operator=(&local_e78,&local_bc0);
    ::FString::~FString(&local_bc0);
    break;
  case 0x2b:
    ::FString::FString(&local_bb0,"CompositeEditorPrimitives");
    ::FString::operator=(&local_e78,&local_bb0);
    ::FString::~FString(&local_bb0);
    break;
  case 0x2c:
    ::FString::FString(&local_ba0,"OpaqueCompositeEditorPrimitives");
    ::FString::operator=(&local_e78,&local_ba0);
    ::FString::~FString(&local_ba0);
    break;
  case 0x2d:
    ::FString::FString(&local_b90,"TestImage");
    ::FString::operator=(&local_e78,&local_b90);
    ::FString::~FString(&local_b90);
    break;
  case 0x2e:
    ::FString::FString(&local_b80,"VisualizeDOF");
    ::FString::operator=(&local_e78,&local_b80);
    ::FString::~FString(&local_b80);
    break;
  case 0x2f:
    ::FString::FString(&local_b70,"VertexColors");
    ::FString::operator=(&local_e78,&local_b70);
    ::FString::~FString(&local_b70);
    break;
  case 0x30:
    ::FString::FString(&local_b60,"PhysicalMaterialMasks");
    ::FString::operator=(&local_e78,&local_b60);
    ::FString::~FString(&local_b60);
    break;
  case 0x31:
    ::FString::FString(&local_b50,"Refraction");
    ::FString::operator=(&local_e78,&local_b50);
    ::FString::~FString(&local_b50);
    break;
  case 0x32:
    ::FString::FString(&local_b40,"CameraInterpolation");
    ::FString::operator=(&local_e78,&local_b40);
    ::FString::~FString(&local_b40);
    break;
  case 0x33:
    ::FString::FString(&local_b30,"SceneColorFringe");
    ::FString::operator=(&local_e78,&local_b30);
    ::FString::~FString(&local_b30);
    break;
  case 0x34:
    ::FString::FString(&local_b20,"ToneCurve");
    ::FString::operator=(&local_e78,&local_b20);
    ::FString::~FString(&local_b20);
    break;
  case 0x35:
    ::FString::FString(&local_b10,"SeparateTranslucency");
    ::FString::operator=(&local_e78,&local_b10);
    ::FString::~FString(&local_b10);
    break;
  case 0x36:
    ::FString::FString(&local_b00,"ScreenPercentage");
    ::FString::operator=(&local_e78,&local_b00);
    ::FString::~FString(&local_b00);
    break;
  case 0x37:
    ::FString::FString(&local_af0,"VisualizeMotionBlur");
    ::FString::operator=(&local_e78,&local_af0);
    ::FString::~FString(&local_af0);
    break;
  case 0x38:
    ::FString::FString(&local_ae0,"VisualizeMotionVectors");
    ::FString::operator=(&local_e78,&local_ae0);
    ::FString::~FString(&local_ae0);
    break;
  case 0x39:
    ::FString::FString(&local_ad0,"VisualizeReprojection");
    ::FString::operator=(&local_e78,&local_ad0);
    ::FString::~FString(&local_ad0);
    break;
  case 0x3a:
    ::FString::FString(&local_ac0,"VisualizeTemporalUpscaler");
    ::FString::operator=(&local_e78,&local_ac0);
    ::FString::~FString(&local_ac0);
    break;
  case 0x3b:
    ::FString::FString(&local_ab0,"VisualizeTSR");
    ::FString::operator=(&local_e78,&local_ab0);
    ::FString::~FString(&local_ab0);
    break;
  case 0x3c:
    ::FString::FString(&local_aa0,"MegaLights");
    ::FString::operator=(&local_e78,&local_aa0);
    ::FString::~FString(&local_aa0);
    break;
  case 0x3d:
    ::FString::FString(&local_a90,"ReflectionEnvironment");
    ::FString::operator=(&local_e78,&local_a90);
    ::FString::~FString(&local_a90);
    break;
  case 0x3e:
    ::FString::FString(&local_a80,"VisualizeOutOfBoundsPixels");
    ::FString::operator=(&local_e78,&local_a80);
    ::FString::~FString(&local_a80);
    break;
  case 0x3f:
    ::FString::FString(&local_a70,"Diffuse");
    ::FString::operator=(&local_e78,&local_a70);
    ::FString::~FString(&local_a70);
    break;
  case 0x40:
    ::FString::FString(&local_a60,"Specular");
    ::FString::operator=(&local_e78,&local_a60);
    ::FString::~FString(&local_a60);
    break;
  case 0x41:
    ::FString::FString(&local_a50,"SelectionOutline");
    ::FString::operator=(&local_e78,&local_a50);
    ::FString::~FString(&local_a50);
    break;
  case 0x42:
    ::FString::FString(&local_a40,"ScreenSpaceReflections");
    ::FString::operator=(&local_e78,&local_a40);
    ::FString::~FString(&local_a40);
    break;
  case 0x43:
    ::FString::FString(&local_a30,"LumenReflections");
    ::FString::operator=(&local_e78,&local_a30);
    ::FString::~FString(&local_a30);
    break;
  case 0x44:
    ::FString::FString(&local_a20,"ContactShadows");
    ::FString::operator=(&local_e78,&local_a20);
    ::FString::~FString(&local_a20);
    break;
  case 0x45:
    ::FString::FString(&local_a10,"RayTracedDistanceFieldShadows");
    ::FString::operator=(&local_e78,&local_a10);
    ::FString::~FString(&local_a10);
    break;
  case 0x46:
    ::FString::FString(&local_a00,"CapsuleShadows");
    ::FString::operator=(&local_e78,&local_a00);
    ::FString::~FString(&local_a00);
    break;
  case 0x47:
    ::FString::FString(&local_9f0,"SubsurfaceScattering");
    ::FString::operator=(&local_e78,&local_9f0);
    ::FString::~FString(&local_9f0);
    break;
  case 0x48:
    ::FString::FString(&local_9e0,"VisualizeSSS");
    ::FString::operator=(&local_e78,&local_9e0);
    ::FString::~FString(&local_9e0);
    break;
  case 0x49:
    ::FString::FString(&local_9d0,"VolumetricLightmap");
    ::FString::operator=(&local_e78,&local_9d0);
    ::FString::~FString(&local_9d0);
    break;
  case 0x4a:
    ::FString::FString(&local_9c0,"IndirectLightingCache");
    ::FString::operator=(&local_e78,&local_9c0);
    ::FString::~FString(&local_9c0);
    break;
  case 0x4b:
    ::FString::FString(&local_9b0,"DebugAI");
    ::FString::operator=(&local_e78,&local_9b0);
    ::FString::~FString(&local_9b0);
    break;
  case 0x4c:
    ::FString::FString(&local_9a0,"VisLog");
    ::FString::operator=(&local_e78,&local_9a0);
    ::FString::~FString(&local_9a0);
    break;
  case 0x4d:
    ::FString::FString(&local_990,"Navigation");
    ::FString::operator=(&local_e78,&local_990);
    ::FString::~FString(&local_990);
    break;
  case 0x4e:
    ::FString::FString(&local_980,"GameplayDebug");
    ::FString::operator=(&local_e78,&local_980);
    ::FString::~FString(&local_980);
    break;
  case 0x4f:
    ::FString::FString(&local_970,"TexturedLightProfiles");
    ::FString::operator=(&local_e78,&local_970);
    ::FString::~FString(&local_970);
    break;
  case 0x50:
    ::FString::FString(&local_960,"LightFunctions");
    ::FString::operator=(&local_e78,&local_960);
    ::FString::~FString(&local_960);
    break;
  case 0x51:
    ::FString::FString(&local_950,"InstancedStaticMeshes");
    ::FString::operator=(&local_e78,&local_950);
    ::FString::~FString(&local_950);
    break;
  case 0x52:
    ::FString::FString(&local_940,"InstancedFoliage");
    ::FString::operator=(&local_e78,&local_940);
    ::FString::~FString(&local_940);
    break;
  case 0x53:
    ::FString::FString(&local_930,"HISMCOcclusionBounds");
    ::FString::operator=(&local_e78,&local_930);
    ::FString::~FString(&local_930);
    break;
  case 0x54:
    ::FString::FString(&local_920,"HISMCClusterTree");
    ::FString::operator=(&local_e78,&local_920);
    ::FString::~FString(&local_920);
    break;
  case 0x55:
    ::FString::FString(&local_910,"VisualizeInstanceUpdates");
    ::FString::operator=(&local_e78,&local_910);
    ::FString::~FString(&local_910);
    break;
  case 0x56:
    ::FString::FString(&local_900,"InstancedGrass");
    ::FString::operator=(&local_e78,&local_900);
    ::FString::~FString(&local_900);
    break;
  case 0x57:
    ::FString::FString(&local_8f0,"DynamicShadows");
    ::FString::operator=(&local_e78,&local_8f0);
    ::FString::~FString(&local_8f0);
    break;
  case 0x58:
    ::FString::FString(&local_8e0,"Particles");
    ::FString::operator=(&local_e78,&local_8e0);
    ::FString::~FString(&local_8e0);
    break;
  case 0x59:
    ::FString::FString(&local_8d0,"Niagara");
    ::FString::operator=(&local_e78,&local_8d0);
    ::FString::~FString(&local_8d0);
    break;
  case 0x5a:
    ::FString::FString(&local_8c0,"HeterogeneousVolumes");
    ::FString::operator=(&local_e78,&local_8c0);
    ::FString::~FString(&local_8c0);
    break;
  case 0x5b:
    ::FString::FString(&local_8b0,"SkeletalMeshes");
    ::FString::operator=(&local_e78,&local_8b0);
    ::FString::~FString(&local_8b0);
    break;
  case 0x5c:
    ::FString::FString(&local_8a0,"BuilderBrush");
    ::FString::operator=(&local_e78,&local_8a0);
    ::FString::~FString(&local_8a0);
    break;
  case 0x5d:
    ::FString::FString(&local_890,"Translucency");
    ::FString::operator=(&local_e78,&local_890);
    ::FString::~FString(&local_890);
    break;
  case 0x5e:
    ::FString::FString(&local_880,"BillboardSprites");
    ::FString::operator=(&local_e78,&local_880);
    ::FString::~FString(&local_880);
    break;
  case 0x5f:
    ::FString::FString(&local_870,"LOD");
    ::FString::operator=(&local_e78,&local_870);
    ::FString::~FString(&local_870);
    break;
  case 0x60:
    ::FString::FString(&local_860,"LightComplexity");
    ::FString::operator=(&local_e78,&local_860);
    ::FString::~FString(&local_860);
    break;
  case 0x61:
    ::FString::FString(&local_850,"ShaderComplexity");
    ::FString::operator=(&local_e78,&local_850);
    ::FString::~FString(&local_850);
    break;
  case 0x62:
    ::FString::FString(&local_840,"StationaryLightOverlap");
    ::FString::operator=(&local_e78,&local_840);
    ::FString::~FString(&local_840);
    break;
  case 99:
    ::FString::FString(&local_830,"LightMapDensity");
    ::FString::operator=(&local_e78,&local_830);
    ::FString::~FString(&local_830);
    break;
  case 100:
    ::FString::FString(&local_820,"StreamingBounds");
    ::FString::operator=(&local_e78,&local_820);
    ::FString::~FString(&local_820);
    break;
  case 0x65:
    ::FString::FString(&local_810,"Constraints");
    ::FString::operator=(&local_e78,&local_810);
    ::FString::~FString(&local_810);
    break;
  case 0x66:
    ::FString::FString(&local_800,"MassProperties");
    ::FString::operator=(&local_e78,&local_800);
    ::FString::~FString(&local_800);
    break;
  case 0x67:
    ::FString::FString(&local_7f0,"CameraFrustums");
    ::FString::operator=(&local_e78,&local_7f0);
    ::FString::~FString(&local_7f0);
    break;
  case 0x68:
    ::FString::FString(&local_7e0,"AudioRadius");
    ::FString::operator=(&local_e78,&local_7e0);
    ::FString::~FString(&local_7e0);
    break;
  case 0x69:
    ::FString::FString(&local_7d0,"ForceFeedbackRadius");
    ::FString::operator=(&local_e78,&local_7d0);
    ::FString::~FString(&local_7d0);
    break;
  case 0x6a:
    ::FString::FString(&local_7c0,"BSPSplit");
    ::FString::operator=(&local_e78,&local_7c0);
    ::FString::~FString(&local_7c0);
    break;
  case 0x6b:
    ::FString::FString(&local_7b0,"Brushes");
    ::FString::operator=(&local_e78,&local_7b0);
    ::FString::~FString(&local_7b0);
    break;
  case 0x6c:
    ::FString::FString(&local_7a0,"Lighting");
    ::FString::operator=(&local_e78,&local_7a0);
    ::FString::~FString(&local_7a0);
    break;
  case 0x6d:
    ::FString::FString(&local_790,"UnlitRichView");
    ::FString::operator=(&local_e78,&local_790);
    ::FString::~FString(&local_790);
    break;
  case 0x6e:
    ::FString::FString(&local_780,"UnlitViewmode");
    ::FString::operator=(&local_e78,&local_780);
    ::FString::~FString(&local_780);
    break;
  case 0x6f:
    ::FString::FString(&local_770,"DeferredLighting");
    ::FString::operator=(&local_e78,&local_770);
    ::FString::~FString(&local_770);
    break;
  case 0x70:
    ::FString::FString(&local_760,"Editor");
    ::FString::operator=(&local_e78,&local_760);
    ::FString::~FString(&local_760);
    break;
  case 0x71:
    ::FString::FString(&local_750,"BSPTriangles");
    ::FString::operator=(&local_e78,&local_750);
    ::FString::~FString(&local_750);
    break;
  case 0x72:
    ::FString::FString(&local_740,"LargeVertices");
    ::FString::operator=(&local_e78,&local_740);
    ::FString::~FString(&local_740);
    break;
  case 0x73:
    ::FString::FString(&local_730,"Grid");
    ::FString::operator=(&local_e78,&local_730);
    ::FString::~FString(&local_730);
    break;
  case 0x74:
    ::FString::FString(&local_720,"Snap");
    ::FString::operator=(&local_e78,&local_720);
    ::FString::~FString(&local_720);
    break;
  case 0x75:
    ::FString::FString(&local_710,"MeshEdges");
    ::FString::operator=(&local_e78,&local_710);
    ::FString::~FString(&local_710);
    break;
  case 0x76:
    ::FString::FString(&local_700,"Cover");
    ::FString::operator=(&local_e78,&local_700);
    ::FString::~FString(&local_700);
    break;
  case 0x77:
    ::FString::FString(&local_6f0,"Splines");
    ::FString::operator=(&local_e78,&local_6f0);
    ::FString::~FString(&local_6f0);
    break;
  case 0x78:
    ::FString::FString(&local_6e0,"Selection");
    ::FString::operator=(&local_e78,&local_6e0);
    ::FString::~FString(&local_6e0);
    break;
  case 0x79:
    ::FString::FString(&local_6d0,"VisualizeLevelInstanceEditing");
    ::FString::operator=(&local_e78,&local_6d0);
    ::FString::~FString(&local_6d0);
    break;
  case 0x7a:
    ::FString::FString(&local_6c0,"EditingLevelInstance");
    ::FString::operator=(&local_e78,&local_6c0);
    ::FString::~FString(&local_6c0);
    break;
  case 0x7b:
    ::FString::FString(&local_6b0,"ModeWidgets");
    ::FString::operator=(&local_e78,&local_6b0);
    ::FString::~FString(&local_6b0);
    break;
  case 0x7c:
    ::FString::FString(&local_6a0,"Bounds");
    ::FString::operator=(&local_e78,&local_6a0);
    ::FString::~FString(&local_6a0);
    break;
  case 0x7d:
    ::FString::FString(&local_690,"HitProxies");
    ::FString::operator=(&local_e78,&local_690);
    ::FString::~FString(&local_690);
    break;
  case 0x7e:
    ::FString::FString(&local_680,"LightInfluences");
    ::FString::operator=(&local_e78,&local_680);
    ::FString::~FString(&local_680);
    break;
  case 0x7f:
    ::FString::FString(&local_670,"Pivot");
    ::FString::operator=(&local_e78,&local_670);
    ::FString::~FString(&local_670);
    break;
  case 0x80:
    ::FString::FString(&local_660,"ShadowFrustums");
    ::FString::operator=(&local_e78,&local_660);
    ::FString::~FString(&local_660);
    break;
  case 0x81:
    ::FString::FString(&local_650,"Wireframe");
    ::FString::operator=(&local_e78,&local_650);
    ::FString::~FString(&local_650);
    break;
  case 0x82:
    ::FString::FString(&local_640,"Materials");
    ::FString::operator=(&local_e78,&local_640);
    ::FString::~FString(&local_640);
    break;
  case 0x83:
    ::FString::FString(&local_630,"StaticMeshes");
    ::FString::operator=(&local_e78,&local_630);
    ::FString::~FString(&local_630);
    break;
  case 0x84:
    ::FString::FString(&local_620,"Landscape");
    ::FString::operator=(&local_e78,&local_620);
    ::FString::~FString(&local_620);
    break;
  case 0x85:
    ::FString::FString(&local_610,"LightRadius");
    ::FString::operator=(&local_e78,&local_610);
    ::FString::~FString(&local_610);
    break;
  case 0x86:
    ::FString::FString(&local_600,"Fog");
    ::FString::operator=(&local_e78,&local_600);
    ::FString::~FString(&local_600);
    break;
  case 0x87:
    ::FString::FString(&local_5f0,"Volumes");
    ::FString::operator=(&local_e78,&local_5f0);
    ::FString::~FString(&local_5f0);
    break;
  case 0x88:
    ::FString::FString(&local_5e0,"Game");
    ::FString::operator=(&local_e78,&local_5e0);
    ::FString::~FString(&local_5e0);
    break;
  case 0x89:
    ::FString::FString(&local_5d0,"ActorColoration");
    ::FString::operator=(&local_e78,&local_5d0);
    ::FString::~FString(&local_5d0);
    break;
  case 0x8a:
    ::FString::FString(&local_5c0,"BSP");
    ::FString::operator=(&local_e78,&local_5c0);
    ::FString::~FString(&local_5c0);
    break;
  case 0x8b:
    ::FString::FString(&local_5b0,"Collision");
    ::FString::operator=(&local_e78,&local_5b0);
    ::FString::~FString(&local_5b0);
    break;
  case 0x8c:
    ::FString::FString(&local_5a0,"CollisionVisibility");
    ::FString::operator=(&local_e78,&local_5a0);
    ::FString::~FString(&local_5a0);
    break;
  case 0x8d:
    ::FString::FString(&local_590,"CollisionPawn");
    ::FString::operator=(&local_e78,&local_590);
    ::FString::~FString(&local_590);
    break;
  case 0x8e:
    ::FString::FString(&local_580,"LightShafts");
    ::FString::operator=(&local_e78,&local_580);
    ::FString::~FString(&local_580);
    break;
  case 0x8f:
    ::FString::FString(&local_570,"PostProcessMaterial");
    ::FString::operator=(&local_e78,&local_570);
    ::FString::~FString(&local_570);
    break;
  case 0x90:
    ::FString::FString(&local_560,"Atmosphere");
    ::FString::operator=(&local_e78,&local_560);
    ::FString::~FString(&local_560);
    break;
  case 0x91:
    ::FString::FString(&local_550,"Cloud");
    ::FString::operator=(&local_e78,&local_550);
    ::FString::~FString(&local_550);
    break;
  case 0x92:
    ::FString::FString(&local_540,"CameraAspectRatioBars");
    ::FString::operator=(&local_e78,&local_540);
    ::FString::~FString(&local_540);
    break;
  case 0x93:
    ::FString::FString(&local_530,"CameraSafeFrames");
    ::FString::operator=(&local_e78,&local_530);
    ::FString::~FString(&local_530);
    break;
  case 0x94:
    ::FString::FString(&local_520,"TextRender");
    ::FString::operator=(&local_e78,&local_520);
    ::FString::~FString(&local_520);
    break;
  case 0x95:
    ::FString::FString(&local_510,"Rendering");
    ::FString::operator=(&local_e78,&local_510);
    ::FString::~FString(&local_510);
    break;
  case 0x96:
    ::FString::FString(&local_500,"HighResScreenshotMask");
    ::FString::operator=(&local_e78,&local_500);
    ::FString::~FString(&local_500);
    break;
  case 0x97:
    ::FString::FString(&local_4f0,"HMDDistortion");
    ::FString::operator=(&local_e78,&local_4f0);
    ::FString::~FString(&local_4f0);
    break;
  case 0x98:
    ::FString::FString(&local_4e0,"StereoRendering");
    ::FString::operator=(&local_e78,&local_4e0);
    ::FString::~FString(&local_4e0);
    break;
  case 0x99:
    ::FString::FString(&local_4d0,"DistanceCulledPrimitives");
    ::FString::operator=(&local_e78,&local_4d0);
    ::FString::~FString(&local_4d0);
    break;
  case 0x9a:
    ::FString::FString(&local_4c0,"VisualizeLightCulling");
    ::FString::operator=(&local_e78,&local_4c0);
    ::FString::~FString(&local_4c0);
    break;
  case 0x9b:
    ::FString::FString(&local_4b0,"PrecomputedVisibility");
    ::FString::operator=(&local_e78,&local_4b0);
    ::FString::~FString(&local_4b0);
    break;
  case 0x9c:
    ::FString::FString(&local_4a0,"SkyLighting");
    ::FString::operator=(&local_e78,&local_4a0);
    ::FString::~FString(&local_4a0);
    break;
  case 0x9d:
    ::FString::FString(&local_490,"PreviewShadowsIndicator");
    ::FString::operator=(&local_e78,&local_490);
    ::FString::~FString(&local_490);
    break;
  case 0x9e:
    ::FString::FString(&local_480,"PrecomputedVisibilityCells");
    ::FString::operator=(&local_e78,&local_480);
    ::FString::~FString(&local_480);
    break;
  case 0x9f:
    ::FString::FString(&local_470,"VisualizeVolumetricLightmap");
    ::FString::operator=(&local_e78,&local_470);
    ::FString::~FString(&local_470);
    break;
  case 0xa0:
    ::FString::FString(&local_460,"VolumeLightingSamples");
    ::FString::operator=(&local_e78,&local_460);
    ::FString::~FString(&local_460);
    break;
  case 0xa1:
    ::FString::FString(&local_450,"Paper2DSprites");
    ::FString::operator=(&local_e78,&local_450);
    ::FString::~FString(&local_450);
    break;
  case 0xa2:
    ::FString::FString(&local_440,"VisualizeDistanceFieldAO");
    ::FString::operator=(&local_e78,&local_440);
    ::FString::~FString(&local_440);
    break;
  case 0xa3:
    ::FString::FString(&local_430,"VisualizeMeshDistanceFields");
    ::FString::operator=(&local_e78,&local_430);
    ::FString::~FString(&local_430);
    break;
  case 0xa4:
    ::FString::FString(&local_420,"PhysicsField");
    ::FString::operator=(&local_e78,&local_420);
    ::FString::~FString(&local_420);
    break;
  case 0xa5:
    ::FString::FString(&local_410,"VisualizeGlobalDistanceField");
    ::FString::operator=(&local_e78,&local_410);
    ::FString::~FString(&local_410);
    break;
  case 0xa6:
    ::FString::FString(&local_400,"VisualizeLightingOnProbes");
    ::FString::operator=(&local_e78,&local_400);
    ::FString::~FString(&local_400);
    break;
  case 0xa7:
    ::FString::FString(&local_3f0,"ScreenSpaceAO");
    ::FString::operator=(&local_e78,&local_3f0);
    ::FString::~FString(&local_3f0);
    break;
  case 0xa8:
    ::FString::FString(&local_3e0,"DistanceFieldAO");
    ::FString::operator=(&local_e78,&local_3e0);
    ::FString::~FString(&local_3e0);
    break;
  case 0xa9:
    ::FString::FString(&local_3d0,"LumenGlobalIllumination");
    ::FString::operator=(&local_e78,&local_3d0);
    ::FString::~FString(&local_3d0);
    break;
  case 0xaa:
    ::FString::FString(&local_3c0,"VolumetricFog");
    ::FString::operator=(&local_e78,&local_3c0);
    ::FString::~FString(&local_3c0);
    break;
  case 0xab:
    ::FString::FString(&local_3b0,"VisualizeSSR");
    ::FString::operator=(&local_e78,&local_3b0);
    ::FString::~FString(&local_3b0);
    break;
  case 0xac:
    ::FString::FString(&local_3a0,"VisualizeShadingModels");
    ::FString::operator=(&local_e78,&local_3a0);
    ::FString::~FString(&local_3a0);
    break;
  case 0xad:
    ::FString::FString(&local_390,"VisualizeSenses");
    ::FString::operator=(&local_e78,&local_390);
    ::FString::~FString(&local_390);
    break;
  case 0xae:
    ::FString::FString(&local_380,"LODColoration");
    ::FString::operator=(&local_e78,&local_380);
    ::FString::~FString(&local_380);
    break;
  case 0xaf:
    ::FString::FString(&local_370,"HLODColoration");
    ::FString::operator=(&local_e78,&local_370);
    ::FString::~FString(&local_370);
    break;
  case 0xb0:
    ::FString::FString(&local_360,"QuadOverdraw");
    ::FString::operator=(&local_e78,&local_360);
    ::FString::~FString(&local_360);
    break;
  case 0xb1:
    ::FString::FString(&local_350,"ShaderComplexityWithQuadOverdraw");
    ::FString::operator=(&local_e78,&local_350);
    ::FString::~FString(&local_350);
    break;
  case 0xb2:
    ::FString::FString(&local_340,"PrimitiveDistanceAccuracy");
    ::FString::operator=(&local_e78,&local_340);
    ::FString::~FString(&local_340);
    break;
  case 0xb3:
    ::FString::FString(&local_330,"MeshUVDensityAccuracy");
    ::FString::operator=(&local_e78,&local_330);
    ::FString::~FString(&local_330);
    break;
  case 0xb4:
    ::FString::FString(&local_320,"MaterialTextureScaleAccuracy");
    ::FString::operator=(&local_e78,&local_320);
    ::FString::~FString(&local_320);
    break;
  case 0xb5:
    ::FString::FString(&local_310,"OutputMaterialTextureScales");
    ::FString::operator=(&local_e78,&local_310);
    ::FString::~FString(&local_310);
    break;
  case 0xb6:
    ::FString::FString(&local_300,"RequiredTextureResolution");
    ::FString::operator=(&local_e78,&local_300);
    ::FString::~FString(&local_300);
    break;
  case 0xb7:
    ::FString::FString(&local_2f0,"VisualizeVirtualTexture");
    ::FString::operator=(&local_e78,&local_2f0);
    ::FString::~FString(&local_2f0);
    break;
  case 0xb8:
    ::FString::FString(&local_2e0,"WidgetComponents");
    ::FString::operator=(&local_e78,&local_2e0);
    ::FString::~FString(&local_2e0);
    break;
  case 0xb9:
    ::FString::FString(&local_2d0,"Bones");
    ::FString::operator=(&local_e78,&local_2d0);
    ::FString::~FString(&local_2d0);
    break;
  case 0xba:
    ::FString::FString(&local_2c0,"ServerDrawDebug");
    ::FString::operator=(&local_e78,&local_2c0);
    ::FString::~FString(&local_2c0);
    break;
  case 0xbb:
    ::FString::FString(&local_2b0,"MediaPlanes");
    ::FString::operator=(&local_e78,&local_2b0);
    ::FString::~FString(&local_2b0);
    break;
  case 0xbc:
    ::FString::FString(&local_2a0,"VREditing");
    ::FString::operator=(&local_e78,&local_2a0);
    ::FString::~FString(&local_2a0);
    break;
  case 0xbd:
    ::FString::FString(&local_290,"OcclusionMeshes");
    ::FString::operator=(&local_e78,&local_290);
    ::FString::~FString(&local_290);
    break;
  case 0xbe:
    ::FString::FString(&local_280,"VisualizeInstanceOcclusionQueries");
    ::FString::operator=(&local_e78,&local_280);
    ::FString::~FString(&local_280);
    break;
  case 0xbf:
    ::FString::FString(&local_270,"DisableOcclusionQueries");
    ::FString::operator=(&local_e78,&local_270);
    ::FString::~FString(&local_270);
    break;
  case 0xc0:
    ::FString::FString(&local_260,"PathTracing");
    ::FString::operator=(&local_e78,&local_260);
    ::FString::~FString(&local_260);
    break;
  case 0xc1:
    ::FString::FString(&local_250,"RayTracingDebug");
    ::FString::operator=(&local_e78,&local_250);
    ::FString::~FString(&local_250);
    break;
  case 0xc2:
    ::FString::FString(&local_240,"VisualizeSkyAtmosphere");
    ::FString::operator=(&local_e78,&local_240);
    ::FString::~FString(&local_240);
    break;
  case 0xc3:
    ::FString::FString(&local_230,"VisualizeLightFunctionAtlas");
    ::FString::operator=(&local_e78,&local_230);
    ::FString::~FString(&local_230);
    break;
  case 0xc4:
    ::FString::FString(&local_220,"VisualizeCalibrationColor");
    ::FString::operator=(&local_e78,&local_220);
    ::FString::~FString(&local_220);
    break;
  case 0xc5:
    ::FString::FString(&local_210,"VisualizeCalibrationGrayscale");
    ::FString::operator=(&local_e78,&local_210);
    ::FString::~FString(&local_210);
    break;
  case 0xc6:
    ::FString::FString(&local_200,"VisualizeCalibrationCustom");
    ::FString::operator=(&local_e78,&local_200);
    ::FString::~FString(&local_200);
    break;
  case 199:
    ::FString::FString(&local_1f0,"VisualizePostProcessStack");
    ::FString::operator=(&local_e78,&local_1f0);
    ::FString::~FString(&local_1f0);
    break;
  case 200:
    ::FString::FString(&local_1e0,"VirtualTexturePrimitives");
    ::FString::operator=(&local_e78,&local_1e0);
    ::FString::~FString(&local_1e0);
    break;
  case 0xc9:
    ::FString::FString(&local_1d0,"VisualizeVolumetricCloudConservativeDensity");
    ::FString::operator=(&local_e78,&local_1d0);
    ::FString::~FString(&local_1d0);
    break;
  case 0xca:
    ::FString::FString(&local_1c0,"VisualizeVolumetricCloudEmptySpaceSkipping");
    ::FString::operator=(&local_e78,&local_1c0);
    ::FString::~FString(&local_1c0);
    break;
  case 0xcb:
    ::FString::FString(&local_1b0,"VirtualShadowMapPersistentData");
    ::FString::operator=(&local_e78,&local_1b0);
    ::FString::~FString(&local_1b0);
    break;
  case 0xcc:
    ::FString::FString(&local_1a0,"DebugDrawDistantVirtualSMLights");
    ::FString::operator=(&local_e78,&local_1a0);
    ::FString::~FString(&local_1a0);
    break;
  case 0xcd:
    ::FString::FString(&local_190,"VirtualTextureResidency");
    ::FString::operator=(&local_e78,&local_190);
    ::FString::~FString(&local_190);
    break;
  case 0xce:
    ::FString::FString(&local_180,"InputDebugVisualizer");
    ::FString::operator=(&local_e78,&local_180);
    ::FString::~FString(&local_180);
    break;
  case 0xcf:
    ::FString::FString(&local_170,"LumenScreenTraces");
    ::FString::operator=(&local_e78,&local_170);
    ::FString::~FString(&local_170);
    break;
  case 0xd0:
    ::FString::FString(&local_160,"LumenDetailTraces");
    ::FString::operator=(&local_e78,&local_160);
    ::FString::~FString(&local_160);
    break;
  case 0xd1:
    ::FString::FString(&local_150,"LumenGlobalTraces");
    ::FString::operator=(&local_e78,&local_150);
    ::FString::~FString(&local_150);
    break;
  case 0xd2:
    ::FString::FString(&local_140,"LumenFarFieldTraces");
    ::FString::operator=(&local_e78,&local_140);
    ::FString::~FString(&local_140);
    break;
  case 0xd3:
    ::FString::FString(&local_130,"LumenSecondaryBounces");
    ::FString::operator=(&local_e78,&local_130);
    ::FString::~FString(&local_130);
    break;
  case 0xd4:
    ::FString::FString(&local_120,"LumenShortRangeAmbientOcclusion");
    ::FString::operator=(&local_e78,&local_120);
    ::FString::~FString(&local_120);
    break;
  case 0xd5:
    ::FString::FString(&local_110,"NaniteMeshes");
    ::FString::operator=(&local_e78,&local_110);
    ::FString::~FString(&local_110);
    break;
  case 0xd6:
    ::FString::FString(&local_100,"NaniteStreamingGeometry");
    ::FString::operator=(&local_e78,&local_100);
    ::FString::~FString(&local_100);
    break;
  case 0xd7:
    ::FString::FString(&local_f0,"VisualizeGPUSkinCache");
    ::FString::operator=(&local_e78,&local_f0);
    ::FString::~FString(&local_f0);
    break;
  case 0xd8:
    ::FString::FString(&local_e0,"VisualizeLWCComplexity");
    ::FString::operator=(&local_e78,&local_e0);
    ::FString::~FString(&local_e0);
    break;
  case 0xd9:
    ::FString::FString(&local_d0,"VisualizeShadowCasters");
    ::FString::operator=(&local_e78,&local_d0);
    ::FString::~FString(&local_d0);
    break;
  case 0xda:
    ::FString::FString(&local_c0,"ShaderPrint");
    ::FString::operator=(&local_e78,&local_c0);
    ::FString::~FString(&local_c0);
    break;
  case 0xdb:
    ::FString::FString(&local_b0,"SceneCaptureCopySceneDepth");
    ::FString::operator=(&local_e78,&local_b0);
    ::FString::~FString(&local_b0);
    break;
  case 0xdc:
    ::FString::FString(&local_a0,"Cameras");
    ::FString::operator=(&local_e78,&local_a0);
    ::FString::~FString(&local_a0);
    break;
  case 0xdd:
    ::FString::FString(&local_90,"Hair");
    ::FString::operator=(&local_e78,&local_90);
    ::FString::~FString(&local_90);
    break;
  case 0xde:
    ::FString::FString(&local_80,"AllowPrimitiveAlphaHoldout");
    ::FString::operator=(&local_e78,&local_80);
    ::FString::~FString(&local_80);
    break;
  case 0xdf:
    ::FString::FString(&local_70,"AlphaInvert");
    ::FString::operator=(&local_e78,&local_70);
    ::FString::~FString(&local_70);
    break;
  case 0xe0:
    ::FString::FString(&local_60,"StereoMotionVectors");
    ::FString::operator=(&local_e78,&local_60);
    ::FString::~FString(&local_60);
    break;
  case 0xe1:
    ::FString::FString(&local_50,"Clay");
    ::FString::operator=(&local_e78,&local_50);
    ::FString::~FString(&local_50);
    break;
  case 0xe2:
    ::FString::FString(&local_40,"Zebra");
    ::FString::operator=(&local_e78,&local_40);
    ::FString::~FString(&local_40);
    break;
  case 0xe3:
    ::FString::FString(&local_30,"FrontBackFace");
    ::FString::operator=(&local_e78,&local_30);
    ::FString::~FString(&local_30);
    break;
  case 0xe4:
    ::FString::FString(local_20,"RandomColor");
    ::FString::operator=(&local_e78,local_20);
    ::FString::~FString(local_20);
    break;
  default:
    GetCustomShowFlagName(__return_storage_ptr__,param_1 - 0xe5);
    ::FString::~FString(&local_e78);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&local_e78);
  ::FString::~FString(&local_e78);
  return __return_storage_ptr__;
}

// GetCustomShowFlagDisplayName @ 1485c45d0

FText * __cdecl
FEngineShowFlags::GetCustomShowFlagDisplayName
          (FText *__return_storage_ptr__,ECustomShowFlag param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  FText *pFVar5;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar6 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
  if (((int)param_1 < 0) || (pTVar6->ArrayNum <= (int)param_1)) {
    FText::FText(__return_storage_ptr__);
  }
  else {
    pTVar6 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    uVar7 = 0;
    if ((int)param_1 < pTVar6->ArrayNum) {
      uVar7 = ~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = *(ITextData **)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x10);
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    __return_storage_ptr__->Flags = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x30 + 0x18);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetCustomShowFlagGroup @ 1485c46f0

EShowFlagGroup __cdecl FEngineShowFlags::GetCustomShowFlagGroup(ECustomShowFlag param_1)

{
  code *pcVar1;
  bool bVar2;
  EShowFlagGroup EVar3;
  FPlatformRWLock *SRWLock;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
  if (((int)param_1 < 0) || (pTVar4->ArrayNum <= (int)param_1)) {
    EVar3 = SFG_Normal;
  }
  else {
    pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    uVar5 = 0;
    if ((int)param_1 < pTVar4->ArrayNum) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    EVar3 = *(EShowFlagGroup *)
             ((pTVar4->AllocatorInstance).Data + (longlong)(int)param_1 * 0x30 + 0x20);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return EVar3;
}

// GetCustomShowFlagName @ 1485c47e0

FString * __cdecl
FEngineShowFlags::GetCustomShowFlagName(FString *__return_storage_ptr__,ECustomShowFlag param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  FString *pFVar3;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
  if ((-1 < (int)param_1) && ((int)param_1 < pTVar4->ArrayNum)) {
    pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    uVar5 = 0;
    if ((int)param_1 < pTVar4->ArrayNum) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    ::FString::FString(__return_storage_ptr__,
                       (FString *)((pTVar4->AllocatorInstance).Data + (longlong)(int)param_1 * 0x30)
                      );
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetSingleFlag @ 1485c7e00

bool __thiscall FEngineShowFlags::GetSingleFlag(FEngineShowFlags *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPlatformRWLock *SRWLock;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  
  switch(param_1) {
  case 0:
    return this->PostProcessing;
  case 1:
    return this->Bloom;
  case 2:
    return this->LocalExposure;
  case 3:
    return this->Tonemapper;
  case 4:
    return this->AntiAliasing;
  case 5:
    return this->TemporalAA;
  case 6:
    return this->AmbientCubemap;
  case 7:
    return this->EyeAdaptation;
  case 8:
    return this->VisualizeHDR;
  case 9:
    return this->VisualizeSkyLightIlluminance;
  case 10:
    return this->VisualizeLocalFogVolumes;
  case 0xb:
    return this->VisualizeLocalExposure;
  case 0xc:
    return this->LensFlares;
  case 0xd:
    return this->LensDistortion;
  case 0xe:
    return this->GlobalIllumination;
  case 0xf:
    return this->Vignette;
  case 0x10:
    return this->Grain;
  case 0x11:
    return this->AmbientOcclusion;
  case 0x12:
    return this->Decals;
  case 0x13:
    return this->CameraImperfections;
  case 0x14:
    return this->OnScreenDebug;
  case 0x15:
    return this->OverrideDiffuseAndSpecular;
  case 0x16:
    return this->LightingOnlyOverride;
  case 0x17:
    return this->ReflectionOverride;
  case 0x18:
    return this->MaterialNormal;
  case 0x19:
    return this->MaterialAmbientOcclusion;
  case 0x1a:
    return this->VisualizeBuffer;
  case 0x1b:
    return this->VisualizeNanite;
  case 0x1c:
    return this->VisualizeLumen;
  case 0x1d:
    return this->VisualizeSubstrate;
  case 0x1e:
    return this->VisualizeGroom;
  case 0x1f:
    return this->VisualizeVirtualShadowMap;
  case 0x20:
    return this->DirectLighting;
  case 0x21:
    return this->DirectionalLights;
  case 0x22:
    return this->PointLights;
  case 0x23:
    return this->SpotLights;
  case 0x24:
    return this->RectLights;
  case 0x25:
    return this->ColorGrading;
  case 0x26:
    return this->VectorFields;
  case 0x27:
    return this->DepthOfField;
  case 0x28:
    return this->GBufferHints;
  case 0x29:
    return this->MotionBlur;
  case 0x2a:
    return this->CompositeDebugPrimitives;
  case 0x2b:
    return this->CompositeEditorPrimitives;
  case 0x2c:
    return this->OpaqueCompositeEditorPrimitives;
  case 0x2d:
    return this->TestImage;
  case 0x2e:
    return this->VisualizeDOF;
  case 0x2f:
    return this->VertexColors;
  case 0x30:
    return this->PhysicalMaterialMasks;
  case 0x31:
    return this->Refraction;
  case 0x32:
    return this->CameraInterpolation;
  case 0x33:
    return this->SceneColorFringe;
  case 0x34:
    return this->ToneCurve;
  case 0x35:
    return this->SeparateTranslucency;
  case 0x36:
    return this->ScreenPercentage;
  case 0x37:
    return this->VisualizeMotionBlur;
  case 0x38:
    return this->VisualizeMotionVectors;
  case 0x39:
    return this->VisualizeReprojection;
  case 0x3a:
    return this->VisualizeTemporalUpscaler;
  case 0x3b:
    return this->VisualizeTSR;
  case 0x3c:
    return this->MegaLights;
  case 0x3d:
    return this->ReflectionEnvironment;
  case 0x3e:
    return this->VisualizeOutOfBoundsPixels;
  case 0x3f:
    return this->Diffuse;
  case 0x40:
    return this->Specular;
  case 0x41:
    return this->SelectionOutline;
  case 0x42:
    return this->ScreenSpaceReflections;
  case 0x43:
    return this->LumenReflections;
  case 0x44:
    return this->ContactShadows;
  case 0x45:
    return this->RayTracedDistanceFieldShadows;
  case 0x46:
    return this->CapsuleShadows;
  case 0x47:
    return this->SubsurfaceScattering;
  case 0x48:
    return this->VisualizeSSS;
  case 0x49:
    return this->VolumetricLightmap;
  case 0x4a:
    return this->IndirectLightingCache;
  case 0x4b:
    return this->DebugAI;
  case 0x4c:
    return this->VisLog;
  case 0x4d:
    return this->Navigation;
  case 0x4e:
    return this->GameplayDebug;
  case 0x4f:
    return this->TexturedLightProfiles;
  case 0x50:
    return this->LightFunctions;
  case 0x51:
    return this->InstancedStaticMeshes;
  case 0x52:
    return this->InstancedFoliage;
  case 0x53:
    return this->HISMCOcclusionBounds;
  case 0x54:
    return this->HISMCClusterTree;
  case 0x55:
    return this->VisualizeInstanceUpdates;
  case 0x56:
    return this->InstancedGrass;
  case 0x57:
    return this->DynamicShadows;
  case 0x58:
    return this->Particles;
  case 0x59:
    return this->Niagara;
  case 0x5a:
    return this->HeterogeneousVolumes;
  case 0x5b:
    return this->SkeletalMeshes;
  case 0x5c:
    return this->BuilderBrush;
  case 0x5d:
    return this->Translucency;
  case 0x5e:
    return this->BillboardSprites;
  case 0x5f:
    return this->LOD;
  case 0x60:
    return this->LightComplexity;
  case 0x61:
    return this->ShaderComplexity;
  case 0x62:
    return this->StationaryLightOverlap;
  case 99:
    return this->LightMapDensity;
  case 100:
    return this->StreamingBounds;
  case 0x65:
    return this->Constraints;
  case 0x66:
    return this->MassProperties;
  case 0x67:
    return this->CameraFrustums;
  case 0x68:
    return this->AudioRadius;
  case 0x69:
    return this->ForceFeedbackRadius;
  case 0x6a:
    return this->BSPSplit;
  case 0x6b:
    return this->Brushes;
  case 0x6c:
    return this->Lighting;
  case 0x6d:
    return this->UnlitRichView;
  case 0x6e:
    return this->UnlitViewmode;
  case 0x6f:
    return this->DeferredLighting;
  case 0x70:
    return this->Editor;
  case 0x71:
    return this->BSPTriangles;
  case 0x72:
    return this->LargeVertices;
  case 0x73:
    return this->Grid;
  case 0x74:
    return this->Snap;
  case 0x75:
    return this->MeshEdges;
  case 0x76:
    return this->Cover;
  case 0x77:
    return this->Splines;
  case 0x78:
    return this->Selection;
  case 0x79:
    return this->VisualizeLevelInstanceEditing;
  case 0x7a:
    return this->EditingLevelInstance;
  case 0x7b:
    return this->ModeWidgets;
  case 0x7c:
    return this->Bounds;
  case 0x7d:
    return this->HitProxies;
  case 0x7e:
    return this->LightInfluences;
  case 0x7f:
    return this->Pivot;
  case 0x80:
    return this->ShadowFrustums;
  case 0x81:
    return this->Wireframe;
  case 0x82:
    return this->Materials;
  case 0x83:
    return this->StaticMeshes;
  case 0x84:
    return this->Landscape;
  case 0x85:
    return this->LightRadius;
  case 0x86:
    return this->Fog;
  case 0x87:
    return this->Volumes;
  case 0x88:
    return this->Game;
  case 0x89:
    return this->ActorColoration;
  case 0x8a:
    return this->BSP;
  case 0x8b:
    return this->Collision;
  case 0x8c:
    return this->CollisionVisibility;
  case 0x8d:
    return this->CollisionPawn;
  case 0x8e:
    return this->LightShafts;
  case 0x8f:
    return this->PostProcessMaterial;
  case 0x90:
    return this->Atmosphere;
  case 0x91:
    return this->Cloud;
  case 0x92:
    return this->CameraAspectRatioBars;
  case 0x93:
    return this->CameraSafeFrames;
  case 0x94:
    return this->TextRender;
  case 0x95:
    return this->Rendering;
  case 0x96:
    return this->HighResScreenshotMask;
  case 0x97:
    return this->HMDDistortion;
  case 0x98:
    return this->StereoRendering;
  case 0x99:
    return this->DistanceCulledPrimitives;
  case 0x9a:
    return this->VisualizeLightCulling;
  case 0x9b:
    return this->PrecomputedVisibility;
  case 0x9c:
    return this->SkyLighting;
  case 0x9d:
    return this->PreviewShadowsIndicator;
  case 0x9e:
    return this->PrecomputedVisibilityCells;
  case 0x9f:
    return this->VisualizeVolumetricLightmap;
  case 0xa0:
    return this->VolumeLightingSamples;
  case 0xa1:
    return this->Paper2DSprites;
  case 0xa2:
    return this->VisualizeDistanceFieldAO;
  case 0xa3:
    return this->VisualizeMeshDistanceFields;
  case 0xa4:
    return this->PhysicsField;
  case 0xa5:
    return this->VisualizeGlobalDistanceField;
  case 0xa6:
    return this->VisualizeLightingOnProbes;
  case 0xa7:
    return this->ScreenSpaceAO;
  case 0xa8:
    return this->DistanceFieldAO;
  case 0xa9:
    return this->LumenGlobalIllumination;
  case 0xaa:
    return this->VolumetricFog;
  case 0xab:
    return this->VisualizeSSR;
  case 0xac:
    return this->VisualizeShadingModels;
  case 0xad:
    return this->VisualizeSenses;
  case 0xae:
    return this->LODColoration;
  case 0xaf:
    return this->HLODColoration;
  case 0xb0:
    return this->QuadOverdraw;
  case 0xb1:
    return this->ShaderComplexityWithQuadOverdraw;
  case 0xb2:
    return this->PrimitiveDistanceAccuracy;
  case 0xb3:
    return this->MeshUVDensityAccuracy;
  case 0xb4:
    return this->MaterialTextureScaleAccuracy;
  case 0xb5:
    return this->OutputMaterialTextureScales;
  case 0xb6:
    return this->RequiredTextureResolution;
  case 0xb7:
    return this->VisualizeVirtualTexture;
  case 0xb8:
    return this->WidgetComponents;
  case 0xb9:
    return this->Bones;
  case 0xba:
    return this->ServerDrawDebug;
  case 0xbb:
    return this->MediaPlanes;
  case 0xbc:
    return this->VREditing;
  case 0xbd:
    return this->OcclusionMeshes;
  case 0xbe:
    return this->VisualizeInstanceOcclusionQueries;
  case 0xbf:
    return this->DisableOcclusionQueries;
  case 0xc0:
    return this->PathTracing;
  case 0xc1:
    return this->RayTracingDebug;
  case 0xc2:
    return this->VisualizeSkyAtmosphere;
  case 0xc3:
    return this->VisualizeLightFunctionAtlas;
  case 0xc4:
    return this->VisualizeCalibrationColor;
  case 0xc5:
    return this->VisualizeCalibrationGrayscale;
  case 0xc6:
    return this->VisualizeCalibrationCustom;
  case 199:
    return this->VisualizePostProcessStack;
  case 200:
    return this->VirtualTexturePrimitives;
  case 0xc9:
    return this->VisualizeVolumetricCloudConservativeDensity;
  case 0xca:
    return this->VisualizeVolumetricCloudEmptySpaceSkipping;
  case 0xcb:
    return this->VirtualShadowMapPersistentData;
  case 0xcc:
    return this->DebugDrawDistantVirtualSMLights;
  case 0xcd:
    return this->VirtualTextureResidency;
  case 0xce:
    return this->InputDebugVisualizer;
  case 0xcf:
    return this->LumenScreenTraces;
  case 0xd0:
    return this->LumenDetailTraces;
  case 0xd1:
    return this->LumenGlobalTraces;
  case 0xd2:
    return this->LumenFarFieldTraces;
  case 0xd3:
    return this->LumenSecondaryBounces;
  case 0xd4:
    return this->LumenShortRangeAmbientOcclusion;
  case 0xd5:
    return this->NaniteMeshes;
  case 0xd6:
    return this->NaniteStreamingGeometry;
  case 0xd7:
    return this->VisualizeGPUSkinCache;
  case 0xd8:
    return this->VisualizeLWCComplexity;
  case 0xd9:
    return this->VisualizeShadowCasters;
  case 0xda:
    return this->ShaderPrint;
  case 0xdb:
    return this->SceneCaptureCopySceneDepth;
  case 0xdc:
    return this->Cameras;
  case 0xdd:
    return this->Hair;
  case 0xde:
    return this->AllowPrimitiveAlphaHoldout;
  case 0xdf:
    return this->AlphaInvert;
  case 0xe0:
    return this->StereoMotionVectors;
  case 0xe1:
    return this->Clay;
  case 0xe2:
    return this->Zebra;
  case 0xe3:
    return this->FrontBackFace;
  case 0xe4:
    return this->RandomColor;
  }
  uVar5 = param_1 - 0xe5;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->CustomShowFlags).NumBits)) {
    FVar6 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&this->CustomShowFlags;
    }
    return (*(uint *)((longlong)FVar6 +
                     (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
            (uVar5 & 0x1f) & 1) != 0;
  }
  SRWLock = CustomShowFlagsInternal::GetLock();
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
  if ((-1 < (int)uVar5) && ((int)uVar5 < pTVar4->ArrayNum)) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return false;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShowFlags.cpp"
                     ,0xa2,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// InitCustomShowFlags @ 1485cc930

void __thiscall
FEngineShowFlags::InitCustomShowFlags(FEngineShowFlags *this,EShowFlagInitMode param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPlatformRWLock *SRWLock;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  ForElementType<unsigned_int> FVar7;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint uVar8;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this_00 = &this->CustomShowFlags;
  pTVar6 = CustomShowFlagsInternal::GetDefaultState();
  if (param_1 == ESFIM_All0) {
    iVar5 = pTVar6->NumBits;
    (this->CustomShowFlags).NumBits = iVar5;
    uVar4 = iVar5 + 0x1f;
    uVar8 = uVar4 >> 5;
    if (uVar4 >> 5 != 0) {
      if ((this->CustomShowFlags).MaxBits + 0x1fU >> 5 < uVar8) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar8,4);
        (this->CustomShowFlags).MaxBits = uVar8 << 5;
      }
      FVar7 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)this_00;
      }
      memset((void *)FVar7,0,(ulonglong)uVar8 << 2);
      iVar5 = (this->CustomShowFlags).NumBits;
      uVar8 = iVar5 >> 0x1f & 0x1f;
      uVar4 = iVar5 + uVar8;
      iVar5 = (uVar4 & 0x1f) - uVar8;
      if (iVar5 != 0) {
        FVar7 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          FVar7 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar4 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
      }
    }
  }
  else if (this_00 != pTVar6) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(this_00,pTVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001485cca4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// IsForceFlagSet @ 1485cde40

bool __cdecl FEngineShowFlags::IsForceFlagSet(uint param_1)

{
  return ((byte)((&((FEngineShowFlags *)(&GSystemSettings.Force1Mask.CustomShowFlags + -1))->
                   field_0x0)[param_1 >> 3] |
                (&((FEngineShowFlags *)(&GSystemSettings.Force0Mask.CustomShowFlags + -1))->
                  field_0x0)[param_1 >> 3]) >> (param_1 & 7) & 1) == 0;
}

// IsRegisteredCustomShowFlag @ 1485ce390

bool __cdecl FEngineShowFlags::IsRegisteredCustomShowFlag(ECustomShowFlag param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPlatformRWLock *SRWLock;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar4;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
  if (((int)param_1 < 0) || (pTVar4->ArrayNum <= (int)param_1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return bVar2;
}

// IterateCustomFlags @ 1485ce7a0

void __cdecl
FEngineShowFlags::IterateCustomFlags
          (TFunctionRef<bool___cdecl(unsigned_int,FString_const_&)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_res10 [2];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShowFlags.cpp"
                         ,0x447,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = 0;
  while( true ) {
    lVar1 = *(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`CustomShowFlagsInternal::GetRegisteredCustomShowFlags'::__l2::
             _dynamic_atexit_destructor_for__RegisteredCustomShowFlags__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar7 = RegisteredCustomShowFlags.ArrayNum;
    if (iVar7 <= (int)uVar8) {
      return;
    }
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`CustomShowFlagsInternal::GetRegisteredCustomShowFlags'::__l2::
               _dynamic_atexit_destructor_for__RegisteredCustomShowFlags__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar7 = RegisteredCustomShowFlags.ArrayNum;
    }
    uVar6 = 0;
    if ((int)uVar8 < iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    local_res10[0] = uVar8 + 0xe5;
    cVar5 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,local_res10,
                       RegisteredCustomShowFlags.AllocatorInstance.Data +
                       (longlong)(int)uVar8 * 0x30);
    if (cVar5 == '\0') {
      return;
    }
    uVar8 = uVar8 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RegisterCustomShowFlag @ 1485d4ab0

ECustomShowFlag __cdecl
FEngineShowFlags::RegisterCustomShowFlag
          (wchar_t *param_1,bool param_2,EShowFlagGroup param_3,FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wchar_t wVar6;
  ECustomShowFlag EVar7;
  uint uVar8;
  FPlatformRWLock *SRWLock;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar9;
  TBitArray<FDefaultBitArrayAllocator> *this;
  TMap<FString,FEngineShowFlags::ECustomShowFlag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FEngineShowFlags::ECustomShowFlag,0>_>
  *this_00;
  FText *pFVar10;
  IConsoleManager *pIVar11;
  undefined8 uVar12;
  ForElementType<unsigned_int> FVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  wchar_t *local_res8;
  int *piVar20;
  ECustomShowFlag local_b8 [2];
  FString local_b0;
  TPairInitializer<FString_const_&,FEngineShowFlags::ECustomShowFlag_const_&> local_a0;
  wchar_t **local_90;
  FText local_88;
  FString local_78;
  FString *local_68;
  ECustomShowFlag *local_60;
  FDestructionSentinel local_58;
  FText local_40;
  
  local_res8 = param_1;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShowFlags.cpp"
                         ,0x40a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar7 = (*pcVar2)();
    return EVar7;
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  wVar6 = *local_res8;
  pwVar14 = local_res8;
  if (wVar6 != L'\0') {
    do {
      if (((ushort)(wVar6 + L'ﾟ') < 0x1a) ||
         (((ushort)(wVar6 + L'￐') < 0x30 &&
          ((0x87fffffe03ffU >> ((ulonglong)(ushort)(wVar6 + L'￐') & 0x3f) & 1) != 0)))) {
LAB_1485d4b55:
        ::FString::AppendChar(&local_b0,*pwVar14);
      }
      else {
        local_a0.Value = (ECustomShowFlag *)&local_res8;
        bVar3 = `FEngineShowFlags::RegisterCustomShowFlag'::__l12::<lambda_1>::operator()
                          (&local_a0.Value);
        if (bVar3) goto LAB_1485d4b55;
      }
      wVar6 = pwVar14[1];
      pwVar14 = pwVar14 + 1;
    } while (wVar6 != L'\0');
    pwVar14 = (wchar_t *)local_b0.Data.AllocatorInstance.Data;
    if (local_b0.Data.ArrayNum != 0) goto LAB_1485d4b7f;
  }
  pwVar14 = L"";
LAB_1485d4b7f:
  uVar8 = FindIndexByName(pwVar14,(wchar_t *)0x0);
  if (uVar8 == 0xffffffff) {
    SRWLock = CustomShowFlagsInternal::GetLock();
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar7 = (*pcVar2)();
      return EVar7;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar9 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    piVar20 = &pTVar9->ArrayNum;
    EVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,&pTVar9->AllocatorInstance,piVar20,&pTVar9->ArrayMax);
    DefaultConstructItems<FCustomShowFlagData,int>
              ((pTVar9->AllocatorInstance).Data + (longlong)(int)EVar7 * 0x30,1);
    local_b8[0] = EVar7;
    this = CustomShowFlagsInternal::GetDefaultState();
    TBitArray<FDefaultBitArrayAllocator>::Add(this,true);
    this_00 = CustomShowFlagsInternal::GetNameToIndex();
    local_68 = &local_b0;
    local_60 = local_b8;
    TSet<TTuple<FString,enum_FEngineShowFlags::ECustomShowFlag>,TDefaultMapHashableKeyFuncs<FString,enum_FEngineShowFlags::ECustomShowFlag,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,enum_FEngineShowFlags::ECustomShowFlag_const_&>_>
              (this_00,&local_a0,(bool *)&local_68);
    pTVar9 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    piVar17 = (int *)(longlong)(int)local_b8[0];
    uVar8 = 0;
    if ((int)local_b8[0] < pTVar9->ArrayNum) {
      uVar8 = ~local_b8[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (piVar20 = piVar17,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar7 = (*pcVar2)();
      return EVar7;
    }
    pFVar18 = (pTVar9->AllocatorInstance).Data + (longlong)piVar17 * 0x30;
    if (pFVar18 != (FScriptContainerElement *)&local_b0) {
      if (*(void **)&pFVar18->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar18->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar18->field_0x0 = local_b0.Data.AllocatorInstance.Data;
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar18 + 8) = local_b0.Data.ArrayNum;
      *(int *)(pFVar18 + 0xc) = local_b0.Data.ArrayMax;
      local_b0.Data.ArrayNum = 0;
      local_b0.Data.ArrayMax = 0;
    }
    bVar3 = FText::IsEmpty(param_4);
    if (bVar3) {
      pFVar10 = FText::FromString(&local_40,(FString *)pFVar18);
      FText::operator=((FText *)(pFVar18 + 0x10),pFVar10);
    }
    else {
      local_88.TextData.Reference = (param_4->TextData).Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 8))
                  (local_88.TextData.Reference,(undefined1 *)((longlong)&local_a0.Key + 4));
      }
      local_88.Flags = param_4->Flags;
      FText::operator=((FText *)(pFVar18 + 0x10),&local_88);
      local_40.TextData.Reference = local_88.TextData.Reference;
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    lVar16 = *(longlong *)(pFVar18 + 0x28);
    *(EShowFlagGroup *)&pFVar18[0x20].field_0x0 = param_3;
    if (lVar16 == 0) {
      pIVar11 = IConsoleManager::Get();
      pcVar2 = *(code **)((longlong)*pIVar11 + 0x18);
      ::FString::PrintfImpl(&local_78,L"ShowFlag.%s");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar15.Data = local_78.Data.AllocatorInstance.Data;
      }
      uVar12 = (*pcVar2)(pIVar11,FVar15.Data,2,
                         L"Allows to override a specific showflag (works in editor and game, \"show\" only works in game and UI only in editor)\nUseful to run a build many time with the same showflags (when put in consolevariables.ini like \"showflag.abc=0\")\n 0: force the showflag to be OFF\n 1: force the showflag to be ON\n 2: do not override this showflag (default)"
                         ,(ulonglong)piVar20 & 0xffffffff00000000);
      *(undefined8 *)(pFVar18 + 0x28) = uVar12;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    FVar13 = (ForElementType<unsigned_int>)CustomShowFlagsInternal::GetDefaultState();
    EVar7 = local_b8[0];
    if ((((int)local_b8[0] < 0) || (*(int *)((longlong)FVar13 + 0x18) <= (int)local_b8[0])) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar7 = (*pcVar2)();
      return EVar7;
    }
    if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar13 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
    }
    uVar19 = 1 << ((byte)EVar7 & 0x1f);
    lVar16 = (longlong)((int)(EVar7 + ((int)EVar7 >> 0x1f & 0x1fU)) >> 5);
    uVar8 = *(uint *)((longlong)FVar13 + lVar16 * 4);
    if (param_2) {
      uVar19 = uVar19 | uVar8;
    }
    else {
      uVar19 = ~uVar19 & uVar8;
    }
    *(uint *)((longlong)FVar13 + lVar16 * 4) = uVar19;
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnCustomShowFlagRegistered
               ,(FWriteAccessScope *)&local_58);
    bVar3 = false;
    OnCustomShowFlagRegistered._28_4_ = OnCustomShowFlagRegistered._28_4_ + 1;
    uVar8 = OnCustomShowFlagRegistered._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar16 = (longlong)(int)uVar8 << 4;
      bVar3 = false;
      do {
        uVar19 = 0;
        if ((int)uVar8 < (int)OnCustomShowFlagRegistered._16_4_) {
          uVar19 = ~uVar8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar7 = (*pcVar2)();
          return EVar7;
        }
        if (((*(int *)(lVar16 + 8 + OnCustomShowFlagRegistered._8_8_) == 0) ||
            (*(longlong **)(lVar16 + OnCustomShowFlagRegistered._8_8_) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(lVar16 + OnCustomShowFlagRegistered._8_8_) + 0x68))
                              (), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    OnCustomShowFlagRegistered._28_4_ = OnCustomShowFlagRegistered._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnCustomShowFlagRegistered,
                 false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    EVar7 = local_b8[0];
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pIVar1 = (param_4->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  }
  else {
    if (uVar8 < 0xe5) {
      local_90 = &local_res8;
      bVar3 = `FEngineShowFlags::RegisterCustomShowFlag'::__l19::<lambda_2>::operator()(&local_90);
      if (!bVar3) {
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        pIVar1 = (param_4->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        return None;
      }
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pIVar1 = (param_4->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    EVar7 = uVar8 - 0xe5;
  }
  return EVar7;
}

// SetFromString @ 1485d8760

bool __thiscall FEngineShowFlags::SetFromString(FEngineShowFlags *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  bool bVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FString local_18;
  
  bVar3 = false;
  do {
    wVar2 = *param_1;
    if ((ushort)wVar2 < 0x61) {
      if (((ushort)(wVar2 + L'￐') < 0x30) &&
         ((0x87fffffe03ffU >> ((ulonglong)(ushort)(wVar2 + L'￐') & 0x3f) & 1) != 0)) break;
      if (wVar2 == L',') goto LAB_1485d87b0;
      if (wVar2 == L'=') goto LAB_1485d87b0;
    }
    else if ((ushort)wVar2 < 0x7b) break;
    param_1 = param_1 + 1;
  } while( true );
joined_r0x0001485d87a6:
  if (wVar2 == L'\0') {
    return !bVar3;
  }
LAB_1485d87b0:
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  do {
    wVar2 = *param_1;
    if ((ushort)wVar2 < 0x61) {
      if ((0x2f < (ushort)((ushort)wVar2 - 0x30)) ||
         ((0x87fffffe03ffU >> ((ulonglong)((ushort)wVar2 - 0x30 & 0xffff) & 0x3f) & 1) == 0)) break;
    }
    else if (0x7a < (ushort)wVar2) break;
    param_1 = param_1 + 1;
    ::FString::AppendChar(&local_18,wVar2);
  } while( true );
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  uVar4 = FindIndexByName((wchar_t *)FVar5.Data,(wchar_t *)0x0);
  bVar6 = true;
  if (*param_1 == L'=') {
    pwVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar6 = *pwVar1 != L'0';
  }
  if (uVar4 == 0xffffffff) {
    bVar3 = true;
  }
  else {
    SetSingleFlag(this,uVar4,bVar6);
  }
  if (*param_1 != L',') {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  param_1 = param_1 + 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  wVar2 = *param_1;
  goto joined_r0x0001485d87a6;
}

// SetSingleFlag @ 1485d9f80

void __thiscall FEngineShowFlags::SetSingleFlag(FEngineShowFlags *this,uint param_1,bool param_2)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  FPlatformRWLock *SRWLock;
  byte bVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  
  uVar10 = (uint)param_2;
  switch(param_1) {
  case 0:
    this->PostProcessing = 0;
    *(uint *)this = *(uint *)this | (uint)param_2;
    return;
  case 1:
    this->Bloom = 0;
    *(uint *)this = *(uint *)this | uVar10 * 2;
    return;
  case 2:
    this->LocalExposure = 0;
    *(uint *)this = *(uint *)this | uVar10 << 2;
    return;
  case 3:
    this->Tonemapper = 0;
    *(uint *)this = *(uint *)this | uVar10 << 3;
    return;
  case 4:
    this->AntiAliasing = 0;
    *(uint *)this = *(uint *)this | uVar10 << 4;
    return;
  case 5:
    this->TemporalAA = 0;
    *(uint *)this = *(uint *)this | uVar10 << 5;
    return;
  case 6:
    this->AmbientCubemap = 0;
    *(uint *)this = *(uint *)this | uVar10 << 6;
    return;
  case 7:
    this->EyeAdaptation = 0;
    *(uint *)this = *(uint *)this | uVar10 << 7;
    return;
  case 8:
    this->VisualizeHDR = 0;
    *(uint *)this = *(uint *)this | uVar10 << 8;
    return;
  case 9:
    this->VisualizeSkyLightIlluminance = 0;
    *(uint *)this = *(uint *)this | uVar10 << 9;
    return;
  case 10:
    this->VisualizeLocalFogVolumes = 0;
    *(uint *)this = *(uint *)this | uVar10 << 10;
    return;
  case 0xb:
    this->VisualizeLocalExposure = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0xb;
    return;
  case 0xc:
    this->LensFlares = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0xc;
    return;
  case 0xd:
    this->LensDistortion = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0xd;
    return;
  case 0xe:
    this->GlobalIllumination = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0xe;
    return;
  case 0xf:
    this->Vignette = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0xf;
    return;
  case 0x10:
    this->Grain = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x10;
    return;
  case 0x11:
    this->AmbientOcclusion = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x11;
    return;
  case 0x12:
    this->Decals = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x12;
    return;
  case 0x13:
    this->CameraImperfections = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x13;
    return;
  case 0x14:
    this->OnScreenDebug = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x14;
    return;
  case 0x15:
    this->OverrideDiffuseAndSpecular = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x15;
    return;
  case 0x16:
    this->LightingOnlyOverride = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x16;
    return;
  case 0x17:
    this->ReflectionOverride = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x17;
    return;
  case 0x18:
    this->MaterialNormal = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x18;
    return;
  case 0x19:
    this->MaterialAmbientOcclusion = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x19;
    return;
  case 0x1a:
    this->VisualizeBuffer = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1a;
    return;
  case 0x1b:
    this->VisualizeNanite = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1b;
    return;
  case 0x1c:
    this->VisualizeLumen = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1c;
    return;
  case 0x1d:
    this->VisualizeSubstrate = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1d;
    return;
  case 0x1e:
    this->VisualizeGroom = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1e;
    return;
  case 0x1f:
    this->VisualizeVirtualShadowMap = 0;
    *(uint *)this = *(uint *)this | uVar10 << 0x1f;
    return;
  case 0x20:
    this->DirectLighting = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10;
    return;
  case 0x21:
    this->DirectionalLights = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 * 2;
    return;
  case 0x22:
    this->PointLights = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 2;
    return;
  case 0x23:
    this->SpotLights = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 3;
    return;
  case 0x24:
    this->RectLights = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 4;
    return;
  case 0x25:
    this->ColorGrading = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 5;
    return;
  case 0x26:
    this->VectorFields = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 6;
    return;
  case 0x27:
    this->DepthOfField = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 7;
    return;
  case 0x28:
    this->GBufferHints = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 8;
    return;
  case 0x29:
    this->MotionBlur = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 9;
    return;
  case 0x2a:
    this->CompositeDebugPrimitives = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 10;
    return;
  case 0x2b:
    this->CompositeEditorPrimitives = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0xb;
    return;
  case 0x2c:
    this->OpaqueCompositeEditorPrimitives = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0xc;
    return;
  case 0x2d:
    this->TestImage = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0xd;
    return;
  case 0x2e:
    this->VisualizeDOF = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0xe;
    return;
  case 0x2f:
    this->VertexColors = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0xf;
    return;
  case 0x30:
    this->PhysicalMaterialMasks = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x10;
    return;
  case 0x31:
    this->Refraction = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x11;
    return;
  case 0x32:
    this->CameraInterpolation = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x12;
    return;
  case 0x33:
    this->SceneColorFringe = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x13;
    return;
  case 0x34:
    this->ToneCurve = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x14;
    return;
  case 0x35:
    this->SeparateTranslucency = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x15;
    return;
  case 0x36:
    this->ScreenPercentage = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x16;
    return;
  case 0x37:
    this->VisualizeMotionBlur = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x17;
    return;
  case 0x38:
    this->VisualizeMotionVectors = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x18;
    return;
  case 0x39:
    this->VisualizeReprojection = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x19;
    return;
  case 0x3a:
    this->VisualizeTemporalUpscaler = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1a;
    return;
  case 0x3b:
    this->VisualizeTSR = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1b;
    return;
  case 0x3c:
    this->MegaLights = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1c;
    return;
  case 0x3d:
    this->ReflectionEnvironment = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1d;
    return;
  case 0x3e:
    this->VisualizeOutOfBoundsPixels = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1e;
    return;
  case 0x3f:
    this->Diffuse = 0;
    *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 | uVar10 << 0x1f;
    return;
  case 0x40:
    this->Specular = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10;
    return;
  case 0x41:
    this->SelectionOutline = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 * 2;
    return;
  case 0x42:
    this->ScreenSpaceReflections = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 2;
    return;
  case 0x43:
    this->LumenReflections = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 3;
    return;
  case 0x44:
    this->ContactShadows = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 4;
    return;
  case 0x45:
    this->RayTracedDistanceFieldShadows = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 5;
    return;
  case 0x46:
    this->CapsuleShadows = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 6;
    return;
  case 0x47:
    this->SubsurfaceScattering = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 7;
    return;
  case 0x48:
    this->VisualizeSSS = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 8;
    return;
  case 0x49:
    this->VolumetricLightmap = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 9;
    return;
  case 0x4a:
    this->IndirectLightingCache = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 10;
    return;
  case 0x4b:
    this->DebugAI = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0xb;
    return;
  case 0x4c:
    this->VisLog = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0xc;
    return;
  case 0x4d:
    this->Navigation = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0xd;
    return;
  case 0x4e:
    this->GameplayDebug = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0xe;
    return;
  case 0x4f:
    this->TexturedLightProfiles = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0xf;
    return;
  case 0x50:
    this->LightFunctions = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x10;
    return;
  case 0x51:
    this->InstancedStaticMeshes = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x11;
    return;
  case 0x52:
    this->InstancedFoliage = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x12;
    return;
  case 0x53:
    this->HISMCOcclusionBounds = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x13;
    return;
  case 0x54:
    this->HISMCClusterTree = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x14;
    return;
  case 0x55:
    this->VisualizeInstanceUpdates = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x15;
    return;
  case 0x56:
    this->InstancedGrass = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x16;
    return;
  case 0x57:
    this->DynamicShadows = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x17;
    return;
  case 0x58:
    this->Particles = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x18;
    return;
  case 0x59:
    this->Niagara = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x19;
    return;
  case 0x5a:
    this->HeterogeneousVolumes = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1a;
    return;
  case 0x5b:
    this->SkeletalMeshes = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1b;
    return;
  case 0x5c:
    this->BuilderBrush = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1c;
    return;
  case 0x5d:
    this->Translucency = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1d;
    return;
  case 0x5e:
    this->BillboardSprites = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1e;
    return;
  case 0x5f:
    this->LOD = 0;
    *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 | uVar10 << 0x1f;
    return;
  case 0x60:
    this->LightComplexity = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10;
    return;
  case 0x61:
    this->ShaderComplexity = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 * 2;
    return;
  case 0x62:
    this->StationaryLightOverlap = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 2;
    return;
  case 99:
    this->LightMapDensity = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 3;
    return;
  case 100:
    this->StreamingBounds = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 4;
    return;
  case 0x65:
    this->Constraints = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 5;
    return;
  case 0x66:
    this->MassProperties = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 6;
    return;
  case 0x67:
    this->CameraFrustums = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 7;
    return;
  case 0x68:
    this->AudioRadius = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 8;
    return;
  case 0x69:
    this->ForceFeedbackRadius = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 9;
    return;
  case 0x6a:
    this->BSPSplit = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 10;
    return;
  case 0x6b:
    this->Brushes = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0xb;
    return;
  case 0x6c:
    this->Lighting = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0xc;
    return;
  case 0x6d:
    this->UnlitRichView = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0xd;
    return;
  case 0x6e:
    this->UnlitViewmode = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0xe;
    return;
  case 0x6f:
    this->DeferredLighting = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0xf;
    return;
  case 0x70:
    this->Editor = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x10;
    return;
  case 0x71:
    this->BSPTriangles = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x11;
    return;
  case 0x72:
    this->LargeVertices = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x12;
    return;
  case 0x73:
    this->Grid = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x13;
    return;
  case 0x74:
    this->Snap = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x14;
    return;
  case 0x75:
    this->MeshEdges = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x15;
    return;
  case 0x76:
    this->Cover = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x16;
    return;
  case 0x77:
    this->Splines = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x17;
    return;
  case 0x78:
    this->Selection = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x18;
    return;
  case 0x79:
    this->VisualizeLevelInstanceEditing = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x19;
    return;
  case 0x7a:
    this->EditingLevelInstance = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1a;
    return;
  case 0x7b:
    this->ModeWidgets = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1b;
    return;
  case 0x7c:
    this->Bounds = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1c;
    return;
  case 0x7d:
    this->HitProxies = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1d;
    return;
  case 0x7e:
    this->LightInfluences = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1e;
    return;
  case 0x7f:
    this->Pivot = 0;
    *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10 << 0x1f;
    return;
  case 0x80:
    this->ShadowFrustums = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10;
    return;
  case 0x81:
    this->Wireframe = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 * 2;
    return;
  case 0x82:
    this->Materials = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 2;
    return;
  case 0x83:
    this->StaticMeshes = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 3;
    return;
  case 0x84:
    this->Landscape = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 4;
    return;
  case 0x85:
    this->LightRadius = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 5;
    return;
  case 0x86:
    this->Fog = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 6;
    return;
  case 0x87:
    this->Volumes = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 7;
    return;
  case 0x88:
    this->Game = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 8;
    return;
  case 0x89:
    this->ActorColoration = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 9;
    return;
  case 0x8a:
    this->BSP = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 10;
    return;
  case 0x8b:
    this->Collision = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0xb;
    return;
  case 0x8c:
    this->CollisionVisibility = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0xc;
    return;
  case 0x8d:
    this->CollisionPawn = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0xd;
    return;
  case 0x8e:
    this->LightShafts = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0xe;
    return;
  case 0x8f:
    this->PostProcessMaterial = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0xf;
    return;
  case 0x90:
    this->Atmosphere = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x10;
    return;
  case 0x91:
    this->Cloud = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x11;
    return;
  case 0x92:
    this->CameraAspectRatioBars = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x12;
    return;
  case 0x93:
    this->CameraSafeFrames = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x13;
    return;
  case 0x94:
    this->TextRender = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x14;
    return;
  case 0x95:
    this->Rendering = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x15;
    return;
  case 0x96:
    this->HighResScreenshotMask = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x16;
    return;
  case 0x97:
    this->HMDDistortion = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x17;
    return;
  case 0x98:
    this->StereoRendering = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x18;
    return;
  case 0x99:
    this->DistanceCulledPrimitives = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x19;
    return;
  case 0x9a:
    this->VisualizeLightCulling = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1a;
    return;
  case 0x9b:
    this->PrecomputedVisibility = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1b;
    return;
  case 0x9c:
    this->SkyLighting = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1c;
    return;
  case 0x9d:
    this->PreviewShadowsIndicator = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1d;
    return;
  case 0x9e:
    this->PrecomputedVisibilityCells = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1e;
    return;
  case 0x9f:
    this->VisualizeVolumetricLightmap = 0;
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | uVar10 << 0x1f;
    return;
  case 0xa0:
    this->VolumeLightingSamples = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10;
    return;
  case 0xa1:
    this->Paper2DSprites = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 * 2;
    return;
  case 0xa2:
    this->VisualizeDistanceFieldAO = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 2;
    return;
  case 0xa3:
    this->VisualizeMeshDistanceFields = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 3;
    return;
  case 0xa4:
    this->PhysicsField = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 4;
    return;
  case 0xa5:
    this->VisualizeGlobalDistanceField = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 5;
    return;
  case 0xa6:
    this->VisualizeLightingOnProbes = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 6;
    return;
  case 0xa7:
    this->ScreenSpaceAO = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 7;
    return;
  case 0xa8:
    this->DistanceFieldAO = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 8;
    return;
  case 0xa9:
    this->LumenGlobalIllumination = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 9;
    return;
  case 0xaa:
    this->VolumetricFog = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 10;
    return;
  case 0xab:
    this->VisualizeSSR = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0xb;
    return;
  case 0xac:
    this->VisualizeShadingModels = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0xc;
    return;
  case 0xad:
    this->VisualizeSenses = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0xd;
    return;
  case 0xae:
    this->LODColoration = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0xe;
    return;
  case 0xaf:
    this->HLODColoration = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0xf;
    return;
  case 0xb0:
    this->QuadOverdraw = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x10;
    return;
  case 0xb1:
    this->ShaderComplexityWithQuadOverdraw = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x11;
    return;
  case 0xb2:
    this->PrimitiveDistanceAccuracy = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x12;
    return;
  case 0xb3:
    this->MeshUVDensityAccuracy = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x13;
    return;
  case 0xb4:
    this->MaterialTextureScaleAccuracy = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x14;
    return;
  case 0xb5:
    this->OutputMaterialTextureScales = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x15;
    return;
  case 0xb6:
    this->RequiredTextureResolution = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x16;
    return;
  case 0xb7:
    this->VisualizeVirtualTexture = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x17;
    return;
  case 0xb8:
    this->WidgetComponents = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x18;
    return;
  case 0xb9:
    this->Bones = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x19;
    return;
  case 0xba:
    this->ServerDrawDebug = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1a;
    return;
  case 0xbb:
    this->MediaPlanes = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1b;
    return;
  case 0xbc:
    this->VREditing = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1c;
    return;
  case 0xbd:
    this->OcclusionMeshes = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1d;
    return;
  case 0xbe:
    this->VisualizeInstanceOcclusionQueries = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1e;
    return;
  case 0xbf:
    this->DisableOcclusionQueries = 0;
    *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar10 << 0x1f;
    return;
  case 0xc0:
    this->PathTracing = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10;
    return;
  case 0xc1:
    this->RayTracingDebug = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 * 2;
    return;
  case 0xc2:
    this->VisualizeSkyAtmosphere = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 2;
    return;
  case 0xc3:
    this->VisualizeLightFunctionAtlas = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 3;
    return;
  case 0xc4:
    this->VisualizeCalibrationColor = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 4;
    return;
  case 0xc5:
    this->VisualizeCalibrationGrayscale = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 5;
    return;
  case 0xc6:
    this->VisualizeCalibrationCustom = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 6;
    return;
  case 199:
    this->VisualizePostProcessStack = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 7;
    return;
  case 200:
    this->VirtualTexturePrimitives = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 8;
    return;
  case 0xc9:
    this->VisualizeVolumetricCloudConservativeDensity = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 9;
    return;
  case 0xca:
    this->VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 10;
    return;
  case 0xcb:
    this->VirtualShadowMapPersistentData = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0xb;
    return;
  case 0xcc:
    this->DebugDrawDistantVirtualSMLights = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0xc;
    return;
  case 0xcd:
    this->VirtualTextureResidency = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0xd;
    return;
  case 0xce:
    this->InputDebugVisualizer = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0xe;
    return;
  case 0xcf:
    this->LumenScreenTraces = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0xf;
    return;
  case 0xd0:
    this->LumenDetailTraces = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x10;
    return;
  case 0xd1:
    this->LumenGlobalTraces = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x11;
    return;
  case 0xd2:
    this->LumenFarFieldTraces = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x12;
    return;
  case 0xd3:
    this->LumenSecondaryBounces = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x13;
    return;
  case 0xd4:
    this->LumenShortRangeAmbientOcclusion = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x14;
    return;
  case 0xd5:
    this->NaniteMeshes = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x15;
    return;
  case 0xd6:
    this->NaniteStreamingGeometry = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x16;
    return;
  case 0xd7:
    this->VisualizeGPUSkinCache = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x17;
    return;
  case 0xd8:
    this->VisualizeLWCComplexity = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x18;
    return;
  case 0xd9:
    this->VisualizeShadowCasters = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x19;
    return;
  case 0xda:
    this->ShaderPrint = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1a;
    return;
  case 0xdb:
    this->SceneCaptureCopySceneDepth = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1b;
    return;
  case 0xdc:
    this->Cameras = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1c;
    return;
  case 0xdd:
    this->Hair = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1d;
    return;
  case 0xde:
    this->AllowPrimitiveAlphaHoldout = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1e;
    return;
  case 0xdf:
    this->AlphaInvert = 0;
    *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 | uVar10 << 0x1f;
    return;
  case 0xe0:
    this->StereoMotionVectors = 0;
    *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c | uVar10;
    return;
  case 0xe1:
    this->Clay = 0;
    *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c | uVar10 * 2;
    return;
  case 0xe2:
    this->Zebra = 0;
    *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c | uVar10 << 2;
    return;
  case 0xe3:
    this->FrontBackFace = 0;
    *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c | uVar10 << 3;
    return;
  case 0xe4:
    this->RandomColor = 0;
    *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c | uVar10 << 4;
    return;
  }
  SRWLock = CustomShowFlagsInternal::GetLock();
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pvVar2 = ThreadLocalStoragePointer;
  iVar9 = (this->CustomShowFlags).NumBits;
  while( true ) {
    lVar7 = *(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`CustomShowFlagsInternal::GetDefaultState'::__l2::
             _dynamic_atexit_destructor_for__DefaultState__);
      _Init_thread_footer(&::_TSS0);
    }
    if (DefaultState.NumBits <= iVar9) break;
    if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`CustomShowFlagsInternal::GetDefaultState'::__l2::
             _dynamic_atexit_destructor_for__DefaultState__);
      _Init_thread_footer(&::_TSS0);
    }
    if (((iVar9 < 0) || (DefaultState.NumBits <= iVar9)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar6 = &DefaultState;
    if (DefaultState.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)DefaultState.AllocatorInstance.SecondaryData;
    }
    iVar4 = iVar9;
    if (iVar9 < 0) {
      iVar4 = iVar9 + 0x1f;
    }
    uVar10 = *(uint *)((longlong)pTVar6 + (longlong)(iVar4 >> 5) * 4);
    iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->CustomShowFlags,1);
    FVar11 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<unsigned_int>)&this->CustomShowFlags;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = FVar11;
    }
    bVar5 = (byte)iVar4 & 0x1f;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
      bVar5 = bVar5 - 0x20;
    }
    *(uint *)((longlong)FVar12 + (longlong)(iVar4 >> 5) * 4) =
         ~(1 << (bVar5 & 0x1f)) & *(uint *)((longlong)FVar12 + (longlong)(iVar4 >> 5) * 4) |
         (uint)((1 << ((byte)iVar9 & 0x1f) & uVar10) != 0) << (bVar5 & 0x1f);
    iVar9 = iVar9 + 1;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (0xe4 < param_1) {
    uVar8 = (this->CustomShowFlags).NumBits;
    uVar10 = param_1 - 0xe5;
    if (uVar10 < uVar8) {
      if ((((int)uVar10 < 0) || ((int)uVar8 <= (int)uVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar11 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)&this->CustomShowFlags;
      }
      uVar8 = 1 << ((byte)uVar10 & 0x1f);
      lVar7 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5);
      uVar10 = *(uint *)((longlong)FVar11 + lVar7 * 4);
      if (param_2) {
        *(uint *)((longlong)FVar11 + lVar7 * 4) = uVar10 | uVar8;
        return;
      }
      *(uint *)((longlong)FVar11 + lVar7 * 4) = uVar10 & ~uVar8;
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShowFlags.cpp"
                     ,0xc4,L"");
  if (!bVar3) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ToString @ 1485de410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FEngineShowFlags::ToString(FEngineShowFlags *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  ForAnyElementType _Src;
  FEngineShowFlags *pFVar3;
  longlong lVar4;
  undefined1 auStackY_f8 [32];
  FEngineShowFlags local_b8;
  FIterSink local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = FEngineShowFlags(&local_b8,this);
  local_78.ret.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ret.Data.ArrayNum = 0;
  local_78.ret.Data.ArrayMax = 0;
  FEngineShowFlags(&local_78.EngineShowFlags,pFVar3);
  FVar2 = (pFVar3->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  IterateAllFlags<_FEngineShowFlags::ToString_::__l2::FIterSink>(&local_78);
  _Src.Data = local_78.ret.Data.AllocatorInstance.Data;
  lVar4 = (longlong)local_78.ret.Data.ArrayNum;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_78.ret.Data.ArrayNum;
  if (local_78.ret.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.ret.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_78.ret.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  if (local_78.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  if (local_78.ret.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ret.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateNewCustomShowFlags @ 1485df450

void __thiscall FEngineShowFlags::UpdateNewCustomShowFlags(FEngineShowFlags *this)

{
  uint uVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  FPlatformRWLock *SRWLock;
  byte bVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  
  SRWLock = CustomShowFlagsInternal::GetLock();
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pvVar5 = ThreadLocalStoragePointer;
  iVar10 = (this->CustomShowFlags).NumBits;
  while( true ) {
    lVar2 = *(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`CustomShowFlagsInternal::GetDefaultState'::__l2::
               _dynamic_atexit_destructor_for__DefaultState__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (DefaultState.NumBits <= iVar10) break;
    if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`CustomShowFlagsInternal::GetDefaultState'::__l2::
               _dynamic_atexit_destructor_for__DefaultState__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if ((iVar10 < 0) || (DefaultState.NumBits <= iVar10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar9 = &DefaultState;
    if (DefaultState.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)DefaultState.AllocatorInstance.SecondaryData;
    }
    iVar7 = iVar10;
    if (iVar10 < 0) {
      iVar7 = iVar10 + 0x1f;
    }
    uVar1 = *(uint *)((longlong)pTVar9 + (longlong)(iVar7 >> 5) * 4);
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->CustomShowFlags,1);
    FVar3 = (this->CustomShowFlags).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)&this->CustomShowFlags;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar3;
    }
    bVar8 = (byte)iVar7 & 0x1f;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x1f;
      bVar8 = bVar8 - 0x20;
    }
    *(uint *)((longlong)FVar11 + (longlong)(iVar7 >> 5) * 4) =
         ~(1 << (bVar8 & 0x1f)) & *(uint *)((longlong)FVar11 + (longlong)(iVar7 >> 5) * 4) |
         (uint)((1 << ((byte)iVar10 & 0x1f) & uVar1) != 0) << (bVar8 & 0x1f);
    iVar10 = iVar10 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001485df62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// Init @ 148844c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FEngineShowFlags::Init(FEngineShowFlags *this,EShowFlagInitMode param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = _UNK_15060db28;
  uVar2 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (param_1 == ESFIM_All0) {
    this->PostProcessing = 0;
    this->Diffuse = 0;
    this->VisualizeOutOfBoundsPixels = 0;
    this->ReflectionEnvironment = 0;
    this->MegaLights = 0;
    this->VisualizeTSR = 0;
    this->VisualizeTemporalUpscaler = 0;
    this->VisualizeReprojection = 0;
    this->VisualizeMotionVectors = 0;
    this->VisualizeMotionBlur = 0;
    this->ScreenPercentage = 0;
    this->SeparateTranslucency = 0;
    this->ToneCurve = 0;
    this->SceneColorFringe = 0;
    this->CameraInterpolation = 0;
    this->Refraction = 0;
    this->PhysicalMaterialMasks = 0;
    this->VertexColors = 0;
    this->VisualizeDOF = 0;
    this->TestImage = 0;
    this->OpaqueCompositeEditorPrimitives = 0;
    this->CompositeEditorPrimitives = 0;
    this->CompositeDebugPrimitives = 0;
    this->MotionBlur = 0;
    this->GBufferHints = 0;
    this->DepthOfField = 0;
    this->VectorFields = 0;
    this->ColorGrading = 0;
    this->RectLights = 0;
    this->SpotLights = 0;
    this->PointLights = 0;
    this->DirectionalLights = 0;
    this->DirectLighting = 0;
    this->VisualizeVirtualShadowMap = 0;
    this->VisualizeGroom = 0;
    this->VisualizeSubstrate = 0;
    this->VisualizeLumen = 0;
    this->VisualizeNanite = 0;
    this->VisualizeBuffer = 0;
    this->MaterialAmbientOcclusion = 0;
    this->MaterialNormal = 0;
    this->ReflectionOverride = 0;
    this->LightingOnlyOverride = 0;
    this->OverrideDiffuseAndSpecular = 0;
    this->OnScreenDebug = 0;
    this->CameraImperfections = 0;
    this->Decals = 0;
    this->AmbientOcclusion = 0;
    this->Grain = 0;
    this->Vignette = 0;
    this->GlobalIllumination = 0;
    this->LensDistortion = 0;
    this->LensFlares = 0;
    this->VisualizeLocalExposure = 0;
    this->VisualizeLocalFogVolumes = 0;
    this->VisualizeSkyLightIlluminance = 0;
    this->VisualizeHDR = 0;
    this->EyeAdaptation = 0;
    this->AmbientCubemap = 0;
    this->TemporalAA = 0;
    this->AntiAliasing = 0;
    this->Tonemapper = 0;
    this->LocalExposure = 0;
    this->Bloom = 0;
    puVar1 = &this->field_0x8;
    this->Specular = 0;
    this->Pivot = 0;
    this->LightInfluences = 0;
    this->HitProxies = 0;
    this->Bounds = 0;
    this->ModeWidgets = 0;
    this->EditingLevelInstance = 0;
    this->VisualizeLevelInstanceEditing = 0;
    this->Selection = 0;
    this->Splines = 0;
    this->Cover = 0;
    this->MeshEdges = 0;
    this->Snap = 0;
    this->Grid = 0;
    this->LargeVertices = 0;
    this->BSPTriangles = 0;
    this->Editor = 0;
    this->DeferredLighting = 0;
    this->UnlitViewmode = 0;
    this->UnlitRichView = 0;
    this->Lighting = 0;
    this->Brushes = 0;
    this->BSPSplit = 0;
    this->ForceFeedbackRadius = 0;
    this->AudioRadius = 0;
    this->CameraFrustums = 0;
    this->MassProperties = 0;
    this->Constraints = 0;
    this->StreamingBounds = 0;
    this->LightMapDensity = 0;
    this->StationaryLightOverlap = 0;
    this->ShaderComplexity = 0;
    this->LightComplexity = 0;
    this->LOD = 0;
    this->BillboardSprites = 0;
    this->Translucency = 0;
    this->BuilderBrush = 0;
    this->SkeletalMeshes = 0;
    this->HeterogeneousVolumes = 0;
    this->Niagara = 0;
    this->Particles = 0;
    this->DynamicShadows = 0;
    this->InstancedGrass = 0;
    this->VisualizeInstanceUpdates = 0;
    this->HISMCClusterTree = 0;
    this->HISMCOcclusionBounds = 0;
    this->InstancedFoliage = 0;
    this->InstancedStaticMeshes = 0;
    this->LightFunctions = 0;
    this->TexturedLightProfiles = 0;
    this->GameplayDebug = 0;
    this->Navigation = 0;
    this->VisLog = 0;
    this->DebugAI = 0;
    this->IndirectLightingCache = 0;
    this->VolumetricLightmap = 0;
    this->VisualizeSSS = 0;
    this->SubsurfaceScattering = 0;
    this->CapsuleShadows = 0;
    this->RayTracedDistanceFieldShadows = 0;
    this->ContactShadows = 0;
    this->LumenReflections = 0;
    this->ScreenSpaceReflections = 0;
    this->SelectionOutline = 0;
    puVar1 = &this->field_0x10;
    this->ShadowFrustums = 0;
    this->DisableOcclusionQueries = 0;
    this->VisualizeInstanceOcclusionQueries = 0;
    this->OcclusionMeshes = 0;
    this->VREditing = 0;
    this->MediaPlanes = 0;
    this->ServerDrawDebug = 0;
    this->Bones = 0;
    this->WidgetComponents = 0;
    this->VisualizeVirtualTexture = 0;
    this->RequiredTextureResolution = 0;
    this->OutputMaterialTextureScales = 0;
    this->MaterialTextureScaleAccuracy = 0;
    this->MeshUVDensityAccuracy = 0;
    this->PrimitiveDistanceAccuracy = 0;
    this->ShaderComplexityWithQuadOverdraw = 0;
    this->QuadOverdraw = 0;
    this->HLODColoration = 0;
    this->LODColoration = 0;
    this->VisualizeSenses = 0;
    this->VisualizeShadingModels = 0;
    this->VisualizeSSR = 0;
    this->VolumetricFog = 0;
    this->LumenGlobalIllumination = 0;
    this->DistanceFieldAO = 0;
    this->ScreenSpaceAO = 0;
    this->VisualizeLightingOnProbes = 0;
    this->VisualizeGlobalDistanceField = 0;
    this->PhysicsField = 0;
    this->VisualizeMeshDistanceFields = 0;
    this->VisualizeDistanceFieldAO = 0;
    this->Paper2DSprites = 0;
    this->VolumeLightingSamples = 0;
    this->VisualizeVolumetricLightmap = 0;
    this->PrecomputedVisibilityCells = 0;
    this->PreviewShadowsIndicator = 0;
    this->SkyLighting = 0;
    this->PrecomputedVisibility = 0;
    this->VisualizeLightCulling = 0;
    this->DistanceCulledPrimitives = 0;
    this->StereoRendering = 0;
    this->HMDDistortion = 0;
    this->HighResScreenshotMask = 0;
    this->Rendering = 0;
    this->TextRender = 0;
    this->CameraSafeFrames = 0;
    this->CameraAspectRatioBars = 0;
    this->Cloud = 0;
    this->Atmosphere = 0;
    this->PostProcessMaterial = 0;
    this->LightShafts = 0;
    this->CollisionPawn = 0;
    this->CollisionVisibility = 0;
    this->Collision = 0;
    this->BSP = 0;
    this->ActorColoration = 0;
    this->Game = 0;
    this->Volumes = 0;
    this->Fog = 0;
    this->LightRadius = 0;
    this->Landscape = 0;
    this->StaticMeshes = 0;
    this->Materials = 0;
    this->Wireframe = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    return;
  }
  *(undefined8 *)this = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)&this->field_0x8 = uVar3;
  *(undefined8 *)&this->field_0x10 = uVar2;
  *(undefined8 *)&this->field_0x18 = uVar3;
  InitCustomShowFlags(this,param_1);
  this->VisualizeHDR = 0;
  this->VisualizeVirtualShadowMap = 0;
  this->VisualizeGroom = 0;
  this->VisualizeSubstrate = 0;
  this->VisualizeLumen = 0;
  this->VisualizeNanite = 0;
  this->VisualizeBuffer = 0;
  this->MaterialAmbientOcclusion = 1;
  this->MaterialNormal = 1;
  this->ReflectionOverride = 0;
  this->LightingOnlyOverride = 0;
  this->OverrideDiffuseAndSpecular = 0;
  this->VisualizeLocalExposure = 0;
  this->VisualizeLocalFogVolumes = 0;
  this->VisualizeSkyLightIlluminance = 0;
  uVar15 = 0x800;
  if (1 < param_1 - ESFIM_Editor) {
    uVar15 = 0;
  }
  uVar14 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar14 = 0x100;
  }
  uVar9 = 0x10000;
  if (1 < param_1 - ESFIM_Editor) {
    uVar9 = 0;
  }
  uVar4 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar4 = 0x80000;
  }
  uVar5 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar5 = 0x800000;
  }
  uVar6 = 0;
  uVar10 = 0x1000000;
  if (1 < param_1 - ESFIM_Editor) {
    uVar10 = 0;
  }
  if (param_1 == ESFIM_Editor) {
    uVar6 = 0x8000000;
  }
  uVar11 = 0x80000000;
  if (1 < param_1 - ESFIM_Editor) {
    uVar11 = 0;
  }
  uVar13 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar13 = 0x20;
  }
  uVar7 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar7 = 0x80;
  }
  uVar12 = 0;
  if (1 < param_1 - ESFIM_Editor) {
    uVar12 = 0x100;
  }
  uVar8 = 0;
  if (param_1 == ESFIM_Editor) {
    uVar8 = 0x2000000;
  }
  *(uint *)&this->field_0xc =
       uVar14 | *(uint *)&this->field_0xc & 0x202f200 | uVar9 | uVar4 | uVar5 | uVar10 | uVar6 |
       uVar11;
  *(uint *)&this->field_0x10 =
       uVar13 | *(uint *)&this->field_0x10 & 0x3833c45c | uVar7 | uVar12 | uVar8;
  *(uint *)&this->field_0x8 = *(uint *)&this->field_0x8 & 0xffc7d6fd;
  if (param_1 - ESFIM_Editor < 2) {
    uVar15 = *(uint *)&this->field_0x4 & 0xb07e04bf | uVar15 | 0x400;
    if ((param_1 == ESFIM_Editor) || (param_1 == ESFIM_VREditing)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0x400000;
    }
  }
  else {
    uVar15 = *(uint *)&this->field_0x4 & 0xb07e06bf | uVar15 | 0x600;
    uVar14 = 0x400000;
  }
  *(uint *)&this->field_0x4 = uVar15 & 0xffbfffff | uVar14;
  uVar15 = 0;
  if (param_1 == ESFIM_VREditing) {
    uVar15 = 0x10000000;
  }
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 & 0x7c7fe800 | 0x81f8000;
  *(uint *)&this->field_0x14 = uVar15 | *(uint *)&this->field_0x14 & 0x9002782;
  *(uint *)&this->field_0x1c = *(uint *)&this->field_0x1c & 0xffffffe0;
  return;
}

// operator() @ 15052ddb0

bool __thiscall
`FEngineShowFlags::RegisterCustomShowFlag'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7403933691660991471>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7403933691660991471>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052de00

bool __thiscall
`FEngineShowFlags::RegisterCustomShowFlag'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7403933691660991458>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7403933691660991458>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

