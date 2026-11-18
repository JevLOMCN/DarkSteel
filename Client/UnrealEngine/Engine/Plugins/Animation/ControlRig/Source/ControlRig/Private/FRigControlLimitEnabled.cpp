// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// Apply<float> @ 14a20c180

float __thiscall
FRigControlLimitEnabled::Apply<float>
          (FRigControlLimitEnabled *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this->bMinimum == false) {
    if (this->bMaximum != false) {
      fVar3 = *param_1;
      if (*param_3 <= *param_1) {
        fVar3 = *param_3;
      }
      return fVar3;
    }
    return *param_1;
  }
  fVar3 = *param_1;
  if (this->bMaximum != false) {
    fVar1 = *param_3;
    fVar2 = *param_2;
    if (fVar1 <= fVar2) {
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
      }
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      return fVar3;
    }
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    return fVar3;
  }
  if (fVar3 <= *param_2) {
    fVar3 = *param_2;
  }
  return fVar3;
}

// StaticStruct @ 14a2bd550

UScriptStruct * __cdecl FRigControlLimitEnabled::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlLimitEnabled,(UObject *)pUVar1,
                         L"RigControlLimitEnabled");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlLimitEnabled.OuterSingleton;
}

// GetForValueType @ 14a30f2f0

bool __thiscall
FRigControlLimitEnabled::GetForValueType(FRigControlLimitEnabled *this,ERigControlValueType param_1)

{
  if (param_1 == Minimum) {
    return this->bMinimum;
  }
  return this->bMaximum;
}

// Serialize @ 14a349240

void __thiscall FRigControlLimitEnabled::Serialize(FRigControlLimitEnabled *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->bMinimum);
  ::operator<<(param_1,&this->bMaximum);
  return;
}

// SetForValueType @ 14a34e010

void __thiscall
FRigControlLimitEnabled::SetForValueType
          (FRigControlLimitEnabled *this,ERigControlValueType param_1,bool param_2)

{
  if (param_1 == Minimum) {
    this->bMinimum = param_2;
    return;
  }
  this->bMaximum = param_2;
  return;
}

