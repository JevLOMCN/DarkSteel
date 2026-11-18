// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 18

// BindInputs @ 14b2dddb0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e1040

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e3080

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset>::FLiteralOperator::
BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e4e30

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e52b0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<WaveTable::FWaveTable>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e6c60

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e6f30

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveAsset>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e9bd0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e9dc0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14b3498d0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<WaveTable::FWaveTable>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<WaveTable::FWaveTable> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataValueReference<WaveTable::FWaveTable>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<WaveTable::FWaveTable> *)local_30,param_2,param_3);
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
       &___7FLiteralOperator___TLiteralOperatorLiteralFactory_UFWaveTable_WaveTable___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b3499a0

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349a70

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349b40

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349c10

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar3
  ;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349ce0

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349db0

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::FAudioBusAsset> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FAudioBusAsset> *)local_30,param_2,param_3);
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
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFAudioBusAsset_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349e80

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveAsset>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::FWaveAsset> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataValueReference<Metasound::FWaveAsset>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FWaveAsset> *)local_30,param_2,param_3);
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
       &___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFWaveAsset_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14b349f50

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::FWaveTableBankAsset> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FWaveTableBankAsset> *)local_30,param_2,
                      param_3);
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
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFWaveTableBankAsset_Metasound___Metasound__6B_
  ;
  return this;
}

