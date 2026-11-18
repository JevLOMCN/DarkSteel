// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// operator() @ 143c468b0

void __thiscall
`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  undefined8 local_30;
  int *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x10);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(undefined8 **)this;
    local_1c = *(undefined4 *)((longlong)this + 0x18);
    local_18 = *(undefined4 *)((longlong)this + 0x1c);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = local_res10;
    local_20 = *(undefined4 *)((longlong)this + 0x14);
    local_40 = &local_38;
    local_14 = *(undefined4 *)((longlong)this + 0x20);
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              ((TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *)*local_38,
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// operator() @ 143c46950

void __thiscall
`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  undefined8 local_30;
  int *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x10);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(undefined8 **)this;
    local_1c = *(undefined4 *)((longlong)this + 0x18);
    local_18 = *(undefined4 *)((longlong)this + 0x1c);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = local_res10;
    local_20 = *(undefined4 *)((longlong)this + 0x14);
    local_40 = &local_38;
    local_14 = *(undefined4 *)((longlong)this + 0x20);
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              ((TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *)*local_38,
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// ApplyRange @ 143c5b770

void __thiscall
Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRange
          (FPerParticlePBDCCDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3,int param_4)

{
  undefined4 uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TFunctionRef<void___cdecl(int)> *pTVar9;
  uint uVar10;
  code *local_b8;
  FPerParticlePBDCCDCollisionConstraint **local_b0;
  code *local_a8;
  FPerParticlePBDCCDCollisionConstraint **local_a0;
  FPerParticlePBDCCDCollisionConstraint *local_98;
  FSolverParticles *local_90;
  int local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  FPerParticlePBDCCDCollisionConstraint *local_70;
  FSolverParticles *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  
  pTVar2 = this->DynamicGroupIds;
  uVar10 = 0;
  if (this->Mutex == (FWindowsRecursiveMutex *)0x0) {
    uVar7 = uVar10;
    if (param_3 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar3 = this->PerGroupFriction;
    uVar7 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)param_3 * 4);
    uVar8 = uVar10;
    if ((int)uVar7 < pTVar3->ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar4 = this->PerGroupThicknesses;
    uVar1 = *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
    if ((int)uVar7 < pTVar4->ArrayNum) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar9 = (TFunctionRef<void___cdecl(int)> *)&local_a8;
    local_58 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
    local_a0 = &local_70;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_70 = this;
    local_68 = param_1;
    local_60 = param_3;
    local_5c = uVar7;
    local_54 = uVar1;
    local_50 = param_2;
  }
  else {
    uVar7 = 0;
    if (param_3 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar3 = this->PerGroupFriction;
    uVar7 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)param_3 * 4);
    uVar8 = 0;
    if ((int)uVar7 < pTVar3->ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar4 = this->PerGroupThicknesses;
    uVar1 = *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
    if ((int)uVar7 < pTVar4->ArrayNum) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar9 = (TFunctionRef<void___cdecl(int)> *)&local_b8;
    local_80 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
    local_b0 = &local_98;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    local_90 = param_1;
    local_88 = param_3;
    local_84 = uVar7;
    local_7c = uVar1;
    local_78 = param_2;
  }
  PhysicsParallelFor(param_4 - param_3,pTVar9,false);
  return;
}

