// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 49

// operator() @ 143d966b0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPBDRigidsSOAs *this_01;
  float fVar8;
  EObjectStateType EVar9;
  bool bVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong *local_res18;
  
  fVar8 = __real_3f800000;
  plVar18 = *(longlong **)this;
  local_res10 = *(uint *)((longlong)this + 8);
  uVar13 = (ulonglong)(int)local_res10;
  plVar17 = plVar18 + uVar13;
  local_res18 = plVar17;
  do {
    if (*(int *)((longlong)this + 8) != (int)uVar13) {
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar18 == plVar17) {
      return;
    }
    puVar5 = (undefined8 *)*plVar18;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)
                  FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar5 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d9698b;
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar3 = *(byte *)((longlong)&pTVar11->_padding_ + 4);
        pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar3) {
          pTVar14 = pTVar11;
        }
        if ((pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (*(char *)((longlong)this + 0x3c) == '\0')) {
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar3) {
            pTVar14 = pTVar11;
          }
          if ((pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
             (EVar9 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14),
             EVar9 == Sleeping)) {
            Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                      (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 0x10) + 0xbd0),
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,Dynamic);
            pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
              pTVar11 = pTVar14;
            }
            this_01 = *(FPBDRigidsSOAs **)
                       (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xbd0) + 0x2d8);
            if (((pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                (bVar10 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                          Contains(&this_01->ActiveParticlesMapArray,
                                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) &&
               (bVar10 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                         Contains(&this_01->MovingKinematicsMapArray,
                                  (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) {
              Chaos::FPBDRigidsSOAs::
              AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (this_01,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar11,
                         &this_01->TransientDirtyMapArray);
              if (Chaos::CVars::bChaosSolverCheckParticleViews != false) {
                Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_01,pTVar14);
              }
              Chaos::FPBDRigidsSOAs::UpdateViews(this_01);
            }
          }
          ::`anonymous_namespace'::
          AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,
                     (TVector<double> *)((longlong)this + 0x18),*(float *)((longlong)this + 0x30),
                     *(float *)((longlong)this + 0x34),
                     *(ERadialImpulseFalloff *)((longlong)this + 0x38),fVar8,
                     *(bool *)((longlong)this + 0x44),*(bool *)((longlong)this + 0x45),
                     *(float *)((longlong)this + 0x48),*(float *)((longlong)this + 0x4c));
          plVar17 = local_res18;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xbd0);
          pTVar12 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar6 + 0x610),
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar14);
          if (pTVar12 !=
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            piVar1 = &pTVar12->ArrayNum;
            fVar20 = fVar8;
            if (PhysicsObjectInterfaceCVars::RadialImpulseDistributeToChildren != false) {
              fVar20 = fVar8 / (float)*piVar1;
            }
            pFVar16 = (pTVar12->AllocatorInstance).Data;
            iVar4 = *piVar1;
            pFVar2 = pFVar16 + (longlong)iVar4 * 8;
            while( true ) {
              if (*piVar1 != iVar4) {
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              plVar17 = local_res18;
              if (pFVar16 == pFVar2) break;
              pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar16;
              fVar19 = ::`anonymous_namespace'::
                       AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                                 (pTVar7,(TVector<double> *)((longlong)this + 0x18),
                                  *(float *)((longlong)this + 0x30),
                                  *(float *)((longlong)this + 0x34),
                                  *(ERadialImpulseFalloff *)((longlong)this + 0x38),fVar20,
                                  *(bool *)((longlong)this + 0x44),*(bool *)((longlong)this + 0x45),
                                  *(float *)((longlong)this + 0x48),
                                  *(float *)((longlong)this + 0x4c));
              if (0.0 <= *(float *)((longlong)this + 0x40)) {
                fVar19 = *(float *)((longlong)this + 0x40) * fVar19;
              }
              else {
                fVar19 = PhysicsObjectInterfaceCVars::StrainModifier * fVar19 *
                         *(float *)((longlong)this + 0x34);
              }
              if (0.0 < fVar19) {
                pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pTVar7->field_0xc) {
                  pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar7;
                }
                Chaos::FRigidClustering::SetExternalStrain
                          ((FRigidClustering *)(lVar6 + 0x548),pTVar15,fVar19);
              }
              pFVar16 = pFVar16 + 8;
            }
          }
        }
      }
    }
LAB_143d9698b:
    uVar13 = (ulonglong)local_res10;
    plVar18 = plVar18 + 1;
  } while( true );
}

// operator() @ 143d969d0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPBDRigidsSOAs *this_01;
  float fVar8;
  EObjectStateType EVar9;
  bool bVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong *local_res18;
  
  fVar8 = __real_3f800000;
  plVar18 = *(longlong **)this;
  local_res10 = *(uint *)((longlong)this + 8);
  uVar13 = (ulonglong)(int)local_res10;
  plVar17 = plVar18 + uVar13;
  local_res18 = plVar17;
  do {
    if (*(int *)((longlong)this + 8) != (int)uVar13) {
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar18 == plVar17) {
      return;
    }
    puVar5 = (undefined8 *)*plVar18;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)
                  FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar5 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96cab;
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar3 = *(byte *)((longlong)&pTVar11->_padding_ + 4);
        pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar3) {
          pTVar14 = pTVar11;
        }
        if ((pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (*(char *)((longlong)this + 0x3c) == '\0')) {
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar3) {
            pTVar14 = pTVar11;
          }
          if ((pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
             (EVar9 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14),
             EVar9 == Sleeping)) {
            Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                      (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 0x10) + 0xbd0),
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,Dynamic);
            pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
              pTVar11 = pTVar14;
            }
            this_01 = *(FPBDRigidsSOAs **)
                       (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xbd0) + 0x2d8);
            if (((pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                (bVar10 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                          Contains(&this_01->ActiveParticlesMapArray,
                                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) &&
               (bVar10 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                         Contains(&this_01->MovingKinematicsMapArray,
                                  (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) {
              Chaos::FPBDRigidsSOAs::
              AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (this_01,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar11,
                         &this_01->TransientDirtyMapArray);
              if (Chaos::CVars::bChaosSolverCheckParticleViews != false) {
                Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_01,pTVar14);
              }
              Chaos::FPBDRigidsSOAs::UpdateViews(this_01);
            }
          }
          ::`anonymous_namespace'::
          AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,
                     (TVector<double> *)((longlong)this + 0x18),*(float *)((longlong)this + 0x30),
                     *(float *)((longlong)this + 0x34),
                     *(ERadialImpulseFalloff *)((longlong)this + 0x38),fVar8,
                     *(bool *)((longlong)this + 0x44),*(bool *)((longlong)this + 0x45),
                     *(float *)((longlong)this + 0x48),*(float *)((longlong)this + 0x4c));
          plVar17 = local_res18;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xbd0);
          pTVar12 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar6 + 0x610),
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar14);
          if (pTVar12 !=
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            piVar1 = &pTVar12->ArrayNum;
            fVar20 = fVar8;
            if (PhysicsObjectInterfaceCVars::RadialImpulseDistributeToChildren != false) {
              fVar20 = fVar8 / (float)*piVar1;
            }
            pFVar16 = (pTVar12->AllocatorInstance).Data;
            iVar4 = *piVar1;
            pFVar2 = pFVar16 + (longlong)iVar4 * 8;
            while( true ) {
              if (*piVar1 != iVar4) {
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              plVar17 = local_res18;
              if (pFVar16 == pFVar2) break;
              pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar16;
              fVar19 = ::`anonymous_namespace'::
                       AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                                 (pTVar7,(TVector<double> *)((longlong)this + 0x18),
                                  *(float *)((longlong)this + 0x30),
                                  *(float *)((longlong)this + 0x34),
                                  *(ERadialImpulseFalloff *)((longlong)this + 0x38),fVar20,
                                  *(bool *)((longlong)this + 0x44),*(bool *)((longlong)this + 0x45),
                                  *(float *)((longlong)this + 0x48),
                                  *(float *)((longlong)this + 0x4c));
              if (0.0 <= *(float *)((longlong)this + 0x40)) {
                fVar19 = *(float *)((longlong)this + 0x40) * fVar19;
              }
              else {
                fVar19 = PhysicsObjectInterfaceCVars::StrainModifier * fVar19 *
                         *(float *)((longlong)this + 0x34);
              }
              if (0.0 < fVar19) {
                pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pTVar7->field_0xc) {
                  pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar7;
                }
                Chaos::FRigidClustering::SetExternalStrain
                          ((FRigidClustering *)(lVar6 + 0x548),pTVar15,fVar19);
              }
              pFVar16 = pFVar16 + 8;
            }
          }
        }
      }
    }
LAB_143d96cab:
    uVar13 = (ulonglong)local_res10;
    plVar18 = plVar18 + 1;
  } while( true );
}

// operator() @ 143d96cf0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<1>::SetAngularEtherDrag'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  
  plVar13 = *(longlong **)this;
  iVar3 = *(int *)((longlong)this + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)this + 8) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96e00;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)this + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x448)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x440) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d96e00:
    plVar13 = plVar13 + 1;
  } while( true );
}

// operator() @ 143d96e30

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::SetAngularEtherDrag'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  
  plVar13 = *(longlong **)this;
  iVar3 = *(int *)((longlong)this + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)this + 8) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96f40;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)this + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x448)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x440) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d96f40:
    plVar13 = plVar13 + 1;
  } while( true );
}

// operator() @ 143d96f70

void __thiscall
`Chaos::FWritePhysicsObjectInterface<1>::SetLinearEtherDrag'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  
  plVar13 = *(longlong **)this;
  iVar3 = *(int *)((longlong)this + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)this + 8) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d97080;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)this + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x430)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x428) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d97080:
    plVar13 = plVar13 + 1;
  } while( true );
}

// operator() @ 143d970b0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::SetLinearEtherDrag'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  
  plVar13 = *(longlong **)this;
  iVar3 = *(int *)((longlong)this + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)this + 8) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d971c0;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)this + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x430)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x428) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d971c0:
    plVar13 = plVar13 + 1;
  } while( true );
}

// operator() @ 143d97320

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::AddForce'::__l27::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  local_18.DataPtr = *(FPhysicsObject ***)this;
  iVar2 = *(int *)((longlong)this + 8);
  bVar1 = *(bool *)((longlong)this + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  Chaos::FWritePhysicsObjectInterface<1>::AddForce
            (local_res8,&local_18,(TVector<double> *)((longlong)this + 0x10),bVar1);
  return;
}

// operator() @ 143d973c0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::SetAngularVelocityInRadians'::__l27::<lambda_1>::operator()
          (void *this)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  local_18.DataPtr = *(FPhysicsObject ***)this;
  iVar2 = *(int *)((longlong)this + 8);
  bVar1 = *(bool *)((longlong)this + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  Chaos::FWritePhysicsObjectInterface<1>::SetAngularVelocityInRadians
            (local_res8,&local_18,(TVector<double> *)((longlong)this + 0x10),bVar1);
  return;
}

// operator() @ 143d97460

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::SetLinearVelocity'::__l27::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  uint uVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  TVector<double,3> *pTVar13;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  iVar3 = *(int *)((longlong)this + 8);
  cVar2 = *(char *)((longlong)this + 0x28);
  plVar14 = *(longlong **)this;
  if (iVar3 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar3 == 0) {
    return;
  }
  plVar1 = plVar14 + iVar3;
  do {
    if (plVar14 == plVar1) {
      return;
    }
    puVar5 = (undefined8 *)*plVar14;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar12 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this_00,*(int *)(puVar5 + 1));
      }
      else if (iVar3 == 0xb) {
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143d975fd;
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar12->field_0xc) {
          this_01 = pTVar12;
        }
        if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          dVar15 = *(double *)((longlong)this + 0x20);
          dVar9 = *(double *)((longlong)this + 0x10);
          dVar16 = *(double *)((longlong)this + 0x18);
          if (cVar2 != '\0') {
            pTVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(this_01);
            dVar15 = dVar15 + *(double *)&pTVar13->field_0x10;
            dVar9 = dVar9 + *(double *)pTVar13;
            dVar16 = dVar16 + *(double *)&pTVar13->field_0x8;
          }
          uVar4 = *(uint *)&this_01->field_0x8;
          lVar6 = *(longlong *)this_01;
          uVar11 = 0;
          if ((int)uVar4 < *(int *)(lVar6 + 0x358)) {
            uVar11 = ~uVar4 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x350);
          auVar8._8_4_ = SUB84(dVar16,0);
          auVar8._0_8_ = dVar9;
          auVar8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar6 + (longlong)(int)uVar4 * 0x18) = auVar8;
          *(double *)(lVar6 + 0x10 + (longlong)(int)uVar4 * 0x18) = dVar15;
        }
      }
    }
LAB_143d975fd:
    plVar14 = plVar14 + 1;
  } while( true );
}

// operator() @ 143d97640

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::SetLinearImpulseVelocity'::__l29::<lambda_1>::operator()
          (void *this)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  local_18.DataPtr = *(FPhysicsObject ***)this;
  iVar2 = *(int *)((longlong)this + 8);
  bVar1 = *(bool *)((longlong)this + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  Chaos::FWritePhysicsObjectInterface<1>::SetLinearImpulseVelocity
            (local_res8,&local_18,(TVector<double> *)((longlong)this + 0x10),bVar1);
  return;
}

// operator() @ 143d976e0

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::AddTorque'::__l35::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FWritePhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  local_18.DataPtr = *(FPhysicsObject ***)this;
  iVar3 = *(int *)((longlong)this + 8);
  bVar1 = *(bool *)((longlong)this + 0x29);
  bVar2 = *(bool *)((longlong)this + 0x28);
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar3;
  Chaos::FWritePhysicsObjectInterface<1>::AddTorque
            (local_res8,&local_18,(TVector<double> *)((longlong)this + 0x10),bVar2,bVar1);
  return;
}

// operator() @ 143d97790

void __thiscall
`Chaos::FWritePhysicsObjectInterface<0>::AddConnectivityEdgesBetween'::__l11::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  int iVar2;
  FPhysicsObject **ppFVar3;
  FPhysicsObject **ppFVar4;
  code *pcVar5;
  bool bVar6;
  FWritePhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_28;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  ppFVar3 = *(FPhysicsObject ***)((longlong)this + 0x10);
  iVar1 = *(int *)((longlong)this + 0x18);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ppFVar4 = *(FPhysicsObject ***)this;
  iVar2 = *(int *)((longlong)this + 8);
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = ppFVar3;
  local_18.DataPtr = ppFVar4;
  Chaos::FWritePhysicsObjectInterface<1>::AddConnectivityEdgesBetween
            (local_res8,&local_18,&local_28,(FClusterCreationParameters *)((longlong)this + 0x20));
  return;
}

