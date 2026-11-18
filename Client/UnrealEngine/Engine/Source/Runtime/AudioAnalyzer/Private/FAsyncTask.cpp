// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 3

// DoTaskWork @ 14d80e890

void __thiscall FAsyncTask<FAudioAnalyzeTask>::DoTaskWork(FAsyncTask<FAudioAnalyzeTask> *this)

{
  atomic<int> *paVar1;
  FAnalyzerFacade *this_00;
  TReferenceControllerBase<1> *pTVar2;
  IAnalyzerResult *pIVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> TVar6;
  TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> *pTVar7;
  float in_XMM3_Da;
  TArray<float,TSizedDefaultAllocator<32>_> local_res8 [2];
  undefined4 in_stack_ffffffffffffffdc;
  
  if ((this->Task).AnalyzerFacade.Ptr == (FAnalyzerFacade *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AnalyzerFacade",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                       ,0x25,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (this->Task).AnalyzerFacade.Ptr;
  pTVar2 = (this->Task).AnalyzerControls.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar2->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  TVar6 = Audio::FAnalyzerFacade::AnalyzeAudioBuffer
                    (this_00,local_res8,(int)this + 0x80,in_XMM3_Da,
                     (TSharedPtr<Audio::IAnalyzerControls,1> *)
                     CONCAT44(in_stack_ffffffffffffffdc,(float)(this->Task).SampleRate));
  pTVar7 = &(this->Task).Results;
  if ((IAnalyzerResult *)pTVar7 != TVar6.Ptr) {
    pIVar3 = pTVar7->Ptr;
    pTVar7->Ptr = (IAnalyzerResult *)*TVar6.Ptr;
    *TVar6.Ptr = (IAnalyzerResult)0x0;
    if (pIVar3 != (IAnalyzerResult *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (local_res8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_res8[0].AllocatorInstance.Data)
              (local_res8[0].AllocatorInstance.Data,1);
  }
  return;
}

// MarkAsCanceled @ 14d810060

void __thiscall FAsyncTask<FAudioAnalyzeTask>::MarkAsCanceled(FAsyncTask<FAudioAnalyzeTask> *this)

{
  return;
}

// TryAbandonTask @ 14d811050

bool __thiscall FAsyncTask<FAudioAnalyzeTask>::TryAbandonTask(FAsyncTask<FAudioAnalyzeTask> *this)

{
  return false;
}

