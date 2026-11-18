// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// ApplyFriction @ 143c59fe0

void __thiscall
Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyFriction
          (FPerParticlePBDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3)

{
  TMap<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
  *this_00;
  uint uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVelocityConstraint *pFVar7;
  TVector<float,3> *pTVar8;
  FVelocityConstraint *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((this->bFastPositionBasedFriction != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFastPositionBasedFriction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticlePBDCollisionConstraint.h"
                         ,0x48,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->MVelocityConstraints;
  if (*(int *)&(this->MVelocityConstraints).field_0x8 !=
      *(int *)&(this->MVelocityConstraints).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MVelocityConstraints).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MVelocityConstraints).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->MVelocityConstraints).field_0x48 - 1U & param_3) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar6 * 0x24) == param_3) {
          pFVar7 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          pTVar8 = TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_3);
          fVar15 = *(float *)&(pFVar7->Normal).field_0x4 * *(float *)&pTVar8->field_0x4 +
                   *(float *)&pFVar7->Normal * *(float *)pTVar8 +
                   *(float *)&(pFVar7->Normal).field_0x8 * *(float *)&pTVar8->field_0x8;
          pFVar7 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          pFVar9 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          fVar14 = *(float *)&(pFVar9->Velocity).field_0x4 * *(float *)&(pFVar7->Normal).field_0x4 +
                   *(float *)&pFVar7->Normal * *(float *)&pFVar9->Velocity +
                   *(float *)&(pFVar9->Velocity).field_0x8 * *(float *)&(pFVar7->Normal).field_0x8;
          pFVar7 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          pFVar9 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          fVar21 = *(float *)&(pFVar7->Velocity).field_0x8 -
                   fVar14 * *(float *)&(pFVar9->Normal).field_0x8;
          fVar22 = *(float *)&(pFVar7->Velocity).field_0x4 -
                   fVar14 * *(float *)&(pFVar9->Normal).field_0x4;
          fVar12 = *(float *)&pFVar7->Velocity - fVar14 * *(float *)&pFVar9->Normal;
          pTVar8 = TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_3);
          pFVar7 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          fVar18 = (*(float *)&pTVar8->field_0x8 - fVar15 * *(float *)&(pFVar7->Normal).field_0x8) -
                   fVar21;
          fVar19 = (*(float *)&pTVar8->field_0x4 - fVar15 * *(float *)&(pFVar7->Normal).field_0x4) -
                   fVar22;
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          pTVar2 = this->MDynamicGroupIds;
          pTVar3 = this->MPerGroupFriction;
          fVar20 = (*(float *)pTVar8 - fVar15 * *(float *)&pFVar7->Normal) - fVar12;
          uVar1 = 0;
          if (param_3 < pTVar2->ArrayNum) {
            uVar1 = (uint)~param_3 >> 0x1f;
          }
          fVar17 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18);
          if ((uVar1 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar1 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)param_3 * 4);
          uVar11 = 0;
          if ((int)uVar1 < pTVar3->ArrayNum) {
            uVar11 = ~uVar1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar13 = *(float *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 4);
          if ((fVar13 <= 0.0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CoefficientOfFriction > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticlePBDCollisionConstraint.h"
                                 ,0x56,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar16 = __real_3f800000;
          fVar13 = (fVar14 - fVar15) * fVar13;
          fVar15 = __real_3f800000;
          if (fVar13 < fVar17) {
            fVar15 = fVar13 / fVar17;
          }
          pFVar7 = TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                   ::FindChecked((TMapBase<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint,0>_>
                                  *)this_00,param_3);
          fVar16 = fVar16 - fVar15;
          fVar15 = *(float *)&(pFVar7->Normal).field_0x8;
          fVar17 = *(float *)&(pFVar7->Normal).field_0x4;
          fVar13 = *(float *)&pFVar7->Normal;
          pTVar8 = TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_3);
          *(float *)pTVar8 = fVar14 * fVar13 + fVar12 + fVar16 * fVar20;
          *(float *)&pTVar8->field_0x4 = fVar14 * fVar17 + fVar22 + fVar16 * fVar19;
          *(float *)&pTVar8->field_0x8 = fVar14 * fVar15 + fVar21 + fVar16 * fVar18;
          return;
        }
        iVar6 = *(int *)(*(longlong *)this_00 + 0x1c + (longlong)iVar6 * 0x24);
      } while (iVar6 != -1);
    }
  }
  return;
}

// ApplyHelper<1> @ 143d86d70

