// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// ~FAsyncReadback @ 1494c55e0

void __thiscall FComputeGraphTaskWorker::FAsyncReadback::~FAsyncReadback(FAsyncReadback *this)

{
  FRHIGPUBufferReadback *pFVar1;
  FRHIStagingBuffer *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  FRHIGPUBufferReadback *pFVar7;
  
  pFVar1 = this->Readback;
  if (pFVar1 == (FRHIGPUBufferReadback *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7505322987457872293>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                       ,0x1a5,"Readback");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar6 = 8;
    pFVar7 = pFVar1 + 1;
    do {
      this_00 = pFVar7[-1].DestinationStagingBuffers[7].Reference;
      pFVar7 = (FRHIGPUBufferReadback *)(pFVar7[-1].DestinationStagingBuffers + 7);
      lVar6 = lVar6 + -1;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar6 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
    this->Readback = (FRHIGPUBufferReadback *)0x0;
  }
  if (*(longlong *)&this->OnDataAvailable != 0) {
    plVar2 = *(longlong **)&(this->OnDataAvailable).field_0x28;
    plVar5 = (longlong *)&(this->OnDataAvailable).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001494c56b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

