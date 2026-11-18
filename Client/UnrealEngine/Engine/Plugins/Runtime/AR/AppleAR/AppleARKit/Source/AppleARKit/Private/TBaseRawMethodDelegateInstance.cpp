// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 22

// CreateCopy @ 14cfd3890

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3920

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14cfd3970

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3a20

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitSystem____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3ab0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitSystem____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14cfd3b00

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAppleARKitSystem____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14cfd50b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FAppleARKitModule *pFVar1;
  FAppleARKitModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitModule,FAppleARKitModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14cfd50f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
          *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  FAppleARKitSystem *pFVar1;
  FAppleARKitSystem *local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8 = this->UserObject;
  local_18._0_4_ = param_3->A;
  local_18._4_4_ = param_3->B;
  uStack_10._0_4_ = param_3->C;
  uStack_10._4_4_ = param_3->D;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,&local_18);
  return;
}

// ExecuteIfSafe @ 14cfd5720

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FAppleARKitModule *pFVar1;
  FAppleARKitModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitModule,FAppleARKitModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// ExecuteIfSafe @ 14cfd5760

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  FAppleARKitSystem *pFVar1;
  FAppleARKitSystem *local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8 = this->UserObject;
  local_18._0_4_ = param_3->A;
  local_18._4_4_ = param_3->B;
  uStack_10._0_4_ = param_3->C;
  uStack_10._4_4_ = param_3->D;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cfd5a90

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cfd5aa0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14cfd6ec0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14cfd6ed0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14cfd8ba0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cfd8bb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cfd9260

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14cfd9270

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14cfd9d90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14cfd9da0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cfdf520

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cfdf530

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

