// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// AddParticle @ 143b10790

int __thiscall
Chaos::FSolverBodyContainer::AddParticle(FSolverBodyContainer *this,FGenericParticleHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGenericParticleHandleImp local_18;
  
  if (0x7ffffffe < *(int *)&(this->SolverBodies).field_0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() < Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                       ,0x62,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::Add
            ((TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)this,1);
  pFVar2 = (this->Particles).AllocatorInstance.Data;
  local_18 = param_1.Imp.MHandle;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Particles).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Particles).ArrayNum;
  piVar1 = &(this->Particles).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Particles).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Particles).AllocatorInstance.Data;
  (this->Particles).ArrayNum = iVar5 + 1;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + (longlong)iVar5 * 8) = local_18.MHandle;
  return iVar5;
}

// ApplyCorrections @ 143b15480

void __thiscall Chaos::FSolverBodyContainer::ApplyCorrections(FSolverBodyContainer *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  TRotation<double,3> *pTVar6;
  longlong *plVar7;
  uint uVar8;
  FSolverBody *this_00;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  TRotation<double,3> local_28;
  
  uVar8 = *(uint *)&(this->SolverBodies).field_0x10;
  if (uVar8 != 0) {
    uVar9 = (ulonglong)uVar8;
    uVar10 = 0;
    plVar11 = *(longlong **)&this->SolverBodies;
    do {
      this_00 = (FSolverBody *)(uVar10 * 0x160 + *plVar11);
      fVar1 = *(float *)&(this_00->State).DP.field_0x4;
      fVar2 = *(float *)&(this_00->State).DP.field_0x8;
      dVar3 = *(double *)&(this_00->State).P.field_0x8;
      dVar4 = *(double *)&(this_00->State).P.field_0x10;
      *(double *)&(this_00->State).P =
           (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
      *(double *)&(this_00->State).P.field_0x8 = (double)fVar1 + dVar3;
      *(double *)&(this_00->State).P.field_0x10 = (double)fVar2 + dVar4;
      pTVar6 = FSolverBody::CorrectedQ(this_00,&local_28);
      uVar8 = (int)uVar10 + 1;
      uVar5 = *(undefined8 *)&pTVar6->field_0x8;
      uVar10 = 0;
      if (uVar8 < 0x100) {
        uVar10 = (ulonglong)uVar8;
      }
      *(undefined8 *)&(this_00->State).Q = *(undefined8 *)pTVar6;
      *(undefined8 *)&(this_00->State).Q.field_0x8 = uVar5;
      uVar5 = *(undefined8 *)&pTVar6->field_0x18;
      *(undefined8 *)&(this_00->State).Q.field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
      *(undefined8 *)&(this_00->State).Q.field_0x18 = uVar5;
      *(undefined8 *)&(this_00->State).DP = 0;
      plVar7 = plVar11 + 1;
      if (uVar8 < 0x100) {
        plVar7 = plVar11;
      }
      *(undefined4 *)&(this_00->State).DP.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).DQ = 0;
      *(undefined4 *)&(this_00->State).DQ.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).CP = 0;
      *(undefined8 *)&(this_00->State).CP.field_0x8 = 0;
      *(undefined8 *)&(this_00->State).CQ.field_0x4 = 0;
      uVar9 = uVar9 - 1;
      plVar11 = plVar7;
    } while (uVar9 != 0);
  }
  return;
}

// FindOrAdd @ 143b1e480

