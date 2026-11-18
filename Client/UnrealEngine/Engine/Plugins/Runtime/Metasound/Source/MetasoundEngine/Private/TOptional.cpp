// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_const_&> @ 14b30f7c0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14b30f860

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14b30f900

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14b30f9a0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_const_&> @ 14b30fa40

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_const_&> @ 14b30fae0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_const_&> @ 14b30fb80

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_const_&> @ 14b30fc20

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_const_&> @ 14b30fcc0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *param_1)

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

