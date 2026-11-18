// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerPlatformAudioLink
// Functions: 22

// CreateCopy @ 148d2b7e0

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d2b870

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 148d2b8c0

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnOpenStreamParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d2b970

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148d2ba00

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 148d2ba50

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMixerPlatformAudioLink_Audio____A6AXAEBUFOnRenderParams_IAudioLinkSynchronizer___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 148d2bb00

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
          *this,FOnOpenStreamParams *param_1)

{
  FAudioMixerPlatformAudioLink *pFVar1;
  FAudioMixerPlatformAudioLink *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FAudioMixerPlatformAudioLink,Audio::FAudioMixerPlatformAudioLink_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 148d2bb50

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
          *this,FOnRenderParams *param_1)

{
  FAudioMixerPlatformAudioLink *pFVar1;
  FAudioMixerPlatformAudioLink *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FAudioMixerPlatformAudioLink,Audio::FAudioMixerPlatformAudioLink_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 148d2bba0

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
                *this,FOnOpenStreamParams *param_1)

{
  FAudioMixerPlatformAudioLink *pFVar1;
  FAudioMixerPlatformAudioLink *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FAudioMixerPlatformAudioLink,Audio::FAudioMixerPlatformAudioLink_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 148d2bbf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
                *this,FOnRenderParams *param_1)

{
  FAudioMixerPlatformAudioLink *pFVar1;
  FAudioMixerPlatformAudioLink *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FAudioMixerPlatformAudioLink,Audio::FAudioMixerPlatformAudioLink_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148d2bc40

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148d2bc50

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148d2bcf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148d2bd00

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148d2c0b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148d2c0c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148d2c0d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148d2c0e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148d2c650

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148d2c660

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148d2cd50

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148d2cd60

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

