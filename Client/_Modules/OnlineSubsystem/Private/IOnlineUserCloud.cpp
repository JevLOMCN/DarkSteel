// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 34

// IOnlineUserCloud @ 14eb313d0

IOnlineUserCloud * __thiscall IOnlineUserCloud::IOnlineUserCloud(IOnlineUserCloud *this)

{
  *(undefined8 *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x18 = 2;
  this->_padding_ = (longlong)&___7IOnlineUserCloud__6B_;
  *(undefined8 *)&this->OnEnumerateUserFilesCompleteDelegates = 0;
  *(undefined8 *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnReadUserFileCompleteDelegates = 0;
  *(undefined8 *)&(this->OnReadUserFileCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnReadUserFileCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnWriteUserFileProgress64Delegates = 0;
  *(undefined8 *)&(this->OnWriteUserFileProgress64Delegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteUserFileProgress64Delegates).field_0x10 = 0;
  *(undefined8 *)&this->OnWriteUserFileCompleteDelegates = 0;
  *(undefined8 *)&(this->OnWriteUserFileCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteUserFileCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnWriteUserFileCanceledDelegates = 0;
  *(undefined8 *)&(this->OnWriteUserFileCanceledDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteUserFileCanceledDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnDeleteUserFileCompleteDelegates = 0;
  *(undefined8 *)&(this->OnDeleteUserFileCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeleteUserFileCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnRequestUsageInfoCompleteDelegates = 0;
  *(undefined8 *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnUserCloudAnalyticsEventDelegates = 0;
  *(undefined8 *)&(this->OnUserCloudAnalyticsEventDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserCloudAnalyticsEventDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->OnReadUserFileCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnWriteUserFileProgress64Delegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnWriteUserFileCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnWriteUserFileCanceledDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnDeleteUserFileCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnUserCloudAnalyticsEventDelegates).field_0x18 = 2;
  return this;
}

// ~IOnlineUserCloud @ 14eb358b0

void __thiscall IOnlineUserCloud::~IOnlineUserCloud(IOnlineUserCloud *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineUserCloud__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUserCloudAnalyticsEventDelegates).field_0x8,
             *(int *)&(this->OnUserCloudAnalyticsEventDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnUserCloudAnalyticsEventDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserCloudAnalyticsEventDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRequestUsageInfoCompleteDelegates).field_0x8,
             *(int *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnRequestUsageInfoCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestUsageInfoCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDeleteUserFileCompleteDelegates).field_0x8,
             *(int *)&(this->OnDeleteUserFileCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnDeleteUserFileCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeleteUserFileCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWriteUserFileCanceledDelegates).field_0x8,
             *(int *)&(this->OnWriteUserFileCanceledDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnWriteUserFileCanceledDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteUserFileCanceledDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWriteUserFileCompleteDelegates).field_0x8,
             *(int *)&(this->OnWriteUserFileCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnWriteUserFileCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteUserFileCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWriteUserFileProgress64Delegates).field_0x8,
             *(int *)&(this->OnWriteUserFileProgress64Delegates).field_0x10);
  pvVar1 = *(void **)&(this->OnWriteUserFileProgress64Delegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteUserFileProgress64Delegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReadUserFileCompleteDelegates).field_0x8,
             *(int *)&(this->OnReadUserFileCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnReadUserFileCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadUserFileCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEnumerateUserFilesCompleteDelegates).field_0x8,
             *(int *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnumerateUserFilesCompleteDelegates);
  return;
}

// AddOnDeleteUserFileCompleteDelegate_Handle @ 14ebb6c10

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnDeleteUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnDeleteUserFileCompleteDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnEnumerateUserFilesCompleteDelegate_Handle @ 14ebb6c80

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnEnumerateUserFilesCompleteDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnEnumerateUserFilesCompleteDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *)local_res8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnReadUserFileCompleteDelegate_Handle @ 14ebb6d60

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnReadUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnReadUserFileCompleteDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnRequestUsageInfoCompleteDelegate_Handle @ 14ebb6dd0

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnRequestUsageInfoCompleteDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,__int64,TOptional<__int64>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,__int64,TOptional<__int64>_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,__int64,TOptional<__int64>_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnRequestUsageInfoCompleteDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,__int64,TOptional<__int64>_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnUserCloudAnalyticsEventDelegate_Handle @ 14ebb6e40

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnUserCloudAnalyticsEventDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnUserCloudAnalyticsEventDelegates,
        (TDelegate<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnWriteUserFileCanceledDelegate_Handle @ 14ebb6eb0

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnWriteUserFileCanceledDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnWriteUserFileCanceledDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnWriteUserFileCompleteDelegate_Handle @ 14ebb6f20

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnWriteUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnWriteUserFileCompleteDelegates,
        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnWriteUserFileProgress64Delegate_Handle @ 14ebb6f90

FDelegateHandle __thiscall
IOnlineUserCloud::AddOnWriteUserFileProgress64Delegate_Handle
          (IOnlineUserCloud *this,
          TDelegate<void___cdecl(unsigned___int64,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnWriteUserFileProgress64Delegates,
        (TDelegate<void___cdecl(unsigned___int64,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearOnDeleteUserFileCompleteDelegate_Handle @ 14ebbc020

void __thiscall
IOnlineUserCloud::ClearOnDeleteUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDeleteUserFileCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnDeleteUserFileCompleteDelegates @ 14ebbc050

void __thiscall
IOnlineUserCloud::ClearOnDeleteUserFileCompleteDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnDeleteUserFileCompleteDelegates,param_1);
  return;
}

// ClearOnEnumerateUserFilesCompleteDelegate_Handle @ 14ebbc070

void __thiscall
IOnlineUserCloud::ClearOnEnumerateUserFilesCompleteDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnEnumerateUserFilesCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnEnumerateUserFilesCompleteDelegates @ 14ebbc0a0

void __thiscall
IOnlineUserCloud::ClearOnEnumerateUserFilesCompleteDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnEnumerateUserFilesCompleteDelegates,param_1);
  return;
}

// ClearOnReadUserFileCompleteDelegate_Handle @ 14ebbc0f0

void __thiscall
IOnlineUserCloud::ClearOnReadUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnReadUserFileCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnReadUserFileCompleteDelegates @ 14ebbc120

void __thiscall
IOnlineUserCloud::ClearOnReadUserFileCompleteDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnReadUserFileCompleteDelegates,param_1);
  return;
}

// ClearOnRequestUsageInfoCompleteDelegate_Handle @ 14ebbc130

void __thiscall
IOnlineUserCloud::ClearOnRequestUsageInfoCompleteDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnRequestUsageInfoCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnRequestUsageInfoCompleteDelegates @ 14ebbc160

void __thiscall
IOnlineUserCloud::ClearOnRequestUsageInfoCompleteDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnRequestUsageInfoCompleteDelegates,param_1);
  return;
}

// ClearOnUserCloudAnalyticsEventDelegate_Handle @ 14ebbc180

void __thiscall
IOnlineUserCloud::ClearOnUserCloudAnalyticsEventDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUserCloudAnalyticsEventDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnUserCloudAnalyticsEventDelegates @ 14ebbc1b0

void __thiscall
IOnlineUserCloud::ClearOnUserCloudAnalyticsEventDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnUserCloudAnalyticsEventDelegates,param_1);
  return;
}

