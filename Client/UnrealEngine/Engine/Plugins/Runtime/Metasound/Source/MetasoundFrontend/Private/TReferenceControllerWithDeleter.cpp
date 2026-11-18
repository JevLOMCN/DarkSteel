// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 29

// DestroyObject @ 14ad7a6a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>_>,1>
                *this)

{
  TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad7a6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ad7d930

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad7d941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ad7da00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad7da11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14adb6820

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<float>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<float>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<float>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<float>_>,1>
                *this)

{
  TBoundAnalyzerOutput<float> *pTVar1;
  TSender<float> *pTVar2;
  FDataTransmissionCenter *this_00;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TBoundAnalyzerOutput<float> *)0x0) {
    pTVar2 = (pTVar1->Sender).Ptr;
    pTVar1->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_M_Frontend_Metasound__6B_;
    if (pTVar2 != (TSender<float> *)0x0) {
      (pTVar1->Sender).Ptr = (TSender<float> *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
      this_00 = Metasound::FDataTransmissionCenter::Get();
      Metasound::FDataTransmissionCenter::UnregisterDataChannel
                (this_00,(FTransmissionAddress *)&pTVar1->Address);
    }
    pTVar2 = (pTVar1->Sender).Ptr;
    if (pTVar2 != (TSender<float> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(pTVar1->DataRef).field_0x10);
    ::operator_delete(pTVar1,0x88);
    return;
  }
  return;
}

// DestroyObject @ 14adb68b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>_>,1>
                *this)

{
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *pTVar1;
  TSender<Metasound::FAudioBuffer> *pTVar2;
  FDataTransmissionCenter *this_00;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)0x0) {
    pTVar2 = (pTVar1->Sender).Ptr;
    pTVar1->_padding_ =
         (longlong)&___7__TBoundAnalyzerOutput_VFAudioBuffer_Metasound___Frontend_Metasound__6B_;
    if (pTVar2 != (TSender<Metasound::FAudioBuffer> *)0x0) {
      (pTVar1->Sender).Ptr = (TSender<Metasound::FAudioBuffer> *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
      this_00 = Metasound::FDataTransmissionCenter::Get();
      Metasound::FDataTransmissionCenter::UnregisterDataChannel
                (this_00,(FTransmissionAddress *)&pTVar1->Address);
    }
    pTVar2 = (pTVar1->Sender).Ptr;
    if (pTVar2 != (TSender<Metasound::FAudioBuffer> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(pTVar1->DataRef).field_0x10);
    ::operator_delete(pTVar1,0x88);
    return;
  }
  return;
}

// DestroyObject @ 14adb6940

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>_>,1>
                *this)

{
  TBoundAnalyzerOutput<Metasound::FTime> *pTVar1;
  TSender<Metasound::FTime> *pTVar2;
  FDataTransmissionCenter *this_00;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TBoundAnalyzerOutput<Metasound::FTime> *)0x0) {
    pTVar2 = (pTVar1->Sender).Ptr;
    pTVar1->_padding_ =
         (longlong)&___7__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound__6B_;
    if (pTVar2 != (TSender<Metasound::FTime> *)0x0) {
      (pTVar1->Sender).Ptr = (TSender<Metasound::FTime> *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
      this_00 = Metasound::FDataTransmissionCenter::Get();
      Metasound::FDataTransmissionCenter::UnregisterDataChannel
                (this_00,(FTransmissionAddress *)&pTVar1->Address);
    }
    pTVar2 = (pTVar1->Sender).Ptr;
    if (pTVar2 != (TSender<Metasound::FTime> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(pTVar1->DataRef).field_0x10);
    ::operator_delete(pTVar1,0x88);
    return;
  }
  return;
}

// DestroyObject @ 14adb69d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::IDataTypeRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::IDataTypeRegistryEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::IDataTypeRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::IDataTypeRegistryEntry>,1>
                *this)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adb69e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14adb69f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::IReceiver,SharedPointerInternals::DefaultDeleter<Metasound::IReceiver>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::IReceiver,SharedPointerInternals::DefaultDeleter<Metasound::IReceiver>,1>
                *this)

{
  IReceiver *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IReceiver *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adb6a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae30770

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::FDocumentModifyDelegates,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::FDocumentModifyDelegates>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::FDocumentModifyDelegates,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::FDocumentModifyDelegates>,1>
                *this)

{
  FDocumentModifyDelegates *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FDocumentModifyDelegates *)0x0) {
    Metasound::Frontend::FDocumentModifyDelegates::~FDocumentModifyDelegates(this_00);
    ::operator_delete(this_00,0x2e0);
    return;
  }
  return;
}

// DestroyObject @ 14ae307b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>,1>
                *this)

{
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae307c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae307d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::FFrontendGraph,SharedPointerInternals::DefaultDeleter<Metasound::FFrontendGraph>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::FFrontendGraph,SharedPointerInternals::DefaultDeleter<Metasound::FFrontendGraph>,1>
                *this)

{
  FFrontendGraph *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFrontendGraph *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae307e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae6d330

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::INodeClassRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeClassRegistryEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::INodeClassRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeClassRegistryEntry>,1>
                *this)

{
  INodeClassRegistryEntry *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (INodeClassRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae6d341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae6d350

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::INodeTemplateRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeTemplateRegistryEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::Frontend::INodeTemplateRegistryEntry,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::INodeTemplateRegistryEntry>,1>
                *this)

{
  INodeTemplateRegistryEntry *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (INodeTemplateRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae6d361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae944d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<bool>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<bool>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<bool>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<bool>_>,1>
                *this)

{
  TCopyableDataChannel<bool> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae944e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae96bb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<FString>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<FString>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<FString>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<FString>_>,1>
                *this)

{
  TCopyableDataChannel<FString> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<FString> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae96bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ae9b330

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>_>,1>
                *this)

{
  TCopyableDataChannel<Metasound::FAudioBuffer> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<Metasound::FAudioBuffer> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae9b341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aea0ba0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aea0bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aea2ec0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aea2ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aea5df0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aea5e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aea9f40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aea9f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeaf3f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aeaf401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeb0c10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<int>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<int>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<int>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<int>_>,1>
                *this)

{
  TCopyableDataChannel<int> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aeb0c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeb2d30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x00014aeb2d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeb37f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FTrigger>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FTrigger>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FTrigger>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FTrigger>_>,1>
                *this)

{
  TCopyableDataChannel<Metasound::FTrigger> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<Metasound::FTrigger> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aeb3801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeb5c80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FTime>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FTime>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FTime>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FTime>_>,1>
                *this)

{
  TCopyableDataChannel<Metasound::FTime> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<Metasound::FTime> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aeb5c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aeb6310

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aeb6321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aed2580

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<float>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<float>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<float>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<float>_>,1>
                *this)

{
  TCopyableDataChannel<float> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aed2591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aed6a80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FSendAddress>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FSendAddress>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::FSendAddress>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::FSendAddress>_>,1>
                *this)

{
  TCopyableDataChannel<Metasound::FSendAddress> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<Metasound::FSendAddress> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aed6a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14aee4950

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>_>,1>
                *this)

{
  TCopyableDataChannel<FMetasoundParameterStorageWrapper> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014aee4961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