// AddConnectivityEdgesBetween @ 143d986f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddConnectivityEdgesBetween
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_2,FClusterCreationParameters *param_3
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPhysicsObject **ppFVar3;
  IPhysicsProxyBase *pIVar4;
  longlong lVar5;
  code *pcVar6;
  FPhysicsSolverBase *pFVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FPhysicsObject **ppFVar11;
  ulonglong uVar12;
  FPhysicsSolverBase *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ForElementType<unsigned_int> FVar23;
  undefined1 auStackY_228 [32];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1f8;
  uint local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined4 local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_198;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  FPhysicsObject **local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FPhysicsObject **local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_108;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_f8;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar9 = param_1->ArrayNum;
  if (iVar9 == 0) {
    return;
  }
  iVar2 = param_2->ArrayNum;
  if (iVar2 == 0) {
    return;
  }
  ppFVar3 = param_1->DataPtr;
  pFVar7 = (FPhysicsSolverBase *)0x0;
  for (ppFVar11 = ppFVar3; ppFVar11 != ppFVar3 + iVar9; ppFVar11 = ppFVar11 + 1) {
    pFVar13 = pFVar7;
    if (*ppFVar11 != (FPhysicsObject *)0x0) {
      pIVar4 = (*ppFVar11)->Proxy;
      if (pIVar4 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      pFVar13 = pIVar4->Solver;
      if (pFVar13 == (FPhysicsSolverBase *)0x0) {
        return;
      }
      if ((pFVar7 != (FPhysicsSolverBase *)0x0) &&
         (bVar8 = pFVar13 != pFVar7, pFVar13 = pFVar7, bVar8)) {
        return;
      }
    }
    pFVar7 = pFVar13;
  }
  if (pFVar7 == (FPhysicsSolverBase *)0x0) {
    return;
  }
  uVar18 = iVar9 + iVar2;
  lVar5 = *(longlong *)&pFVar7[3].bSolverHasFrozenGameThreadCallbacks;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
  }
  local_108._12_4_ = uStack_11c;
  local_108.ArrayNum = iVar9;
  local_128 = ppFVar3;
  iStack_120 = iVar9;
  local_108.DataPtr = ppFVar3;
  FReadPhysicsObjectInterface<1>::GetAllRigidParticles
            ((FReadPhysicsObjectInterface<1> *)this,&local_198,&local_108,false);
  local_118 = param_2->DataPtr;
  local_f8._12_4_ = uStack_10c;
  local_f8.ArrayNum = iVar2;
  iStack_110 = iVar2;
  local_f8.DataPtr = local_118;
  FReadPhysicsObjectInterface<1>::GetAllRigidParticles
            ((FReadPhysicsObjectInterface<1> *)this,&local_1a8,&local_f8,false);
  lVar14 = (longlong)local_198.ArrayNum;
  if (local_198.ArrayNum != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_198.ArrayNum,&local_1f8.AllocatorInstance,&local_1f8.ArrayNum,
                       &local_1f8.ArrayMax);
    memcpy(local_1f8.AllocatorInstance.Data + (longlong)iVar9 * 8,local_198.AllocatorInstance.Data,
           lVar14 << 3);
  }
  lVar14 = (longlong)local_1a8.ArrayNum;
  if (local_1a8.ArrayNum != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_1a8.ArrayNum,&local_1f8.AllocatorInstance,&local_1f8.ArrayNum,
                       &local_1f8.ArrayMax);
    memcpy(local_1f8.AllocatorInstance.Data + (longlong)iVar9 * 8,local_1a8.AllocatorInstance.Data,
           lVar14 << 3);
  }
  FVar15.Data = local_198.AllocatorInstance.Data;
  if ((local_198.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = 0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (local_198.ArrayNum != 0) {
    if (local_198.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)local_198.ArrayNum);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,local_198.ArrayNum);
    uVar18 = 1;
    if (3 < (uint)local_198.ArrayNum) {
      uVar20 = (ulonglong)(((uint)local_198.ArrayNum >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_188 = (undefined4)lVar14;
      uVar18 = 1 << ((byte)lVar14 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar18)) {
      local_50 = uVar18;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar18 != 0) {
        uVar17 = uVar18;
        if (uVar18 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_143d989d7;
          }
        }
        else {
LAB_143d989d7:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar21 = (ulonglong)uVar18;
          uVar20 = uVar12;
          do {
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar10 = (longlong)(int)uVar18 - 1U & uVar20;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(FVar16.Data + uVar10 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_1e8 = 0;
        uStack_1e4 = 1;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        uVar20 = uVar12;
        if (local_70 != 0) {
          FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_78;
          }
          uVar18 = *(uint *)FVar23;
          uVar21 = uVar12;
          while (uVar18 == 0) {
            uStack_1d0 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uStack_1d0;
            iVar9 = (int)uVar20;
            local_1e8 = iVar9 + 1;
            uVar20 = (ulonglong)local_1e8;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1e8)
            goto LAB_143d98b02;
            uVar18 = ((uint *)((longlong)FVar23 + 4))[iVar9];
          }
          uStack_1e4 = -uVar18 & uVar18;
          uVar20 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_184 = (int)lVar14;
          uStack_1d4 = (uStack_1d0 - 1) + local_184;
          uVar20 = (ulonglong)uStack_1d4;
          if ((int)local_70 < (int)uStack_1d4) {
LAB_143d98b02:
            uVar20 = (ulonglong)local_70;
            uStack_1d4 = local_70;
          }
        }
        local_1d8 = 0xffffffff;
        local_178 = (longlong *)local_98;
        local_170._padding_ = CONCAT44(uStack_1e4,local_1e8);
        local_170.CurrentBitIndex = uStack_1d4;
        local_170.UnvisitedBitMask = 0xffffffff;
        local_170._28_4_ = uStack_1cc;
        local_170.BaseBitIndex = uStack_1d0;
        local_170.Array = pTStack_1e0;
        if ((int)uVar20 < (int)local_70) {
          do {
            puVar22 = (ulonglong *)((longlong)(int)uVar20 * 0x10 + *local_178);
            uVar18 = ((uint)(*puVar22 >> 0x14) & 0xffff ^ (uint)(*puVar22 >> 4)) * -0x7a143595;
            uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            uVar18 = (uVar18 >> 0x10 ^ uVar18) & local_50 - 1;
            *(uint *)((longlong)puVar22 + 0xc) = uVar18;
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar16.Data + uVar21 * 4);
            *(int *)(FVar16.Data + uVar21 * 4) = (int)uVar20;
            local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
            uVar20 = (ulonglong)(uint)local_170.CurrentBitIndex;
          } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
        }
      }
    }
  }
  pFVar1 = FVar15.Data + (longlong)local_198.ArrayNum * 8;
  FVar16.Data = local_1a8.AllocatorInstance.Data;
  uVar18 = local_1a8.ArrayNum;
  for (; local_1a8.AllocatorInstance.Data = FVar16.Data, FVar15.Data != pFVar1;
      FVar15.Data = FVar15.Data + 8) {
    local_1a8.ArrayNum = uVar18;
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)local_180,(bool *)FVar15.Data)
    ;
    FVar16.Data = local_1a8.AllocatorInstance.Data;
    uVar18 = local_1a8.ArrayNum;
  }
  if (((int)uVar18 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (uVar18 == 0) goto LAB_143d98eb9;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar18);
  uVar17 = 1;
  if (3 < uVar18) {
    uVar20 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar17 <= (int)local_a0)) goto LAB_143d98eb9;
  local_a0 = uVar17;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar17 != 0) {
    uVar19 = uVar17;
    if (uVar17 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_143d98ce6;
      }
    }
    else {
LAB_143d98ce6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar19,4);
    }
    if (0 < (int)uVar17) {
      uVar21 = (ulonglong)uVar17;
      uVar20 = uVar12;
      do {
        FVar15.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_a8.Data;
        }
        uVar10 = uVar20 & (longlong)(int)uVar17 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar15.Data + uVar10 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_1c8 = 0;
    uStack_1c4 = 1;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    if (local_c0 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_c8;
      }
      uVar17 = *(uint *)FVar23;
      uVar20 = uVar12;
      while (uVar17 == 0) {
        uStack_1b0 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_1b0;
        iVar9 = (int)uVar12;
        local_1c8 = iVar9 + 1;
        uVar12 = (ulonglong)local_1c8;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_143d98def;
        uVar17 = ((uint *)((longlong)FVar23 + 4))[iVar9];
      }
      uStack_1c4 = -uVar17 & uVar17;
      uVar12 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_1b4 = (uStack_1b0 - 1) + (int)lVar14;
      uVar12 = (ulonglong)uStack_1b4;
      if ((int)local_c0 < (int)uStack_1b4) {
LAB_143d98def:
        uVar12 = (ulonglong)local_c0;
        uStack_1b4 = local_c0;
      }
    }
    local_1b8 = 0xffffffff;
    local_150 = (longlong *)local_e8;
    local_148._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_148.CurrentBitIndex = uStack_1b4;
    local_148.UnvisitedBitMask = 0xffffffff;
    local_148._28_4_ = uStack_1ac;
    local_148.BaseBitIndex = uStack_1b0;
    local_148.Array = pTStack_1c0;
    if ((int)uVar12 < (int)local_c0) {
      do {
        puVar22 = (ulonglong *)((longlong)(int)uVar12 * 0x10 + *local_150);
        uVar17 = ((uint)(*puVar22 >> 0x14) & 0xffff ^ (uint)(*puVar22 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_a0 - 1;
        *(uint *)((longlong)puVar22 + 0xc) = uVar17;
        FVar15.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_a8.Data;
        }
        uVar20 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar15.Data + uVar20 * 4);
        *(int *)(FVar15.Data + uVar20 * 4) = (int)uVar12;
        local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
        uVar12 = (ulonglong)(uint)local_148.CurrentBitIndex;
      } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
    }
  }
LAB_143d98eb9:
  pFVar1 = FVar16.Data + (longlong)(int)uVar18 * 8;
  for (; FVar16.Data != pFVar1; FVar16.Data = FVar16.Data + 8) {
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_e8,(TPBDRigidParticleHandleImp<double,3,1> **)(local_180 + 4),
               (bool *)FVar16.Data);
  }
  FRigidClustering::GenerateConnectionGraph
            ((FRigidClustering *)(lVar5 + 0x548),&local_1f8,param_3,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_98,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_e8);
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  iVar9 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = -1;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar9 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  return;
}

// AddConnectivityEdgesBetween @ 143d990d0

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddConnectivityEdgesBetween
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_2,FClusterCreationParameters *param_3
          )

{
  int iVar1;
  int iVar2;
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar3;
  FPhysicsSolverBase *this_00;
  FPhysicsObject **ppFVar4;
  FPhysicsSolverBase *pFVar5;
  bool bVar6;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  <lambda_1> local_98;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar2 = param_2->ArrayNum;
    if (iVar2 != 0) {
      _Src = param_1->DataPtr;
      this_00 = (FPhysicsSolverBase *)0x0;
      for (ppFVar4 = _Src; ppFVar4 != _Src + iVar1; ppFVar4 = ppFVar4 + 1) {
        pFVar5 = this_00;
        if (*ppFVar4 != (FPhysicsObject *)0x0) {
          pIVar3 = (*ppFVar4)->Proxy;
          if (pIVar3 == (IPhysicsProxyBase *)0x0) {
            return;
          }
          pFVar5 = pIVar3->Solver;
          if (pFVar5 == (FPhysicsSolverBase *)0x0) {
            return;
          }
          if ((this_00 != (FPhysicsSolverBase *)0x0) &&
             (bVar6 = pFVar5 != this_00, pFVar5 = this_00, bVar6)) {
            return;
          }
        }
        this_00 = pFVar5;
      }
      if (this_00 != (FPhysicsSolverBase *)0x0) {
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_a0._0_4_ = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&local_a8,iVar1,(int *)((longlong)&local_a0 + 4));
        memcpy(local_a8.Data,_Src,(longlong)iVar1 * 8);
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0._0_4_ = iVar2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,&local_b8,iVar2,(int *)((longlong)&local_b0 + 4));
        memcpy(local_b8.Data,param_2->DataPtr,(longlong)iVar2 << 3);
        local_98.Parameters.CoillisionThicknessPercent = param_3->CoillisionThicknessPercent;
        local_98.Parameters.MaxNumConnections = param_3->MaxNumConnections;
        local_98.Parameters.bCleanCollisionParticles = param_3->bCleanCollisionParticles;
        local_98.Parameters.bCopyCollisionParticles = param_3->bCopyCollisionParticles;
        local_98.Parameters.bGenerateConnectionGraph = param_3->bGenerateConnectionGraph;
        local_98.Parameters._15_1_ = param_3->field_0xf;
        local_98.FromObjects.AllocatorInstance.Data = local_a8.Data;
        local_98.Parameters.ConnectionMethod = param_3->ConnectionMethod;
        local_98.Parameters._20_4_ = *(undefined4 *)&param_3->field_0x14;
        local_98.Parameters.ConnectionGraphBoundsFilteringMargin =
             param_3->ConnectionGraphBoundsFilteringMargin;
        local_98.FromObjects.ArrayNum = (int)local_a0;
        local_98.FromObjects.ArrayMax = local_a0._4_4_;
        local_98.ToObjects.AllocatorInstance.Data = local_b8.Data;
        local_98.Parameters.CollisionParticles = param_3->CollisionParticles;
        local_98.Parameters.ClusterParticleHandle = param_3->ClusterParticleHandle;
        local_98.ToObjects.ArrayNum = (int)local_b0;
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_98.Parameters.Scale._16_8_ = *(undefined8 *)&(param_3->Scale).field_0x10;
        local_98.Parameters.bIsAnchored = param_3->bIsAnchored;
        local_98.Parameters.bEnableStrainOnCollision = param_3->bEnableStrainOnCollision;
        local_98.Parameters._74_6_ = *(undefined6 *)&param_3->field_0x4a;
        local_a0 = 0;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_98.Parameters.Scale._0_8_ = *(undefined8 *)&param_3->Scale;
        local_98.Parameters.Scale._8_8_ = *(undefined8 *)&(param_3->Scale).field_0x8;
        local_98.ToObjects.ArrayMax = local_b0._4_4_;
        local_b0 = 0;
        FPhysicsSolverBase::
        EnqueueCommandImmediate<_Chaos::FWritePhysicsObjectInterface<0>::AddConnectivityEdgesBetween_::__l11::<lambda_1>_>
                  (this_00,&local_98);
        if (local_98.ToObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.ToObjects.AllocatorInstance.Data);
        }
        if (local_98.FromObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FromObjects.AllocatorInstance.Data);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data);
        }
      }
    }
  }
  return;
}

// AddForce @ 143d99d10

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddForce
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  FPhysicsObject *pFVar9;
  FGeometryCollectionPhysicsProxy *pFVar10;
  FPBDRigidsEvolutionBase *this_00;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  EObjectStateType EVar15;
  bool bVar16;
  uint uVar17;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar18;
  double *pdVar19;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar20;
  longlong lVar21;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  FPhysicsObject **ppFVar22;
  
  ppFVar22 = param_1->DataPtr;
  ppFVar1 = ppFVar22 + param_1->ArrayNum;
  do {
    if (ppFVar22 == ppFVar1) {
      return;
    }
    pFVar9 = *ppFVar22;
    if ((pFVar9 != (FPhysicsObject *)0x0) &&
       (pFVar10 = (FGeometryCollectionPhysicsProxy *)pFVar9->Proxy,
       pFVar10 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar7 = *(int *)&pFVar10->field_0x1c;
      if (iVar7 == 2) {
        pTVar18 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (pFVar10,pFVar9->BodyIndex);
      }
      else if (iVar7 == 0xb) {
        pTVar18 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar10->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar7 != 0xc) goto LAB_143d99f64;
        pTVar18 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar10->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar18 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar18->field_0xc) {
          this_01 = pTVar18;
        }
        if ((this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           ((EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
            EVar15 == Sleeping ||
            (EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
            EVar15 == Dynamic)))) {
          if ((param_3) &&
             (pFVar10 = (FGeometryCollectionPhysicsProxy *)pFVar9->Proxy,
             pFVar10 != (FGeometryCollectionPhysicsProxy *)0x0)) {
            iVar7 = *(int *)&pFVar10->field_0x1c;
            if (iVar7 == 2) {
              pTVar18 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                                  (pFVar10,pFVar9->BodyIndex);
            }
            else if (iVar7 == 0xb) {
              pTVar18 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(pFVar10->Parameters).Name.Data.ArrayNum;
            }
            else {
              if (iVar7 != 0xc) goto LAB_143d99e4c;
              pTVar18 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(pFVar10->Parameters).InitializationCommands.ArrayNum;
            }
            if (pTVar18 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar18->field_0xc) {
                pTVar20 = pTVar18;
              }
              if (((pTVar20 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                  (*(longlong *)&pFVar10->field_0x8 != 0)) &&
                 (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&pFVar10->field_0x8 + 0xbd0),
                 this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
                FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar20,Dynamic);
              }
            }
          }
LAB_143d99e4c:
          uVar8 = *(uint *)&this_01->field_0x8;
          lVar21 = (longlong)(int)uVar8;
          lVar11 = *(longlong *)this_01;
          dVar2 = (param_2->field0_0x0)._s_0.Z;
          dVar13 = (param_2->field0_0x0)._s_0.X;
          dVar14 = (param_2->field0_0x0)._s_0.Y;
          uVar17 = 0;
          if ((int)uVar8 < *(int *)(lVar11 + 0x328)) {
            uVar17 = ~uVar8 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar11 = *(longlong *)(lVar11 + 800);
          pdVar19 = TPBDRigidParticleHandleImp<double,3,1>::InvM(this_01);
          dVar3 = *pdVar19;
          dVar4 = *(double *)(lVar11 + 0x10 + lVar21 * 0x18);
          dVar5 = *(double *)(lVar11 + 8 + lVar21 * 0x18);
          dVar6 = *(double *)(lVar11 + lVar21 * 0x18);
          uVar8 = *(uint *)&this_01->field_0x8;
          lVar21 = (longlong)(int)uVar8;
          lVar11 = *(longlong *)this_01;
          uVar17 = 0;
          if ((int)uVar8 < *(int *)(lVar11 + 0x328)) {
            uVar17 = ~uVar8 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar11 = *(longlong *)(lVar11 + 800);
          *(double *)(lVar11 + lVar21 * 0x18) = dVar3 * dVar13 + dVar6;
          *(double *)(lVar11 + 8 + lVar21 * 0x18) = dVar3 * dVar14 + dVar5;
          *(double *)(lVar11 + 0x10 + lVar21 * 0x18) = dVar3 * dVar2 + dVar4;
        }
      }
    }
LAB_143d99f64:
    ppFVar22 = ppFVar22 + 1;
  } while( true );
}

