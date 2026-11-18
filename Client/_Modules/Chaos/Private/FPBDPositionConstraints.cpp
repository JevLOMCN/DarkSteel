// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// AddBodies @ 143c8c3d0

void __thiscall
Chaos::FPBDPositionConstraints::AddBodies
          (FPBDPositionConstraints *this,int param_1,FSolverBodyContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverBody *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstrainedParticles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->ConstrainedParticles).AllocatorInstance.Data
                                [(longlong)param_1 * 8].field_0x0);
  uVar3 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)param_1 * 8) =
       pFVar4;
  return;
}

// AddBodies @ 143c8c4c0

void __thiscall
Chaos::FPBDPositionConstraints::AddBodies
          (FPBDPositionConstraints *this,FSolverBodyContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverBody *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstrainedParticles).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->ConstrainedParticles).AllocatorInstance.Data[lVar6].
                                    field_0x0);
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar6) = pFVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// AddBodies @ 143c8c5d0

void __thiscall
Chaos::FPBDPositionConstraints::AddBodies
          (FPBDPositionConstraints *this,TArrayView<int,int> *param_1,FSolverBodyContainer *param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSolverBody *pFVar6;
  uint *puVar7;
  
  puVar7 = (uint *)param_1->DataPtr;
  puVar1 = puVar7 + param_1->ArrayNum;
  while( true ) {
    if (puVar7 == puVar1) {
      return;
    }
    uVar2 = *puVar7;
    uVar5 = 0;
    if ((int)uVar2 < (this->ConstrainedParticles).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar6 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->ConstrainedParticles).AllocatorInstance.Data
                                  [(longlong)(int)uVar2 * 8].field_0x0);
    uVar5 = 0;
    if ((int)uVar2 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
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
    puVar7 = puVar7 + 1;
    *(FSolverBody **)
     ((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = pFVar6;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AddConstraintsToGraph @ 143c8cc10

void __thiscall
Chaos::FPBDPositionConstraints::AddConstraintsToGraph
          (FPBDPositionConstraints *this,FPBDIslandManager *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (this->Handles).AllocatorInstance.Data;
  iVar2 = (this->Handles).ArrayNum;
  lVar5 = this->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143c8cc42:
  do {
    if ((this->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDPositionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        Chaos::Private::FPBDIslandManager::AddConstraint(param_1,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143c8cc42;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ApplyPositionConstraints @ 143c909c0

void __thiscall
Chaos::FPBDPositionConstraints::ApplyPositionConstraints
          (FPBDPositionConstraints *this,TArrayView<int,int> *param_1,double param_2,int param_3,
          int param_4)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float *pfVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  double dVar18;
  
  puVar16 = (uint *)param_1->DataPtr;
  puVar1 = puVar16 + param_1->ArrayNum;
  if (puVar16 != puVar1) {
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar17 = *puVar16;
      lVar15 = (longlong)(int)uVar17;
      uVar19 = 0;
      if ((int)uVar17 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pfVar10 = *(float **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar15 * 8);
      if (pfVar10 != (float *)0x0) {
        fVar2 = pfVar10[2];
        fVar3 = pfVar10[1];
        fVar4 = *pfVar10;
        uVar19 = 0;
        if ((int)uVar17 < (this->Targets).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        dVar5 = *(double *)(pfVar10 + 0x48);
        dVar6 = *(double *)(pfVar10 + 0x46);
        dVar7 = *(double *)(pfVar10 + 0x44);
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar11 = (this->Targets).AllocatorInstance.Data;
        uVar17 = SUB84(this->Stiffness,0) ^ uVar20;
        uVar19 = (uint)((ulonglong)this->Stiffness >> 0x20) ^ (uint)uVar13;
        dVar18 = (double)CONCAT44(uVar19,uVar17);
        dVar8 = *(double *)(pFVar11 + lVar15 * 0x18 + 8);
        dVar9 = *(double *)(pFVar11 + lVar15 * 0x18 + 0x10);
        *pfVar10 = (float)((((double)fVar4 + dVar7) - *(double *)(pFVar11 + lVar15 * 0x18)) * dVar18
                          ) + *pfVar10;
        pfVar10[1] = (float)((double)CONCAT44(uVar19,uVar17) * (((double)fVar3 + dVar6) - dVar8)) +
                     pfVar10[1];
        pfVar10[2] = (float)(dVar18 * (((double)fVar2 + dVar5) - dVar9)) + pfVar10[2];
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar1);
  }
  return;
}

// ApplyPositionConstraints @ 143c90ba0

void __thiscall
Chaos::FPBDPositionConstraints::ApplyPositionConstraints
          (FPBDPositionConstraints *this,double param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *pfVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  double dVar18;
  
  uVar14 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    lVar16 = 0;
    lVar15 = 0;
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar17 = 0;
      if ((int)uVar14 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar9 = *(float **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar15);
      if (pfVar9 != (float *)0x0) {
        fVar1 = pfVar9[2];
        fVar2 = pfVar9[1];
        fVar3 = *pfVar9;
        uVar17 = 0;
        if ((int)uVar14 < (this->Targets).ArrayNum) {
          uVar17 = ~uVar14 >> 0x1f;
        }
        dVar4 = *(double *)(pfVar9 + 0x48);
        dVar5 = *(double *)(pfVar9 + 0x46);
        dVar6 = *(double *)(pfVar9 + 0x44);
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar10 = (this->Targets).AllocatorInstance.Data;
        uVar17 = SUB84(this->Stiffness,0) ^ uVar20;
        uVar19 = (uint)((ulonglong)this->Stiffness >> 0x20) ^ (uint)uVar12;
        dVar18 = (double)CONCAT44(uVar19,uVar17);
        dVar7 = *(double *)(pFVar10 + lVar16 + 8);
        dVar8 = *(double *)(pFVar10 + lVar16 + 0x10);
        *pfVar9 = (float)((((double)fVar3 + dVar6) - *(double *)(pFVar10 + lVar16)) * dVar18) +
                  *pfVar9;
        pfVar9[1] = (float)((double)CONCAT44(uVar19,uVar17) * (((double)fVar2 + dVar5) - dVar7)) +
                    pfVar9[1];
        pfVar9[2] = (float)(dVar18 * (((double)fVar1 + dVar4) - dVar8)) + pfVar9[2];
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar14 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// ScatterOutput @ 143ca9ef0

void __thiscall
Chaos::FPBDPositionConstraints::ScatterOutput
          (FPBDPositionConstraints *this,TArrayView<int,int> *param_1,double param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)param_1->DataPtr;
  puVar1 = puVar6 + param_1->ArrayNum;
  while( true ) {
    if (puVar6 == puVar1) {
      return;
    }
    uVar2 = *puVar6;
    uVar5 = 0;
    if ((int)uVar2 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    puVar6 = puVar6 + 1;
    *(undefined8 *)
     ((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ScatterOutput @ 143ca9fa0

void __thiscall
Chaos::FPBDPositionConstraints::ScatterOutput(FPBDPositionConstraints *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar6) = 0;
      uVar6 = uVar6 + 8;
    } while ((int)(uVar4 + 1) < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// ~FPBDPositionConstraints @ 14406b220

void __thiscall
Chaos::FPBDPositionConstraints::~FPBDPositionConstraints(FPBDPositionConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDPositionConstraints_Chaos__6B_;
  pFVar1 = (this->Handles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstrainedParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Targets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  return;
}

// GetNumConstraints @ 14408cf80

int __thiscall Chaos::FPBDPositionConstraints::GetNumConstraints(FPBDPositionConstraints *this)

{
  return (this->ConstrainedParticles).ArrayNum;
}

// PrepareTick @ 14409aa30

void __thiscall Chaos::FPBDPositionConstraints::PrepareTick(FPBDPositionConstraints *this)

{
  return;
}

// ResetConstraints @ 1440af150

void __thiscall Chaos::FPBDPositionConstraints::ResetConstraints(FPBDPositionConstraints *this)

{
  return;
}

// UnprepareTick @ 1440b6e70

void __thiscall Chaos::FPBDPositionConstraints::UnprepareTick(FPBDPositionConstraints *this)

{
  return;
}

// UpdatePositionBasedState @ 1440b9b80

void __thiscall
Chaos::FPBDPositionConstraints::UpdatePositionBasedState
          (FPBDPositionConstraints *this,double param_1)

{
  return;
}

// AddConstraint @ 1440d1fc0

FPBDPositionConstraintHandle * __thiscall
Chaos::FPBDPositionConstraints::AddConstraint
          (FPBDPositionConstraints *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  TVector<double,3> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FPBDPositionConstraintHandle *pFVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  TPBDRigidParticleHandleImp<double,3,1> *local_res10;
  undefined8 local_18;
  undefined8 *local_10;
  
  uVar3 = (this->Targets).ArrayNum;
  pTVar4 = (TVector<double,3> *)(this->Targets).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pTVar4 <= param_2) && (param_2 < pTVar4 + (this->Targets).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDPositionConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar9 = (this->Targets).ArrayNum;
  piVar1 = &(this->Targets).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Targets).AllocatorInstance,piVar1);
  }
  (this->Targets).ArrayNum = iVar9 + 1;
  uVar7 = *(undefined8 *)&param_2->field_0x8;
  pFVar5 = (this->Targets).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(pFVar2 + 8) = uVar7;
  *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)&param_2->field_0x10;
  pFVar2 = (this->ConstrainedParticles).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->ConstrainedParticles).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDPositionConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar9 = (this->ConstrainedParticles).ArrayNum;
  piVar1 = &(this->ConstrainedParticles).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConstrainedParticles).AllocatorInstance,piVar1);
  }
  puVar12 = (undefined8 *)0x0;
  (this->ConstrainedParticles).ArrayNum = iVar9 + 1;
  local_18 = 0;
  *(TPBDRigidParticleHandleImp<double,3,1> **)
   ((this->ConstrainedParticles).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_res10;
  pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar2 + (longlong)(this->ConstraintSolverBodies).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDPositionConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar9 = (this->ConstraintSolverBodies).ArrayNum;
  piVar1 = &(this->ConstraintSolverBodies).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConstraintSolverBodies).AllocatorInstance,piVar1);
  }
  (this->ConstraintSolverBodies).ArrayNum = iVar9 + 1;
  *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       local_18;
  puVar11 = ::operator_new(0x20);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = this;
    *puVar11 = &___7FPBDPositionConstraintHandle_Chaos__6B_;
    puVar11[2] = 0;
    *(uint *)(puVar11 + 3) = uVar3;
    puVar12 = puVar11;
  }
  pFVar2 = (this->Handles).AllocatorInstance.Data;
  local_10 = puVar12;
  if (((pFVar2 <= (FScriptContainerElement *)&local_10) &&
      ((FScriptContainerElement *)&local_10 < pFVar2 + (longlong)(this->Handles).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDPositionConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  iVar9 = (this->Handles).ArrayNum;
  piVar1 = &(this->Handles).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Handles).AllocatorInstance,piVar1);
  }
  (this->Handles).ArrayNum = iVar9 + 1;
  *(undefined8 **)((this->Handles).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_10;
  uVar13 = 0;
  if ((int)uVar3 < (this->Handles).ArrayNum) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPBDPositionConstraintHandle *)(*pcVar6)();
    return pFVar10;
  }
  return *(FPBDPositionConstraintHandle **)
          ((this->Handles).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
}

// Replace @ 1440ef1e0

void __thiscall
Chaos::FPBDPositionConstraints::Replace
          (FPBDPositionConstraints *this,int param_1,TVector<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)&param_2->field_0x4;
  uVar7 = *(undefined4 *)&param_2->field_0x8;
  uVar8 = *(undefined4 *)&param_2->field_0xc;
  uVar2 = *(undefined8 *)&param_2->field_0x10;
  uVar10 = 0;
  if (param_1 < (this->Targets).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Targets).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10) = uVar2;
  return;
}

