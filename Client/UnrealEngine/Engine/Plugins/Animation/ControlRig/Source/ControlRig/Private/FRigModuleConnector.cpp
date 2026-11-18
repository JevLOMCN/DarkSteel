// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a37ad40

UScriptStruct * __cdecl FRigModuleConnector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleConnector.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigModuleConnector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleConnector,(UObject *)pUVar1,
                         L"RigModuleConnector");
  }
  return Z_Registration_Info_UScriptStruct_FRigModuleConnector.OuterSingleton;
}

// operator== @ 14a3bea40

bool __thiscall
FRigModuleConnector::operator==(FRigModuleConnector *this,FRigModuleConnector *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = (this->Name).Data.ArrayNum;
  iVar1 = (param_1->Name).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14a3bea7a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data);
    bVar5 = iVar2 == 0;
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
  }
  if (!bVar5) {
    return false;
  }
LAB_14a3bea7a:
  uVar3 = ::GetTypeHash(&param_1->Settings);
  uVar4 = ::GetTypeHash(&this->Settings);
  if (uVar4 != uVar3) {
    return false;
  }
  return true;
}

