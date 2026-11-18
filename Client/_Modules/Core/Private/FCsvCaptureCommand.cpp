// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator= @ 14191d540

FCsvCaptureCommand * __thiscall
FCsvCaptureCommand::operator=(FCsvCaptureCommand *this,FCsvCaptureCommand *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TSharedFuture<FString> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = &param_1->DestinationFolder;
  this->CommandType = param_1->CommandType;
  pFVar2 = &this->DestinationFolder;
  this->FrameRequested = param_1->FrameRequested;
  this->Value = param_1->Value;
  if (pFVar2 != pFVar1) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DestinationFolder).Data.ArrayNum = (param_1->DestinationFolder).Data.ArrayNum;
    (this->DestinationFolder).Data.ArrayMax = (param_1->DestinationFolder).Data.ArrayMax;
    (param_1->DestinationFolder).Data.ArrayNum = 0;
    (param_1->DestinationFolder).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Filename;
  pFVar2 = &this->Filename;
  if (pFVar2 != pFVar1) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
    (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
    (param_1->Filename).Data.ArrayNum = 0;
    (param_1->Filename).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->Future;
  this->Flags = param_1->Flags;
  this->Completion = param_1->Completion;
  if (&this->Future != pTVar3) {
    *(undefined8 *)&this->Future = *(undefined8 *)pTVar3;
    *(undefined8 *)pTVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,
               (FSharedReferencer<1> *)&(param_1->Future).field_0x8);
  }
  return this;
}

