// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 11

// CreateCopy @ 148be0de0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetworkPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148be0e70

void __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetworkPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 148be0ec0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetworkPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 148be2a10

void __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
          *this,FCookOnTheFlyMessage *param_1)

{
  FNetworkPlatformFile *pFVar1;
  FNetworkPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FNetworkPlatformFile,FNetworkPlatformFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((pFVar1->CachedLocalFiles).Hash.InlineData +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x58,param_1);
  return;
}

// ExecuteIfSafe @ 148be2a60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,FCookOnTheFlyMessage *param_1)

{
  FNetworkPlatformFile *pFVar1;
  FNetworkPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FNetworkPlatformFile,FNetworkPlatformFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((pFVar1->CachedLocalFiles).Hash.InlineData +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x58,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148be3230

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148be33a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148be34e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148be3520

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148be4860

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148be7ce0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNetworkPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