// AddForce @ 143d99fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddForce
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  EObjectStateType EVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar6;
  code *pcVar7;
  FPhysicsObject **ppFVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TPBDRigidParticle<double,3> *pTVar12;
  FPhysicsSolverBase *pFVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  FPhysicsSolverBase *pFVar16;
  FPhysicsObject **ppFVar17;
  ForAnyElementType FVar18;
  int iVar19;
  undefined4 uVar20;
  FPhysicsSolverBase *pFVar21;
  FPhysicsSolverBase *pFVar22;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  TVector<double> *local_e0;
  undefined4 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  FPhysicsSolverBase *local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  ppFVar17 = param_1->DataPtr;
  pFVar21 = (FPhysicsSolverBase *)0x0;
  uVar20 = 0;
  local_d8 = 0;
  ppFVar8 = ppFVar17 + param_1->ArrayNum;
  do {
    local_e0 = param_2;
    if (ppFVar17 == ppFVar8) {
      ppFVar8 = param_1->DataPtr;
      if (param_1->ArrayNum != 0) {
        if ((param_1->ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*ppFVar8 != (FPhysicsObject *)0x0) {
          pIVar6 = (*ppFVar8)->Proxy;
          pFVar22 = pFVar21;
          if (pIVar6 != (IPhysicsProxyBase *)0x0) {
            pFVar22 = pIVar6->Solver;
          }
          if (pFVar22 != (FPhysicsSolverBase *)0x0) {
            iVar19 = param_1->ArrayNum;
            local_f0.Data = (FScriptContainerElement *)0x0;
            FVar18.Data = (FScriptContainerElement *)pFVar21;
            if (iVar19 != 0) {
              local_e8._0_4_ = iVar19;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar19,0,&local_f0,iVar19,(int *)((longlong)&local_e8 + 4));
              memcpy(local_f0.Data,param_1->DataPtr,(longlong)iVar19 << 3);
              FVar18.Data = local_f0.Data;
              iVar19 = (int)local_e8;
              uVar20 = local_e8._4_4_;
            }
            dVar9 = (param_2->field0_0x0)._s_0.X;
            dVar10 = (param_2->field0_0x0)._s_0.Y;
            local_f0.Data = (FScriptContainerElement *)0x0;
            dVar3 = (param_2->field0_0x0)._s_0.Z;
            local_e8 = 0;
            local_a8 = dVar9;
            dStack_a0 = dVar10;
            local_98 = dVar3;
            if (((CVars::bEnableAsyncInitBody == false) && (bVar11 = IsInGameThread(), !bVar11)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                    ,0x1b3,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar13 = ::operator_new(0xc0);
            pFVar16 = pFVar21;
            if (pFVar13 != (FPhysicsSolverBase *)0x0) {
              local_88 = (FPhysicsSolverBase *)0x0;
              puVar14 = FMemory::Malloc(0x38,8);
              puVar14[1] = FVar18.Data;
              *puVar14 = &
                         ___7__TFunction_OwnedObject_V<lambda_1>__BL___AddForce___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__AEBU__TVector_N_Math_UE___N_Z__00_00_Function_Private_Core_UE__6B_
              ;
              *(int *)(puVar14 + 2) = iVar19;
              *(undefined4 *)((longlong)puVar14 + 0x14) = uVar20;
              puVar14[3] = dVar9;
              puVar14[4] = dVar10;
              *(bool *)(puVar14 + 6) = param_3;
              puVar14[5] = dVar3;
              if (puVar14 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_88 = (FPhysicsSolverBase *)
                           UE::Core::Private::Function::
                           TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddForce'::__l27::<lambda_1>,void>
                           ::Call;
              }
              pFVar13->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
              *(undefined2 *)&pFVar13->_padding_ = 0;
              pFVar13->_padding_ = 0;
              pFVar13->_padding_ = 0;
              pFVar13->_padding_ = 0;
              pFVar13->_padding_ = 0;
              *(undefined2 *)&pFVar13->_padding_ = 1;
              pFVar13->_padding_ = (longlong)local_88;
              pFVar13->_padding_ = (longlong)puVar14;
              local_60 = (longlong *)0x0;
              pFVar13->_padding_ = local_78;
              pFVar13->_padding_ = lStack_70;
              pFVar13->_padding_ = local_68;
              if (pFVar13->_padding_ != 0) {
                local_88 = pFVar21;
              }
              pFVar13->_padding_ = 0;
              (pFVar13->MarshallingManager).SimTime_External = (atomic<double>)0x0;
              *(undefined1 *)&(pFVar13->MarshallingManager).InternalStep_External = 0;
              *(undefined4 *)&(pFVar13->MarshallingManager).field_0x1c = 0xffffffff;
              if (pFVar13->_padding_ == 0) {
                `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
                operator()(local_f8);
              }
              pFVar16 = pFVar13;
              FVar18.Data = (FScriptContainerElement *)pFVar21;
              pFVar21 = (FPhysicsSolverBase *)&DAT_00000001;
            }
            if ((pFVar21 != (FPhysicsSolverBase *)0x0) && (local_88 != (FPhysicsSolverBase *)0x0)) {
              plVar15 = &local_78;
              if (local_60 != (longlong *)0x0) {
                plVar15 = local_60;
              }
              (**(code **)(*plVar15 + 0x10))();
            }
            FChaosMarshallingManager::RegisterSimCommand_External
                      (&pFVar22->MarshallingManager,(FSimCallbackCommandObject *)pFVar16);
            if ((FPhysicsSolverBase *)FVar18.Data != (FPhysicsSolverBase *)0x0) {
              FMemory::Free(FVar18.Data);
            }
            if (local_f0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data);
            }
          }
        }
      }
      return;
    }
    pFVar5 = *ppFVar17;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar19 = *(int *)&this_00->field_0x1c;
      if (iVar19 == 2) {
        pTVar12 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                            (this_00,pFVar5->BodyIndex);
      }
      else if (iVar19 == 0xb) {
        pTVar12 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar19 != 0xc) goto LAB_143d9a153;
        pTVar12 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (((pTVar12 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)pTVar12->field_0x98)) &&
         ((EVar4 = (pTVar12->MMiscData).Property.MObjectState, EVar4 == Sleeping ||
          (EVar4 == Dynamic)))) {
        if (param_3) {
          ::`anonymous_namespace'::SetParticleStateHelper<0>(pFVar5,Dynamic);
        }
        dVar3 = (pTVar12->MMassProps).Property.MInvM;
        fVar1 = *(float *)&(pTVar12->MDynamics).Property.MAcceleration.field_0x4;
        pIVar6 = *(IPhysicsProxyBase **)&pTVar12->field_0x10;
        local_c0 = (local_e0->field0_0x0)._s_0.Z;
        local_d0 = (local_e0->field0_0x0)._s_0.X;
        dStack_c8 = (local_e0->field0_0x0)._s_0.Y;
        fVar2 = *(float *)&(pTVar12->MDynamics).Property.MAcceleration.field_0x8;
        *(float *)&(pTVar12->MDynamics).Property.MAcceleration =
             (float)(local_d0 * dVar3 +
                    (double)*(float *)&(pTVar12->MDynamics).Property.MAcceleration);
        *(float *)&(pTVar12->MDynamics).Property.MAcceleration.field_0x4 =
             (float)(dStack_c8 * dVar3 + (double)fVar1);
        *(float *)&(pTVar12->MDynamics).Property.MAcceleration.field_0x8 =
             (float)(local_c0 * dVar3 + (double)fVar2);
        if (((param_3) &&
            (*(uint *)&pTVar12->field_0x9c = *(uint *)&pTVar12->field_0x9c | 4,
            pIVar6 != (IPhysicsProxyBase *)0x0)) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
        }
      }
    }
LAB_143d9a153:
    ppFVar17 = ppFVar17 + 1;
    param_2 = local_e0;
  } while( true );
}

// AddRadialImpulse @ 143d9a430

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          float param_3,float param_4,ERadialImpulseFalloff param_5,bool param_6,bool param_7,
          bool param_8)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  FPBDRigidsSolver *this_00;
  FPhysicsObject **ppFVar2;
  FPBDRigidsSolver *pFVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType local_78;
  undefined8 local_70;
  <lambda_1> local_68;
  
  _Src = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->ArrayNum;
  ppFVar2 = _Src;
  this_00 = (FPBDRigidsSolver *)0x0;
  do {
    if (ppFVar2 == _Src + iVar4) {
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        local_78.Data = (FScriptContainerElement *)0x0;
        if (iVar4 == 0) {
          local_68.InObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.InObjects.ArrayMax = 0;
          local_68.InObjects.ArrayNum = iVar4;
        }
        else {
          local_70._0_4_ = iVar4;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,0,&local_78,iVar4,(int *)((longlong)&local_70 + 4));
          memcpy(local_78.Data,_Src,(longlong)iVar4 * 8);
          local_68.InObjects.AllocatorInstance.Data = local_78.Data;
          local_68.InObjects.ArrayMax = local_70._4_4_;
          local_68.InObjects.ArrayNum = (int)local_70;
        }
        local_68.Origin.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_68.Origin.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_68.Origin.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_68.Falloff = param_5;
        local_68.bApplyStrain = param_6;
        local_68.bInvalidate = param_7;
        local_68.bVelChange = param_8;
        local_68.Strength = param_4;
        local_78.Data = (FScriptContainerElement *)0x0;
        local_70 = 0;
        local_68.Strain = -1.0;
        local_68.MinValue = 0.0;
        local_68.MaxValue = 1.0;
        local_68.RigidSolver = this_00;
        local_68.Radius = param_3;
        FPhysicsSolverBase::
        EnqueueCommandImmediate<_Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse_::__l5::<lambda_1>_>
                  ((FPhysicsSolverBase *)this_00,&local_68);
        if (local_68.InObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.InObjects.AllocatorInstance.Data);
        }
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
      }
      return;
    }
    pFVar3 = this_00;
    if (*ppFVar2 != (FPhysicsObject *)0x0) {
      pIVar1 = (*ppFVar2)->Proxy;
      if (pIVar1 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      pFVar3 = (FPBDRigidsSolver *)pIVar1->Solver;
      if (pFVar3 == (FPBDRigidsSolver *)0x0) {
        return;
      }
      if ((this_00 != (FPBDRigidsSolver *)0x0) &&
         (bVar5 = pFVar3 != this_00, pFVar3 = this_00, bVar5)) {
        return;
      }
    }
    ppFVar2 = ppFVar2 + 1;
    this_00 = pFVar3;
  } while( true );
}

// AddRadialImpulse @ 143d9a5e0

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          float param_3,float param_4,ERadialImpulseFalloff param_5,bool param_6,float param_7,
          bool param_8,bool param_9,float param_10,float param_11)

{
  int iVar1;
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar2;
  FPBDRigidsSolver *this_00;
  FPhysicsObject **ppFVar3;
  FPBDRigidsSolver *pFVar4;
  bool bVar5;
  ForAnyElementType local_78;
  undefined8 local_70;
  <lambda_1> local_68;
  
  _Src = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  ppFVar3 = _Src;
  this_00 = (FPBDRigidsSolver *)0x0;
  do {
    if (ppFVar3 == _Src + iVar1) {
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        local_78.Data = (FScriptContainerElement *)0x0;
        if (iVar1 == 0) {
          local_68.InObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.InObjects.ArrayMax = 0;
          local_68.InObjects.ArrayNum = iVar1;
        }
        else {
          local_70._0_4_ = iVar1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,0,&local_78,iVar1,(int *)((longlong)&local_70 + 4));
          memcpy(local_78.Data,_Src,(longlong)iVar1 * 8);
          local_68.InObjects.AllocatorInstance.Data = local_78.Data;
          local_68.InObjects.ArrayMax = local_70._4_4_;
          local_68.InObjects.ArrayNum = (int)local_70;
        }
        local_68.Origin.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_68.Origin.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_68.Origin.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_68.Falloff = param_5;
        local_68.Strength = param_4;
        local_68.bApplyStrain = param_6;
        local_68.Strain = param_7;
        local_68.bInvalidate = param_8;
        local_68.MinValue = param_10;
        local_68.MaxValue = param_11;
        local_78.Data = (FScriptContainerElement *)0x0;
        local_70 = 0;
        local_68.bVelChange = param_9;
        local_68.RigidSolver = this_00;
        local_68.Radius = param_3;
        FPhysicsSolverBase::
        EnqueueCommandImmediate<_Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse_::__l5::<lambda_1>_>
                  ((FPhysicsSolverBase *)this_00,&local_68);
        if (local_68.InObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.InObjects.AllocatorInstance.Data);
        }
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
      }
      return;
    }
    pFVar4 = this_00;
    if (*ppFVar3 != (FPhysicsObject *)0x0) {
      pIVar2 = (*ppFVar3)->Proxy;
      if (pIVar2 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      pFVar4 = (FPBDRigidsSolver *)pIVar2->Solver;
      if (pFVar4 == (FPBDRigidsSolver *)0x0) {
        return;
      }
      if ((this_00 != (FPBDRigidsSolver *)0x0) &&
         (bVar5 = pFVar4 != this_00, pFVar4 = this_00, bVar5)) {
        return;
      }
    }
    ppFVar3 = ppFVar3 + 1;
    this_00 = pFVar4;
  } while( true );
}

// AddRadialImpulse @ 143d9a790

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          float param_3,float param_4,ERadialImpulseFalloff param_5,bool param_6,bool param_7,
          bool param_8)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  FPBDRigidsSolver *this_00;
  FPhysicsObject **ppFVar2;
  FPBDRigidsSolver *pFVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType local_78;
  undefined8 local_70;
  <lambda_1> local_68;
  
  _Src = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->ArrayNum;
  ppFVar2 = _Src;
  this_00 = (FPBDRigidsSolver *)0x0;
  do {
    if (ppFVar2 == _Src + iVar4) {
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        local_78.Data = (FScriptContainerElement *)0x0;
        if (iVar4 == 0) {
          local_68.InObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.InObjects.ArrayMax = 0;
          local_68.InObjects.ArrayNum = iVar4;
        }
        else {
          local_70._0_4_ = iVar4;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,0,&local_78,iVar4,(int *)((longlong)&local_70 + 4));
          memcpy(local_78.Data,_Src,(longlong)iVar4 * 8);
          local_68.InObjects.AllocatorInstance.Data = local_78.Data;
          local_68.InObjects.ArrayMax = local_70._4_4_;
          local_68.InObjects.ArrayNum = (int)local_70;
        }
        local_68.Origin.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_68.Origin.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_68.Origin.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_68.Falloff = param_5;
        local_68.bApplyStrain = param_6;
        local_68.bInvalidate = param_7;
        local_68.bVelChange = param_8;
        local_68.Strength = param_4;
        local_78.Data = (FScriptContainerElement *)0x0;
        local_70 = 0;
        local_68.Strain = -1.0;
        local_68.MinValue = 0.0;
        local_68.MaxValue = 1.0;
        local_68.RigidSolver = this_00;
        local_68.Radius = param_3;
        FPhysicsSolverBase::
        EnqueueCommandImmediate<_Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse_::__l5::<lambda_1>_>
                  ((FPhysicsSolverBase *)this_00,&local_68);
        if (local_68.InObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.InObjects.AllocatorInstance.Data);
        }
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
      }
      return;
    }
    pFVar3 = this_00;
    if (*ppFVar2 != (FPhysicsObject *)0x0) {
      pIVar1 = (*ppFVar2)->Proxy;
      if (pIVar1 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      pFVar3 = (FPBDRigidsSolver *)pIVar1->Solver;
      if (pFVar3 == (FPBDRigidsSolver *)0x0) {
        return;
      }
      if ((this_00 != (FPBDRigidsSolver *)0x0) &&
         (bVar5 = pFVar3 != this_00, pFVar3 = this_00, bVar5)) {
        return;
      }
    }
    ppFVar2 = ppFVar2 + 1;
    this_00 = pFVar3;
  } while( true );
}

// AddRadialImpulse @ 143d9a940

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          float param_3,float param_4,ERadialImpulseFalloff param_5,bool param_6,float param_7,
          bool param_8,bool param_9,float param_10,float param_11)

{
  int iVar1;
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar2;
  FPBDRigidsSolver *this_00;
  FPhysicsObject **ppFVar3;
  FPBDRigidsSolver *pFVar4;
  bool bVar5;
  ForAnyElementType local_78;
  undefined8 local_70;
  <lambda_1> local_68;
  
  _Src = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  ppFVar3 = _Src;
  this_00 = (FPBDRigidsSolver *)0x0;
  do {
    if (ppFVar3 == _Src + iVar1) {
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        local_78.Data = (FScriptContainerElement *)0x0;
        if (iVar1 == 0) {
          local_68.InObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.InObjects.ArrayMax = 0;
          local_68.InObjects.ArrayNum = iVar1;
        }
        else {
          local_70._0_4_ = iVar1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,0,&local_78,iVar1,(int *)((longlong)&local_70 + 4));
          memcpy(local_78.Data,_Src,(longlong)iVar1 * 8);
          local_68.InObjects.AllocatorInstance.Data = local_78.Data;
          local_68.InObjects.ArrayMax = local_70._4_4_;
          local_68.InObjects.ArrayNum = (int)local_70;
        }
        local_68.Origin.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_68.Origin.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_68.Origin.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_68.Falloff = param_5;
        local_68.Strength = param_4;
        local_68.bApplyStrain = param_6;
        local_68.Strain = param_7;
        local_68.bInvalidate = param_8;
        local_68.MinValue = param_10;
        local_68.MaxValue = param_11;
        local_78.Data = (FScriptContainerElement *)0x0;
        local_70 = 0;
        local_68.bVelChange = param_9;
        local_68.RigidSolver = this_00;
        local_68.Radius = param_3;
        FPhysicsSolverBase::
        EnqueueCommandImmediate<_Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse_::__l5::<lambda_1>_>
                  ((FPhysicsSolverBase *)this_00,&local_68);
        if (local_68.InObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.InObjects.AllocatorInstance.Data);
        }
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
      }
      return;
    }
    pFVar4 = this_00;
    if (*ppFVar3 != (FPhysicsObject *)0x0) {
      pIVar2 = (*ppFVar3)->Proxy;
      if (pIVar2 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      pFVar4 = (FPBDRigidsSolver *)pIVar2->Solver;
      if (pFVar4 == (FPBDRigidsSolver *)0x0) {
        return;
      }
      if ((this_00 != (FPBDRigidsSolver *)0x0) &&
         (bVar5 = pFVar4 != this_00, pFVar4 = this_00, bVar5)) {
        return;
      }
    }
    ppFVar3 = ppFVar3 + 1;
    this_00 = pFVar4;
  } while( true );
}

// AddTorque @ 143d9aaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddTorque
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3,bool param_4)

