// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// AddCustomPhysics_AssumesLocked @ 1482e62d0

void __thiscall
FPhysSubstepTask::AddCustomPhysics_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,
          TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPhysTarget *pFVar6;
  uint uVar7;
  FBodyInstance *local_res10 [3];
  TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> *local_18 [2];
  
  local_res10[0] = param_1;
  bVar4 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar4) {
    uVar7 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_18[0] = param_2;
    pFVar6 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar7 >> 0x10 ^ uVar7,local_res10);
    pFVar2 = (pFVar6->CustomPhysics).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2 + (longlong)(pFVar6->CustomPhysics).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar6->CustomPhysics).ArrayNum;
    piVar1 = &(pFVar6->CustomPhysics).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar6->CustomPhysics).AllocatorInstance,piVar1);
    }
    (pFVar6->CustomPhysics).ArrayNum = iVar5 + 1;
    *(TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> **)
     ((pFVar6->CustomPhysics).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// AddForceAtPosition_AssumesLocked @ 1482e6740

void __thiscall
FPhysSubstepTask::AddForceAtPosition_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPhysTarget *pFVar6;
  uint uVar7;
  longlong lVar8;
  FBodyInstance *local_res10;
  undefined1 local_48 [8];
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  undefined1 local_10;
  undefined1 uStack_f;
  bool bStack_e;
  undefined5 uStack_d;
  
  local_res10 = param_1;
  bVar4 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar4) {
    if (this->SubstepCallbackGuard != 0) {
      local_48[0] = 0;
      `FPhysSubstepTask::AddForceAtPosition_AssumesLocked'::__l5::<lambda_1>::operator()(local_48);
    }
    local_40 = (param_2->field0_0x0)._s_0.X;
    dStack_38 = (param_2->field0_0x0)._s_0.Y;
    local_30 = (param_2->field0_0x0)._s_0.Z;
    bStack_e = param_4;
    local_10 = 1;
    dStack_28 = (param_3->field0_0x0)._s_0.X;
    dStack_20 = (param_3->field0_0x0)._s_0.Y;
    dStack_18 = (param_3->field0_0x0)._s_0.Z;
    uVar7 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    pFVar6 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar7 >> 0x10 ^ uVar7,&local_res10);
    pFVar2 = (pFVar6->Forces).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < pFVar2 + (longlong)(pFVar6->Forces).ArrayMax * 0x38))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar6->Forces).ArrayNum;
    piVar1 = &(pFVar6->Forces).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pFVar6,piVar1);
    }
    (pFVar6->Forces).ArrayNum = iVar5 + 1;
    lVar8 = (longlong)iVar5 * 0x38;
    pFVar2 = (pFVar6->Forces).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar8) = local_40;
    *(double *)(pFVar2 + lVar8 + 8) = dStack_38;
    *(double *)(pFVar2 + lVar8 + 0x10) = local_30;
    *(double *)(pFVar2 + lVar8 + 0x10 + 8) = dStack_28;
    *(double *)(pFVar2 + lVar8 + 0x20) = dStack_20;
    *(double *)(pFVar2 + lVar8 + 0x20 + 8) = dStack_18;
    *(ulonglong *)(pFVar2 + lVar8 + 0x30) =
         CONCAT53(uStack_d,CONCAT12(bStack_e,CONCAT11(uStack_f,local_10)));
  }
  return;
}

// AddForce_AssumesLocked @ 1482e6900

void __thiscall
FPhysSubstepTask::AddForce_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TVector<double> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPhysTarget *pFVar6;
  uint uVar7;
  longlong lVar8;
  FBodyInstance *local_res10;
  undefined1 local_48 [8];
  double local_40;
  double dStack_38;
  double local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined6 uStack_e;
  
  local_res10 = param_1;
  bVar4 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar4) {
    if (this->SubstepCallbackGuard != 0) {
      local_48[0] = 0;
      `FPhysSubstepTask::AddForce_AssumesLocked'::__l5::<lambda_1>::operator()(local_48);
    }
    local_40 = (param_2->field0_0x0)._s_0.X;
    dStack_38 = (param_2->field0_0x0)._s_0.Y;
    local_10 = 0;
    local_30 = (param_2->field0_0x0)._s_0.Z;
    uVar7 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uStack_f = param_3;
    pFVar6 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar7 >> 0x10 ^ uVar7,&local_res10);
    pFVar2 = (pFVar6->Forces).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < pFVar2 + (longlong)(pFVar6->Forces).ArrayMax * 0x38))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar6->Forces).ArrayNum;
    piVar1 = &(pFVar6->Forces).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pFVar6,piVar1);
    }
    (pFVar6->Forces).ArrayNum = iVar5 + 1;
    lVar8 = (longlong)iVar5 * 0x38;
    pFVar2 = (pFVar6->Forces).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar8) = local_40;
    *(double *)(pFVar2 + lVar8 + 8) = dStack_38;
    *(double *)(pFVar2 + lVar8 + 0x10) = local_30;
    *(undefined8 *)(pFVar2 + lVar8 + 0x10 + 8) = uStack_28;
    *(undefined8 *)(pFVar2 + lVar8 + 0x20) = local_20;
    *(undefined8 *)(pFVar2 + lVar8 + 0x20 + 8) = uStack_18;
    *(ulonglong *)(pFVar2 + lVar8 + 0x30) = CONCAT62(uStack_e,CONCAT11(uStack_f,local_10));
  }
  return;
}

