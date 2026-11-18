// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d4d9fa0

UScriptStruct * __cdecl FStateTreeExternalDataDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc,(UObject *)pUVar1,
                         L"StateTreeExternalDataDesc");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.OuterSingleton;
}

// IsCompatibleWith @ 14d501280

bool __thiscall
FStateTreeExternalDataDesc::IsCompatibleWith
          (FStateTreeExternalDataDesc *this,FStateTreeDataView *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  UClass *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar2 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar2 != (UStruct *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)param_1 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)param_1 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return true;
    }
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
    if (((bVar3) && (pUVar4 = (UClass *)(this->Struct).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)
        ) && (this_00 = *(UClass **)param_1, this_00 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        bVar3 = UClass::ImplementsInterface(this_00,pUVar4);
        return bVar3;
      }
    }
  }
  return false;
}

