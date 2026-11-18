// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// FAnalysisProcessor @ 14d38f0f0

FAnalysisProcessor * __thiscall
UE::Trace::FAnalysisProcessor::FAnalysisProcessor
          (FAnalysisProcessor *this,FAnalysisProcessor *param_1)

{
  this->Impl = (FImpl *)0x0;
  this->Impl = param_1->Impl;
  param_1->Impl = (FImpl *)0x0;
  return this;
}

// ~FAnalysisProcessor @ 14d392140

void __thiscall UE::Trace::FAnalysisProcessor::~FAnalysisProcessor(FAnalysisProcessor *this)

{
  FImpl *pFVar1;
  
  pFVar1 = this->Impl;
  if (pFVar1 != (FImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d392150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// operator= @ 14d3938a0

FAnalysisProcessor * __thiscall
UE::Trace::FAnalysisProcessor::operator=(FAnalysisProcessor *this,FAnalysisProcessor *param_1)

{
  FImpl *pFVar1;
  
  pFVar1 = this->Impl;
  this->Impl = param_1->Impl;
  param_1->Impl = pFVar1;
  return this;
}

// IsActive @ 14d3a0590

bool __thiscall UE::Trace::FAnalysisProcessor::IsActive(FAnalysisProcessor *this)

{
  if (this->Impl != (FImpl *)0x0) {
    return this->Impl->bComplete == false;
  }
  return false;
}

// Pause @ 14d3a5b40

void __thiscall UE::Trace::FAnalysisProcessor::Pause(FAnalysisProcessor *this,bool param_1)

{
  FImpl *pFVar1;
  longlong lVar2;
  
  pFVar1 = this->Impl;
  if ((pFVar1 != (FImpl *)0x0) && (pFVar1->bComplete == false)) {
    lVar2 = pFVar1->UnpausedEvent->_padding_;
    if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014d3a5b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d3a5b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))();
    return;
  }
  return;
}

// Stop @ 14d3a87a0

void __thiscall UE::Trace::FAnalysisProcessor::Stop(FAnalysisProcessor *this)

{
  FImpl *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = this->Impl;
  if ((pFVar1 != (FImpl *)0x0) && (pFVar1->bComplete == false)) {
    (**(code **)(pFVar1->StopEvent->_padding_ + 0x10))();
    if (pFVar1->bComplete == false) {
      (**(code **)(pFVar1->Thread->_padding_ + 0x18))(pFVar1->Thread,1);
      pFVar2 = pFVar1->Thread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
      pFVar1->Thread = (FRunnableThread *)0x0;
    }
  }
  return;
}

// Wait @ 14d3a8b30

void __thiscall UE::Trace::FAnalysisProcessor::Wait(FAnalysisProcessor *this)

{
  FImpl *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = this->Impl;
  if ((pFVar1 != (FImpl *)0x0) && (pFVar1->bComplete == false)) {
    (**(code **)(pFVar1->Thread->_padding_ + 0x18))(pFVar1->Thread,1);
    pFVar2 = pFVar1->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    pFVar1->Thread = (FRunnableThread *)0x0;
  }
  return;
}

