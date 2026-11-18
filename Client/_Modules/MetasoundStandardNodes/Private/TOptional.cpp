// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 29

// Emplace<Metasound::TDataReadReference<int>_const_&> @ 14afe3b90

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<int>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,TDataReadReference<int> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<float>_const_&> @ 14afe3c30

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<float>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,TDataReadReference<float> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<Metasound::FAudioBuffer>_const_&> @ 14afe3cd0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataReadReference<Metasound::FAudioBuffer>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataReadReference<Metasound::FAudioBuffer> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<Metasound::FTime>_const_&> @ 14afe3d70

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataReadReference<Metasound::FTime>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataReadReference<Metasound::FTime> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<Metasound::FTrigger>_const_&> @ 14afe3e10

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataReadReference<Metasound::FTrigger>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataReadReference<Metasound::FTrigger> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<bool>_const_&> @ 14afe3eb0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<bool>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,TDataReadReference<bool> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_const_&> @ 14afe3f50

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_const_&> @ 14afe3ff0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_const_&> @ 14afe4090

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_const_&> @ 14afe4130

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_const_&> @ 14b046410

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_const_&> @ 14b09ef70

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_const_&> @ 14b09f010

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_const_&> @ 14b09f0b0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_const_&> @ 14b09f150

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_const_&> @ 14b11cf90

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_const_&> @ 14b11d030

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_const_&> @ 14b11d0d0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_const_&> @ 14b11d170

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_const_&> @ 14b11d210

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_const_&> @ 14b11d2b0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_const_&> @ 14b11d350

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_const_&> @ 14b11d3f0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_const_&> @ 14b1be830

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_const_&> @ 14b1be8d0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataReadReference<FString>_const_&> @ 14b21aaa0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::Emplace<Metasound::TDataReadReference<FString>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,TDataReadReference<FString> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Read;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_const_&> @ 14b21ab40

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_const_&> @ 14b21abe0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_const_&> @ 14b21ac80

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
          *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FAnyDataReference *pFVar4;
  
  if ((this->bIsSet != false) &&
     (pIVar1 = (this->TypedValue).DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  (this->TypedValue).AccessType = Write;
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&(this->TypedValue).DataRefPtr);
  if ((this->TypedValue).DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAnyDataReference *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->bIsSet = true;
  return &this->TypedValue;
}

