// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 2

// DestroyObject @ 14d80e210

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAsyncTask<FAudioAnalyzeTask>,SharedPointerInternals::DefaultDeleter<FAsyncTask<FAudioAnalyzeTask>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAsyncTask<FAudioAnalyzeTask>,SharedPointerInternals::DefaultDeleter<FAsyncTask<FAudioAnalyzeTask>_>,1>
                *this)

{
  FAsyncTask<FAudioAnalyzeTask> *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAsyncTask<FAudioAnalyzeTask> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d80e221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14d80e230

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IAnalyzerNRTResult,SharedPointerInternals::DefaultDeleter<Audio::IAnalyzerNRTResult>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::IAnalyzerNRTResult,SharedPointerInternals::DefaultDeleter<Audio::IAnalyzerNRTResult>,1>
                *this)

{
  IAnalyzerNRTResult *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IAnalyzerNRTResult *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d80e241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