{
  FPhysicsObject **ppFVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *pFVar6;
  FPBDRigidsEvolutionBase *this_00;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  EObjectStateType EVar21;
  bool bVar22;
  uint uVar23;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar24;
  TRotation<double,3> *pTVar25;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar26;
  TVector<double,3> *pTVar27;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  longlong lVar28;
  FPhysicsObject **ppFVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double local_268;
  double local_260;
  double local_258;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  double local_218;
  double local_208 [6];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  uVar20 = _UNK_15061cbc8;
  uVar19 = ___xmm_3ff00000000000000000000000000000;
  ppFVar29 = param_1->DataPtr;
  ppFVar1 = ppFVar29 + param_1->ArrayNum;
  do {
    if (ppFVar29 == ppFVar1) {
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] =
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      return;
    }
    pFVar5 = *ppFVar29;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (pFVar6 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       pFVar6 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&pFVar6->field_0x1c;
      if (iVar3 == 2) {
        pTVar24 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (pFVar6,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar24 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar6->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143d9b0a2;
        pTVar24 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(pFVar6->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar24 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar24->field_0xc) {
          this_01 = pTVar24;
        }
        if ((this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           ((EVar21 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
            EVar21 == Sleeping ||
            (EVar21 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
            EVar21 == Dynamic)))) {
          if ((param_3) &&
             (pFVar6 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
             pFVar6 != (FGeometryCollectionPhysicsProxy *)0x0)) {
            iVar3 = *(int *)&pFVar6->field_0x1c;
            if (iVar3 == 2) {
              pTVar24 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                                  (pFVar6,pFVar5->BodyIndex);
            }
            else if (iVar3 == 0xb) {
              pTVar24 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(pFVar6->Parameters).Name.Data.ArrayNum;
            }
            else {
              if (iVar3 != 0xc) goto LAB_143d9ac5b;
              pTVar24 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         &(pFVar6->Parameters).InitializationCommands.ArrayNum;
            }
            if (pTVar24 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar26 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar24->field_0xc) {
                pTVar26 = pTVar24;
              }
              if (((pTVar26 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                  (*(longlong *)&pFVar6->field_0x8 != 0)) &&
                 (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&pFVar6->field_0x8 + 0xbd0),
                 this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
                FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar26,Dynamic);
              }
            }
          }
LAB_143d9ac5b:
          if (param_4) {
            uVar4 = *(uint *)&this_01->field_0x8;
            lVar28 = (longlong)(int)uVar4;
            lVar7 = *(longlong *)this_01;
            uVar23 = 0;
            if ((int)uVar4 < *(int *)(lVar7 + 0x50)) {
              uVar23 = ~uVar4 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(lVar7 + 0x48);
            uVar2 = *(undefined8 *)(lVar7 + 8 + lVar28 * 0x10);
            dVar13 = (double)(float)uVar2;
            dVar14 = (double)(float)((ulonglong)uVar2 >> 0x20);
            dVar11 = (double)*(float *)(lVar7 + lVar28 * 0x10);
            dVar12 = (double)*(float *)(lVar7 + 4 + lVar28 * 0x10);
            pTVar25 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(this_01);
            uVar4 = *(uint *)&this_01->field_0x8;
            lVar28 = (longlong)(int)uVar4;
            lVar7 = *(longlong *)this_01;
            dVar15 = *(double *)&pTVar25->field_0x10;
            dVar16 = *(double *)&pTVar25->field_0x18;
            dVar17 = *(double *)pTVar25;
            dVar18 = *(double *)&pTVar25->field_0x8;
            dVar9 = dVar11 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar14 * dVar17 +
                    dVar12 * dVar15 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar13 * dVar18 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar10 = dVar11 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar14 * dVar18 +
                     dVar12 * dVar16 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar13 * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar30 = SUB84(dVar10,0);
            uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
            local_248._8_4_ = uVar30;
            local_248._0_8_ = dVar9;
            local_248._12_4_ = uVar31;
            dVar10 = dVar11 * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar14 * dVar15 +
                     dVar12 * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar13 * dVar16 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar11 = dVar11 * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar14 * dVar16 +
                     dVar12 * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar13 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar32 = SUB84(dVar11,0);
            uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
            local_e8._8_4_ = uVar30;
            local_e8._0_8_ = dVar9;
            local_e8._12_4_ = uVar31;
            local_238._8_4_ = uVar32;
            local_238._0_8_ = dVar10;
            local_238._12_4_ = uVar33;
            local_d8._8_4_ = uVar32;
            local_d8._0_8_ = dVar10;
            local_d8._12_4_ = uVar33;
            uVar23 = 0;
            if ((int)uVar4 < *(int *)(lVar7 + 0x568)) {
              uVar23 = ~uVar4 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(lVar7 + 0x560);
            uVar2 = *(undefined8 *)(lVar7 + 8 + lVar28 * 0x10);
            dVar13 = (double)(float)uVar2;
            dVar14 = (double)(float)((ulonglong)uVar2 >> 0x20);
            dVar11 = (double)*(float *)(lVar7 + lVar28 * 0x10);
            dVar12 = (double)*(float *)(lVar7 + 4 + lVar28 * 0x10);
            pTVar25 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(this_01);
            uVar4 = *(uint *)&this_01->field_0x8;
            lVar28 = (longlong)(int)uVar4;
            lVar7 = *(longlong *)this_01;
            dVar15 = *(double *)&pTVar25->field_0x10;
            dVar16 = *(double *)&pTVar25->field_0x18;
            dVar17 = *(double *)pTVar25;
            dVar18 = *(double *)&pTVar25->field_0x8;
            dVar9 = dVar11 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar17 * dVar14 +
                    dVar15 * dVar12 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar13 * dVar18 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar10 = dVar11 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar18 * dVar14 +
                     dVar16 * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar13 * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar30 = SUB84(dVar10,0);
            uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
            local_248._8_4_ = uVar30;
            local_248._0_8_ = dVar9;
            local_248._12_4_ = uVar31;
            dVar10 = dVar11 * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar15 * dVar14 +
                     dVar17 * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar13 * dVar16 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar11 = dVar11 * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar16 * dVar14 +
                     dVar18 * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar13 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar32 = SUB84(dVar11,0);
            uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
            local_c8._8_4_ = uVar30;
            local_c8._0_8_ = dVar9;
            local_c8._12_4_ = uVar31;
            local_238._8_4_ = uVar32;
            local_238._0_8_ = dVar10;
            local_238._12_4_ = uVar33;
            local_b8._8_4_ = uVar32;
            local_b8._0_8_ = dVar10;
            local_b8._12_4_ = uVar33;
            uVar23 = 0;
            if ((int)uVar4 < *(int *)(lVar7 + 0x388)) {
              uVar23 = ~uVar4 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(lVar7 + 0x380);
            local_208[4] = 0.0;
            local_1c8 = 0;
            local_208[1] = 0.0;
            local_208[0] = (double)*(float *)(lVar7 + lVar28 * 0xc);
            local_1c0 = 0;
            local_208[5] = (double)*(float *)(lVar7 + 4 + lVar28 * 0xc);
            local_208[2] = 0.0;
            local_1b8 = (double)*(float *)(lVar7 + 8 + lVar28 * 0xc);
            local_1d8 = 0;
            local_208[3] = 0.0;
            local_1d0 = 0;
            local_1b0 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = uVar19;
            uStack_190 = uVar20;
            Utilities::ComputeWorldSpaceInertia
                      ((PMatrix<double,3,3> *)&local_168,(TRotation<double,3> *)local_248,
                       (PMatrix<double,3,3> *)local_208);
            local_188 = (param_2->field0_0x0)._s_0.X;
            dStack_180 = (param_2->field0_0x0)._s_0.Y;
            pTVar27 = (TVector<double,3> *)&local_268;
            local_178 = (param_2->field0_0x0)._s_0.Z;
            local_268 = local_160 * dStack_180 + local_168 * local_188 + local_158 * local_178;
            local_260 = local_140 * dStack_180 + local_148 * local_188 + local_138 * local_178;
            local_258 = local_120 * dStack_180 + local_128 * local_188 + local_178 * local_118;
          }
          else {
            local_228 = (param_2->field0_0x0)._s_0.X;
            dStack_220 = (param_2->field0_0x0)._s_0.Y;
            pTVar27 = (TVector<double,3> *)&local_228;
            local_218 = (param_2->field0_0x0)._s_0.Z;
          }
          TPBDRigidParticleHandleImp<double,3,1>::AddTorque(this_01,pTVar27,param_3);
        }
      }
    }
LAB_143d9b0a2:
    ppFVar29 = ppFVar29 + 1;
  } while( true );
}

// AddTorque @ 143d9b130

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::AddTorque
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AddTorque(this,&local_18,param_2,param_3,false);
  return;
}

// AddTorque @ 143d9b160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddTorque
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3,bool param_4)

{
  EObjectStateType EVar1;
  FPhysicsObject *pFVar2;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar3;
  FPhysicsObject **ppFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  TPBDRigidParticle<double,3> *this_01;
  FPhysicsSolverBase *pFVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  TVector<double,3> *pTVar22;
  FPhysicsSolverBase *pFVar23;
  FPhysicsSolverBase *pFVar24;
  FPhysicsSolverBase *pFVar25;
  int iVar26;
  longlong lVar27;
  FPhysicsSolverBase *pFVar28;
  FPhysicsObject **ppFVar29;
  ForAnyElementType FVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_308 [32];
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  TArrayView<Chaos::FPhysicsObject_*_const,int> *local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278 [6];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  FPhysicsSolverBase *local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  
  uVar17 = _UNK_15061cbc8;
  uVar16 = ___xmm_3ff00000000000000000000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  ppFVar29 = param_1->DataPtr;
  local_2c4 = 0;
  ppFVar4 = ppFVar29 + param_1->ArrayNum;
  local_2b0 = param_1;
  do {
    if (ppFVar29 == ppFVar4) {
      pFVar24 = (FPhysicsSolverBase *)0x0;
      ppFVar4 = local_2b0->DataPtr;
      if (local_2b0->ArrayNum != 0) {
        if ((local_2b0->ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*ppFVar4 != (FPhysicsObject *)0x0) {
          pIVar3 = (*ppFVar4)->Proxy;
          pFVar28 = pFVar24;
          if (pIVar3 != (IPhysicsProxyBase *)0x0) {
            pFVar28 = pIVar3->Solver;
          }
          if (pFVar28 != (FPhysicsSolverBase *)0x0) {
            local_2b8._0_4_ = local_2b0->ArrayNum;
            lVar27 = (longlong)(int)local_2b8;
            ppFVar4 = local_2b0->DataPtr;
            local_2c0.Data = (FScriptContainerElement *)0x0;
            if ((int)local_2b8 == 0) {
              local_2c4 = 0;
              FVar30.Data = (FScriptContainerElement *)pFVar24;
              iVar26 = (int)local_2b8;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)local_2b8,0,&local_2c0,(int)local_2b8,
                         (int *)((longlong)&local_2b8 + 4));
              memcpy(local_2c0.Data,ppFVar4,lVar27 << 3);
              local_2c4 = local_2b8._4_4_;
              FVar30.Data = local_2c0.Data;
              iVar26 = (int)local_2b8;
            }
            dVar7 = (param_2->field0_0x0)._s_0.X;
            dVar8 = (param_2->field0_0x0)._s_0.Y;
            local_2c0.Data = (FScriptContainerElement *)0x0;
            dVar6 = (param_2->field0_0x0)._s_0.Z;
            local_2b8 = 0;
            local_1b0 = dVar7;
            dStack_1a8 = dVar8;
            local_1a0 = dVar6;
            if (((CVars::bEnableAsyncInitBody == false) && (bVar18 = IsInGameThread(), !bVar18)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                    ,0x1b3,L""), bVar18)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar19 = ::operator_new(0xc0);
            pFVar23 = pFVar24;
            pFVar25 = pFVar24;
            if (pFVar19 != (FPhysicsSolverBase *)0x0) {
              local_e8 = (FPhysicsSolverBase *)0x0;
              puVar20 = FMemory::Malloc(0x38,8);
              puVar20[1] = FVar30.Data;
              *puVar20 = &
                         ___7__TFunction_OwnedObject_V<lambda_1>__CD___AddTorque___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__AEBU__TVector_N_Math_UE___N2_Z__00_00_Function_Private_Core_UE__6B_
              ;
              *(undefined4 *)((longlong)puVar20 + 0x14) = local_2c4;
              *(int *)(puVar20 + 2) = iVar26;
              puVar20[3] = dVar7;
              puVar20[4] = dVar8;
              *(bool *)((longlong)puVar20 + 0x31) = param_4;
              puVar20[5] = dVar6;
              *(bool *)(puVar20 + 6) = param_3;
              if (puVar20 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_e8 = (FPhysicsSolverBase *)
                           UE::Core::Private::Function::
                           TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddTorque'::__l35::<lambda_1>,void>
                           ::Call;
              }
              pFVar19->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
              *(undefined2 *)&pFVar19->_padding_ = 0;
              pFVar19->_padding_ = 0;
              pFVar19->_padding_ = 0;
              pFVar19->_padding_ = 0;
              pFVar19->_padding_ = 0;
              *(undefined2 *)&pFVar19->_padding_ = 1;
              pFVar19->_padding_ = (longlong)local_e8;
              pFVar19->_padding_ = (longlong)puVar20;
              local_c0 = (longlong *)0x0;
              pFVar19->_padding_ = local_d8;
              pFVar19->_padding_ = lStack_d0;
              pFVar19->_padding_ = local_c8;
              if (pFVar19->_padding_ != 0) {
                local_e8 = pFVar24;
              }
              lVar27 = pFVar19->_padding_;
              pFVar19->_padding_ = 0;
              (pFVar19->MarshallingManager).SimTime_External = (atomic<double>)0x0;
              *(undefined1 *)&(pFVar19->MarshallingManager).InternalStep_External = 0;
              *(undefined4 *)&(pFVar19->MarshallingManager).field_0x1c = 0xffffffff;
              if (lVar27 == 0) {
                `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
                operator()(local_2c8);
              }
              pFVar23 = pFVar19;
              pFVar25 = (FPhysicsSolverBase *)&DAT_00000001;
              FVar30.Data = (FScriptContainerElement *)pFVar24;
            }
            if ((pFVar25 != (FPhysicsSolverBase *)0x0) && (local_e8 != (FPhysicsSolverBase *)0x0)) {
              plVar21 = &local_d8;
              if (local_c0 != (longlong *)0x0) {
                plVar21 = local_c0;
              }
              (**(code **)(*plVar21 + 0x10))();
            }
            FChaosMarshallingManager::RegisterSimCommand_External
                      (&pFVar28->MarshallingManager,(FSimCallbackCommandObject *)pFVar23);
            if ((FPhysicsSolverBase *)FVar30.Data != (FPhysicsSolverBase *)0x0) {
              FMemory::Free(FVar30.Data);
            }
            if (local_2c0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data);
            }
          }
        }
      }
      return;
    }
    pFVar2 = *ppFVar29;
    if ((pFVar2 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar2->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar26 = *(int *)&this_00->field_0x1c;
      if (iVar26 == 2) {
        this_01 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                            (this_00,pFVar2->BodyIndex);
      }
      else if (iVar26 == 0xb) {
        this_01 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar26 != 0xc) goto LAB_143d9b4e8;
        this_01 = (TPBDRigidParticle<double,3> *)
                  (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (((this_01 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)this_01->field_0x98)) &&
         ((EVar1 = (this_01->MMiscData).Property.MObjectState, EVar1 == Sleeping ||
          (EVar1 == Dynamic)))) {
        if (param_3) {
          ::`anonymous_namespace'::SetParticleStateHelper<0>(pFVar2,Dynamic);
        }
        if (param_4) {
          dVar12 = *(double *)&(this_01->MMassProps).Property.MRotationOfMass.field_0x10;
          dVar13 = *(double *)&(this_01->MMassProps).Property.MRotationOfMass.field_0x18;
          dVar14 = *(double *)&(this_01->MMassProps).Property.MRotationOfMass;
          dVar15 = *(double *)&(this_01->MMassProps).Property.MRotationOfMass.field_0x8;
          dVar11 = (double)*(float *)&this_01->field_0x48;
          dVar9 = (double)*(float *)&this_01->field_0x44;
          dVar10 = (double)*(float *)&this_01->field_0x40;
          dVar6 = (double)*(float *)&this_01->field_0x4c;
          dVar7 = dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar6 * dVar14 +
                  dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar8 = dVar10 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                  + dVar6 * dVar15 +
                  dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          uVar31 = SUB84(dVar8,0);
          uVar32 = (undefined4)((ulonglong)dVar8 >> 0x20);
          local_278[0] = (double)*(float *)&(this_01->MMassProps).Property.MI;
          local_278[5] = (double)*(float *)&(this_01->MMassProps).Property.MI.field_0x4;
          local_228 = (double)*(float *)&(this_01->MMassProps).Property.MI.field_0x8;
          dVar8 = dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dVar6 * dVar12 +
                  dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar6 = dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar6 * dVar13 +
                  dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar11 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          uVar33 = SUB84(dVar6,0);
          uVar34 = (undefined4)((ulonglong)dVar6 >> 0x20);
          local_278[4] = 0.0;
          local_238 = 0;
          local_278[1] = 0.0;
          local_230 = 0;
          local_278[2] = 0.0;
          local_248 = 0;
          local_278[3] = 0.0;
          local_240 = 0;
          local_220 = 0;
          local_108._8_4_ = uVar31;
          local_108._0_8_ = dVar7;
          local_108._12_4_ = uVar32;
          local_f8._8_4_ = uVar33;
          local_f8._0_8_ = dVar8;
          local_f8._12_4_ = uVar34;
          local_1f8._8_4_ = uVar31;
          local_1f8._0_8_ = dVar7;
          local_1f8._12_4_ = uVar32;
          local_1e8._8_4_ = uVar33;
          local_1e8._0_8_ = dVar8;
          local_1e8._12_4_ = uVar34;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = uVar16;
          uStack_200 = uVar17;
          Utilities::ComputeWorldSpaceInertia
                    ((PMatrix<double,3,3> *)&local_188,(TRotation<double,3> *)local_1f8,
                     (PMatrix<double,3,3> *)local_278);
          local_1d8 = (param_2->field0_0x0)._s_0.X;
          dStack_1d0 = (param_2->field0_0x0)._s_0.Y;
          local_1c8 = (param_2->field0_0x0)._s_0.Z;
          pTVar22 = (TVector<double,3> *)&local_2a8;
          local_2a8 = local_180 * dStack_1d0 + local_188 * local_1d8 + local_178 * local_1c8;
          local_2a0 = local_160 * dStack_1d0 + local_168 * local_1d8 + local_158 * local_1c8;
          local_298 = local_140 * dStack_1d0 + local_148 * local_1d8 + local_1c8 * local_138;
        }
        else {
          local_290 = (param_2->field0_0x0)._s_0.X;
          dStack_288 = (param_2->field0_0x0)._s_0.Y;
          pTVar22 = (TVector<double,3> *)&local_290;
          local_280 = (param_2->field0_0x0)._s_0.Z;
        }
        TPBDRigidParticle<double,3>::AddTorque(this_01,pTVar22,param_3);
      }
    }
LAB_143d9b4e8:
    ppFVar29 = ppFVar29 + 1;
  } while( true );
}

// AddTorque @ 143d9b830

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::AddTorque
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AddTorque(this,&local_18,param_2,param_3,false);
  return;
}

// ForceKinematic @ 143da7140

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::ForceKinematic
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  FPBDRigidsEvolutionBase *this_00;
  EObjectStateType EVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPhysicsObject **ppFVar8;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar8;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&pFVar4->field_0x1c;
      if (iVar2 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (pFVar4,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143da72ab;
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
        if (pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0) {
          iVar2 = *(int *)&pFVar4->field_0x1c;
          if (iVar2 == 2) {
            pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                               (pFVar4,pFVar3->BodyIndex);
          }
          else if (iVar2 == 0xb) {
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).Name.Data.ArrayNum;
          }
          else {
            if (iVar2 != 0xc) goto LAB_143da7246;
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).InitializationCommands.ArrayNum;
          }
          if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar6->field_0xc) {
              pTVar7 = pTVar6;
            }
            if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (pTVar6->field_0xc != 0) {
                pTVar7 = pTVar6;
              }
              if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                EVar5 = Static;
              }
              else {
                pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                if (1 < (byte)pTVar7->field_0xc) {
                  pTVar6 = pTVar7;
                }
                if (pTVar6 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                  EVar5 = Kinematic;
                }
                else {
                  EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar6);
                }
              }
            }
            else {
              EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar7);
            }
            if (EVar5 == Kinematic) goto LAB_143da72ab;
          }
        }
