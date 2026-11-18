// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147a0c350

UScriptStruct * __cdecl FStringCurveKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringCurveKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStringCurveKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringCurveKey,(UObject *)pUVar1,
                         L"StringCurveKey");
  }
  return Z_Registration_Info_UScriptStruct_FStringCurveKey.OuterSingleton;
}

// operator== @ 147a2c8a0

bool __thiscall FStringCurveKey::operator==(FStringCurveKey *this,FStringCurveKey *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1->Time == this->Time) {
    iVar2 = (this->Value).Data.ArrayNum;
    iVar1 = (param_1->Value).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Value).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Value).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator!= @ 147a2cb10

bool __thiscall FStringCurveKey::operator!=(FStringCurveKey *this,FStringCurveKey *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1->Time == this->Time) {
    iVar2 = (this->Value).Data.ArrayNum;
    iVar1 = (param_1->Value).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return false;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Value).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Value).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) {
      return false;
    }
  }
  return true;
}

// Serialize @ 147a88640

bool __thiscall FStringCurveKey::Serialize(FStringCurveKey *this,FArchive *param_1)

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
  ::operator<<(param_1,&this->Value);
  return true;
}

