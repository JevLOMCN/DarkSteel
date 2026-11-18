// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// StaticStruct @ 14ac8d200

UScriptStruct * __cdecl FRange_Vector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRange_Vector2D.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FRange_Vector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRange_Vector2D,(UObject *)pUVar1,
                         L"Range_Vector2D");
  }
  return Z_Registration_Info_UScriptStruct_FRange_Vector2D.OuterSingleton;
}

// GetValue @ 14ac98f80

TVector2<double> * __thiscall
FRange_Vector2D::GetValue(FRange_Vector2D *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  float fVar6;
  
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  uVar5 = rand();
  fVar6 = (float)(uVar5 & 0x7fff) * __real_38000100;
  dVar3 = (this->Max).field0_0x0._s_0.X;
  dVar4 = (this->Min).field0_0x0._s_0.X;
  uVar5 = rand();
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar6 * (dVar1 - dVar2) + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(uVar5 & 0x7fff) * __real_38000100) * (dVar3 - dVar4) + dVar4;
  return __return_storage_ptr__;
}

