// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// GetNode @ 14d4be7b0

FStateTreeNodeBase * __thiscall
UE::StateTree::Async::FActivePathInfo::GetNode(FActivePathInfo *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FStateTreeNodeBase *pFVar5;
  FConstStructView *this_00;
  FConstStructView local_18;
  
  if (((this->Frame == (FStateTreeExecutionFrame *)0x0) ||
      ((this->Frame->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) ||
     ((this->NodeIndex).Value == 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid() && Frame->StateTree && NodeIndex.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeAsyncExecutionContext.cpp"
                       ,10,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStateTreeNodeBase *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = 0xffffffff;
  uVar1 = (this->NodeIndex).Value;
  if (uVar1 != 0xffff) {
    uVar4 = (uint)uVar1;
  }
  this_00 = UStateTree::GetNode((this->Frame->StateTree).field0_0x0.DebugPtr,&local_18,uVar4);
  pFVar5 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(this_00);
  return pFVar5;
}

