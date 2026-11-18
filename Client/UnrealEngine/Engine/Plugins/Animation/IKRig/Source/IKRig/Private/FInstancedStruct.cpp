// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// GetMutablePtr<FIKRetargetOpBase> @ 14df0c600

/* WARNING: Removing unreachable block (ram,0x00014df0c683) */

FIKRetargetOpBase * __thiscall
FInstancedStruct::GetMutablePtr<FIKRetargetOpBase>(FInstancedStruct *this)

{
  int iVar1;
  FIKRetargetOpBase *pFVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  pFVar2 = (FIKRetargetOpBase *)this->StructMemory;
  if ((pFVar2 == (FIKRetargetOpBase *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FIKRetargetOpBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar4,
                         L"IKRetargetOpBase");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      return (FIKRetargetOpBase *)0x0;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
  if ((iVar1 <= (int)pUVar3->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
    return pFVar2;
  }
  return (FIKRetargetOpBase *)0x0;
}

// GetPtr<FIKRetargetOpBase> @ 14df0d250

FIKRetargetOpBase * __thiscall FInstancedStruct::GetPtr<FIKRetargetOpBase>(FInstancedStruct *this)

{
  int iVar1;
  FIKRetargetOpBase *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  pFVar2 = (FIKRetargetOpBase *)this->StructMemory;
  if ((pFVar2 == (FIKRetargetOpBase *)0x0) ||
     (pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)) {
    return (FIKRetargetOpBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                         L"IKRetargetOpBase");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0
         ) {
        return (FIKRetargetOpBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return (FIKRetargetOpBase *)0x0;
    }
  }
  return pFVar2;
}

