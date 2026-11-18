// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// AllocateMemoryForEmplace<FName_const_&> @ 14b2a29e0

TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> * __thiscall
TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
::AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x28) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x28 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14b2a2afb;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x28);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14b2a2afb:
  TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x28);
}

