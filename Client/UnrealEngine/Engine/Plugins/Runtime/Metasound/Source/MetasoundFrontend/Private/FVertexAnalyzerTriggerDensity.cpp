// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FVertexAnalyzerTriggerDensity @ 14ad9c1a0

FVertexAnalyzerTriggerDensity * __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerDensity::FVertexAnalyzerTriggerDensity
          (FVertexAnalyzerTriggerDensity *this,FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FName *pFVar2;
  FEnvelopeFollowerInitParams local_48;
  undefined **local_28 [2];
  longlong local_18;
  
  FVertexAnalyzerBase::FVertexAnalyzerBase
            ((FVertexAnalyzerBase *)this,param_1->AnalyzerAddress,param_1->VertexDataReference);
  this->_padding_ = (longlong)&___7FVertexAnalyzerTriggerDensity_Frontend_Metasound__6B_;
  Audio::FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  TDataWriteReference<float>::CreateNew<>(&this->EnvelopeValue);
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBuffer).ArrayNum = 0;
  (this->ScratchBuffer).ArrayMax = 0;
  local_48.bIsAnalog = true;
  local_48.AnalysisWindowMsec = 5.0;
  local_48.Mode = Peak;
  local_48.SampleRate = (float)param_1->OperatorSettings->SampleRate;
  local_48.NumChannels = 1;
  local_48.AttackTimeMsec = 0.0;
  local_48.ReleaseTimeMsec = 120.0;
  Audio::FEnvelopeFollower::Init(&this->EnvelopeFollower,&local_48);
  local_28[1] = *(undefined ***)&(this->EnvelopeValue).field_0x8;
  local_18 = *(longlong *)&(this->EnvelopeValue).field_0x10;
  if (local_18 != 0) {
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
  }
  pFVar1 = param_1->OperatorSettings;
  local_28[0] = &___7__TDataReadReference_M_Metasound__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Value.Name,"TriggerDensity");
      pFVar2 = GetMetasoundDataTypeName<float>();
      ::Value.DataType = *pFVar2;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexAnalyzerBase::BindOutputData<float>
            ((FVertexAnalyzerBase *)this,::Value.Name,pFVar1,(TDataReadReference<float> *)local_28);
  return this;
}

// ~FVertexAnalyzerTriggerDensity @ 14ad9ea60

void __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerDensity::~FVertexAnalyzerTriggerDensity
          (FVertexAnalyzerTriggerDensity *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)&___7FVertexAnalyzerTriggerDensity_Frontend_Metasound__6B_;
  pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeValue).field_0x10);
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// Execute @ 14adb7dc0

void __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerDensity::Execute(FVertexAnalyzerTriggerDensity *this)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FTrigger *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  
  this_00 = FVertexAnalyzerBase::GetVertexData<Metasound::FTrigger>((FVertexAnalyzerBase *)this);
  pTVar2 = &this->ScratchBuffer;
  piVar1 = &(this->ScratchBuffer).ArrayMax;
  (this->ScratchBuffer).ArrayNum = 0;
  if ((this->ScratchBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar6 = this->NumFramesPerBlock;
  iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,&pTVar2->AllocatorInstance,&(this->ScratchBuffer).ArrayNum,piVar1);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 4,0,(longlong)iVar6 << 2);
  iVar5 = 0;
  iVar6 = FTrigger::Num(this_00);
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  if (0 < iVar6) {
    do {
      iVar6 = FTrigger::operator[](this_00,iVar5);
      if (iVar6 < *piVar1) {
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = 0x3f800000;
      }
      iVar5 = iVar5 + 1;
      iVar6 = FTrigger::Num(this_00);
    } while (iVar5 < iVar6);
  }
  Audio::FEnvelopeFollower::ProcessAudio
            (&this->EnvelopeFollower,(float *)(this->ScratchBuffer).AllocatorInstance.Data,*piVar1);
  pTVar7 = Audio::FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
  if ((pTVar7->ArrayNum != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnvelopeFollower.GetEnvelopeValues().Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendVertexAnalyzerTriggerDensity.cpp"
                         ,0x44,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = Audio::FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
  uVar8 = pTVar7->ArrayNum - 1;
  uVar9 = 0;
  if ((int)uVar8 < pTVar7->ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined4 **)&(this->EnvelopeValue).field_0x8 =
       *(undefined4 *)((pTVar7->AllocatorInstance).Data + (longlong)pTVar7->ArrayNum * 4 + -4);
  FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
  return;
}

// GetAnalyzerName @ 14adbc310

FName * __cdecl Metasound::Frontend::FVertexAnalyzerTriggerDensity::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Trigger.Density");
      _Init_thread_footer(&::_TSS0);
      return &AnalyzerName;
    }
  }
  return &AnalyzerName;
}

// GetDataType @ 14adbd9b0

FName * __cdecl Metasound::Frontend::FVertexAnalyzerTriggerDensity::GetDataType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FTrigger>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>(void)'
          ::__l2::TypeName;
}

