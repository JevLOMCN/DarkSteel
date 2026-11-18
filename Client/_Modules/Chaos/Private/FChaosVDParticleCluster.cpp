// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 1436f2650

void __thiscall
FChaosVDParticleCluster::CopyFrom<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (FChaosVDParticleCluster *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  double *pdVar3;
  FRigidClusteredFlags FVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  ClusterId *pCVar13;
  FUniqueIdx *pFVar14;
  FRigidClusteredFlags_u_0 *pFVar15;
  float *pfVar16;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res8 [8];
  int local_38;
  undefined4 uStack_34;
  
  pCVar13 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  if (pCVar13->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    iVar18 = -1;
  }
  else {
    pCVar13 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8);
    pFVar14 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                        (*(TGeometryParticlesImp<double,3,0> **)pCVar13->Id,
                         *(int *)&pCVar13->Id->field_0x8);
    iVar18 = pFVar14->Idx;
  }
  this->ParentParticleID = iVar18;
  pCVar13 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  this->NumChildren = pCVar13->NumChildren;
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  uVar19 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x5e0)) {
    uVar19 = ~uVar5 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x5d8);
  lVar20 = (longlong)(int)uVar5 * 0x60;
  dVar10 = ((double *)(lVar20 + lVar6))[1];
  (this->ChildToParent).Rotation.XY.m128d_f64[0] = *(double *)(lVar20 + lVar6);
  (this->ChildToParent).Rotation.XY.m128d_f64[1] = dVar10;
  pdVar3 = (double *)(lVar20 + 0x10 + lVar6);
  dVar10 = pdVar3[1];
  (this->ChildToParent).Rotation.ZW.m128d_f64[0] = *pdVar3;
  (this->ChildToParent).Rotation.ZW.m128d_f64[1] = dVar10;
  pdVar3 = (double *)(lVar20 + 0x20 + lVar6);
  dVar10 = pdVar3[1];
  (this->ChildToParent).Translation.XY.m128d_f64[0] = *pdVar3;
  (this->ChildToParent).Translation.XY.m128d_f64[1] = dVar10;
  pdVar3 = (double *)(lVar20 + 0x30 + lVar6);
  dVar10 = pdVar3[1];
  (this->ChildToParent).Translation.ZW.m128d_f64[0] = *pdVar3;
  (this->ChildToParent).Translation.ZW.m128d_f64[1] = dVar10;
  pdVar3 = (double *)(lVar20 + 0x40 + lVar6);
  dVar10 = pdVar3[1];
  (this->ChildToParent).Scale3D.XY.m128d_f64[0] = *pdVar3;
  (this->ChildToParent).Scale3D.XY.m128d_f64[1] = dVar10;
  pdVar3 = (double *)(lVar20 + 0x50 + lVar6);
  dVar10 = pdVar3[1];
  (this->ChildToParent).Scale3D.ZW.m128d_f64[0] = *pdVar3;
  (this->ChildToParent).Scale3D.ZW.m128d_f64[1] = dVar10;
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  uVar19 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x5f8)) {
    uVar19 = ~uVar5 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->ClusterGroupIndex = *(int *)(*(longlong *)(lVar6 + 0x5f0) + (longlong)(int)uVar5 * 4);
  pFVar15 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8)->field0_0x0;
  this->bInternalCluster = (bool)(pFVar15->Bits & 1);
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  uVar19 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x640)) {
    uVar19 = ~uVar5 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->CollisionImpulse = *(float *)(*(longlong *)(lVar6 + 0x638) + (longlong)(int)uVar5 * 4);
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  uVar19 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x658)) {
    uVar19 = ~uVar5 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->ExternalStrains = *(float *)(*(longlong *)(lVar6 + 0x650) + (longlong)(int)uVar5 * 4);
  pfVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::Strains
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  this->InternalStrains = *pfVar16;
  pfVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::Strains
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  pTVar2 = &this->ConnectivityEdges;
  this->Strain = *pfVar16;
  pTVar17 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1);
  uVar5 = pTVar17->ArrayNum;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->ConnectivityEdges).ArrayMax;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&pTVar2->AllocatorInstance,(this->ConnectivityEdges).ArrayNum,piVar1);
    }
    pTVar17 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1);
    iVar18 = pTVar17->ArrayNum;
    pFVar21 = (pTVar17->AllocatorInstance).Data;
    pFVar22 = pFVar21 + (longlong)iVar18 * 0x10;
    while( true ) {
      if (pTVar17->ArrayNum != iVar18) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar21 == pFVar22) break;
      puVar7 = *(undefined8 **)pFVar21;
      if (puVar7 == (undefined8 *)0x0) {
        local_38 = -1;
      }
      else {
        pFVar14 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)*puVar7,*(int *)(puVar7 + 1));
        local_38 = pFVar14->Idx;
      }
      uStack_34 = *(undefined4 *)(pFVar21 + 8);
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar8 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar8 + (longlong)*piVar1 * 8)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar12 = (this->ConnectivityEdges).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar21 = pFVar21 + 0x10;
      (this->ConnectivityEdges).ArrayNum = iVar12 + 1;
      *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           CONCAT44(uStack_34,local_38);
    }
    pFVar15 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                          *(int *)&param_1->field_0x8)->field0_0x0;
    this->bIsAnchored = (bool)(pFVar15->Bits >> 1 & 1);
    pFVar15 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                          *(int *)&param_1->field_0x8)->field0_0x0;
    this->bUnbreakable = (bool)(pFVar15->Bits >> 2 & 1);
    pFVar15 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                          *(int *)&param_1->field_0x8)->field0_0x0;
    FVar4.field0_0x0 = (FRigidClusteredFlags_u_0)pFVar15->Bits;
    *(undefined1 *)&this->_padding_ = 1;
    this->bIsChildToParentLocked = (bool)((byte)FVar4.field0_0x0 >> 3 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

