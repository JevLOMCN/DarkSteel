// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 22

// CreateCopy @ 14eaa5ac0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eaa5b50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14eaa5ba0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14eaa5c60

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eaa5cf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14eaa5d50

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14eaaa070

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
          *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  FWmfMediaTracks *pFVar1;
  FWmfMediaTracks *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FWmfMediaTracks,FWmfMediaTracks_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x48,param_1,param_2,param_3.Ticks,
             param_4.Ticks);
  return;
}

// Execute @ 14eaaa0f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::Execute(void *this,EWmfMediaSamplerClockEvent param_1)

{
  FWmfMediaTracks *pFVar1;
  FWmfMediaTracks *local_res8;
  
  local_res8 = *(FWmfMediaTracks **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FWmfMediaTracks,FWmfMediaTracks_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x48,param_1,
             *(undefined4 *)((longlong)this + 8));
  return;
}

// ExecuteIfSafe @ 14eaaa5d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
                *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  FWmfMediaTracks *pFVar1;
  FWmfMediaTracks *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FWmfMediaTracks,FWmfMediaTracks_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x48,param_1,param_2,param_3.Ticks,
             param_4.Ticks);
  return true;
}

// ExecuteIfSafe @ 14eaaa650

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::ExecuteIfSafe(void *this,EWmfMediaSamplerClockEvent param_1)

{
  FWmfMediaTracks *pFVar1;
  FWmfMediaTracks *local_res8;
  
  local_res8 = *(FWmfMediaTracks **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FWmfMediaTracks,FWmfMediaTracks_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x48,param_1,
             *(undefined4 *)((longlong)this + 8));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14eaac960

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14eaac970

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14eaae1a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14eaae1b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 14eab1330

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14eab1340

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14eab3200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14eab3210

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14eab6560

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14eab6570

bool __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14eac2180

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14eac2190

FName __thiscall
TBaseRawMethodDelegateInstance<0,FWmfMediaTracks,void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy,enum_EMediaTrackType>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