LAB_143da7246:
        pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
        if (pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0) {
          iVar2 = *(int *)&pFVar4->field_0x1c;
          if (iVar2 == 2) {
            pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                               (pFVar4,pFVar3->BodyIndex);
          }
          else if (iVar2 == 0xb) {
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).Name.Data.ArrayNum;
          }
          else {
            if (iVar2 != 0xc) goto LAB_143da72ab;
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).InitializationCommands.ArrayNum;
          }
          if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar6->field_0xc) {
              pTVar7 = pTVar6;
            }
            if (((pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                (*(longlong *)&pFVar4->field_0x8 != 0)) &&
               (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&pFVar4->field_0x8 + 0xbd0),
               this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
              FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar7,Kinematic);
            }
          }
        }
      }
    }
LAB_143da72ab:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// ForceKinematic @ 143da72e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::ForceKinematic
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  EObjectStateType EVar6;
  FPhysicsObject **ppFVar7;
  
  ppFVar7 = param_1->DataPtr;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar7;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&pFVar4->field_0x1c;
      if (iVar2 == 2) {
        pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (pFVar4,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (pFVar4->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143da73b8;
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (pFVar4->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy;
        if (pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0) {
          iVar2 = *(int *)&pFVar4->field_0x1c;
          if (iVar2 == 2) {
            pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                               (pFVar4,pFVar3->BodyIndex);
          }
          else if (iVar2 == 0xb) {
            pTVar5 = (TPBDRigidParticle<double,3> *)
                     (pFVar4->Parameters).Name.Data.AllocatorInstance.Data;
          }
          else {
            if (iVar2 != 0xc) goto LAB_143da73ae;
            pTVar5 = (TPBDRigidParticle<double,3> *)
                     (pFVar4->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
          }
          if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
            if ((byte)pTVar5->field_0x98 < 2) {
              EVar6 = Kinematic;
              if (pTVar5->field_0x98 == 0) {
                EVar6 = Static;
              }
            }
            else {
              EVar6 = (pTVar5->MMiscData).Property.MObjectState;
            }
            if (EVar6 == Kinematic) goto LAB_143da73b8;
          }
        }
LAB_143da73ae:
        ::`anonymous_namespace'::SetParticleStateHelper<0>(pFVar3,Kinematic);
      }
    }
LAB_143da73b8:
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// PutToSleep @ 143db2a50

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::PutToSleep
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  FPBDRigidsEvolutionBase *this_00;
  EObjectStateType EVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPhysicsObject **ppFVar8;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar8;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&pFVar4->field_0x1c;
      if (iVar2 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (pFVar4,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143db2b85;
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar6->field_0xc) {
          pTVar7 = pTVar6;
        }
        if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar6->field_0xc != 0) {
            pTVar7 = pTVar6;
          }
          if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar5 = Static;
          }
          else {
            pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar7->field_0xc) {
              pTVar6 = pTVar7;
            }
            if (pTVar6 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar5 = Kinematic;
            }
            else {
              EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar6);
            }
          }
        }
        else {
          EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar7);
        }
        if (((EVar5 == Dynamic) || (EVar5 == Sleeping)) &&
           (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
           pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
          iVar2 = *(int *)&pFVar4->field_0x1c;
          if (iVar2 == 2) {
            pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                               (pFVar4,pFVar3->BodyIndex);
          }
          else if (iVar2 == 0xb) {
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).Name.Data.ArrayNum;
          }
          else {
            if (iVar2 != 0xc) goto LAB_143db2b85;
            pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                      &(pFVar4->Parameters).InitializationCommands.ArrayNum;
          }
          if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar6->field_0xc) {
              pTVar7 = pTVar6;
            }
            if (((pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                (*(longlong *)&pFVar4->field_0x8 != 0)) &&
               (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&pFVar4->field_0x8 + 0xbd0),
               this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
              FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar7,Sleeping);
            }
          }
        }
      }
    }
LAB_143db2b85:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// PutToSleep @ 143db2bb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::PutToSleep
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar4;
  EObjectStateType EVar5;
  FPhysicsObject **ppFVar6;
  
  ppFVar6 = param_1->DataPtr;
  ppFVar1 = ppFVar6 + param_1->ArrayNum;
  do {
    if (ppFVar6 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar6;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&this_00->field_0x1c;
      if (iVar2 == 2) {
        pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143db2c43;
        pTVar4 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar4 != (TPBDRigidParticle<double,3> *)0x0) {
        if ((byte)pTVar4->field_0x98 < 2) {
          EVar5 = Kinematic;
          if (pTVar4->field_0x98 == 0) {
            EVar5 = Static;
          }
        }
        else {
          EVar5 = (pTVar4->MMiscData).Property.MObjectState;
        }
        if ((EVar5 == Dynamic) || (EVar5 == Sleeping)) {
          ::`anonymous_namespace'::SetParticleStateHelper<0>(pFVar3,Sleeping);
        }
      }
    }
LAB_143db2c43:
    ppFVar6 = ppFVar6 + 1;
  } while( true );
}

