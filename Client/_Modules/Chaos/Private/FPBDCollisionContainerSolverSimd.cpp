// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// FPBDCollisionContainerSolverSimd @ 143a04340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDCollisionContainerSolverSimd * __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::FPBDCollisionContainerSolverSimd
          (FPBDCollisionContainerSolverSimd *this,FPBDCollisionConstraints *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FSolverBody *pFVar5;
  undefined8 *puVar6;
  FSolverBody *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  FSolverBody *pFVar10;
  longlong lVar11;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  *(int *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolverSimd_Private_Chaos__6B_;
  this->ConstraintContainer = param_1;
  FDataSimd<4>::FDataSimd<4>(&this->SimdData);
  uStack_f0 = _UNK_150689648;
  local_f8 = ___xmm_3f800000000000000000000000000000;
  uStack_d0 = _UNK_15061cbc8;
  local_d8 = ___xmm_3ff00000000000000000000000000000;
  pFVar10 = (this->SimdData).DummySolverBody1;
  (this->ConstraintSolverIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar11 = 4;
  (this->ConstraintSolverIds).ArrayNum = 0;
  (this->ConstraintSolverIds).ArrayMax = 0;
  this->NumConstraints = 0;
  this->bPerIterationCollisionDetection = false;
  this->AppliedShockPropagation = 1.0;
  do {
    local_48 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    lVar9 = 2;
    local_c8 = 0;
    uStack_c0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_b8 = local_d8;
    uStack_b0 = uStack_d0;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_78 = 0;
    uStack_70 = 0;
    local_40 = 0;
    local_18 = 0;
    pFVar5 = pFVar10 + -4;
    puVar6 = &local_168;
    do {
      puVar8 = puVar6;
      pFVar7 = pFVar5;
      pFVar5 = (FSolverBody *)&(pFVar7->State).RoM;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *(undefined8 *)&(pFVar7->State).DP = *puVar8;
      *(undefined8 *)&(pFVar7->State).DP.field_0x8 = uVar1;
      uVar1 = puVar8[4];
      uVar4 = puVar8[5];
      *(undefined8 *)&(pFVar7->State).DQ = uVar2;
      *(undefined8 *)&(pFVar7->State).DQ.field_0x8 = uVar3;
      uVar2 = puVar8[6];
      uVar3 = puVar8[7];
      *(undefined8 *)&(pFVar7->State).V = uVar1;
      *(undefined8 *)&(pFVar7->State).V.field_0x8 = uVar4;
      uVar1 = puVar8[8];
      uVar4 = puVar8[9];
      *(undefined8 *)&(pFVar7->State).W = uVar2;
      *(undefined8 *)&(pFVar7->State).W.field_0x8 = uVar3;
      uVar2 = puVar8[10];
      uVar3 = puVar8[0xb];
      *(undefined8 *)&(pFVar7->State).InvI = uVar1;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x8 = uVar4;
      uVar1 = puVar8[0xc];
      uVar4 = puVar8[0xd];
      *(undefined8 *)&(pFVar7->State).InvI.field_0x10 = uVar2;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x18 = uVar3;
      uVar2 = puVar8[0xe];
      uVar3 = puVar8[0xf];
      *(undefined8 *)&(pFVar7->State).InvI.field_0x20 = uVar1;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x28 = uVar4;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x30 = uVar2;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x38 = uVar3;
      lVar9 = lVar9 + -1;
      puVar6 = puVar8 + 0x10;
    } while (lVar9 != 0);
    uVar1 = puVar8[0x11];
    lVar9 = 2;
    uVar2 = puVar8[0x12];
    uVar3 = puVar8[0x13];
    *(undefined8 *)&((TRotation<double,3> *)pFVar5)->field_0x0 = puVar8[0x10];
    *(undefined8 *)&(pFVar7->State).RoM.field_0x8 = uVar1;
    uVar1 = puVar8[0x14];
    uVar4 = puVar8[0x15];
    *(undefined8 *)&(pFVar7->State).RoM.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).RoM.field_0x18 = uVar3;
    uVar2 = puVar8[0x16];
    uVar3 = puVar8[0x17];
    *(undefined8 *)&(pFVar7->State).R = uVar1;
    *(undefined8 *)&(pFVar7->State).R.field_0x8 = uVar4;
    uVar1 = puVar8[0x18];
    uVar4 = puVar8[0x19];
    *(undefined8 *)&(pFVar7->State).R.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).R.field_0x18 = uVar3;
    uVar2 = puVar8[0x1a];
    uVar3 = puVar8[0x1b];
    local_168 = 0;
    *(undefined8 *)&(pFVar7->State).Q = uVar1;
    *(undefined8 *)&(pFVar7->State).Q.field_0x8 = uVar4;
    uStack_160 = 0;
    local_48 = 0;
    *(undefined8 *)&(pFVar7->State).Q.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).Q.field_0x18 = uVar3;
    local_158 = 0;
    uStack_150 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_18 = 0;
    pFVar5 = pFVar10;
    puVar6 = &local_168;
    do {
      puVar8 = puVar6;
      pFVar7 = pFVar5;
      pFVar5 = (FSolverBody *)&(pFVar7->State).RoM;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *(undefined8 *)&(pFVar7->State).DP = *puVar8;
      *(undefined8 *)&(pFVar7->State).DP.field_0x8 = uVar1;
      uVar1 = puVar8[4];
      uVar4 = puVar8[5];
      *(undefined8 *)&(pFVar7->State).DQ = uVar2;
      *(undefined8 *)&(pFVar7->State).DQ.field_0x8 = uVar3;
      uVar2 = puVar8[6];
      uVar3 = puVar8[7];
      *(undefined8 *)&(pFVar7->State).V = uVar1;
      *(undefined8 *)&(pFVar7->State).V.field_0x8 = uVar4;
      uVar1 = puVar8[8];
      uVar4 = puVar8[9];
      *(undefined8 *)&(pFVar7->State).W = uVar2;
      *(undefined8 *)&(pFVar7->State).W.field_0x8 = uVar3;
      uVar2 = puVar8[10];
      uVar3 = puVar8[0xb];
      *(undefined8 *)&(pFVar7->State).InvI = uVar1;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x8 = uVar4;
      uVar1 = puVar8[0xc];
      uVar4 = puVar8[0xd];
      *(undefined8 *)&(pFVar7->State).InvI.field_0x10 = uVar2;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x18 = uVar3;
      uVar2 = puVar8[0xe];
      uVar3 = puVar8[0xf];
      *(undefined8 *)&(pFVar7->State).InvI.field_0x20 = uVar1;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x28 = uVar4;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x30 = uVar2;
      *(undefined8 *)&(pFVar7->State).InvI.field_0x38 = uVar3;
      lVar9 = lVar9 + -1;
      puVar6 = puVar8 + 0x10;
    } while (lVar9 != 0);
    uVar1 = puVar8[0x11];
    pFVar10 = pFVar10 + 1;
    uVar2 = puVar8[0x12];
    uVar3 = puVar8[0x13];
    *(undefined8 *)&((TRotation<double,3> *)pFVar5)->field_0x0 = puVar8[0x10];
    *(undefined8 *)&(pFVar7->State).RoM.field_0x8 = uVar1;
    uVar1 = puVar8[0x14];
    uVar4 = puVar8[0x15];
    *(undefined8 *)&(pFVar7->State).RoM.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).RoM.field_0x18 = uVar3;
    uVar2 = puVar8[0x16];
    uVar3 = puVar8[0x17];
    *(undefined8 *)&(pFVar7->State).R = uVar1;
    *(undefined8 *)&(pFVar7->State).R.field_0x8 = uVar4;
    uVar1 = puVar8[0x18];
    uVar4 = puVar8[0x19];
    *(undefined8 *)&(pFVar7->State).R.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).R.field_0x18 = uVar3;
    uVar2 = puVar8[0x1a];
    uVar3 = puVar8[0x1b];
    *(undefined8 *)&(pFVar7->State).Q = uVar1;
    *(undefined8 *)&(pFVar7->State).Q.field_0x8 = uVar4;
    *(undefined8 *)&(pFVar7->State).Q.field_0x10 = uVar2;
    *(undefined8 *)&(pFVar7->State).Q.field_0x18 = uVar3;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return this;
}

