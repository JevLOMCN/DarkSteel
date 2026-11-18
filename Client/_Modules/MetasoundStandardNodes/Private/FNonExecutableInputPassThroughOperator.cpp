// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 19

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14afe0d90

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14afe0ec0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0455c0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b09ba30

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b09bb60

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b09bc90

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b09bdc0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b117c10

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b117d40

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b117e70

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b117fa0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b1180d0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b118200

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b118330

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1bcc60

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1bcd90

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b218320

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b218450

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b218580

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

