// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d647a50

UScriptStruct * __cdecl FCameraParameterClamping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraParameterClamping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraParameterClamping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraParameterClamping,(UObject *)pUVar1,
                         L"CameraParameterClamping");
  }
  return Z_Registration_Info_UScriptStruct_FCameraParameterClamping.OuterSingleton;
}

// ClampValue @ 14d65d480

double __thiscall
FCameraParameterClamping::ClampValue(FCameraParameterClamping *this,double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  if ((this->bClampMin != false) && (dVar1 = this->MinValue, this->MinValue <= param_1)) {
    dVar1 = param_1;
  }
  if (this->bClampMax == false) {
    return dVar1;
  }
  dVar2 = this->MaxValue;
  if (dVar1 <= this->MaxValue) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// GetEffectiveClamping @ 14d65fd90

void __thiscall
FCameraParameterClamping::GetEffectiveClamping
          (FCameraParameterClamping *this,double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = __real_ffefffffffffffff;
  if (this->bClampMin != false) {
    dVar1 = this->MinValue;
  }
  *param_1 = dVar1;
  if (this->bClampMax == false) {
    *param_2 = __real_7fefffffffffffff;
    return;
  }
  *param_2 = this->MaxValue;
  return;
}