// SetAngularEtherDrag @ 143db5840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetAngularEtherDrag
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,float param_2)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicsSolverBase *pFVar4;
  undefined8 *puVar5;
  FPhysicsObject **ppFVar6;
  longlong *plVar7;
  FPhysicsSolverBase *pFVar8;
  FPhysicsSolverBase *pFVar9;
  undefined4 uVar10;
  FPhysicsSolverBase *pFVar11;
  FPhysicsSolverBase *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined4 local_80;
  FPhysicsSolverBase *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  _Src = param_1->DataPtr;
  pFVar11 = (FPhysicsSolverBase *)0x0;
  iVar14 = param_1->ArrayNum;
  uVar10 = 0;
  local_80 = 0;
  ppFVar6 = _Src;
  pFVar8 = pFVar11;
  if (_Src != _Src + iVar14) {
    do {
      pFVar9 = pFVar8;
      if (*ppFVar6 != (FPhysicsObject *)0x0) {
        pIVar1 = (*ppFVar6)->Proxy;
        if (pIVar1 == (IPhysicsProxyBase *)0x0) {
          return;
        }
        pFVar9 = pIVar1->Solver;
        if (pFVar9 == (FPhysicsSolverBase *)0x0) {
          return;
        }
        if ((pFVar8 != (FPhysicsSolverBase *)0x0) &&
           (bVar3 = pFVar9 != pFVar8, pFVar9 = pFVar8, bVar3)) {
          return;
        }
      }
      ppFVar6 = ppFVar6 + 1;
      pFVar8 = pFVar9;
    } while (ppFVar6 != _Src + iVar14);
    if (pFVar9 != (FPhysicsSolverBase *)0x0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)pFVar11;
      if (iVar14 != 0) {
        local_88._0_4_ = iVar14;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,0,&local_90,iVar14,(int *)((longlong)&local_88 + 4));
        memcpy(local_90.Data,_Src,(longlong)iVar14 * 8);
        FVar13.Data = local_90.Data;
        iVar14 = (int)local_88;
        uVar10 = local_88._4_4_;
      }
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar8 = pFVar11;
      pFVar12 = pFVar11;
      if (pFVar4 != (FPhysicsSolverBase *)0x0) {
        local_78 = (FPhysicsSolverBase *)0x0;
        puVar5 = FMemory::Malloc(0x28,8);
        puVar5[1] = FVar13.Data;
        *puVar5 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__4__SetAngularEtherDrag___FWritePhysicsObjectInterface__00_Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__M_Z__00_00_Function_Private_Core_UE__6B_
        ;
        *(int *)(puVar5 + 2) = iVar14;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar10;
        *(float *)(puVar5 + 3) = param_2;
        puVar5[4] = pFVar9;
        if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_78 = (FPhysicsSolverBase *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<1>::SetAngularEtherDrag'::__l5::<lambda_1>,void>
                     ::Call;
        }
        pFVar4->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 1;
        pFVar4->_padding_ = (longlong)local_78;
        pFVar4->_padding_ = (longlong)puVar5;
        local_50 = (longlong *)0x0;
        pFVar4->_padding_ = local_68;
        pFVar4->_padding_ = lStack_60;
        pFVar4->_padding_ = local_58;
        if (pFVar4->_padding_ != 0) {
          local_78 = pFVar11;
        }
        pFVar4->_padding_ = 0;
        (pFVar4->MarshallingManager).SimTime_External = (atomic<double>)0x0;
        *(undefined1 *)&(pFVar4->MarshallingManager).InternalStep_External = 0;
        *(undefined4 *)&(pFVar4->MarshallingManager).field_0x1c = 0xffffffff;
        if (pFVar4->_padding_ == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_98);
        }
        pFVar8 = pFVar4;
        pFVar12 = (FPhysicsSolverBase *)&DAT_00000001;
        FVar13.Data = (FScriptContainerElement *)pFVar11;
      }
      if ((pFVar12 != (FPhysicsSolverBase *)0x0) && (local_78 != (FPhysicsSolverBase *)0x0)) {
        plVar7 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                (&pFVar9->MarshallingManager,(FSimCallbackCommandObject *)pFVar8);
      if ((FPhysicsSolverBase *)FVar13.Data != (FPhysicsSolverBase *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
  }
  return;
}

// SetAngularEtherDrag @ 143db5b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetAngularEtherDrag
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,float param_2)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicsSolverBase *pFVar4;
  undefined8 *puVar5;
  FPhysicsObject **ppFVar6;
  longlong *plVar7;
  FPhysicsSolverBase *pFVar8;
  FPhysicsSolverBase *pFVar9;
  undefined4 uVar10;
  FPhysicsSolverBase *pFVar11;
  FPhysicsSolverBase *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined4 local_80;
  FPhysicsSolverBase *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  _Src = param_1->DataPtr;
  pFVar11 = (FPhysicsSolverBase *)0x0;
  iVar14 = param_1->ArrayNum;
  uVar10 = 0;
  local_80 = 0;
  ppFVar6 = _Src;
  pFVar8 = pFVar11;
  if (_Src != _Src + iVar14) {
    do {
      pFVar9 = pFVar8;
      if (*ppFVar6 != (FPhysicsObject *)0x0) {
        pIVar1 = (*ppFVar6)->Proxy;
        if (pIVar1 == (IPhysicsProxyBase *)0x0) {
          return;
        }
        pFVar9 = pIVar1->Solver;
        if (pFVar9 == (FPhysicsSolverBase *)0x0) {
          return;
        }
        if ((pFVar8 != (FPhysicsSolverBase *)0x0) &&
           (bVar3 = pFVar9 != pFVar8, pFVar9 = pFVar8, bVar3)) {
          return;
        }
      }
      ppFVar6 = ppFVar6 + 1;
      pFVar8 = pFVar9;
    } while (ppFVar6 != _Src + iVar14);
    if (pFVar9 != (FPhysicsSolverBase *)0x0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)pFVar11;
      if (iVar14 != 0) {
        local_88._0_4_ = iVar14;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,0,&local_90,iVar14,(int *)((longlong)&local_88 + 4));
        memcpy(local_90.Data,_Src,(longlong)iVar14 * 8);
        FVar13.Data = local_90.Data;
        iVar14 = (int)local_88;
        uVar10 = local_88._4_4_;
      }
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar8 = pFVar11;
      pFVar12 = pFVar11;
      if (pFVar4 != (FPhysicsSolverBase *)0x0) {
        local_78 = (FPhysicsSolverBase *)0x0;
        puVar5 = FMemory::Malloc(0x28,8);
        puVar5[1] = FVar13.Data;
        *puVar5 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__4__SetAngularEtherDrag___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__M_Z__00_00_Function_Private_Core_UE__6B_
        ;
        *(int *)(puVar5 + 2) = iVar14;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar10;
        *(float *)(puVar5 + 3) = param_2;
        puVar5[4] = pFVar9;
        if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_78 = (FPhysicsSolverBase *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetAngularEtherDrag'::__l5::<lambda_1>,void>
                     ::Call;
        }
        pFVar4->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 1;
        pFVar4->_padding_ = (longlong)local_78;
        pFVar4->_padding_ = (longlong)puVar5;
        local_50 = (longlong *)0x0;
        pFVar4->_padding_ = local_68;
        pFVar4->_padding_ = lStack_60;
        pFVar4->_padding_ = local_58;
        if (pFVar4->_padding_ != 0) {
          local_78 = pFVar11;
        }
        pFVar4->_padding_ = 0;
        (pFVar4->MarshallingManager).SimTime_External = (atomic<double>)0x0;
        *(undefined1 *)&(pFVar4->MarshallingManager).InternalStep_External = 0;
        *(undefined4 *)&(pFVar4->MarshallingManager).field_0x1c = 0xffffffff;
        if (pFVar4->_padding_ == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_98);
        }
        pFVar8 = pFVar4;
        pFVar12 = (FPhysicsSolverBase *)&DAT_00000001;
        FVar13.Data = (FScriptContainerElement *)pFVar11;
      }
      if ((pFVar12 != (FPhysicsSolverBase *)0x0) && (local_78 != (FPhysicsSolverBase *)0x0)) {
        plVar7 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                (&pFVar9->MarshallingManager,(FSimCallbackCommandObject *)pFVar8);
      if ((FPhysicsSolverBase *)FVar13.Data != (FPhysicsSolverBase *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
  }
  return;
}

// SetAngularVelocityInRadians @ 143db5de0

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetAngularVelocityInRadians
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong lVar13;
  FPhysicsObject **ppFVar14;
  double dVar15;
  double dVar16;
  
  if (param_1->ArrayNum != 0) {
    ppFVar14 = param_1->DataPtr;
    ppFVar1 = ppFVar14 + param_1->ArrayNum;
    for (; ppFVar14 != ppFVar1; ppFVar14 = ppFVar14 + 1) {
      pFVar4 = *ppFVar14;
      if ((pFVar4 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&this_00->field_0x1c;
        if (iVar2 == 2) {
          pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,pFVar4->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143db5fad;
          pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            pTVar12 = pTVar11;
          }
          if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            dVar15 = (param_2->field0_0x0)._s_0.Z;
            dVar8 = (param_2->field0_0x0)._s_0.X;
            dVar16 = *(double *)((longlong)&param_2->field0_0x0 + 8);
            if (param_3) {
              uVar3 = *(uint *)&pTVar12->field_0x8;
              lVar13 = (longlong)(int)uVar3;
              lVar5 = *(longlong *)pTVar12;
              uVar10 = 0;
              if ((int)uVar3 < *(int *)(lVar5 + 0x370)) {
                uVar10 = ~uVar3 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar5 = *(longlong *)(lVar5 + 0x368);
              dVar15 = dVar15 + *(double *)(lVar5 + 0x10 + lVar13 * 0x18);
              dVar8 = dVar8 + *(double *)(lVar5 + lVar13 * 0x18);
              dVar16 = dVar16 + *(double *)(lVar5 + 8 + lVar13 * 0x18);
            }
            uVar3 = *(uint *)&pTVar12->field_0x8;
            lVar5 = *(longlong *)pTVar12;
            uVar10 = 0;
            if ((int)uVar3 < *(int *)(lVar5 + 0x370)) {
              uVar10 = ~uVar3 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar5 = *(longlong *)(lVar5 + 0x368);
            auVar7._8_4_ = SUB84(dVar16,0);
            auVar7._0_8_ = dVar8;
            auVar7._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
            *(undefined1 (*) [16])(lVar5 + (longlong)(int)uVar3 * 0x18) = auVar7;
            *(double *)(lVar5 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar15;
          }
        }
      }
LAB_143db5fad:
    }
  }
  return;
}

// SetAngularVelocityInRadians @ 143db6000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetAngularVelocityInRadians
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject *pFVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  FPhysicsObject **ppFVar4;
  bool bVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  FPhysicsSolverBase *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  FPhysicsObject **ppFVar10;
  FPhysicsSolverBase *pFVar11;
  undefined4 uVar12;
  FPhysicsSolverBase *pFVar13;
  FPhysicsSolverBase *pFVar14;
  FPhysicsSolverBase *pFVar15;
  int iVar16;
  ForAnyElementType FVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_138 [32];
  undefined1 local_f7 [3];
  undefined4 local_f4;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  FPhysicsSolverBase *local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar13 = (FPhysicsSolverBase *)0x0;
  uVar12 = 0;
  local_f4 = 0;
  if (param_1->ArrayNum != 0) {
    ppFVar10 = param_1->DataPtr;
    ppFVar4 = ppFVar10 + param_1->ArrayNum;
    for (; ppFVar10 != ppFVar4; ppFVar10 = ppFVar10 + 1) {
      pFVar1 = *ppFVar10;
      if ((pFVar1 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar1->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar16 = *(int *)&this_00->field_0x1c;
        if (iVar16 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar1->BodyIndex);
        }
        else if (iVar16 == 0xb) {
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar16 != 0xc) goto LAB_143db613c;
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if ((pTVar6 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)pTVar6->field_0x98)) {
          local_d0 = (param_2->field0_0x0)._s_0.Z;
          local_e0 = (param_2->field0_0x0)._s_0.X;
          dStack_d8 = (param_2->field0_0x0)._s_0.Y;
          dVar18 = local_e0;
          dVar19 = dStack_d8;
          dVar20 = local_d0;
          if (param_3) {
            dVar18 = local_e0 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity;
            dVar19 = dStack_d8 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity.
                                        field_0x4;
            dVar20 = local_d0 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity.
                                        field_0x8;
          }
          *(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity = (float)dVar18;
          *(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity.field_0x4 = (float)dVar19;
          *(float *)&(pTVar6->MDynamics).Property.MAngularImpulseVelocity.field_0x8 = (float)dVar20;
        }
      }
LAB_143db613c:
    }
    ppFVar4 = param_1->DataPtr;
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*ppFVar4 != (FPhysicsObject *)0x0) {
        pIVar2 = (*ppFVar4)->Proxy;
        pFVar15 = pFVar13;
        if (pIVar2 != (IPhysicsProxyBase *)0x0) {
          pFVar15 = pIVar2->Solver;
        }
        if (pFVar15 != (FPhysicsSolverBase *)0x0) {
          iVar16 = param_1->ArrayNum;
          local_f0.Data = (FScriptContainerElement *)0x0;
          FVar17.Data = (FScriptContainerElement *)pFVar13;
          if (iVar16 != 0) {
            local_e8._0_4_ = iVar16;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,0,&local_f0,iVar16,(int *)((longlong)&local_e8 + 4));
            memcpy(local_f0.Data,param_1->DataPtr,(longlong)iVar16 << 3);
            FVar17.Data = local_f0.Data;
            iVar16 = (int)local_e8;
            uVar12 = local_e8._4_4_;
          }
          dVar19 = (param_2->field0_0x0)._s_0.X;
          dVar20 = (param_2->field0_0x0)._s_0.Y;
          local_f0.Data = (FScriptContainerElement *)0x0;
          dVar18 = (param_2->field0_0x0)._s_0.Z;
          local_e8 = 0;
          local_b8 = dVar19;
          dStack_b0 = dVar20;
          local_a8 = dVar18;
          if (((CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                 ,0x1b3,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = ::operator_new(0xc0);
          pFVar11 = pFVar13;
          pFVar14 = pFVar13;
          if (pFVar7 != (FPhysicsSolverBase *)0x0) {
            local_98 = (FPhysicsSolverBase *)0x0;
            puVar8 = FMemory::Malloc(0x38,8);
            puVar8[1] = FVar17.Data;
            *puVar8 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__BL___SetAngularVelocityInRadians___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__AEBU__TVector_N_Math_UE___N_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *(int *)(puVar8 + 2) = iVar16;
            *(undefined4 *)((longlong)puVar8 + 0x14) = uVar12;
            puVar8[3] = dVar19;
            puVar8[4] = dVar20;
            *(bool *)(puVar8 + 6) = param_3;
            puVar8[5] = dVar18;
            if (puVar8 != (undefined8 *)&DAT_fffffffffffffff8) {
              local_98 = (FPhysicsSolverBase *)
                         UE::Core::Private::Function::
                         TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetAngularVelocityInRadians'::__l27::<lambda_1>,void>
                         ::Call;
            }
            pFVar7->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
            *(undefined2 *)&pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            *(undefined2 *)&pFVar7->_padding_ = 1;
            pFVar7->_padding_ = (longlong)local_98;
            pFVar7->_padding_ = (longlong)puVar8;
            local_70 = (longlong *)0x0;
            pFVar7->_padding_ = local_88;
            pFVar7->_padding_ = lStack_80;
            pFVar7->_padding_ = local_78;
            if (pFVar7->_padding_ != 0) {
              local_98 = pFVar13;
            }
            pFVar7->_padding_ = 0;
            (pFVar7->MarshallingManager).SimTime_External = (atomic<double>)0x0;
            *(undefined1 *)&(pFVar7->MarshallingManager).InternalStep_External = 0;
            *(undefined4 *)&(pFVar7->MarshallingManager).field_0x1c = 0xffffffff;
            if (pFVar7->_padding_ == 0) {
              `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
              operator()(local_f7);
            }
            pFVar11 = pFVar7;
            pFVar14 = (FPhysicsSolverBase *)&DAT_00000001;
            FVar17.Data = (FScriptContainerElement *)pFVar13;
          }
          if ((pFVar14 != (FPhysicsSolverBase *)0x0) && (local_98 != (FPhysicsSolverBase *)0x0)) {
            plVar9 = &local_88;
            if (local_70 != (longlong *)0x0) {
              plVar9 = local_70;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          FChaosMarshallingManager::RegisterSimCommand_External
                    (&pFVar15->MarshallingManager,(FSimCallbackCommandObject *)pFVar11);
          if ((FPhysicsSolverBase *)FVar17.Data != (FPhysicsSolverBase *)0x0) {
            FMemory::Free(FVar17.Data);
          }
          if (local_f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data);
          }
        }
      }
    }
  }
  return;
}

// SetLinearEtherDrag @ 143db64e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetLinearEtherDrag
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,float param_2)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicsSolverBase *pFVar4;
  undefined8 *puVar5;
  FPhysicsObject **ppFVar6;
  longlong *plVar7;
  FPhysicsSolverBase *pFVar8;
  FPhysicsSolverBase *pFVar9;
  undefined4 uVar10;
  FPhysicsSolverBase *pFVar11;
  FPhysicsSolverBase *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined4 local_80;
  FPhysicsSolverBase *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  _Src = param_1->DataPtr;
  pFVar11 = (FPhysicsSolverBase *)0x0;
  iVar14 = param_1->ArrayNum;
  uVar10 = 0;
  local_80 = 0;
  ppFVar6 = _Src;
  pFVar8 = pFVar11;
  if (_Src != _Src + iVar14) {
    do {
      pFVar9 = pFVar8;
      if (*ppFVar6 != (FPhysicsObject *)0x0) {
        pIVar1 = (*ppFVar6)->Proxy;
        if (pIVar1 == (IPhysicsProxyBase *)0x0) {
          return;
        }
        pFVar9 = pIVar1->Solver;
        if (pFVar9 == (FPhysicsSolverBase *)0x0) {
          return;
        }
        if ((pFVar8 != (FPhysicsSolverBase *)0x0) &&
           (bVar3 = pFVar9 != pFVar8, pFVar9 = pFVar8, bVar3)) {
          return;
        }
      }
      ppFVar6 = ppFVar6 + 1;
      pFVar8 = pFVar9;
    } while (ppFVar6 != _Src + iVar14);
    if (pFVar9 != (FPhysicsSolverBase *)0x0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)pFVar11;
      if (iVar14 != 0) {
        local_88._0_4_ = iVar14;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,0,&local_90,iVar14,(int *)((longlong)&local_88 + 4));
        memcpy(local_90.Data,_Src,(longlong)iVar14 * 8);
        FVar13.Data = local_90.Data;
        iVar14 = (int)local_88;
        uVar10 = local_88._4_4_;
      }
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar8 = pFVar11;
      pFVar12 = pFVar11;
      if (pFVar4 != (FPhysicsSolverBase *)0x0) {
        local_78 = (FPhysicsSolverBase *)0x0;
        puVar5 = FMemory::Malloc(0x28,8);
        puVar5[1] = FVar13.Data;
        *puVar5 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__4__SetLinearEtherDrag___FWritePhysicsObjectInterface__00_Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__M_Z__00_00_Function_Private_Core_UE__6B_
        ;
        *(int *)(puVar5 + 2) = iVar14;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar10;
        *(float *)(puVar5 + 3) = param_2;
        puVar5[4] = pFVar9;
        if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_78 = (FPhysicsSolverBase *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<1>::SetLinearEtherDrag'::__l5::<lambda_1>,void>
                     ::Call;
        }
        pFVar4->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 1;
        pFVar4->_padding_ = (longlong)local_78;
        pFVar4->_padding_ = (longlong)puVar5;
        local_50 = (longlong *)0x0;
        pFVar4->_padding_ = local_68;
        pFVar4->_padding_ = lStack_60;
        pFVar4->_padding_ = local_58;
        if (pFVar4->_padding_ != 0) {
          local_78 = pFVar11;
        }
        pFVar4->_padding_ = 0;
        (pFVar4->MarshallingManager).SimTime_External = (atomic<double>)0x0;
        *(undefined1 *)&(pFVar4->MarshallingManager).InternalStep_External = 0;
        *(undefined4 *)&(pFVar4->MarshallingManager).field_0x1c = 0xffffffff;
        if (pFVar4->_padding_ == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_98);
        }
        pFVar8 = pFVar4;
        pFVar12 = (FPhysicsSolverBase *)&DAT_00000001;
        FVar13.Data = (FScriptContainerElement *)pFVar11;
      }
      if ((pFVar12 != (FPhysicsSolverBase *)0x0) && (local_78 != (FPhysicsSolverBase *)0x0)) {
        plVar7 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                (&pFVar9->MarshallingManager,(FSimCallbackCommandObject *)pFVar8);
      if ((FPhysicsSolverBase *)FVar13.Data != (FPhysicsSolverBase *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
  }
  return;
}

// SetLinearEtherDrag @ 143db67b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetLinearEtherDrag
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,float param_2)

{
  FPhysicsObject **_Src;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicsSolverBase *pFVar4;
  undefined8 *puVar5;
  FPhysicsObject **ppFVar6;
  longlong *plVar7;
  FPhysicsSolverBase *pFVar8;
  FPhysicsSolverBase *pFVar9;
  undefined4 uVar10;
  FPhysicsSolverBase *pFVar11;
  FPhysicsSolverBase *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined4 local_80;
  FPhysicsSolverBase *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  _Src = param_1->DataPtr;
  pFVar11 = (FPhysicsSolverBase *)0x0;
  iVar14 = param_1->ArrayNum;
  uVar10 = 0;
  local_80 = 0;
  ppFVar6 = _Src;
  pFVar8 = pFVar11;
  if (_Src != _Src + iVar14) {
    do {
      pFVar9 = pFVar8;
      if (*ppFVar6 != (FPhysicsObject *)0x0) {
        pIVar1 = (*ppFVar6)->Proxy;
        if (pIVar1 == (IPhysicsProxyBase *)0x0) {
          return;
        }
        pFVar9 = pIVar1->Solver;
        if (pFVar9 == (FPhysicsSolverBase *)0x0) {
          return;
        }
        if ((pFVar8 != (FPhysicsSolverBase *)0x0) &&
           (bVar3 = pFVar9 != pFVar8, pFVar9 = pFVar8, bVar3)) {
          return;
        }
      }
      ppFVar6 = ppFVar6 + 1;
      pFVar8 = pFVar9;
    } while (ppFVar6 != _Src + iVar14);
    if (pFVar9 != (FPhysicsSolverBase *)0x0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)pFVar11;
      if (iVar14 != 0) {
        local_88._0_4_ = iVar14;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,0,&local_90,iVar14,(int *)((longlong)&local_88 + 4));
        memcpy(local_90.Data,_Src,(longlong)iVar14 * 8);
        FVar13.Data = local_90.Data;
        iVar14 = (int)local_88;
        uVar10 = local_88._4_4_;
      }
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar8 = pFVar11;
      pFVar12 = pFVar11;
      if (pFVar4 != (FPhysicsSolverBase *)0x0) {
        local_78 = (FPhysicsSolverBase *)0x0;
        puVar5 = FMemory::Malloc(0x28,8);
        puVar5[1] = FVar13.Data;
        *puVar5 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__4__SetLinearEtherDrag___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__M_Z__00_00_Function_Private_Core_UE__6B_
        ;
        *(int *)(puVar5 + 2) = iVar14;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar10;
        *(float *)(puVar5 + 3) = param_2;
        puVar5[4] = pFVar9;
        if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_78 = (FPhysicsSolverBase *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearEtherDrag'::__l5::<lambda_1>,void>
                     ::Call;
        }
        pFVar4->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 1;
        pFVar4->_padding_ = (longlong)local_78;
        pFVar4->_padding_ = (longlong)puVar5;
        local_50 = (longlong *)0x0;
        pFVar4->_padding_ = local_68;
        pFVar4->_padding_ = lStack_60;
        pFVar4->_padding_ = local_58;
        if (pFVar4->_padding_ != 0) {
          local_78 = pFVar11;
        }
        pFVar4->_padding_ = 0;
        (pFVar4->MarshallingManager).SimTime_External = (atomic<double>)0x0;
        *(undefined1 *)&(pFVar4->MarshallingManager).InternalStep_External = 0;
        *(undefined4 *)&(pFVar4->MarshallingManager).field_0x1c = 0xffffffff;
        if (pFVar4->_padding_ == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_98);
        }
        pFVar8 = pFVar4;
        pFVar12 = (FPhysicsSolverBase *)&DAT_00000001;
        FVar13.Data = (FScriptContainerElement *)pFVar11;
      }
      if ((pFVar12 != (FPhysicsSolverBase *)0x0) && (local_78 != (FPhysicsSolverBase *)0x0)) {
        plVar7 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                (&pFVar9->MarshallingManager,(FSimCallbackCommandObject *)pFVar8);
      if ((FPhysicsSolverBase *)FVar13.Data != (FPhysicsSolverBase *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
  }
  return;
}

// SetLinearImpulseVelocity @ 143db6a80

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetLinearImpulseVelocity
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  FPhysicsObject *pFVar7;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar15;
  double *pdVar16;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  FPhysicsObject **ppFVar17;
  
  if (param_1->ArrayNum != 0) {
    ppFVar17 = param_1->DataPtr;
    ppFVar1 = ppFVar17 + param_1->ArrayNum;
    for (; ppFVar17 != ppFVar1; ppFVar17 = ppFVar17 + 1) {
      pFVar7 = *ppFVar17;
      if ((pFVar7 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar7->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar5 = *(int *)&this_00->field_0x1c;
        if (iVar5 == 2) {
          pTVar15 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,pFVar7->BodyIndex);
        }
        else if (iVar5 == 0xb) {
          pTVar15 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar5 != 0xc) goto LAB_143db6c35;
          pTVar15 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar15 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar15->field_0xc) {
            this_01 = pTVar15;
          }
          if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            if (param_3) {
              uVar6 = *(uint *)&this_01->field_0x8;
              lVar8 = *(longlong *)this_01;
              dVar3 = (param_2->field0_0x0)._s_0.X;
              dVar4 = (param_2->field0_0x0)._s_0.Y;
              dVar2 = (param_2->field0_0x0)._s_0.Z;
              uVar14 = 0;
              if ((int)uVar6 < *(int *)(lVar8 + 0x358)) {
                uVar14 = ~uVar6 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar8 = *(longlong *)(lVar8 + 0x350);
              pdVar16 = (double *)(lVar8 + (longlong)(int)uVar6 * 0x18);
              *pdVar16 = dVar3;
              pdVar16[1] = dVar4;
              *(double *)(lVar8 + 0x10 + (longlong)(int)uVar6 * 0x18) = dVar2;
            }
            else {
              pdVar16 = TPBDRigidParticleHandleImp<double,3,1>::InvM(this_01);
              uVar6 = *(uint *)&this_01->field_0x8;
              lVar8 = *(longlong *)this_01;
              dVar12 = (param_2->field0_0x0)._s_0.Y;
              dVar2 = *pdVar16;
              dVar3 = *pdVar16;
              dVar4 = (param_2->field0_0x0)._s_0.X;
              dVar11 = dVar3 * (param_2->field0_0x0)._s_0.Z;
              uVar14 = 0;
              if ((int)uVar6 < *(int *)(lVar8 + 0x358)) {
                uVar14 = ~uVar6 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar8 = *(longlong *)(lVar8 + 0x350);
              *(double *)(lVar8 + (longlong)(int)uVar6 * 0x18) = dVar2 * dVar4;
              auVar10._8_4_ = SUB84(dVar11,0);
              auVar10._0_8_ = dVar3 * dVar12;
              auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar6 * 0x18) = auVar10;
            }
          }
        }
      }
LAB_143db6c35:
    }
  }
  return;
}

// SetLinearImpulseVelocity @ 143db6c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetLinearImpulseVelocity
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar5;
  code *pcVar6;
  FPhysicsObject **ppFVar7;
  bool bVar8;
  TPBDRigidParticle<double,3> *pTVar9;
  FPhysicsSolverBase *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FPhysicsObject **ppFVar13;
  FPhysicsSolverBase *pFVar14;
  undefined4 uVar15;
  FPhysicsSolverBase *pFVar16;
  FPhysicsSolverBase *pFVar17;
  FPhysicsSolverBase *pFVar18;
  int iVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_128 [32];
  undefined1 local_e7 [3];
  undefined4 local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  FPhysicsSolverBase *local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar16 = (FPhysicsSolverBase *)0x0;
  uVar15 = 0;
  local_e4 = 0;
  if (param_1->ArrayNum != 0) {
    ppFVar13 = param_1->DataPtr;
    ppFVar7 = ppFVar13 + param_1->ArrayNum;
    for (; ppFVar13 != ppFVar7; ppFVar13 = ppFVar13 + 1) {
      pFVar4 = *ppFVar13;
      if ((pFVar4 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar19 = *(int *)&this_00->field_0x1c;
        if (iVar19 == 2) {
          pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar4->BodyIndex);
        }
        else if (iVar19 == 0xb) {
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar19 != 0xc) goto LAB_143db6dd2;
          pTVar9 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if ((pTVar9 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)pTVar9->field_0x98)) {
          if (param_3) {
            local_d0 = (param_2->field0_0x0)._s_0.X;
            dStack_c8 = (param_2->field0_0x0)._s_0.Y;
            local_c0 = (param_2->field0_0x0)._s_0.Z;
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity = (float)local_d0;
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity.field_0x4 =
                 (float)dStack_c8;
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity.field_0x8 =
                 (float)local_c0;
          }
          else {
            dVar3 = (pTVar9->MMassProps).Property.MInvM;
            dVar1 = (param_2->field0_0x0)._s_0.Y;
            dVar2 = (param_2->field0_0x0)._s_0.Z;
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity =
                 (float)(dVar3 * (param_2->field0_0x0)._s_0.X);
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity.field_0x4 =
                 (float)(dVar3 * dVar1);
            *(float *)&(pTVar9->MDynamics).Property.MLinearImpulseVelocity.field_0x8 =
                 (float)(dVar3 * dVar2);
          }
        }
      }
LAB_143db6dd2:
    }
    ppFVar7 = param_1->DataPtr;
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*ppFVar7 != (FPhysicsObject *)0x0) {
        pIVar5 = (*ppFVar7)->Proxy;
        pFVar18 = pFVar16;
        if (pIVar5 != (IPhysicsProxyBase *)0x0) {
          pFVar18 = pIVar5->Solver;
        }
        if (pFVar18 != (FPhysicsSolverBase *)0x0) {
          iVar19 = param_1->ArrayNum;
          local_e0.Data = (FScriptContainerElement *)0x0;
          FVar20.Data = (FScriptContainerElement *)pFVar16;
          if (iVar19 != 0) {
            local_d8._0_4_ = iVar19;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar19,0,&local_e0,iVar19,(int *)((longlong)&local_d8 + 4));
            memcpy(local_e0.Data,param_1->DataPtr,(longlong)iVar19 << 3);
            FVar20.Data = local_e0.Data;
            iVar19 = (int)local_d8;
            uVar15 = local_d8._4_4_;
          }
          dVar1 = (param_2->field0_0x0)._s_0.X;
          dVar2 = (param_2->field0_0x0)._s_0.Y;
          local_e0.Data = (FScriptContainerElement *)0x0;
          dVar3 = (param_2->field0_0x0)._s_0.Z;
          local_d8 = 0;
          local_a8 = dVar1;
          dStack_a0 = dVar2;
          local_98 = dVar3;
          if (((CVars::bEnableAsyncInitBody == false) && (bVar8 = IsInGameThread(), !bVar8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                 ,0x1b3,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar10 = ::operator_new(0xc0);
          pFVar14 = pFVar16;
          pFVar17 = pFVar16;
          if (pFVar10 != (FPhysicsSolverBase *)0x0) {
            local_88 = (FPhysicsSolverBase *)0x0;
            puVar11 = FMemory::Malloc(0x38,8);
            puVar11[1] = FVar20.Data;
            *puVar11 = &
                       ___7__TFunction_OwnedObject_V<lambda_1>__BN___SetLinearImpulseVelocity___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__AEBU__TVector_N_Math_UE___N_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *(int *)(puVar11 + 2) = iVar19;
            *(undefined4 *)((longlong)puVar11 + 0x14) = uVar15;
            puVar11[3] = dVar1;
            puVar11[4] = dVar2;
            *(bool *)(puVar11 + 6) = param_3;
            puVar11[5] = dVar3;
            if (puVar11 != (undefined8 *)&DAT_fffffffffffffff8) {
              local_88 = (FPhysicsSolverBase *)
                         UE::Core::Private::Function::
                         TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearImpulseVelocity'::__l29::<lambda_1>,void>
                         ::Call;
            }
            pFVar10->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
            *(undefined2 *)&pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            *(undefined2 *)&pFVar10->_padding_ = 1;
            pFVar10->_padding_ = (longlong)local_88;
            pFVar10->_padding_ = (longlong)puVar11;
            local_60 = (longlong *)0x0;
            pFVar10->_padding_ = local_78;
            pFVar10->_padding_ = lStack_70;
            pFVar10->_padding_ = local_68;
            if (pFVar10->_padding_ != 0) {
              local_88 = pFVar16;
            }
            pFVar10->_padding_ = 0;
            (pFVar10->MarshallingManager).SimTime_External = (atomic<double>)0x0;
            *(undefined1 *)&(pFVar10->MarshallingManager).InternalStep_External = 0;
            *(undefined4 *)&(pFVar10->MarshallingManager).field_0x1c = 0xffffffff;
            if (pFVar10->_padding_ == 0) {
              `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
              operator()(local_e7);
            }
            pFVar14 = pFVar10;
            pFVar17 = (FPhysicsSolverBase *)&DAT_00000001;
            FVar20.Data = (FScriptContainerElement *)pFVar16;
          }
          if ((pFVar17 != (FPhysicsSolverBase *)0x0) && (local_88 != (FPhysicsSolverBase *)0x0)) {
            plVar12 = &local_78;
            if (local_60 != (longlong *)0x0) {
              plVar12 = local_60;
            }
            (**(code **)(*plVar12 + 0x10))();
          }
          FChaosMarshallingManager::RegisterSimCommand_External
                    (&pFVar18->MarshallingManager,(FSimCallbackCommandObject *)pFVar14);
          if ((FPhysicsSolverBase *)FVar20.Data != (FPhysicsSolverBase *)0x0) {
            FMemory::Free(FVar20.Data);
          }
          if (local_e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data);
          }
        }
      }
    }
  }
  return;
}

// SetLinearVelocity @ 143db70d0

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetLinearVelocity
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TVector<double,3> *pTVar12;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  FPhysicsObject **ppFVar13;
  double dVar14;
  double dVar15;
  
  if (param_1->ArrayNum != 0) {
    ppFVar13 = param_1->DataPtr;
    ppFVar1 = ppFVar13 + param_1->ArrayNum;
    for (; ppFVar13 != ppFVar1; ppFVar13 = ppFVar13 + 1) {
      pFVar4 = *ppFVar13;
      if ((pFVar4 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&this_00->field_0x1c;
        if (iVar2 == 2) {
          pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,pFVar4->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143db7238;
          pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar11->field_0xc) {
            this_01 = pTVar11;
          }
          if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            dVar14 = (param_2->field0_0x0)._s_0.Z;
            dVar8 = (param_2->field0_0x0)._s_0.X;
            dVar15 = *(double *)((longlong)&param_2->field0_0x0 + 8);
            if (param_3) {
              pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(this_01);
              dVar14 = dVar14 + *(double *)&pTVar12->field_0x10;
              dVar8 = dVar8 + *(double *)pTVar12;
              dVar15 = dVar15 + *(double *)&pTVar12->field_0x8;
            }
            uVar3 = *(uint *)&this_01->field_0x8;
            lVar5 = *(longlong *)this_01;
            uVar10 = 0;
            if ((int)uVar3 < *(int *)(lVar5 + 0x358)) {
              uVar10 = ~uVar3 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar5 = *(longlong *)(lVar5 + 0x350);
            auVar7._8_4_ = SUB84(dVar15,0);
            auVar7._0_8_ = dVar8;
            auVar7._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])(lVar5 + (longlong)(int)uVar3 * 0x18) = auVar7;
            *(double *)(lVar5 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar14;
          }
        }
      }
LAB_143db7238:
    }
  }
  return;
}

