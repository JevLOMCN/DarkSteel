// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// AddBodies @ 143d39650

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::AddBodies
          (FPBDRigidDynamicSpringConstraints *this,int param_1,FSolverBodyContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSolverBody *pFVar5;
  FSolverBody *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar7 = (longlong)param_1;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
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
  pFVar5 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->Constraints).AllocatorInstance.Data[lVar7 * 0x10].field_0x0);
  uVar4 = 0;
  if (param_1 < (this->Constraints).ArrayNum) {
    uVar4 = uVar8;
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
  pFVar6 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->Constraints).AllocatorInstance.Data[lVar7 * 0x10 + 8].
                                field_0x0);
  local_48 = SUB84(pFVar5,0);
  uStack_44 = (undefined4)((ulonglong)pFVar5 >> 0x20);
  uStack_40 = SUB84(pFVar6,0);
  uStack_3c = (undefined4)((ulonglong)pFVar6 >> 0x20);
  uVar4 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar4 = uVar8;
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
  pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar7 * 0x10;
  *(undefined4 *)pFVar1 = local_48;
  *(undefined4 *)(pFVar1 + 4) = uStack_44;
  *(undefined4 *)(pFVar1 + 8) = uStack_40;
  *(undefined4 *)(pFVar1 + 0xc) = uStack_3c;
  return;
}

// AddBodies @ 143d397c0

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::AddBodies
          (FPBDRigidDynamicSpringConstraints *this,FSolverBodyContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSolverBody *pFVar5;
  FSolverBody *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->Constraints).ArrayNum) {
        uVar4 = uVar8;
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
      pFVar5 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->Constraints).AllocatorInstance.Data[lVar9].field_0x0);
      uVar4 = 0;
      if ((int)uVar7 < (this->Constraints).ArrayNum) {
        uVar4 = uVar8;
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
      pFVar6 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->Constraints).AllocatorInstance.Data[lVar9 + 8].field_0x0)
      ;
      local_38 = SUB84(pFVar5,0);
      uStack_34 = (undefined4)((ulonglong)pFVar5 >> 0x20);
      uStack_30 = SUB84(pFVar6,0);
      uStack_2c = (undefined4)((ulonglong)pFVar6 >> 0x20);
      uVar4 = 0;
      if ((int)uVar7 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar4 = uVar8;
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
      uVar7 = uVar7 + 1;
      pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar9;
      *(undefined4 *)pFVar1 = local_38;
      *(undefined4 *)(pFVar1 + 4) = uStack_34;
      *(undefined4 *)(pFVar1 + 8) = uStack_30;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < (this->Constraints).ArrayNum);
  }
  return;
}

