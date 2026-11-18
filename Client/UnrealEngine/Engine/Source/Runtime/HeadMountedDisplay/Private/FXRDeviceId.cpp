// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 8

// StaticStruct @ 14594b800

UScriptStruct * __cdecl FXRDeviceId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FXRDeviceId.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UScriptStruct_FXRDeviceId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FXRDeviceId,(UObject *)pUVar1,L"XRDeviceId");
  }
  return Z_Registration_Info_UScriptStruct_FXRDeviceId.OuterSingleton;
}

// FXRDeviceId @ 14594e310

FXRDeviceId * __thiscall FXRDeviceId::FXRDeviceId(FXRDeviceId *this,IIdentifiableXRDevice *param_1)

{
  int iVar1;
  
  (**(code **)*param_1)(param_1,this);
  iVar1 = (**(code **)((longlong)*param_1 + 8))(param_1);
  this->DeviceId = iVar1;
  return this;
}

// FXRDeviceId @ 14594e350

FXRDeviceId * __thiscall
FXRDeviceId::FXRDeviceId(FXRDeviceId *this,IXRSystemIdentifier *param_1,int param_2)

{
  (**(code **)*param_1)(param_1,this);
  this->DeviceId = param_2;
  return this;
}

// FXRDeviceId @ 14594e390

FXRDeviceId * __thiscall FXRDeviceId::FXRDeviceId(FXRDeviceId *this)

{
  (this->SystemName).ComparisonIndex = 0;
  (this->SystemName).Number = 0;
  this->DeviceId = -1;
  return this;
}

// operator== @ 14594eca0

bool __thiscall FXRDeviceId::operator==(FXRDeviceId *this,FXRDeviceId *param_1)

{
  if ((this->SystemName == param_1->SystemName) && (this->DeviceId == param_1->DeviceId)) {
    return true;
  }
  return false;
}

// operator== @ 14594ecc0

bool __thiscall FXRDeviceId::operator==(FXRDeviceId *this,IIdentifiableXRDevice *param_1)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res10 [24];
  
  if (param_1 != (IIdentifiableXRDevice *)0x0) {
    pFVar3 = (FName *)(**(code **)*param_1)(param_1,local_res10);
    if (this->SystemName == *pFVar3) {
      iVar1 = this->DeviceId;
      iVar2 = (**(code **)((longlong)*param_1 + 8))(param_1);
      if (iVar1 == iVar2) {
        return true;
      }
    }
  }
  return false;
}

// Clear @ 145951a10

void __thiscall FXRDeviceId::Clear(FXRDeviceId *this)

{
  this->DeviceId = -1;
  (this->SystemName).ComparisonIndex = 0;
  (this->SystemName).Number = 0;
  return;
}

// IsOwnedBy @ 1459541c0

bool __thiscall FXRDeviceId::IsOwnedBy(FXRDeviceId *this,IXRSystemIdentifier *param_1)

{
  FName *pFVar1;
  undefined1 local_res10 [24];
  
  if (param_1 != (IXRSystemIdentifier *)0x0) {
    pFVar1 = (FName *)(**(code **)*param_1)(param_1,local_res10);
    if (*pFVar1 == this->SystemName) {
      return true;
    }
  }
  return false;
}

