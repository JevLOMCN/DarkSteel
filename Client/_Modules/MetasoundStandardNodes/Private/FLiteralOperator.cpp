// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 42

// BindInputs @ 14afcf360

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afcf7c0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afcfd90

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat>::FLiteralOperator::
BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afd0ac0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14aff9b90

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                       *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14aff9c60

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14aff9d30

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::FMonoAudioFormat> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataValueReference<Metasound::FMonoAudioFormat>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FMonoAudioFormat> *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFMonoAudioFormat_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14aff9e00

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::FStereoAudioFormat> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataValueReference<Metasound::FStereoAudioFormat>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FStereoAudioFormat> *)local_30,param_2,param_3
                     );
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFStereoAudioFormat_Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14b0361c0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b053480

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14b07e710

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b07f930

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b081450

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b081fc0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b0b4700

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_30,
                      param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b0b47d0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b0b48a0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_30,
                      param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b0b4970

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                       *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14b10aa30

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10b7d0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10c860

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10d570

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10e660

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10fae0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b111250

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b140740

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b140810

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_30,
                      param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b1408e0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b1409b0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b140a80

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b140b50

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                       *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b140c20

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14b1b2e10

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1b3590

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b1ce000

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_30,
                      param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b1ce0d0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14b1fc880

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1fee60

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b200ef0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b233c50

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                      local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b233d20

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *
                      )local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b233df0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_30,
                      param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
  ;
  return this;
}

