// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// DestroyObject @ 145c55790

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadFileHandle,SharedPointerInternals::DefaultDeleter<IAsyncReadFileHandle>,1>
::DestroyObject(TReferenceControllerWithDeleter<IAsyncReadFileHandle,SharedPointerInternals::DefaultDeleter<IAsyncReadFileHandle>,1>
                *this)

{
  IAsyncReadFileHandle *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c557a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145c557b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadRequest,SharedPointerInternals::DefaultDeleter<IAsyncReadRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<IAsyncReadRequest,SharedPointerInternals::DefaultDeleter<IAsyncReadRequest>,1>
                *this)

{
  IAsyncReadRequest *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IAsyncReadRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c557c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
    return;
  }
  return;
}

