// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 99

// CreateCopy @ 14d6be450

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6be4d0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d6be510

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6be5b0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6be630

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d6be670

void __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_UFDistortionInfo____AEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6be710

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6be7b0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  return;
}

// CreateCopy @ 14d6be810

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar2;
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar4[6] = uVar2;
    puVar4[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6be8c0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6be940

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d6be990

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__PEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6bea30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__AEAUFLensDistortionState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6beab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__AEAUFLensDistortionState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d6beb00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDistortionFocusPoint__AEBUFDistortionFocusCurve__AEAUFLensDistortionState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6beba0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__AEAPEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6bec20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__AEAPEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d6bec60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSTMapFocusPoint__AEBUFSTMapFocusCurve__AEAPEAVUTextureRenderTarget2D__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6bed00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6bed80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d6bedd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6bee70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6beef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d6bef40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d6befe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d6bf060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d6bf0b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d6c4290

TOptional<FDistortionInfo> * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::Execute(void *this,TOptional<FDistortionInfo> *__return_storage_ptr__,
         FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  `ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14d6c42c0

TOptional<FDistortionInfo> * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::Execute(void *this,TOptional<FDistortionInfo> *__return_storage_ptr__,
         FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  `ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14d6c42f0

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::Execute(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
         UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  float fVar1;
  
  fVar1 = `ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  return fVar1;
}

// Execute @ 14d6c4300

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::Execute(void *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
         UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  float fVar1;
  
  fVar1 = `ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>::operator()
                    ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  return fVar1;
}

// Execute @ 14d6c4310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::Execute(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
         FLensDistortionState *param_3)

{
  `ULensFile::GetBlendState'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return;
}

// Execute @ 14d6c4320

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::Execute(void *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
         UTextureRenderTarget2D **param_3,UTextureRenderTarget2D **param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->ZoomPoints).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(param_1->ZoomPoints).ArrayNum * 0x50;
  if (pFVar1 != pFVar2) {
    while (__real_322bcc77 <
           (float)((uint)(*(float *)pFVar1 - param_2->Zoom) & __xmm_7fffffff7fffffff7fffffff7fffffff
                  )) {
      pFVar1 = pFVar1 + 0x50;
      if (pFVar1 == pFVar2) {
        return;
      }
    }
    *param_3 = *(UTextureRenderTarget2D **)(pFVar1 + 0x30);
    *param_4 = *(UTextureRenderTarget2D **)(pFVar1 + 0x38);
  }
  return;
}

// Execute @ 14d6c43a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d6c43b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d6c43c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14d6c88f0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  TOptional<FDistortionInfo> local_28;
  
  `ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_28,param_1,param_2);
  if ((local_28.bIsSet != false) &&
     (local_28.TypedValue.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.TypedValue.Parameters.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 14d6c8930

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2)

{
  TOptional<FDistortionInfo> local_28;
  
  `ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_28,param_1,param_2);
  if ((local_28.bIsSet != false) &&
     (local_28.TypedValue.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.TypedValue.Parameters.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 14d6c8970

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
               UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  `ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14d6c89a0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
               UTextureRenderTarget2D *param_3,UTextureRenderTarget2D *param_4)

{
  `ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14d6c89d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FDistortionFocusPoint *param_1,FDistortionFocusCurve *param_2,
               FLensDistortionState *param_3)

{
  `ULensFile::GetBlendState'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d6c89f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSTMapFocusPoint *param_1,FSTMapFocusCurve *param_2,
               UTextureRenderTarget2D **param_3,UTextureRenderTarget2D **param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->ZoomPoints).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(param_1->ZoomPoints).ArrayNum * 0x50;
  if (pFVar1 != pFVar2) {
    while (__real_322bcc77 <
           (float)((uint)(*(float *)pFVar1 - param_2->Zoom) & __xmm_7fffffff7fffffff7fffffff7fffffff
                  )) {
      pFVar1 = pFVar1 + 0x50;
      if (pFVar1 == pFVar2) {
        return true;
      }
    }
    *param_3 = *(UTextureRenderTarget2D **)(pFVar1 + 0x30);
    *param_4 = *(UTextureRenderTarget2D **)(pFVar1 + 0x38);
  }
  return true;
}

// ExecuteIfSafe @ 14d6c8a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d6c8a90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d6c8ab0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d6d2580

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d2590

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d25f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d6d2600

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d6d61d0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d61e0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d61f0

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6200

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6210

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6240

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d6d6250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d6dc6d0

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc6e0

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc6f0

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc700

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc710

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc720

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc730

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc740

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d6dc750

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d6ddaa0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddab0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddac0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddad0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddaf0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddb00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddb10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d6ddb20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d6e1dd0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1de0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1df0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e00

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d6e1e50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d6f2ca0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2cb0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<FDistortionInfo>___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionParameters'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2cc0

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForParameters'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2cd0

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2ce0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FDistortionFocusPoint_const_&,FDistortionFocusCurve_const_&,FLensDistortionState_&),FDefaultDelegateUserPolicy,`ULensFile::GetBlendState'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2cf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FSTMapFocusPoint_const_&,FSTMapFocusCurve_const_&,UTextureRenderTarget2D_*_&,UTextureRenderTarget2D_*_&),FDefaultDelegateUserPolicy,`ULensFile::EvaluateDistortionForSTMaps'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2d00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2d10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UCameraCalibrationSubsystem::Initialize'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d6f2d20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

