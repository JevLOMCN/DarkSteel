// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 2

// DestroyObject @ 146bf7e40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification,SharedPointerInternals::DefaultDeleter<`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146bf7e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146bf7e60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest,SharedPointerInternals::DefaultDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest,SharedPointerInternals::DefaultDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest>,1>
                *this)

{
  FMediaPlayerLifecycleManagerDelegateOpenRequest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaPlayerLifecycleManagerDelegateOpenRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146bf7e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