// SetLinearVelocity @ 143db7280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetLinearVelocity
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,TVector<double> *param_2,
          bool param_3)

{
  FPhysicsObject *pFVar1;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  FPhysicsObject **ppFVar4;
  bool bVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  FPhysicsSolverBase *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  FPhysicsObject **ppFVar10;
  FPhysicsSolverBase *pFVar11;
  undefined4 uVar12;
  FPhysicsSolverBase *pFVar13;
  FPhysicsSolverBase *pFVar14;
  FPhysicsSolverBase *pFVar15;
  int iVar16;
  ForAnyElementType FVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_138 [32];
  undefined1 local_f7 [3];
  undefined4 local_f4;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  FPhysicsSolverBase *local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar13 = (FPhysicsSolverBase *)0x0;
  uVar12 = 0;
  local_f4 = 0;
  if (param_1->ArrayNum != 0) {
    ppFVar10 = param_1->DataPtr;
    ppFVar4 = ppFVar10 + param_1->ArrayNum;
    for (; ppFVar10 != ppFVar4; ppFVar10 = ppFVar10 + 1) {
      pFVar1 = *ppFVar10;
      if ((pFVar1 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar1->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar16 = *(int *)&this_00->field_0x1c;
        if (iVar16 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar1->BodyIndex);
        }
        else if (iVar16 == 0xb) {
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar16 != 0xc) goto LAB_143db73bc;
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if ((pTVar6 != (TPBDRigidParticle<double,3> *)0x0) && (1 < (byte)pTVar6->field_0x98)) {
          local_d0 = (param_2->field0_0x0)._s_0.Z;
          local_e0 = (param_2->field0_0x0)._s_0.X;
          dStack_d8 = (param_2->field0_0x0)._s_0.Y;
          dVar18 = local_e0;
          dVar19 = dStack_d8;
          dVar20 = local_d0;
          if (param_3) {
            dVar18 = local_e0 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity;
            dVar19 = dStack_d8 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity.
                                        field_0x4;
            dVar20 = local_d0 +
                     (double)*(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity.
                                        field_0x8;
          }
          *(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity = (float)dVar18;
          *(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity.field_0x4 = (float)dVar19;
          *(float *)&(pTVar6->MDynamics).Property.MLinearImpulseVelocity.field_0x8 = (float)dVar20;
        }
      }
LAB_143db73bc:
    }
    ppFVar4 = param_1->DataPtr;
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*ppFVar4 != (FPhysicsObject *)0x0) {
        pIVar2 = (*ppFVar4)->Proxy;
        pFVar15 = pFVar13;
        if (pIVar2 != (IPhysicsProxyBase *)0x0) {
          pFVar15 = pIVar2->Solver;
        }
        if (pFVar15 != (FPhysicsSolverBase *)0x0) {
          iVar16 = param_1->ArrayNum;
          local_f0.Data = (FScriptContainerElement *)0x0;
          FVar17.Data = (FScriptContainerElement *)pFVar13;
          if (iVar16 != 0) {
            local_e8._0_4_ = iVar16;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,0,&local_f0,iVar16,(int *)((longlong)&local_e8 + 4));
            memcpy(local_f0.Data,param_1->DataPtr,(longlong)iVar16 << 3);
            FVar17.Data = local_f0.Data;
            iVar16 = (int)local_e8;
            uVar12 = local_e8._4_4_;
          }
          dVar19 = (param_2->field0_0x0)._s_0.X;
          dVar20 = (param_2->field0_0x0)._s_0.Y;
          local_f0.Data = (FScriptContainerElement *)0x0;
          dVar18 = (param_2->field0_0x0)._s_0.Z;
          local_e8 = 0;
          local_b8 = dVar19;
          dStack_b0 = dVar20;
          local_a8 = dVar18;
          if (((CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                 ,0x1b3,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = ::operator_new(0xc0);
          pFVar11 = pFVar13;
          pFVar14 = pFVar13;
          if (pFVar7 != (FPhysicsSolverBase *)0x0) {
            local_98 = (FPhysicsSolverBase *)0x0;
            puVar8 = FMemory::Malloc(0x38,8);
            puVar8[1] = FVar17.Data;
            *puVar8 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__BL___SetLinearVelocity___FWritePhysicsObjectInterface__0A__Chaos__QEAAXV__TArrayView_QEAUFPhysicsObject_Chaos__H__AEBU__TVector_N_Math_UE___N_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *(int *)(puVar8 + 2) = iVar16;
            *(undefined4 *)((longlong)puVar8 + 0x14) = uVar12;
            puVar8[3] = dVar19;
            puVar8[4] = dVar20;
            *(bool *)(puVar8 + 6) = param_3;
            puVar8[5] = dVar18;
            if (puVar8 != (undefined8 *)&DAT_fffffffffffffff8) {
              local_98 = (FPhysicsSolverBase *)
                         UE::Core::Private::Function::
                         TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearVelocity'::__l27::<lambda_1>,void>
                         ::Call;
            }
            pFVar7->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
            *(undefined2 *)&pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            pFVar7->_padding_ = 0;
            *(undefined2 *)&pFVar7->_padding_ = 1;
            pFVar7->_padding_ = (longlong)local_98;
            pFVar7->_padding_ = (longlong)puVar8;
            local_70 = (longlong *)0x0;
            pFVar7->_padding_ = local_88;
            pFVar7->_padding_ = lStack_80;
            pFVar7->_padding_ = local_78;
            if (pFVar7->_padding_ != 0) {
              local_98 = pFVar13;
            }
            pFVar7->_padding_ = 0;
            (pFVar7->MarshallingManager).SimTime_External = (atomic<double>)0x0;
            *(undefined1 *)&(pFVar7->MarshallingManager).InternalStep_External = 0;
            *(undefined4 *)&(pFVar7->MarshallingManager).field_0x1c = 0xffffffff;
            if (pFVar7->_padding_ == 0) {
              `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
              operator()(local_f7);
            }
            pFVar11 = pFVar7;
            pFVar14 = (FPhysicsSolverBase *)&DAT_00000001;
            FVar17.Data = (FScriptContainerElement *)pFVar13;
          }
          if ((pFVar14 != (FPhysicsSolverBase *)0x0) && (local_98 != (FPhysicsSolverBase *)0x0)) {
            plVar9 = &local_88;
            if (local_70 != (longlong *)0x0) {
              plVar9 = local_70;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          FChaosMarshallingManager::RegisterSimCommand_External
                    (&pFVar15->MarshallingManager,(FSimCallbackCommandObject *)pFVar11);
          if ((FPhysicsSolverBase *)FVar17.Data != (FPhysicsSolverBase *)0x0) {
            FMemory::Free(FVar17.Data);
          }
          if (local_f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data);
          }
        }
      }
    }
  }
  return;
}

// SetUserDefinedEntity @ 143db96b0

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::SetUserDefinedEntity
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FChaosUserDefinedEntity *param_2)

{
  undefined1 local_res20 [8];
  
  `Chaos::FWritePhysicsObjectInterface<1>::SetUserDefinedEntity'::__l7::<lambda_1>::operator()
            (local_res20);
  return;
}

// SetUserDefinedEntity @ 143db96c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::SetUserDefinedEntity
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FChaosUserDefinedEntity *param_2)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  int *piVar4;
  void *pvVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  FPhysicsObject **ppFVar9;
  
  ppFVar9 = param_1->DataPtr;
  ppFVar1 = ppFVar9 + param_1->ArrayNum;
  if (ppFVar9 != ppFVar1) {
    do {
      pFVar3 = *ppFVar9;
      if ((pFVar3 != (FPhysicsObject *)0x0) &&
         (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&this_00->field_0x1c;
        if (iVar2 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (this_00,pFVar3->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143db97b5;
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
          piVar4 = *(int **)&pTVar6->field_0x78;
          if (((piVar4 == (int *)0x0) || (*piVar4 != 8)) ||
             (pvVar5 = *(void **)(piVar4 + 2), pvVar5 == (void *)0x0)) {
            if (param_2 != (FChaosUserDefinedEntity *)0x0) {
              puVar7 = ::operator_new(0x20);
              puVar8 = (undefined4 *)0x0;
              if (puVar7 != (undefined4 *)0x0) {
                *(undefined8 *)(puVar7 + 4) = 0;
                *(undefined8 *)(puVar7 + 6) = 0;
                *puVar7 = 8;
                *(undefined4 **)(puVar7 + 2) = puVar7;
                puVar8 = puVar7;
              }
              *(undefined8 *)(puVar8 + 4) = *(undefined8 *)&pTVar6->field_0x78;
              *(FChaosUserDefinedEntity **)(puVar8 + 6) = param_2;
              *(undefined4 **)&pTVar6->field_0x78 = puVar8;
            }
          }
          else if (param_2 == (FChaosUserDefinedEntity *)0x0) {
            *(undefined8 *)&pTVar6->field_0x78 = *(undefined8 *)((longlong)pvVar5 + 0x10);
            ::operator_delete(pvVar5,0x20);
          }
          else {
            *(FChaosUserDefinedEntity **)((longlong)pvVar5 + 0x18) = param_2;
          }
        }
      }
LAB_143db97b5:
      ppFVar9 = ppFVar9 + 1;
    } while (ppFVar9 != ppFVar1);
  }
  return;
}

// UpdateCombinedShapeFilterData @ 143dbb690

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::UpdateCombinedShapeFilterData
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FCombinedShapeFilterData *param_2)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  FPhysicsObject **ppFVar8;
  undefined1 local_res10 [8];
  
  ppFVar8 = param_1->DataPtr;
  ppFVar2 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar2) {
      return;
    }
    pFVar5 = *ppFVar8;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar5->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dbb76c;
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        FVar7 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )TGeometryParticlesImp<double,3,0>::ShapesArray
                            (*(TGeometryParticlesImp<double,3,0> **)pTVar6,
                             *(int *)&pTVar6->field_0x8);
        iVar4 = *(int *)((longlong)FVar7 + 0x10);
        piVar1 = (int *)((longlong)FVar7 + 0x10);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar7 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    *)((longlong)FVar7 + 8);
        }
        FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar7 + (longlong)iVar4 * 8);
        while( true ) {
          if (*piVar1 != iVar4) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar7 == FVar3) break;
          FPerShapeData::SetCombinedShapeFilterData(*(FPerShapeData **)FVar7,param_2);
          FVar7 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   )((longlong)FVar7 + 8);
        }
      }
    }
