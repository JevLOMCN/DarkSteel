// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator()<FConstSharedStruct> @ 1470d16e0

bool __thiscall
FStructTypeSortOperator::operator()<FConstSharedStruct>
          (FStructTypeSortOperator *this,FConstSharedStruct *param_1,FConstSharedStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  uint uVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar6;
  uint uVar7;
  
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  TVar4.DebugPtr = (UScriptStruct *)0x0;
  TVar6.DebugPtr = TVar4.DebugPtr;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar6.DebugPtr = pTVar1->DebugPtr;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar4 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
  }
  if (TVar6.DebugPtr != (UScriptStruct *)0x0) {
    if (TVar4.DebugPtr != (UScriptStruct *)0x0) {
      iVar2 = (int)*(short *)((longlong)&(TVar4.DebugPtr)->_padding_ + 4);
      iVar3 = (int)*(short *)((longlong)&(TVar6.DebugPtr)->_padding_ + 4);
      uVar5 = (int)(TVar4.DebugPtr)->_padding_ + -1 + iVar2 & ~(iVar2 - 1U);
      uVar7 = (int)(TVar6.DebugPtr)->_padding_ + -1 + iVar3 & ~(iVar3 - 1U);
      if ((int)uVar5 < (int)uVar7) {
        return true;
      }
      if (uVar7 == uVar5) {
        iVar2 = (int)(TVar4.DebugPtr)->_padding_ - (int)(TVar6.DebugPtr)->_padding_;
        if (iVar2 == 0) {
          iVar2 = (int)((ulonglong)(TVar4.DebugPtr)->_padding_ >> 0x20) -
                  (int)((ulonglong)(TVar6.DebugPtr)->_padding_ >> 0x20);
        }
        if (iVar2 < 0) {
          return true;
        }
      }
    }
    return false;
  }
  return true;
}

// operator()<FSharedStruct> @ 1470d1770

bool __thiscall
FStructTypeSortOperator::operator()<FSharedStruct>
          (FStructTypeSortOperator *this,FSharedStruct *param_1,FSharedStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  uint uVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar6;
  uint uVar7;
  
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  TVar4.DebugPtr = (UScriptStruct *)0x0;
  TVar6.DebugPtr = TVar4.DebugPtr;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar6.DebugPtr = pTVar1->DebugPtr;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar4 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
  }
  if (TVar6.DebugPtr != (UScriptStruct *)0x0) {
    if (TVar4.DebugPtr != (UScriptStruct *)0x0) {
      iVar2 = (int)*(short *)((longlong)&(TVar4.DebugPtr)->_padding_ + 4);
      iVar3 = (int)*(short *)((longlong)&(TVar6.DebugPtr)->_padding_ + 4);
      uVar5 = (int)(TVar4.DebugPtr)->_padding_ + -1 + iVar2 & ~(iVar2 - 1U);
      uVar7 = (int)(TVar6.DebugPtr)->_padding_ + -1 + iVar3 & ~(iVar3 - 1U);
      if ((int)uVar5 < (int)uVar7) {
        return true;
      }
      if (uVar7 == uVar5) {
        iVar2 = (int)(TVar4.DebugPtr)->_padding_ - (int)(TVar6.DebugPtr)->_padding_;
        if (iVar2 == 0) {
          iVar2 = (int)((ulonglong)(TVar4.DebugPtr)->_padding_ >> 0x20) -
                  (int)((ulonglong)(TVar6.DebugPtr)->_padding_ >> 0x20);
        }
        if (iVar2 < 0) {
          return true;
        }
      }
    }
    return false;
  }
  return true;
}

