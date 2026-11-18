// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 1

// Call @ 14e6625b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FInterchangeWorkerHandler *this;
  
  this = *(FInterchangeWorkerHandler **)param_1;
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x0;
  UNLOCK();
  Interchange::FInterchangeWorkerHandler::RunInternal(this);
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x8;
  UNLOCK();
  if ((3 < (byte)LogInterchangeDispatcher._0_1_) && (this->ErrorState != Ok)) {
    switch(this->ErrorState) {
    case ConnectionFailed_NotBound:
      break;
    case ConnectionFailed_NoClient:
      break;
    case ConnectionLost:
      break;
    case ConnectionLost_SendFailed:
      break;
    case WorkerProcess_CantCreate:
      break;
    case WorkerProcess_Lost:
    }
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    return;
  }
  return;
}