// AddRadialForceToBody_AssumesLocked @ 1482e6d20

void __thiscall
FPhysSubstepTask::AddRadialForceToBody_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TVector<double> *param_2,float param_3,
          float param_4,uchar param_5,bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPhysTarget *pFVar6;
  longlong lVar7;
  uint uVar8;
  FBodyInstance *local_res10 [3];
  undefined1 local_48 [8];
  double local_40;
  double dStack_38;
  double local_30;
  float fStack_28;
  float fStack_24;
  uchar local_20;
  bool bStack_1f;
  undefined6 uStack_1e;
  
  local_res10[0] = param_1;
  bVar4 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar4) {
    if (this->SubstepCallbackGuard != 0) {
      local_48[0] = 0;
      `FPhysSubstepTask::AddRadialForceToBody_AssumesLocked'::__l5::<lambda_1>::operator()(local_48)
      ;
    }
    local_40 = (param_2->field0_0x0)._s_0.X;
    dStack_38 = (param_2->field0_0x0)._s_0.Y;
    local_30 = (param_2->field0_0x0)._s_0.Z;
    local_20 = param_5;
    bStack_1f = param_6;
    fStack_24 = param_4;
    uVar8 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    fStack_28 = param_3;
    pFVar6 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar8 >> 0x10 ^ uVar8,local_res10);
    pFVar2 = (pFVar6->RadialForces).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 <
        pFVar2 + (longlong)(pFVar6->RadialForces).ArrayMax * 0x28)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (pFVar6->RadialForces).ArrayNum;
    piVar1 = &(pFVar6->RadialForces).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(pFVar6->RadialForces).AllocatorInstance,piVar1);
    }
    lVar7 = (longlong)iVar5;
    (pFVar6->RadialForces).ArrayNum = iVar5 + 1;
    pFVar2 = (pFVar6->RadialForces).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar7 * 0x28) = local_40;
    *(double *)(pFVar2 + lVar7 * 0x28 + 8) = dStack_38;
    *(double *)(pFVar2 + lVar7 * 0x28 + 0x10) = local_30;
    *(ulonglong *)(pFVar2 + lVar7 * 0x28 + 0x10 + 8) = CONCAT44(fStack_24,fStack_28);
    *(ulonglong *)(pFVar2 + lVar7 * 0x28 + 0x20) = CONCAT62(uStack_1e,CONCAT11(bStack_1f,local_20));
  }
  return;
}

// AddTorque_AssumesLocked @ 1482e6ee0

void __thiscall
FPhysSubstepTask::AddTorque_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TVector<double> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPhysTarget *pFVar7;
  uint uVar8;
  FBodyInstance *local_res10;
  undefined1 local_38 [8];
  double local_30;
  double dStack_28;
  double local_20;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  local_res10 = param_1;
  bVar5 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar5) {
    if (this->SubstepCallbackGuard != 0) {
      local_38[0] = 0;
      `FPhysSubstepTask::AddTorque_AssumesLocked'::__l5::<lambda_1>::operator()(local_38);
    }
    local_30 = (param_2->field0_0x0)._s_0.X;
    dStack_28 = (param_2->field0_0x0)._s_0.Y;
    local_20 = (param_2->field0_0x0)._s_0.Z;
    uVar8 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uStack_18 = param_3;
    pFVar7 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar8 >> 0x10 ^ uVar8,&local_res10);
    pFVar2 = (pFVar7->Torques).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
       ((FScriptContainerElement *)&local_30 < pFVar2 + (longlong)(pFVar7->Torques).ArrayMax * 0x20)
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar7->Torques).ArrayNum;
    piVar1 = &(pFVar7->Torques).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(pFVar7->Torques).AllocatorInstance,piVar1);
    }
    (pFVar7->Torques).ArrayNum = iVar6 + 1;
    pFVar3 = (pFVar7->Torques).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
    *(double *)pFVar2 = local_30;
    *(double *)(pFVar2 + 8) = dStack_28;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
    *(double *)pFVar3 = local_20;
    *(ulonglong *)(pFVar3 + 8) = CONCAT71(uStack_17,uStack_18);
  }
  return;
}

