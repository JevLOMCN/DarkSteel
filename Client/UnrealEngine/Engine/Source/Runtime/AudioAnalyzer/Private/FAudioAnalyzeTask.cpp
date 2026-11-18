// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 5

// FAudioAnalyzeTask @ 14d80ca70

FAudioAnalyzeTask * __thiscall
FAudioAnalyzeTask::FAudioAnalyzeTask
          (FAudioAnalyzeTask *this,
          TUniquePtr<Audio::FAnalyzerFacade,TDefaultDelete<Audio::FAnalyzerFacade>_> *param_1,
          int param_2,int param_3)

{
  FAnalyzerFacade *pFVar1;
  
  pFVar1 = param_1->Ptr;
  param_1->Ptr = (FAnalyzerFacade *)0x0;
  (this->AnalyzerFacade).Ptr = pFVar1;
  this->SampleRate = param_2;
  this->NumChannels = param_3;
  (this->AudioData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioData).ArrayNum = 0;
  (this->AudioData).ArrayMax = 0;
  (this->Results).Ptr = (IAnalyzerResult *)0x0;
  (this->AnalyzerControls).Object = (IAnalyzerControls *)0x0;
  (this->AnalyzerControls).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FAudioAnalyzeTask @ 14d80cdf0

void __thiscall FAudioAnalyzeTask::~FAudioAnalyzeTask(FAudioAnalyzeTask *this)

{
  IAnalyzerResult *pIVar1;
  FScriptContainerElement *pFVar2;
  FAnalyzerFacade *pFVar3;
  IAnalyzerWorker *pIVar4;
  IAnalyzerSettings *pIVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyzerControls).SharedReferenceCount.ReferenceController);
  pIVar1 = (this->Results).Ptr;
  if (pIVar1 != (IAnalyzerResult *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->AudioData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->AnalyzerFacade).Ptr;
  if (pFVar3 != (FAnalyzerFacade *)0x0) {
    pIVar4 = (pFVar3->Worker).Ptr;
    if (pIVar4 != (IAnalyzerWorker *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar5 = (pFVar3->Settings).Ptr;
    if (pIVar5 != (IAnalyzerSettings *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    ::operator_delete(pFVar3,0x20);
    return;
  }
  return;
}

// DoWork @ 14d80e970

void __thiscall FAudioAnalyzeTask::DoWork(FAudioAnalyzeTask *this)

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
  
  if ((this->AnalyzerFacade).Ptr == (FAnalyzerFacade *)0x0) {
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
  this_00 = (this->AnalyzerFacade).Ptr;
  pTVar2 = (this->AnalyzerControls).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar2->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  TVar6 = Audio::FAnalyzerFacade::AnalyzeAudioBuffer
                    (this_00,local_res8,(int)this + 0x10,in_XMM3_Da,
                     (TSharedPtr<Audio::IAnalyzerControls,1> *)
                     CONCAT44(in_stack_ffffffffffffffdc,(float)this->SampleRate));
  pTVar7 = &this->Results;
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

// SetAnalyzerControls @ 14d810670

void __thiscall
FAudioAnalyzeTask::SetAnalyzerControls
          (FAudioAnalyzeTask *this,TSharedPtr<Audio::IAnalyzerControls,1> *param_1)

{
  IAnalyzerControls *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->AnalyzerControls).SharedReferenceCount.ReferenceController;
  (this->AnalyzerControls).Object = pIVar1;
  (this->AnalyzerControls).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAudioBuffer @ 14d8106c0

void __thiscall
FAudioAnalyzeTask::SetAudioBuffer
          (FAudioAnalyzeTask *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->AudioData;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AudioData).ArrayNum = param_1->ArrayNum;
    (this->AudioData).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

