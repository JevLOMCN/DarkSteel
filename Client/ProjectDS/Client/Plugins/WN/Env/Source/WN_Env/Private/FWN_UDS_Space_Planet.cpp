// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 3

// StaticStruct @ 14a04c8d0

UScriptStruct * __cdecl FWN_UDS_Space_Planet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_UDS_Space_Planet.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WN_Env();
    Z_Registration_Info_UScriptStruct_FWN_UDS_Space_Planet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_UDS_Space_Planet,(UObject *)pUVar1,
                         L"WN_UDS_Space_Planet");
  }
  return Z_Registration_Info_UScriptStruct_FWN_UDS_Space_Planet.OuterSingleton;
}

// FWN_UDS_Space_Planet @ 14a04d9b0

FWN_UDS_Space_Planet * __thiscall
FWN_UDS_Space_Planet::FWN_UDS_Space_Planet(FWN_UDS_Space_Planet *this)

{
  undefined1 *puVar1;
  
  puVar1 = &(this->Property4).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Property4).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Property4).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Property4).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Property4).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Property6).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Property6).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Property6).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Property6).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Property6).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Property23).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Property23).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Property23).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Property23).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Property23).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Property31).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Property31).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Property31).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Property31).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Property31).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Property36).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Property36).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Property36).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Property36).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Property36).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  memset(this,0,0x248);
  return this;
}

// ~FWN_UDS_Space_Planet @ 14a04daa0

void __thiscall FWN_UDS_Space_Planet::~FWN_UDS_Space_Planet(FWN_UDS_Space_Planet *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Property36).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Property31).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Property23).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Property6).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Property4).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