void __thiscall
Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>
          (FPerParticlePBDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TFunctionRef<void___cdecl(int)> *pTVar10;
  code *local_b8;
  FPerParticlePBDCollisionConstraint **local_b0;
  code *local_a8;
  FPerParticlePBDCollisionConstraint **local_a0;
  FPerParticlePBDCollisionConstraint *local_98;
  FSolverParticles *local_90;
  float local_88;
  int local_84;
  uint local_80;
  float local_7c;
  undefined4 local_78;
  FPerParticlePBDCollisionConstraint *local_70;
  FSolverParticles *local_68;
  float local_60;
  int local_5c;
  uint local_58;
  float local_54;
  undefined4 local_50;
  
  pTVar3 = this->MDynamicGroupIds;
  uVar9 = 0;
  if (param_3 < pTVar3->ArrayNum) {
    uVar9 = (uint)~param_3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar4 = this->MPerGroupFriction;
  uVar9 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)param_3 * 4);
  uVar8 = 0;
  if ((int)uVar9 < pTVar4->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = this->MPerGroupThickness;
  fVar1 = *(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
  uVar8 = 0;
  if ((int)uVar9 < pTVar5->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
  if (fVar1 <= __real_38d1b717) {
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_a8;
    local_a0 = &local_70;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>,void,int>
               ::Call;
    local_70 = this;
    local_68 = param_1;
    local_60 = param_2;
    local_5c = param_3;
    local_58 = uVar9;
    local_54 = fVar1;
    local_50 = uVar2;
  }
  else {
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_b8;
    local_b0 = &local_98;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    local_90 = param_1;
    local_88 = param_2;
    local_84 = param_3;
    local_80 = uVar9;
    local_7c = fVar1;
    local_78 = uVar2;
  }
  PhysicsParallelFor(param_4 - param_3,pTVar10,false);
  return;
}

// ApplyHelper<0> @ 143d86f90

void __thiscall
Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>
          (FPerParticlePBDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TFunctionRef<void___cdecl(int)> *pTVar10;
  code *local_b8;
  FPerParticlePBDCollisionConstraint **local_b0;
  code *local_a8;
  FPerParticlePBDCollisionConstraint **local_a0;
  FPerParticlePBDCollisionConstraint *local_98;
  FSolverParticles *local_90;
  float local_88;
  int local_84;
  uint local_80;
  float local_7c;
  undefined4 local_78;
  FPerParticlePBDCollisionConstraint *local_70;
  FSolverParticles *local_68;
  float local_60;
  int local_5c;
  uint local_58;
  float local_54;
  undefined4 local_50;
  
  pTVar3 = this->MDynamicGroupIds;
  uVar9 = 0;
  if (param_3 < pTVar3->ArrayNum) {
    uVar9 = (uint)~param_3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar4 = this->MPerGroupFriction;
  uVar9 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)param_3 * 4);
  uVar8 = 0;
  if ((int)uVar9 < pTVar4->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = this->MPerGroupThickness;
  fVar1 = *(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
  uVar8 = 0;
  if ((int)uVar9 < pTVar5->ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
  if (fVar1 <= __real_38d1b717) {
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_a8;
    local_a0 = &local_70;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>,void,int>
               ::Call;
    local_70 = this;
    local_68 = param_1;
    local_60 = param_2;
    local_5c = param_3;
    local_58 = uVar9;
    local_54 = fVar1;
    local_50 = uVar2;
  }
  else {
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_b8;
    local_b0 = &local_98;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    local_90 = param_1;
    local_88 = param_2;
    local_84 = param_3;
    local_80 = uVar9;
    local_7c = fVar1;
    local_78 = uVar2;
  }
  PhysicsParallelFor(param_4 - param_3,pTVar10,false);
  return;
}

// operator() @ 143d96570

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x14);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(longlong *)this;
    local_14 = *(undefined4 *)((longlong)this + 0x1c);
    local_10 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = (longlong)this + 0x10;
    local_20 = local_res10;
    local_18 = *(undefined4 *)((longlong)this + 0x18);
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// operator() @ 143d96610

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x14);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(longlong *)this;
    local_14 = *(undefined4 *)((longlong)this + 0x1c);
    local_10 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = (longlong)this + 0x10;
    local_20 = local_res10;
    local_18 = *(undefined4 *)((longlong)this + 0x18);
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// operator() @ 143d971f0

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>::operator()
          (void *this,int param_1)

{
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_38 = *(longlong *)this;
  local_28 = *(undefined4 *)((longlong)this + 0x10);
  local_14 = *(undefined4 *)((longlong)this + 0x24);
  local_24 = param_1 * Chaos_PerParticleCollision_ISPC_ParallelBatchSize +
             *(int *)((longlong)this + 0x14);
  local_30 = *(undefined8 *)((longlong)this + 8);
  local_1c = *(undefined4 *)((longlong)this + 0x1c);
  local_40 = &local_38;
  local_20 = local_24 + Chaos_PerParticleCollision_ISPC_ParallelBatchSize;
  if (*(int *)((longlong)this + 0x18) < local_24 + Chaos_PerParticleCollision_ISPC_ParallelBatchSize
     ) {
    local_20 = *(int *)((longlong)this + 0x18);
  }
  local_18 = *(undefined4 *)((longlong)this + 0x20);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int,int>
             ::Call;
  Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::RangeFor
            (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
             (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int,int)> *)
             &local_48);
  return;
}

// operator() @ 143d97860

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x14);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(longlong *)this;
    local_14 = *(undefined4 *)((longlong)this + 0x1c);
    local_10 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = (longlong)this + 0x10;
    local_20 = local_res10;
    local_18 = *(undefined4 *)((longlong)this + 0x18);
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// operator() @ 143d97900

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  int local_res10 [6];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res10[0] = param_1 + *(int *)((longlong)this + 0x14);
  pfVar1 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),local_res10[0]);
  if (*pfVar1 != 0.0) {
    local_38 = *(longlong *)this;
    local_14 = *(undefined4 *)((longlong)this + 0x1c);
    local_10 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = *(undefined8 *)((longlong)this + 8);
    local_28 = (longlong)this + 0x10;
    local_20 = local_res10;
    local_18 = *(undefined4 *)((longlong)this + 0x18);
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
               ::Call;
    Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_48);
  }
  return;
}

