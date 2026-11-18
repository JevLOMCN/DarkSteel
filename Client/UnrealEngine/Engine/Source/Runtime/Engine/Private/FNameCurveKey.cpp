// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147a0dff0

UScriptStruct * __cdecl FNameCurveKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNameCurveKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNameCurveKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNameCurveKey,(UObject *)pUVar1,L"NameCurveKey");
  }
  return Z_Registration_Info_UScriptStruct_FNameCurveKey.OuterSingleton;
}

// operator== @ 147a2c400

bool __thiscall FNameCurveKey::operator==(FNameCurveKey *this,FNameCurveKey *param_1)

{
  if ((param_1->Time == this->Time) && (this->Value == param_1->Value)) {
    return true;
  }
  return false;
}

// operator!= @ 147a2ca50

bool __thiscall FNameCurveKey::operator!=(FNameCurveKey *this,FNameCurveKey *param_1)

{
  if ((param_1->Time == this->Time) && (this->Value == param_1->Value)) {
    return false;
  }
  return true;
}

// Serialize @ 147a88080

bool __thiscall FNameCurveKey::Serialize(FNameCurveKey *this,FArchive *param_1)

{
  float *pfVar1;
  
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
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Value);
  return true;
}

