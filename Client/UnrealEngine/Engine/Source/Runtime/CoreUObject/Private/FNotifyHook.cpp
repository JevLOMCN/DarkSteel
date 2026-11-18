// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// NotifyPostChange @ 141eae4f0

void __thiscall
FNotifyHook::NotifyPostChange
          (FNotifyHook *this,FPropertyChangedEvent *param_1,FEditPropertyChain *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar1;
  FProperty *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0x18);
  if ((param_2 == (FEditPropertyChain *)0x0) || ((int)param_2->_padding_ < 1)) {
    pFVar2 = (FProperty *)0x0;
  }
  else {
    pTVar1 = FEditPropertyChain::GetActiveNode(param_2);
    pFVar2 = pTVar1->Value;
  }
                    /* WARNING: Could not recover jumptable at 0x000141eae540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,param_1,pFVar2);
  return;
}

// NotifyPreChange @ 141eae550

void __thiscall FNotifyHook::NotifyPreChange(FNotifyHook *this,FEditPropertyChain *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  TDoubleLinkedListNode *pTVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)((longlong)*this + 8);
  if ((param_1 != (FEditPropertyChain *)0x0) && (0 < (int)param_1->_padding_)) {
    pTVar1 = FEditPropertyChain::GetActiveNode(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141eae58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(this,pTVar1->Value);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141eae59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(this,0);
  return;
}

