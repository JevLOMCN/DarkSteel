// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// OnImageReceived @ 1446ee840

void __thiscall
`FImagePixelPipe::AddEndpoint'::__l2::FFunctorEndpoint::OnImageReceived
          (void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)this + 0x10);
  plVar2 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0x38);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001446ee88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