// ~FPBDCollisionContainerSolverSimd @ 143a047e0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::~FPBDCollisionContainerSolverSimd
          (FPBDCollisionContainerSolverSimd *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolverSimd_Private_Chaos__6B_;
  pFVar1 = (this->ConstraintSolverIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimdData).SimdConstraints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimdData).SimdSolvers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimdData).SimdSolverBodies.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// AddBodies @ 143a06980

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::AddBodies
          (FPBDCollisionContainerSolverSimd *this,FSolverBodyContainer *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FSolverBody *pFVar6;
  FSolverBody *pFVar7;
  TArray<Chaos::Private::TSolverBodyPtrPairSimd<4>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong local_res20;
  
  CreateSolvers(this);
  uVar10 = 0;
  if (0 < (this->SimdData).SimdSolvers.ArrayNum) {
    lVar12 = 0;
    local_res20 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar10 < (this->SimdData).SimdConstraints.ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (this->SimdData).SimdConstraints.AllocatorInstance.Data + local_res20;
      lVar1 = *(longlong *)pFVar5;
      if (lVar1 != 0) {
        pFVar6 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe0))->MHandle);
        pFVar7 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe8))->MHandle);
        uVar4 = 0;
        if ((int)uVar10 < (this->SimdData).SimdSolverBodies.ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((this->SimdData).SimdSolverBodies.AllocatorInstance.Data + lVar12) =
             pFVar6;
        uVar4 = 0;
        if ((int)uVar10 < (this->SimdData).SimdSolverBodies.ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((this->SimdData).SimdSolverBodies.AllocatorInstance.Data + lVar12 + 0x20)
             = pFVar7;
      }
      piVar11 = &(this->SimdData).SimdSolverBodies.ArrayNum;
      pTVar8 = &(this->SimdData).SimdSolverBodies;
      lVar1 = *(longlong *)(pFVar5 + 8);
      if (lVar1 != 0) {
        pFVar6 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe0))->MHandle);
        pFVar7 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe8))->MHandle);
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 8) = pFVar6;
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 0x28) = pFVar7;
      }
      lVar1 = *(longlong *)(pFVar5 + 0x10);
      if (lVar1 != 0) {
        pFVar6 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe0))->MHandle);
        pFVar7 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe8))->MHandle);
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 0x10) = pFVar6;
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 0x30) = pFVar7;
      }
      lVar1 = *(longlong *)(pFVar5 + 0x18);
      if (lVar1 != 0) {
        pFVar6 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe0))->MHandle);
        pFVar7 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar1 + 0xe8))->MHandle);
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 0x18) = pFVar6;
        uVar4 = 0;
        if ((int)uVar10 < *piVar11) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FSolverBody **)((pTVar8->AllocatorInstance).Data + lVar12 + 0x38) = pFVar7;
      }
      uVar10 = uVar10 + 1;
      local_res20 = local_res20 + 0x20;
      lVar12 = lVar12 + 0x40;
    } while ((int)uVar10 < (this->SimdData).SimdSolvers.ArrayNum);
  }
  return;
}

