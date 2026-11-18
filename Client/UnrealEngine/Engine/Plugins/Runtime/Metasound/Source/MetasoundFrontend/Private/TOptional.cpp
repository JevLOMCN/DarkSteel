// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14ad84ab0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_const_&> @ 14ad84b50

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_const_&> @ 14ad84bf0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *param_1
          )

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_const_&> @ 14aefb280

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<int>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_const_&> @ 14aefb320

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<float>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb3c0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb460

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb500

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb5a0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb640

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb6e0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_const_&> @ 14aefb780

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_const_&> @ 14aefb820

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_const_&> @ 14aefb8c0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_const_&> @ 14aefb960

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_const_&> @ 14aefba00

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<FString>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_const_&> @ 14aefbaa0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_const_&> @ 14aefbb40

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *param_1)

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

// Emplace<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_const_&> @ 14aefbbe0

FAnyDataReference * __thiscall
TOptional<Metasound::FAnyDataReference>::
Emplace<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_const_&>
          (TOptional<Metasound::FAnyDataReference> *this,
          TDataWriteReference<Metasound::TVariable<bool>_> *param_1)

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

