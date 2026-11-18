// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// DestroyObject @ 148c38190

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FScreenShotManager,SharedPointerInternals::DefaultDeleter<FScreenShotManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FScreenShotManager,SharedPointerInternals::DefaultDeleter<FScreenShotManager>,1>
                *this)

{
  FScreenShotManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FScreenShotManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c381a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c46ae0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImageComparisonResult,SharedPointerInternals::DefaultDeleter<FImageComparisonResult>,1>
::DestroyObject(TReferenceControllerWithDeleter<FImageComparisonResult,SharedPointerInternals::DefaultDeleter<FImageComparisonResult>,1>
                *this)

{
  FImageComparisonResult *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FImageComparisonResult *)0x0) {
    FImageComparisonResult::~FImageComparisonResult(this_00);
    ::operator_delete(this_00,0xf0);
    return;
  }
  return;
}

