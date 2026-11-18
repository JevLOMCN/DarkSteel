// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateStatus @ 14854cae0

void __thiscall
FShaderCommonCompileJob::UpdateStatus(FShaderCommonCompileJob *this,EShaderCompileJobStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  ((this->JobStatusPtr).Object)->Status = (atomic<EShaderCompileJobStatus>)param_1;
  UNLOCK();
  return;
}

