// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FVertexAnalyzerAudioBuffer @ 14ad9bcb0

FVertexAnalyzerAudioBuffer * __thiscall
Metasound::Frontend::FVertexAnalyzerAudioBuffer::FVertexAnalyzerAudioBuffer
          (FVertexAnalyzerAudioBuffer *this,FCreateAnalyzerParams *param_1)

{
  TReferenceControllerBase<0> *pTVar1;
  undefined8 uVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FVertexAnalyzerAudioBuffer *pFVar7;
  FName *pFVar8;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *pTVar9;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *pTVar10;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *pTVar11;
  TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&> local_res8;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *local_c8;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *local_c0;
  TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1> **local_b8;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> **local_b0;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  FAnalyzerAddress local_88;
  
  FVertexAnalyzerBase::FVertexAnalyzerBase
            ((FVertexAnalyzerBase *)this,param_1->AnalyzerAddress,param_1->VertexDataReference);
  this->_padding_ = (longlong)&___7FVertexAnalyzerAudioBuffer_Frontend_Metasound__6B_;
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  puVar6 = ::operator_new(0x28);
  pTVar11 = (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->AudioBuffer).field_0x8 = 0x10;
    *(undefined8 *)&(this->AudioBuffer).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = &
              ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined8 **)&(this->AudioBuffer).field_0x8 = puVar6 + 2;
    *(undefined8 **)&(this->AudioBuffer).field_0x10 = puVar6;
    if ((puVar6 + 2 == (undefined8 *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FVertexAnalyzerAudioBuffer *)(*pcVar4)();
      return pFVar7;
    }
  }
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar1 = *(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10;
  uVar2 = *(undefined8 *)&(this->AudioBuffer).field_0x8;
  if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
    pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
  }
  pFVar3 = param_1->OperatorSettings;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Value.Name,"AudioBuffer");
    pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
    ::Value.DataType = *pFVar8;
    _Init_thread_footer(&::_TSS0);
  }
  local_88.NodeID._0_8_ = this->_padding_;
  local_88.NodeID._8_8_ = this->_padding_;
  local_88._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  local_88.InstanceID = this->_padding_;
  local_88.OutputName = (FName)this->_padding_;
  local_88.AnalyzerName = (FName)this->_padding_;
  local_88.AnalyzerInstanceID._0_8_ = this->_padding_;
  local_88.AnalyzerInstanceID._8_8_ = this->_padding_;
  local_88.UseDataTransmissionCenter = SUB81(this->_padding_,0);
  local_res8.Value = (TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1> *)::Value.Name;
  local_88.AnalyzerMemberName = ::Value.Name;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_88.DataType = *pFVar8;
  pTVar9 = ::operator_new(0x88);
  pTVar10 = pTVar11;
  if (pTVar9 != (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
      pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
    }
    local_a8[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_a8[1] = (undefined **)uVar2;
    local_98 = pTVar1;
    pTVar10 = TBoundAnalyzerOutput<Metasound::FAudioBuffer>::
              TBoundAnalyzerOutput<Metasound::FAudioBuffer>
                        (pTVar9,&local_88,pFVar3,
                         (TDataReadReference<Metasound::FAudioBuffer> *)local_a8);
  }
  local_c8 = pTVar10;
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 != (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)0x0) {
    *(undefined4 *)&(pTVar9->Address)._padding_ = 1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_VFAudioBuffer_Metasound___Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_VFAudioBuffer_Metasound___Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&(pTVar9->Address)._padding_ + 4) = 1;
    (pTVar9->Address).InstanceID = (ulong64)pTVar10;
    pTVar11 = pTVar9;
  }
  local_b8 = &local_res8.Value;
  local_b0 = &local_c8;
  local_c0 = pTVar11;
  TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_c0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// ~FVertexAnalyzerAudioBuffer @ 14ad9e8b0

void __thiscall
Metasound::Frontend::FVertexAnalyzerAudioBuffer::~FVertexAnalyzerAudioBuffer
          (FVertexAnalyzerAudioBuffer *this)

{
  undefined8 *puVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
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

// Execute @ 14adb7c40

void __thiscall
Metasound::Frontend::FVertexAnalyzerAudioBuffer::Execute(FVertexAnalyzerAudioBuffer *this)

{
  FAudioBuffer *pFVar1;
  
  pFVar1 = FVertexAnalyzerBase::GetVertexData<Metasound::FAudioBuffer>((FVertexAnalyzerBase *)this);
  FAudioBuffer::operator=(*(FAudioBuffer **)&(this->AudioBuffer).field_0x8,pFVar1);
  FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
  return;
}

// GetAnalyzerName @ 14adbc210

FName * __cdecl Metasound::Frontend::FVertexAnalyzerAudioBuffer::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Audio.AudioBuffer");
      _Init_thread_footer(&::_TSS0);
      return &AnalyzerName;
    }
  }
  return &AnalyzerName;
}

// GetDataType @ 14adbd990

FName * __cdecl Metasound::Frontend::FVertexAnalyzerAudioBuffer::GetDataType(void)

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

