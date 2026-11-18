// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// GetMutablePtr<FRigBaseComponent> @ 14a2d2e70

/* WARNING: Removing unreachable block (ram,0x00014a2d2ef3) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall
FInstancedStruct::GetMutablePtr<FRigBaseComponent>(FInstancedStruct *this)

{
  int iVar1;
  FRigBaseComponent *pFVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  pFVar2 = (FRigBaseComponent *)this->StructMemory;
  if ((pFVar2 == (FRigBaseComponent *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FRigBaseComponent *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseComponent,(UObject *)pUVar4,
                         L"RigBaseComponent");
    if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0)
    {
      return (FRigBaseComponent *)0x0;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton)->_padding_;
  if ((iVar1 <= (int)pUVar3->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton)->_padding_)) {
    return pFVar2;
  }
  return (FRigBaseComponent *)0x0;
}

