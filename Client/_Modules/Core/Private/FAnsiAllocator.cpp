// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ResizeAllocation @ 141658230

void __thiscall
FAnsiAllocator::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  
  if (param_2 == 0) {
    free(this->Data);
    this->Data = (FScriptContainerElement *)0x0;
    return;
  }
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    pFVar1 = realloc(this->Data,(longlong)param_2 * param_3);
    this->Data = pFVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidAnsiAllocatorNum(param_2,param_3);
}

