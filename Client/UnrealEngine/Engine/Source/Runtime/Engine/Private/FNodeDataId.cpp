// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FNodeDataId @ 1474b32b0

FNodeDataId * __thiscall
UE::Anim::FNodeDataId::FNodeDataId
          (FNodeDataId *this,FName param_1,FAnimNode_Base *param_2,UScriptStruct *param_3)

{
  uint uVar1;
  FAnimNodeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNodeDataId *pFVar6;
  IAnimClassInterface *pIVar7;
  uint uVar8;
  
  (this->Id).ComparisonIndex = 0;
  (this->Id).Number = 0;
  this->Index = -1;
  if (param_1 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                       ,0xd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNodeDataId *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_2 == (FAnimNode_Base *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                       ,0xe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNodeDataId *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_3 == (UScriptStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNodeStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                       ,0xf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNodeDataId *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->Id = param_1;
  if (param_2->NodeData != (FAnimNodeData *)0x0) {
    pIVar7 = FAnimNodeData::GetAnimClassInterface(param_2->NodeData);
    iVar5 = (**(code **)((longlong)*pIVar7 + 0x130))(pIVar7,param_3,param_1);
    this->Index = iVar5;
    if ((iVar5 < 0) || ((param_2->NodeData->Entries).ArrayNum <= iVar5)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode->NodeData->Entries.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x1a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNodeDataId *)(*pcVar3)();
        return pFVar6;
      }
    }
    uVar1 = this->Index;
    pFVar2 = param_2->NodeData;
    uVar8 = 0;
    if ((int)uVar1 < (pFVar2->Entries).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNodeDataId *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (*(int *)((pFVar2->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode->NodeData->Entries[Index] != 0xffffffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNodeDataId *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  return this;
}

