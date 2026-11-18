// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 55

// CreateCopy @ 1464f8320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1464f83b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1464f8400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1464f84b0

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1464f8540

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1464f8590

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1464f8640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c663e65d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1464f86d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c663e65d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1464f8720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c663e65d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1464f87d0

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1464f8860

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1464f88b0

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1464fdbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FMixerDevice *pFVar1;
  FMixerDevice *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 1464fdc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(void *this,EConnectionType param_1,FString *param_2)

{
  FMixerDevice *pFVar1;
  FMixerDevice *local_res8;
  
  local_res8 = *(FMixerDevice **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            (&pFVar1->field_0x0 + *(int *)((longlong)this + 0x28),param_1,param_2);
  return;
}

// Execute @ 1464fdc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FMixerSourceManager *pFVar1;
  FMixerSourceManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1464fdcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(void *this,EConnectionType param_1,FString *param_2)

{
  FMixerSourceManager *pFVar1;
  FMixerSourceManager *local_res8;
  
  local_res8 = *(FMixerSourceManager **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 1464fde20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FMixerDevice *pFVar1;
  FMixerDevice *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 1464fde70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,EConnectionType param_1,FString *param_2)

{
  FMixerDevice *pFVar1;
  FMixerDevice *local_res8;
  
  local_res8 = *(FMixerDevice **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<Audio::FMixerDevice,Audio::FMixerDevice_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            (&pFVar1->field_0x0 + *(int *)((longlong)this + 0x28),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1464fded0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FMixerSourceManager *pFVar1;
  FMixerSourceManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1464fdf20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,EConnectionType param_1,FString *param_2)

{
  FMixerSourceManager *pFVar1;
  FMixerSourceManager *local_res8;
  
  local_res8 = *(FMixerSourceManager **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<Audio::FMixerSourceManager,Audio::FMixerSourceManager_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146501450

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146501460

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146501470

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146501480

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 146504620

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146504630

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 146504640

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146504650

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 146505c30

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146505c40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146505c50

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146505c60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146505de0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146505df0

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 146505e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146505e10

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14650f240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14650f250

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14650f260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14650f270

bool __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146528460

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146528470

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146528480

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146528490

FName __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14654c770

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectDynamicsProcessor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2b12ffa3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14654c800

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectDynamicsProcessor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2b12ffa3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14654c850

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectDynamicsProcessor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2b12ffa3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1465537c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
          *this,uint param_1)

{
  FSubmixEffectDynamicsProcessor *pFVar1;
  FSubmixEffectDynamicsProcessor *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSubmixEffectDynamicsProcessor,FSubmixEffectDynamicsProcessor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 146553890

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,uint param_1)

{
  FSubmixEffectDynamicsProcessor *pFVar1;
  FSubmixEffectDynamicsProcessor *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSubmixEffectDynamicsProcessor,FSubmixEffectDynamicsProcessor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146555810

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146559570

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14655c2d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14655c560

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146561810

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14657a0b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