LAB_143dbb76c:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// UpdateCombinedShapeFilterData @ 143dbb7a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::UpdateCombinedShapeFilterData
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FCombinedShapeFilterData *param_2)

{
  FPhysicsObject **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar5;
  undefined8 *puVar6;
  FPhysicsObject **ppFVar7;
  undefined1 local_res10 [8];
  
  ppFVar7 = param_1->DataPtr;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return;
    }
    pFVar4 = *ppFVar7;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dbb877;
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        puVar6 = (undefined8 *)&pTVar5->field_0x80;
        iVar3 = *(int *)&pTVar5->field_0x90;
        if (*(undefined8 **)&pTVar5->field_0x88 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)&pTVar5->field_0x88;
        }
        puVar2 = puVar6 + iVar3;
        while( true ) {
          if (*(int *)&pTVar5->field_0x90 != iVar3) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar6 == puVar2) break;
          FPerShapeData::SetCombinedShapeFilterData((FPerShapeData *)*puVar6,param_2);
          puVar6 = puVar6 + 1;
        }
      }
    }
LAB_143dbb877:
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// UpdateShapeCollisionFlags @ 143dbc820

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::UpdateShapeCollisionFlags
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  uint uVar5;
  FPhysicsObject *pFVar6;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar7;
  IPhysicsProxyBase *pIVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar10;
  FPhysicsObject **ppFVar11;
  undefined1 local_res10 [8];
  
  ppFVar11 = param_1->DataPtr;
  ppFVar2 = ppFVar11 + param_1->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar6 = *ppFVar11;
    if ((pFVar6 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar6->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar9 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar6->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dbc9ba;
        pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             (*(TGeometryParticlesImp<double,3,0> **)pTVar9,
                              *(int *)&pTVar9->field_0x8);
        iVar4 = *(int *)((longlong)FVar10 + 0x10);
        piVar1 = (int *)((longlong)FVar10 + 0x10);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar10 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar10 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar10 + 8);
        }
        FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar10 + (longlong)iVar4 * 8);
LAB_143dbc8e0:
        do {
          if (*piVar1 != iVar4) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar10 == FVar3) break;
          lVar7 = *(longlong *)FVar10;
          if ((*(uint *)(lVar7 + 8) & 3) == 0) {
            pIVar8 = *(IPhysicsProxyBase **)(lVar7 + 0x48);
            *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar7 + 0x50);
            *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(lVar7 + 0x58);
            *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(lVar7 + 0x60);
            *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar7 + 0x68);
            *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar7 + 0x70);
            *(ulonglong *)(lVar7 + 0x78) =
                 CONCAT17(*(undefined1 *)(lVar7 + 0x7f),
                          CONCAT16(*(undefined1 *)(lVar7 + 0x7e),
                                   CONCAT15(*(undefined1 *)(lVar7 + 0x7d),
                                            CONCAT14(*(undefined1 *)(lVar7 + 0x7c),
                                                     CONCAT13(*(undefined1 *)(lVar7 + 0x7b),
                                                              CONCAT12(*(undefined1 *)(lVar7 + 0x7a)
                                                                       ,CONCAT11(param_3 * '\x02' |
                                                                                 *(byte *)(lVar7 + 
                                                  0x79) & 0xfc | param_2,
                                                  *(undefined1 *)(lVar7 + 0x78))))))));
            uVar5 = *(uint *)(lVar7 + 0xc);
            *(uint *)(lVar7 + 0xc) = uVar5 | 1;
            if (((uVar5 == 0) && (pIVar8 != (IPhysicsProxyBase *)0x0)) &&
               (pIVar8->Solver != (FPhysicsSolverBase *)0x0)) {
              FPhysicsSolverBase::AddDirtyProxyShape
                        (pIVar8->Solver,pIVar8,*(uint *)(lVar7 + 8) >> 3);
              FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                        )((longlong)FVar10 + 8);
              goto LAB_143dbc8e0;
            }
          }
          else {
            *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar7 + 0x48);
            *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar7 + 0x50);
            *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(lVar7 + 0x58);
            *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(lVar7 + 0x60);
            *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar7 + 0x68);
            *(ulonglong *)(lVar7 + 0x70) =
                 CONCAT17(*(undefined1 *)(lVar7 + 0x77),
                          CONCAT16(*(undefined1 *)(lVar7 + 0x76),
                                   CONCAT15(*(undefined1 *)(lVar7 + 0x75),
                                            CONCAT14(*(undefined1 *)(lVar7 + 0x74),
                                                     CONCAT13(*(undefined1 *)(lVar7 + 0x73),
                                                              CONCAT12(*(undefined1 *)(lVar7 + 0x72)
                                                                       ,CONCAT11(param_3 * '\x02' |
                                                                                 *(byte *)(lVar7 + 
                                                  0x71) & 0xfc | param_2,
                                                  *(undefined1 *)(lVar7 + 0x70))))))));
          }
          FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )((longlong)FVar10 + 8);
        } while( true );
      }
    }
LAB_143dbc9ba:
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// UpdateShapeCollisionFlags @ 143dbca00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::UpdateShapeCollisionFlags
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,bool param_2,bool param_3)

{
  FPhysicsObject **ppFVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  IPhysicsProxyBase *pIVar7;
  TPBDRigidParticle<double,3> *pTVar8;
  longlong *plVar9;
  FPhysicsObject **ppFVar10;
  undefined1 local_res10 [8];
  
  ppFVar10 = param_1->DataPtr;
  ppFVar1 = ppFVar10 + param_1->ArrayNum;
  do {
    if (ppFVar10 == ppFVar1) {
      return;
    }
    pFVar5 = *ppFVar10;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar8 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar5->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar8 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dbcb9a;
        pTVar8 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar8 != (TPBDRigidParticle<double,3> *)0x0) {
        plVar9 = (longlong *)&pTVar8->field_0x80;
        iVar3 = *(int *)&pTVar8->field_0x90;
        if (*(longlong **)&pTVar8->field_0x88 != (longlong *)0x0) {
          plVar9 = *(longlong **)&pTVar8->field_0x88;
        }
        plVar2 = plVar9 + iVar3;
LAB_143dbcac0:
        do {
          if (*(int *)&pTVar8->field_0x90 != iVar3) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (plVar9 == plVar2) break;
          lVar6 = *plVar9;
          if ((*(uint *)(lVar6 + 8) & 3) == 0) {
            pIVar7 = *(IPhysicsProxyBase **)(lVar6 + 0x48);
            *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
            *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar6 + 0x58);
            *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar6 + 0x60);
            *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar6 + 0x68);
            *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar6 + 0x70);
            *(ulonglong *)(lVar6 + 0x78) =
                 CONCAT17(*(undefined1 *)(lVar6 + 0x7f),
                          CONCAT16(*(undefined1 *)(lVar6 + 0x7e),
                                   CONCAT15(*(undefined1 *)(lVar6 + 0x7d),
                                            CONCAT14(*(undefined1 *)(lVar6 + 0x7c),
                                                     CONCAT13(*(undefined1 *)(lVar6 + 0x7b),
                                                              CONCAT12(*(undefined1 *)(lVar6 + 0x7a)
                                                                       ,CONCAT11(param_3 * '\x02' |
                                                                                 *(byte *)(lVar6 + 
                                                  0x79) & 0xfc | param_2,
                                                  *(undefined1 *)(lVar6 + 0x78))))))));
            uVar4 = *(uint *)(lVar6 + 0xc);
            *(uint *)(lVar6 + 0xc) = uVar4 | 1;
            if (((uVar4 == 0) && (pIVar7 != (IPhysicsProxyBase *)0x0)) &&
               (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
              FPhysicsSolverBase::AddDirtyProxyShape
                        (pIVar7->Solver,pIVar7,*(uint *)(lVar6 + 8) >> 3);
              plVar9 = plVar9 + 1;
              goto LAB_143dbcac0;
            }
          }
          else {
            *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar6 + 0x48);
            *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
            *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar6 + 0x58);
            *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar6 + 0x60);
            *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar6 + 0x68);
            *(ulonglong *)(lVar6 + 0x70) =
                 CONCAT17(*(undefined1 *)(lVar6 + 0x77),
                          CONCAT16(*(undefined1 *)(lVar6 + 0x76),
                                   CONCAT15(*(undefined1 *)(lVar6 + 0x75),
                                            CONCAT14(*(undefined1 *)(lVar6 + 0x74),
                                                     CONCAT13(*(undefined1 *)(lVar6 + 0x73),
                                                              CONCAT12(*(undefined1 *)(lVar6 + 0x72)
                                                                       ,CONCAT11(param_3 * '\x02' |
                                                                                 *(byte *)(lVar6 + 
                                                  0x71) & 0xfc | param_2,
                                                  *(undefined1 *)(lVar6 + 0x70))))))));
          }
          plVar9 = plVar9 + 1;
        } while( true );
      }
    }
LAB_143dbcb9a:
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// UpdateShapeFilterData @ 143dbcbe0

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::UpdateShapeFilterData
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FCollisionFilterData *param_2,
          FCollisionFilterData *param_3)

{
  int *piVar1;
  FPhysicsObject **ppFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar7;
  FPhysicsObject **ppFVar8;
  undefined1 local_res10 [8];
  FCombinedShapeFilterData local_38;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter(&local_38,param_2,param_3);
  ppFVar8 = param_1->DataPtr;
  ppFVar2 = ppFVar8 + (int)*(undefined8 *)&param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar2) {
      return;
    }
    pFVar5 = *ppFVar8;
    if ((pFVar5 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar5->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this_00->field_0x1c;
      if (iVar4 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (this_00,pFVar5->BodyIndex);
      }
      else if (iVar4 == 0xb) {
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143dbccce;
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(this_00->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        FVar7 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )TGeometryParticlesImp<double,3,0>::ShapesArray
                            (*(TGeometryParticlesImp<double,3,0> **)pTVar6,
                             *(int *)&pTVar6->field_0x8);
        iVar4 = *(int *)((longlong)FVar7 + 0x10);
        piVar1 = (int *)((longlong)FVar7 + 0x10);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar7 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar7 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    *)((longlong)FVar7 + 8);
        }
        FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar7 + (longlong)iVar4 * 8);
        while( true ) {
          if (*piVar1 != iVar4) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar7 == FVar3) break;
          FPerShapeData::SetCombinedShapeFilterData(*(FPerShapeData **)FVar7,&local_38);
          FVar7 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   )((longlong)FVar7 + 8);
        }
      }
    }
LAB_143dbccce:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// UpdateShapeFilterData @ 143dbcd00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::UpdateShapeFilterData
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1,FCollisionFilterData *param_2,
          FCollisionFilterData *param_3)

{
  FPhysicsObject **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPhysicsObject *pFVar4;
  FGeometryCollectionPhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar5;
  undefined8 *puVar6;
  FPhysicsObject **ppFVar7;
  undefined1 local_res10 [8];
  FCombinedShapeFilterData local_38;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter(&local_38,param_2,param_3);
  ppFVar7 = param_1->DataPtr;
  ppFVar1 = ppFVar7 + (int)*(undefined8 *)&param_1->ArrayNum;
  do {
    if (ppFVar7 == ppFVar1) {
      return;
    }
    pFVar4 = *ppFVar7;
    if ((pFVar4 != (FPhysicsObject *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)pFVar4->Proxy,
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this_00->field_0x1c;
      if (iVar3 == 2) {
        pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (this_00,pFVar4->BodyIndex);
      }
      else if (iVar3 == 0xb) {
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143dbcde9;
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (this_00->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if (pTVar5 != (TPBDRigidParticle<double,3> *)0x0) {
        puVar6 = (undefined8 *)&pTVar5->field_0x80;
        iVar3 = *(int *)&pTVar5->field_0x90;
        if (*(undefined8 **)&pTVar5->field_0x88 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)&pTVar5->field_0x88;
        }
        puVar2 = puVar6 + iVar3;
        while( true ) {
          if (*(int *)&pTVar5->field_0x90 != iVar3) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (puVar6 == puVar2) break;
          FPerShapeData::SetCombinedShapeFilterData((FPerShapeData *)*puVar6,&local_38);
          puVar6 = puVar6 + 1;
        }
      }
    }
LAB_143dbcde9:
    ppFVar7 = ppFVar7 + 1;
  } while( true );
}

// WakeUp @ 143dbd230

void __thiscall
Chaos::FWritePhysicsObjectInterface<1>::WakeUp
          (FWritePhysicsObjectInterface<1> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  FPBDRigidsEvolutionBase *this_00;
  EObjectStateType EVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPhysicsObject **ppFVar8;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar8;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&pFVar4->field_0x1c;
      if (iVar2 == 2) {
        pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                           (pFVar4,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).Name.Data.ArrayNum;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143dbd3ab;
        pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  &(pFVar4->Parameters).InitializationCommands.ArrayNum;
      }
      if ((pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&pFVar4->field_0x1c;
        if (iVar2 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                             (pFVar4,pFVar3->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(pFVar4->Parameters).Name.Data.ArrayNum;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143dbd3ab;
          pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                    &(pFVar4->Parameters).InitializationCommands.ArrayNum;
        }
        if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar6->field_0xc) {
            pTVar7 = pTVar6;
          }
          if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (pTVar6->field_0xc != 0) {
              pTVar7 = pTVar6;
            }
            if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar5 = Static;
            }
            else {
              pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar7->field_0xc) {
                pTVar6 = pTVar7;
              }
              if (pTVar6 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                EVar5 = Kinematic;
              }
              else {
                EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar6);
              }
            }
          }
          else {
            EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar7);
          }
          if (((EVar5 == Dynamic) || (EVar5 == Sleeping)) &&
             (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
             pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
            iVar2 = *(int *)&pFVar4->field_0x1c;
            if (iVar2 == 2) {
              pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                                 (pFVar4,pFVar3->BodyIndex);
            }
            else if (iVar2 == 0xb) {
              pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                        &(pFVar4->Parameters).Name.Data.ArrayNum;
            }
            else {
              if (iVar2 != 0xc) goto LAB_143dbd3ab;
              pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                        &(pFVar4->Parameters).InitializationCommands.ArrayNum;
            }
            if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar6->field_0xc) {
                pTVar7 = pTVar6;
              }
              if (((pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                  (*(longlong *)&pFVar4->field_0x8 != 0)) &&
                 (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&pFVar4->field_0x8 + 0xbd0),
                 this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
                FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar7,Dynamic);
              }
            }
          }
        }
      }
    }
LAB_143dbd3ab:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// WakeUp @ 143dbd3e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FWritePhysicsObjectInterface<0>::WakeUp
          (FWritePhysicsObjectInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_*_const,int> *param_1)

{
  FPhysicsObject **ppFVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  FGeometryCollectionPhysicsProxy *pFVar4;
  TPBDRigidParticle<double,3> *pTVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  EObjectStateType EVar7;
  FPhysicsObject **ppFVar8;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar8;
    if ((pFVar3 != (FPhysicsObject *)0x0) &&
       (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
       pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar2 = *(int *)&pFVar4->field_0x1c;
      if (iVar2 == 2) {
        pTVar5 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                           (pFVar4,pFVar3->BodyIndex);
      }
      else if (iVar2 == 0xb) {
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (pFVar4->Parameters).Name.Data.AllocatorInstance.Data;
      }
      else {
        if (iVar2 != 0xc) goto LAB_143dbd4dd;
        pTVar5 = (TPBDRigidParticle<double,3> *)
                 (pFVar4->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
      }
      if ((pTVar5 != (TPBDRigidParticle<double,3> *)0x0) &&
         (pFVar4 = (FGeometryCollectionPhysicsProxy *)pFVar3->Proxy,
         pFVar4 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        iVar2 = *(int *)&pFVar4->field_0x1c;
        if (iVar2 == 2) {
          pTVar6 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                             (pFVar4,pFVar3->BodyIndex);
        }
        else if (iVar2 == 0xb) {
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (pFVar4->Parameters).Name.Data.AllocatorInstance.Data;
        }
        else {
          if (iVar2 != 0xc) goto LAB_143dbd4dd;
          pTVar6 = (TPBDRigidParticle<double,3> *)
                   (pFVar4->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
        }
        if (pTVar6 != (TPBDRigidParticle<double,3> *)0x0) {
          if ((byte)pTVar6->field_0x98 < 2) {
            EVar7 = Kinematic;
            if (pTVar6->field_0x98 == 0) {
              EVar7 = Static;
            }
          }
          else {
            EVar7 = (pTVar6->MMiscData).Property.MObjectState;
          }
          if (((EVar7 == Dynamic) || (EVar7 == Sleeping)) &&
             (::`anonymous_namespace'::SetParticleStateHelper<0>(pFVar3,Dynamic),
             1 < (byte)pTVar5->field_0x98)) {
            pTVar5->MWakeEvent = None;
          }
        }
      }
    }
LAB_143dbd4dd:
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// operator() @ 1504a8830

bool __thiscall
`Chaos::FWritePhysicsObjectInterface<1>::SetUserDefinedEntity'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5286570181156406107>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5286570181156406107>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::FWritePhysicsObjectInterface<1>::SetUserDefinedEntity(TArrayView<Chaos::FPhysicsObject*___ptr64_const,int>,FChaosUserDefinedEntity*___ptr64)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