// ApplyCustomPhysics @ 1482e76b0

void __thiscall
FPhysSubstepTask::ApplyCustomPhysics
          (FPhysSubstepTask *this,FPhysTarget *param_1,FBodyInstance *param_2,float param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  atomic<unsigned___int64> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FReadAccessScope local_48 [2];
  
  this->SubstepCallbackGuard = this->SubstepCallbackGuard + 1;
  uVar5 = 0;
  if ((param_1->CustomPhysics).ArrayNum < 1) {
    this->SubstepCallbackGuard = this->SubstepCallbackGuard + -1;
  }
  else {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->CustomPhysics).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)
                 ((param_1->CustomPhysics).AllocatorInstance.Data + lVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,local_48);
      if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
         (aVar1 = this_00[1].AccessDetector.State, aVar1 != (atomic<unsigned___int64>)0x0)) {
        (**(code **)(*(longlong *)aVar1 + 0x68))(aVar1,param_3,param_2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (param_1->CustomPhysics).ArrayNum);
    this->SubstepCallbackGuard = this->SubstepCallbackGuard + -1;
  }
  return;
}

// ApplyForces_AssumesLocked @ 1482e77c0

void __thiscall
FPhysSubstepTask::ApplyForces_AssumesLocked
          (FPhysSubstepTask *this,FPhysTarget *param_1,FBodyInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                     ,0xb9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyRadialForces_AssumesLocked @ 1482e7b70

void __thiscall
FPhysSubstepTask::ApplyRadialForces_AssumesLocked
          (FPhysSubstepTask *this,FPhysTarget *param_1,FBodyInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                     ,0xc5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyTorques_AssumesLocked @ 1482e9d60

void __thiscall
FPhysSubstepTask::ApplyTorques_AssumesLocked
          (FPhysSubstepTask *this,FPhysTarget *param_1,FBodyInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                     ,0xbf,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearForces_AssumesLocked @ 1482ebe30

void __thiscall
FPhysSubstepTask::ClearForces_AssumesLocked(FPhysSubstepTask *this,FBodyInstance *param_1)

{
  bool bVar1;
  FPhysTarget *pFVar2;
  int *piVar3;
  uint uVar4;
  FBodyInstance *local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_1;
  bVar1 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar1) {
    if (this->SubstepCallbackGuard != 0) {
      `FPhysSubstepTask::ClearForces_AssumesLocked'::__l5::<lambda_1>::operator()(local_res18);
    }
    uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    pFVar2 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar4 >> 0x10 ^ uVar4,&local_res10);
    (pFVar2->Forces).ArrayNum = 0;
    piVar3 = &(pFVar2->Forces).ArrayMax;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)pFVar2,0,piVar3);
    }
    piVar3 = &(pFVar2->RadialForces).ArrayMax;
    (pFVar2->RadialForces).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(pFVar2->RadialForces).AllocatorInstance,0,piVar3);
    }
  }
  return;
}

// ClearTorques_AssumesLocked @ 1482ebf20

void __thiscall
FPhysSubstepTask::ClearTorques_AssumesLocked(FPhysSubstepTask *this,FBodyInstance *param_1)

{
  bool bVar1;
  FPhysTarget *pFVar2;
  uint uVar3;
  FBodyInstance *local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_1;
  bVar1 = FBodyInstance::IsNonKinematic(param_1);
  if (bVar1) {
    if (this->SubstepCallbackGuard != 0) {
      `FPhysSubstepTask::ClearTorques_AssumesLocked'::__l5::<lambda_1>::operator()(local_res18);
    }
    uVar3 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    pFVar2 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar3 >> 0x10 ^ uVar3,&local_res10);
    (pFVar2->Torques).ArrayNum = 0;
    if ((pFVar2->Torques).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(pFVar2->Torques).AllocatorInstance,0,&(pFVar2->Torques).ArrayMax);
    }
  }
  return;
}