// AddBodies @ 143d39940

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::AddBodies
          (FPBDRigidDynamicSpringConstraints *this,TArrayView<int,int> *param_1,
          FSolverBodyContainer *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSolverBody *pFVar7;
  FSolverBody *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar11 = (uint *)param_1->DataPtr;
  puVar1 = puVar11 + param_1->ArrayNum;
  while( true ) {
    if (puVar11 == puVar1) {
      return;
    }
    uVar3 = *puVar11;
    lVar10 = (longlong)(int)uVar3;
    uVar9 = ~uVar3 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar3 < (this->Constraints).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->Constraints).AllocatorInstance.Data[lVar10 * 0x10].
                                  field_0x0);
    uVar6 = 0;
    if ((int)uVar3 < (this->Constraints).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->Constraints).AllocatorInstance.Data[lVar10 * 0x10 + 8].
                                  field_0x0);
    local_58 = SUB84(pFVar7,0);
    uStack_54 = (undefined4)((ulonglong)pFVar7 >> 0x20);
    uStack_50 = SUB84(pFVar8,0);
    uStack_4c = (undefined4)((ulonglong)pFVar8 >> 0x20);
    uVar6 = 0;
    if ((int)uVar3 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar11 = puVar11 + 1;
    pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar10 * 0x10;
    *(undefined4 *)pFVar2 = local_58;
    *(undefined4 *)(pFVar2 + 4) = uStack_54;
    *(undefined4 *)(pFVar2 + 8) = uStack_50;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_4c;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// AddConstraintsToGraph @ 143d3a8a0

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::AddConstraintsToGraph
          (FPBDRigidDynamicSpringConstraints *this,FPBDIslandManager *param_1)

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
LAB_143d3a8d5:
  do {
    if ((this->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDRigidDynamicSpringConstraintHandle_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
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
        goto LAB_143d3a8d5;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ApplyPositionConstraints @ 143d43900

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::ApplyPositionConstraints
          (FPBDRigidDynamicSpringConstraints *this,TArrayView<int,int> *param_1,double param_2,
          int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1->DataPtr;
  piVar1 = piVar2 + param_1->ArrayNum;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    ApplySingle(this,param_2,*piVar2);
  }
  return;
}

// ApplyPositionConstraints @ 143d43970

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::ApplyPositionConstraints
          (FPBDRigidDynamicSpringConstraints *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    do {
      ApplySingle(this,param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->Constraints).ArrayNum);
  }
  return;
}

// ApplySingle @ 143d43dd0

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::ApplySingle
          (FPBDRigidDynamicSpringConstraints *this,double param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FSolverBody *this_00;
  FSolverBody *this_01;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  longlong lVar23;
  TRotation<double,3> *pTVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint uVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  longlong local_res20;
  longlong local_268;
  double local_238;
  double local_230;
  double local_228;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  TRotation<double,3> local_198;
  TRotation<double,3> local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  TRotation<double,3> local_118;
  TRotation<double,3> local_f8 [6];
  
  uVar25 = (ulonglong)param_2;
  uVar27 = (uint)~param_2 >> 0x1f;
  uVar28 = 0;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar28 = uVar27;
  }
  if ((uVar28 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar25 * 0x10) == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintSolverBodies[ConstraintIndex][0] != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidDynamicSpringConstraints.cpp"
                          ,0xbb,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar28 = 0;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar28 = uVar27;
  }
  if ((uVar28 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar25 * 0x10 + 8) == 0
      ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("ConstraintSolverBodies[ConstraintIndex][1] != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidDynamicSpringConstraints.cpp"
                                ,0xbc,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar28 = 0;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar28 = uVar27;
  }
  if ((uVar28 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  this_00 = *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar25 * 0x10)
  ;
  uVar28 = 0;
  if (param_2 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar28 = uVar27;
  }
  if ((uVar28 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  fVar41 = __real_00800000;
  this_01 = *(FSolverBody **)
             ((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar25 * 0x10 + 8);
  if ((((this_00->State).InvM <= __real_00800000) && ((this_01->State).InvM <= __real_00800000)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Body0.IsDynamic() || Body1.IsDynamic()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidDynamicSpringConstraints.cpp"
                          ,0xbf,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar28 = 0;
  if (param_2 < (this->SpringDistances).ArrayNum) {
    uVar28 = uVar27;
  }
  if ((uVar28 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar28 = 0;
  lVar23 = (longlong)*(int *)((this->SpringDistances).AllocatorInstance.Data + uVar25 * 0x10 + 8);
  if (0 < lVar23) {
    uVar44 = (undefined4)__real_3ff0000000000000;
    uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_res20 = 0;
    local_268 = 0;
    uVar26 = uVar25;
    do {
      uVar45 = 0;
      if ((int)uVar26 < (this->Distances).ArrayNum) {
        uVar45 = uVar27;
      }
      if ((uVar45 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar12 = (this->Distances).AllocatorInstance.Data;
      uVar45 = 0;
      if ((int)uVar28 < *(int *)(pFVar12 + uVar25 * 0x10 + 8)) {
        uVar45 = ~uVar28 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar13 = *(longlong *)(pFVar12 + uVar25 * 0x10);
      uVar45 = 0;
      if (param_2 < (this->Distances).ArrayNum) {
        uVar45 = uVar27;
      }
      if ((uVar45 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar12 = (this->Distances).AllocatorInstance.Data;
      uVar45 = 0;
      if ((int)uVar28 < *(int *)(pFVar12 + uVar25 * 0x10 + 8)) {
        uVar45 = ~uVar28 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar14 = *(longlong *)(pFVar12 + uVar25 * 0x10);
      if (((this_00->State).InvM <= fVar41) ||
         (((fVar2 = *(float *)&(this_00->State).DQ, fVar2 == 0.0 &&
           (*(float *)&(this_00->State).DQ.field_0x4 == 0.0)) &&
          (*(float *)&(this_00->State).DQ.field_0x8 == 0.0)))) {
        local_198._0_8_ = *(undefined8 *)&(this_00->State).Q;
        local_198._8_8_ = *(undefined8 *)&(this_00->State).Q.field_0x8;
        local_198._16_8_ = *(undefined8 *)&(this_00->State).Q.field_0x10;
        local_198._24_8_ = *(undefined8 *)&(this_00->State).Q.field_0x18;
        pTVar24 = &local_198;
      }
      else {
        local_218 = (double)fVar2;
        local_210 = (double)*(float *)&(this_00->State).DQ.field_0x4;
        local_208 = (double)*(float *)&(this_00->State).DQ.field_0x8;
        pTVar24 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                            (&local_118,&(this_00->State).Q,(TVector<double,3> *)&local_218,
                             (double)CONCAT44(uVar46,uVar44));
      }
      local_158 = *(double *)pTVar24;
      dStack_150 = *(double *)&pTVar24->field_0x8;
      local_148 = *(double *)&pTVar24->field_0x10;
      dStack_140 = *(double *)&pTVar24->field_0x18;
      pdVar1 = (double *)(local_268 + lVar13);
      dVar39 = *pdVar1;
      dVar18 = pdVar1[1];
      local_228 = *(double *)(local_268 + 0x10 + lVar13);
      dVar16 = dStack_150 * local_228 - local_148 * dVar18;
      dVar16 = dVar16 + dVar16;
      dVar36 = local_148 * dVar39 - local_158 * local_228;
      dVar31 = local_158 * dVar18 - dStack_150 * dVar39;
      dVar36 = dVar36 + dVar36;
      dVar31 = dVar31 + dVar31;
      dVar19 = (dStack_150 * dVar31 - local_148 * dVar36) + dStack_140 * dVar16 + dVar39 +
               (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
      dVar39 = (local_148 * dVar16 - local_158 * dVar31) + dStack_140 * dVar36 + dVar18 +
               (double)*(float *)&(this_00->State).DP.field_0x4 +
               *(double *)&(this_00->State).P.field_0x8;
      dVar16 = (local_158 * dVar36 - dStack_150 * dVar16) + dStack_140 * dVar31 + local_228 +
               (double)*(float *)&(this_00->State).DP.field_0x8 +
               *(double *)&(this_00->State).P.field_0x10;
      local_1e8 = dVar19;
      local_1e0 = dVar39;
      local_1d8 = dVar16;
      if (((this_01->State).InvM <= fVar41) ||
         (((fVar41 = *(float *)&(this_01->State).DQ, fVar41 == 0.0 &&
           (*(float *)&(this_01->State).DQ.field_0x4 == 0.0)) &&
          (*(float *)&(this_01->State).DQ.field_0x8 == 0.0)))) {
        pTVar24 = &local_178;
        local_178._0_8_ = *(undefined8 *)&(this_01->State).Q;
        local_178._8_8_ = *(undefined8 *)&(this_01->State).Q.field_0x8;
        local_178._16_8_ = *(undefined8 *)&(this_01->State).Q.field_0x10;
        local_178._24_8_ = *(undefined8 *)&(this_01->State).Q.field_0x18;
      }
      else {
        local_238 = (double)fVar41;
        local_230 = (double)*(float *)&(this_01->State).DQ.field_0x4;
        local_228 = (double)*(float *)&(this_01->State).DQ.field_0x8;
        pTVar24 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                            (local_f8,&(this_01->State).Q,(TVector<double,3> *)&local_238,
                             (double)CONCAT44(uVar46,uVar44));
      }
      local_138 = *(undefined1 (*) [16])pTVar24;
      local_128 = *(undefined1 (*) [16])&pTVar24->field_0x10;
      dVar37 = local_128._0_8_;
      pdVar1 = (double *)(lVar14 + 0x18 + local_268);
      dVar36 = *pdVar1;
      dVar17 = pdVar1[1];
      local_1a8 = *(double *)(lVar14 + 0x28 + local_268);
      dVar32 = local_138._0_8_;
      uVar26 = (ulonglong)(uint)param_2;
      dVar29 = local_128._8_8_;
      dVar18 = local_138._8_8_;
      dVar31 = dVar18 * local_1a8 - dVar37 * dVar17;
      dVar31 = dVar31 + dVar31;
      dVar38 = dVar37 * dVar36 - dVar32 * local_1a8;
      dVar33 = dVar32 * dVar17 - dVar18 * dVar36;
      dVar38 = dVar38 + dVar38;
      dVar33 = dVar33 + dVar33;
      dVar36 = (dVar18 * dVar33 - dVar37 * dVar38) + dVar29 * dVar31 + dVar36 +
               (double)*(float *)&(this_01->State).DP + *(double *)&(this_01->State).P;
      local_1f8 = (dVar37 * dVar31 - dVar32 * dVar33) + dVar29 * dVar38 + dVar17 +
                  (double)*(float *)&(this_01->State).DP.field_0x4 +
                  *(double *)&(this_01->State).P.field_0x8;
      local_1b8._8_4_ = local_128._8_4_;
      local_1b8._0_8_ = local_1f8;
      local_1b8._12_4_ = local_128._12_4_;
      dVar18 = (dVar32 * dVar38 - dVar18 * dVar31) + dVar29 * dVar33 + local_1a8 +
               (double)*(float *)&(this_01->State).DP.field_0x8 +
               *(double *)&(this_01->State).P.field_0x10;
      local_200 = dVar36;
      local_1f0 = dVar18;
      GetDelta(this,(TVector<double,3> *)&local_1d0,(TVector<double,3> *)&local_1e8,
               (TVector<double,3> *)&local_200,param_2,uVar28);
      dVar31 = local_1d0;
      fVar41 = (this_00->State).InvM;
      uVar45 = SUB84(local_1c0,0);
      uVar20 = (ulonglong)local_1c0 >> 0x20;
      uVar48 = SUB84(local_1c8,0);
      uVar21 = (ulonglong)local_1c8 >> 0x20;
      if (__real_00800000 < fVar41) {
        dVar16 = dVar16 - *(double *)&(this_00->State).P.field_0x10;
        dVar39 = dVar39 - *(double *)&(this_00->State).P.field_0x8;
        dVar19 = dVar19 - *(double *)&(this_00->State).P;
        dVar17 = (double)fVar41;
        fVar42 = (float)(local_1c0 * dVar39 - dVar16 * local_1c8);
        fVar41 = *(float *)&(this_00->State).InvI.field_0x20;
        fVar2 = *(float *)&(this_00->State).InvI.field_0x10;
        fVar3 = *(float *)&(this_00->State).InvI;
        fVar35 = (float)(local_1c8 * dVar19 - local_1d0 * dVar39);
        fVar40 = (float)(local_1d0 * dVar16 - local_1c0 * dVar19);
        fVar4 = *(float *)&(this_00->State).InvI.field_0x14;
        fVar5 = *(float *)&(this_00->State).InvI.field_0x4;
        fVar6 = *(float *)&(this_00->State).InvI.field_0x24;
        fVar7 = *(float *)&(this_00->State).InvI.field_0x28;
        fVar8 = *(float *)&(this_00->State).InvI.field_0x18;
        fVar9 = *(float *)&(this_00->State).InvI.field_0x8;
        *(float *)&(this_00->State).DP =
             (float)(local_1d0 * dVar17) + *(float *)&(this_00->State).DP;
        *(float *)&(this_00->State).DP.field_0x4 =
             (float)(local_1c8 * dVar17) + *(float *)&(this_00->State).DP.field_0x4;
        *(float *)&(this_00->State).DP.field_0x8 =
             (float)(local_1c0 * dVar17) + *(float *)&(this_00->State).DP.field_0x8;
        fVar10 = *(float *)&(this_00->State).DQ.field_0x4;
        fVar11 = *(float *)&(this_00->State).DQ.field_0x8;
        *(float *)&(this_00->State).DQ =
             fVar40 * fVar5 + *(float *)&(this_00->State).DQ + fVar42 * fVar3 + fVar35 * fVar9;
        *(float *)&(this_00->State).DQ.field_0x4 =
             fVar40 * fVar4 + fVar10 + fVar42 * fVar2 + fVar35 * fVar8;
        *(float *)&(this_00->State).DQ.field_0x8 =
             fVar42 * fVar41 + fVar35 * fVar7 + fVar40 * fVar6 + fVar11;
        FSolverBody::UpdateRotationDependentState(this_00);
      }
      fVar41 = (this_01->State).InvM;
      if (__real_00800000 < fVar41) {
        dVar18 = dVar18 - *(double *)&(this_01->State).P.field_0x10;
        dVar39 = (double)local_1b8._0_8_ - *(double *)&(this_01->State).P.field_0x8;
        uVar43 = (uint)__xmm_80000000000000008000000000000000;
        uVar47 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar30 = SUB84(dVar31,0) ^ uVar43;
        uVar34 = (uint)((ulonglong)dVar31 >> 0x20) ^ uVar47;
        dVar36 = dVar36 - *(double *)&(this_01->State).P;
        uVar48 = uVar48 ^ uVar43;
        uVar49 = (uint)uVar21 ^ uVar47;
        uVar45 = uVar45 ^ uVar43;
        uVar47 = (uint)uVar20 ^ uVar47;
        dVar16 = (double)fVar41;
        fVar42 = (float)((double)CONCAT44(uVar47,uVar45) * dVar39 -
                        (double)CONCAT44(uVar49,uVar48) * dVar18);
        fVar41 = *(float *)&(this_01->State).InvI.field_0x20;
        fVar40 = (float)((double)CONCAT44(uVar34,uVar30) * dVar18 -
                        (double)CONCAT44(uVar47,uVar45) * dVar36);
        fVar2 = *(float *)&(this_01->State).InvI.field_0x10;
        fVar3 = *(float *)&(this_01->State).InvI;
        fVar4 = *(float *)&(this_01->State).InvI.field_0x24;
        fVar5 = *(float *)&(this_01->State).InvI.field_0x14;
        fVar6 = *(float *)&(this_01->State).InvI.field_0x4;
        fVar35 = (float)((double)CONCAT44(uVar49,uVar48) * dVar36 -
                        (double)CONCAT44(uVar34,uVar30) * dVar39);
        fVar7 = *(float *)&(this_01->State).InvI.field_0x28;
        fVar8 = *(float *)&(this_01->State).InvI.field_0x8;
        fVar9 = *(float *)&(this_01->State).InvI.field_0x18;
        *(float *)&(this_01->State).DP =
             (float)(dVar16 * (double)CONCAT44(uVar34,uVar30)) + *(float *)&(this_01->State).DP;
        fVar10 = *(float *)&(this_01->State).DP.field_0x8;
        *(float *)&(this_01->State).DP.field_0x4 =
             (float)(dVar16 * (double)CONCAT44(uVar49,uVar48)) +
             *(float *)&(this_01->State).DP.field_0x4;
        *(float *)&(this_01->State).DP.field_0x8 =
             (float)(dVar16 * (double)CONCAT44(uVar47,uVar45)) + fVar10;
        fVar10 = *(float *)&(this_01->State).DQ.field_0x4;
        fVar11 = *(float *)&(this_01->State).DQ.field_0x8;
        *(float *)&(this_01->State).DQ =
             fVar35 * fVar8 + fVar42 * fVar3 + fVar40 * fVar6 + *(float *)&(this_01->State).DQ;
        *(float *)&(this_01->State).DQ.field_0x4 =
             fVar42 * fVar2 + fVar35 * fVar9 + fVar40 * fVar5 + fVar10;
        *(float *)&(this_01->State).DQ.field_0x8 =
             fVar35 * fVar7 + fVar42 * fVar41 + fVar40 * fVar4 + fVar11;
        FSolverBody::UpdateRotationDependentState(this_01);
      }
      uVar28 = uVar28 + 1;
      local_268 = local_268 + 0x30;
      local_res20 = local_res20 + 1;
      uVar44 = (undefined4)__real_3ff0000000000000;
      uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      fVar41 = __real_00800000;
    } while (local_res20 < lVar23);
  }
  return;
}

// GetDelta @ 143d55250

TVector<double,3> * __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::GetDelta
          (FPBDRigidDynamicSpringConstraints *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,int param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TVector<double,3> *pTVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar17 [16];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar12 = 0;
  if (param_3 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  lVar2 = *(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar15 * 0x10);
  uVar12 = 0;
  if (param_3 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  lVar3 = *(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar15 * 0x10 + 8);
  if ((*(float *)(lVar2 + 0x134) <= __real_00800000) &&
     (*(float *)(lVar3 + 0x134) <= __real_00800000)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Body0.IsDynamic() || Body1.IsDynamic()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidDynamicSpringConstraints.cpp"
                        ,0xae,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  dVar9 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar10 = *(double *)param_2 - *(double *)param_1;
  dVar8 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8;
  auVar17 = sqrtpd(unaff_XMM7,auVar17);
  dVar16 = auVar17._0_8_;
  if (dVar16 <= __real_3e7ad7f29abcaf48) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Distance > 1e-7",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidDynamicSpringConstraints.cpp"
                        ,0xb2,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  dVar6 = __real_3ff0000000000000;
  dVar7 = __real_3ff0000000000000 / dVar16;
  uVar12 = 0;
  if (param_3 < (this->SpringDistances).ArrayNum) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pFVar4 = (this->SpringDistances).AllocatorInstance.Data;
  uVar12 = 0;
  if (param_4 < *(int *)(pFVar4 + lVar15 * 0x10 + 8)) {
    uVar12 = (uint)~param_4 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TVector<double,3> *)(*pcVar5)();
      return pTVar13;
    }
  }
  dVar1 = this->Stiffness;
  dVar16 = dVar16 - *(double *)(*(longlong *)(pFVar4 + lVar15 * 0x10) + (longlong)param_4 * 8);
  dVar6 = dVar6 / (double)(*(float *)(lVar3 + 0x134) + *(float *)(lVar2 + 0x134));
  *(double *)&__return_storage_ptr__->field_0x10 = dVar6 * dVar1 * dVar16 * dVar7 * dVar8;
  *(double *)__return_storage_ptr__ = dVar16 * dVar7 * dVar10 * dVar6 * dVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar6 * dVar1 * dVar16 * dVar7 * dVar9;
  return __return_storage_ptr__;
}

// ScatterOutput @ 143d6bbc0

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::ScatterOutput
          (FPBDRigidDynamicSpringConstraints *this,TArrayView<int,int> *param_1,double param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)param_1->DataPtr;
  puVar1 = puVar7 + param_1->ArrayNum;
  while( true ) {
    if (puVar7 == puVar1) {
      return;
    }
    uVar3 = *puVar7;
    uVar6 = 0;
    if ((int)uVar3 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar7 = puVar7 + 1;
    pFVar2 = (this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ScatterOutput @ 143d6bc90

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::ScatterOutput
          (FPBDRigidDynamicSpringConstraints *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar5 = uVar5 + 1;
      pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data + lVar6;
      *(undefined8 *)pFVar1 = 0;
      *(undefined8 *)(pFVar1 + 8) = 0;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->Constraints).ArrayNum);
  }
  return;
}

// UpdatePositionBasedState @ 143d7e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDRigidDynamicSpringConstraints::UpdatePositionBasedState
          (FPBDRigidDynamicSpringConstraints *this,double param_1)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  longlong *plVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  TRotation<double,3> *pTVar25;
  TVector<double,3> *pTVar26;
  FImplicitObject *pFVar27;
  TAABB<double,3> *this_02;
  TRigidTransform<double,3> *pTVar28;
  int iVar29;
  TGeometryParticleHandleImp<double,3,1> *this_03;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  TGeometryParticleHandleImp<double,3,1> *this_04;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  uint uVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar91;
  undefined1 auVar89 [16];
  double dVar92;
  double dVar93;
  double dVar94;
  undefined4 uVar98;
  double dVar99;
  undefined1 auVar95 [16];
  undefined4 uVar101;
  double dVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  double dVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  double dVar128;
  double dVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  double dVar135;
  double dVar136;
  double dVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined4 uVar142;
  undefined4 uVar143;
  undefined4 uVar144;
  undefined1 auStackY_618 [32];
  longlong local_5a8;
  longlong local_588;
  undefined8 local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  FScriptContainerElement *local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  longlong local_4d8;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  TVector<double>_u_0 local_480;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  longlong local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined1 local_338 [16];
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  TRotation<double,3> local_2d8;
  TRotation<double,3> local_2b8;
  TRotation<double,3> local_298;
  TRotation<double,3> local_278;
  undefined1 local_258 [48];
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  double local_1a8;
  double dStack_1a0;
  TRigidTransform<double,3> local_198;
  TRigidTransform<double,3> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_420 = (longlong)(this->Constraints).ArrayNum;
  uVar36 = 0;
  if (0 < local_420) {
    local_588 = 0;
    local_4d8 = 0;
    do {
      lVar33 = local_4d8;
      dVar141 = _UNK_150689688;
      dVar91 = ___xmm_3ff00000000000003ff0000000000000;
      dVar40 = _UNK_150689518;
      dVar39 = ___xmm_00000000000000003ff0000000000000;
      dVar63 = __real_3fe0000000000000;
      uVar30 = ~uVar36 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar36 < (this->Constraints).ArrayNum) {
        uVar32 = uVar30;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(TGeometryParticleHandleImp<double,3,1> **)
                 ((this->Constraints).AllocatorInstance.Data + lVar33);
      uVar32 = 0;
      if ((int)uVar36 < (this->Constraints).ArrayNum) {
        uVar32 = uVar30;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar33 = local_588 * 0x10;
      this_04 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
        this_04 = this_00;
      }
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)
                 ((this->Constraints).AllocatorInstance.Data + lVar33 + 8);
      this_03 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&this_01->_padding_ + 4)) {
        this_03 = this_01;
      }
      if (this_04 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143d7e62f:
        bVar20 = false;
      }
      else {
        uVar32 = (uint)this_04->_padding_;
        lVar35 = this_04->_padding_;
        uVar90 = 0;
        if ((int)uVar32 < *(int *)(lVar35 + 0x2e0)) {
          uVar90 = ~uVar32 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar20 = true;
        if (*(char *)(*(longlong *)(lVar35 + 0x2d8) + 0xb + (longlong)(int)uVar32 * 0x10) != '\x04')
        goto LAB_143d7e62f;
      }
      if (this_03 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143d7e6b8:
        bVar21 = false;
      }
      else {
        uVar32 = (uint)this_03->_padding_;
        lVar35 = this_03->_padding_;
        uVar90 = 0;
        if ((int)uVar32 < *(int *)(lVar35 + 0x2e0)) {
          uVar90 = ~uVar32 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar21 = true;
        if (*(char *)(*(longlong *)(lVar35 + 0x2d8) + 0xb + (longlong)(int)uVar32 * 0x10) != '\x04')
        goto LAB_143d7e6b8;
      }
      uVar32 = (uint)this_00->_padding_;
      lVar35 = this_00->_padding_;
      uVar90 = 0;
      if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
        uVar90 = ~uVar32 >> 0x1f;
      }
      if ((uVar90 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8) != 0) {
        uVar32 = (uint)this_01->_padding_;
        lVar35 = this_01->_padding_;
        uVar90 = 0;
        if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
          uVar90 = ~uVar32 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8) != 0) {
          if (bVar20) {
            pTVar25 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_04,&local_2d8);
          }
          else {
            pTVar25 = TGeometryParticleHandleImp<double,3,1>::GetR(this_00,&local_2b8);
          }
          local_4f8 = *(double *)pTVar25;
          dStack_4f0 = *(double *)&pTVar25->field_0x8;
          local_4e8 = *(double *)&pTVar25->field_0x10;
          dStack_4e0 = *(double *)&pTVar25->field_0x18;
          if (bVar21) {
            pTVar25 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_03,&local_298);
          }
          else {
            pTVar25 = TGeometryParticleHandleImp<double,3,1>::GetR(this_01,&local_278);
          }
          local_4c8 = *(double *)pTVar25;
          dStack_4c0 = *(double *)&pTVar25->field_0x8;
          local_4b8 = *(double *)&pTVar25->field_0x10;
          dStack_4b0 = *(double *)&pTVar25->field_0x18;
          if (bVar20) {
            pTVar26 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_04);
          }
          else {
            pTVar26 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_)
            ;
          }
          local_560 = *(double *)pTVar26;
          dStack_558 = *(double *)&pTVar26->field_0x8;
          local_550 = *(double *)&pTVar26->field_0x10;
          if (bVar21) {
            pTVar26 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_03);
          }
          else {
            pTVar26 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)this_01->_padding_,(int)this_01->_padding_)
            ;
          }
          local_548 = *(double *)pTVar26;
          dStack_540 = *(double *)&pTVar26->field_0x8;
          local_538 = *(double *)&pTVar26->field_0x10;
          uVar32 = 0;
          if ((int)uVar36 < (this->SpringDistances).ArrayNum) {
            uVar32 = uVar30;
          }
          if ((uVar32 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar32 = *(int *)((this->SpringDistances).AllocatorInstance.Data + lVar33 + 8) - 1;
          if (-1 < (int)uVar32) {
            lVar35 = (longlong)(int)uVar32;
            local_5a8 = lVar35 * 0x30;
            do {
              uVar90 = 0;
              if ((int)uVar36 < (this->Distances).ArrayNum) {
                uVar90 = uVar30;
              }
              if ((uVar90 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar31 = (this->Distances).AllocatorInstance.Data;
              uVar23 = ~uVar32;
              uVar34 = uVar23 >> 0x1f;
              uVar90 = 0;
              if ((int)uVar32 < *(int *)(pFVar31 + lVar33 + 8)) {
                uVar90 = uVar34;
              }
              if ((uVar90 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar37 = *(longlong *)(pFVar31 + lVar33);
              uVar90 = 0;
              if ((int)uVar36 < (this->Distances).ArrayNum) {
                uVar90 = uVar30;
              }
              if ((uVar90 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_528 = (this->Distances).AllocatorInstance.Data;
              uVar90 = 0;
              if ((int)uVar32 < *(int *)(local_528 + lVar33 + 8)) {
                uVar90 = uVar34;
              }
              if ((uVar90 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_4a8 = local_4e8;
              dStack_4a0 = dStack_4e0;
              dVar63 = *(double *)(local_5a8 + lVar37);
              dVar92 = ((double *)(local_5a8 + lVar37))[1];
              dVar91 = *(double *)(local_5a8 + 0x10 + lVar37);
              auVar43 = *(undefined1 (*) [16])(local_5a8 + 0x18 + *(longlong *)(local_528 + lVar33))
              ;
              auVar6._4_8_ = unaff_XMM6._8_8_;
              auVar6._0_4_ = auVar43._4_4_;
              auVar84._0_8_ = auVar6._0_8_ << 0x20;
              auVar84._8_4_ = auVar43._8_4_;
              auVar84._12_4_ = auVar43._12_4_;
              dVar94 = auVar84._8_8_;
              dVar62 = dVar91 * dStack_4f0 - dVar92 * local_4e8;
              local_398 = local_4f8;
              dStack_390 = dStack_4f0;
              dVar62 = dVar62 + dVar62;
              dVar39 = dVar63 * local_4e8 - dVar91 * local_4f8;
              local_378 = *(double *)(local_5a8 + 0x28 + *(longlong *)(local_528 + lVar33));
              dVar39 = dVar39 + dVar39;
              dVar141 = auVar43._0_8_;
              dVar40 = dVar92 * local_4f8 - dVar63 * dStack_4f0;
              local_528 = (FScriptContainerElement *)local_4b8;
              dStack_520 = dStack_4b0;
              dVar40 = dVar40 + dVar40;
              dVar136 = local_378 * dStack_4c0 - dVar94 * local_4b8;
              local_388 = local_4c8;
              dStack_380 = dStack_4c0;
              dVar136 = dVar136 + dVar136;
              dVar63 = dVar141 * local_4b8 - local_378 * local_4c8;
              dVar63 = dVar63 + dVar63;
              dVar119 = dVar94 * local_4c8 - dVar141 * dStack_4c0;
              dVar119 = dVar119 + dVar119;
              dVar128 = ((local_4c8 * dVar63 - dStack_4c0 * dVar136) +
                         dStack_4b0 * dVar119 + local_378 + local_538) -
                        ((dVar39 * local_4f8 - dVar62 * dStack_4f0) + dVar40 * dStack_4e0 + dVar91 +
                        local_550);
              unaff_XMM6._0_8_ =
                   dVar62 * dStack_4e0 + SUB168(*(undefined1 (*) [16])(local_5a8 + lVar37),0);
              unaff_XMM6._8_8_ = 0;
              dVar92 = ((local_4b8 * dVar136 - local_4c8 * dVar119) + dStack_4b0 * dVar63 + dVar94 +
                       dStack_540) -
                       ((dVar62 * local_4e8 - dVar40 * local_4f8) + dVar39 * dStack_4e0 + dVar92 +
                       dStack_558);
              dVar91 = ((dStack_4c0 * dVar119 - local_4b8 * dVar63) + dStack_4b0 * dVar136 + dVar141
                       + local_548) -
                       ((dVar40 * dStack_4f0 - dVar39 * local_4e8) + unaff_XMM6._0_8_ + local_560);
              auVar43._8_8_ = 0;
              auVar43._0_8_ = dVar91 * dVar91 + dVar92 * dVar92 + dVar128 * dVar128;
              auVar43 = sqrtpd(*(undefined1 (*) [16])(local_5a8 + lVar37),auVar43);
              if (this->CreationThreshold + this->CreationThreshold < auVar43._0_8_) {
                uVar90 = 0;
                if ((int)uVar36 < (this->Distances).ArrayNum) {
                  uVar90 = uVar30;
                }
                if ((uVar90 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar31 = (this->Distances).AllocatorInstance.Data + lVar33;
                uVar90 = 0;
                if ((int)uVar32 < *(int *)&pFVar31[8].field_0x0) {
                  uVar90 = uVar34;
                }
                if ((uVar90 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar29 = uVar23 + *(int *)&pFVar31[8].field_0x0;
                if (1 < iVar29) {
                  iVar29 = 1;
                }
                if (iVar29 != 0) {
                  memmove((void *)(*(longlong *)&pFVar31->field_0x0 + local_5a8),
                          (void *)(*(longlong *)&pFVar31->field_0x0 +
                                  (longlong)(*(int *)&pFVar31[8].field_0x0 - iVar29) * 0x30),
                          (longlong)iVar29 * 0x30);
                }
                *(int *)&pFVar31[8].field_0x0 = *(int *)&pFVar31[8].field_0x0 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,(ForAnyElementType *)pFVar31,*(int *)&pFVar31[8].field_0x0,
                           (int *)(pFVar31 + 0xc));
                uVar90 = 0;
                if ((int)uVar36 < (this->SpringDistances).ArrayNum) {
                  uVar90 = uVar30;
                }
                if ((uVar90 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar31 = (this->SpringDistances).AllocatorInstance.Data + lVar33;
                uVar90 = 0;
                if ((int)uVar32 < *(int *)&pFVar31[8].field_0x0) {
                  uVar90 = uVar34;
                }
                if ((uVar90 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar29 = uVar23 + *(int *)&pFVar31[8].field_0x0;
                if (1 < iVar29) {
                  iVar29 = 1;
                }
                if (iVar29 != 0) {
                  memmove((void *)(*(longlong *)&pFVar31->field_0x0 + lVar35 * 8),
                          (void *)(*(longlong *)&pFVar31->field_0x0 +
                                  (longlong)(*(int *)&pFVar31[8].field_0x0 - iVar29) * 8),
                          (longlong)iVar29 << 3);
                }
                *(int *)&pFVar31[8].field_0x0 = *(int *)&pFVar31[8].field_0x0 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(ForAnyElementType *)pFVar31,*(int *)&pFVar31[8].field_0x0,
                           (int *)(pFVar31 + 0xc));
              }
              local_5a8 = local_5a8 + -0x30;
              lVar35 = lVar35 + -1;
              uVar32 = uVar32 - 1;
              dVar63 = __real_3fe0000000000000;
              dVar39 = ___xmm_00000000000000003ff0000000000000;
              dVar40 = _UNK_150689518;
              dVar91 = ___xmm_3ff00000000000003ff0000000000000;
              dVar141 = _UNK_150689688;
            } while (-1 < (int)uVar32);
          }
          uVar32 = 0;
          if ((int)uVar36 < (this->SpringDistances).ArrayNum) {
            uVar32 = uVar30;
          }
          if ((uVar32 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar119 = dStack_4b0;
          dVar94 = local_4b8;
          dVar62 = dStack_4c0;
          dVar92 = local_4c8;
          if (*(int *)((this->SpringDistances).AllocatorInstance.Data + lVar33 + 8) !=
              this->MaxSprings) {
            local_1e8 = local_4e8;
            dStack_1e0 = dStack_4e0;
            local_1f8 = local_4f8;
            dStack_1f0 = dStack_4f0;
            local_1d8 = local_560;
            dStack_1d0 = dStack_558;
            local_1c8 = local_550;
            uStack_1c0 = 0;
            local_1b8 = SUB84(dVar91,0);
            uVar90 = local_1b8;
            uStack_1b4 = (uint)((ulonglong)dVar91 >> 0x20);
            uVar23 = uStack_1b4;
            uStack_1b0 = SUB84(dVar141,0);
            uVar34 = uStack_1b0;
            uStack_1ac = (uint)((ulonglong)dVar141 >> 0x20);
            uVar19 = uStack_1ac;
            lVar35 = this_00->_padding_;
            uVar32 = (uint)this_00->_padding_;
            local_418 = local_4c8;
            dStack_410 = dStack_4c0;
            uVar24 = 0;
            if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
              uVar24 = ~uVar32 >> 0x1f;
            }
            local_408 = local_4b8;
            dStack_400 = dStack_4b0;
            local_3f8 = local_548;
            dStack_3f0 = dStack_540;
            local_3e8 = local_538;
            uStack_3e0 = 0;
            local_3d8 = dVar91;
            dStack_3d0 = dVar141;
            local_3c8 = dVar39;
            dStack_3c0 = dVar40;
            local_1a8 = dVar39;
            dStack_1a0 = dVar40;
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)(*(longlong *)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8) +
                         0x16) != '\0') {
              uVar32 = (uint)this_01->_padding_;
              lVar35 = this_01->_padding_;
              uVar24 = 0;
              if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
                uVar24 = ~uVar32 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(char *)(*(longlong *)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8)
                           + 0x16) != '\0') {
                pFVar27 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
                this_02 = (TAABB<double,3> *)
                          (**(code **)(pFVar27->_padding_ + 0x90))(pFVar27,local_258);
                pTVar28 = TRigidTransform<double,3>::Inverse
                                    ((TRigidTransform<double,3> *)&local_418,&local_198);
                pTVar28 = TRigidTransform<double,3>::operator*
                                    ((TRigidTransform<double,3> *)&local_1f8,&local_138,pTVar28);
                TAABB<double,3>::TransformedAABB(this_02,(TAABB<double,3> *)&local_480._s_0,pTVar28)
                ;
                dVar39 = this->CreationThreshold;
                local_480._s_0.X = local_480._s_0.X - dVar39;
                local_480._s_0.Y = local_480._s_0.Y - dVar39;
                local_480._s_0.Z = local_480._s_0.Z - dVar39;
                local_468._s_0.X = local_468._s_0.X + dVar39;
                local_468._s_0.Y = local_468._s_0.Y + dVar39;
                local_468._s_0.Z = local_468._s_0.Z + dVar39;
                pFVar27 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_01);
                (**(code **)(pFVar27->_padding_ + 0x90))(pFVar27,&local_450);
                iVar29 = 0;
                dVar39 = this->CreationThreshold;
                local_450._s_0.X = local_450._s_0.X - dVar39;
                local_450._s_0.Y = local_450._s_0.Y - dVar39;
                local_450._s_0.Z = local_450._s_0.Z - dVar39;
                local_438._s_0.X = local_438._s_0.X + dVar39;
                local_438._s_0.Y = local_438._s_0.Y + dVar39;
                local_438._s_0.Z = local_438._s_0.Z + dVar39;
                do {
                  dVar39 = UE::Math::TVector<double>::Component
                                     ((TVector<double> *)&local_480._s_0,iVar29);
                  unaff_XMM6._8_4_ = (int)extraout_XMM0_Qb;
                  unaff_XMM6._0_8_ = dVar39;
                  unaff_XMM6._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                  dVar40 = UE::Math::TVector<double>::Component
                                     ((TVector<double> *)&local_438._s_0,iVar29);
                  if (dVar40 < dVar39) goto LAB_143d7fe97;
                  dVar39 = UE::Math::TVector<double>::Component
                                     ((TVector<double> *)&local_468._s_0,iVar29);
                  unaff_XMM6._8_4_ = (int)extraout_XMM0_Qb_00;
                  unaff_XMM6._0_8_ = dVar39;
                  unaff_XMM6._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                  dVar40 = UE::Math::TVector<double>::Component
                                     ((TVector<double> *)&local_450._s_0,iVar29);
                  if (dVar39 < dVar40) goto LAB_143d7fe97;
                  iVar29 = iVar29 + 1;
                } while (iVar29 < 3);
              }
            }
            uVar32 = (uint)this_00->_padding_;
            lVar35 = this_00->_padding_;
            dVar40 = (local_560 + local_548) * dVar63;
            dVar39 = (local_538 + local_550) * dVar63;
            uVar24 = 0;
            if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
              uVar24 = ~uVar32 >> 0x1f;
            }
            dVar63 = (dStack_540 + dStack_558) * dVar63;
            local_508 = dVar39;
            if ((uVar24 == 0) &&
               (local_518 = dVar40, dStack_510 = dVar63,
               bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar93 = local_1f8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar99 = dStack_1f0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            plVar2 = *(longlong **)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8);
            auVar102._0_8_ =
                 local_1e8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            auVar102._8_8_ =
                 dStack_1e0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar83._8_4_ = SUB84(dVar99,0);
            auVar83._0_8_ = dVar93;
            uVar98 = (undefined4)((ulonglong)dVar99 >> 0x20);
            auVar83._12_4_ = uVar98;
            dVar42 = dVar40 - local_1d8;
            dVar82 = dVar63 - dStack_1d0;
            uVar101 = (undefined4)((ulonglong)dVar82 >> 0x20);
            auVar76._8_4_ = SUB84(dVar99,0);
            auVar76._0_8_ = dVar93;
            auVar76._12_4_ = uVar98;
            dVar41 = local_508 - local_1c8;
            auVar84 = blendpd(auVar83,auVar102,2);
            dVar100 = auVar76._8_8_;
            auVar130._8_4_ = SUB84(dVar82,0);
            auVar130._0_8_ = dVar42;
            auVar130._12_4_ = uVar101;
            auVar44._8_4_ = SUB84(auVar102._0_8_,0);
            auVar44._0_8_ = dVar100;
            auVar44._12_4_ = (int)((ulonglong)auVar102._0_8_ >> 0x20);
            auVar137._8_4_ = SUB84(auVar102._8_8_,0);
            auVar137._0_8_ = auVar102._0_8_;
            auVar137._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
            auVar64._8_4_ = SUB84(dVar82,0);
            auVar64._0_8_ = dVar42;
            auVar64._12_4_ = uVar101;
            auVar131._0_8_ = auVar130._8_8_ * dVar93 - dVar100 * dVar42;
            auVar131._8_8_ = dVar41 * dVar99 - auVar44._8_8_ * dVar82;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = dVar41;
            auVar43 = blendpd(auVar64,auVar4,2);
            auVar65._0_8_ = auVar43._0_8_ * auVar102._0_8_ - auVar84._0_8_ * dVar41;
            auVar65._8_8_ = auVar43._8_8_ * auVar102._8_8_ - auVar84._8_8_ * 0.0;
            dVar128 = auVar131._8_8_ + auVar131._8_8_;
            dVar136 = auVar65._0_8_ + auVar65._0_8_;
            uVar98 = SUB84(dVar136,0);
            uVar101 = (undefined4)((ulonglong)dVar136 >> 0x20);
            auVar43 = blendpd(auVar131,auVar65,2);
            auVar120._8_4_ = uVar98;
            auVar120._0_8_ = dVar128;
            auVar120._12_4_ = uVar101;
            auVar45._8_4_ = uVar98;
            auVar45._0_8_ = dVar128;
            auVar45._12_4_ = uVar101;
            auVar111._8_4_ = uVar98;
            auVar111._0_8_ = dVar128;
            auVar111._12_4_ = uVar101;
            auVar132._0_8_ = auVar43._0_8_ + auVar43._0_8_;
            auVar132._8_8_ = auVar43._8_8_ + auVar43._8_8_;
            auVar43 = blendpd(auVar111,auVar132,2);
            auVar121._0_8_ = auVar120._8_8_ * dVar93 - dVar128 * dVar100;
            auVar121._8_8_ = auVar132._0_8_ * dVar99 - auVar45._8_8_ * auVar102._0_8_;
            auVar7._4_8_ = auVar102._8_8_;
            auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
            auVar103._0_8_ = auVar7._0_8_ << 0x20;
            auVar103._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar103._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar46._8_4_ = SUB84(auVar132._8_8_,0);
            auVar46._0_8_ = auVar132._0_8_;
            auVar46._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
            auVar112._0_8_ = auVar43._0_8_ * auVar102._0_8_ - auVar132._0_8_ * auVar84._0_8_;
            auVar112._8_8_ = auVar43._8_8_ * auVar102._8_8_ - auVar46._8_8_ * auVar84._8_8_;
            auVar85._0_8_ =
                 (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uStack_1b4,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_1b8);
            auVar85._8_4_ = _UNK_15061cc88 & uStack_1b0;
            auVar85._12_4_ = _UNK_15061cc8c & uStack_1ac;
            auVar104._8_8_ = auVar103._8_8_;
            auVar104._0_8_ = local_1a8;
            local_4a8 = 0.0;
            dStack_4a0 = 0.0;
            lVar35 = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        (uint)((ulonglong)local_1a8 >> 0x20),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        SUB84(local_1a8,0)) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            lVar37 = -(ulonglong)
                      (auVar85._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar38 = -(ulonglong)
                      (auVar85._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar18._4_4_ = uStack_1b4;
            auVar18._0_4_ = local_1b8;
            auVar18._8_4_ = uStack_1b0;
            auVar18._12_4_ = uStack_1ac;
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18)
            ;
            auVar86._0_8_ =
                 (double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar43._4_4_,
                                  ~(uint)lVar37 & auVar43._0_4_);
            auVar86._8_4_ = ~(uint)lVar38 & auVar43._8_4_;
            auVar86._12_4_ = ~(uint)((ulonglong)lVar38 >> 0x20) & auVar43._12_4_;
            auVar47._8_4_ = SUB84(auVar121._8_8_,0);
            auVar47._0_8_ = auVar121._0_8_;
            auVar47._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar104
                           );
            local_368 = auVar86._0_8_ * (dVar128 * auVar137._8_8_ + dVar42 + auVar47._8_8_);
            dStack_360 = auVar86._8_8_ * (dVar136 * auVar102._8_8_ + dVar82 + auVar112._0_8_);
            auVar84 = blendpd(auVar121,auVar112,2);
            local_358 = (double)CONCAT44(~(uint)((ulonglong)lVar35 >> 0x20) & auVar43._4_4_,
                                         ~(uint)lVar35 & auVar43._0_4_) *
                        (auVar132._0_8_ * auVar137._8_8_ + dVar41 + auVar84._0_8_);
            local_518 = dVar40;
            dStack_510 = dVar63;
            local_320 = local_368;
            dStack_318 = dStack_360;
            local_310 = local_358;
            local_528 = (FScriptContainerElement *)
                        (**(code **)(*plVar2 + 0x80))(plVar2,&local_368,&local_498);
            auVar13._8_8_ = dVar119;
            auVar13._0_8_ = dVar94;
            auVar15._8_8_ = dVar62;
            auVar15._0_8_ = dVar92;
            auVar133._0_8_ = local_488 * local_3c8;
            auVar133._8_8_ = dStack_3c0 * 0.0;
            auVar17._8_8_ = dVar141;
            auVar17._0_8_ = dVar91;
            local_498 = dVar91 * local_498;
            dStack_490 = dVar141 * dStack_490;
            uVar98 = (undefined4)((ulonglong)dStack_490 >> 0x20);
            auVar84 = blendpd(auVar15,auVar13,2);
            auVar113._8_4_ = SUB84(dStack_490,0);
            auVar113._0_8_ = local_498;
            auVar113._12_4_ = uVar98;
            auVar48._8_4_ = SUB84(dVar94,0);
            auVar48._0_8_ = dVar62;
            auVar48._12_4_ = (int)((ulonglong)dVar94 >> 0x20);
            auVar66._8_4_ = SUB84(dStack_490,0);
            auVar66._0_8_ = local_498;
            auVar66._12_4_ = uVar98;
            auVar114._0_8_ = auVar113._8_8_ * dVar92 - dVar62 * local_498;
            auVar114._8_8_ = auVar133._0_8_ * dVar62 - auVar48._8_8_ * dStack_490;
            auVar43 = blendpd(auVar66,auVar133,2);
            auVar95._8_4_ = SUB84(auVar114._8_8_,0);
            auVar95._0_8_ = auVar114._0_8_;
            auVar95._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
            auVar67._0_8_ = auVar43._0_8_ * dVar94 - auVar84._0_8_ * auVar133._0_8_;
            auVar67._8_8_ = auVar43._8_8_ * dVar119 - auVar84._8_8_ * auVar133._8_8_;
            auVar43 = blendpd(auVar114,auVar67,2);
            dVar128 = auVar95._8_8_ + auVar95._8_8_;
            dVar136 = auVar67._0_8_ + auVar67._0_8_;
            auVar115._0_8_ = auVar43._0_8_ + auVar43._0_8_;
            auVar115._8_8_ = auVar43._8_8_ + auVar43._8_8_;
            uVar98 = SUB84(dVar136,0);
            auVar77._8_4_ = uVar98;
            auVar77._0_8_ = dVar128;
            uVar101 = (undefined4)((ulonglong)dVar136 >> 0x20);
            auVar77._12_4_ = uVar101;
            auVar49._8_4_ = uVar98;
            auVar49._0_8_ = dVar128;
            auVar49._12_4_ = uVar101;
            auVar68._8_4_ = uVar98;
            auVar68._0_8_ = dVar128;
            auVar68._12_4_ = uVar101;
            auVar43 = blendpd(auVar68,auVar115,2);
            auVar78._0_8_ = auVar77._8_8_ * dVar92 - dVar128 * dVar62;
            auVar78._8_8_ = auVar115._0_8_ * dVar62 - auVar49._8_8_ * dVar94;
            auVar50._8_4_ = SUB84(auVar115._8_8_,0);
            auVar50._0_8_ = auVar115._0_8_;
            auVar50._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
            auVar69._0_8_ = auVar43._0_8_ * dVar94 - auVar115._0_8_ * auVar84._0_8_;
            auVar69._8_8_ = auVar43._8_8_ * dVar119 - auVar50._8_8_ * auVar84._8_8_;
            auVar51._8_4_ = SUB84(auVar78._8_8_,0);
            auVar51._0_8_ = auVar78._0_8_;
            auVar51._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
            local_498 = dVar128 * dVar119 + local_498 + auVar51._8_8_;
            dStack_490 = dVar136 * dVar119 + dStack_490 + auVar69._0_8_;
            auVar43 = blendpd(auVar78,auVar69,2);
            local_488 = auVar115._0_8_ * dVar119 + auVar133._0_8_ + auVar43._0_8_;
            uVar32 = (uint)this_01->_padding_;
            lVar35 = this_01->_padding_;
            uVar24 = 0;
            if ((int)uVar32 < *(int *)(lVar35 + 0x68)) {
              uVar24 = ~uVar32 >> 0x1f;
            }
            local_308 = local_498;
            dStack_300 = dStack_490;
            local_2f8 = local_488;
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar136 = dStack_3c0;
            dVar128 = local_3c8;
            dVar93 = dVar40 - local_3f8;
            dVar99 = dVar63 - dStack_3f0;
            plVar2 = *(longlong **)(*(longlong *)(lVar35 + 0x60) + (longlong)(int)uVar32 * 8);
            auVar105._0_8_ = dVar94 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            auVar105._8_8_ = dVar119 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar138._8_4_ = SUB84(dVar99,0);
            auVar138._0_8_ = dVar93;
            uVar98 = (undefined4)((ulonglong)dVar99 >> 0x20);
            auVar138._12_4_ = uVar98;
            dVar42 = local_508 - local_3e8;
            auVar70._8_4_ = SUB84(dVar99,0);
            auVar70._0_8_ = dVar93;
            auVar70._12_4_ = uVar98;
            auVar122._8_8_ = 0;
            auVar122._0_8_ = dVar42;
            dVar41 = dVar92 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar100 = dVar62 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar43 = blendpd(auVar70,auVar122,2);
            auVar79._8_4_ = SUB84(dVar100,0);
            auVar79._0_8_ = dVar41;
            uVar98 = (undefined4)((ulonglong)dVar100 >> 0x20);
            auVar79._12_4_ = uVar98;
            auVar87._8_4_ = SUB84(dVar100,0);
            auVar87._0_8_ = dVar41;
            auVar87._12_4_ = uVar98;
            dVar82 = auVar79._8_8_;
            auVar84 = blendpd(auVar87,auVar105,2);
            auVar52._8_4_ = SUB84(auVar105._0_8_,0);
            auVar52._0_8_ = dVar82;
            auVar52._12_4_ = (int)((ulonglong)auVar105._0_8_ >> 0x20);
            auVar139._0_8_ = auVar138._8_8_ * dVar41 - dVar82 * dVar93;
            auVar139._8_8_ = dVar42 * dVar100 - auVar52._8_8_ * dVar99;
            auVar134._8_4_ = SUB84(auVar139._8_8_,0);
            auVar134._0_8_ = auVar139._0_8_;
            auVar134._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
            auVar71._0_8_ = auVar43._0_8_ * auVar105._0_8_ - auVar84._0_8_ * dVar42;
            auVar71._8_8_ = auVar43._8_8_ * auVar105._8_8_ - auVar84._8_8_ * 0.0;
            auVar43 = blendpd(auVar139,auVar71,2);
            dVar129 = auVar134._8_8_ + auVar134._8_8_;
            dVar135 = auVar71._0_8_ + auVar71._0_8_;
            auVar140._0_8_ = auVar43._0_8_ + auVar43._0_8_;
            auVar140._8_8_ = auVar43._8_8_ + auVar43._8_8_;
            uVar98 = SUB84(dVar135,0);
            auVar123._8_4_ = uVar98;
            auVar123._0_8_ = dVar129;
            uVar101 = (undefined4)((ulonglong)dVar135 >> 0x20);
            auVar123._12_4_ = uVar101;
            auVar53._8_4_ = uVar98;
            auVar53._0_8_ = dVar129;
            auVar53._12_4_ = uVar101;
            auVar116._8_4_ = uVar98;
            auVar116._0_8_ = dVar129;
            auVar116._12_4_ = uVar101;
            auVar43 = blendpd(auVar116,auVar140,2);
            auVar124._0_8_ = auVar123._8_8_ * dVar41 - dVar129 * dVar82;
            auVar124._8_8_ = auVar140._0_8_ * dVar100 - auVar53._8_8_ * auVar105._0_8_;
            auVar8._4_8_ = auVar105._8_8_;
            auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
            auVar106._0_8_ = auVar8._0_8_ << 0x20;
            auVar106._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar106._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar54._8_4_ = SUB84(auVar140._8_8_,0);
            auVar54._0_8_ = auVar140._0_8_;
            auVar54._12_4_ = (int)((ulonglong)auVar140._8_8_ >> 0x20);
            auVar107._8_8_ = auVar106._8_8_;
            auVar107._0_8_ = local_3c8;
            auVar117._0_8_ = auVar43._0_8_ * auVar105._0_8_ - auVar140._0_8_ * auVar84._0_8_;
            auVar117._8_8_ = auVar43._8_8_ * auVar105._8_8_ - auVar54._8_8_ * auVar84._8_8_;
            auVar96._0_8_ =
                 (double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  uVar90 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            auVar96._8_4_ = uVar34 & _UNK_15061cc88;
            auVar96._12_4_ = uVar19 & _UNK_15061cc8c;
            lVar35 = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        (uint)((ulonglong)local_3c8 >> 0x20),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        SUB84(local_3c8,0)) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            lVar37 = -(ulonglong)
                      (auVar96._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar38 = -(ulonglong)
                      (auVar96._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17)
            ;
            auVar55._8_4_ = SUB84(auVar124._8_8_,0);
            auVar55._0_8_ = auVar124._0_8_;
            auVar55._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
            auVar97._0_8_ =
                 (double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar43._4_4_,
                                  ~(uint)lVar37 & auVar43._0_4_);
            auVar97._8_4_ = ~(uint)lVar38 & auVar43._8_4_;
            auVar97._12_4_ = ~(uint)((ulonglong)lVar38 >> 0x20) & auVar43._12_4_;
            uVar32 = (uint)lVar35;
            uVar90 = (uint)((ulonglong)lVar35 >> 0x20);
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar107
                           );
            local_350 = auVar97._0_8_ * (dVar129 * auVar105._8_8_ + dVar93 + auVar55._8_8_);
            dStack_348 = auVar97._8_8_ * (dVar135 * auVar105._8_8_ + dVar99 + auVar117._0_8_);
            auVar84 = blendpd(auVar124,auVar117,2);
            local_340 = (double)(CONCAT44(~uVar90 & auVar43._4_4_,~uVar32 & auVar43._0_4_) |
                                CONCAT44(local_4a8._4_4_ & uVar90,(uint)local_4a8 & uVar32)) *
                        (auVar140._0_8_ * auVar105._8_8_ + dVar42 + auVar84._0_8_);
            local_2f0 = local_350;
            dStack_2e8 = dStack_348;
            local_2e0 = local_340;
            dVar42 = (double)(**(code **)(*plVar2 + 0x80))(plVar2,&local_350,local_3b8);
            auVar16._8_8_ = dVar62;
            auVar16._0_8_ = dVar92;
            dVar91 = dVar91 * (double)local_3b8._0_8_;
            dVar141 = dVar141 * (double)local_3b8._8_8_;
            uVar98 = SUB84(dVar141,0);
            uVar101 = (undefined4)((ulonglong)dVar141 >> 0x20);
            auVar125._0_8_ = local_3a8 * dVar128;
            auVar125._8_8_ = dVar136 * 0.0;
            auVar14._8_8_ = dVar119;
            auVar14._0_8_ = dVar94;
            auVar108._8_4_ = uVar98;
            auVar108._0_8_ = dVar91;
            auVar108._12_4_ = uVar101;
            auVar56._8_4_ = uVar98;
            auVar56._0_8_ = dVar91;
            auVar56._12_4_ = uVar101;
            auVar72._8_4_ = uVar98;
            auVar72._0_8_ = dVar91;
            auVar72._12_4_ = uVar101;
            auVar43 = blendpd(auVar72,auVar125,2);
            auVar109._0_8_ = auVar108._8_8_ * dVar92 - dVar91 * dVar62;
            auVar109._8_8_ = auVar125._0_8_ * dVar62 - auVar56._8_8_ * dVar94;
            auVar57._8_4_ = SUB84(auVar125._8_8_,0);
            auVar57._0_8_ = auVar125._0_8_;
            auVar57._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
            auVar84 = blendpd(auVar16,auVar14,2);
            auVar73._0_8_ = auVar43._0_8_ * dVar94 - auVar125._0_8_ * auVar84._0_8_;
            auVar73._8_8_ = auVar43._8_8_ * dVar119 - auVar57._8_8_ * auVar84._8_8_;
            unaff_XMM6._8_8_ = dVar119;
            unaff_XMM6._0_8_ = dVar119;
            auVar43 = blendpd(auVar109,auVar73,2);
            dVar128 = auVar109._8_8_ + auVar109._8_8_;
            dVar136 = auVar73._0_8_ + auVar73._0_8_;
            uVar98 = SUB84(dVar136,0);
            uVar101 = (undefined4)((ulonglong)dVar136 >> 0x20);
            auVar110._0_8_ = auVar43._0_8_ + auVar43._0_8_;
            auVar110._8_8_ = auVar43._8_8_ + auVar43._8_8_;
            auVar80._8_4_ = uVar98;
            auVar80._0_8_ = dVar128;
            auVar80._12_4_ = uVar101;
            auVar58._8_4_ = uVar98;
            auVar58._0_8_ = dVar128;
            auVar58._12_4_ = uVar101;
            auVar74._8_4_ = uVar98;
            auVar74._0_8_ = dVar128;
            auVar74._12_4_ = uVar101;
            auVar43 = blendpd(auVar74,auVar110,2);
            auVar81._0_8_ = auVar80._8_8_ * dVar92 - dVar128 * dVar62;
            auVar81._8_8_ = auVar110._0_8_ * dVar62 - auVar58._8_8_ * dVar94;
            auVar59._8_4_ = SUB84(auVar110._8_8_,0);
            auVar59._0_8_ = auVar110._0_8_;
            auVar59._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
            auVar75._0_8_ = auVar43._0_8_ * dVar94 - auVar110._0_8_ * auVar84._0_8_;
            auVar75._8_8_ = auVar43._8_8_ * dVar119 - auVar59._8_8_ * auVar84._8_8_;
            auVar60._8_4_ = SUB84(auVar81._8_8_,0);
            auVar60._0_8_ = auVar81._0_8_;
            auVar60._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
            auVar43 = blendpd(auVar81,auVar75,2);
            local_3a8 = auVar110._0_8_ * dVar119 + auVar125._0_8_ + auVar43._0_8_;
            dVar91 = dVar128 * dVar119 + dVar91 + auVar60._8_8_;
            dVar141 = dVar136 * dVar119 + dVar141 + auVar75._0_8_;
            uVar98 = (undefined4)((ulonglong)dVar141 >> 0x20);
            local_338._8_4_ = SUB84(dVar141,0);
            local_338._0_8_ = dVar91;
            local_338._12_4_ = uVar98;
            local_3b8._8_4_ = SUB84(dVar141,0);
            local_3b8._0_8_ = dVar91;
            local_3b8._12_4_ = uVar98;
            local_328 = local_3a8;
            if (dVar42 + (double)local_528 < this->CreationThreshold ||
                dVar42 + (double)local_528 == this->CreationThreshold) {
              dVar128 = local_4f8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              uVar143 = (undefined4)((ulonglong)dVar128 >> 0x20);
              dVar136 = dStack_4f0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              uVar144 = (undefined4)((ulonglong)dVar136 >> 0x20);
              auVar9._4_8_ = auVar125._8_8_;
              auVar9._0_4_ = uVar143;
              auVar126._0_8_ = auVar9._0_8_ << 0x20;
              auVar126._8_4_ = SUB84(dVar136,0);
              auVar126._12_4_ = uVar144;
              dVar93 = auVar126._8_8_;
              dVar41 = dVar39 - local_488 * (double)local_528;
              dVar129 = dVar41 - local_550;
              dVar92 = dVar63 - dStack_490 * (double)local_528;
              dVar82 = dVar40 - local_498 * (double)local_528;
              dVar62 = dVar92 - dStack_558;
              dVar100 = dVar82 - local_560;
              dVar39 = dVar39 - local_3a8 * dVar42;
              dVar63 = dVar63 - dVar141 * dVar42;
              dVar40 = dVar40 - dVar91 * dVar42;
              dVar141 = local_4e8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              uVar98 = (undefined4)((ulonglong)dVar141 >> 0x20);
              dVar119 = dStack_4e0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              uVar101 = SUB84(dVar119,0);
              uVar142 = (undefined4)((ulonglong)dVar119 >> 0x20);
              auVar10._4_8_ = dVar94;
              auVar10._0_4_ = uVar98;
              auVar88._0_8_ = auVar10._0_8_ << 0x20;
              auVar88._8_4_ = uVar101;
              auVar88._12_4_ = uVar142;
              dVar91 = auVar88._8_8_;
              dVar99 = dVar129 * dVar93 - dVar62 * dVar141;
              dVar99 = dVar99 + dVar99;
              dVar42 = dVar141 * dVar100 - dVar129 * dVar128;
              dVar42 = dVar42 + dVar42;
              dVar94 = dVar62 * dVar128 - dVar93 * dVar100;
              dVar94 = dVar94 + dVar94;
              local_228 = (dVar94 * dVar93 - dVar42 * dVar141) + dVar99 * dVar91 + dVar100;
              dStack_220 = (dVar99 * dVar141 - dVar94 * dVar128) + dVar42 * dVar91 + dVar62;
              local_218 = (dVar42 * dVar128 - dVar99 * dVar93) + dVar94 * dVar91 + dVar129;
              dVar42 = dVar39 - local_538;
              dVar91 = dVar63 - dStack_540;
              auVar11._4_8_ = dVar136;
              auVar11._0_4_ = uVar143;
              auVar127._0_8_ = auVar11._0_8_ << 0x20;
              auVar127._8_4_ = SUB84(dVar136,0);
              auVar127._12_4_ = uVar144;
              dVar62 = dVar40 - local_548;
              dVar94 = auVar127._8_8_;
              auVar118._8_4_ = uVar101;
              auVar118._0_8_ = dVar141;
              auVar118._12_4_ = uVar142;
              auVar12._4_8_ = dVar119;
              auVar12._0_4_ = uVar98;
              auVar89._0_8_ = auVar12._0_8_ << 0x20;
              auVar89._8_4_ = uVar101;
              auVar89._12_4_ = uVar142;
              unaff_XMM6._8_8_ = auVar118._8_8_;
              uVar32 = 0;
              if ((int)uVar36 < (this->Distances).ArrayNum) {
                uVar32 = uVar30;
              }
              dVar119 = auVar89._8_8_;
              dVar93 = dVar42 * dVar94 - dVar91 * dVar141;
              dVar93 = dVar93 + dVar93;
              dVar100 = dVar141 * dVar62 - dVar42 * dVar128;
              dVar100 = dVar100 + dVar100;
              dVar136 = dVar91 * dVar128 - dVar94 * dVar62;
              dVar136 = dVar136 + dVar136;
              dStack_210 = (dVar136 * dVar94 - dVar100 * dVar141) + dVar93 * dVar119 + dVar62;
              local_208 = (dVar93 * dVar141 - dVar136 * dVar128) + dVar100 * dVar119 + dVar91;
              unaff_XMM6._0_8_ = (dVar100 * dVar128 - dVar93 * dVar94) + dVar136 * dVar119 + dVar42;
              local_528 = (FScriptContainerElement *)dVar92;
              dStack_200 = unaff_XMM6._0_8_;
              if ((uVar32 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar31 = (this->Distances).AllocatorInstance.Data + lVar33;
              if (((*(double **)&pFVar31->field_0x0 <= &local_228) &&
                  (&local_228 <
                   *(double **)&pFVar31->field_0x0 + (longlong)*(int *)(pFVar31 + 0xc) * 6)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar29 = *(int *)&pFVar31[8].field_0x0;
              if (iVar29 == *(int *)(pFVar31 + 0xc)) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
              }
              lVar37 = (longlong)iVar29;
              *(int *)&pFVar31[8].field_0x0 = iVar29 + 1;
              lVar35 = *(longlong *)&pFVar31->field_0x0;
              pdVar1 = (double *)(lVar35 + lVar37 * 0x30);
              *pdVar1 = local_228;
              pdVar1[1] = dStack_220;
              pdVar1 = (double *)(lVar35 + lVar37 * 0x30 + 0x10);
              *pdVar1 = local_218;
              pdVar1[1] = dStack_210;
              pdVar1 = (double *)(lVar35 + lVar37 * 0x30 + 0x20);
              *pdVar1 = local_208;
              pdVar1[1] = dStack_200;
              uVar32 = 0;
              if ((int)uVar36 < (this->SpringDistances).ArrayNum) {
                uVar32 = uVar30;
              }
              if ((uVar32 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              dVar82 = dVar82 - dVar40;
              dVar41 = dVar41 - dVar39;
              dVar63 = (double)local_528 - dVar63;
              pFVar31 = (this->SpringDistances).AllocatorInstance.Data + lVar33;
              auVar61._0_8_ = dVar41 * dVar41;
              auVar61._8_8_ = 0;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar82 * dVar82 + dVar63 * dVar63 + auVar61._0_8_;
              auVar43 = sqrtpd(auVar61,auVar5);
              local_568 = auVar43._0_8_;
              if (((*(undefined8 **)&pFVar31->field_0x0 <= &local_568) &&
                  (&local_568 < *(undefined8 **)&pFVar31->field_0x0 + *(int *)(pFVar31 + 0xc))) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar29 = *(int *)&pFVar31[8].field_0x0;
              if (iVar29 == *(int *)(pFVar31 + 0xc)) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
              }
              *(int *)&pFVar31[8].field_0x0 = iVar29 + 1;
              *(undefined8 *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar29 * 8) = local_568;
            }
          }
        }
      }
LAB_143d7fe97:
      local_588 = local_588 + 1;
      local_4d8 = local_4d8 + 0x10;
      uVar36 = uVar36 + 1;
    } while (local_588 < local_420);
  }
  return;
}

