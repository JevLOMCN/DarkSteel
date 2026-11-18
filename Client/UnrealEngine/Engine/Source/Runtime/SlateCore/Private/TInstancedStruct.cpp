// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetMutablePtr<FNavigationMethod,void> @ 1424e6df0

FNavigationMethod * __thiscall
TInstancedStruct<FNavigationMethod>::GetMutablePtr<FNavigationMethod,void>
          (TInstancedStruct<FNavigationMethod> *this)

{
  int iVar1;
  FNavigationMethod *pFVar2;
  bool bVar3;
  UPackage *pUVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res10 [3];
  
  pFVar2 = (FNavigationMethod *)(this->InstancedStruct).StructMemory;
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
  if (pFVar2 == (FNavigationMethod *)0x0) {
    return (FNavigationMethod *)0x0;
  }
  if (local_res8.DebugPtr == (UScriptStruct *)0x0) {
    return (FNavigationMethod *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar4,
                         L"NavigationMethod");
  }
  if (local_res8.DebugPtr == Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton) {
    return pFVar2;
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar4,
                         L"NavigationMethod");
    if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_1424e6ea1;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton)->_padding_;
  if (((int)(local_res8.DebugPtr)->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return pFVar2;
  }
LAB_1424e6ea1:
  local_res10[0] = &local_res8;
  bVar3 = `UE::StructUtils::GetStructPtr<FNavigationMethod,FNavigationMethod>'::__l7::<lambda_1>::
          operator()(local_res10);
  if (bVar3) {
    return pFVar2;
  }
  return (FNavigationMethod *)0x0;
}