// GetKinematicTarget_AssumesLocked @ 14830a9d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPhysSubstepTask::GetKinematicTarget_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  double dVar1;
  FPhysTarget *pFVar2;
  
  pFVar2 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
           ::Find((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                   *)(&this->PhysTargetBuffers[0].field_0x0 +
                     (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),param_1);
  if ((pFVar2 != (FPhysTarget *)0x0) && (pFVar2->bKinematicTarget != false)) {
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] =
         (pFVar2->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] =
         (pFVar2->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Translation.XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] =
         (pFVar2->KinematicTarget).TargetTM.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] =
         (pFVar2->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = (pFVar2->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (pFVar2->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = (pFVar2->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
    return true;
  }
  return false;
}

// InterpolateKinematicActor_AssumesLocked @ 148310980

void __thiscall
FPhysSubstepTask::InterpolateKinematicActor_AssumesLocked
          (FPhysSubstepTask *this,FPhysTarget *param_1,FBodyInstance *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                     ,0xcc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveBodyInstance_AssumesLocked @ 14831d250

void __thiscall
FPhysSubstepTask::RemoveBodyInstance_AssumesLocked(FPhysSubstepTask *this,FBodyInstance *param_1)

{
  TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
  *pTVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  FBodyInstance *local_res8;
  
  pTVar1 = (TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
            *)(&this->PhysTargetBuffers[0].field_0x0 +
              (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50));
  uVar4 = (uint)((ulonglong)param_1 >> 4);
  if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar4) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::RemoveImpl<FBodyInstance_const_*>(pTVar1,uVar3 >> 0x10 ^ uVar3,&local_res8);
  }
  lVar2 = 0;
  if (this->External == (FThreadSafeBool)0x0) {
    lVar2 = 0x50;
  }
  pTVar1 = (TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
            *)(&this->PhysTargetBuffers[0].field_0x0 + lVar2);
  if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar4) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::RemoveImpl<FBodyInstance_const_*>(pTVar1,uVar4 >> 0x10 ^ uVar4,&local_res8);
  }
  return;
}

