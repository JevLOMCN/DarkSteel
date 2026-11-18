// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FVertexAnalyzerTriggerToTime @ 14ad9c310

FVertexAnalyzerTriggerToTime * __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerToTime::FVertexAnalyzerTriggerToTime
          (FVertexAnalyzerTriggerToTime *this,FCreateAnalyzerParams *param_1)

{
  int iVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FVertexAnalyzerTriggerToTime *pFVar6;
  FAnalyzerOutput *pFVar7;
  int iVar8;
  undefined **local_28 [2];
  longlong local_18;
  
  FVertexAnalyzerBase::FVertexAnalyzerBase
            ((FVertexAnalyzerBase *)this,param_1->AnalyzerAddress,param_1->VertexDataReference);
  this->_padding_ = (longlong)&___7FVertexAnalyzerTriggerToTime_Frontend_Metasound__6B_;
  iVar8 = (int)(float)param_1->OperatorSettings->SampleRate;
  this->SampleRate = iVar8;
  iVar1 = param_1->OperatorSettings->NumFramesPerBlock;
  this->FramesPerBlock = iVar1;
  (this->BlockStartTime).Time = 0.0;
  this->SecondsPerBlock = (double)iVar1 / (double)iVar8;
  *(undefined ***)&this->LastTriggerTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  puVar5 = ::operator_new(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->LastTriggerTime).field_0x8 = 0x10;
    *(undefined8 *)&(this->LastTriggerTime).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = 0;
    *(undefined8 **)&(this->LastTriggerTime).field_0x8 = puVar5 + 2;
    *(undefined8 **)&(this->LastTriggerTime).field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FVertexAnalyzerTriggerToTime *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  *(undefined ***)&this->LastTriggerTime =
       &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  local_28[1] = *(undefined ***)&(this->LastTriggerTime).field_0x8;
  local_18 = *(longlong *)&(this->LastTriggerTime).field_0x10;
  if (local_18 != 0) {
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
  }
  pFVar2 = param_1->OperatorSettings;
  local_28[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  pFVar7 = FOutputs::GetValue();
  FVertexAnalyzerBase::BindOutputData<Metasound::FTime>
            ((FVertexAnalyzerBase *)this,pFVar7->Name,pFVar2,
             (TDataReadReference<Metasound::FTime> *)local_28);
  return this;
}

// ~FVertexAnalyzerTriggerToTime @ 14ad9eb20

void __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerToTime::~FVertexAnalyzerTriggerToTime
          (FVertexAnalyzerTriggerToTime *this)

{
  undefined8 *puVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LastTriggerTime).field_0x10);
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

// Execute @ 14adb7fd0

void __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerToTime::Execute(FVertexAnalyzerTriggerToTime *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FTrigger *pFVar3;
  longlong lVar4;
  
  pFVar3 = FVertexAnalyzerBase::GetVertexData<Metasound::FTrigger>((FVertexAnalyzerBase *)this);
  if (0 < pFVar3->LastTriggerIndexInBlock) {
    lVar1 = (longlong)pFVar3->LastTriggerIndexInBlock + -1;
    pFVar2 = (pFVar3->TriggeredFrames).AllocatorInstance.Data;
    if (0 < lVar1) {
      lVar4 = 0;
      do {
        **(double **)&(this->LastTriggerTime).field_0x8 =
             (double)*(int *)(pFVar2 + lVar4 * 4) / (double)this->SampleRate +
             (this->BlockStartTime).Time;
        FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar1);
    }
    **(double **)&(this->LastTriggerTime).field_0x8 =
         (double)*(int *)(pFVar2 + lVar1 * 4) / (double)this->SampleRate +
         (this->BlockStartTime).Time;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
  }
  (this->BlockStartTime).Time = this->SecondsPerBlock + (this->BlockStartTime).Time;
  return;
}

// GetAnalyzerName @ 14adbc390

FName * __cdecl Metasound::Frontend::FVertexAnalyzerTriggerToTime::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AnalyzerName,"UE.Trigger.ToTime");
      _Init_thread_footer(&::_TSS0);
      return &AnalyzerName;
    }
  }
  return &AnalyzerName;
}

// GetDataType @ 14adbd9c0

FName * __cdecl Metasound::Frontend::FVertexAnalyzerTriggerToTime::GetDataType(void)

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

