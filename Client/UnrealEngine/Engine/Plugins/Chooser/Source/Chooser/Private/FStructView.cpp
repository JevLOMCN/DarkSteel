// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// GetPtr<FChooserEvaluationInputObject> @ 14a877a00

FChooserEvaluationInputObject * __thiscall
FStructView::GetPtr<FChooserEvaluationInputObject>(FStructView *this)

{
  int iVar1;
  FChooserEvaluationInputObject *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  pFVar2 = (FChooserEvaluationInputObject *)this->StructMemory;
  if ((pFVar2 == (FChooserEvaluationInputObject *)0x0) ||
     (pUVar3 = this->ScriptStruct, pUVar3 == (UScriptStruct *)0x0)) {
    return (FChooserEvaluationInputObject *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationInputObject,(UObject *)pUVar5,
                         L"ChooserEvaluationInputObject");
  }
  if (pUVar3 != Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationInputObject,(UObject *)pUVar5
                           ,L"ChooserEvaluationInputObject");
      if (Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FChooserEvaluationInputObject *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton)->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return (FChooserEvaluationInputObject *)0x0;
    }
  }
  return pFVar2;
}

