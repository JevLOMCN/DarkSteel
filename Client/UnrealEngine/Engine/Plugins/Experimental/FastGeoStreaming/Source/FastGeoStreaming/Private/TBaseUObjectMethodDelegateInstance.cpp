// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 84

// CreateCopy @ 14da24910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da249a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da249f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14da24aa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da24b30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da24b80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVULevel___NAEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14da24c30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da24cc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da24d10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14da24dc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da24e50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da24ea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14da24f50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14da24fe0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da25030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14da250e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da25170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da251c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXPEBVUWorldPartitionRuntimeCell__V__TFunction___A6AXPEAVIWorldPartitionHLODObject___Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14da25270

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14da25300

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14da25350

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFastGeoWorldSubsystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// Execute @ 14da27820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
          *this,ULevel *param_1,UWorld *param_2)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8;
  
  local_res8 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14da27880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
          *this,ULevel *param_1,bool param_2,bool *param_3)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8;
  
  local_res8 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14da278f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,ULevel *param_2)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8;
  
  local_res8 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14da27950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8;
  
  local_res8 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14da279c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
         ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8;
  
  local_res8 = (UFastGeoWorldSubsystem *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3,param_4,param_5);
  return;
}

// Execute @ 14da27a50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
          *this,UWorldPartitionRuntimeCell *param_1,
         TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *param_2)

{
  UFastGeoWorldSubsystem *pUVar1;
  longlong *plVar2;
  UFastGeoWorldSubsystem *local_68 [2];
  code *local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_68[0] = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_58 = *(code **)&this->MethodPtr;
  uStack_50 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(local_68);
  local_48[0] = *(longlong *)param_2;
  local_20 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_28 = *(undefined8 *)&param_2->field_0x20;
  local_38 = *(undefined8 *)&param_2->field_0x10;
  uStack_30 = *(undefined8 *)&param_2->field_0x18;
  if (local_48[0] != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (*local_58)((longlong)&pUVar1->_padding_ + (longlong)(int)uStack_50,param_1,local_48);
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

// Execute @ 14da27b20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UFastGeoWorldSubsystem *pUVar1;
  UFastGeoWorldSubsystem *local_res8 [4];
  
  local_res8[0] = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 14da280f0

/* WARNING: Removing unreachable block (ram,0x00014da28166) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this,ULevel *param_1,UWorld *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// ExecuteIfSafe @ 14da281e0

/* WARNING: Removing unreachable block (ram,0x00014da2825f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                *this,ULevel *param_1,bool param_2,bool *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// ExecuteIfSafe @ 14da282e0

/* WARNING: Removing unreachable block (ram,0x00014da28356) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,ULevel *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// ExecuteIfSafe @ 14da283d0

/* WARNING: Removing unreachable block (ram,0x00014da2844e) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// ExecuteIfSafe @ 14da284d0

/* WARNING: Removing unreachable block (ram,0x00014da2854b) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
               ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2,param_3,param_4,param_5);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// ExecuteIfSafe @ 14da285f0

/* WARNING: Removing unreachable block (ram,0x00014da2865e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
                *this,UWorldPartitionRuntimeCell *param_1,
               TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  longlong *plVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_78[0] = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_78[0] != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_78[0]);
    }
    local_68 = (code *)0x0;
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 == (UFastGeoWorldSubsystem *)0x0) {
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    return false;
  }
  local_68 = *(code **)&this->MethodPtr;
  uStack_60 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_78[0] = pUVar3;
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(local_78);
  local_58[0] = *(longlong *)param_2;
  local_30 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_38 = *(undefined8 *)&param_2->field_0x20;
  local_48 = *(undefined8 *)&param_2->field_0x10;
  uStack_40 = *(undefined8 *)&param_2->field_0x18;
  if (local_58[0] != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (*local_68)((longlong)&pUVar3->_padding_ + (longlong)(int)uStack_60,param_1,local_58);
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return true;
}

// ExecuteIfSafe @ 14da28770

/* WARNING: Removing unreachable block (ram,0x00014da287d6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFastGeoWorldSubsystem *pUVar3;
  UFastGeoWorldSubsystem *pUVar4;
  UObject *pUVar5;
  UFastGeoWorldSubsystem *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFastGeoWorldSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFastGeoWorldSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UFastGeoWorldSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFastGeoWorldSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFastGeoWorldSubsystem,UFastGeoWorldSubsystem_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFastGeoWorldSubsystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14da29960

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14da29970

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14da29980

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14da29990

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14da299a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14da299b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14da299c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14da2aec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2aed0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2aee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2aef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14da2af20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14da2bc50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14da2bc60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14da2c150

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c180

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c1b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c1e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c240

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14da2c270

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14da2d6a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d6c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d6e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d740

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14da2d760

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14da2dfb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2dfd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2dff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2e010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2e030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2e050

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14da2e070

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14da38960

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da38970

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da38980

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da38990

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da389a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da389b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14da389c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

