// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FNodeTestInfo @ 149f95070

FNodeTestInfo * __thiscall
PCGDeterminismTests::FNodeTestInfo::FNodeTestInfo
          (FNodeTestInfo *this,FText *param_1,
          TFunction<bool___cdecl(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&)> *param_2,
          float param_3)

{
  int iVar1;
  ITextData *pIVar2;
  longlong lVar3;
  FString *pFVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  FName local_38 [4];
  
  (this->TestLabel).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->TextData).Reference;
  (this->TestLabel).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
  }
  (this->TestLabel).Flags = param_1->Flags;
  pFVar4 = FText::ToString(param_1);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  pFVar5 = ::FName::FName(local_38,iVar8,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,FNAME_Add)
  ;
  this->TestName = *pFVar5;
  lVar3 = *(longlong *)param_2;
  *(longlong *)&this->TestDelegate = lVar3;
  *(undefined8 *)&(this->TestDelegate).field_0x28 = 0;
  if (lVar3 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  this->TestLabelWidth = param_3;
  pIVar2 = (param_1->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