FSolverBody * __thiscall
Chaos::FSolverBodyContainer::FindOrAdd(FSolverBodyContainer *this,FGenericParticleHandle param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  uint uVar6;
  int iVar7;
  FSolverBody *pFVar8;
  FGenericParticleHandle FVar9;
  FParticleID *pFVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FGenericParticleHandleImp this_00;
  FGenericParticleHandle this_01;
  int local_res8 [2];
  FGenericParticleHandle local_res10 [2];
  FGenericParticleHandle *local_28;
  int *local_20;
  
  this_01.Imp.MHandle = (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
  FVar9.Imp.MHandle = this_01.Imp.MHandle;
  if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
    FVar9.Imp.MHandle = param_1.Imp.MHandle;
  }
  local_res10[0].Imp.MHandle = param_1.Imp.MHandle;
  if (FVar9.Imp.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar9.Imp.MHandle)->_padding_;
    lVar2 = ((TGeometryParticleHandleImp<double,3,1> *)FVar9.Imp.MHandle)->_padding_;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x5b0)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSolverBody *)(*pcVar3)();
      return pFVar8;
    }
    local_res8[0] = *(int *)(*(longlong *)(lVar2 + 0x5a8) + (longlong)(int)uVar1 * 4);
    if (local_res8[0] != -1) goto LAB_143b1e6a2;
  }
  bVar4 = FGenericParticleHandleImp::IsDynamic(&local_res10[0].Imp);
  if (bVar4) {
    FVar9.Imp.MHandle = this_01.Imp.MHandle;
    if (*(char *)((longlong)local_res10[0].Imp.MHandle + 0xc) != '\0') {
      FVar9.Imp.MHandle = local_res10[0].Imp.MHandle;
    }
    if (FVar9.Imp.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00.MHandle = (TGeometryParticleHandleImp<double,3,1> *)this_01.Imp.MHandle;
      if (1 < *(byte *)((longlong)
                        &((TGeometryParticleHandleImp<double,3,1> *)FVar9.Imp.MHandle)->_padding_ +
                       4)) {
        this_00 = FVar9.Imp.MHandle;
      }
      if (this_00.MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar5 = Kinematic;
      }
      else {
        EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00.MHandle);
      }
      if (EVar5 == Sleeping) goto LAB_143b1e5c9;
    }
    if ((this->bLocked != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                           ,0x78,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSolverBody *)(*pcVar3)();
      return pFVar8;
    }
    local_res8[0] = AddParticle(this,local_res10[0]);
    if (1 < *(byte *)((longlong)local_res10[0].Imp.MHandle + 0xc)) {
      this_01.Imp.MHandle = local_res10[0].Imp.MHandle;
    }
    if (this_01.Imp.MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TPBDRigidParticleHandleImp<double,3,1>::SetSolverBodyIndex
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_01.Imp.MHandle,local_res8[0]);
    }
  }
  else {
LAB_143b1e5c9:
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        (*(TGeometryParticlesImp<double,3,0> **)local_res10[0].Imp.MHandle,
                         *(int *)((longlong)local_res10[0].Imp.MHandle + 8));
    iVar7 = TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<Chaos::FGenericParticleHandle>
                      ((TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
                        *)&this->ParticleToIndexMap,pFVar10->GlobalID,local_res10);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this->ParticleToIndexMap + (longlong)iVar7 * 0x18;
      pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)(lVar2 + 8);
      if (lVar2 == 0) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)this_01.Imp.MHandle;
      }
      if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_res8[0] = (int)pTVar11->_padding_;
        goto LAB_143b1e675;
      }
    }
    if ((this->bLocked != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                           ,0x86,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSolverBody *)(*pcVar3)();
      return pFVar8;
    }
    local_res8[0] = AddParticle(this,local_res10[0]);
    local_28 = local_res10;
    local_20 = local_res8;
    TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<Chaos::FGenericParticleHandle_const_&,int_const_&>_>
              ((TSet<TTuple<Chaos::FGenericParticleHandle,int>,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>,FDefaultSetAllocator>
                *)&this->ParticleToIndexMap,
               (TPairInitializer<Chaos::FGenericParticleHandle_const_&,int_const_&> *)
               (local_res10 + 1),(bool *)&local_28);
  }
LAB_143b1e675:
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FSolverBody *)(*pcVar3)();
    return pFVar8;
  }
LAB_143b1e6a2:
  if ((*(int *)&(this->SolverBodies).field_0x10 <= local_res8[0]) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemIndex < SolverBodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0x8e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FSolverBody *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)this,
                      local_res8[0]);
  return pFVar8;
}

// GatherInput @ 143b1fb60

void __thiscall
Chaos::FSolverBodyContainer::GatherInput
          (FSolverBodyContainer *this,double param_1,int param_2,int param_3)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = (ulonglong)param_2;
  if (((param_2 < 0) || (param_3 < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BeginIndex >= 0) && (BeginIndex <= EndIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0x97,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_3 < 0) || (*(int *)&(this->SolverBodies).field_0x10 < param_3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(EndIndex >= 0) && (EndIndex <= SolverBodies.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0x98,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 < param_3) {
    lVar10 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->Particles).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)
                ((this->Particles).AllocatorInstance.Data + lVar10);
      uVar6 = (int)uVar7 >> 0x1f & 0xff;
      uVar5 = uVar7 + uVar6;
      uVar9 = (int)uVar5 >> 8;
      uVar4 = 0;
      if ((int)uVar9 < *(int *)&(this->SolverBodies).field_0x8) {
        uVar4 = ~uVar9 >> 0x1f;
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
      UpdateSolverBodyFromParticle
                ((FSolverBody *)
                 ((ulonglong)((uVar5 & 0xff) - uVar6) * 0x160 +
                 *(longlong *)(*(longlong *)&this->SolverBodies + (longlong)(int)uVar9 * 8)),pTVar1,
                 param_1);
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar10 = lVar10 + 8;
    } while ((int)(uVar7 + 1) < param_3);
  }
  return;
}

