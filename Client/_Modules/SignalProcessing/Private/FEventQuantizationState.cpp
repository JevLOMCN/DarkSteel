// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FEventQuantizationState @ 1444a4230

FEventQuantizationState * __thiscall
Audio::FEventQuantizer::FEventQuantizationState::FEventQuantizationState
          (FEventQuantizationState *this)

{
  this->EventFrameDuration = 0xffffffff;
  this->FrameCount = 0;
  (this->QueuedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedEvents).ArrayNum = 0;
  (this->QueuedEvents).ArrayMax = 0;
  (this->EventListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventListeners).ArrayNum = 0;
  (this->EventListeners).ArrayMax = 0;
  return this;
}

// ~FEventQuantizationState @ 1444a6490

void __thiscall
Audio::FEventQuantizer::FEventQuantizationState::~FEventQuantizationState
          (FEventQuantizationState *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->EventListeners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(unsigned_int)>,int>
            ((TFunction<void___cdecl(unsigned_int)> *)(this->QueuedEvents).AllocatorInstance.Data,
             (this->QueuedEvents).ArrayNum);
  pFVar1 = (this->QueuedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