// AddConstraints @ 143a07700

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::AddConstraints
          (FPBDCollisionContainerSolverSimd *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  TArray<Chaos::Private::FPBDCollisionContainerSolverSimd::FConstraintSolverId,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FPBDIslandConstraint **ppFVar2;
  int iVar3;
  int iVar4;
  FConstraintHandle *pFVar5;
  FPBDConstraintContainer *pFVar6;
  FConstraintHandleTypeID *this_00;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  FPBDIslandConstraint **ppFVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  uint local_48;
  undefined4 uStack_44;
  
  iVar14 = (this->SimdData).SimdNumConstraints.V[1];
  iVar10 = (this->SimdData).SimdNumConstraints.V[0];
  iVar3 = (this->SimdData).SimdNumConstraints.V[2];
  iVar4 = (this->SimdData).SimdNumConstraints.V[3];
  iVar17 = iVar14;
  if (iVar10 <= iVar14) {
    iVar17 = iVar10;
  }
  uVar18 = (ulonglong)(iVar14 < iVar10);
  if (iVar3 < iVar17) {
    uVar18 = 2;
    iVar17 = iVar3;
  }
  if (iVar4 < iVar17) {
    uVar18 = 3;
    iVar17 = iVar4;
  }
  uVar12 = param_1->ArrayNum + iVar17;
  if ((this->SimdData).SimdConstraints.ArrayNum < (int)uVar12) {
    iVar14 = (this->SimdData).SimdConstraints.ArrayNum;
    piVar13 = &(this->SimdData).SimdConstraints.ArrayNum;
    if (iVar14 < (int)uVar12) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,0x10,uVar12 - iVar14,
                          &(this->SimdData).SimdConstraints.AllocatorInstance,piVar13,
                          &(this->SimdData).SimdConstraints.ArrayMax);
      memset((this->SimdData).SimdConstraints.AllocatorInstance.Data + (longlong)iVar10 * 0x20,0,
             (longlong)(int)(uVar12 - iVar14) << 5);
    }
    else {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if ((int)uVar12 < iVar14) {
        uVar16 = iVar14 - uVar12;
        if (((int)(uVar16 | uVar12) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar16 != 0) {
          pFVar11 = (this->SimdData).SimdConstraints.AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 0x20;
          iVar14 = (*piVar13 - uVar16) - uVar12;
          if (iVar14 != 0) {
            memmove(pFVar11,pFVar11 + (longlong)(int)uVar16 * 0x20,(longlong)iVar14 << 5);
          }
          *piVar13 = *piVar13 - uVar16;
        }
      }
    }
  }
  ppFVar15 = param_1->DataPtr;
  iVar14 = 0;
  ppFVar2 = ppFVar15 + param_1->ArrayNum;
  do {
    if (ppFVar15 == ppFVar2) {
      this->NumConstraints = this->NumConstraints + iVar14;
      return;
    }
    pFVar5 = (*ppFVar15)->Constraint;
    cVar8 = (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5);
    if (cVar8 == '\0') {
      pFVar6 = pFVar5->ConstraintContainer;
      if (pFVar6 == (FPBDConstraintContainer *)0x0) {
LAB_143a078cc:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("As<T>() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0xbd,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        piVar13 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c);
        if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if ((*piVar13 <
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            if ((*piVar13 <
                 `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&local_res8,L"FConstraintHandle");
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.TypeName = local_res8;
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
              _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            ::FName::FName(&local_res10,L"FIntrusiveConstraintHandle");
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID.TypeName = local_res10;
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID.BaseType =
                 &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                  ::__l2::STypeID;
            _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          ::FName::FName(&local_res18,L"FCollisionConstraintHandle");
          STypeID.TypeName = local_res18;
          STypeID.BaseType =
               &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                ::__l2::STypeID;
          _Init_thread_footer(&::_TSS0);
        }
        if ((STypeID.TypeName != (pFVar6->ConstraintHandleType).TypeName) &&
           ((this_00 = (pFVar6->ConstraintHandleType).BaseType,
            this_00 == (FConstraintHandleTypeID *)0x0 ||
            (bVar9 = FConstraintHandleTypeID::IsA(this_00,&STypeID), !bVar9)))) goto LAB_143a078cc;
      }
      uVar12 = (this->SimdData).SimdNumConstraints.V[uVar18];
      (this->SimdData).SimdNumConstraints.V[uVar18] = uVar12 + 1;
      uVar16 = 0;
      if ((int)uVar12 < (this->SimdData).SimdConstraints.ArrayNum) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar1 = &this->ConstraintSolverIds;
      uStack_44 = (undefined4)uVar18;
      *(FConstraintHandle **)
       ((this->SimdData).SimdConstraints.AllocatorInstance.Data +
       ((longlong)(int)uVar12 * 4 + uVar18) * 8) = pFVar5;
      pFVar11 = (pTVar1->AllocatorInstance).Data;
      local_48 = uVar12;
      if (((pFVar11 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar11 + (longlong)(this->ConstraintSolverIds).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->ConstraintSolverIds).ArrayNum;
      piVar13 = &(this->ConstraintSolverIds).ArrayMax;
      if (iVar10 == *piVar13) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar1->AllocatorInstance,piVar13);
      }
      iVar14 = iVar14 + 1;
      (this->ConstraintSolverIds).ArrayNum = iVar10 + 1;
      *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           CONCAT44(uStack_44,local_48);
    }
    ppFVar15 = ppFVar15 + 1;
  } while( true );
}

// AddConstraints @ 143a07b60

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::AddConstraints
          (FPBDCollisionContainerSolverSimd *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverSimd.cpp"
                     ,0x15a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplyPositionConstraints @ 143a081e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ApplyPositionConstraints
          (FPBDCollisionContainerSolverSimd *this,double param_1,int param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  FPBDCollisionConstraints *pFVar5;
  TSolverBodyPtrPairSimd<4> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Collisions_Apply> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  float fVar17;
  float fVar18;
  FColor_u_0 local_e8 [2];
  LARGE_INTEGER local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c0;
  TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> local_b0;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_a0;
  TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> local_90;
  TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> local_80;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_70;
  TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> local_60;
  FName local_50 [5];
  
  FVar13 = StatPtr_STAT_Collisions_Apply;
  if (StatPtr_STAT_Collisions_Apply == (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)0x0) {
    pFVar12 = ::FName::FName(local_50,"STAT_Collisions_Apply");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Apply,*pFVar12,
                        L"Collisions::Apply","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar15.Value;
        local_d8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverSimd.cpp"
                   ,0x22b);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar15.Value;
      local_e0.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143a0833a;
    }
  }
  bVar9 = false;
  FVar16 = local_d0;
LAB_143a0833a:
  if (CVars::bChaos_PBDCollisionSolver_Position_SolveEnabled != false) {
    pFVar5 = this->ConstraintContainer;
    fVar18 = __real_3f800000;
    if (param_3 - (pFVar5->SolverSettings).NumPositionShockPropagationIterations <= param_2) {
      fVar18 = CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale;
    }
    ApplyShockPropagation(this,fVar18);
    dVar2 = (pFVar5->SolverSettings).MaxPushOutVelocity;
    fVar18 = (float)param_1;
    if (dVar2 <= 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = ((float)dVar2 * fVar18) / (float)param_3;
    }
    pTVar6 = (TSolverBodyPtrPairSimd<4> *)(this->SimdData).SimdSolverBodies.AllocatorInstance.Data;
    iVar3 = (this->SimdData).SimdSolverBodies.ArrayNum;
    if (param_2 < param_3 - (pFVar5->SolverSettings).NumPositionFrictionIterations) {
      local_80.DataPtr = pTVar6;
      if ((iVar3 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_70.DataPtr =
           (TPBDCollisionSolverManifoldPointsSimd<4> *)
           (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
      iVar4 = (this->SimdData).SimdManifoldPoints.ArrayNum;
      local_80.ArrayNum = iVar3;
      if ((iVar4 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_60.DataPtr =
           (TPBDCollisionSolverSimd<4> *)(this->SimdData).SimdSolvers.AllocatorInstance.Data;
      iVar3 = (this->SimdData).SimdSolvers.ArrayNum;
      local_70.ArrayNum = iVar4;
      if ((iVar3 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_60.ArrayNum = iVar3;
      FPBDCollisionSolverHelperSimd::SolvePositionNoFriction<4>
                (&local_60,&local_70,&local_80,fVar18,fVar17);
    }
    else {
      local_b0.DataPtr = pTVar6;
      if ((iVar3 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_a0.DataPtr =
           (TPBDCollisionSolverManifoldPointsSimd<4> *)
           (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
      iVar4 = (this->SimdData).SimdManifoldPoints.ArrayNum;
      local_b0.ArrayNum = iVar3;
      if ((iVar4 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_90.DataPtr =
           (TPBDCollisionSolverSimd<4> *)(this->SimdData).SimdSolvers.AllocatorInstance.Data;
      iVar3 = (this->SimdData).SimdSolvers.ArrayNum;
      local_a0.ArrayNum = iVar4;
      if ((iVar3 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_90.ArrayNum = iVar3;
      FPBDCollisionSolverHelperSimd::SolvePositionWithFriction<4>
                (&local_90,&local_a0,&local_b0,fVar18,fVar17);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyProjectionConstraints @ 143a08690

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ApplyProjectionConstraints
          (FPBDCollisionContainerSolverSimd *this,double param_1,int param_2,int param_3)

{
  return;
}

// ApplyShockPropagation @ 143a08dc0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ApplyShockPropagation
          (FPBDCollisionContainerSolverSimd *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  longlong local_res18;
  longlong local_res20;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_c0 [8];
  
  fVar13 = __real_00800000;
  fVar12 = __real_3f800000;
  if (param_1 != this->AppliedShockPropagation) {
    uVar17 = 0;
    if (0 < (this->SimdData).SimdSolvers.ArrayNum) {
      lVar18 = 0;
      local_res18 = 0;
      do {
        local_res20 = 0;
        iVar19 = 0;
        uVar20 = ~uVar17 >> 0x1f;
        lVar16 = local_res18;
        do {
          uVar15 = 0;
          if ((int)uVar17 < (this->SimdData).SimdConstraints.ArrayNum) {
            uVar15 = uVar20;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar7 = *(longlong *)((this->SimdData).SimdConstraints.AllocatorInstance.Data + lVar18);
          if (lVar7 != 0) {
            uVar15 = 0;
            if ((int)uVar17 < (this->SimdData).SimdSolverBodies.ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = *(FSolverBody **)
                      ((this->SimdData).SimdSolverBodies.AllocatorInstance.Data + lVar16 * 8);
            uVar15 = 0;
            if ((int)uVar17 < (this->SimdData).SimdSolverBodies.ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = *(FSolverBody **)
                      ((this->SimdData).SimdSolverBodies.AllocatorInstance.Data +
                      (local_res18 + local_res20) * 8 + 0x20);
            if ((fVar13 < (pFVar8->State).InvM) && (fVar13 < (pFVar9->State).InvM)) {
              iVar5 = (pFVar9->State).Level;
              iVar6 = (pFVar8->State).Level;
              if (iVar6 != iVar5) {
                fVar21 = fVar12;
                fVar22 = param_1;
                if (iVar6 < iVar5) {
                  fVar21 = param_1;
                  fVar22 = fVar12;
                }
                uVar15 = 0;
                if ((int)uVar17 < (this->SimdData).SimdSolvers.ArrayNum) {
                  uVar15 = uVar20;
                }
                if ((uVar15 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                local_c0[0].DataPtr =
                     (TPBDCollisionSolverManifoldPointsSimd<4> *)
                     (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
                fVar1 = *(float *)(lVar7 + 0x358);
                fVar2 = *(float *)(lVar7 + 0x350);
                pFVar10 = (this->SimdData).SimdSolvers.AllocatorInstance.Data;
                fVar3 = *(float *)(lVar7 + 0x354);
                fVar4 = *(float *)(lVar7 + 0x34c);
                iVar5 = (this->SimdData).SimdManifoldPoints.ArrayNum;
                if ((iVar5 < 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                local_c0[0].ArrayNum = iVar5;
                TPBDCollisionSolverSimd<4>::UpdateMassNormal
                          ((TPBDCollisionSolverSimd<4> *)(pFVar10 + (longlong)(int)uVar17 * 0x80),
                           iVar19,local_c0,pFVar8,pFVar9,fVar21 * fVar4,fVar21 * fVar3,
                           fVar22 * fVar2,fVar22 * fVar1);
              }
            }
          }
          local_res20 = local_res20 + 1;
          lVar18 = lVar18 + 8;
          iVar19 = iVar19 + 1;
          lVar16 = lVar16 + 1;
        } while (iVar19 < 4);
        local_res18 = local_res18 + 8;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (this->SimdData).SimdSolvers.ArrayNum);
    }
    this->AppliedShockPropagation = param_1;
  }
  return;
}

// ApplyVelocityConstraints @ 143a09230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ApplyVelocityConstraints
          (FPBDCollisionContainerSolverSimd *this,double param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FPBDCollisionConstraints *pFVar4;
  TSolverBodyPtrPairSimd<4> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  float fVar16;
  FColor_u_0 local_d8 [2];
  LARGE_INTEGER local_d0;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b0;
  TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> local_a0;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_90;
  TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> local_80;
  TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> local_70;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_60;
  TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> local_50;
  FName local_40 [3];
  
  FVar12 = StatPtr_STAT_Collisions_ApplyPushOut;
  if (StatPtr_STAT_Collisions_ApplyPushOut ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)0x0) {
    pFVar11 = ::FName::FName(local_40,"STAT_Collisions_ApplyPushOut");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ApplyPushOut,*pFVar11,
                        L"Collisions::ApplyPushOut","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar14.Value;
        local_c8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverSimd.cpp"
                   ,0x25b);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d0.s.LowPart = FVar14.Value;
      local_d0.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      goto LAB_143a09388;
    }
  }
  bVar8 = false;
  FVar15 = local_c0;
LAB_143a09388:
  if (CVars::bChaos_PBDCollisionSolver_Velocity_SolveEnabled != false) {
    pFVar4 = this->ConstraintContainer;
    fVar16 = __real_3f800000;
    if (param_3 - (pFVar4->SolverSettings).NumVelocityShockPropagationIterations <= param_2) {
      fVar16 = CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale;
    }
    ApplyShockPropagation(this,fVar16);
    pTVar5 = (TSolverBodyPtrPairSimd<4> *)(this->SimdData).SimdSolverBodies.AllocatorInstance.Data;
    iVar2 = (this->SimdData).SimdSolverBodies.ArrayNum;
    if (param_2 < param_3 - (pFVar4->SolverSettings).NumVelocityFrictionIterations) {
      local_70.DataPtr = pTVar5;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_60.DataPtr =
           (TPBDCollisionSolverManifoldPointsSimd<4> *)
           (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
      iVar3 = (this->SimdData).SimdManifoldPoints.ArrayNum;
      local_70.ArrayNum = iVar2;
      if ((iVar3 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_50.DataPtr =
           (TPBDCollisionSolverSimd<4> *)(this->SimdData).SimdSolvers.AllocatorInstance.Data;
      iVar2 = (this->SimdData).SimdSolvers.ArrayNum;
      local_60.ArrayNum = iVar3;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_50.ArrayNum = iVar2;
      FPBDCollisionSolverHelperSimd::SolveVelocityNoFriction<4>
                (&local_50,&local_60,&local_70,(float)param_1);
    }
    else {
      local_a0.DataPtr = pTVar5;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_90.DataPtr =
           (TPBDCollisionSolverManifoldPointsSimd<4> *)
           (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
      iVar3 = (this->SimdData).SimdManifoldPoints.ArrayNum;
      local_a0.ArrayNum = iVar2;
      if ((iVar3 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_80.DataPtr =
           (TPBDCollisionSolverSimd<4> *)(this->SimdData).SimdSolvers.AllocatorInstance.Data;
      iVar2 = (this->SimdData).SimdSolvers.ArrayNum;
      local_90.ArrayNum = iVar3;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_80.ArrayNum = iVar2;
      FPBDCollisionSolverHelperSimd::SolveVelocityWithFriction<4>
                (&local_80,&local_90,&local_a0,(float)param_1);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CreateSolvers @ 143a0c990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::CreateSolvers
          (FPBDCollisionContainerSolverSimd *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong local_res10;
  
  uVar9 = (this->SimdData).SimdNumConstraints.V[1];
  uVar5 = (this->SimdData).SimdNumConstraints.V[2];
  if ((int)uVar9 < (this->SimdData).SimdNumConstraints.V[0]) {
    uVar9 = (this->SimdData).SimdNumConstraints.V[0];
  }
  uVar2 = (this->SimdData).SimdNumConstraints.V[3];
  if ((int)uVar5 < (int)uVar9) {
    uVar5 = uVar9;
  }
  iVar12 = (this->SimdData).SimdSolvers.ArrayNum;
  piVar1 = &(this->SimdData).SimdSolvers.ArrayNum;
  if ((int)uVar2 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if (iVar12 < (int)uVar2) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar2 - iVar12,&(this->SimdData).SimdSolvers.AllocatorInstance,piVar1,
               &(this->SimdData).SimdSolvers.ArrayMax);
  }
  else {
    if ((int)uVar2 < 0) goto LAB_143a0cd06;
    if ((int)uVar2 < iVar12) {
      uVar9 = iVar12 - uVar2;
      if (((int)(uVar9 | uVar2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar7 = (this->SimdData).SimdSolvers.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x80;
        iVar12 = (*piVar1 - uVar9) - uVar2;
        if (iVar12 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar9 * 0x80,(longlong)iVar12 << 7);
        }
        *piVar1 = *piVar1 - uVar9;
      }
    }
  }
  iVar12 = 0;
  uVar9 = 0;
  if (0 < (int)uVar2) {
    local_res10 = 0;
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->SimdData).SimdConstraints.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = 0;
      pFVar7 = (this->SimdData).SimdConstraints.AllocatorInstance.Data + lVar10;
      if ((*(longlong *)pFVar7 != 0) && (iVar6 = *(int *)(*(longlong *)pFVar7 + 0x5b0), iVar6 < 0))
      {
        iVar6 = 0;
      }
      iVar8 = iVar6;
      if ((*(longlong *)(pFVar7 + 8) != 0) &&
         (iVar8 = *(int *)(*(longlong *)(pFVar7 + 8) + 0x5b0), iVar8 < iVar6)) {
        iVar8 = iVar6;
      }
      iVar6 = iVar8;
      if ((*(longlong *)(pFVar7 + 0x10) != 0) &&
         (iVar6 = *(int *)(*(longlong *)(pFVar7 + 0x10) + 0x5b0), iVar6 < iVar8)) {
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      if ((*(longlong *)(pFVar7 + 0x18) != 0) &&
         (iVar8 = *(int *)(*(longlong *)(pFVar7 + 0x18) + 0x5b0), iVar8 < iVar6)) {
        iVar8 = iVar6;
      }
      uVar5 = 0;
      if ((int)uVar9 < (this->SimdData).SimdSolvers.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (this->SimdData).SimdSolvers.AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x20;
      *(int *)(pFVar7 + local_res10 + 4) = iVar12;
      iVar12 = iVar12 + iVar8;
      *(int *)(pFVar7 + local_res10) = iVar8;
      *(__m128i *)(pFVar7 + local_res10 + 0x10) = GlobalVectorConstants::IntZero;
      local_res10 = local_res10 + 0x80;
    } while (lVar11 < (int)uVar2);
  }
  TArray<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,TSizedDefaultAllocator<32>_>::
  SetNumZeroed(&(this->SimdData).SimdManifoldPoints,iVar12,No);
  iVar12 = (this->SimdData).SimdSolverBodies.ArrayNum;
  piVar1 = &(this->SimdData).SimdSolverBodies.ArrayNum;
  if (iVar12 < (int)uVar2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,0x10,uVar2 - iVar12,&(this->SimdData).SimdSolverBodies.AllocatorInstance
                       ,piVar1,&(this->SimdData).SimdSolverBodies.ArrayMax);
    memset((this->SimdData).SimdSolverBodies.AllocatorInstance.Data + (longlong)iVar6 * 0x40,0,
           (longlong)(int)(uVar2 - iVar12) << 6);
  }
  else {
    if ((int)uVar2 < 0) {
LAB_143a0cd06:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar12) {
      uVar9 = iVar12 - uVar2;
      if (((int)(uVar9 | uVar2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar7 = (this->SimdData).SimdSolverBodies.AllocatorInstance.Data +
                 (longlong)(int)uVar2 * 0x40;
        iVar12 = (*piVar1 - uVar9) - uVar2;
        if (iVar12 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar9 * 0x40,(longlong)iVar12 << 6);
        }
        *piVar1 = *piVar1 - uVar9;
        return;
      }
    }
  }
  return;
}

// GatherInput @ 143a0ed80

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::GatherInput
          (FPBDCollisionContainerSolverSimd *this,double param_1)

{
  GatherInput(this,param_1,0,this->NumConstraints);
  return;
}

// GatherInput @ 143a0eda0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::GatherInput
          (FPBDCollisionContainerSolverSimd *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  FPBDCollisionConstraints *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  bool local_res18 [8];
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_48 [2];
  
  if (param_2 == 0) {
    local_48[0].DataPtr =
         (TPBDCollisionSolverManifoldPointsSimd<4> *)
         (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
    iVar1 = (this->SimdData).SimdManifoldPoints.ArrayNum;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_48[0].ArrayNum = iVar1;
    if (((this->SimdData).SimdSolverBodies.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = false;
    uVar9 = 0;
    if (0 < (this->SimdData).SimdSolvers.ArrayNum) {
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar9 < (this->SimdData).SimdConstraints.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->SimdData).SimdSolvers.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = this->ConstraintContainer;
        local_res18[0] = false;
        uVar8 = 0;
        if ((int)uVar9 < (this->SimdData).SimdSolverBodies.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->SimdData).SimdSolverBodies.AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar9;
        uVar8 = 0;
        if ((int)uVar9 < (this->SimdData).SimdConstraints.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->SimdData).SimdConstraints.AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar9 < (this->SimdData).SimdSolvers.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UpdateSolverFromConstraint<4>
                  ((TPBDCollisionSolverSimd<4> *)
                   ((this->SimdData).SimdSolvers.AllocatorInstance.Data + lVar10 * 0x80),
                   (TSimdValue<Chaos::FPBDCollisionConstraint_*,4> *)(pFVar4 + lVar10 * 0x20),
                   (TSolverBodyPtrPairSimd<4> *)(pFVar3 + lVar10 * 0x40),local_48,(float)param_1,
                   &pFVar2->SolverSettings,local_res18);
        if ((bVar6) || (local_res18[0] != false)) {
          bVar6 = true;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->SimdData).SimdSolvers.ArrayNum);
      if (bVar6) {
        this->bPerIterationCollisionDetection = true;
      }
    }
  }
  return;
}

// GetNumConstraints @ 143a0f440

int __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::GetNumConstraints
          (FPBDCollisionContainerSolverSimd *this)

{
  return this->NumConstraints;
}

// Reset @ 143a11700

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::Reset
          (FPBDCollisionContainerSolverSimd *this,int param_1)

{
  int iVar1;
  
  this->NumConstraints = 0;
  this->AppliedShockPropagation = 1.0;
  if (-1 < param_1) {
    (this->ConstraintSolverIds).ArrayNum = 0;
    if ((this->ConstraintSolverIds).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&(this->ConstraintSolverIds).AllocatorInstance,0,
                 &(this->ConstraintSolverIds).ArrayMax);
    }
    iVar1 = (this->SimdData).SimdSolverBodies.ArrayMax;
    (this->SimdData).SimdSolverBodies.ArrayNum = 0;
    if (iVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,param_1,&(this->SimdData).SimdSolverBodies.AllocatorInstance,0,
                 &(this->SimdData).SimdSolverBodies.ArrayMax);
    }
    iVar1 = (this->SimdData).SimdSolvers.ArrayMax;
    (this->SimdData).SimdSolvers.ArrayNum = 0;
    if (iVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,param_1,&(this->SimdData).SimdSolvers.AllocatorInstance,0,
                 &(this->SimdData).SimdSolvers.ArrayMax);
    }
    iVar1 = (this->SimdData).SimdManifoldPoints.ArrayMax;
    (this->SimdData).SimdManifoldPoints.ArrayNum = 0;
    if (iVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x300,0x10,param_1,&(this->SimdData).SimdManifoldPoints.AllocatorInstance,0,
                 &(this->SimdData).SimdManifoldPoints.ArrayMax);
    }
    iVar1 = (this->SimdData).SimdConstraints.ArrayMax;
    (this->SimdData).SimdConstraints.ArrayNum = 0;
    if (iVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,param_1,&(this->SimdData).SimdConstraints.AllocatorInstance,0,
                 &(this->SimdData).SimdConstraints.ArrayMax);
    }
    (this->SimdData).SimdNumConstraints.V[0] = 0;
    (this->SimdData).SimdNumConstraints.V[1] = 0;
    (this->SimdData).SimdNumConstraints.V[2] = 0;
    (this->SimdData).SimdNumConstraints.V[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ScatterOutput @ 143a13470

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ScatterOutput
          (FPBDCollisionContainerSolverSimd *this,double param_1)

{
  ScatterOutput(this,param_1,0,this->NumConstraints);
  return;
}

// ScatterOutput @ 143a13490

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::ScatterOutput
          (FPBDCollisionContainerSolverSimd *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> local_38 [2];
  
  if (param_2 == 0) {
    local_38[0].DataPtr =
         (TPBDCollisionSolverManifoldPointsSimd<4> *)
         (this->SimdData).SimdManifoldPoints.AllocatorInstance.Data;
    iVar1 = (this->SimdData).SimdManifoldPoints.ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = 0;
    local_38[0].ArrayNum = iVar1;
    if (0 < (this->SimdData).SimdSolvers.ArrayNum) {
      do {
        uVar9 = ~uVar7 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar7 < (this->SimdData).SimdConstraints.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar7 < (this->SimdData).SimdSolvers.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar7 < (this->SimdData).SimdSolverBodies.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->SimdData).SimdSolverBodies.AllocatorInstance.Data;
        lVar8 = (longlong)(int)uVar7;
        uVar6 = 0;
        if ((int)uVar7 < (this->SimdData).SimdSolvers.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SimdData).SimdSolvers.AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->SimdData).SimdConstraints.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UpdateConstraintFromSolver<4>
                  ((TSimdValue<Chaos::FPBDCollisionConstraint_*,4> *)
                   ((this->SimdData).SimdConstraints.AllocatorInstance.Data + lVar8 * 0x20),
                   (TPBDCollisionSolverSimd<4> *)(pFVar3 + lVar8 * 0x80),
                   (TSolverBodyPtrPairSimd<4> *)(pFVar2 + lVar8 * 0x40),local_38,(float)param_1);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->SimdData).SimdSolvers.ArrayNum);
    }
  }
  return;
}

// UpdateCollisions @ 143a20e30

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::UpdateCollisions
          (FPBDCollisionContainerSolverSimd *this,float param_1)

{
  return;
}

// UpdatePositionShockPropagation @ 143a24610

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::UpdatePositionShockPropagation
          (FPBDCollisionContainerSolverSimd *this,int param_1,int param_2,
          FPBDCollisionSolverSettings *param_3)

{
  if (param_2 - param_3->NumPositionShockPropagationIterations <= param_1) {
    ApplyShockPropagation(this,CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale);
    return;
  }
  ApplyShockPropagation(this,__real_3f800000);
  return;
}

// UpdateVelocityShockPropagation @ 143a247f0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverSimd::UpdateVelocityShockPropagation
          (FPBDCollisionContainerSolverSimd *this,int param_1,int param_2,
          FPBDCollisionSolverSettings *param_3)

{
  if (param_2 - param_3->NumVelocityShockPropagationIterations <= param_1) {
    ApplyShockPropagation(this,CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale);
    return;
  }
  ApplyShockPropagation(this,__real_3f800000);
  return;
}

