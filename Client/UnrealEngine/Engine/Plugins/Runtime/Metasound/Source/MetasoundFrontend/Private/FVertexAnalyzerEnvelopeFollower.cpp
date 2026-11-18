// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FVertexAnalyzerEnvelopeFollower @ 14ad9c040

FVertexAnalyzerEnvelopeFollower * __thiscall
Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FVertexAnalyzerEnvelopeFollower
          (FVertexAnalyzerEnvelopeFollower *this,FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FName *pFVar2;
  FEnvelopeFollowerInitParams local_48;
  undefined **local_28 [2];
  longlong local_18;
  
  FVertexAnalyzerBase::FVertexAnalyzerBase
            ((FVertexAnalyzerBase *)this,param_1->AnalyzerAddress,param_1->VertexDataReference);
  this->_padding_ = (longlong)&___7FVertexAnalyzerEnvelopeFollower_Frontend_Metasound__6B_;
  Audio::FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  TDataWriteReference<float>::CreateNew<>(&this->EnvelopeValue);
  local_48.bIsAnalog = true;
  local_48.AnalysisWindowMsec = 5.0;
  local_48.Mode = RootMeanSquared;
  local_48.SampleRate = (float)param_1->OperatorSettings->SampleRate;
  local_48.NumChannels = 1;
  local_48.AttackTimeMsec = 10.0;
  local_48.ReleaseTimeMsec = 10.0;
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
      ::FName::FName(&::Value.Name,"EnvelopeValue");
      pFVar2 = GetMetasoundDataTypeName<float>();
      ::Value.DataType = *pFVar2;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexAnalyzerBase::BindOutputData<float>
            ((FVertexAnalyzerBase *)this,::Value.Name,pFVar1,(TDataReadReference<float> *)local_28);
  return this;
}

// ~FVertexAnalyzerEnvelopeFollower @ 14ad9e980

void __thiscall
Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::~FVertexAnalyzerEnvelopeFollower
          (FVertexAnalyzerEnvelopeFollower *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
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

// Execute @ 14adb7c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::Execute(FVertexAnalyzerEnvelopeFollower *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAudioBuffer *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar4 = FVertexAnalyzerBase::GetVertexData<Metasound::FAudioBuffer>((FVertexAnalyzerBase *)this);
  if ((1 < (byte)LogMetaSound._0_1_) && (pFVar4->InitialNum != (pFVar4->Buffer).ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = (pFVar4->Buffer).ArrayNum;
  if ((1 < (byte)LogMetaSound._0_1_) && (pFVar4->InitialNum != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FEnvelopeFollower::ProcessAudio
            (&this->EnvelopeFollower,(float *)(pFVar4->Buffer).AllocatorInstance.Data,iVar1);
  pTVar5 = Audio::FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
  if (pTVar5->ArrayNum != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnvelopeFollower.GetEnvelopeValues().Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendVertexAnalyzerEnvelopeFollower.cpp"
                       ,0x33,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = Audio::FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
  uVar7 = pTVar5->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < pTVar5->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  **(undefined4 **)&(this->EnvelopeValue).field_0x8 =
       *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)pTVar5->ArrayNum * 4 + -4);
  FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
  return;
}

// GetAnalyzerName @ 14adbc290

FName * __cdecl Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Audio.EnvelopeFollower");
      _Init_thread_footer(&::_TSS0);
      return &AnalyzerName;
    }
  }
  return &AnalyzerName;
}

// GetDataType @ 14adbd9a0

FName * __cdecl Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::GetDataType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
          ::__l2::TypeName;
}