// ScatterOutput @ 143b3a970

void __thiscall
Chaos::FSolverBodyContainer::ScatterOutput(FSolverBodyContainer *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  TRotation<double,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  FSolverBody *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 local_98 [16];
  double local_88;
  undefined1 local_80 [16];
  double local_70;
  TRotation<double,3> local_68;
  
  uVar16 = (ulonglong)param_1;
  if (((param_1 < 0) || (param_2 < param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BeginIndex >= 0) && (BeginIndex <= EndIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0xa2,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_2 < 0) || (*(int *)&(this->SolverBodies).field_0x10 < param_2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(EndIndex >= 0) && (EndIndex <= Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                         ,0xa3,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar8 = __real_00800000;
  if (param_1 < param_2) {
    lVar18 = uVar16 * 8;
    do {
      uVar15 = (uint)uVar16;
      uVar13 = (int)uVar15 >> 0x1f & 0xff;
      uVar10 = uVar15 + uVar13;
      uVar17 = (int)uVar10 >> 8;
      uVar14 = ~uVar17 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar17 < *(int *)&(this->SolverBodies).field_0x8) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar19 = (ulonglong)((uVar10 & 0xff) - uVar13) * 0x160;
      lVar20 = (longlong)(int)uVar17;
      if (fVar8 < *(float *)(*(longlong *)(*(longlong *)&this->SolverBodies + lVar20 * 8) + 0x134 +
                            lVar19)) {
        uVar12 = 0;
        if ((int)uVar17 < *(int *)&(this->SolverBodies).field_0x8) {
          uVar12 = uVar14;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = (FSolverBody *)
                  (*(longlong *)(*(longlong *)&this->SolverBodies + lVar20 * 8) + lVar19);
        fVar1 = *(float *)&(this_00->State).DP.field_0x4;
        fVar2 = *(float *)&(this_00->State).DP.field_0x8;
        dVar3 = *(double *)&(this_00->State).P.field_0x8;
        dVar4 = *(double *)&(this_00->State).P.field_0x10;
        *(double *)&(this_00->State).P =
             (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
        *(double *)&(this_00->State).P.field_0x8 = (double)fVar1 + dVar3;
        *(double *)&(this_00->State).P.field_0x10 = (double)fVar2 + dVar4;
        pTVar11 = FSolverBody::CorrectedQ(this_00,&local_68);
        uVar5 = *(undefined8 *)&pTVar11->field_0x8;
        *(undefined8 *)&(this_00->State).Q = *(undefined8 *)pTVar11;
        *(undefined8 *)&(this_00->State).Q.field_0x8 = uVar5;
        uVar5 = *(undefined8 *)&pTVar11->field_0x18;
        *(undefined8 *)&(this_00->State).Q.field_0x10 = *(undefined8 *)&pTVar11->field_0x10;
        *(undefined8 *)&(this_00->State).Q.field_0x18 = uVar5;
        *(undefined8 *)&(this_00->State).DP = 0;
        *(undefined4 *)&(this_00->State).DP.field_0x8 = 0;
        *(undefined8 *)&(this_00->State).DQ = 0;
        *(undefined4 *)&(this_00->State).DQ.field_0x8 = 0;
        *(undefined8 *)&(this_00->State).CP = 0;
        *(undefined8 *)&(this_00->State).CP.field_0x8 = 0;
        *(undefined8 *)&(this_00->State).CQ.field_0x4 = 0;
        uVar12 = 0;
        if ((int)uVar17 < *(int *)&(this->SolverBodies).field_0x8) {
          uVar12 = uVar14;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)(*(longlong *)&this->SolverBodies + lVar20 * 8);
        uVar12 = 0;
        if ((int)uVar15 < (this->Particles).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((this->Particles).AllocatorInstance.Data + lVar18);
        if ((pTVar6 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particle != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                               ,0x50,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(float *)(lVar19 + 0x134 + lVar20) <= fVar8) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SolverBody.IsDynamic()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Evolution\\SolverBodyContainer.cpp"
                               ,0x51,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar6->field_0xc) {
          this_01 = pTVar6;
        }
        if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          TPBDRigidParticles<double,3>::SetTransformPQCom
                    (*(TPBDRigidParticles<double,3> **)this_01,*(int *)&this_01->field_0x8,
                     (TVector<double,3> *)(lVar19 + 0x110 + lVar20),
                     (TRotation<double,3> *)(lVar19 + 0xc0 + lVar20));
          uVar5 = *(undefined8 *)(lVar19 + 0x20 + lVar20);
          dVar3 = (double)(float)((ulonglong)uVar5 >> 0x20);
          local_98._8_4_ = SUB84(dVar3,0);
          local_98._0_8_ = (double)(float)uVar5;
          local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_88 = (double)*(float *)(lVar19 + 0x28 + lVar20);
          TKinematicGeometryParticlesImp<double,3,0>::SetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)this_01,
                     *(int *)&this_01->field_0x8,(TVector<double,3> *)local_98);
          uVar5 = *(undefined8 *)(lVar19 + 0x30 + lVar20);
          dVar3 = (double)(float)((ulonglong)uVar5 >> 0x20);
          local_80._8_4_ = SUB84(dVar3,0);
          local_80._0_8_ = (double)(float)uVar5;
          local_80._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_70 = (double)*(float *)(lVar19 + 0x38 + lVar20);
          TKinematicGeometryParticlesImp<double,3,0>::SetW
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)this_01,
                     *(int *)&this_01->field_0x8,(TVector<double,3> *)local_80);
          TPBDRigidParticleHandleImp<double,3,1>::SetSolverBodyIndex(this_01,-1);
        }
      }
      lVar18 = lVar18 + 8;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < param_2);
  }
  return;
}

// SetImplicitVelocities @ 143b40040

void __thiscall
Chaos::FSolverBodyContainer::SetImplicitVelocities(FSolverBodyContainer *this,double param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  
  fVar3 = __real_00800000;
  fVar2 = __real_3f800000;
  uVar5 = *(uint *)&(this->SolverBodies).field_0x10;
  uVar7 = 0;
  plVar8 = *(longlong **)&this->SolverBodies;
  if (uVar5 != 0) {
    uVar9 = (ulonglong)uVar5;
    do {
      lVar6 = uVar7 * 0x160;
      lVar1 = *plVar8;
      if ((fVar3 < *(float *)(lVar6 + 0x134 + lVar1)) && (param_1 != 0.0)) {
        fVar10 = fVar2 / (float)param_1;
        *(float *)(lVar6 + 0x20 + lVar1) =
             (*(float *)(lVar6 + lVar1) - *(float *)(lVar6 + 0x138 + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x20 + lVar1);
        *(float *)(lVar6 + 0x24 + lVar1) =
             (*(float *)(lVar6 + 4 + lVar1) - *(float *)(lVar6 + 0x13c + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x24 + lVar1);
        *(float *)(lVar6 + 0x28 + lVar1) =
             (*(float *)(lVar6 + 8 + lVar1) - *(float *)(lVar6 + 0x140 + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x28 + lVar1);
        *(float *)(lVar6 + 0x30 + lVar1) =
             (*(float *)(lVar6 + 0x10 + lVar1) - *(float *)(lVar6 + 0x144 + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x30 + lVar1);
        *(float *)(lVar6 + 0x34 + lVar1) =
             (*(float *)(lVar6 + 0x14 + lVar1) - *(float *)(lVar6 + 0x148 + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x34 + lVar1);
        *(float *)(lVar6 + 0x38 + lVar1) =
             (*(float *)(lVar6 + 0x18 + lVar1) - *(float *)(lVar6 + 0x14c + lVar1)) * fVar10 +
             *(float *)(lVar6 + 0x38 + lVar1);
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = 0;
      plVar4 = plVar8 + 1;
      if (uVar5 < 0x100) {
        uVar7 = (ulonglong)uVar5;
        plVar4 = plVar8;
      }
      plVar8 = plVar4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// UpdateRotationDependentState @ 143b49340

void __thiscall
Chaos::FSolverBodyContainer::UpdateRotationDependentState(FSolverBodyContainer *this)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar2 = *(uint *)&(this->SolverBodies).field_0x10;
  uVar3 = 0;
  plVar5 = *(longlong **)&this->SolverBodies;
  if (uVar2 != 0) {
    uVar4 = (ulonglong)uVar2;
    do {
      FSolverBody::UpdateRotationDependentState((FSolverBody *)(uVar3 * 0x160 + *plVar5));
      uVar2 = (int)uVar3 + 1;
      uVar3 = 0;
      plVar1 = plVar5 + 1;
      if (uVar2 < 0x100) {
        uVar3 = (ulonglong)uVar2;
        plVar1 = plVar5;
      }
      plVar5 = plVar1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// CopyTo @ 143c63200

void __thiscall
Chaos::FSolverBodyContainer::CopyTo(FSolverBodyContainer *this,FSolverBodyContainer *param_1)

{
  undefined1 *puVar1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TMap<Chaos::FGenericParticleHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FGenericParticleHandle,int,0>_>
  *this_00;
  undefined1 *this_01;
  undefined8 *puVar4;
  void *_Src;
  FScriptContainerElement *_Src_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  void *local_58;
  undefined8 *local_50;
  int *piStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 *puStack_30;
  int local_28;
  undefined4 uStack_24;
  
  if (this != param_1) {
    puVar1 = &(this->SolverBodies).field_0x8;
    TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty((TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
             *)param_1,*(int *)&(this->SolverBodies).field_0x8);
    puVar8 = *(undefined8 **)&this->SolverBodies;
    local_28 = *(int *)puVar1;
    puVar4 = puVar8 + local_28;
    local_40 = CONCAT44(uStack_24,local_28);
    piStack_48 = (int *)puVar1;
    local_38 = puVar8;
    puStack_30 = puVar1;
    while( true ) {
      local_50 = puVar8;
      if (*piStack_48 != (int)local_40) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar8 == puVar4) break;
      _Src = (void *)*puVar8;
      _Dst = ::operator_new(0x16000);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        memcpy(_Dst,_Src,0x16000);
      }
      local_58 = _Dst;
      if (((*(void ***)&param_1->SolverBodies <= &local_58) &&
          (&local_58 <
           *(void ***)&param_1->SolverBodies + *(int *)&(param_1->SolverBodies).field_0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&(param_1->SolverBodies).field_0x8;
      puVar1 = &(param_1->SolverBodies).field_0xc;
      if (iVar7 == *(int *)puVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_1,(int *)puVar1);
      }
      puVar8 = puVar8 + 1;
      *(int *)&(param_1->SolverBodies).field_0x8 = iVar7 + 1;
      *(void **)(*(longlong *)&param_1->SolverBodies + (longlong)iVar7 * 8) = local_58;
    }
  }
  pTVar2 = &param_1->Particles;
  *(undefined4 *)&(param_1->SolverBodies).field_0x10 =
       *(undefined4 *)&(this->SolverBodies).field_0x10;
  if (pTVar2 != &this->Particles) {
    iVar7 = (this->Particles).ArrayNum;
    piVar3 = &(param_1->Particles).ArrayMax;
    _Src_00 = (this->Particles).AllocatorInstance.Data;
    (param_1->Particles).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar3,&pTVar2->AllocatorInstance,iVar7,piVar3);
      if (iVar7 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src_00,(longlong)iVar7 << 3);
      }
    }
  }
  this_00 = &param_1->ParticleToIndexMap;
  if (this_00 != &this->ParticleToIndexMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(param_1->ParticleToIndexMap).field_0x38,
               (int *)&(param_1->ParticleToIndexMap).field_0x48,
               (ForElementType<FSetElementId> *)&(this->ParticleToIndexMap).field_0x38,
               *(int *)&(this->ParticleToIndexMap).field_0x48);
    iVar7 = *(int *)&(this->ParticleToIndexMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<Chaos::FGenericParticleHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<Chaos::FGenericParticleHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar7);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,(ForAnyElementType *)this_00,
               (int *)&(param_1->ParticleToIndexMap).field_0x8,
               (int *)&(param_1->ParticleToIndexMap).field_0xc);
    puVar1 = &(this->ParticleToIndexMap).field_0x10;
    this_01 = &(param_1->ParticleToIndexMap).field_0x10;
    *(undefined4 *)&(param_1->ParticleToIndexMap).field_0x30 =
         *(undefined4 *)&(this->ParticleToIndexMap).field_0x30;
    *(undefined4 *)&(param_1->ParticleToIndexMap).field_0x34 =
         *(undefined4 *)&(this->ParticleToIndexMap).field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar7 != 0) {
      memcpy(*(void **)this_00,*(void **)&this->ParticleToIndexMap,(longlong)iVar7 * 0x18);
    }
  }
  param_1->bLocked = this->bLocked;
  return;
}

