// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 11

// CreateCopy @ 14a0326a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a032740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x40);
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  }
  return;
}

// CreateCopy @ 14a0327b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar7[4] = uVar5;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
    uVar2 = *(undefined4 *)((longlong)this + 0x3c);
    uVar3 = *(undefined4 *)((longlong)this + 0x40);
    uVar4 = *(undefined4 *)((longlong)this + 0x44);
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)this + 0x38);
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar2;
    *(undefined4 *)(puVar7 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
    puVar7[9] = *(undefined8 *)((longlong)this + 0x48);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a0331f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)((longlong)this + 0x38) - *(double *)((longlong)this + 0x30);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = ((double)param_1 - *(double *)((longlong)this + 0x30)) / dVar1;
  }
  else {
    dVar1 = __real_3ff0000000000000;
    if ((double)param_1 < *(double *)((longlong)this + 0x38)) {
      dVar1 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  UMaterialInstanceDynamic::SetScalarParameterValue
            (*(UMaterialInstanceDynamic **)((longlong)this + 0x20),*(FName *)((longlong)this + 0x28)
             ,(float)(dVar1 * (*(double *)((longlong)this + 0x48) -
                              *(double *)((longlong)this + 0x40)) +
                     *(double *)((longlong)this + 0x40)));
  return;
}

// ExecuteIfSafe @ 14a033310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)((longlong)this + 0x38) - *(double *)((longlong)this + 0x30);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = ((double)param_1 - *(double *)((longlong)this + 0x30)) / dVar1;
  }
  else {
    dVar1 = __real_3ff0000000000000;
    if ((double)param_1 < *(double *)((longlong)this + 0x38)) {
      dVar1 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  UMaterialInstanceDynamic::SetScalarParameterValue
            (*(UMaterialInstanceDynamic **)((longlong)this + 0x20),*(FName *)((longlong)this + 0x28)
             ,(float)(dVar1 * (*(double *)((longlong)this + 0x48) -
                              *(double *)((longlong)this + 0x40)) +
                     *(double *)((longlong)this + 0x40)));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a033bc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a0341e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14a035360

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a035530

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a036580

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a03a920

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

