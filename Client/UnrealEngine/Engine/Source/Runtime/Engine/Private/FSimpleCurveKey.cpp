// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147a0d440

UScriptStruct * __cdecl FSimpleCurveKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleCurveKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSimpleCurveKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurveKey,(UObject *)pUVar1,
                         L"SimpleCurveKey");
  }
  return Z_Registration_Info_UScriptStruct_FSimpleCurveKey.OuterSingleton;
}

// operator== @ 147a2c730

bool __thiscall FSimpleCurveKey::operator==(FSimpleCurveKey *this,FSimpleCurveKey *param_1)

{
  if ((param_1->Time == this->Time) && (param_1->Value == this->Value)) {
    return true;
  }
  return false;
}

// operator!= @ 147a2caf0

bool __thiscall FSimpleCurveKey::operator!=(FSimpleCurveKey *this,FSimpleCurveKey *param_1)

{
  if ((param_1->Time == this->Time) && (param_1->Value == this->Value)) {
    return false;
  }
  return true;
}

// Serialize @ 147a88510

bool __thiscall FSimpleCurveKey::Serialize(FSimpleCurveKey *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Time = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Value;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return true;
}

