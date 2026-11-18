// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// FNonExecutableInputPassThroughOperator<WaveTable::FWaveTable> @ 14b303de0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<WaveTable::FWaveTable>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<WaveTable::FWaveTable> *param_2)

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

// FNonExecutableInputPassThroughOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b303fe0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

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

// FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b3041e0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_2)

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

// FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b3043e0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

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

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b304e10

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_2)

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

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b304f40

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_2)

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

// FNonExecutableInputPassThroughOperator<Metasound::FAudioBusAsset> @ 14b3052f0

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FAudioBusAsset>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

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

// FNonExecutableInputPassThroughOperator<Metasound::FWaveAsset> @ 14b305420

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FWaveAsset>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FWaveAsset> *param_2)

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

// FNonExecutableInputPassThroughOperator<Metasound::FWaveTableBankAsset> @ 14b305550

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FWaveTableBankAsset>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_2)

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

