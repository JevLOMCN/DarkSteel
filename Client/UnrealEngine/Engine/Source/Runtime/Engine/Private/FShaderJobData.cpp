// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FShaderJobData @ 14850f4f0

FShaderJobData * __thiscall FShaderJobData::FShaderJobData(FShaderJobData *this)

{
  (this->InputHash).Hash[0] = '\0';
  (this->InputHash).Hash[1] = '\0';
  (this->InputHash).Hash[2] = '\0';
  (this->InputHash).Hash[3] = '\0';
  (this->InputHash).Hash[4] = '\0';
  (this->InputHash).Hash[5] = '\0';
  (this->InputHash).Hash[6] = '\0';
  (this->InputHash).Hash[7] = '\0';
  (this->InputHash).Hash[8] = '\0';
  (this->InputHash).Hash[9] = '\0';
  (this->InputHash).Hash[10] = '\0';
  (this->InputHash).Hash[0xb] = '\0';
  (this->InputHash).Hash[0xc] = '\0';
  (this->InputHash).Hash[0xd] = '\0';
  (this->InputHash).Hash[0xe] = '\0';
  (this->InputHash).Hash[0xf] = '\0';
  (this->InputHash).Hash[0x10] = '\0';
  (this->InputHash).Hash[0x11] = '\0';
  (this->InputHash).Hash[0x12] = '\0';
  (this->InputHash).Hash[0x13] = '\0';
  (this->InputHash).Hash[0x14] = '\0';
  (this->InputHash).Hash[0x15] = '\0';
  (this->InputHash).Hash[0x16] = '\0';
  (this->InputHash).Hash[0x17] = '\0';
  (this->InputHash).Hash[0x18] = '\0';
  (this->InputHash).Hash[0x19] = '\0';
  (this->InputHash).Hash[0x1a] = '\0';
  (this->InputHash).Hash[0x1b] = '\0';
  (this->InputHash).Hash[0x1c] = '\0';
  (this->InputHash).Hash[0x1d] = '\0';
  (this->InputHash).Hash[0x1e] = '\0';
  (this->InputHash).Hash[0x1f] = '\0';
  (this->OutputHash).Hash[0] = '\0';
  (this->OutputHash).Hash[1] = '\0';
  (this->OutputHash).Hash[2] = '\0';
  (this->OutputHash).Hash[3] = '\0';
  (this->OutputHash).Hash[4] = '\0';
  (this->OutputHash).Hash[5] = '\0';
  (this->OutputHash).Hash[6] = '\0';
  (this->OutputHash).Hash[7] = '\0';
  (this->OutputHash).Hash[8] = '\0';
  (this->OutputHash).Hash[9] = '\0';
  (this->OutputHash).Hash[10] = '\0';
  (this->OutputHash).Hash[0xb] = '\0';
  (this->OutputHash).Hash[0xc] = '\0';
  (this->OutputHash).Hash[0xd] = '\0';
  (this->OutputHash).Hash[0xe] = '\0';
  (this->OutputHash).Hash[0xf] = '\0';
  (this->OutputHash).Hash[0x10] = '\0';
  (this->OutputHash).Hash[0x11] = '\0';
  (this->OutputHash).Hash[0x12] = '\0';
  (this->OutputHash).Hash[0x13] = '\0';
  (this->OutputHash).Hash[0x14] = '\0';
  (this->OutputHash).Hash[0x15] = '\0';
  (this->OutputHash).Hash[0x16] = '\0';
  (this->OutputHash).Hash[0x17] = '\0';
  (this->OutputHash).Hash[0x18] = '\0';
  (this->OutputHash).Hash[0x19] = '\0';
  (this->OutputHash).Hash[0x1a] = '\0';
  (this->OutputHash).Hash[0x1b] = '\0';
  (this->OutputHash).Hash[0x1c] = '\0';
  (this->OutputHash).Hash[0x1d] = '\0';
  (this->OutputHash).Hash[0x1e] = '\0';
  (this->OutputHash).Hash[0x1f] = '\0';
  (this->JobInFlight).Reference = (FShaderCommonCompileJob *)0x0;
  this->DuplicateJobsWaitList = (FShaderCommonCompileJob *)0x0;
  return this;
}

// ~FShaderJobData @ 1485116c0

void __thiscall FShaderJobData::~FShaderJobData(FShaderJobData *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FShaderCommonCompileJob *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = (this->JobInFlight).Reference;
  if (pFVar3 == (FShaderCommonCompileJob *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &pFVar3->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if ((pFVar3->Type == Single) || (pFVar3->Type == Pipeline)) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerJobTypes.h"
                         ,0x1d1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

