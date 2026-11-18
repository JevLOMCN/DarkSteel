// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d5723a0

UScriptStruct * __cdecl FCameraSingleCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraSingleCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraSingleCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraSingleCurve,(UObject *)pUVar1,
                         L"CameraSingleCurve");
  }
  return Z_Registration_Info_UScriptStruct_FCameraSingleCurve.OuterSingleton;
}

// GetValue @ 14d5abec0

float __thiscall FCameraSingleCurve::GetValue(FCameraSingleCurve *this,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(&this->Curve,param_1,0.0);
  return fVar1;
}

// HasAnyData @ 14d5ad120

bool __thiscall FCameraSingleCurve::HasAnyData(FCameraSingleCurve *this)

{
  int iVar1;
  
  if (__real_7f7fffff == *(float *)&(this->Curve)._padding_) {
    iVar1 = (**(code **)((this->Curve)._padding_ + 8))();
    if (iVar1 == 0) {
      return false;
    }
  }
  return true;
}