// operator() @ 143d979a0

void __thiscall
`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>::operator()
          (void *this,int param_1)

{
  code *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38 = *(longlong *)this;
  local_28 = *(undefined4 *)((longlong)this + 0x10);
  local_24 = param_1 * Chaos_PerParticleCollision_ISPC_ParallelBatchSize +
             *(int *)((longlong)this + 0x14);
  local_30 = *(undefined8 *)((longlong)this + 8);
  local_1c = *(undefined4 *)((longlong)this + 0x1c);
  local_40 = &local_38;
  local_20 = local_24 + Chaos_PerParticleCollision_ISPC_ParallelBatchSize;
  if (*(int *)((longlong)this + 0x18) < local_24 + Chaos_PerParticleCollision_ISPC_ParallelBatchSize
     ) {
    local_20 = *(int *)((longlong)this + 0x18);
  }
  local_18 = *(undefined4 *)((longlong)this + 0x24);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int,int>
             ::Call;
  Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::RangeFor
            (*(TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **)(local_38 + 8),
             (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int,int)> *)
             &local_48);
  return;
}

// ApplyHelperISPC @ 143d9bcf0

void __thiscall
Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC
          (FPerParticlePBDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TFunctionRef<void___cdecl(int)> *pTVar9;
  code *local_b8;
  FPerParticlePBDCollisionConstraint **local_b0;
  code *local_a8;
  FPerParticlePBDCollisionConstraint **local_a0;
  FPerParticlePBDCollisionConstraint *local_98;
  FSolverParticles *local_90;
  float local_88;
  int local_84;
  int local_80;
  uint local_7c;
  float local_78;
  undefined4 local_74;
  FPerParticlePBDCollisionConstraint *local_70;
  FSolverParticles *local_68;
  float local_60;
  int local_5c;
  int local_58;
  uint local_54;
  float local_50;
  undefined4 local_4c;
  
  if (this->bFastPositionBasedFriction == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFastPositionBasedFriction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PerParticlePBDCollisionConstraint.cpp"
                       ,0x4c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = this->MDynamicGroupIds;
  uVar8 = 0;
  if (param_3 < pTVar3->ArrayNum) {
    uVar8 = (uint)~param_3 >> 0x1f;
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
  uVar8 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)param_3 * 4);
  pTVar4 = this->MPerGroupFriction;
  uVar7 = 0;
  if ((int)uVar8 < pTVar4->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
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
  fVar1 = *(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
  pTVar4 = this->MPerGroupThickness;
  uVar7 = 0;
  if ((int)uVar8 < pTVar4->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
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
  uVar2 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
  if (fVar1 <= __real_38d1b717) {
    local_a0 = &local_70;
    local_58 = param_4;
    pTVar9 = (TFunctionRef<void___cdecl(int)> *)&local_a8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>,void,int>
               ::Call;
    local_70 = this;
    local_68 = param_1;
    local_60 = param_2;
    local_5c = param_3;
    local_54 = uVar8;
    local_50 = fVar1;
    local_4c = uVar2;
  }
  else {
    local_b0 = &local_98;
    local_80 = param_4;
    pTVar9 = (TFunctionRef<void___cdecl(int)> *)&local_b8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    local_90 = param_1;
    local_88 = param_2;
    local_84 = param_3;
    local_7c = uVar8;
    local_78 = fVar1;
    local_74 = uVar2;
  }
  PhysicsParallelFor(-((int)ROUND(__real_bf000000 -
                                  ((float)(param_4 - param_3) + (float)(param_4 - param_3)) /
                                  (float)Chaos_PerParticleCollision_ISPC_ParallelBatchSize) >> 1),
                     pTVar9,false);
  return;
}

// ApplyRange @ 143d9c8c0

void __thiscall
Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyRange
          (FPerParticlePBDCollisionConstraint *this,FSolverParticles *param_1,float param_2,
          int param_3,int param_4)

{
  if ((bChaos_PerParticleCollision_ISPC_Enabled) && (this->bFastPositionBasedFriction != false)) {
    ApplyHelperISPC(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (this->Mutex != (FWindowsRecursiveMutex *)0x0) {
    ApplyHelper<1>(this,param_1,param_2,param_3,param_4);
    return;
  }
  ApplyHelper<0>(this,param_1,param_2,param_3,param_4);
  return;
}

