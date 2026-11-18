// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// StaticStruct @ 14ac8cf70

UScriptStruct * __cdecl FLerpKeyColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLerpKeyColor.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FLerpKeyColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLerpKeyColor,(UObject *)pUVar1,L"LerpKeyColor");
  }
  return Z_Registration_Info_UScriptStruct_FLerpKeyColor.OuterSingleton;
}

// Random @ 14ac9de30

void __thiscall FLerpKeyColor::Random(FLerpKeyColor *this)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = rand();
  fVar1 = __real_38000100;
  this->R = (float)(uVar2 & 0x7fff) * __real_38000100;
  uVar2 = rand();
  this->G = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  this->B = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  this->A = (float)(uVar2 & 0x7fff) * fVar1;
  return;
}

