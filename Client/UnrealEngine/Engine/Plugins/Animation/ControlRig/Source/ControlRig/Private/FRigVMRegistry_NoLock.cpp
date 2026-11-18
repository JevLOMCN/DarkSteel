// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// GetTypeIndex_NoLock<UE::Math::TQuat<double>,0> @ 14a39c8e0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)TBaseStructure<UE::Math::TQuat<double>_>::Get();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock<UE::Math::TVector<double>,0> @ 14a39c9a0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)TBaseStructure<UE::Math::TVector<double>_>::Get();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock<UE::Math::TRotator<double>,0> @ 14a504f00

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)TBaseStructure<UE::Math::TRotator<double>_>::Get();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock<UE::Math::TTransform<double>,0> @ 14a504fc0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)TBaseStructure<UE::Math::TTransform<double>_>::Get();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock<FRigElementKey,0> @ 14a505080

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)FRigElementKey::StaticStruct();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

