// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 33

// CreateCopy @ 149f40460

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cdb4a468 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f404f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cdb4a468 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149f40540

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cdb4a468 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f405f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4e602b58 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f40680

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4e602b58 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149f406d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_4e602b58 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f40780

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGRuntimeGenScheduler____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f40810

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGRuntimeGenScheduler____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 149f40860

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGRuntimeGenScheduler____A6AXPEAVUWorld__PEBVULevelStreaming__PEAVULevel__W4ELevelStreamingState__3_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 149f42570

void __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FPCGModule *pFVar1;
  FPCGModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPCGModule,FPCGModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 149f425b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::Execute
          (TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,float param_1)

{
  undefined1 uVar1;
  FPCGModule *pFVar2;
  FPCGModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FPCGModule,FPCGModule_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 149f42600

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
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
         ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  FPCGRuntimeGenScheduler *pFVar1;
  FPCGRuntimeGenScheduler *local_res8;
  
  local_res8 = *(FPCGRuntimeGenScheduler **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FPCGRuntimeGenScheduler,FPCGRuntimeGenScheduler_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}

// ExecuteIfSafe @ 149f42750

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FPCGModule *pFVar1;
  FPCGModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPCGModule,FPCGModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 149f42790

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  FPCGModule *pFVar1;
  FPCGModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPCGModule,FPCGModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 149f427e0

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
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
               ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  FPCGRuntimeGenScheduler *pFVar1;
  FPCGRuntimeGenScheduler *local_res8;
  
  local_res8 = *(FPCGRuntimeGenScheduler **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FPCGRuntimeGenScheduler,FPCGRuntimeGenScheduler_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 149f47f90

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149f47fa0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149f47fb0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 149f4bcd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 149f4bce0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 149f4bcf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 149f500e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 149f500f0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 149f50100

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 149f50460

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 149f50470

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 149f50480

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 149f52bb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 149f52bc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 149f52bd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 149f6af80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149f6af90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149f6afa0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

