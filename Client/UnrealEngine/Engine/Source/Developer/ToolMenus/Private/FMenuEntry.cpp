// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// ~FMenuEntry @ 142c3bd80

void __thiscall UE::ToolMenus::FMenuEntry::~FMenuEntry(FMenuEntry *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  if ((*(int *)((longlong)&(this->Label).field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (this->Label).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142c3bdc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetTypeName @ 142c60720

FName __thiscall UE::ToolMenus::FMenuEntry::GetTypeName(FMenuEntry *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