// ClearOnWriteUserFileCanceledDelegate_Handle @ 14ebbc1d0

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileCanceledDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnWriteUserFileCanceledDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnWriteUserFileCanceledDelegates @ 14ebbc200

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileCanceledDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnWriteUserFileCanceledDelegates,param_1);
  return;
}

// ClearOnWriteUserFileCompleteDelegate_Handle @ 14ebbc220

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileCompleteDelegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnWriteUserFileCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnWriteUserFileCompleteDelegates @ 14ebbc250

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileCompleteDelegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnWriteUserFileCompleteDelegates,param_1);
  return;
}

// ClearOnWriteUserFileProgress64Delegate_Handle @ 14ebbc260

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileProgress64Delegate_Handle
          (IOnlineUserCloud *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnWriteUserFileProgress64Delegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnWriteUserFileProgress64Delegates @ 14ebbc290

void __thiscall
IOnlineUserCloud::ClearOnWriteUserFileProgress64Delegates(IOnlineUserCloud *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnWriteUserFileProgress64Delegates,param_1);
  return;
}

// TriggerOnDeleteUserFileCompleteDelegates @ 14ec18340

void __thiscall
IOnlineUserCloud::TriggerOnDeleteUserFileCompleteDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  TMulticastDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnDeleteUserFileCompleteDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnEnumerateUserFilesCompleteDelegates @ 14ec18360

void __thiscall
IOnlineUserCloud::TriggerOnEnumerateUserFilesCompleteDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnEnumerateUserFilesCompleteDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnEnumerateUserFilesCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnEnumerateUserFilesCompleteDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnEnumerateUserFilesCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnEnumerateUserFilesCompleteDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnReadUserFileCompleteDelegates @ 14ec185e0

void __thiscall
IOnlineUserCloud::TriggerOnReadUserFileCompleteDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  TMulticastDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnReadUserFileCompleteDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnRequestUsageInfoCompleteDelegates @ 14ec185f0

void __thiscall
IOnlineUserCloud::TriggerOnRequestUsageInfoCompleteDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2,long64 param_3,
          TOptional<__int64> *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnRequestUsageInfoCompleteDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnRequestUsageInfoCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnRequestUsageInfoCompleteDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3,param_4),
         cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnRequestUsageInfoCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnRequestUsageInfoCompleteDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// TriggerOnUserCloudAnalyticsEventDelegates @ 14ec18750

void __thiscall
IOnlineUserCloud::TriggerOnUserCloudAnalyticsEventDelegates
          (IOnlineUserCloud *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  TMulticastDelegate<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnUserCloudAnalyticsEventDelegates,param_1,param_2);
  return;
}

// TriggerOnWriteUserFileCanceledDelegates @ 14ec18770

void __thiscall
IOnlineUserCloud::TriggerOnWriteUserFileCanceledDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  TMulticastDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnWriteUserFileCanceledDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnWriteUserFileCompleteDelegates @ 14ec18790

void __thiscall
IOnlineUserCloud::TriggerOnWriteUserFileCompleteDelegates
          (IOnlineUserCloud *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  TMulticastDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnWriteUserFileCompleteDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnWriteUserFileProgress64Delegates @ 14ec187a0

void __thiscall
IOnlineUserCloud::TriggerOnWriteUserFileProgress64Delegates
          (IOnlineUserCloud *this,ulong64 param_1,FUniqueNetId *param_2,FString *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnWriteUserFileProgress64Delegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnWriteUserFileProgress64Delegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnWriteUserFileProgress64Delegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnWriteUserFileProgress64Delegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnWriteUserFileProgress64Delegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnWriteUserFileProgress64Delegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnWriteUserFileProgress64Delegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