// SetKinematicTarget_AssumesLocked @ 148321a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FPhysSubstepTask::SetKinematicTarget_AssumesLocked
          (FPhysSubstepTask *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  bool bVar1;
  TTransform<double> *pTVar2;
  FPhysTarget *pFVar3;
  uint uVar4;
  undefined1 auStack_178 [32];
  FBodyInstance *local_158 [2];
  FBodyInstance *local_148;
  longlong lStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158[0] = param_1;
  bVar1 = FBodyInstance::IsNonKinematic(param_1);
  if ((!bVar1) && ((bool)local_158[0]->bInterpolateWhenSubStepping)) {
    local_138 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_130 = (param_2->Rotation).XY.m128d_f64[1];
    local_128 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_120 = (param_2->Rotation).ZW.m128d_f64[1];
    local_118 = (param_2->Translation).XY.m128d_f64[0];
    dStack_110 = (param_2->Translation).XY.m128d_f64[1];
    local_108 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_100 = (param_2->Translation).ZW.m128d_f64[1];
    local_f8 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_f0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_e8 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_e0 = (param_2->Scale3D).ZW.m128d_f64[1];
    local_148 = local_158[0];
    pTVar2 = FBodyInstance::GetUnrealWorldTransform_AssumesLocked(local_158[0],&local_78,true,true);
    local_d8 = (pTVar2->Rotation).XY.m128d_f64[0];
    dStack_d0 = (pTVar2->Rotation).XY.m128d_f64[1];
    local_c8 = (pTVar2->Rotation).ZW.m128d_f64[0];
    dStack_c0 = (pTVar2->Rotation).ZW.m128d_f64[1];
    local_b8 = (pTVar2->Translation).XY.m128d_f64[0];
    dStack_b0 = (pTVar2->Translation).XY.m128d_f64[1];
    local_a8 = (pTVar2->Translation).ZW.m128d_f64[0];
    dStack_a0 = (pTVar2->Translation).ZW.m128d_f64[1];
    local_98 = (pTVar2->Scale3D).XY.m128d_f64[0];
    dStack_90 = (pTVar2->Scale3D).XY.m128d_f64[1];
    local_88 = (pTVar2->Scale3D).ZW.m128d_f64[0];
    dStack_80 = (pTVar2->Scale3D).ZW.m128d_f64[1];
    uVar4 = ((uint)((ulonglong)local_158[0] >> 0x14) & 0xffff ^ (uint)((ulonglong)local_158[0] >> 4)
            ) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    pFVar3 = TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
             ::FindOrAddImpl<FBodyInstance_*_const_&>
                       ((TMapBase<FBodyInstance_*,FPhysTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>_>
                         *)(&this->PhysTargetBuffers[0].field_0x0 +
                           (-(uint)(this->External != (FThreadSafeBool)0x0) & 0x50)),
                        uVar4 >> 0x10 ^ uVar4,local_158);
    pFVar3->bKinematicTarget = true;
    (pFVar3->KinematicTarget).BodyInstance = local_148;
    (pFVar3->KinematicTarget)._padding_ = lStack_140;
    (pFVar3->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[0] = local_138;
    (pFVar3->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[1] = dStack_130;
    (pFVar3->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[0] = local_128;
    (pFVar3->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[1] = dStack_120;
    (pFVar3->KinematicTarget).TargetTM.Translation.XY.m128d_f64[0] = local_118;
    (pFVar3->KinematicTarget).TargetTM.Translation.XY.m128d_f64[1] = dStack_110;
    (pFVar3->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[0] = local_108;
    (pFVar3->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[1] = dStack_100;
    (pFVar3->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[0] = local_f8;
    (pFVar3->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[1] = dStack_f0;
    (pFVar3->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[0] = local_e8;
    (pFVar3->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[1] = dStack_e0;
    (pFVar3->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[0] = local_d8;
    (pFVar3->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[1] = dStack_d0;
    (pFVar3->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[0] = local_c8;
    (pFVar3->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[1] = dStack_c0;
    (pFVar3->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[0] = local_b8;
    (pFVar3->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[1] = dStack_b0;
    (pFVar3->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[0] = local_a8;
    (pFVar3->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[1] = dStack_a0;
    (pFVar3->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[0] = local_98;
    (pFVar3->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[1] = dStack_90;
    (pFVar3->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[0] = local_88;
    (pFVar3->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[1] = dStack_80;
  }
  return;
}

// SubstepInterpolation @ 148323cb0

void __thiscall
FPhysSubstepTask::SubstepInterpolation(FPhysSubstepTask *this,float param_1,float param_2)

{
  return;
}

// SubstepSimulationEnd @ 148323cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPhysSubstepTask::SubstepSimulationEnd
          (FPhysSubstepTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  return;
}

// SubstepSimulationStart @ 148323cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysSubstepTask::SubstepSimulationStart(FPhysSubstepTask *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysicsTime> FVar9;
  FThreadSafeStaticStat<FStat_STAT_SubstepSimulationStart> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  bool bVar18;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar17.Value = 0;
  FVar9 = StatPtr_STAT_TotalPhysicsTime;
  if (StatPtr_STAT_TotalPhysicsTime == (FThreadSafeStaticStat<FStat_STAT_TotalPhysicsTime>)0x0) {
    pFVar8 = ::FName::FName(local_res18,"STAT_TotalPhysicsTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysicsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicsTime,*pFVar8,
                       L"FetchAndStart Time (all)","STATGROUP_Physics","STATCAT_Advanced",L"Physics"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar3 = false;
  bVar6 = false;
  FVar13 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar13.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                   ,0xec);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar13.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_148323e12;
    }
  }
  bVar4 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
  FVar13.Value = FVar17.Value;
LAB_148323e12:
  FVar10 = StatPtr_STAT_SubstepSimulationStart;
  if (StatPtr_STAT_SubstepSimulationStart ==
      (FThreadSafeStaticStat<FStat_STAT_SubstepSimulationStart>)0x0) {
    pFVar8 = ::FName::FName(local_res18,"STAT_SubstepSimulationStart");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SubstepSimulationStart>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SubstepSimulationStart,*pFVar8,
                        L"Phys SubstepStart","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar2 = false;
  bVar5 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar14.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                   ,0xed);
        bVar2 = true;
        bVar5 = true;
      }
    }
    bVar18 = FThreadStats::bPrimaryEnable == false;
    if (bVar18) {
      FVar15.ComparisonIndex.Value = 0;
      FVar15.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar14.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      FVar17.Value = FVar14.Value;
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar18) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
        local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        local_48.NameAndInfo.Index.Value = FVar17.Value;
        QueryPerformanceCounter(&local_res10);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar11,&local_48);
        piVar1 = &pFVar11->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_48);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return;
}

// SwapBuffers @ 1483240f0

void __thiscall FPhysSubstepTask::SwapBuffers(FPhysSubstepTask *this)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = this->External == (FThreadSafeBool)0x0;
  this->External = FVar1;
  UNLOCK();
  return;
}

// UpdateTime @ 14832a470

float __thiscall FPhysSubstepTask::UpdateTime(FPhysSubstepTask *this,float param_1)

{
  float fVar1;
  uint uVar2;
  UPhysicsSettings *pUVar3;
  uint uVar4;
  float fVar5;
  
  pUVar3 = UPhysicsSettings::Get();
  uVar4 = pUVar3->MaxSubsteps;
  fVar1 = pUVar3->MaxSubstepDeltaTime;
  fVar5 = (float)uVar4 * fVar1;
  if (param_1 <= fVar5) {
    fVar5 = param_1;
  }
  this->DeltaSeconds = fVar5;
  uVar2 = -((int)ROUND(__real_bf000000 - (fVar5 + fVar5) / fVar1) >> 1);
  if (uVar2 <= uVar4) {
    uVar4 = uVar2;
  }
  uVar2 = 1;
  if (1 < uVar4) {
    uVar2 = uVar4;
  }
  this->NumSubsteps = uVar2;
  this->SubTime = fVar5 / (float)uVar2;
  return fVar5 / (float)uVar2;
}

// operator() @ 1505296b0

bool __thiscall
`FPhysSubstepTask::AddForceAtPosition_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079720>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079720>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505296f0

bool __thiscall `FPhysSubstepTask::AddForce_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079705>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079705>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150529730

bool __thiscall
`FPhysSubstepTask::AddRadialForceToBody_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079761>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079761>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150529770

bool __thiscall
`FPhysSubstepTask::AddTorque_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079736>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079736>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505297b0

bool __thiscall
`FPhysSubstepTask::ClearForces_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079778>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079778>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505297f0

bool __thiscall
`FPhysSubstepTask::ClearTorques_AssumesLocked'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3027674042116079750>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3027674042116079750>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

