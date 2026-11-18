// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 2

// GetAnimNodePtr<FAnimNode_BlendStack> @ 14a85fae0

FAnimNode_BlendStack * __thiscall
FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(FAnimNodeReference *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar4,
                           L"AnimNode_BlendStack");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FAnimNode_BlendStack *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return (FAnimNode_BlendStack *)this->AnimNode;
    }
  }
  return (FAnimNode_BlendStack *)0x0;
}

// GetAnimNodePtr<FAnimNode_BlendStackInput> @ 14a85fb80

FAnimNode_BlendStackInput * __thiscall
FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(FAnimNodeReference *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStackInput,(UObject *)pUVar4,
                           L"AnimNode_BlendStackInput");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FAnimNode_BlendStackInput *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return (FAnimNode_BlendStackInput *)this->AnimNode;
    }
  }
  return (FAnimNode_BlendStackInput *)0x0;
}

