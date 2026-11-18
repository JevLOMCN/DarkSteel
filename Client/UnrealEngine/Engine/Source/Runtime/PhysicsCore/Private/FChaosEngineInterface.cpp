// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 177

// operator() @ 1441a1cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FChaosEngineInterface::SerializeParticleStateToBuffer'::__l2::<lambda_1>::operator()
          (void *this,FPBDRigidsSolver *param_1,FSerializedDataBuffer *param_2)

{
  FPBDRigidsSolver *this_00;
  FScriptContainerElement *pFVar1;
  FSolverSerializer *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_res8;
  FName local_res20;
  FString local_18;
  
  if (*(longlong *)(*(longlong *)this + 0x48) != 0) {
    pFVar2 = Chaos::FPBDRigidsSolver::GetSerializer(param_1);
    Chaos::FSolverSerializer::SerializeParticleStateToBuffer
              (pFVar2,*(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)this + 0x48),param_2
              );
    return;
  }
  pFVar2 = Chaos::FPBDRigidsSolver::GetSerializer(param_1);
  Chaos::FSolverSerializer::PopPendingInternalSerializedStateForProxy
            (pFVar2,(IPhysicsProxyBase *)&local_res8);
  if (local_res8 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(longlong *)this == 0) {
      if ((byte)LogChaos._0_1_ < 3) goto LAB_1441a1e0e;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    else {
      this_00 = *(FPBDRigidsSolver **)(*(longlong *)this + 8);
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        pFVar2 = Chaos::FPBDRigidsSolver::GetSerializer(this_00);
        Chaos::FSolverSerializer::SerializeParticleStateToBuffer
                  (pFVar2,*(TGeometryParticle<double,3> **)(*(longlong *)this + 0x40),param_2);
      }
    }
    if (2 < (byte)LogChaos._0_1_) {
      if (*(longlong *)(*(longlong *)this + 0x10) == 0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res20 = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
        ::FName::ToString(&local_res20,&local_18);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
    Append<unsigned_char,TSizedDefaultAllocator<32>_>(&param_2->DataBuffer,local_res8);
  }
LAB_1441a1e0e:
  if (local_res8 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (local_res8->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(local_res8,0x10);
  }
  return;
}

// operator() @ 1441a1e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FChaosEngineInterface::SerializeConstraintStateToBuffer'::__l26::<lambda_1>::operator()
          (void *this,IPhysicsProxyBase *param_1,FPBDRigidsSolver *param_2,
          FSerializedDataBuffer *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FConstraintHandle *pFVar7;
  FSolverSerializer *pFVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_res10;
  FName local_38;
  FString local_30;
  
  pFVar7 = (FConstraintHandle *)(**(code **)param_1->_padding_)(param_1);
  if (pFVar7 != (FConstraintHandle *)0x0) {
    pFVar8 = Chaos::FPBDRigidsSolver::GetSerializer(param_2);
    Chaos::FSolverSerializer::SerializeConstraintStateToBuffer(pFVar8,pFVar7,param_3);
    return;
  }
  pFVar8 = Chaos::FPBDRigidsSolver::GetSerializer(param_2);
  Chaos::FSolverSerializer::PopPendingInternalSerializedStateForProxy
            (pFVar8,(IPhysicsProxyBase *)&local_res10);
  if (local_res10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    plVar1 = *(longlong **)this;
    if (((FConstraintBase *)*plVar1 == (FConstraintBase *)0x0) ||
       (bVar6 = Chaos::FConstraintBase::IsValid((FConstraintBase *)*plVar1), !bVar6)) {
      if ((byte)LogChaos._0_1_ < 3) goto LAB_1441a1feb;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    else {
      lVar2 = *(longlong *)(*plVar1 + 0x10);
      if ((lVar2 != 0) && (*(FPBDRigidsSolver **)(lVar2 + 8) != (FPBDRigidsSolver *)0x0)) {
        if ((*(int *)(lVar2 + 0x1c) == 10) || (*(int *)(lVar2 + 0x1c) - 8U < 2)) {
          pFVar8 = Chaos::FPBDRigidsSolver::GetSerializer(*(FPBDRigidsSolver **)(lVar2 + 8));
          Chaos::FSolverSerializer::SerializeConstraintStateToBuffer
                    (pFVar8,(FConstraintBase *)*plVar1,param_3);
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8752542440373614346>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                             ,0x8f6,"bIsConstraintProxy");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
    }
    if (2 < (byte)LogChaos._0_1_) {
      pUVar3 = param_1->Owner;
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_30,L"None");
      }
      else {
        local_38.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_38.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_38,&local_30);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
    Append<unsigned_char,TSizedDefaultAllocator<32>_>(&param_3->DataBuffer,local_res10);
  }
LAB_1441a1feb:
  if (local_res10 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar4 = (local_res10->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(local_res10,0x10);
  }
  return;
}

// AddActorToAggregate_AssumesLocked @ 1441a31f0

void __cdecl
FChaosEngineInterface::AddActorToAggregate_AssumesLocked
          (FPhysicsAggregateReference_Chaos *param_1,FSingleParticlePhysicsProxy **param_2)

{
  return;
}

// AddActorToSolver @ 1441a3200

void __cdecl
FChaosEngineInterface::AddActorToSolver
          (FSingleParticlePhysicsProxy **param_1,FPBDRigidsSolver *param_2)

{
  Chaos::FPBDRigidsSolver::RegisterObject(param_2,*param_1);
  return;
}

// AddAngularImpulseInRadians_AssumesLocked @ 1441a3830

void __cdecl
FChaosEngineInterface::AddAngularImpulseInRadians_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_3) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddAngularImpulseInRadians
                ((FRigidBodyHandle_Internal *)pFVar3,param_2);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddAngularImpulseInRadians
              ((FRigidBodyHandle_External *)pFVar3,param_2);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615581>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x423,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddAngularVelocityInRadians_AssumesLocked @ 1441a38a0

void __cdecl
FChaosEngineInterface::AddAngularVelocityInRadians_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TVector<double,3> *pTVar6;
  FSingleParticlePhysicsProxy *this;
  undefined1 local_res8 [8];
  double *local_1d8;
  undefined2 local_1d0;
  FSingleParticlePhysicsProxy *local_1c8;
  TVector<double>_u_0 local_1c0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  TVector<double,3> local_70 [4];
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x441,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_3) {
    if (this->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this = (FSingleParticlePhysicsProxy *)0x0;
    }
    Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
    GetWorldInertia<Chaos::FRigidBodyHandle_Internal_*>
              ((PMatrix<double,3,3> *)&local_188,(FRigidBodyHandle_Internal *)this);
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    local_1c0._s_0.X = local_180 * dVar4 + local_188 * dVar3 + local_178 * dVar1;
    local_1c0._s_0.Y = local_168 * dVar3 + local_160 * dVar4 + local_158 * dVar1;
    local_1c0._s_0.Z = local_140 * dVar4 + local_148 * dVar3 + dVar1 * local_138;
    FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddAngularImpulseInRadians
              ((FRigidBodyHandle_Internal *)this,(TVector<double> *)&local_1c0._s_0);
  }
  else {
    Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
    GetWorldInertia<Chaos::FRigidBodyHandle_External_*>
              ((PMatrix<double,3,3> *)&local_108,(FRigidBodyHandle_External *)this);
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar6 = `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AngularImpulse'::__l2::<lambda_1>::
             operator()<Chaos::TGeometryParticle<double,3>_const_>
                       (local_res8,local_70,(this->Particle).Ptr);
    local_1d0 = 0x100;
    local_1d8 = &local_1a8;
    local_1a8 = local_100 * dVar4 + local_108 * dVar3 + local_f8 * dVar1 + *(double *)pTVar6;
    local_1a0 = local_e0 * dVar4 + local_e8 * dVar3 + local_d8 * dVar1 +
                *(double *)&pTVar6->field_0x8;
    local_198 = local_c0 * dVar4 + local_c8 * dVar3 + dVar1 * local_b8 +
                *(double *)&pTVar6->field_0x10;
    local_1c8 = this;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    `Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetAngularImpulse'::__l2::<lambda_1>::
    operator()<Chaos::TGeometryParticle<double,3>_>(&local_1d8,(this->Particle).Ptr);
  }
  return;
}

// AddDisabledCollisionsFor_AssumesLocked @ 1441a3af0

void __cdecl
FChaosEngineInterface::AddDisabledCollisionsFor_AssumesLocked
          (TMap<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,0>_>
           *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  void *_Src;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  ForElementType<FSetElementId> FVar4;
  TThreadedSingleParticlePhysicsProxyBase<1> *pTVar5;
  code *pcVar6;
  TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  ForElementType<FSetElementId> FVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FUniqueIdx local_res20 [2];
  undefined4 local_f8 [2];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  TThreadedSingleParticlePhysicsProxyBase<1> *local_e0;
  ForAnyElementType local_d8;
  uint local_d0;
  int local_cc;
  TMap<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>
  local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FUniqueIdx *local_58;
  ForAnyElementType *local_50;
  
  if (bEnableChaosCollisionManager) {
    iVar11 = *(int *)&param_1->field_0x28;
    iStack_c0 = 0;
    local_a8 = 0;
    uStack_bc = 1;
    puVar1 = &param_1->field_0x10;
    iStack_ac = 0;
    if (iVar11 != 0) {
      puVar20 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar15 = *puVar20;
      while (uVar15 == 0) {
        lVar9 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1441a3bad;
        uVar15 = puVar20[lVar9 + 1];
      }
      uStack_bc = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_bc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_98 = (int)lVar9;
      iStack_ac = local_a8 + -1 + local_98;
      if (iVar11 < iStack_ac) {
        iStack_ac = iVar11;
      }
    }
LAB_1441a3bad:
    uVar15 = *(uint *)&param_1->field_0x28;
    uVar14 = uVar15 & 0xffffffe0;
    iStack_a0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    uStack_b0 = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_80.CurrentBitIndex = iStack_ac;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_80._28_4_ = iStack_ac;
    TStack_80.BaseBitIndex = local_a8;
    uStack_60 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = param_1;
    local_b8 = puVar1;
    iStack_a4 = iStack_ac;
    local_90.Value = (TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *)param_1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = *(uint *)&param_1->field_0x28;
    if (uVar15 != uVar3) {
      puVar18 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar9 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1441a3cad;
        uVar15 = *(uint *)(puVar18 + lVar9 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_94 = (int)lVar9;
      uVar15 = local_94 + -1 + uVar14;
      if ((int)uVar3 < (int)uVar15) {
        uVar15 = uVar3;
      }
    }
LAB_1441a3cad:
    while( true ) {
      pTVar7 = local_90.Value;
      if ((local_90.Value)->ArrayNum - *(int *)((longlong)local_90.Value + 0x34) != (int)uStack_60)
      {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar15) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         ((TMap<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_>,0>_>
           *)pTVar7 == param_1)) break;
      lVar9 = *(longlong *)pTVar7;
      lVar10 = (longlong)TStack_80.CurrentBitIndex * 0x20;
      local_e0 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)(lVar10 + lVar9);
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = *(uint *)(lVar10 + 0x10 + lVar9);
      lVar16 = (longlong)(int)local_d0;
      _Src = *(void **)(lVar10 + 8 + lVar9);
      if (local_d0 == 0) {
        local_cc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_d0,0,&local_d8,local_d0,&local_cc);
        memcpy(local_d8.Data,_Src,lVar16 << 3);
      }
      pTVar5 = local_e0;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(local_e0);
      local_res20[0].Idx = *(uint *)(*(longlong *)&pTVar5->field_0x40 + 0x58);
      iVar11 = *(int *)(*(longlong *)&local_e0->field_0x8 + 0xa0);
      lVar9 = *(longlong *)(*(longlong *)&local_e0->field_0x8 + 0xbd0);
      lVar10 = *(longlong *)(lVar9 + 0x1128);
      iVar13 = *(int *)(lVar10 + 0xa0);
      if (iVar13 == -1) {
        *(int *)(lVar10 + 0xa0) = iVar11;
      }
      else if ((iVar13 != iVar11) &&
              (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3527348243820183450>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintFlags.h"
                                  ,0x66,
                                  "StorageDataProducer->ExternalTimestamp == ExternalTimestamp"),
              bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *(TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               **)(lVar9 + 0x1128);
      if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
        FVar4 = (this->Hash).SecondaryData;
        FVar19 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar19 = FVar4;
        }
        iVar11 = *(int *)((longlong)FVar19 +
                         (ulonglong)(this->HashSize - 1U & local_res20[0].Idx) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)((longlong)iVar11 * 0x20 + *(longlong *)&this->Elements) ==
                local_res20[0].Idx) {
              TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<Chaos::FUniqueIdx>(this,local_res20[0].Idx,local_res20);
              break;
            }
            iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&this->Elements);
          } while (iVar11 != -1);
        }
      }
      uVar12 = (ulonglong)local_d0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      if ((int)local_d0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar12);
      }
      if (0 < (int)local_d0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_d0,&local_f0,0,(int *)((longlong)&local_e8 + 4));
        uVar12 = (ulonglong)local_d0;
      }
      if (1 < *(byte *)(*(longlong *)&local_e0->field_0x40 + 0x98)) {
        iVar11 = (int)uVar12;
        pFVar2 = local_d8.Data + (longlong)iVar11 * 8;
        FVar17.Data = local_d8.Data;
        while( true ) {
          if ((int)uVar12 != iVar11) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::FSingleParticlePhysicsProxy_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res18);
            uVar12 = (ulonglong)local_d0;
          }
          if (FVar17.Data == pFVar2) break;
          pTVar5 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)FVar17.Data;
          if (1 < *(byte *)(*(longlong *)&pTVar5->field_0x40 + 0x98)) {
            Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(pTVar5);
            local_f8[0] = *(undefined4 *)(*(longlong *)&pTVar5->field_0x40 + 0x58);
            if (((local_f0.Data <= (FScriptContainerElement *)local_f8) &&
                ((FScriptContainerElement *)local_f8 < local_f0.Data + (longlong)local_e8._4_4_ * 4)
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar13 = (int)local_e8;
            if ((int)local_e8 == local_e8._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_f0,(int *)((longlong)&local_e8 + 4));
            }
            local_e8 = CONCAT44(local_e8._4_4_,iVar13 + 1);
            *(undefined4 *)(local_f0.Data + (longlong)iVar13 * 4) = local_f8[0];
            uVar12 = (ulonglong)local_d0;
          }
          FVar17.Data = FVar17.Data + 8;
        }
      }
      local_58 = local_res20;
      local_50 = &local_f0;
      TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>_>
                (this,&local_90,(bool *)&local_58);
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return;
}

// AddForceAtPosition_AssumesLocked @ 1441a4df0

void __cdecl
FChaosEngineInterface::AddForceAtPosition_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4,bool param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_6) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddForceAtPosition
                ((FRigidBodyHandle_Internal *)pFVar3,param_2,param_3,param_4,param_5);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddForceAtPosition
              ((FRigidBodyHandle_External *)pFVar3,param_2,param_3,param_4,param_5);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615474>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x48e,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddForce_AssumesLocked @ 1441a4e70

void __cdecl
FChaosEngineInterface::AddForce_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_5) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddForce
                ((FRigidBodyHandle_Internal *)pFVar3,param_2,param_3,param_4);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddForce
              ((FRigidBodyHandle_External *)pFVar3,param_2,param_3,param_4);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615489>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x47f,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddImpulseAtLocation_AssumesLocked @ 1441a5440

void __cdecl
FChaosEngineInterface::AddImpulseAtLocation_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_4) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddImpulseAtLocation
                ((FRigidBodyHandle_Internal *)pFVar3,param_2,param_3);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddImpulseAtLocation
              ((FRigidBodyHandle_External *)pFVar3,param_2,param_3);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615536>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x450,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddImpulse_AssumesLocked @ 1441a54b0

void __cdecl
FChaosEngineInterface::AddImpulse_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_3) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddImpulse
                ((FRigidBodyHandle_Internal *)pFVar3,param_2);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddImpulse
              ((FRigidBodyHandle_External *)pFVar3,param_2);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615596>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x414,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddRadialForce_AssumesLocked @ 1441a5bf0

void __cdecl
FChaosEngineInterface::AddRadialForce_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,float param_3,
          float param_4,uchar param_5,bool param_6,bool param_7,bool param_8)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_8) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddRadialForce
                ((FRigidBodyHandle_Internal *)pFVar3,param_2,param_3,param_4,param_5,param_6,param_7
                );
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddRadialForce
              ((FRigidBodyHandle_External *)pFVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615458>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x49e,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddRadialImpulse_AssumesLocked @ 1441a6170

void __cdecl
FChaosEngineInterface::AddRadialImpulse_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,float param_3,
          float param_4,ERadialImpulseFalloff param_5,bool param_6,bool param_7)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  bool bVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615504>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x470,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
code_r0x0001441a6215:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar3 = (this->Particle).Ptr;
    if (pTVar3->Type < Rigid) {
      pTVar3 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar3 == (TGeometryParticle<double,3> *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8752542440373615504>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                         ,0x470,"InActorReference->GetGameThreadAPI().CanTreatAsRigid()");
      if (bVar2) goto code_r0x0001441a6215;
    }
    else {
      pTVar3 = (TGeometryParticle<double,3> *)*param_1;
      if (param_7) {
        if (*(longlong *)&(pTVar3->MXR).Property.MR.field_0x8 == 0) {
          pTVar3 = (TGeometryParticle<double,3> *)0x0;
        }
        FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddRadialImpulse
                  ((FRigidBodyHandle_Internal *)pTVar3,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddRadialImpulse
                  ((FRigidBodyHandle_External *)pTVar3,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}

// AddTorque_AssumesLocked @ 1441a6790

void __cdecl
FChaosEngineInterface::AddTorque_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_5) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddTorque
                ((FRigidBodyHandle_Internal *)pFVar3,param_2,param_3,param_4);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddTorque
              ((FRigidBodyHandle_External *)pFVar3,param_2,param_3,param_4);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615443>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x4ad,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddVelocityChangeImpulseAtLocation_AssumesLocked @ 1441a6c40

void __cdecl
FChaosEngineInterface::AddVelocityChangeImpulseAtLocation_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  FSingleParticlePhysicsProxy *this;
  FSingleParticlePhysicsProxy *this_00;
  double dVar5;
  FString *pFVar6;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615519>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x461,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_4) {
    if (this->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this = (FSingleParticlePhysicsProxy *)0x0;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
    this_00 = (FSingleParticlePhysicsProxy *)0x0;
    if (1 < *(byte *)((longlong)&((FSingleParticlePhysicsProxy *)this->Handle)->_padding_ + 4)) {
      this_00 = (FSingleParticlePhysicsProxy *)this->Handle;
    }
    if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    local_38._s_0.Z = dVar5 * (param_2->field0_0x0)._s_0.Z;
    dVar2 = dVar5 * (param_2->field0_0x0)._s_0.Y;
    local_38._8_4_ = SUB84(dVar2,0);
    local_38._0_8_ = dVar5 * (param_2->field0_0x0)._s_0.X;
    local_38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddImpulseAtLocation
              ((FRigidBodyHandle_Internal *)this,(TVector<double> *)&local_38._s_0,param_3);
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 == (TGeometryParticle<double,3> *)0x0) {
      pFVar6 = (FString *)0x0;
    }
    else {
      pFVar6 = pTVar4[1].MNonFrequentData.Property.MDebugName.Object;
    }
    local_20._s_0.Z = (double)pFVar6 * (param_2->field0_0x0)._s_0.Z;
    dVar5 = (double)pFVar6 * (param_2->field0_0x0)._s_0.Y;
    local_20._8_4_ = SUB84(dVar5,0);
    local_20._0_8_ = (double)pFVar6 * (param_2->field0_0x0)._s_0.X;
    local_20._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddImpulseAtLocation
              ((FRigidBodyHandle_External *)this,(TVector<double> *)&local_20._s_0,param_3);
  }
  return;
}

// AddVelocity_AssumesLocked @ 1441a6d90

void __cdecl
FChaosEngineInterface::AddVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  
  pFVar3 = *param_1;
  if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
    if (param_3) {
      if (pFVar3->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
      }
      FChaosStateOps<Chaos::FRigidBodyHandle_Internal>::AddVelocity
                ((FRigidBodyHandle_Internal *)pFVar3,param_2);
      return;
    }
    FChaosStateOps<Chaos::FRigidBodyHandle_External>::AddVelocity
              ((FRigidBodyHandle_External *)pFVar3,param_2);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615566>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x432,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ApplySerializedStateToConstraint @ 1441a6f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosEngineInterface::ApplySerializedStateToConstraint
          (FPhysicsConstraintReference_Chaos *param_1,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_2,ESerializedDataContext param_3)

{
  IPhysicsProxyBase *pIVar1;
  FPBDRigidsSolver *this;
  bool bVar2;
  FSolverSerializer *pFVar3;
  FConstraintHandle *pFVar4;
  
  if (param_1->Constraint == (FConstraintBase *)0x0) {
    return;
  }
  bVar2 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
  if (!bVar2) {
    return;
  }
  if (param_2->Ptr == (FSerializedDataBuffer *)0x0) {
    return;
  }
  pIVar1 = param_1->Constraint->Proxy;
  if (pIVar1 == (IPhysicsProxyBase *)0x0) {
    return;
  }
  this = (FPBDRigidsSolver *)pIVar1->Solver;
  if (this == (FPBDRigidsSolver *)0x0) {
    return;
  }
  if (param_3 == Invalid) {
LAB_1441a7045:
    if (2 < (byte)LogChaos._0_1_) {
      Chaos::LexToString(param_3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    if (param_3 != Internal) {
      if (param_3 == External) {
        pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
        Chaos::FSolverSerializer::ApplySerializedStateToConstraint
                  (pFVar3,param_1->Constraint,param_2->Ptr);
        return;
      }
      if (param_3 != Both) goto LAB_1441a7045;
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      Chaos::FSolverSerializer::ApplySerializedStateToConstraint
                (pFVar3,param_1->Constraint,param_2->Ptr);
    }
    pFVar4 = (FConstraintHandle *)(**(code **)pIVar1->_padding_)(pIVar1);
    if (pFVar4 == (FConstraintHandle *)0x0) {
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      Chaos::FSolverSerializer::PushPendingInternalSerializedStateForProxy(pFVar3,pIVar1,param_2);
    }
    else {
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      Chaos::FSolverSerializer::ApplySerializedStateToConstraint(pFVar3,pFVar4,param_2->Ptr);
    }
  }
  return;
}

// ApplySerializedStateToParticle @ 1441a70a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosEngineInterface::ApplySerializedStateToParticle
          (FSingleParticlePhysicsProxy **param_1,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_2,ESerializedDataContext param_3)

{
  FSingleParticlePhysicsProxy *pFVar1;
  FPBDRigidsSolver *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FSolverSerializer *pFVar3;
  
  pFVar1 = *param_1;
  if (pFVar1 == (FSingleParticlePhysicsProxy *)0x0) {
    return;
  }
  if (param_2->Ptr == (FSerializedDataBuffer *)0x0) {
    return;
  }
  this = (FPBDRigidsSolver *)pFVar1->_padding_;
  if (this == (FPBDRigidsSolver *)0x0) {
    return;
  }
  if (param_3 == Invalid) {
LAB_1441a7185:
    if (2 < (byte)LogChaos._0_1_) {
      Chaos::LexToString(param_3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    if (param_3 == Internal) {
      pTVar2 = pFVar1->Handle;
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        Chaos::FSolverSerializer::ApplySerializedStateToParticle(pFVar3,pTVar2,param_2->Ptr);
        return;
      }
    }
    else {
      if (param_3 == External) {
        pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
        Chaos::FSolverSerializer::ApplySerializedStateToParticle
                  (pFVar3,((*param_1)->Particle).Ptr,param_2->Ptr);
        return;
      }
      if (param_3 != Both) goto LAB_1441a7185;
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      Chaos::FSolverSerializer::ApplySerializedStateToParticle
                (pFVar3,((*param_1)->Particle).Ptr,param_2->Ptr);
      pTVar2 = (*param_1)->Handle;
      pFVar3 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        Chaos::FSolverSerializer::ApplySerializedStateToParticle(pFVar3,pTVar2,param_2->Ptr);
        return;
      }
    }
    Chaos::FSolverSerializer::PushPendingInternalSerializedStateForProxy
              (pFVar3,(IPhysicsProxyBase *)*param_1,param_2);
  }
  return;
}

// AttachShape @ 1441a7200

void __cdecl
FChaosEngineInterface::AttachShape
          (FSingleParticlePhysicsProxy **param_1,FPhysicsShapeReference_Chaos *param_2)

{
  return;
}

// CanSimulate_AssumesLocked @ 1441a7270

bool __cdecl FChaosEngineInterface::CanSimulate_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  return true;
}

// CloneShape @ 1441a74d0

FPhysicsShapeReference_Chaos * __cdecl
FChaosEngineInterface::CloneShape
          (FPhysicsShapeReference_Chaos *__return_storage_ptr__,
          FPhysicsShapeReference_Chaos *param_1)

{
  __return_storage_ptr__->Shape = param_1->Shape;
  __return_storage_ptr__->ActorRef = (FSingleParticlePhysicsProxy *)0x0;
  return __return_storage_ptr__;
}

// CreateActor @ 1441a7650

void __cdecl
FChaosEngineInterface::CreateActor
          (FActorCreationParams *param_1,FSingleParticlePhysicsProxy **param_2,UObject *param_3)

{
  FSpatialAccelerationIdx *pFVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
  TVar11;
  bool bVar12;
  FSpatialAccelerationIdx FVar13;
  int iVar14;
  TGeometryParticle<double,3> *this;
  TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
  TVar15;
  FSingleParticlePhysicsProxy *this_00;
  TPBDRigidParticle<double,3> *pTVar16;
  FString *this_01;
  TPBDRigidParticle<double,3> *pTVar17;
  IPhysicsProxyBase *pIVar18;
  FGeometryParticleParameters local_res8 [8];
  FLLMScope local_res10 [5];
  FPBDRigidParticleParameters local_res20 [2];
  TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
  local_f8;
  TRawPtrProxy<FString> local_f0;
  FMemScope local_e8 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  TSharedPtr<FString,1> local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  FLLMScope::FLLMScope(local_res10,ChaosActor,false,None,Default,true);
  FMemScope::FMemScope(local_e8,ChaosActor,true);
  pTVar17 = (TPBDRigidParticle<double,3> *)0x0;
  local_f8.Ptr = (TGeometryParticle<double,3> *)0x0;
  if (param_1->bStatic == false) {
    local_res20[0]._padding_ = '\0';
    local_res20[0].bStartSleeping = false;
    local_res20[0].bGravityEnabled = true;
    local_res20[0].bCCDEnabled = false;
    pTVar16 = ::operator_new(0x1c0);
    TVar15.Ptr = (TGeometryParticle<double,3> *)pTVar17;
    if (pTVar16 != (TPBDRigidParticle<double,3> *)0x0) {
      TVar15.Ptr = (TGeometryParticle<double,3> *)
                   Chaos::TPBDRigidParticle<double,3>::TPBDRigidParticle<double,3>
                             (pTVar16,local_res20);
    }
    pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
    (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MControlFlags.field0_0x0.Bits
         = (ushort)(param_1->bEnableGravity & 1) |
           (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MControlFlags.
           field0_0x0.Bits & 0xfffe;
    *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
         *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 8;
    if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
    }
    pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
    (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MControlFlags.field0_0x0.Bits
         = (ushort)(param_1->bUpdateKinematicFromSimulation & 1) << 8 |
           (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MControlFlags.
           field0_0x0.Bits & 0xfeff;
    *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
         *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 8;
    if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
    }
    if (param_1->bSimulatePhysics == false) {
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MObjectState = Kinematic;
      *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 8;
      if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
      }
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      ((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x5e = 1;
    }
    else if (param_1->bStartAwake == false) {
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      *(undefined8 *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0xa0 = 0;
      *(undefined4 *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0xa8 = 0;
      *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 2;
      if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
      }
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      *(undefined8 *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0xac = 0;
      *(undefined4 *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0xb4 = 0;
      *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 2;
      if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
      }
      uVar3 = *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c;
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      (((TPBDRigidParticle<double,3> *)TVar15.Ptr)->MMiscData).Property.MObjectState = Sleeping;
      *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c = uVar3 & 0xfffffffb | 8;
      if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
      }
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      ((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x5e = 0;
    }
    else {
      Chaos::TPBDRigidParticle<double,3>::SetObjectState
                ((TPBDRigidParticle<double,3> *)TVar15.Ptr,Dynamic,false,true);
      pIVar18 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x10;
      ((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x5e = 0;
    }
    *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c =
         *(uint *)&((TPBDRigidParticle<double,3> *)TVar15.Ptr)->field_0x9c | 0x10;
    if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
    }
    TVar11.Ptr = local_f8.Ptr;
    if (local_f8.Ptr != (TGeometryParticle<double,3> *)0x0) {
      plVar10 = &(local_f8.Ptr)->_padding_;
      local_f8.Ptr = TVar15.Ptr;
      (**(code **)*plVar10)(TVar11.Ptr,1);
      TVar15.Ptr = local_f8.Ptr;
    }
  }
  else {
    local_res8[0].bDisabled = false;
    this = ::operator_new(0xa0);
    TVar15.Ptr = (TGeometryParticle<double,3> *)pTVar17;
    if (this != (TGeometryParticle<double,3> *)0x0) {
      TVar15.Ptr = Chaos::TGeometryParticle<double,3>::TGeometryParticle<double,3>(this,local_res8);
    }
    TVar11.Ptr = local_f8.Ptr;
    if (local_f8.Ptr != (TGeometryParticle<double,3> *)0x0) {
      plVar10 = &(local_f8.Ptr)->_padding_;
      local_f8.Ptr = TVar15.Ptr;
      (**(code **)*plVar10)(TVar11.Ptr,1);
      TVar15.Ptr = local_f8.Ptr;
    }
    local_f8.Ptr = TVar15.Ptr;
    pIVar18 = (local_f8.Ptr)->Proxy;
    ((local_f8.Ptr)->MNonFrequentData).Property.MResimType = ResimAsFollower;
    ((local_f8.Ptr)->MDirtyFlags).Bits = ((local_f8.Ptr)->MDirtyFlags).Bits | 0x10;
    TVar15.Ptr = local_f8.Ptr;
    if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
      TVar15.Ptr = local_f8.Ptr;
    }
  }
  local_f8.Ptr = TVar15.Ptr;
  FVar13 = (FSpatialAccelerationIdx)0x0;
  if (Chaos::AccelerationStructureSplitStaticAndDynamic != 1) {
    if ((Chaos::AccelerationStructureIsolateQueryOnlyObjects == 1) && (param_1->bQueryOnly != false)
       ) {
      FVar13 = (FSpatialAccelerationIdx)0x10;
    }
    goto LAB_1441a794b;
  }
  if (Chaos::AccelerationStructureIsolateQueryOnlyObjects == 1) {
    if (param_1->bStatic != false) {
      if (param_1->bQueryOnly != false) {
        FVar13 = (FSpatialAccelerationIdx)0x10;
      }
      goto LAB_1441a794b;
    }
    if (param_1->bQueryOnly != false) {
      FVar13 = (FSpatialAccelerationIdx)0x18;
      goto LAB_1441a794b;
    }
  }
  else if (param_1->bStatic != false) goto LAB_1441a794b;
  FVar13 = (FSpatialAccelerationIdx)0x8;
LAB_1441a794b:
  pIVar18 = (local_f8.Ptr)->Proxy;
  pFVar1 = &((local_f8.Ptr)->MNonFrequentData).Property.MSpatialIdx;
  pFVar1->Bucket = 0;
  pFVar1->InnerIdx = FVar13.InnerIdx;
  ((local_f8.Ptr)->MDirtyFlags).Bits = ((local_f8.Ptr)->MDirtyFlags).Bits | 0x10;
  if ((pIVar18 != (IPhysicsProxyBase *)0x0) && (pIVar18->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar18->Solver,pIVar18);
  }
  if (((local_f8.Ptr)->Proxy != (IPhysicsProxyBase *)0x0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_12814936870746524>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\SingleParticlePhysicsProxy.h"
                          ,0x664,"Particle->GetProxy() == nullptr"), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = ::operator_new(0x68);
  pTVar16 = pTVar17;
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar16 = (TPBDRigidParticle<double,3> *)
              Chaos::FSingleParticlePhysicsProxy::FSingleParticlePhysicsProxy
                        (this_00,&local_f8,(TGeometryParticleHandleImp<double,3,1> *)0x0,param_3);
  }
  *param_2 = (FSingleParticlePhysicsProxy *)pTVar16;
  dVar2 = (param_1->InitialTM).Translation.ZW.m128d_f64[0];
  dVar7 = (param_1->InitialTM).Translation.XY.m128d_f64[0];
  dVar8 = (param_1->InitialTM).Translation.XY.m128d_f64[1];
  local_78 = dVar7;
  dStack_70 = dVar8;
  local_68 = dVar2;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pTVar16);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pTVar16);
  lVar4 = *(longlong *)&pTVar16->field_0x40;
  *(double *)(lVar4 + 0x20) = dVar7;
  *(double *)(lVar4 + 0x28) = dVar8;
  *(double *)(lVar4 + 0x30) = dVar2;
  pTVar5 = *(TReferenceControllerBase<1> **)&pTVar16->field_0x28;
  lVar4 = *(longlong *)
           &(((TChaosProperty<Chaos::FParticlePositionRotation,0> *)&pTVar16->field_0x20)->Property)
            .MX;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = dVar7;
  dStack_b0 = dVar8;
  local_a8 = dVar2;
  if ((lVar4 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar14 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)pTVar16);
  *(int *)(lVar4 + 0x20) = iVar14;
  *(double *)(lVar4 + 8) = local_b8;
  *(double *)(lVar4 + 0x10) = dStack_b0;
  *(double *)(lVar4 + 0x18) = local_a8;
  dVar2 = (param_1->InitialTM).Rotation.XY.m128d_f64[0];
  dVar7 = (param_1->InitialTM).Rotation.XY.m128d_f64[1];
  dVar8 = (param_1->InitialTM).Rotation.ZW.m128d_f64[0];
  dVar9 = (param_1->InitialTM).Rotation.ZW.m128d_f64[1];
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pTVar16);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pTVar16);
  lVar4 = *(longlong *)&pTVar16->field_0x40;
  local_d8 = (float)dVar2;
  fStack_d0 = (float)dVar8;
  fStack_d4 = (float)dVar7;
  fStack_cc = (float)dVar9;
  *(float *)(lVar4 + 0x40) = local_d8;
  *(float *)(lVar4 + 0x44) = fStack_d4;
  *(float *)(lVar4 + 0x48) = fStack_d0;
  *(float *)(lVar4 + 0x4c) = fStack_cc;
  pTVar5 = *(TReferenceControllerBase<1> **)&pTVar16->field_0x28;
  lVar4 = *(longlong *)
           &(((TChaosProperty<Chaos::FParticlePositionRotation,0> *)&pTVar16->field_0x20)->Property)
            .MX;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = dVar2;
  dStack_90 = dVar7;
  local_88 = dVar8;
  dStack_80 = dVar9;
  if ((lVar4 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar14 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)pTVar16);
  *(double *)(lVar4 + 0x30) = local_98;
  *(double *)(lVar4 + 0x38) = dStack_90;
  *(int *)(lVar4 + 0x50) = iVar14;
  *(double *)(lVar4 + 0x40) = local_88;
  *(double *)(lVar4 + 0x48) = dStack_80;
  this_01 = ::operator_new(0x10);
  if (this_01 != (FString *)0x0) {
    pTVar17 = (TPBDRigidParticle<double,3> *)::FString::FString(this_01,param_1->DebugName);
  }
  local_f0.Object = (FString *)pTVar17;
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_c8,&local_f0);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetDebugName
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pTVar16,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if ((TPBDRigidParticle<double,3> *)local_f8.Ptr != (TPBDRigidParticle<double,3> *)0x0) {
    (**(code **)(local_f8.Ptr)->_padding_)(local_f8.Ptr,1);
  }
  FMemScope::~FMemScope(local_e8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// CreateAggregate @ 1441a7be0

FPhysicsAggregateReference_Chaos __cdecl FChaosEngineInterface::CreateAggregate(int param_1)

{
  undefined1 local_res10;
  
  return local_res10;
}

// CreateConstraint @ 1441a7bf0

FPhysicsConstraintReference_Chaos __cdecl
FChaosEngineInterface::CreateConstraint
          (FSingleParticlePhysicsProxy **param_1,FSingleParticlePhysicsProxy **param_2,
          TTransform<double> *param_3,TTransform<double> *param_4)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  
  pTVar3 = (TTransform<double> *)0x0;
  pTVar2 = pTVar3;
  if (*param_2 != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar2 = (TTransform<double> *)((*param_2)->Reference).Ptr;
  }
  dVar1 = (param_3->Rotation).XY.m128d_f64[0];
  if (dVar1 != 0.0) {
    pTVar3 = *(TTransform<double> **)((longlong)dVar1 + 0x50);
  }
  CreateConstraint((FPhysicsObject *)param_1,(FPhysicsObject *)pTVar2,pTVar3,param_4);
  return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
}

// CreateConstraint @ 1441a7c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FPhysicsConstraintReference_Chaos __cdecl
FChaosEngineInterface::CreateConstraint
          (FPhysicsObject *param_1,FPhysicsObject *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4)

{
  longlong *plVar1;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar2;
  ushort uVar3;
  int iVar4;
  TGeometryParticle<double,3> *pTVar5;
  IPhysicsProxyBase *pIVar6;
  code *pcVar7;
  bool bVar8;
  TRefCountPtr<Chaos::FImplicitObject> TVar9;
  FSingleParticlePhysicsProxy *this;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  FPBDRigidsSolver *pFVar23;
  FPBDRigidsSolver *pFVar24;
  FJointConstraint *pFVar25;
  FJointConstraint *pFVar26;
  TVector<Chaos::TRigidTransform<double,3>,2> *pTVar27;
  FString *pFVar28;
  size_t sVar29;
  FPhysicsConstraintReference_Chaos FVar30;
  FJointConstraint *pFVar31;
  FLLMScope *this_00;
  FJointConstraint *pFVar32;
  ForAnyElementType FVar33;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar34;
  wchar_t *_Str;
  longlong lVar35;
  uint uVar36;
  double *in_stack_00000028;
  undefined1 auStackY_8a8 [32];
  undefined1 local_877 [3];
  FLLMScope local_874;
  TTransform<double> *local_870;
  FLLMScope local_868 [2];
  TTransform<double> *local_860;
  TTransform<double> *local_858;
  FConstraintBase *local_850;
  TRefCountPtr<Chaos::FImplicitObject> local_848;
  FSingleParticlePhysicsProxy *local_840;
  FPBDRigidsSolver *local_838;
  TTransform<double> *local_830 [3];
  FPhysicsObject *local_818;
  undefined1 local_810 [8];
  TTransform<double> *local_808;
  FMemScope local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8;
  undefined1 uStack_7d7;
  undefined1 uStack_7d6;
  undefined1 uStack_7d5;
  undefined1 uStack_7d4;
  undefined1 uStack_7d3;
  undefined1 uStack_7d2;
  undefined1 uStack_7d1;
  undefined1 uStack_7d0;
  byte bStack_7cf;
  undefined1 uStack_7ce;
  undefined1 uStack_7cd;
  undefined1 uStack_7cc;
  undefined1 uStack_7cb;
  undefined1 uStack_7ca;
  undefined1 uStack_7c9;
  TTransform<double> **local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  initializer_list<Chaos::TRigidTransform<double,3>_> local_7b8;
  TTransform<double> **local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  initializer_list<Chaos::TRigidTransform<double,3>_> local_798;
  TTransform<double> **local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_778;
  TVector<Chaos::FPhysicsObject_*,2> local_768;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_758;
  TVector<Chaos::FPhysicsObject_*,2> local_748;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_738;
  TVector<Chaos::TRigidTransform<double,3>,2> local_728;
  TVector<Chaos::TRigidTransform<double,3>,2> local_668;
  TVector<Chaos::TRigidTransform<double,3>,2> local_5a8;
  FActorCreationParams local_4e8;
  TVector<Chaos::TRigidTransform<double,3>,2> local_468;
  undefined1 local_3a8 [128];
  ForAnyElementType local_328;
  FJointConstraint *local_320;
  int local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  undefined1 auStack_250 [8];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
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
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double *local_178;
  undefined2 local_170;
  char local_168 [256];
  double local_68 [6];
  
  local_68[0] = (double)(__security_cookie.value ^ (ulonglong)auStackY_8a8);
  pFVar32 = (FJointConstraint *)0x0;
  param_1->Proxy = (IPhysicsProxyBase *)0x0;
  if (bEnableChaosJointConstraints == false) {
    return (FPhysicsConstraintReference_Chaos)param_1;
  }
  local_788 = &local_860;
  uStack_780 = 1;
  local_738._12_4_ = uStack_77c;
  local_738.ArrayNum = 1;
  local_870 = param_3;
  local_860 = (TTransform<double> *)param_2;
  local_850 = (FConstraintBase *)param_1;
  local_808 = param_4;
  local_738.DataPtr = (FPhysicsObject **)local_788;
  pFVar23 = Chaos::FPhysicsObjectInterface::GetSolver(&local_738);
  local_7c8 = &local_870;
  uStack_7c0 = 1;
  local_778._12_4_ = uStack_7bc;
  local_778.ArrayNum = 1;
  local_838 = pFVar23;
  local_778.DataPtr = (FPhysicsObject **)local_7c8;
  pFVar24 = Chaos::FPhysicsObjectInterface::GetSolver(&local_778);
  if (local_860 == (TTransform<double> *)0x0) {
    if (local_870 == (TTransform<double> *)0x0) {
      return (FPhysicsConstraintReference_Chaos)param_1;
    }
  }
  else if (((local_870 != (TTransform<double> *)0x0) && (pFVar23 != (FPBDRigidsSolver *)0x0)) &&
          (pFVar24 != (FPBDRigidsSolver *)0x0)) {
    FLLMScope::FLLMScope(&local_874,ChaosConstraint,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)local_810,ChaosConstraint,true);
    pFVar25 = ::operator_new(0x3b0);
    pFVar26 = pFVar32;
    if (pFVar25 != (FJointConstraint *)0x0) {
      pFVar26 = Chaos::FJointConstraint::FJointConstraint(pFVar25);
    }
    local_830[0] = local_860;
    local_830[1] = local_870;
    param_1->Proxy = (IPhysicsProxyBase *)pFVar26;
    do {
      *(undefined8 *)
       ((longlong)(pFVar32->JointProxies).Property.ParticleProxies.V + (longlong)(local_768.V + -4))
           = *(undefined8 *)((longlong)local_830 + (longlong)pFVar32);
      pFVar32 = (FJointConstraint *)&pFVar32->_padding_;
    } while ((TTransform<double> **)((longlong)local_830 + (longlong)pFVar32) != local_830 + 2);
    Chaos::FJointConstraint::SetPhysicsBodies(pFVar26,&local_768);
    local_308 = (param_4->Rotation).XY.m128d_f64[0];
    dStack_300 = (param_4->Rotation).XY.m128d_f64[1];
    local_2f8 = (param_4->Rotation).ZW.m128d_f64[0];
    dStack_2f0 = (param_4->Rotation).ZW.m128d_f64[1];
    local_2e8 = (param_4->Translation).XY.m128d_f64[0];
    dStack_2e0 = (param_4->Translation).XY.m128d_f64[1];
    local_2d8 = (param_4->Translation).ZW.m128d_f64[0];
    dStack_2d0 = (param_4->Translation).ZW.m128d_f64[1];
    local_2c8 = (param_4->Scale3D).XY.m128d_f64[0];
    dStack_2c0 = (param_4->Scale3D).XY.m128d_f64[1];
    local_2b8 = (param_4->Scale3D).ZW.m128d_f64[0];
    dStack_2b0 = (param_4->Scale3D).ZW.m128d_f64[1];
    local_2a8 = *in_stack_00000028;
    dStack_2a0 = in_stack_00000028[1];
    local_298 = in_stack_00000028[2];
    dStack_290 = in_stack_00000028[3];
    local_288 = in_stack_00000028[4];
    dStack_280 = in_stack_00000028[5];
    local_278 = in_stack_00000028[6];
    dStack_270 = in_stack_00000028[7];
    local_268._0_8_ = in_stack_00000028[8];
    local_268._8_8_ = in_stack_00000028[9];
    local_258 = in_stack_00000028[10];
    auStack_250 = (undefined1  [8])in_stack_00000028[0xb];
    local_7b8._First = (TRigidTransform<double,3> *)&local_308;
    local_7b8._Last = (TRigidTransform<double,3> *)(auStack_250 + 8);
    pTVar27 = Chaos::TVector<Chaos::TRigidTransform<double,3>,2>::
              TVector<Chaos::TRigidTransform<double,3>,2>(&local_5a8,&local_7b8);
    local_728.V[0]._0_8_ = *(undefined8 *)pTVar27->V;
    local_728.V[0]._8_8_ = *(undefined8 *)&pTVar27->V[0].field_0x8;
    local_728.V[0]._16_8_ = *(undefined8 *)&pTVar27->V[0].field_0x10;
    local_728.V[0]._24_8_ = *(undefined8 *)&pTVar27->V[0].field_0x18;
    local_728.V[0]._32_8_ = *(undefined8 *)&pTVar27->V[0].field_0x20;
    local_728.V[0]._40_8_ = *(undefined8 *)&pTVar27->V[0].field_0x28;
    local_728.V[0]._48_8_ = *(undefined8 *)&pTVar27->V[0].field_0x30;
    local_728.V[0]._56_8_ = *(undefined8 *)&pTVar27->V[0].field_0x38;
    local_728.V[0]._64_8_ = *(undefined8 *)&pTVar27->V[0].field_0x40;
    local_728.V[0]._72_8_ = *(undefined8 *)&pTVar27->V[0].field_0x48;
    local_728.V[0]._80_8_ = *(undefined8 *)&pTVar27->V[0].field_0x50;
    local_728.V[0]._88_8_ = *(undefined8 *)&pTVar27->V[0].field_0x58;
    local_728.V[1]._0_8_ = *(undefined8 *)(pTVar27->V + 1);
    local_728.V[1]._8_8_ = *(undefined8 *)&pTVar27->V[1].field_0x8;
    local_728.V[1]._16_8_ = *(undefined8 *)&pTVar27->V[1].field_0x10;
    local_728.V[1]._24_8_ = *(undefined8 *)&pTVar27->V[1].field_0x18;
    local_728.V[1]._32_8_ = *(undefined8 *)&pTVar27->V[1].field_0x20;
    local_728.V[1]._40_8_ = *(undefined8 *)&pTVar27->V[1].field_0x28;
    local_728.V[1]._48_8_ = *(undefined8 *)&pTVar27->V[1].field_0x30;
    local_728.V[1]._56_8_ = *(undefined8 *)&pTVar27->V[1].field_0x38;
    local_728.V[1]._64_8_ = *(undefined8 *)&pTVar27->V[1].field_0x40;
    local_728.V[1]._72_8_ = *(undefined8 *)&pTVar27->V[1].field_0x48;
    local_728.V[1]._80_8_ = *(undefined8 *)&pTVar27->V[1].field_0x50;
    local_728.V[1]._88_8_ = *(undefined8 *)&pTVar27->V[1].field_0x58;
    Chaos::FJointConstraint::SetJointTransforms(pFVar26,&local_728);
    Chaos::FPBDRigidsSolver::RegisterObject(pFVar23,pFVar26);
    FMemScope::~FMemScope((FMemScope *)local_810);
    this_00 = &local_874;
    goto LAB_1441a8600;
  }
  FLLMScope::FLLMScope(local_868,ChaosConstraint,false,None,Default,true);
  FMemScope::FMemScope(&local_800,ChaosConstraint,true);
  local_858 = local_860;
  bVar8 = false;
  if ((local_860 == (TTransform<double> *)0x0) || (pFVar23 == (FPBDRigidsSolver *)0x0)) {
    local_858 = local_870;
    bVar8 = true;
    local_838 = pFVar24;
    if (pFVar24 != (FPBDRigidsSolver *)0x0) goto LAB_1441a7f5e;
  }
  else {
LAB_1441a7f5e:
    local_7a8 = &local_858;
    uStack_7a0 = 1;
    local_758._12_4_ = uStack_79c;
    local_758.ArrayNum = 1;
    local_758.DataPtr = (FPhysicsObject **)local_7a8;
    pFVar23 = Chaos::FPhysicsObjectInterface::GetSolver(&local_758);
    pFVar26 = pFVar32;
    if (pFVar23 != (FPBDRigidsSolver *)0x0) {
      pFVar26 = pFVar23->PhysSceneHack;
    }
    local_188._0_8_ = local_168;
    local_4e8.InitialTM.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_4e8.InitialTM.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_188._8_8_ = local_168;
    local_4e8.InitialTM.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_4e8.InitialTM.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178 = local_68;
    local_4e8.InitialTM.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_4e8.InitialTM.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_4e8.bEnableGravity = false;
    local_4e8.bUpdateKinematicFromSimulation = false;
    local_4e8.bSimulatePhysics = false;
    local_4e8.bStartAwake = true;
    local_4e8.bStatic = false;
    local_4e8.bQueryOnly = false;
    local_170 = 0;
    local_4e8.Scene = (FChaosScene *)pFVar26;
    pFVar28 = Chaos::FPhysicsObjectInterface::GetDebugName((FPhysicsObject *)local_858);
    if ((pFVar28->Data).ArrayNum == 0) {
      _Str = L"";
LAB_1441a8083:
      local_328.Data = (FScriptContainerElement *)0x0;
      sVar29 = wcslen(_Str);
      local_318 = (int)sVar29;
      uVar36 = local_318 + 1;
      FVar33.Data = (FScriptContainerElement *)pFVar32;
      if (0x80 < uVar36) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_328,0,uVar36,1);
        FVar33.Data = local_328.Data;
      }
      lVar35 = (longlong)(int)uVar36;
      pFVar25 = (FJointConstraint *)local_3a8;
      if ((FJointConstraint *)FVar33.Data != (FJointConstraint *)0x0) {
        pFVar25 = (FJointConstraint *)FVar33.Data;
      }
      bVar22 = false;
      pFVar31 = pFVar32;
      local_320 = pFVar25;
      if (0 < (int)uVar36) {
        do {
          uVar3 = *(ushort *)((longlong)_Str + (longlong)pFVar31 * 2);
          *(char *)((longlong)(pFVar25->JointProxies).Property.ParticleProxies.V +
                   (longlong)(&pFVar31->JointProxies + -4)) = (char)uVar3;
          pFVar31 = (FJointConstraint *)((longlong)&pFVar31->_padding_ + 1);
          bVar22 = (bool)(bVar22 | 0x7f < uVar3);
        } while ((longlong)pFVar31 < lVar35);
        pFVar31 = pFVar32;
        if (bVar22) {
          do {
            if (0x7f < *(ushort *)((longlong)_Str + (longlong)pFVar31 * 2)) {
              *(undefined1 *)
               ((longlong)(pFVar31->JointProxies).Property.ParticleProxies.V +
               (longlong)(&pFVar25->JointProxies + -4)) = 0x3f;
            }
            pFVar31 = (FJointConstraint *)((longlong)&pFVar31->_padding_ + 1);
          } while ((longlong)pFVar31 < lVar35);
        }
      }
      param_1 = (FPhysicsObject *)local_850;
      if (((longlong)&((FJointConstraint *)(&pFVar25->JointProxies + -2))->_padding_ + lVar35 == 0)
         && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), param_1 = (FPhysicsObject *)local_850, bVar22)) {
        pcVar7 = (code *)swi(3);
        FVar30.Constraint = (FConstraintBase *)(*pcVar7)();
        return (FPhysicsConstraintReference_Chaos)FVar30.Constraint;
      }
    }
    else {
      _Str = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      local_328.Data = (FScriptContainerElement *)0x0;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1441a8083;
      local_320 = (FJointConstraint *)0x0;
      local_318 = 0;
    }
    TStringBuilderBase<char>::AppendfImpl
              ((TStringBuilderBase<char> *)local_188,"Constraint Kinematic Endpoint - [%s]");
    if ((FJointConstraint *)local_328.Data != (FJointConstraint *)0x0) {
      FMemory::Free(local_328.Data);
    }
    local_4e8.DebugName = (char *)local_188._0_8_;
    CreateActor(&local_4e8,&local_840,(UObject *)0x0);
    local_848.Reference = ::operator_new(0x30);
    if (local_848.Reference == (FImplicitObject *)0x0) {
      local_848.Reference = (FImplicitObject *)0x0;
    }
    else {
      Chaos::FImplicitObject::FImplicitObject(local_848.Reference,3,'\0');
      (local_848.Reference)->Margin = 0.0;
      (local_848.Reference)->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      local_848.Reference[1]._padding_ = 0;
      *(undefined4 *)&local_848.Reference[1]._padding_ = 0;
      LOCK();
      *(int *)&(local_848.Reference)->_padding_ = (int)(local_848.Reference)->_padding_ + 1;
      UNLOCK();
    }
    this = local_840;
    TVar9.Reference = local_848.Reference;
    Chaos::FRigidBodyHandle_External::SetGeometry((FRigidBodyHandle_External *)local_840,&local_848)
    ;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    ((this->Particle).Ptr)->MUserData = (void *)0x0;
    pFVar31 = ::operator_new(0x3b0);
    pFVar25 = pFVar32;
    if (pFVar31 != (FJointConstraint *)0x0) {
      pFVar25 = Chaos::FJointConstraint::FJointConstraint(pFVar31);
    }
    Chaos::FJointConstraint::SetKinematicEndPoint
              (pFVar25,this,
               *(FPBDRigidsSolver **)(pFVar26->JointSettings).Property.ConnectorTransforms.V);
    ((FConstraintBase *)param_1)->_padding_ = (longlong)pFVar25;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar5 = (this->Particle).Ptr;
    FVar34 = (pTVar5->MShapesArray).AllocatorInstance.SecondaryData;
    iVar4 = (pTVar5->MShapesArray).ArrayNum;
    if (FVar34 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                   )0x0) {
      FVar34 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )&pTVar5->MShapesArray;
    }
    FVar2 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar34 + (longlong)iVar4 * 8);
    while( true ) {
      if ((pTVar5->MShapesArray).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_877);
      }
      if (FVar34 == FVar2) break;
      lVar35 = *(longlong *)FVar34;
      if ((*(uint *)(lVar35 + 8) & 3) == 0) {
        pIVar6 = *(IPhysicsProxyBase **)(lVar35 + 0x48);
        local_7f8 = *(undefined8 *)(lVar35 + 0x50);
        uStack_7f0 = *(undefined8 *)(lVar35 + 0x58);
        local_7e8 = *(undefined8 *)(lVar35 + 0x60);
        uStack_7e0 = *(undefined8 *)(lVar35 + 0x68);
        *(undefined8 *)(lVar35 + 0x50) = local_7f8;
        *(undefined8 *)(lVar35 + 0x58) = uStack_7f0;
        local_7d8 = *(undefined1 *)(lVar35 + 0x70);
        uStack_7d7 = *(undefined1 *)(lVar35 + 0x71);
        uStack_7d6 = *(undefined1 *)(lVar35 + 0x72);
        uStack_7d5 = *(undefined1 *)(lVar35 + 0x73);
        uStack_7d4 = *(undefined1 *)(lVar35 + 0x74);
        uStack_7d3 = *(undefined1 *)(lVar35 + 0x75);
        uStack_7d2 = *(undefined1 *)(lVar35 + 0x76);
        uStack_7d1 = *(undefined1 *)(lVar35 + 0x77);
        uStack_7d0 = *(undefined1 *)(lVar35 + 0x78);
        uStack_7ce = *(undefined1 *)(lVar35 + 0x7a);
        uStack_7cd = *(undefined1 *)(lVar35 + 0x7b);
        uStack_7cc = *(undefined1 *)(lVar35 + 0x7c);
        uStack_7cb = *(undefined1 *)(lVar35 + 0x7d);
        uStack_7ca = *(undefined1 *)(lVar35 + 0x7e);
        uStack_7c9 = *(undefined1 *)(lVar35 + 0x7f);
        *(undefined8 *)(lVar35 + 0x60) = local_7e8;
        *(undefined8 *)(lVar35 + 0x68) = uStack_7e0;
        bStack_7cf = *(byte *)(lVar35 + 0x79) & 0xfc;
        *(undefined8 *)(lVar35 + 0x70) = *(undefined8 *)(lVar35 + 0x70);
        *(ulonglong *)(lVar35 + 0x78) = *(ulonglong *)(lVar35 + 0x78) & 0xfffffffffffffcff;
        uVar36 = *(uint *)(lVar35 + 0xc);
        *(uint *)(lVar35 + 0xc) = uVar36 | 1;
        if (((uVar36 != 0) || (pIVar6 == (IPhysicsProxyBase *)0x0)) ||
           (pIVar6->Solver == (FPhysicsSolverBase *)0x0)) goto LAB_1441a8333;
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                  (pIVar6->Solver,pIVar6,*(uint *)(lVar35 + 8) >> 3);
        FVar34 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )((longlong)FVar34 + 8);
      }
      else {
        local_7f8 = *(undefined8 *)(lVar35 + 0x48);
        uStack_7f0 = *(undefined8 *)(lVar35 + 0x50);
        local_7e8 = *(undefined8 *)(lVar35 + 0x58);
        uStack_7e0 = *(undefined8 *)(lVar35 + 0x60);
        local_7d8 = *(undefined1 *)(lVar35 + 0x68);
        uStack_7d7 = *(undefined1 *)(lVar35 + 0x69);
        uStack_7d6 = *(undefined1 *)(lVar35 + 0x6a);
        uStack_7d5 = *(undefined1 *)(lVar35 + 0x6b);
        uStack_7d4 = *(undefined1 *)(lVar35 + 0x6c);
        uStack_7d3 = *(undefined1 *)(lVar35 + 0x6d);
        uStack_7d2 = *(undefined1 *)(lVar35 + 0x6e);
        uStack_7d1 = *(undefined1 *)(lVar35 + 0x6f);
        uStack_7d0 = *(undefined1 *)(lVar35 + 0x70);
        uStack_7ce = *(undefined1 *)(lVar35 + 0x72);
        uStack_7cd = *(undefined1 *)(lVar35 + 0x73);
        uStack_7cc = *(undefined1 *)(lVar35 + 0x74);
        uStack_7cb = *(undefined1 *)(lVar35 + 0x75);
        uStack_7ca = *(undefined1 *)(lVar35 + 0x76);
        uStack_7c9 = *(undefined1 *)(lVar35 + 0x77);
        *(undefined8 *)(lVar35 + 0x48) = local_7f8;
        *(undefined8 *)(lVar35 + 0x50) = uStack_7f0;
        bStack_7cf = *(byte *)(lVar35 + 0x71) & 0xfc;
        *(undefined8 *)(lVar35 + 0x58) = local_7e8;
        *(undefined8 *)(lVar35 + 0x60) = uStack_7e0;
        *(undefined8 *)(lVar35 + 0x68) = *(undefined8 *)(lVar35 + 0x68);
        *(ulonglong *)(lVar35 + 0x70) = *(ulonglong *)(lVar35 + 0x70) & 0xfffffffffffffcff;
LAB_1441a8333:
        FVar34 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )((longlong)FVar34 + 8);
      }
    }
    local_830[2] = local_858;
    local_818 = (local_840->Reference).Ptr;
    do {
      *(undefined8 *)
       ((longlong)(pFVar32->JointProxies).Property.ParticleProxies.V + (longlong)(local_748.V + -4))
           = *(undefined8 *)(&stack0x000002b0 + (longlong)&pFVar32[-3].JointSettings.Property);
      pFVar32 = (FJointConstraint *)&pFVar32->_padding_;
    } while ((undefined1 *)((longlong)(local_830 + 2) + (longlong)pFVar32) != local_810);
    Chaos::FJointConstraint::SetPhysicsBodies(pFVar25,&local_748);
    local_248._0_8_ = (local_808->Rotation).XY.m128d_f64[0];
    local_248._8_8_ = (local_808->Rotation).XY.m128d_f64[1];
    local_238 = (local_808->Rotation).ZW.m128d_f64[0];
    dStack_230 = (local_808->Rotation).ZW.m128d_f64[1];
    local_228 = (local_808->Translation).XY.m128d_f64[0];
    dStack_220 = (local_808->Translation).XY.m128d_f64[1];
    local_218 = (local_808->Translation).ZW.m128d_f64[0];
    dStack_210 = (local_808->Translation).ZW.m128d_f64[1];
    local_208 = (local_808->Scale3D).XY.m128d_f64[0];
    dStack_200 = (local_808->Scale3D).XY.m128d_f64[1];
    local_1f8 = (local_808->Scale3D).ZW.m128d_f64[0];
    dStack_1f0 = (local_808->Scale3D).ZW.m128d_f64[1];
    local_1e8 = *in_stack_00000028;
    dStack_1e0 = in_stack_00000028[1];
    local_1d8 = in_stack_00000028[2];
    dStack_1d0 = in_stack_00000028[3];
    local_1c8 = in_stack_00000028[4];
    dStack_1c0 = in_stack_00000028[5];
    local_1b8 = in_stack_00000028[6];
    dStack_1b0 = in_stack_00000028[7];
    local_1a8 = in_stack_00000028[8];
    dStack_1a0 = in_stack_00000028[9];
    local_198 = in_stack_00000028[10];
    dStack_190 = in_stack_00000028[0xb];
    local_798._First = (TRigidTransform<double,3> *)(auStack_250 + 8);
    local_798._Last = (TRigidTransform<double,3> *)local_188;
    Chaos::TVector<Chaos::TRigidTransform<double,3>,2>::TVector<Chaos::TRigidTransform<double,3>,2>
              (&local_468,&local_798);
    uVar21 = local_468.V[1]._88_8_;
    uVar20 = local_468.V[1]._80_8_;
    uVar19 = local_468.V[1]._72_8_;
    uVar18 = local_468.V[1]._64_8_;
    uVar17 = local_468.V[0]._56_8_;
    uVar16 = local_468.V[0]._48_8_;
    uVar15 = local_468.V[0]._40_8_;
    uVar14 = local_468.V[0]._32_8_;
    uVar13 = local_468.V[0]._24_8_;
    uVar12 = local_468.V[0]._16_8_;
    uVar11 = local_468.V[0]._8_8_;
    uVar10 = local_468.V[0]._0_8_;
    if (bVar8) {
      local_468.V[0]._0_8_ = local_468.V[1]._0_8_;
      local_468.V[0]._8_8_ = local_468.V[1]._8_8_;
      local_468.V[0]._16_8_ = local_468.V[1]._16_8_;
      local_468.V[0]._24_8_ = local_468.V[1]._24_8_;
      local_468.V[0]._32_8_ = local_468.V[1]._32_8_;
      local_468.V[0]._40_8_ = local_468.V[1]._40_8_;
      local_468.V[0]._48_8_ = local_468.V[1]._48_8_;
      local_468.V[0]._56_8_ = local_468.V[1]._56_8_;
      local_468.V[1]._64_8_ = local_468.V[0]._64_8_;
      local_468.V[1]._72_8_ = local_468.V[0]._72_8_;
      local_468.V[1]._80_8_ = local_468.V[0]._80_8_;
      local_468.V[1]._88_8_ = local_468.V[0]._88_8_;
      local_468.V[0]._64_8_ = uVar18;
      local_468.V[0]._72_8_ = uVar19;
      local_468.V[0]._80_8_ = uVar20;
      local_468.V[0]._88_8_ = uVar21;
      local_468.V[1]._0_8_ = uVar10;
      local_468.V[1]._8_8_ = uVar11;
      local_468.V[1]._16_8_ = uVar12;
      local_468.V[1]._24_8_ = uVar13;
      local_468.V[1]._32_8_ = uVar14;
      local_468.V[1]._40_8_ = uVar15;
      local_468.V[1]._48_8_ = uVar16;
      local_468.V[1]._56_8_ = uVar17;
    }
    local_668.V[0]._0_8_ = local_468.V[0]._0_8_;
    local_668.V[0]._8_8_ = local_468.V[0]._8_8_;
    local_668.V[0]._16_8_ = local_468.V[0]._16_8_;
    local_668.V[0]._24_8_ = local_468.V[0]._24_8_;
    local_668.V[0]._32_8_ = local_468.V[0]._32_8_;
    local_668.V[0]._40_8_ = local_468.V[0]._40_8_;
    local_668.V[0]._48_8_ = local_468.V[0]._48_8_;
    local_668.V[0]._56_8_ = local_468.V[0]._56_8_;
    local_668.V[0]._64_8_ = local_468.V[0]._64_8_;
    local_668.V[0]._72_8_ = local_468.V[0]._72_8_;
    local_668.V[0]._80_8_ = local_468.V[0]._80_8_;
    local_668.V[0]._88_8_ = local_468.V[0]._88_8_;
    local_668.V[1]._0_8_ = local_468.V[1]._0_8_;
    local_668.V[1]._8_8_ = local_468.V[1]._8_8_;
    local_668.V[1]._16_8_ = local_468.V[1]._16_8_;
    local_668.V[1]._24_8_ = local_468.V[1]._24_8_;
    local_668.V[1]._32_8_ = local_468.V[1]._32_8_;
    local_668.V[1]._40_8_ = local_468.V[1]._40_8_;
    local_668.V[1]._48_8_ = local_468.V[1]._48_8_;
    local_668.V[1]._56_8_ = local_468.V[1]._56_8_;
    local_668.V[1]._64_8_ = local_468.V[1]._64_8_;
    local_668.V[1]._72_8_ = local_468.V[1]._72_8_;
    local_668.V[1]._80_8_ = local_468.V[1]._80_8_;
    local_668.V[1]._88_8_ = local_468.V[1]._88_8_;
    Chaos::FJointConstraint::SetJointTransforms(pFVar25,&local_668);
    Chaos::FPBDRigidsSolver::RegisterObject(local_838,pFVar25);
    if (TVar9.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(TVar9.Reference)->_padding_;
      lVar35 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar35 == 1) && (*(int *)((longlong)&(TVar9.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar9.Reference)->_padding_)(TVar9.Reference,1);
      }
    }
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)local_188);
    param_1 = (FPhysicsObject *)local_850;
  }
  FMemScope::~FMemScope(&local_800);
  this_00 = local_868;
LAB_1441a8600:
  FLLMScope::~FLLMScope(this_00);
  return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
}

// CreateMaterial @ 1441a8640

FMaterialHandle __cdecl FChaosEngineInterface::CreateMaterial(UPhysicalMaterial *param_1)

{
  FPhysicalMaterialManager *this;
  undefined4 local_res10;
  
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::Create(this);
  return (FMaterialHandle)local_res10;
}

// CreateSuspension @ 1441a8670

FPhysicsConstraintReference_Chaos __cdecl
FChaosEngineInterface::CreateSuspension
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2)

{
  double dVar1;
  IPhysicsProxyBase *pIVar2;
  undefined8 uVar3;
  bool bVar4;
  FPBDRigidsSolver *this;
  FSuspensionConstraint *this_00;
  FSuspensionConstraint *this_01;
  undefined8 *in_R8;
  FLLMScope local_res8 [2];
  FSuspensionConstraint *local_res10;
  FMemScope local_res20;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_28;
  
  bVar4 = bEnableChaosJointConstraints;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  this_01 = (FSuspensionConstraint *)0x0;
  local_res10 = this_01;
  if (dVar1 != 0.0) {
    local_res10 = *(FSuspensionConstraint **)((longlong)dVar1 + 0x50);
  }
  *param_1 = (FSingleParticlePhysicsProxy *)0x0;
  if ((bVar4) && (local_res10 != (FSuspensionConstraint *)0x0)) {
    local_28.ArrayNum = 1;
    local_28.DataPtr = (FPhysicsObject **)&local_res10;
    this = Chaos::FPhysicsObjectInterface::GetSolver(&local_28);
    if (this != (FPBDRigidsSolver *)0x0) {
      FLLMScope::FLLMScope(local_res8,ChaosConstraint,false,None,Default,true);
      FMemScope::FMemScope(&local_res20,ChaosConstraint,true);
      this_00 = ::operator_new(0xd0);
      if (this_00 != (FSuspensionConstraint *)0x0) {
        this_01 = Chaos::FSuspensionConstraint::FSuspensionConstraint(this_00);
      }
      *param_1 = (FSingleParticlePhysicsProxy *)this_01;
      Chaos::FSuspensionConstraint::SetPhysicsBody(this_01,(FPhysicsObject **)&local_res10);
      pIVar2 = (IPhysicsProxyBase *)this_01->_padding_;
      uVar3 = in_R8[1];
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location = *in_R8;
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location.field_0x8 = uVar3;
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location.field_0x10 = in_R8[2];
      *(uint *)&this_01->_padding_ = (uint)this_01->_padding_ | 0x1000;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      Chaos::FPBDRigidsSolver::RegisterObject(this,this_01);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res8);
    }
    return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
  }
  return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
}

// CreateSuspension @ 1441a87c0

FPhysicsConstraintReference_Chaos __cdecl
FChaosEngineInterface::CreateSuspension(FPhysicsObject *param_1,TVector<double> *param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  bool bVar3;
  FPBDRigidsSolver *this;
  FSuspensionConstraint *this_00;
  FSuspensionConstraint *this_01;
  undefined8 *in_R8;
  FLLMScope local_res8 [2];
  FPhysicsObject *local_res10;
  FMemScope local_res20;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_28;
  
  bVar3 = bEnableChaosJointConstraints;
  this_01 = (FSuspensionConstraint *)0x0;
  param_1->Proxy = (IPhysicsProxyBase *)0x0;
  if ((bVar3) && (param_2 != (TVector<double> *)0x0)) {
    local_28.ArrayNum = 1;
    local_28.DataPtr = &local_res10;
    local_res10 = (FPhysicsObject *)param_2;
    this = Chaos::FPhysicsObjectInterface::GetSolver(&local_28);
    if (this != (FPBDRigidsSolver *)0x0) {
      FLLMScope::FLLMScope(local_res8,ChaosConstraint,false,None,Default,true);
      FMemScope::FMemScope(&local_res20,ChaosConstraint,true);
      this_00 = ::operator_new(0xd0);
      if (this_00 != (FSuspensionConstraint *)0x0) {
        this_01 = Chaos::FSuspensionConstraint::FSuspensionConstraint(this_00);
      }
      param_1->Proxy = (IPhysicsProxyBase *)this_01;
      Chaos::FSuspensionConstraint::SetPhysicsBody(this_01,&local_res10);
      pIVar1 = (IPhysicsProxyBase *)this_01->_padding_;
      uVar2 = in_R8[1];
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location = *in_R8;
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location.field_0x8 = uVar2;
      *(undefined8 *)&(this_01->SuspensionLocation).Property.Location.field_0x10 = in_R8[2];
      *(uint *)&this_01->_padding_ = (uint)this_01->_padding_ | 0x1000;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
      Chaos::FPBDRigidsSolver::RegisterObject(this,this_01);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res8);
    }
    return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
  }
  return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
}

// DetachShape @ 1441aba00

void __cdecl
FChaosEngineInterface::DetachShape
          (FSingleParticlePhysicsProxy **param_1,FPhysicsShapeReference_Chaos *param_2,bool param_3)

{
  FPerShapeData *pFVar1;
  FSingleParticlePhysicsProxy *this;
  
  pFVar1 = param_2->Shape;
  if (pFVar1 != (FPerShapeData *)0x0) {
    this = *param_1;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    Chaos::TGeometryParticle<double,3>::RemoveShape((this->Particle).Ptr,pFVar1,param_3);
  }
  return;
}

// GetAllShapes_AssumedLocked @ 1441ad250

int __cdecl
FChaosEngineInterface::GetAllShapes_AssumedLocked
          (FSingleParticlePhysicsProxy **param_1,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uStack_28;
  FSingleParticlePhysicsProxy *pFStack_20;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return 0;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  uVar2 = (pTVar3->MShapesArray).ArrayNum;
  if (-1 < (int)uVar2) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar11 = 0;
    if (0 < (int)uVar2) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (pTVar3->MShapesArray).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
        }
        FVar4 = (pTVar3->MShapesArray).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar3->MShapesArray;
        if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar10 = FVar4;
        }
        uStack_28 = *(undefined8 *)((longlong)FVar10 + lVar12 * 8);
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFStack_20 = *param_1;
        if ((pFVar5 <= (FScriptContainerElement *)&uStack_28) &&
           ((FScriptContainerElement *)&uStack_28 < pFVar5 + (longlong)*piVar1 * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,piVar1);
        }
        uVar11 = uVar11 + 1;
        param_2->ArrayNum = iVar9 + 1;
        lVar12 = lVar12 + 1;
        pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar5 = uStack_28;
        *(FSingleParticlePhysicsProxy **)(pFVar5 + 8) = pFStack_20;
      } while (lVar12 < (int)uVar2);
    }
    return param_2->ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetAllShapes_AssumedLocked @ 1441ad260

int __cdecl
FChaosEngineInterface::GetAllShapes_AssumedLocked
          (FSingleParticlePhysicsProxy **param_1,
          TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  ForElementType<FPhysicsShapeReference_Chaos> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FPhysicsShapeReference_Chaos> FVar11;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uStack_28;
  FSingleParticlePhysicsProxy *pFStack_20;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return 0;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar4 = (this->Particle).Ptr;
  uVar3 = (pTVar4->MShapesArray).ArrayNum;
  if (-1 < (int)uVar3) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                (0x10,8,uVar3,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar13 = 0;
    if (0 < (int)uVar3) {
      lVar14 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < (pTVar4->MShapesArray).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        FVar5 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar4->MShapesArray;
        if (FVar5 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar12 = FVar5;
        }
        uStack_28 = *(undefined8 *)((longlong)FVar12 + lVar14 * 8);
        pFStack_20 = *param_1;
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
        if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar11 = FVar6;
        }
        if ((ulonglong)FVar11 <= &uStack_28) {
          FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
          if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
            FVar11 = FVar6;
          }
          if ((&uStack_28 < (undefined8 *)((longlong)*piVar1 * 0x10 + (longlong)FVar11)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar10 = (*pcVar7)();
            return iVar10;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                             (0x810,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar10 + 1;
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
        if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar11 = FVar6;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        puVar2 = (undefined8 *)((longlong)FVar11 + (longlong)iVar10 * 0x10);
        *puVar2 = uStack_28;
        puVar2[1] = pFStack_20;
      } while (lVar14 < (int)uVar3);
    }
    return param_2->ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// GetAngularVelocity_AssumesLocked @ 1441ad270

TVector<double> * __cdecl
FChaosEngineInterface::GetAngularVelocity_AssumesLocked
          (TVector<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TGeometryParticle<double,3> *pTVar6;
  double dVar7;
  double dVar8;
  
  this = *param_1;
  if (this != (FSingleParticlePhysicsProxy *)0x0) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar6 = (this->Particle).Ptr;
    if (pTVar6->Type == Static) {
      pTVar6 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar6 == (TGeometryParticle<double,3> *)0x0) {
      dVar3 = 0.0;
      dVar8 = 0.0;
      dVar7 = 0.0;
    }
    else {
      dVar3 = (double)*(float *)((longlong)&pTVar6[1]._padding_ + 4);
      dVar8 = (double)*(float *)&pTVar6[1].Proxy;
      dVar7 = (double)*(float *)((longlong)&pTVar6[1].Proxy + 4);
    }
    auVar2._8_4_ = SUB84(dVar8,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615996>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x284,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetBoundsLocal_AssumesLocked @ 1441ad340

TBox<double> * __cdecl
FChaosEngineInterface::GetBoundsLocal_AssumesLocked
          (TBox<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  FImplicitObject *pFVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pFVar1 = (((this->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
  if ((pFVar1 != (FImplicitObject *)0x0) && (pFVar1->bHasBoundingBox != false)) {
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,&local_38);
    __return_storage_ptr__->IsValid = '\x01';
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_38;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_30;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_28;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_20;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dStack_18;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_10;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetBounds_AssumesLocked @ 1441ad3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __cdecl
FChaosEngineInterface::GetBounds_AssumesLocked
          (TBox<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  TGeometryParticle<double,3> *pTVar5;
  TGeometryParticle<double,3> *pTVar6;
  FImplicitObject *pFVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_178 [32];
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TAABB<double,3> local_128;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar4 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar4);
  pTVar5 = (pFVar4->Particle).Ptr;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar4);
  uVar15 = _UNK_150689688;
  uVar14 = ___xmm_3ff00000000000003ff0000000000000;
  uVar13 = _UNK_150689518;
  uVar12 = ___xmm_00000000000000003ff0000000000000;
  pTVar6 = (pFVar4->Particle).Ptr;
  pFVar4 = *param_1;
  uVar10 = *(undefined8 *)&(pTVar5->MXR).Property.MX;
  uVar11 = *(undefined8 *)&(pTVar5->MXR).Property.MX.field_0x8;
  uVar2 = *(undefined8 *)&(pTVar5->MXR).Property.MX.field_0x10;
  fVar1 = *(float *)&(pTVar6->MXR).Property.MR;
  uVar3 = *(undefined8 *)&(pTVar6->MXR).Property.MR.field_0x8;
  dVar9 = (double)(float)((ulonglong)uVar3 >> 0x20);
  dVar8 = (double)*(float *)&(pTVar6->MXR).Property.MR.field_0x4;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar4);
  pFVar7 = (((pFVar4->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
  if ((pFVar7 == (FImplicitObject *)0x0) || (pFVar7->bHasBoundingBox == false)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    (**(code **)(pFVar7->_padding_ + 0x90))(pFVar7,&local_128);
    local_f8._8_4_ = SUB84(dVar8,0);
    local_f8._0_8_ = (double)fVar1;
    local_f8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_e8._8_4_ = SUB84(dVar9,0);
    local_e8._0_8_ = (double)(float)uVar3;
    local_e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uStack_c0 = 0;
    local_b8 = uVar14;
    uStack_b0 = uVar15;
    local_a8 = uVar12;
    uStack_a0 = uVar13;
    local_d8 = uVar10;
    uStack_d0 = uVar11;
    local_c8 = uVar2;
    Chaos::TAABB<double,3>::TransformedAABB
              (&local_128,(TAABB<double,3> *)&local_158,(TRigidTransform<double,3> *)local_f8);
    __return_storage_ptr__->IsValid = '\x01';
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_158;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_150;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_148;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_140;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dStack_138;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_130;
  }
  return __return_storage_ptr__;
}

// GetBounds_AssumesLocked @ 1441ad5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
FChaosEngineInterface::GetBounds_AssumesLocked
          (TBox<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1,
          TTransform<double> *param_2)

{
  FSingleParticlePhysicsProxy *this;
  FImplicitObject *pFVar1;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  TAABB<double,3> local_b8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pFVar1 = (((this->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
  if ((pFVar1 == (FImplicitObject *)0x0) || (pFVar1->bHasBoundingBox == false)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,&local_b8);
    local_88 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
    local_78 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
    local_68 = (param_2->Translation).XY.m128d_f64[0];
    dStack_60 = (param_2->Translation).XY.m128d_f64[1];
    local_58 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
    local_48 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
    local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
    Chaos::TAABB<double,3>::TransformedAABB
              (&local_b8,(TAABB<double,3> *)&local_e8,(TRigidTransform<double,3> *)&local_88);
    __return_storage_ptr__->IsValid = '\x01';
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_e8;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_e0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_d8;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_d0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dStack_c8;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_c0;
  }
  return __return_storage_ptr__;
}

// GetComTransformLocal_AssumesLocked @ 1441ad750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
FChaosEngineInterface::GetComTransformLocal_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  FParticleID FVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  __m128 _Var7;
  bool bVar8;
  TTransform<double> *pTVar9;
  TGeometryParticle<double,3> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  
  pFVar2 = *param_1;
  if (pFVar2 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615883>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2f5,"FChaosEngineInterface::IsValid(InActorReference)");
    _Var7 = GlobalVectorConstants::Float0001;
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar3)();
      return pTVar9;
    }
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var7.m128_f32[2];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var7.m128_f32[3];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar6;
    _Var7 = GlobalVectorConstants::Float1110;
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar4;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var7.m128_f32[2];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var7.m128_f32[3];
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar2);
    pTVar10 = (pFVar2->Particle).Ptr;
    if (pTVar10->Type < Rigid) {
      pTVar10 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
      uVar18 = 0;
      uVar19 = 0;
      iVar20 = 0;
      uVar21 = 0;
      iVar16 = 0;
      iVar17 = 0;
    }
    else {
      uVar18 = *(undefined4 *)&pTVar10[1].MNonFrequentData.Property.MGeometry.Reference;
      uVar19 = *(undefined4 *)
                ((longlong)&pTVar10[1].MNonFrequentData.Property.MGeometry.Reference + 4);
      iVar20 = pTVar10[1].MNonFrequentData.Property.MUniqueIdx.Idx;
      uVar21._0_2_ = pTVar10[1].MNonFrequentData.Property.MSpatialIdx;
      uVar21._2_1_ = pTVar10[1].MNonFrequentData.Property.MResimType;
      uVar21._3_1_ = pTVar10[1].MNonFrequentData.Property.MEnabledDuringResim;
      FVar1 = pTVar10[1].MNonFrequentData.Property.MParticleID;
      iVar16 = FVar1.GlobalID;
      iVar17 = FVar1.LocalID;
    }
    pFVar2 = *param_1;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar2);
    pTVar10 = (pFVar2->Particle).Ptr;
    if (pTVar10->Type < Rigid) {
      pTVar10 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      uVar12 = 0;
      uVar13 = 0;
      dVar14 = ___xmm_3ff00000000000000000000000000000;
      FVar15 = _UNK_15061cbc8;
    }
    else {
      pTVar11 = pTVar10[1].MNonFrequentData.Property.MDebugName.SharedReferenceCount.
                ReferenceController;
      uVar12 = *(undefined4 *)&pTVar10[1].MUserData;
      uVar13 = *(undefined4 *)((longlong)&pTVar10[1].MUserData + 4);
      dVar14 = *(double *)pTVar10[1].MShapesArray.AllocatorInstance.InlineData;
      FVar15 = pTVar10[1].MShapesArray.AllocatorInstance.SecondaryData;
    }
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)pTVar11;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar12;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar13;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar14;
    *(ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
      *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = FVar15;
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar18;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar19;
    *(int *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = iVar20;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar21;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)CONCAT44(iVar17,iVar16);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    dVar14 = _UNK_150689688;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar14;
    dVar14 = _UNK_150689518;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar14;
  }
  return __return_storage_ptr__;
}

// GetComTransform_AssumesLocked @ 1441ad8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
FChaosEngineInterface::GetComTransform_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  double dVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  __m128 _Var12;
  bool bVar13;
  TTransform<double> *pTVar14;
  TRotation<double,3> *pTVar15;
  TVector<double,3> *pTVar16;
  TVector<double,3> local_48;
  TRotation<double,3> local_28;
  
  pFVar2 = *param_1;
  if (pFVar2 != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar15 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
              GetCoMWorldRotation<Chaos::FRigidBodyHandle_External_*>
                        (&local_28,(FRigidBodyHandle_External *)pFVar2);
    pTVar16 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
              GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>
                        (&local_48,(FRigidBodyHandle_External *)pFVar2);
    dVar7 = *(double *)&pTVar15->field_0x8;
    dVar8 = *(double *)&pTVar15->field_0x10;
    dVar9 = *(double *)&pTVar15->field_0x18;
    dVar1 = *(double *)&pTVar16->field_0x10;
    dVar10 = *(double *)pTVar16;
    dVar11 = *(double *)&pTVar16->field_0x8;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)pTVar15;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar8;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar10;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    dVar1 = _UNK_150689688;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = _UNK_150689518;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
    return __return_storage_ptr__;
  }
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_8752542440373615892>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                      ,0x2ec,"FChaosEngineInterface::IsValid(InActorReference)");
  _Var12 = GlobalVectorConstants::Float0001;
  if (bVar13) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TTransform<double> *)(*pcVar3)();
    return pTVar14;
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar6;
  _Var12 = GlobalVectorConstants::Float1110;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
  return __return_storage_ptr__;
}

// GetCombinedShapeFilterData @ 1441ada40

FCombinedShapeFilterData * __cdecl
FChaosEngineInterface::GetCombinedShapeFilterData
          (FCombinedShapeFilterData *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCombinedShapeFilterData *pFVar3;
  
  if (param_1->Shape != (FPerShapeData *)0x0) {
    Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1->Shape,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373614577>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x80f,"InShape.Shape");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCombinedShapeFilterData *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->ShapeFilterData).QueryBlockChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).QueryOverlapChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).SimBlockChannels = 0;
  (__return_storage_ptr__->ShapeFilterData).Word3 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ShapeFilterData).SimWord3 = 0;
  (__return_storage_ptr__->InstanceData).ComponentId = 0;
  (__return_storage_ptr__->InstanceData).BodyIndex = 0;
  return __return_storage_ptr__;
}

// GetCurrentScene @ 1441adc00

FChaosScene * __cdecl FChaosEngineInterface::GetCurrentScene(FSingleParticlePhysicsProxy **param_1)

{
  longlong lVar1;
  
  if ((*param_1 != (FSingleParticlePhysicsProxy *)0x0) &&
     (lVar1 = (*param_1)->_padding_, lVar1 != 0)) {
    return *(FChaosScene **)(lVar1 + 800);
  }
  return (FChaosScene *)0x0;
}

// GetCurrentSwing1 @ 1441adc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl FChaosEngineInterface::GetCurrentSwing1(FPhysicsConstraintReference_Chaos *param_1)

{
  double dVar1;
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  GetGlobalPose(&local_78,param_1,Frame1);
  GetGlobalPose(&local_d8,param_1,Frame2);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_78,&local_138,&local_d8);
  local_158.X = local_138.Rotation.XY.m128d_f64[0];
  local_158.Y = local_138.Rotation.XY.m128d_f64[1];
  local_178._s_0.X = 0.0;
  local_178._s_0.Y = 0.0;
  local_178._s_0.Z = __real_3ff0000000000000;
  local_158.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_158.W = local_138.Rotation.ZW.m128d_f64[1];
  dVar1 = UE::Math::TQuat<double>::GetTwistAngle(&local_158,(TVector<double> *)&local_178._s_0);
  return (float)dVar1;
}

// GetCurrentSwing2 @ 1441adcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FChaosEngineInterface::GetCurrentSwing2(FPhysicsConstraintReference_Chaos *param_1)

{
  double dVar1;
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  GetGlobalPose(&local_78,param_1,Frame1);
  GetGlobalPose(&local_d8,param_1,Frame2);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_78,&local_138,&local_d8);
  local_158.X = local_138.Rotation.XY.m128d_f64[0];
  local_158.Y = local_138.Rotation.XY.m128d_f64[1];
  local_178._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_178._s_0.Y = _UNK_15061cbc8;
  local_158.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_158.W = local_138.Rotation.ZW.m128d_f64[1];
  local_178._s_0.Z = 0.0;
  dVar1 = UE::Math::TQuat<double>::GetTwistAngle(&local_158,(TVector<double> *)&local_178._s_0);
  return (float)dVar1;
}

// GetCurrentTwist @ 1441addb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FChaosEngineInterface::GetCurrentTwist(FPhysicsConstraintReference_Chaos *param_1)

{
  double dVar1;
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  GetGlobalPose(&local_78,param_1,Frame1);
  GetGlobalPose(&local_d8,param_1,Frame2);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_78,&local_138,&local_d8);
  local_158.X = local_138.Rotation.XY.m128d_f64[0];
  local_158.Y = local_138.Rotation.XY.m128d_f64[1];
  local_178._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_178._s_0.Y = _UNK_150689518;
  local_158.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_158.W = local_138.Rotation.ZW.m128d_f64[1];
  local_178._s_0.Z = 0.0;
  dVar1 = UE::Math::TQuat<double>::GetTwistAngle(&local_158,(TVector<double> *)&local_178._s_0);
  return (float)dVar1;
}

// GetDriveAngularVelocity @ 1441ade70

void __cdecl
FChaosEngineInterface::GetDriveAngularVelocity
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2)

{
  IPhysicsProxyBase *pIVar1;
  FConstraintBase *pFVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar4;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar5 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar5) && (pFVar2 = param_1->Constraint, pFVar2->Type == JointConstraintType)) &&
       (pFVar2 != (FConstraintBase *)0x0)) {
      dVar3 = *(double *)&pFVar2[0x15].Type;
      pIVar1 = pFVar2[0x15].Proxy;
      (param_2->field0_0x0)._s_0.X = (double)pFVar2[0x15]._padding_;
      (param_2->field0_0x0)._s_0.Y = dVar3;
      (param_2->field0_0x0)._s_0.Z = (double)pIVar1;
    }
  }
  return;
}

// GetDriveLinearVelocity @ 1441adee0

void __cdecl
FChaosEngineInterface::GetDriveLinearVelocity
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2)

{
  double dVar1;
  FConstraintBase *pFVar2;
  IPhysicsProxyBase *pIVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar4;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar5 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar5) && (pFVar2 = param_1->Constraint, pFVar2->Type == JointConstraintType)) &&
       (pFVar2 != (FConstraintBase *)0x0)) {
      pIVar3 = pFVar2[0x10].Proxy;
      dVar1 = *(double *)&pFVar2[0x10].DirtyFlags;
      (param_2->field0_0x0)._s_0.X = *(double *)&pFVar2[0x10].Type;
      (param_2->field0_0x0)._s_0.Y = (double)pIVar3;
      (param_2->field0_0x0)._s_0.Z = dVar1;
    }
  }
  return;
}

// GetFilterInstanceData @ 1441adfb0

FInstanceData * __cdecl
FChaosEngineInterface::GetFilterInstanceData
          (FInstanceData *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstanceData *pFVar3;
  
  if (param_1->Shape != (FPerShapeData *)0x0) {
    Chaos::FPerShapeData::GetFilterInstanceData(param_1->Shape,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373614589>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x803,"InShape.Shape");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstanceData *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->ActorId = 0;
  __return_storage_ptr__->ComponentId = 0;
  __return_storage_ptr__->BodyIndex = 0;
  return __return_storage_ptr__;
}

// GetForce @ 1441ae0e0

void __cdecl
FChaosEngineInterface::GetForce
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar4;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar4;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar5 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar5) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1[0x1b].Proxy;
      (param_2->field0_0x0)._s_0.X = *(double *)&pFVar1[0x1b].Type;
      (param_2->field0_0x0)._s_0.Y = (double)pIVar2;
      (param_2->field0_0x0)._s_0.Z = *(double *)&pFVar1[0x1b].DirtyFlags;
      dVar3 = *(double *)&pFVar1[0x1c].Type;
      (param_3->field0_0x0)._s_0.X = (double)pFVar1[0x1c]._padding_;
      (param_3->field0_0x0)._s_0.Y = dVar3;
      (param_3->field0_0x0)._s_0.Z = (double)pFVar1[0x1c].Proxy;
    }
  }
  return;
}

// GetGeometryCollection @ 1441ae270

FPhysicsGeometryCollection_Chaos __cdecl
FChaosEngineInterface::GetGeometryCollection(FImplicitObject *param_1)

{
  longlong in_RDX;
  
  param_1->_padding_ = in_RDX;
  return (FPhysicsGeometryCollection_Chaos)param_1;
}

// GetGeometryCollection @ 1441ae280

FPhysicsGeometryCollection_Chaos __cdecl
FChaosEngineInterface::GetGeometryCollection(FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPhysicsGeometryCollection_Chaos FVar3;
  longlong *in_RDX;
  
  if (*in_RDX == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Geom = (FImplicitObject *)(*pcVar1)();
      return (FPhysicsGeometryCollection_Chaos)FVar3.Geom;
    }
  }
  param_1->Shape = *(FPerShapeData **)(*in_RDX + 0x10);
  return (FPhysicsGeometryCollection_Chaos)(FImplicitObject *)param_1;
}

// GetGlobalPose @ 1441ae2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
FChaosEngineInterface::GetGlobalPose
          (TTransform<double> *__return_storage_ptr__,FPhysicsConstraintReference_Chaos *param_1,
          Type param_2)

{
  FConstraintBase *pFVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  TTransform<double> *pTVar5;
  __m128d _Var6;
  undefined1 auStack_1c8 [32];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      local_e8.Rotation.XY.m128d_f64[0] = (double)pFVar1[2]._padding_;
      local_e8.Rotation.XY.m128d_f64[1] = *(double *)&pFVar1[2].Type;
      local_e8.Rotation.ZW.m128d_f64[0] = (double)pFVar1[2].Proxy;
      local_e8.Rotation.ZW.m128d_f64[1] = *(double *)&pFVar1[2].DirtyFlags;
      lVar4 = pFVar1[1]._padding_;
      lVar2 = *(longlong *)&pFVar1[1].Type;
      local_e8.Translation.XY.m128d_f64[0] = (double)pFVar1[3]._padding_;
      local_e8.Translation.XY.m128d_f64[1] = *(double *)&pFVar1[3].Type;
      local_e8.Translation.ZW.m128d_f64[0] = (double)pFVar1[3].Proxy;
      local_e8.Translation.ZW.m128d_f64[1] = *(double *)&pFVar1[3].DirtyFlags;
      local_e8.Scale3D.XY.m128d_f64[0] = (double)pFVar1[4]._padding_;
      local_e8.Scale3D.XY.m128d_f64[1] = *(double *)&pFVar1[4].Type;
      local_e8.Scale3D.ZW.m128d_f64[0] = (double)pFVar1[4].Proxy;
      local_e8.Scale3D.ZW.m128d_f64[1] = *(double *)&pFVar1[4].DirtyFlags;
      local_88.Rotation.XY.m128d_f64[0] = (double)pFVar1[5]._padding_;
      local_88.Rotation.XY.m128d_f64[1] = *(double *)&pFVar1[5].Type;
      local_88.Translation.XY.m128d_f64[0] = (double)pFVar1[6]._padding_;
      local_88.Translation.XY.m128d_f64[1] = *(double *)&pFVar1[6].Type;
      local_88.Rotation.ZW.m128d_f64[0] = (double)pFVar1[5].Proxy;
      local_88.Rotation.ZW.m128d_f64[1] = *(double *)&pFVar1[5].DirtyFlags;
      local_88.Translation.ZW.m128d_f64[0] = (double)pFVar1[6].Proxy;
      local_88.Translation.ZW.m128d_f64[1] = *(double *)&pFVar1[6].DirtyFlags;
      local_88.Scale3D.XY.m128d_f64[0] = (double)pFVar1[7]._padding_;
      local_88.Scale3D.XY.m128d_f64[1] = *(double *)&pFVar1[7].Type;
      local_88.Scale3D.ZW.m128d_f64[0] = (double)pFVar1[7].Proxy;
      local_88.Scale3D.ZW.m128d_f64[1] = *(double *)&pFVar1[7].DirtyFlags;
      if (param_2 == Frame1) {
        if (((lVar4 == 0) || (*(int *)(lVar4 + 0x1c) != 0xb)) ||
           (lVar4 = *(longlong *)(lVar4 + 0x40), lVar4 == 0)) goto LAB_1441ae501;
        pTVar5 = &local_e8;
      }
      else {
        if (((param_2 != Frame2) || (lVar2 == 0)) ||
           ((*(int *)(lVar2 + 0x1c) != 0xb || (lVar4 = *(longlong *)(lVar2 + 0x40), lVar4 == 0))))
        goto LAB_1441ae501;
        pTVar5 = &local_88;
      }
      local_148.Rotation.ZW.m128d_f64[0] = (double)(float)*(undefined8 *)(lVar4 + 0x48);
      local_148.Rotation.ZW.m128d_f64[1] =
           (double)(float)((ulonglong)*(undefined8 *)(lVar4 + 0x48) >> 0x20);
      local_148.Translation.XY.m128d_f64[0] = *(double *)(lVar4 + 0x20);
      local_148.Translation.XY.m128d_f64[1] = *(double *)(lVar4 + 0x28);
      local_148.Translation.ZW.m128d_f64[0] = *(double *)(lVar4 + 0x30);
      local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_148.Translation.ZW.m128d_f64[1] = 0.0;
      local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(lVar4 + 0x44),0);
      local_148.Rotation.XY.m128d_f64[0] = (double)*(float *)(lVar4 + 0x40);
      local_148.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)*(float *)(lVar4 + 0x44) >> 0x20);
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_1a8,pTVar5,&local_148);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
      _Var6.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
      _Var6.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
      goto LAB_1441ae53e;
    }
  }
LAB_1441ae501:
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var6 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
LAB_1441ae53e:
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var6.m128d_f64;
  return __return_storage_ptr__;
}

// GetGlobalPose_AssumesLocked @ 1441ae570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
FChaosEngineInterface::GetGlobalPose_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  TGeometryParticle<double,3> *pTVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  
  pFVar4 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar4);
  pTVar5 = (pFVar4->Particle).Ptr;
  pFVar4 = *param_1;
  fVar1 = *(float *)&(pTVar5->MXR).Property.MR;
  uVar2 = *(undefined8 *)&(pTVar5->MXR).Property.MR.field_0x8;
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar9 = (double)*(float *)&(pTVar5->MXR).Property.MR.field_0x4;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar4);
  pTVar5 = (pFVar4->Particle).Ptr;
  dVar3 = *(double *)&(pTVar5->MXR).Property.MX.field_0x10;
  dVar10 = *(double *)&(pTVar5->MXR).Property.MX;
  dVar11 = *(double *)&(pTVar5->MXR).Property.MX.field_0x8;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar8;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar3 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetGravityGroupIndex_AssumesLocked @ 1441ae630

int __cdecl
FChaosEngineInterface::GetGravityGroupIndex_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (ushort)((ushort)pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID >> 5) & 7;
  }
  return -1;
}

// GetGyroscopicTorqueEnabled_AssumesLocked @ 1441ae680

bool __cdecl
FChaosEngineInterface::GetGyroscopicTorqueEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)((byte)((ushort)(short)pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID >>
                        0xb) & 1);
  }
  return false;
}

// GetKinematicTarget_AssumesLocked @ 1441ae7b0

TTransform<double> * __cdecl
FChaosEngineInterface::GetKinematicTarget_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  GetGlobalPose_AssumesLocked(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetLinearVelocity_AssumesLocked @ 1441ae7d0

TVector<double> * __cdecl
FChaosEngineInterface::GetLinearVelocity_AssumesLocked
          (TVector<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TGeometryParticle<double,3> *pTVar6;
  double dVar7;
  double dVar8;
  
  this = *param_1;
  if (this != (FSingleParticlePhysicsProxy *)0x0) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar6 = (this->Particle).Ptr;
    if (pTVar6->Type == Static) {
      pTVar6 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar6 == (TGeometryParticle<double,3> *)0x0) {
      dVar3 = 0.0;
      dVar8 = 0.0;
      dVar7 = 0.0;
    }
    else {
      dVar3 = (double)*(float *)&pTVar6[1]._padding_;
      dVar8 = (double)*(float *)((longlong)&pTVar6[1]._padding_ + 4);
      dVar7 = (double)*(float *)&pTVar6[1]._padding_;
    }
    auVar2._8_4_ = SUB84(dVar8,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373616021>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x26b,"FChaosEngineInterface::IsValid(InActorReference)");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetLocalInertiaTensor_AssumesLocked @ 1441ae8a0

TVector<double> * __cdecl
FChaosEngineInterface::GetLocalInertiaTensor_AssumesLocked
          (TVector<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  float fVar2;
  FSingleParticlePhysicsProxy *this;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TGeometryParticle<double,3> *pTVar7;
  float fVar8;
  float local_18;
  
  this = *param_1;
  if (this != (FSingleParticlePhysicsProxy *)0x0) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar7 = (this->Particle).Ptr;
    if (pTVar7->Type < Rigid) {
      pTVar7 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar7 == (TGeometryParticle<double,3> *)0x0) {
      fVar8 = 0.0;
      fVar1 = 0.0;
      fVar2 = 0.0;
    }
    else {
      fVar1 = (float)pTVar7[1].MShapesArray.ArrayNum;
      fVar2 = (float)pTVar7[1].MShapesArray.ArrayMax;
      fVar8 = *(float *)&pTVar7[1].Type;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar8;
    return __return_storage_ptr__;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373615865>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x307,"FChaosEngineInterface::IsValid(InActorReference)");
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TVector<double> *)(*pcVar3)();
    return pTVar6;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLocalPose @ 1441ae980

TTransform<double> * __cdecl
FChaosEngineInterface::GetLocalPose
          (TTransform<double> *__return_storage_ptr__,FPhysicsConstraintReference_Chaos *param_1,
          Type param_2)

{
  FConstraintBase *pFVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  IPhysicsProxyBase *pIVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  IPhysicsProxyBase *pIVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  IPhysicsProxyBase *pIVar16;
  double dVar17;
  IPhysicsProxyBase *pIVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  IPhysicsProxyBase *pIVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar24 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar24) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      dVar2 = *(double *)&pFVar1[2].Type;
      pIVar3 = pFVar1[2].Proxy;
      dVar4 = *(double *)&pFVar1[2].DirtyFlags;
      dVar5 = (double)pFVar1[3]._padding_;
      dVar6 = *(double *)&pFVar1[3].Type;
      pIVar7 = pFVar1[3].Proxy;
      dVar8 = *(double *)&pFVar1[3].DirtyFlags;
      dVar9 = (double)pFVar1[4]._padding_;
      dVar10 = *(double *)&pFVar1[4].Type;
      pIVar11 = pFVar1[4].Proxy;
      uVar12 = *(undefined8 *)&pFVar1[4].DirtyFlags;
      dVar13 = *(double *)&pFVar1[5].Type;
      dVar14 = (double)pFVar1[6]._padding_;
      dVar15 = *(double *)&pFVar1[6].Type;
      pIVar16 = pFVar1[5].Proxy;
      dVar17 = *(double *)&pFVar1[5].DirtyFlags;
      pIVar18 = pFVar1[6].Proxy;
      dVar19 = *(double *)&pFVar1[6].DirtyFlags;
      dVar20 = (double)pFVar1[7]._padding_;
      dVar21 = *(double *)&pFVar1[7].Type;
      pIVar22 = pFVar1[7].Proxy;
      uVar23 = *(undefined8 *)&pFVar1[7].DirtyFlags;
      if (param_2 == Frame1) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)pFVar1[2]._padding_;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)pIVar3;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar5;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)pIVar7;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar8;
        local_78 = SUB84(pIVar11,0);
        uStack_74 = (undefined4)((ulonglong)pIVar11 >> 0x20);
        uStack_70 = (undefined4)uVar12;
        uStack_6c = (undefined4)((ulonglong)uVar12 >> 0x20);
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar9;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
        goto LAB_1441aeb13;
      }
      if (param_2 == Frame2) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)pFVar1[5]._padding_;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)pIVar16;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar17;
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar14;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar15;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)pIVar18;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar19;
        local_18 = SUB84(pIVar22,0);
        uStack_14 = (undefined4)((ulonglong)pIVar22 >> 0x20);
        uStack_10 = (undefined4)uVar23;
        uStack_c = (undefined4)((ulonglong)uVar23 >> 0x20);
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar20;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar21;
        local_78 = local_18;
        uStack_74 = uStack_14;
        uStack_70 = uStack_10;
        uStack_6c = uStack_c;
        goto LAB_1441aeb13;
      }
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_74 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uStack_70 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uStack_6c = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_1441aeb13:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_78;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uStack_74;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uStack_70;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uStack_6c;
  return __return_storage_ptr__;
}

// GetLocalTransform @ 1441aeb40

TTransform<double> * __cdecl
FChaosEngineInterface::GetLocalTransform
          (TTransform<double> *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  uchar uVar10;
  FImplicitObject *pFVar11;
  
  uVar10 = Chaos::FImplicitObject::GetType((param_1->Shape->Geometry).Reference);
  if ((uVar10 == '\x04') && (param_1->ActorRef != (FSingleParticlePhysicsProxy *)0x0)) {
    pFVar11 = (param_1->Shape->Geometry).Reference;
    if (pFVar11->Type != '\x04') {
      pFVar11 = (FImplicitObject *)0x0;
    }
    dVar9 = *(double *)&pFVar11[1].Type;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)&pFVar11[1].Margin;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = (double)pFVar11[2]._padding_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)pFVar11[2]._padding_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)&pFVar11[2].Type;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)&pFVar11[2].Margin;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = (double)pFVar11[3]._padding_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)pFVar11[3]._padding_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)&pFVar11[3].Type;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)&pFVar11[3].Margin;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    dVar9 = (double)pFVar11[4]._padding_;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)pFVar11[4]._padding_;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
    return __return_storage_ptr__;
  }
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  return __return_storage_ptr__;
}

// GetLocation @ 1441aec20

TVector<double> * __cdecl
FChaosEngineInterface::GetLocation
          (TVector<double> *__return_storage_ptr__,FPhysicsConstraintReference_Chaos *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  
  if ((((param_1->Constraint != (FConstraintBase *)0x0) &&
       (bVar5 = Chaos::FConstraintBase::IsValid(param_1->Constraint), bVar5)) &&
      (param_1->Constraint->Type == JointConstraintType)) &&
     (param_1->Constraint != (FConstraintBase *)0x0)) {
    pTVar6 = GetGlobalPose(&local_e8,param_1,Frame1);
    dVar3 = (pTVar6->Translation).XY.m128d_f64[0];
    dVar1 = (pTVar6->Translation).XY.m128d_f64[1];
    dVar2 = (pTVar6->Translation).ZW.m128d_f64[0];
    pTVar6 = GetGlobalPose(&local_88,param_1,Frame2);
    dVar1 = (dVar1 + (pTVar6->Translation).XY.m128d_f64[1]) * __real_3fe0000000000000;
    dVar2 = (dVar2 + (pTVar6->Translation).ZW.m128d_f64[0]) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (dVar3 + (pTVar6->Translation).XY.m128d_f64[0]) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    return __return_storage_ptr__;
  }
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMass_AssumesLocked @ 1441aed30

float __cdecl FChaosEngineInterface::GetMass_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (float)(double)pTVar1[1].MNonFrequentData.Property.MDebugName.Object;
  }
  return 0.0;
}

// GetMaxAngularVelocity_AssumesLocked @ 1441aed80

float __cdecl
FChaosEngineInterface::GetMaxAngularVelocity_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  bool bVar2;
  TGeometryParticle<double,3> *pTVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615975>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x299,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    return __real_7f7fffff;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    auVar5._0_8_ = (double)*(float *)&pTVar3[2].MXR.Property.MR.field_0xc;
    auVar5._8_8_ = 0;
    auVar6 = sqrtpd(auVar5,auVar5);
    return (float)auVar6._0_8_;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_7fefffffffffffff;
  auVar6 = sqrtpd(auVar6,auVar6);
  return (float)auVar6._0_8_;
}

// GetMaxDepenetrationVelocity_AssumesLocked @ 1441aee20

float __cdecl
FChaosEngineInterface::GetMaxDepenetrationVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  bool bVar2;
  TGeometryParticle<double,3> *pTVar3;
  float fVar4;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615933>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2c3,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    return 0.0;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    return SQRT(*(float *)&pTVar3[2].MNonFrequentData.Property.MGeometry.Reference);
  }
  return 0.0;
}

// GetMaxLinearVelocity_AssumesLocked @ 1441aeeb0

float __cdecl
FChaosEngineInterface::GetMaxLinearVelocity_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  code *pcVar1;
  bool bVar2;
  TGeometryParticle<double,3> *pTVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615965>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2a3,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    return __real_7f7fffff;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    auVar5._0_8_ = (double)*(float *)&pTVar3[2].MXR.Property.MR.field_0x8;
    auVar5._8_8_ = 0;
    auVar6 = sqrtpd(auVar5,auVar5);
    return (float)auVar6._0_8_;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_7fefffffffffffff;
  auVar6 = sqrtpd(auVar6,auVar6);
  return (float)auVar6._0_8_;
}

// GetNumActorsInAggregate @ 1441aef50

int __cdecl
FChaosEngineInterface::GetNumActorsInAggregate(FPhysicsAggregateReference_Chaos *param_1)

{
  return 0;
}

// GetNumShapes @ 1441aef60

int __cdecl FChaosEngineInterface::GetNumShapes(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  return (((this->Particle).Ptr)->MShapesArray).ArrayNum;
}

// GetQueryFilter @ 1441af8c0

FCollisionFilterData * __cdecl
FChaosEngineInterface::GetQueryFilter
          (FCollisionFilterData *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCollisionFilterData *pFVar3;
  FCombinedShapeFilterData *pFVar4;
  FCombinedShapeFilterData local_28;
  
  if (param_1->Shape != (FPerShapeData *)0x0) {
    pFVar4 = Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1->Shape,&local_28);
    Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(__return_storage_ptr__,pFVar4);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373614612>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x7ec,"InShape.Shape");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCollisionFilterData *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->Word2 = 0;
  __return_storage_ptr__->Word3 = 0;
  __return_storage_ptr__->Word0 = 0;
  __return_storage_ptr__->Word1 = 0;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 1441afda0

ulong64 __cdecl FChaosEngineInterface::GetResourceSizeEx(FSingleParticlePhysicsProxy **param_1)

{
  return 8;
}

// GetShapeFilterData @ 1441afe50

FShapeFilterData * __cdecl
FChaosEngineInterface::GetShapeFilterData
          (FShapeFilterData *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShapeFilterData *pFVar3;
  
  if (param_1->Shape != (FPerShapeData *)0x0) {
    Chaos::FPerShapeData::GetShapeFilterData(param_1->Shape,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373614601>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x7f7,"InShape.Shape");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FShapeFilterData *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->QueryBlockChannels = 0;
  __return_storage_ptr__->QueryOverlapChannels = 0;
  __return_storage_ptr__->SimBlockChannels = 0;
  __return_storage_ptr__->Word3 = 0;
  __return_storage_ptr__->SimWord3 = 0;
  return __return_storage_ptr__;
}

// GetShapeType @ 1441afec0

ECollisionShapeType __cdecl
FChaosEngineInterface::GetShapeType(FPhysicsShapeReference_Chaos *param_1)

{
  ECollisionShapeType EVar1;
  
  EVar1 = ChaosInterface::GetImplicitType((param_1->Shape->Geometry).Reference);
  return EVar1;
}

// GetSimulationFilter @ 1441b0200

FCollisionFilterData * __cdecl
FChaosEngineInterface::GetSimulationFilter
          (FCollisionFilterData *__return_storage_ptr__,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCollisionFilterData *pFVar3;
  FCombinedShapeFilterData *pFVar4;
  FCombinedShapeFilterData local_28;
  
  if (param_1->Shape != (FPerShapeData *)0x0) {
    pFVar4 = Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1->Shape,&local_28);
    Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeSimFilter(__return_storage_ptr__,pFVar4);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373614623>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x7e1,"InShape.Shape");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCollisionFilterData *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->Word2 = 0;
  __return_storage_ptr__->Word3 = 0;
  __return_storage_ptr__->Word0 = 0;
  __return_storage_ptr__->Word1 = 0;
  return __return_storage_ptr__;
}

// GetSleepEnergyThreshold_AssumesLocked @ 1441b02c0

float __cdecl
FChaosEngineInterface::GetSleepEnergyThreshold_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  return 0.0;
}

// GetStabilizationEnergyThreshold_AssumesLocked @ 1441b0300

float __cdecl
FChaosEngineInterface::GetStabilizationEnergyThreshold_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1)

{
  return 0.0;
}

// GetTransform_AssumesLocked @ 1441b03d0

TTransform<double> * __cdecl
FChaosEngineInterface::GetTransform_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1,
          bool param_2)

{
  bool bVar1;
  
  if (!param_2) {
    bVar1 = IsStatic(param_1);
    if (!bVar1) {
      IsStatic(param_1);
    }
  }
  GetGlobalPose_AssumesLocked(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetUpdateKinematicFromSimulation_AssumesLocked @ 1441b0440

bool __cdecl
FChaosEngineInterface::GetUpdateKinematicFromSimulation_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)(*(byte *)((longlong)&pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID + 1)
                 & 1);
  }
  return false;
}

// GetUserData @ 1441b0490

void * __cdecl FChaosEngineInterface::GetUserData(FPhysicsShapeReference_Chaos *param_1)

{
  FPerShapeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  pFVar1 = param_1->Shape;
  if (pFVar1 != (FPerShapeData *)0x0) {
    if (pFVar1->Type == 0) {
      return *(void **)&pFVar1[1].WorldSpaceShapeBounds.MMin.field_0x10;
    }
    return *(void **)&pFVar1[1].WorldSpaceShapeBounds.MMin.field_0x8;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8752542440373616345>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x127,"InShape.Shape");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar2)();
    return pvVar4;
  }
  return (void *)0x0;
}

// GetWakeCounter_AssumesLocked @ 1441b04f0

float __cdecl
FChaosEngineInterface::GetWakeCounter_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  return 0.0;
}

// GetWorldVelocityAtPoint_AssumesLocked @ 1441b0500

TVector<double> * __cdecl
FChaosEngineInterface::GetWorldVelocityAtPoint_AssumesLocked
          (TVector<double> *__return_storage_ptr__,FSingleParticlePhysicsProxy **param_1,
          TVector<double> *param_2)

{
  undefined8 uVar1;
  FSingleParticlePhysicsProxy *this;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  TGeometryParticle<double,3> *pTVar9;
  TGeometryParticle<double,3> *pTVar10;
  TGeometryParticle<double,3> *pTVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [56];
  TVector<double> local_a0 [5];
  
  this = *param_1;
  pTVar11 = (TGeometryParticle<double,3> *)0x0;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615915>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2d5,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar2)();
      return pTVar8;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar10 = (this->Particle).Ptr;
    if (pTVar10->Type == Static) {
      pTVar10 = pTVar11;
    }
    if (pTVar10 != (TGeometryParticle<double,3> *)0x0) {
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
      pTVar10 = (this->Particle).Ptr;
      if (pTVar10->Type < Rigid) {
        pTVar10 = pTVar11;
      }
      if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar10 = (this->Particle).Ptr;
        dVar13 = *(double *)&(pTVar10->MXR).Property.MX;
        dVar12 = *(double *)&(pTVar10->MXR).Property.MX.field_0x8;
        dVar15 = *(double *)&(pTVar10->MXR).Property.MX.field_0x10;
      }
      else {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar10 = (this->Particle).Ptr;
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar9 = (this->Particle).Ptr;
        local_d8._0_8_ = (undefined8)*(float *)&(pTVar9->MXR).Property.MR;
        local_d8._8_8_ = (undefined8)*(float *)&(pTVar9->MXR).Property.MR.field_0x4;
        uVar1 = *(undefined8 *)&(pTVar9->MXR).Property.MR.field_0x8;
        dVar15 = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_d8._24_4_ = SUB84(dVar15,0);
        local_d8._16_8_ = (double)(float)uVar1;
        local_d8._28_4_ = (int)((ulonglong)dVar15 >> 0x20);
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar9 = (this->Particle).Ptr;
        if (pTVar9->Type < Rigid) {
          pTVar9 = pTVar11;
        }
        if (pTVar9 == (TGeometryParticle<double,3> *)0x0) {
          local_f8._0_4_ = 0;
          local_f8._4_4_ = 0;
          local_f8._8_4_ = 0;
          local_f8._12_4_ = 0;
          local_f8._16_4_ = 0;
          local_f8._20_4_ = 0;
        }
        else {
          local_f8._0_4_ = *(undefined4 *)&pTVar9[1].MNonFrequentData.Property.MGeometry.Reference;
          local_f8._4_4_ =
               *(undefined4 *)
                ((longlong)&pTVar9[1].MNonFrequentData.Property.MGeometry.Reference + 4);
          local_f8._8_4_ = pTVar9[1].MNonFrequentData.Property.MUniqueIdx.Idx;
          local_f8._12_2_ = pTVar9[1].MNonFrequentData.Property.MSpatialIdx;
          local_f8._14_1_ = pTVar9[1].MNonFrequentData.Property.MResimType;
          local_f8._15_1_ = pTVar9[1].MNonFrequentData.Property.MEnabledDuringResim;
          local_f8._s_0.Z = (double)pTVar9[1].MNonFrequentData.Property.MParticleID;
        }
        pTVar8 = UE::Math::TQuat<double>::RotateVector
                           ((TQuat<double> *)local_d8,local_a0,(TVector<double> *)&local_f8._s_0);
        dVar15 = (pTVar8->field0_0x0)._s_0.Z + *(double *)&(pTVar10->MXR).Property.MX.field_0x10;
        dVar12 = (pTVar8->field0_0x0)._s_0.Y + *(double *)&(pTVar10->MXR).Property.MX.field_0x8;
        dVar13 = (pTVar8->field0_0x0)._s_0.X + *(double *)&(pTVar10->MXR).Property.MX;
      }
      dVar3 = 0.0;
      dVar13 = (param_2->field0_0x0)._s_0.X - dVar13;
      dVar12 = (param_2->field0_0x0)._s_0.Y - dVar12;
      dVar15 = (param_2->field0_0x0)._s_0.Z - dVar15;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
      pTVar10 = (this->Particle).Ptr;
      if (pTVar10->Type == Static) {
        pTVar10 = pTVar11;
      }
      if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
        dVar4 = 0.0;
        dVar5 = 0.0;
        dVar6 = 0.0;
      }
      else {
        dVar4 = (double)*(float *)&pTVar10[1]._padding_;
        dVar5 = (double)*(float *)((longlong)&pTVar10[1]._padding_ + 4);
        dVar6 = (double)*(float *)&pTVar10[1]._padding_;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
      pTVar10 = (this->Particle).Ptr;
      if (pTVar10->Type == Static) {
        pTVar10 = pTVar11;
      }
      if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
        dVar14 = 0.0;
        dVar16 = 0.0;
      }
      else {
        dVar3 = (double)*(float *)((longlong)&pTVar10[1].Proxy + 4);
        dVar14 = (double)*(float *)&pTVar10[1].Proxy;
        dVar16 = (double)*(float *)((longlong)&pTVar10[1]._padding_ + 4);
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 - (dVar12 * dVar3 - dVar15 * dVar14);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 - (dVar15 * dVar16 - dVar13 * dVar3);
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 - (dVar13 * dVar14 - dVar12 * dVar16);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetWorldVelocityAtPoint_AssumesLocked @ 1441b0830

TVector<double> * __cdecl
FChaosEngineInterface::GetWorldVelocityAtPoint_AssumesLocked
          (TVector<double> *__return_storage_ptr__,FRigidBodyHandle_Internal *param_1,
          TVector<double> *param_2)

{
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  TVector<double,3> *pTVar2;
  TVector<double,3> *pTVar3;
  TVector<double> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  TVector<double,3> local_148 [2];
  TVector<double>_u_0 local_118;
  TVector<double,3> local_f8;
  TQuat<double> local_d8;
  TVector<double> local_b8;
  TRotation<double,3> local_98 [4];
  
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pTVar1 = pTVar5;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::GetR
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,local_98);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pTVar2 = Chaos::TParticles<double,3>::GetX
                       ((TParticles<double,3> *)**(undefined8 **)&param_1->field_0x48,
                        *(int *)(*(undefined8 **)&param_1->field_0x48 + 1));
    dVar7 = *(double *)pTVar2;
    dVar6 = *(double *)&pTVar2->field_0x8;
    dVar8 = *(double *)&pTVar2->field_0x10;
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pTVar2 = Chaos::TParticles<double,3>::GetX
                       ((TParticles<double,3> *)**(undefined8 **)&param_1->field_0x48,
                        *(int *)(*(undefined8 **)&param_1->field_0x48 + 1));
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::GetR
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,
               (TRotation<double,3> *)&local_d8);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pTVar1 = pTVar5;
    if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
      pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
    }
    if (pTVar1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      local_148[0]._16_8_ = 0;
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      local_118._8_4_ = 0;
      local_118._12_4_ = 0;
      local_118._s_0.Z = 0.0;
    }
    else {
      pTVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(pTVar1);
      local_118._0_4_ = *(undefined4 *)pTVar3;
      local_118._4_4_ = *(undefined4 *)&pTVar3->field_0x4;
      local_118._8_4_ = *(undefined4 *)&pTVar3->field_0x8;
      local_118._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
      local_118._s_0.Z = (double)*(undefined8 *)&pTVar3->field_0x10;
    }
    pTVar4 = UE::Math::TQuat<double>::RotateVector
                       (&local_d8,&local_b8,(TVector<double> *)&local_118._s_0);
    dVar8 = (pTVar4->field0_0x0)._s_0.Z + *(double *)&pTVar2->field_0x10;
    dVar6 = (pTVar4->field0_0x0)._s_0.Y + *(double *)&pTVar2->field_0x8;
    dVar7 = (pTVar4->field0_0x0)._s_0.X + *(double *)pTVar2;
  }
  uVar13 = 0;
  uVar12 = 0;
  dVar7 = (param_2->field0_0x0)._s_0.X - dVar7;
  dVar6 = (param_2->field0_0x0)._s_0.Y - dVar6;
  dVar8 = (param_2->field0_0x0)._s_0.Z - dVar8;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar1 = pTVar5;
  if ((*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc != '\0') {
    pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar1,&local_f8,
               *(int *)&pTVar1->field_0x8);
    uVar14 = local_f8._16_4_;
    uVar15 = local_f8._20_4_;
    uVar16 = local_f8._0_4_;
    uVar17 = local_f8._4_4_;
    uVar18 = local_f8._8_4_;
    uVar19 = local_f8._12_4_;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  if ((*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc != '\0') {
    pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar5 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    dVar9 = 0.0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar5,local_148,
               *(int *)&pTVar5->field_0x8);
    dVar9 = local_148[0]._0_8_;
    uVar10 = local_148[0]._8_4_;
    uVar11 = local_148[0]._12_4_;
    uVar12 = (undefined4)local_148[0]._16_8_;
    uVar13 = SUB84(local_148[0]._16_8_,4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar17,uVar16) -
       (dVar6 * (double)CONCAT44(uVar13,uVar12) - dVar8 * (double)CONCAT44(uVar11,uVar10));
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44(uVar19,uVar18) - (dVar8 * dVar9 - dVar7 * (double)CONCAT44(uVar13,uVar12));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(uVar15,uVar14) - (dVar7 * (double)CONCAT44(uVar11,uVar10) - dVar6 * dVar9);
  return __return_storage_ptr__;
}

// HasKinematicTarget_AssumesLocked @ 1441b0e10

bool __cdecl
FChaosEngineInterface::HasKinematicTarget_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < pTVar1->Type) {
      return *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx == '\x03';
    }
    return false;
  }
  return true;
}

// IsBroken @ 1441b13a0

bool __cdecl FChaosEngineInterface::IsBroken(FPhysicsConstraintReference_Chaos *param_1)

{
  FConstraintBase *pFVar1;
  bool bVar2;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar2 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar2) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      return (bool)*(undefined1 *)((longlong)&pFVar1[0x1b]._padding_ + 1);
    }
  }
  return false;
}

// IsCcdEnabled @ 1441b13f0

bool __cdecl FChaosEngineInterface::IsCcdEnabled(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)((byte)pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID >> 1 & 1);
  }
  return false;
}

// IsDisabled @ 1441b14f0

bool __cdecl FChaosEngineInterface::IsDisabled(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)*(undefined1 *)
                  ((longlong)&pTVar1[2].MNonFrequentData.Property.MDebugName.Object + 1);
  }
  return false;
}

// IsDynamic @ 1441b1530

bool __cdecl FChaosEngineInterface::IsDynamic(FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  
  bVar1 = IsStatic(param_1);
  return !bVar1;
}

// IsGravityEnabled_AssumesLocked @ 1441b1550

bool __cdecl
FChaosEngineInterface::IsGravityEnabled_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)((byte)pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID & 1);
  }
  return false;
}

// IsInertiaConditioningEnabled_AssumesLocked @ 1441b15a0

bool __cdecl
FChaosEngineInterface::IsInertiaConditioningEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return (bool)((byte)pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID >> 4 & 1);
  }
  return false;
}

// IsKinematic @ 1441b15f0

bool __cdecl FChaosEngineInterface::IsKinematic(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < pTVar1->Type) {
      return *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx == '\x02';
    }
    return true;
  }
  return false;
}

// IsKinematic_AssumesLocked @ 1441b1660

bool __cdecl FChaosEngineInterface::IsKinematic_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < pTVar1->Type) {
      return *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx == '\x02';
    }
    return true;
  }
  return false;
}

// IsQueryShape @ 1441b16d0

bool __cdecl FChaosEngineInterface::IsQueryShape(FPhysicsShapeReference_Chaos *param_1)

{
  FPerShapeData *pFVar1;
  
  pFVar1 = param_1->Shape;
  if (pFVar1->Type == 0) {
    return (bool)((byte)pFVar1[1].WorldSpaceShapeBounds.MMax.field_0x1 >> 1 & 1);
  }
  return (bool)((byte)pFVar1[1].WorldSpaceShapeBounds.MMin.field_0x11 >> 1 & 1);
}

// IsRigidBody @ 1441b1700

bool __cdecl FChaosEngineInterface::IsRigidBody(FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  
  bVar1 = IsStatic(param_1);
  return !bVar1;
}

// IsSimulationShape @ 1441b1720

bool __cdecl FChaosEngineInterface::IsSimulationShape(FPhysicsShapeReference_Chaos *param_1)

{
  FPerShapeData *pFVar1;
  
  pFVar1 = param_1->Shape;
  if (pFVar1->Type == 0) {
    return (bool)(pFVar1[1].WorldSpaceShapeBounds.MMax.field_0x1 & 1);
  }
  return (bool)(pFVar1[1].WorldSpaceShapeBounds.MMin.field_0x11 & 1);
}

// IsSleeping @ 1441b1750

bool __cdecl FChaosEngineInterface::IsSleeping(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < pTVar1->Type) {
      return *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx != '\x04';
    }
    return true;
  }
  return true;
}

// IsStatic @ 1441b17c0

bool __cdecl FChaosEngineInterface::IsStatic(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (Kinematic < pTVar1->Type) {
      return *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx == '\x03';
    }
    return false;
  }
  return true;
}

// PutToSleep_AssumesLocked @ 1441b3390

void __cdecl FChaosEngineInterface::PutToSleep_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  char cVar2;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (pTVar1->Type < Rigid) {
      cVar2 = '\x02';
    }
    else {
      cVar2 = *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx;
    }
    if (cVar2 == '\x04') goto LAB_1441b3411;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 == (TGeometryParticle<double,3> *)0x0) {
    return;
  }
  if (pTVar1->Type < Rigid) {
    cVar2 = '\x02';
  }
  else {
    cVar2 = *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx;
  }
  if (cVar2 != '\x01') {
    return;
  }
LAB_1441b3411:
  Chaos::FRigidBodyHandle_External::SetObjectState
            ((FRigidBodyHandle_External *)*param_1,Sleeping,false,true);
  return;
}

// ReleaseActor @ 1441b4140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosEngineInterface::ReleaseActor
          (FSingleParticlePhysicsProxy **param_1,FChaosScene *param_2,bool param_3)

{
  FPBDRigidsSolver *this;
  FSingleParticlePhysicsProxy *pFVar1;
  
  pFVar1 = *param_1;
  if (pFVar1 == (FSingleParticlePhysicsProxy *)0x0) {
    if ((byte)LogChaos._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  if (param_2 != (FChaosScene *)0x0) {
    FChaosScene::RemoveActorFromAccelerationStructure(param_2,pFVar1);
    this = param_2->SceneSolver;
    if (((this != (FPBDRigidsSolver *)0x0) &&
        (pFVar1 = *param_1, pFVar1 != (FSingleParticlePhysicsProxy *)0x0)) &&
       ((FPBDRigidsSolver *)pFVar1->_padding_ == this)) {
      Chaos::FPBDRigidsSolver::UnregisterObject(this,pFVar1);
      *param_1 = (FSingleParticlePhysicsProxy *)0x0;
      return;
    }
    pFVar1 = *param_1;
    if (pFVar1 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_1441b41cf;
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
LAB_1441b41cf:
  *param_1 = (FSingleParticlePhysicsProxy *)0x0;
  return;
}

// ReleaseAggregate @ 1441b41f0

void __cdecl FChaosEngineInterface::ReleaseAggregate(FPhysicsAggregateReference_Chaos *param_1)

{
  return;
}

// ReleaseConstraint @ 1441b4200

void __cdecl FChaosEngineInterface::ReleaseConstraint(FPhysicsConstraintReference_Chaos *param_1)

{
  FJointConstraint *this;
  longlong lVar1;
  FPBDRigidsSolver *this_00;
  FChaosScene *this_01;
  FSuspensionConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  
  if (bEnableChaosJointConstraints) {
    if (((param_1->Constraint == (FConstraintBase *)0x0) ||
        (bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint), !bVar4)) ||
       (this = (FJointConstraint *)param_1->Constraint, (int)this->_padding_ != 1)) {
      if (param_1->Constraint == (FConstraintBase *)0x0) {
        return;
      }
      bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
      if (!bVar4) {
        return;
      }
      pFVar2 = (FSuspensionConstraint *)param_1->Constraint;
      if ((int)pFVar2->_padding_ != 3) {
        return;
      }
      if (pFVar2 == (FSuspensionConstraint *)0x0) {
        return;
      }
      lVar1 = pFVar2->_padding_;
      if (lVar1 == 0) {
        return;
      }
      if ((*(longlong *)(lVar1 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy->GetSolver<FPhysicsSolver>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                             ,0x611,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Chaos::FPBDRigidsSolver::UnregisterObject(*(FPBDRigidsSolver **)(lVar1 + 8),pFVar2);
    }
    else {
      if (this == (FJointConstraint *)0x0) {
        return;
      }
      lVar1 = this->_padding_;
      if (lVar1 == 0) {
        return;
      }
      if ((*(longlong *)(lVar1 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy->GetSolver<FPhysicsSolver>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                             ,0x5fd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FPBDRigidsSolver **)(lVar1 + 8);
      pFVar5 = Chaos::FJointConstraint::GetKinematicEndPoint(this);
      if (((pFVar5 != (FSingleParticlePhysicsProxy *)0x0) && (pFVar5->_padding_ != 0)) &&
         (this_01 = *(FChaosScene **)(pFVar5->_padding_ + 800), this_01 != (FChaosScene *)0x0)) {
        pFVar5 = Chaos::FJointConstraint::GetKinematicEndPoint(this);
        FChaosScene::RemoveActorFromAccelerationStructure(this_01,pFVar5);
      }
      Chaos::FPBDRigidsSolver::UnregisterObject(this_00,this);
    }
    param_1->Constraint = (FConstraintBase *)0x0;
  }
  return;
}

// ReleaseMaterial @ 1441b4360

void __cdecl FChaosEngineInterface::ReleaseMaterial(FMaterialHandle *param_1)

{
  FPhysicalMaterialManager *this;
  
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::Destroy(this,*(FMaterialHandle *)&param_1->InnerHandle);
  return;
}

// ReleaseMaterialMask @ 1441b4390

void __cdecl FChaosEngineInterface::ReleaseMaterialMask(FMaterialMaskHandle *param_1)

{
  FPhysicalMaterialManager *this;
  
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::Destroy(this,*(FMaterialMaskHandle *)&param_1->InnerHandle);
  return;
}

// ReleaseShape @ 1441b43c0

void __cdecl FChaosEngineInterface::ReleaseShape(FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ActorRef != (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid(InShape.ActorRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x136,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveActorFromSolver @ 1441b4740

void __cdecl
FChaosEngineInterface::RemoveActorFromSolver
          (FSingleParticlePhysicsProxy **param_1,FPBDRigidsSolver *param_2)

{
  FSingleParticlePhysicsProxy *pFVar1;
  
  if (((param_2 != (FPBDRigidsSolver *)0x0) &&
      (pFVar1 = *param_1, pFVar1 != (FSingleParticlePhysicsProxy *)0x0)) &&
     ((FPBDRigidsSolver *)pFVar1->_padding_ == param_2)) {
    Chaos::FPBDRigidsSolver::UnregisterObject(param_2,pFVar1);
    return;
  }
  pFVar1 = *param_1;
  if (pFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441b476e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

// RemoveDisabledCollisionsFor_AssumesLocked @ 1441b4780

void __cdecl
FChaosEngineInterface::RemoveDisabledCollisionsFor_AssumesLocked
          (TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TThreadedSingleParticlePhysicsProxyBase<1> *this;
  code *pcVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  FUniqueIdx local_res20 [2];
  
  if (bEnableChaosCollisionManager) {
    iVar2 = param_1->ArrayNum;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FSingleParticlePhysicsProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                (*(TThreadedSingleParticlePhysicsProxyBase<1> **)pFVar9);
      iVar3 = *(int *)(*(longlong *)(*(longlong *)pFVar9 + 8) + 0xa0);
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)pFVar9 + 8) + 0xbd0);
      lVar6 = *(longlong *)(lVar5 + 0x1128);
      iVar4 = *(int *)(lVar6 + 0xa0);
      if (iVar4 == -1) {
        *(int *)(lVar6 + 0xa0) = iVar3;
      }
      else if ((iVar4 != iVar3) &&
              (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3527348243820183436>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintFlags.h"
                                  ,0x74,
                                  "StorageDataProducer->ExternalTimestamp == ExternalTimestamp"),
              bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x1128);
      this = *(TThreadedSingleParticlePhysicsProxyBase<1> **)pFVar9;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this);
      local_res18[0] = *(undefined4 *)(*(longlong *)&this->field_0x40 + 0x58);
      TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::
      Emplace<Chaos::FUniqueIdx>
                ((TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>
                  *)(lVar5 + 0x50),local_res20,(bool *)local_res18);
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// SerializeConstraintStateToBuffer @ 1441b5cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosEngineInterface::SerializeConstraintStateToBuffer
          (FPhysicsConstraintReference_Chaos *param_1,FSerializedDataBuffer *param_2,
          ESerializedDataContext param_3)

{
  IPhysicsProxyBase *pIVar1;
  FPBDRigidsSolver *this;
  code *pcVar2;
  bool bVar3;
  FSolverSerializer *this_00;
  FPhysicsConstraintReference_Chaos *local_res8;
  
  if ((param_1->Constraint == (FConstraintBase *)0x0) ||
     (bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint), !bVar3)) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return;
  }
  pIVar1 = param_1->Constraint->Proxy;
  if (pIVar1 == (IPhysicsProxyBase *)0x0) {
    return;
  }
  this = (FPBDRigidsSolver *)pIVar1->Solver;
  if (this == (FPBDRigidsSolver *)0x0) {
    return;
  }
  if ((pIVar1->Type != CharacterGroundConstraintType) && (1 < pIVar1->Type - JointConstraintType)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614346>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x8f6,"bIsConstraintProxy");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8 = param_1;
  if (param_3 != Invalid) {
    if (param_3 == Internal) {
      `FChaosEngineInterface::SerializeConstraintStateToBuffer'::__l26::<lambda_1>::operator()
                (&local_res8,pIVar1,this,param_2);
      return;
    }
    if (param_3 == External) {
      this_00 = Chaos::FPBDRigidsSolver::GetSerializer(this);
      Chaos::FSolverSerializer::SerializeConstraintStateToBuffer
                (this_00,param_1->Constraint,param_2);
      return;
    }
  }
  if ((byte)LogChaos._0_1_ < 3) {
    return;
  }
  Chaos::LexToString(param_3);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  return;
}

// SerializeParticleStateToBuffer @ 1441b5e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosEngineInterface::SerializeParticleStateToBuffer
          (FSingleParticlePhysicsProxy **param_1,FSerializedDataBuffer *param_2,
          ESerializedDataContext param_3)

{
  FPBDRigidsSolver *this;
  FSolverSerializer *this_00;
  FSingleParticlePhysicsProxy *local_res8;
  
  local_res8 = *param_1;
  if (local_res8 == (FSingleParticlePhysicsProxy *)0x0) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      return;
    }
  }
  else {
    this = (FPBDRigidsSolver *)local_res8->_padding_;
    if (this != (FPBDRigidsSolver *)0x0) {
      if (param_3 != Invalid) {
        if (param_3 == Internal) {
          `FChaosEngineInterface::SerializeParticleStateToBuffer'::__l2::<lambda_1>::operator()
                    (&local_res8,this,param_2);
          return;
        }
        if (param_3 == External) {
          this_00 = Chaos::FPBDRigidsSolver::GetSerializer(this);
          Chaos::FSolverSerializer::SerializeParticleStateToBuffer
                    (this_00,((*param_1)->Particle).Ptr,param_2);
          return;
        }
      }
      if (2 < (byte)LogChaos._0_1_) {
        Chaos::LexToString(param_3);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
  }
  return;
}

// SetActorUserData_AssumesLocked @ 1441b6120

void __cdecl
FChaosEngineInterface::SetActorUserData_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,FPhysicsUserData_Chaos *param_2)

{
  FSingleParticlePhysicsProxy *this;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  ((this->Particle).Ptr)->MUserData = param_2;
  return;
}

// SetAngularDamping_AssumesLocked @ 1441b6160

void __cdecl
FChaosEngineInterface::SetAngularDamping_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615797>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x34b,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(float *)&pTVar4[2].MXR.Property.MR.field_0x4 = param_2;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  return;
}

// SetAngularVelocity_AssumesLocked @ 1441b6210

void __cdecl
FChaosEngineInterface::SetAngularVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (!param_3) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x28f,"bAutoWake");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615983>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x291,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_28 = (param_2->field0_0x0)._s_0.X;
    dStack_20 = (param_2->field0_0x0)._s_0.Y;
    local_18 = (param_2->field0_0x0)._s_0.Z;
    Chaos::FRigidBodyHandle_External::SetW
              ((FRigidBodyHandle_External *)*param_1,(TVector<double,3> *)&local_28,true);
  }
  return;
}

// SetBreakForces_AssumesLocked @ 1441b62d0

void __cdecl
FChaosEngineInterface::SetBreakForces_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pFVar1[0x18].Proxy = (IPhysicsProxyBase *)(double)param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[0x19].DirtyFlags = (double)param_3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetCanVisualize @ 1441b6380

void __cdecl
FChaosEngineInterface::SetCanVisualize(FPhysicsConstraintReference_Chaos *param_1,bool param_2)

{
  return;
}

// SetCcdEnabled_AssumesLocked @ 1441b6390

void __cdecl
FChaosEngineInterface::SetCcdEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfffd;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 * 2;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetCollisionEnabled @ 1441b6410

void __cdecl
FChaosEngineInterface::SetCollisionEnabled(FPhysicsConstraintReference_Chaos *param_1,bool param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(bool *)&pFVar1[9].DirtyFlags.Bits = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetComLocalPose_AssumesLocked @ 1441b6480

void __cdecl
FChaosEngineInterface::SetComLocalPose_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TTransform<double> *param_2)

{
  FParticleID FVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  FImplicitObject *pFVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar7;
  TGeometryParticle<double,3> *pTVar8;
  
  this = *param_1;
  pFVar3 = (FImplicitObject *)(param_2->Translation).XY.m128d_f64[0];
  dVar4 = (param_2->Translation).XY.m128d_f64[1];
  FVar1 = (FParticleID)(param_2->Translation).ZW.m128d_f64[0];
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar8 = (this->Particle).Ptr;
  if (pTVar8->Type < Rigid) {
    pTVar8 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar8 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar8->Proxy;
    pTVar8[1].MNonFrequentData.Property.MGeometry.Reference = pFVar3;
    *(double *)&pTVar8[1].MNonFrequentData.Property.MUniqueIdx = dVar4;
    pTVar8[1].MNonFrequentData.Property.MParticleID = FVar1;
    (pTVar8->MDirtyFlags).Bits = (pTVar8->MDirtyFlags).Bits | 0x20;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)(param_2->Rotation).XY.m128d_f64[0];
  pvVar6 = (void *)(param_2->Rotation).XY.m128d_f64[1];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[0];
  FVar7 = *(ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
            *)((param_2->Rotation).ZW.m128d_f64 + 1);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar8 = (this->Particle).Ptr;
  if (pTVar8->Type < Rigid) {
    pTVar8 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar8 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar8->Proxy;
    pTVar8[1].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController = pTVar5
    ;
    pTVar8[1].MUserData = pvVar6;
    *(double *)pTVar8[1].MShapesArray.AllocatorInstance.InlineData = dVar4;
    pTVar8[1].MShapesArray.AllocatorInstance.SecondaryData = FVar7;
    (pTVar8->MDirtyFlags).Bits = (pTVar8->MDirtyFlags).Bits | 0x20;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetComTransformLocal_AssumesLocked @ 1441b6580

void __cdecl
FChaosEngineInterface::SetComTransformLocal_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TTransform<double> *param_2)

{
  FParticleID FVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  IPhysicsProxyBase *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  double dVar7;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar8;
  FImplicitObject *pFVar9;
  bool bVar10;
  TGeometryParticle<double,3> *pTVar11;
  
  pFVar2 = *param_1;
  if (pFVar2 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8752542440373615874>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                        ,0x2fe,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar5 = (TReferenceControllerBase<1> *)(param_2->Rotation).XY.m128d_f64[0];
    pvVar6 = (void *)(param_2->Rotation).XY.m128d_f64[1];
    dVar7 = (param_2->Rotation).ZW.m128d_f64[0];
    FVar8 = *(ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              *)((param_2->Rotation).ZW.m128d_f64 + 1);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar2);
    pTVar11 = (pFVar2->Particle).Ptr;
    if (pTVar11->Type < Rigid) {
      pTVar11 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar11 != (TGeometryParticle<double,3> *)0x0) {
      pIVar3 = pTVar11->Proxy;
      pTVar11[1].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController =
           pTVar5;
      pTVar11[1].MUserData = pvVar6;
      *(double *)pTVar11[1].MShapesArray.AllocatorInstance.InlineData = dVar7;
      pTVar11[1].MShapesArray.AllocatorInstance.SecondaryData = FVar8;
      (pTVar11->MDirtyFlags).Bits = (pTVar11->MDirtyFlags).Bits | 0x20;
      if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
      }
    }
    pFVar2 = *param_1;
    pFVar9 = (FImplicitObject *)(param_2->Translation).XY.m128d_f64[0];
    dVar7 = (param_2->Translation).XY.m128d_f64[1];
    FVar1 = (FParticleID)(param_2->Translation).ZW.m128d_f64[0];
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar2);
    pTVar11 = (pFVar2->Particle).Ptr;
    if (pTVar11->Type < Rigid) {
      pTVar11 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar11 != (TGeometryParticle<double,3> *)0x0) {
      pIVar3 = pTVar11->Proxy;
      pTVar11[1].MNonFrequentData.Property.MGeometry.Reference = pFVar9;
      *(double *)&pTVar11[1].MNonFrequentData.Property.MUniqueIdx = dVar7;
      pTVar11[1].MNonFrequentData.Property.MParticleID = FVar1;
      (pTVar11->MDirtyFlags).Bits = (pTVar11->MDirtyFlags).Bits | 0x20;
      if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
      }
    }
  }
  return;
}

// SetCombinedShapeFilterData @ 1441b66e0

void __cdecl
FChaosEngineInterface::SetCombinedShapeFilterData
          (FPhysicsShapeReference_Chaos *param_1,FCombinedShapeFilterData *param_2)

{
  Chaos::FPerShapeData::SetCombinedShapeFilterData(param_1->Shape,param_2);
  return;
}

// SetConstraintUserData @ 1441b66f0

void __cdecl
FChaosEngineInterface::SetConstraintUserData
          (FPhysicsConstraintReference_Chaos *param_1,void *param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(void **)&pFVar1[0x1a].DirtyFlags = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetContactTransferScale_AssumesLocked @ 1441b6760

void __cdecl
FChaosEngineInterface::SetContactTransferScale_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pFVar1[0x1a].Proxy = (IPhysicsProxyBase *)(double)param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetDisabled @ 1441b6a30

void __cdecl FChaosEngineInterface::SetDisabled(FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  TGeometryParticle<double,3> *pTVar2;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar2 = (this->Particle).Ptr;
  if (pTVar2->Type < Rigid) {
    pTVar2 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    pIVar1 = pTVar2->Proxy;
    *(bool *)((longlong)&pTVar2[2].MNonFrequentData.Property.MDebugName.Object + 1) = param_2;
    (pTVar2->MDirtyFlags).Bits = (pTVar2->MDirtyFlags).Bits | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetDriveAngularVelocity @ 1441b6aa0

void __cdecl
FChaosEngineInterface::SetDriveAngularVelocity
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  bool bVar4;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      pFVar1[0x15]._padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
      *(double *)&pFVar1[0x15].Type = dVar3;
      pFVar1[0x15].Proxy = (IPhysicsProxyBase *)(param_2->field0_0x0)._s_0.Z;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetDriveLinearVelocity @ 1441b6b20

void __cdecl
FChaosEngineInterface::SetDriveLinearVelocity
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  IPhysicsProxyBase *pIVar3;
  bool bVar4;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pIVar3 = (IPhysicsProxyBase *)(param_2->field0_0x0)._s_0.Y;
      *(double *)&pFVar1[0x10].Type = (param_2->field0_0x0)._s_0.X;
      pFVar1[0x10].Proxy = pIVar3;
      *(double *)&pFVar1[0x10].DirtyFlags = (param_2->field0_0x0)._s_0.Z;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetDriveOrientation @ 1441b6ba0

void __cdecl
FChaosEngineInterface::SetDriveOrientation
          (FPhysicsConstraintReference_Chaos *param_1,TQuat<double> *param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  bool bVar4;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      dVar3 = param_2->Y;
      pFVar1[0x14]._padding_ = (longlong)param_2->X;
      *(double *)&pFVar1[0x14].Type = dVar3;
      dVar3 = param_2->W;
      pFVar1[0x14].Proxy = (IPhysicsProxyBase *)param_2->Z;
      *(double *)&pFVar1[0x14].DirtyFlags = dVar3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetDrivePosition @ 1441b6c20

void __cdecl
FChaosEngineInterface::SetDrivePosition
          (FPhysicsConstraintReference_Chaos *param_1,TVector<double> *param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  bool bVar4;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      pFVar1[0xf].Proxy = (IPhysicsProxyBase *)(param_2->field0_0x0)._s_0.X;
      *(double *)&pFVar1[0xf].DirtyFlags = dVar3;
      pFVar1[0x10]._padding_ = (longlong)(param_2->field0_0x0)._s_0.Z;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetFilterInstanceData @ 1441b6cc0

void __cdecl
FChaosEngineInterface::SetFilterInstanceData
          (FPhysicsShapeReference_Chaos *param_1,FInstanceData *param_2)

{
  Chaos::FPerShapeData::SetFilterInstanceData(param_1->Shape,param_2);
  return;
}

// SetGeometry @ 1441b6cd0

void __cdecl
FChaosEngineInterface::SetGeometry
          (FPhysicsShapeReference_Chaos *param_1,TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  TGeometryParticle<double,3> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  FChaosScene *this;
  code *pcVar7;
  TRefCountPtr<Chaos::FImplicitObject> TVar8;
  FSingleParticlePhysicsProxy **ppFVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  FImplicitObjectUnion *this_00;
  ulonglong uVar13;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar14;
  uint uVar15;
  TRefCountPtr<Chaos::FImplicitObject> local_res8;
  TRefCountPtr<Chaos::FImplicitObject> *local_res10;
  undefined1 local_res18 [16];
  undefined8 *local_68;
  FSingleParticlePhysicsProxy **local_60;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_58;
  
  pFVar3 = param_1->ActorRef;
  local_60 = &param_1->ActorRef;
  local_res8.Reference = (FImplicitObject *)param_1;
  local_res10 = param_2;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
  pTVar4 = (pFVar3->Particle).Ptr;
  uVar13 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  uVar15 = (pTVar4->MShapesArray).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    uVar13 = local_58._8_8_ & 0xffffffff;
    uVar15 = (pTVar4->MShapesArray).ArrayNum;
  }
  FVar14 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )0x0) {
    FVar14 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&pTVar4->MShapesArray;
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar14 + (longlong)(int)uVar15 * 8);
  while( true ) {
    iVar11 = (int)uVar13;
    if ((pTVar4->MShapesArray).ArrayNum != uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      iVar11 = local_58.ArrayNum;
    }
    if (FVar14 == FVar2) break;
    if (*(longlong *)FVar14 == (local_res8.Reference)->_padding_) {
      if (iVar11 == local_58.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar11 + 1U;
      FVar14 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )((longlong)FVar14 + 8);
      *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar11 * 8) = 0;
      *(FImplicitObject **)(local_58.AllocatorInstance.Data + (longlong)iVar11 * 8) =
           param_2->Reference;
      uVar13 = (ulonglong)(iVar11 + 1U);
      param_2->Reference = (FImplicitObject *)0x0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)FVar14 + 0x10);
      puVar12 = (undefined8 *)(**(code **)(*plVar5 + 0x38))(plVar5,&local_68);
      iVar11 = local_58.ArrayNum;
      if (local_58.ArrayNum == local_58.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar11 + 1;
      *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar11 * 8) = 0;
      *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar11 * 8) = *puVar12;
      *puVar12 = 0;
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 1);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (*(int *)((longlong)local_68 + 0xc) == 0)) {
          (**(code **)*local_68)(local_68,1);
        }
      }
      FVar14 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )((longlong)FVar14 + 8);
      uVar13 = local_58._8_8_ & 0xffffffff;
      param_2 = local_res10;
    }
  }
  if (iVar11 == (pTVar4->MShapesArray).ArrayNum) {
    this_00 = ::operator_new(0x70);
    if (this_00 == (FImplicitObjectUnion *)0x0) {
      local_res8.Reference = (FImplicitObject *)0x0;
    }
    else {
      local_res8.Reference =
           (FImplicitObject *)Chaos::FImplicitObjectUnion::FImplicitObjectUnion(this_00,&local_58);
      if ((FImplicitObjectUnion *)local_res8.Reference != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&((FImplicitObjectUnion *)local_res8.Reference)->_padding_ =
             (int)((FImplicitObjectUnion *)local_res8.Reference)->_padding_ + 1;
        UNLOCK();
      }
    }
    ppFVar9 = local_60;
    TVar8.Reference = local_res8.Reference;
    Chaos::FRigidBodyHandle_External::SetGeometry
              ((FRigidBodyHandle_External *)*local_60,&local_res8);
    pFVar3 = *ppFVar9;
    if (((pFVar3 == (FSingleParticlePhysicsProxy *)0x0) || (lVar6 = pFVar3->_padding_, lVar6 == 0))
       || (this = *(FChaosScene **)(lVar6 + 800), this == (FChaosScene *)0x0)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8752542440373614657>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                          ,0x7bf,"Scene");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      FChaosScene::UpdateActorInAccelerationStructure(this,ppFVar9);
    }
    if ((FImplicitObjectUnion *)TVar8.Reference != (FImplicitObjectUnion *)0x0) {
      LOCK();
      plVar5 = &(TVar8.Reference)->_padding_;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (*(int *)((longlong)&(TVar8.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar8.Reference)->_padding_)(TVar8.Reference,1);
      }
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8752542440373614663>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                        ,0x7b9,"NewGeometry.Num() == ShapeArray.Num()");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_58.AllocatorInstance.Data,
             local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// SetGlobalPose_AssumesLocked @ 1441b70b0

void __cdecl
FChaosEngineInterface::SetGlobalPose_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TTransform<double> *param_2,bool param_3)

{
  FSingleParticlePhysicsProxy *this;
  FSingleParticlePhysicsProxy *pFVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  FChaosScene *this_00;
  double dVar4;
  uint uVar5;
  uint uVar6;
  TGeometryParticle<double,3> *pTVar7;
  char cVar8;
  TGeometryParticle<double,3> *pTVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar7 = (this->Particle).Ptr;
  pTVar9 = (TGeometryParticle<double,3> *)0x0;
  if (pTVar7->Type == Static) {
    pTVar7 = pTVar9;
  }
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    if (pTVar7->Type < Rigid) {
      cVar8 = '\x02';
    }
    else {
      cVar8 = *(char *)&pTVar7[2].MNonFrequentData.Property.MSpatialIdx;
    }
    if (cVar8 == '\x02') goto LAB_1441b721f;
  }
  pFVar1 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar1);
  pTVar7 = (pFVar1->Particle).Ptr;
  if (pTVar7->Type == Static) {
    pTVar7 = pTVar9;
  }
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    if (pTVar7->Type < Rigid) {
      cVar8 = '\x02';
    }
    else {
      cVar8 = *(char *)&pTVar7[2].MNonFrequentData.Property.MSpatialIdx;
    }
    if (cVar8 == '\x04') {
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
      uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar4 = __real_3e45798ee0000000;
      pTVar7 = (this->Particle).Ptr;
      local_88 = (param_2->Translation).ZW.m128d_f64[0];
      dVar12 = *(double *)&(pTVar7->MXR).Property.MX - (param_2->Translation).XY.m128d_f64[0];
      dVar13 = *(double *)&(pTVar7->MXR).Property.MX.field_0x10 - local_88;
      uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar12 = *(double *)&(pTVar7->MXR).Property.MX.field_0x8 -
               (param_2->Translation).XY.m128d_f64[1];
      if ((((double)CONCAT44(uVar11,uVar10) < __real_3e45798ee0000000 ||
            (double)CONCAT44(uVar11,uVar10) == __real_3e45798ee0000000) &&
          (uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar11,uVar10) < __real_3e45798ee0000000 ||
          (double)CONCAT44(uVar11,uVar10) == __real_3e45798ee0000000)) &&
         ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3e45798ee0000000)) {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
        pTVar7 = (this->Particle).Ptr;
        dVar12 = (param_2->Rotation).XY.m128d_f64[0] - (double)*(float *)&(pTVar7->MXR).Property.MR;
        uVar10 = SUB84(dVar12,0) & uVar5;
        uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & uVar6;
        if ((((double)CONCAT44(uVar11,uVar10) < dVar4 || (double)CONCAT44(uVar11,uVar10) == dVar4)
            && (dVar12 = (param_2->Rotation).XY.m128d_f64[1] -
                         (double)*(float *)&(pTVar7->MXR).Property.MR.field_0x4,
               (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar6,SUB84(dVar12,0) & uVar5)
               <= dVar4)) &&
           (dVar12 = (param_2->Rotation).ZW.m128d_f64[0] -
                     (double)*(float *)&(pTVar7->MXR).Property.MR.field_0x8,
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar6,SUB84(dVar12,0) & uVar5) <=
           dVar4)) {
          return;
        }
      }
    }
  }
LAB_1441b721f:
  pFVar1 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar1);
  pTVar7 = (pFVar1->Particle).Ptr;
  if (pTVar7->Type == Static) {
    pTVar7 = pTVar9;
  }
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    if (pTVar7->Type < Rigid) {
      cVar8 = '\x02';
    }
    else {
      cVar8 = *(char *)&pTVar7[2].MNonFrequentData.Property.MSpatialIdx;
    }
    if (cVar8 == '\x02') {
      local_58 = (param_2->Scale3D).XY.m128d_f64[0];
      dStack_50 = (param_2->Scale3D).XY.m128d_f64[1];
      local_48 = (param_2->Scale3D).ZW.m128d_f64[0];
      dStack_40 = (param_2->Scale3D).ZW.m128d_f64[1];
      local_88 = (param_2->Translation).XY.m128d_f64[0];
      dStack_80 = (param_2->Translation).XY.m128d_f64[1];
      uStack_70 = 2;
      local_98._4_4_ = (float)(param_2->Rotation).XY.m128d_f64[1];
      local_98._0_4_ = (float)(param_2->Rotation).XY.m128d_f64[0];
      uStack_90._4_4_ = (float)(param_2->Rotation).ZW.m128d_f64[1];
      uStack_90._0_4_ = (float)(param_2->Rotation).ZW.m128d_f64[0];
      local_78 = (param_2->Translation).ZW.m128d_f64[0];
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
      pTVar7 = (this->Particle).Ptr;
      if (pTVar7->Type == Static) {
        pTVar7 = pTVar9;
      }
      if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
        pIVar2 = pTVar7->Proxy;
        *(undefined1 (*) [8])&pTVar7[1].MXR.Property.MX = local_98;
        *(double *)&pTVar7[1].MXR.Property.MX.field_0x8 = uStack_90;
        *(double *)&pTVar7[1].MXR.Property.MX.field_0x10 = local_88;
        pTVar7[1].MXR.Property._padding_ = (longlong)dStack_80;
        *(double *)&pTVar7[1].MXR.Property.MR = local_78;
        *(ulonglong *)&pTVar7[1].MXR.Property.MR.field_0x8 = CONCAT44(uStack_6c,uStack_70);
        (pTVar7->MDirtyFlags).Bits = (pTVar7->MDirtyFlags).Bits | 0x40;
        if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
          Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
        }
      }
      local_98 = (undefined1  [8])UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      Chaos::FRigidBodyHandle_External::SetV
                ((FRigidBodyHandle_External *)this,(TVector<double,3> *)local_98,true);
      local_98 = (undefined1  [8])UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      Chaos::FRigidBodyHandle_External::SetW
                ((FRigidBodyHandle_External *)this,(TVector<double,3> *)local_98,true);
    }
  }
  local_98 = (undefined1  [8])(param_2->Translation).XY.m128d_f64[0];
  uStack_90 = (param_2->Translation).XY.m128d_f64[1];
  local_88 = (param_2->Translation).ZW.m128d_f64[0];
  Chaos::FRigidBodyHandle_External::SetX
            ((FRigidBodyHandle_External *)this,(TVector<double,3> *)local_98,true);
  local_98 = (undefined1  [8])(param_2->Rotation).XY.m128d_f64[0];
  uStack_90 = (param_2->Rotation).XY.m128d_f64[1];
  local_88 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_2->Rotation).ZW.m128d_f64[1];
  Chaos::FRigidBodyHandle_External::SetR
            ((FRigidBodyHandle_External *)this,(TRotation<double,3> *)local_98,true);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  Chaos::TGeometryParticle<double,3>::UpdateShapeBounds((this->Particle).Ptr);
  if (((*param_1 != (FSingleParticlePhysicsProxy *)0x0) &&
      (lVar3 = (*param_1)->_padding_, lVar3 != 0)) &&
     (this_00 = *(FChaosScene **)(lVar3 + 800), this_00 != (FChaosScene *)0x0)) {
    FChaosScene::UpdateActorInAccelerationStructure(this_00,param_1);
  }
  return;
}

// SetGravityEnabled_AssumesLocked @ 1441b7470

void __cdecl
FChaosEngineInterface::SetGravityEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfffe;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetGravityGroupIndex_AssumesLocked @ 1441b74e0

void __cdecl
FChaosEngineInterface::SetGravityGroupIndex_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,uint param_2)

{
  FSingleParticlePhysicsProxy *this;
  TPBDRigidParticle<double,3> *this_00;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  this_00 = (TPBDRigidParticle<double,3> *)(this->Particle).Ptr;
  if ((byte)this_00->field_0x98 < Rigid) {
    this_00 = (TPBDRigidParticle<double,3> *)0x0;
  }
  if (this_00 != (TPBDRigidParticle<double,3> *)0x0) {
    Chaos::TPBDRigidParticle<double,3>::SetGravityGroupIndex(this_00,param_2);
  }
  return;
}

// SetGyroscopicTorqueEnabled_AssumesLocked @ 1441b7530

void __cdecl
FChaosEngineInterface::SetGyroscopicTorqueEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xf7ff;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 0xb;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetIgnoreAnalyticCollisions_AssumesLocked @ 1441b7620

void __cdecl
FChaosEngineInterface::SetIgnoreAnalyticCollisions_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  FSingleParticlePhysicsProxy *this;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  Chaos::TGeometryParticle<double,3>::SetIgnoreAnalyticCollisions((this->Particle).Ptr,param_2);
  return;
}

// SetInertiaConditioningEnabled_AssumesLocked @ 1441b7660

void __cdecl
FChaosEngineInterface::SetInertiaConditioningEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xffef;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 4;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetInitialized_AssumesLocked @ 1441b76e0

void __cdecl
FChaosEngineInterface::SetInitialized_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  TGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = ((*param_1)->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    *(bool *)&pTVar1[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.
              ReferenceController = param_2;
  }
  return;
}

// SetIsKinematic_AssumesLocked @ 1441b7710

void __cdecl
FChaosEngineInterface::SetIsKinematic_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  FSingleParticlePhysicsProxy *pFVar1;
  IPhysicsProxyBase *pIVar2;
  EObjectStateType EVar3;
  char cVar4;
  TGeometryParticle<double,3> *pTVar5;
  EObjectStateType EVar6;
  TVector<double,3> local_38 [2];
  
  pFVar1 = *param_1;
  EVar6 = !param_2 + Sleeping;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar1);
  pTVar5 = (pFVar1->Particle).Ptr;
  if (pTVar5->Type == Static) {
    pTVar5 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar5 == (TGeometryParticle<double,3> *)0x0) {
    cVar4 = '\x03';
  }
  else if (pTVar5->Type < Rigid) {
    cVar4 = '\x02';
  }
  else {
    cVar4 = *(char *)&pTVar5[2].MNonFrequentData.Property.MSpatialIdx;
  }
  if (cVar4 == '\x01') {
    if (EVar6 != Sleeping) {
      return;
    }
    Chaos::FRigidBodyHandle_External::SetObjectState
              ((FRigidBodyHandle_External *)*param_1,Kinematic,false,true);
  }
  else {
    EVar3 = EVar6;
    if ((cVar4 != '\x02') && (EVar3 = EVar6 * '\x02', cVar4 != '\x04')) {
      return;
    }
    if (EVar3 != Kinematic) {
      return;
    }
    Chaos::FRigidBodyHandle_External::SetObjectState
              ((FRigidBodyHandle_External *)*param_1,EVar6 * '\x02',false,true);
    if (EVar6 == Kinematic) {
      pFVar1 = *param_1;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar1);
      pTVar5 = (pFVar1->Particle).Ptr;
      if (pTVar5->Type < Rigid) {
        pTVar5 = (TGeometryParticle<double,3> *)0x0;
      }
      if (pTVar5 == (TGeometryParticle<double,3> *)0x0) {
        return;
      }
      pIVar2 = pTVar5->Proxy;
      (pTVar5->MNonFrequentData).Property.MResimType = FullResim;
      (pTVar5->MDirtyFlags).Bits = (pTVar5->MDirtyFlags).Bits | 0x10;
      if (pIVar2 == (IPhysicsProxyBase *)0x0) {
        return;
      }
      if (pIVar2->Solver == (FPhysicsSolverBase *)0x0) {
        return;
      }
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      return;
    }
  }
  if (EVar6 == Sleeping) {
    local_38[0]._16_8_ = 0;
    local_38[0]._0_8_ = 0;
    local_38[0]._8_8_ = 0;
    Chaos::FRigidBodyHandle_External::SetV((FRigidBodyHandle_External *)*param_1,local_38,true);
    local_38[0]._16_8_ = 0;
    local_38[0]._0_8_ = 0;
    local_38[0]._8_8_ = 0;
    Chaos::FRigidBodyHandle_External::SetW((FRigidBodyHandle_External *)*param_1,local_38,true);
  }
  return;
}

// SetIsProbeShape @ 1441b7880

void __cdecl
FChaosEngineInterface::SetIsProbeShape(FPhysicsShapeReference_Chaos *param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  FPerShapeData *pFVar4;
  IPhysicsProxyBase *pIVar5;
  
  pFVar4 = param_1->Shape;
  if (pFVar4->Type == 0) {
    pIVar5 = (IPhysicsProxyBase *)pFVar4[1]._padding_;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 & 0xfb;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 | param_2 << 2;
    uVar3 = (pFVar4->DirtyFlags).Bits;
    (pFVar4->DirtyFlags).Bits = uVar3 | 1;
    if (((uVar3 == 0) && (pIVar5 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,pFVar4->ShapeIdx);
      return;
    }
  }
  else {
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 & 0xfb;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 | param_2 << 2;
  }
  return;
}

// SetIsQueryShape @ 1441b78e0

void __cdecl
FChaosEngineInterface::SetIsQueryShape(FPhysicsShapeReference_Chaos *param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  FPerShapeData *pFVar4;
  IPhysicsProxyBase *pIVar5;
  
  pFVar4 = param_1->Shape;
  if (pFVar4->Type == 0) {
    pIVar5 = (IPhysicsProxyBase *)pFVar4[1]._padding_;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 & 0xfd;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 | param_2 * '\x02';
    uVar3 = (pFVar4->DirtyFlags).Bits;
    (pFVar4->DirtyFlags).Bits = uVar3 | 1;
    if (((uVar3 == 0) && (pIVar5 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,pFVar4->ShapeIdx);
      return;
    }
  }
  else {
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 & 0xfd;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 | param_2 * '\x02';
  }
  return;
}

// SetIsSimulationShape @ 1441b7940

void __cdecl
FChaosEngineInterface::SetIsSimulationShape(FPhysicsShapeReference_Chaos *param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  FPerShapeData *pFVar4;
  IPhysicsProxyBase *pIVar5;
  
  pFVar4 = param_1->Shape;
  if (pFVar4->Type == 0) {
    pIVar5 = (IPhysicsProxyBase *)pFVar4[1]._padding_;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 | param_2;
    uVar3 = (pFVar4->DirtyFlags).Bits;
    (pFVar4->DirtyFlags).Bits = uVar3 | 1;
    if (((uVar3 == 0) && (pIVar5 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,pFVar4->ShapeIdx);
      return;
    }
  }
  else {
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 | param_2;
  }
  return;
}

// SetKinematicTarget_AssumesLocked @ 1441b7af0

void __cdecl
FChaosEngineInterface::SetKinematicTarget_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TTransform<double> *param_2)

{
  int *piVar1;
  double dVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  IPhysicsProxyBase *pIVar4;
  TGeometryParticle<double,3> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  FChaosScene *pFVar17;
  FChaosScene *this;
  undefined4 uStack_ac;
  
  dVar9 = (param_2->Rotation).XY.m128d_f64[0];
  dVar10 = (param_2->Rotation).XY.m128d_f64[1];
  dVar11 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar13 = (param_2->Translation).XY.m128d_f64[0];
  dVar14 = (param_2->Translation).XY.m128d_f64[1];
  pFVar3 = *param_1;
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
  pFVar17 = (FChaosScene *)(pFVar3->Particle).Ptr;
  this = (FChaosScene *)0x0;
  if ((char)(pFVar17->CVDContextData).Type == '\0') {
    pFVar17 = this;
  }
  if (pFVar17 != (FChaosScene *)0x0) {
    pIVar4 = *(IPhysicsProxyBase **)&pFVar17->OnPhysScenePostTick;
    *(ulonglong *)&((FParticlePositionRotation *)&pFVar17[1]._padding_)->MX =
         CONCAT44((float)dVar10,(float)dVar9);
    pFVar17[1]._padding_ = CONCAT44((float)dVar12,(float)dVar11);
    *(double *)&pFVar17[1].OnPhysScenePostTick = dVar13;
    *(double *)&pFVar17[1].OnPhysScenePostTick.field_0x8 = dVar14;
    *(double *)&pFVar17[1].OnPhysScenePostTick.field_0x10 = dVar2;
    *(ulonglong *)&pFVar17[1].OnPhysScenePostTick.field_0x18 = CONCAT44(uStack_ac,2);
    piVar1 = &(pFVar17->CVDContextData).Attributes;
    *piVar1 = *piVar1 | 0x40;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
  }
  pFVar3 = *param_1;
  pTVar5 = (pFVar3->Particle).Ptr;
  if ((((pTVar5 == (TGeometryParticle<double,3> *)0x0) ||
       (*(char *)&pTVar5[2].MNonFrequentData.Property.MSpatialIdx != '\x02')) ||
      (Chaos::SyncKinematicOnGameThread == 0)) ||
     ((Chaos::SyncKinematicOnGameThread != 1 &&
      ((~*(byte *)((longlong)&pTVar5[2].MNonFrequentData.Property.MParticleID.LocalID + 1) & 1) != 0
      )))) {
    dVar2 = (param_2->Translation).ZW.m128d_f64[0];
    dVar9 = (param_2->Translation).XY.m128d_f64[0];
    dVar10 = (param_2->Translation).XY.m128d_f64[1];
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
    pTVar5 = (pFVar3->Particle).Ptr;
    *(double *)&(pTVar5->MXR).Property.MX = dVar9;
    *(double *)&(pTVar5->MXR).Property.MX.field_0x8 = dVar10;
    *(double *)&(pTVar5->MXR).Property.MX.field_0x10 = dVar2;
    pTVar6 = (TReferenceControllerBase<1> *)pFVar3->_padding_;
    lVar7 = pFVar3->_padding_;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar7 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar16 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)pFVar3);
    *(int *)(lVar7 + 0x20) = iVar16;
    *(double *)(lVar7 + 8) = dVar9;
    *(double *)(lVar7 + 0x10) = dVar10;
    *(double *)(lVar7 + 0x18) = dVar2;
    pFVar3 = *param_1;
    dVar2 = (param_2->Rotation).XY.m128d_f64[0];
    dVar9 = (param_2->Rotation).XY.m128d_f64[1];
    dVar10 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
    pTVar5 = (pFVar3->Particle).Ptr;
    *(float *)&(pTVar5->MXR).Property.MR = (float)dVar2;
    *(float *)&(pTVar5->MXR).Property.MR.field_0x4 = (float)dVar9;
    *(float *)&(pTVar5->MXR).Property.MR.field_0x8 = (float)dVar10;
    *(float *)&(pTVar5->MXR).Property.MR.field_0xc = (float)dVar11;
    pTVar6 = (TReferenceControllerBase<1> *)pFVar3->_padding_;
    lVar7 = pFVar3->_padding_;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar7 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar16 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)pFVar3);
    *(double *)(lVar7 + 0x30) = dVar2;
    *(double *)(lVar7 + 0x38) = dVar9;
    *(int *)(lVar7 + 0x50) = iVar16;
    *(double *)(lVar7 + 0x40) = dVar10;
    *(double *)(lVar7 + 0x48) = dVar11;
    pFVar3 = *param_1;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
    Chaos::TGeometryParticle<double,3>::UpdateShapeBounds((pFVar3->Particle).Ptr);
    if ((*param_1 != (FSingleParticlePhysicsProxy *)0x0) &&
       (lVar7 = (*param_1)->_padding_, lVar7 != 0)) {
      this = *(FChaosScene **)(lVar7 + 800);
    }
    FChaosScene::UpdateActorInAccelerationStructure(this,param_1);
  }
  return;
}

// SetLinearDamping_AssumesLocked @ 1441b7e20

void __cdecl
FChaosEngineInterface::SetLinearDamping_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615805>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x343,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(float *)&pTVar4[2].MXR.Property.MR = param_2;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  return;
}

// SetLinearLimit @ 1441b7ed0

void __cdecl
FChaosEngineInterface::SetLinearLimit(FPhysicsConstraintReference_Chaos *param_1,float param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pFVar1[10].Proxy = (IPhysicsProxyBase *)(double)param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetLinearVelocity_AssumesLocked @ 1441b7f40

void __cdecl
FChaosEngineInterface::SetLinearVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (!param_3) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373616006>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x27a,"bAutoWake");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373616004>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x27c,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_28 = (param_2->field0_0x0)._s_0.X;
    dStack_20 = (param_2->field0_0x0)._s_0.Y;
    local_18 = (param_2->field0_0x0)._s_0.Z;
    Chaos::FRigidBodyHandle_External::SetV
              ((FRigidBodyHandle_External *)*param_1,(TVector<double,3> *)&local_28,true);
  }
  return;
}

// SetLocalInertiaTensor_AssumesLocked @ 1441b8000

void __cdecl
FChaosEngineInterface::SetLocalInertiaTensor_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar4;
  code *pcVar5;
  bool bVar6;
  TGeometryParticle<double,3> *pTVar7;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x310,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar7 = (this->Particle).Ptr;
    if (pTVar7->Type < Rigid) {
      pTVar7 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
      pIVar4 = pTVar7->Proxy;
      pTVar7[1].MShapesArray.ArrayNum = (int)(float)dVar1;
      pTVar7[1].MShapesArray.ArrayMax = (int)(float)dVar2;
      *(float *)&pTVar7[1].Type = (float)dVar3;
      (pTVar7->MDirtyFlags).Bits = (pTVar7->MDirtyFlags).Bits | 0x20;
      if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
      }
    }
  }
  return;
}

// SetLocalPose @ 1441b80e0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FChaosEngineInterface::SetLocalPose
          (FPhysicsConstraintReference_Chaos *param_1,TTransform<double> *param_2,Type param_3)

{
  FJointConstraint *this;
  bool bVar1;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
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
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar1 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar1) && (this = (FJointConstraint *)param_1->Constraint, (int)this->_padding_ == 1)) &&
       (this != (FJointConstraint *)0x0)) {
      local_188 = *(double *)(this->JointSettings).Property.ConnectorTransforms.V;
      dStack_180 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x8;
      local_178 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x10;
      dStack_170 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x18;
      local_168 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x20;
      dStack_160 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x28;
      local_158 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x30;
      dStack_150 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x38;
      local_148 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x40;
      dStack_140 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x48;
      local_138 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x50;
      dStack_130 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[0].field_0x58;
      local_108 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x20;
      dStack_100 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x28;
      local_f8 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x30;
      dStack_f0 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x38;
      local_e8 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x40;
      dStack_e0 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x48;
      local_d8 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x50;
      dStack_d0 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x58;
      local_118 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_110 = (param_2->Rotation).ZW.m128d_f64[1];
      local_128 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_120 = (param_2->Rotation).XY.m128d_f64[1];
      if (param_3 == Frame1) {
        local_168 = (param_2->Translation).XY.m128d_f64[0];
        dStack_160 = (param_2->Translation).XY.m128d_f64[1];
        local_158 = (param_2->Translation).ZW.m128d_f64[0];
        dStack_150 = (param_2->Translation).ZW.m128d_f64[1];
        local_148 = (param_2->Scale3D).XY.m128d_f64[0];
        dStack_140 = (param_2->Scale3D).XY.m128d_f64[1];
        local_138 = (param_2->Scale3D).ZW.m128d_f64[0];
        dStack_130 = (param_2->Scale3D).ZW.m128d_f64[1];
        local_188 = local_128;
        dStack_180 = dStack_120;
        local_178 = local_118;
        dStack_170 = dStack_110;
        local_128 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x0;
        dStack_120 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x8;
        local_118 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x10;
        dStack_110 = *(double *)&(this->JointSettings).Property.ConnectorTransforms.V[1].field_0x18;
      }
      else {
        local_108 = (param_2->Translation).XY.m128d_f64[0];
        dStack_100 = (param_2->Translation).XY.m128d_f64[1];
        local_f8 = (param_2->Translation).ZW.m128d_f64[0];
        dStack_f0 = (param_2->Translation).ZW.m128d_f64[1];
        local_e8 = (param_2->Scale3D).XY.m128d_f64[0];
        dStack_e0 = (param_2->Scale3D).XY.m128d_f64[1];
        local_d8 = (param_2->Scale3D).ZW.m128d_f64[0];
        dStack_d0 = (param_2->Scale3D).ZW.m128d_f64[1];
      }
      local_c8 = local_188;
      dStack_c0 = dStack_180;
      local_b8 = local_178;
      dStack_b0 = dStack_170;
      local_a8 = local_168;
      dStack_a0 = dStack_160;
      local_98 = local_158;
      dStack_90 = dStack_150;
      local_88 = local_148;
      dStack_80 = dStack_140;
      local_78 = local_138;
      dStack_70 = dStack_130;
      local_68 = local_128;
      dStack_60 = dStack_120;
      local_58 = local_118;
      dStack_50 = dStack_110;
      local_48 = local_108;
      dStack_40 = dStack_100;
      local_38 = local_f8;
      dStack_30 = dStack_f0;
      local_28 = local_e8;
      dStack_20 = dStack_e0;
      local_18 = local_d8;
      dStack_10 = dStack_d0;
      Chaos::FJointConstraint::SetJointTransforms
                (this,(TVector<Chaos::TRigidTransform<double,3>,2> *)&local_c8);
    }
  }
  return;
}

// SetLocalTransform @ 1441b82f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosEngineInterface::SetLocalTransform
          (FPhysicsShapeReference_Chaos *param_1,TTransform<double> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FSingleParticlePhysicsProxy *this;
  FImplicitObject *this_00;
  FImplicitObject *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TImplicitObjectTransformed<double,3,1> *pTVar7;
  uchar uVar8;
  bool bVar9;
  byte bVar10;
  TAABB<double,3> *pTVar11;
  TImplicitObjectTransformed<double,3,1> *pTVar12;
  undefined8 *puVar13;
  FImplicitObjectUnion *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_210;
  TRefCountPtr<Chaos::FImplicitObject> local_1f8;
  double dStack_1f0;
  uint local_1e8;
  TImplicitObjectTransformed<double,3,1> *local_1e0;
  TRefCountPtr<Chaos::FImplicitObject> local_1d8;
  FSingleParticlePhysicsProxy *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [48];
  TAABB<double,3> local_138;
  FImplicitObjectUnion *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FImplicitObjectUnion *local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = param_1->ActorRef;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return;
  }
  local_1d0 = this;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  this_00 = (((this->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
  if ((this_00 == (FImplicitObject *)0x0) ||
     (uVar8 = Chaos::FImplicitObject::GetType(this_00), uVar8 != '\x05')) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614499>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x85d,
                       "CurrentGeom && CurrentGeom->GetType() == FImplicitObjectUnion::StaticType()"
                      );
    if (!bVar9) {
      return;
    }
  }
  else {
    uVar19 = (uint)this_00[1]._padding_;
    uVar18 = param_1->Shape->ShapeIdx;
    if ((int)uVar18 < (int)uVar19) {
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (0 < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar19,&local_210.AllocatorInstance,0,&local_210.ArrayMax);
      }
      local_1e8 = (uint)this_00[1]._padding_;
      uVar15 = (ulonglong)(int)local_1e8;
      uVar19 = 0;
      puVar17 = (undefined8 *)this_00[1]._padding_;
      local_1c0 = puVar17 + uVar15;
      while( true ) {
        puVar13 = local_1c0;
        if ((int)this_00[1]._padding_ != (int)uVar15) {
          local_218[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_218);
        }
        if (puVar17 == puVar13) break;
        pFVar4 = (FImplicitObject *)*puVar17;
        if (uVar19 == uVar18) {
          local_1f8.Reference = (FImplicitObject *)(param_2->Rotation).XY.m128d_f64[0];
          dStack_1f0 = (param_2->Rotation).XY.m128d_f64[1];
          local_1b8 = (param_2->Rotation).ZW.m128d_f64[0];
          dStack_1b0 = (param_2->Rotation).ZW.m128d_f64[1];
          local_1a8 = (param_2->Translation).XY.m128d_f64[0];
          dStack_1a0 = (param_2->Translation).XY.m128d_f64[1];
          local_198 = (param_2->Translation).ZW.m128d_f64[0];
          dStack_190 = (param_2->Translation).ZW.m128d_f64[1];
          local_188 = (param_2->Scale3D).XY.m128d_f64[0];
          dStack_180 = (param_2->Scale3D).XY.m128d_f64[1];
          local_178 = (param_2->Scale3D).ZW.m128d_f64[0];
          dStack_170 = (param_2->Scale3D).ZW.m128d_f64[1];
          pTVar12 = (TImplicitObjectTransformed<double,3,1> *)0x0;
          if (pFVar4 != (FImplicitObject *)0x0) {
            bVar10 = Chaos::FImplicitObject::GetType(pFVar4);
            if ((bVar10 & 0x1f) == 4) {
              (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4,&local_1e0);
              pTVar7 = local_1e0;
              local_108 = (FImplicitObjectUnion *)local_1f8.Reference;
              dStack_100 = dStack_1f0;
              local_f8 = local_1b8;
              dStack_f0 = dStack_1b0;
              pFVar4 = (local_1e0->MObject).Reference;
              local_e8 = local_1a8;
              dStack_e0 = dStack_1a0;
              local_d8 = local_198;
              dStack_d0 = dStack_190;
              local_c8 = local_188._0_4_;
              uStack_c4 = local_188._4_4_;
              uStack_c0 = dStack_180._0_4_;
              uStack_bc = dStack_180._4_4_;
              local_b8 = local_178._0_4_;
              uStack_b4 = local_178._4_4_;
              uStack_b0 = dStack_170._0_4_;
              uStack_ac = dStack_170._4_4_;
              pTVar11 = (TAABB<double,3> *)(**(code **)(pFVar4->_padding_ + 0x90))(pFVar4,local_168)
              ;
              pTVar11 = Chaos::TAABB<double,3>::TransformedAABB
                                  (pTVar11,&local_138,(TRigidTransform<double,3> *)&local_108);
              pTVar12 = local_1e0;
              uVar6 = *(undefined8 *)&(pTVar11->MMin).field_0x8;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar11->MMin;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMin.field_0x8 = uVar6;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMin.field_0x10 =
                   *(undefined8 *)&(pTVar11->MMin).field_0x10;
              uVar6 = *(undefined8 *)&(pTVar11->MMax).field_0x8;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar11->MMax;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMax.field_0x8 = uVar6;
              *(undefined8 *)&(pTVar7->MLocalBoundingBox).MMax.field_0x10 =
                   *(undefined8 *)&(pTVar11->MMax).field_0x10;
              *(FImplicitObjectUnion **)&pTVar7->MTransform = local_108;
              *(double *)&(pTVar7->MTransform).field_0x8 = dStack_100;
              *(double *)&(pTVar7->MTransform).field_0x10 = local_f8;
              *(double *)&(pTVar7->MTransform).field_0x18 = dStack_f0;
              *(double *)&(pTVar7->MTransform).field_0x20 = local_e8;
              *(double *)&(pTVar7->MTransform).field_0x28 = dStack_e0;
              *(double *)&(pTVar7->MTransform).field_0x30 = local_d8;
              *(double *)&(pTVar7->MTransform).field_0x38 = dStack_d0;
              *(ulonglong *)&(pTVar7->MTransform).field_0x40 = CONCAT44(uStack_c4,local_c8);
              *(ulonglong *)&(pTVar7->MTransform).field_0x48 = CONCAT44(uStack_bc,uStack_c0);
              *(ulonglong *)&(pTVar7->MTransform).field_0x50 = CONCAT44(uStack_b4,local_b8);
              *(ulonglong *)&(pTVar7->MTransform).field_0x58 = CONCAT44(uStack_ac,uStack_b0);
              local_1e0 = (TImplicitObjectTransformed<double,3,1> *)0x0;
            }
            else {
              (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
              pTVar12 = ::operator_new(0xc0);
              if (pTVar12 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
                pTVar12 = (TImplicitObjectTransformed<double,3,1> *)0x0;
              }
              else {
                local_a8 = (FImplicitObjectUnion *)local_1f8.Reference;
                dStack_a0 = dStack_1f0;
                local_98 = local_1b8;
                dStack_90 = dStack_1b0;
                local_88 = local_1a8;
                dStack_80 = dStack_1a0;
                local_78 = local_198;
                dStack_70 = dStack_190;
                local_68 = local_188;
                dStack_60 = dStack_180;
                local_58 = local_178;
                dStack_50 = dStack_170;
                pTVar12 = Chaos::TImplicitObjectTransformed<double,3,1>::
                          TImplicitObjectTransformed<double,3,1>
                                    (pTVar12,&local_1d8,(TRigidTransform<double,3> *)&local_a8);
                if (pTVar12 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
                  LOCK();
                  *(int *)&pTVar12->_padding_ = (int)pTVar12->_padding_ + 1;
                  UNLOCK();
                }
              }
              if (local_1d8.Reference != (FImplicitObject *)0x0) {
                LOCK();
                plVar1 = &(local_1d8.Reference)->_padding_;
                lVar16 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if (((int)lVar16 == 1) &&
                   (*(int *)((longlong)&(local_1d8.Reference)->_padding_ + 4) == 0)) {
                  (**(code **)(local_1d8.Reference)->_padding_)();
                }
              }
            }
          }
          if (local_210.ArrayNum == local_210.ArrayMax) {
            local_210.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_210.AllocatorInstance,&local_210.ArrayMax);
          }
          lVar16 = (longlong)local_210.ArrayNum;
          uVar19 = uVar19 + 1;
          puVar17 = puVar17 + 1;
          local_210.ArrayNum = local_210.ArrayNum + 1;
          *(TImplicitObjectTransformed<double,3,1> **)
           (local_210.AllocatorInstance.Data + lVar16 * 8) = pTVar12;
          uVar15 = (ulonglong)local_1e8;
        }
        else {
          puVar13 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,&local_1c8);
          if (local_210.ArrayNum == local_210.ArrayMax) {
            local_210.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_210.AllocatorInstance,&local_210.ArrayMax);
          }
          iVar3 = local_210.ArrayNum + 1;
          *(undefined8 *)(local_210.AllocatorInstance.Data + (longlong)local_210.ArrayNum * 8) = 0;
          *(undefined8 *)(local_210.AllocatorInstance.Data + (longlong)local_210.ArrayNum * 8) =
               *puVar13;
          *puVar13 = 0;
          local_210.ArrayNum = iVar3;
          if (local_1c8 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_1c8 + 1);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (*(int *)((longlong)local_1c8 + 0xc) == 0)) {
              (**(code **)*local_1c8)();
            }
          }
          uVar15 = (ulonglong)local_1e8;
          uVar19 = uVar19 + 1;
          puVar17 = puVar17 + 1;
        }
      }
      if (local_210.ArrayNum == (int)this_00[1]._padding_) {
        pFVar14 = ::operator_new(0x70);
        if (pFVar14 == (FImplicitObjectUnion *)0x0) {
          local_1f8.Reference = (FImplicitObject *)0x0;
        }
        else {
          pFVar14 = Chaos::FImplicitObjectUnion::FImplicitObjectUnion(pFVar14,&local_210);
          local_1f8.Reference = (FImplicitObject *)pFVar14;
          if (pFVar14 != (FImplicitObjectUnion *)0x0) {
            LOCK();
            *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
            UNLOCK();
            Chaos::FRigidBodyHandle_External::SetGeometry
                      ((FRigidBodyHandle_External *)local_1d0,&local_1f8);
            LOCK();
            plVar1 = &pFVar14->_padding_;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar16 == 1) && (*(int *)((longlong)&pFVar14->_padding_ + 4) == 0)) {
              (**(code **)pFVar14->_padding_)(pFVar14,1);
            }
            goto LAB_1441b87ae;
          }
        }
        Chaos::FRigidBodyHandle_External::SetGeometry
                  ((FRigidBodyHandle_External *)local_1d0,&local_1f8);
      }
      else {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8752542440373614472>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                           ,0x878,"NewGeoms.Num() == ObjectArray.Num()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
LAB_1441b87ae:
      DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                ((TRefCountPtr<Chaos::FImplicitObject> *)local_210.AllocatorInstance.Data,
                 local_210.ArrayNum);
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      return;
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614493>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x863,"ShapeIndex < ObjectArray.Num()");
    if (!bVar9) {
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetMACDEnabled_AssumesLocked @ 1441b8840

void __cdecl
FChaosEngineInterface::SetMACDEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfdff;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 9;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetMaskFilter @ 1441b88c0

void __cdecl
FChaosEngineInterface::SetMaskFilter(FPhysicsShapeReference_Chaos *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FShapeFilterData local_28;
  
  if (param_1->Shape == (FPerShapeData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614601>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x7f7,"InShape.Shape");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.QueryBlockChannels = 0;
    local_28.QueryOverlapChannels = 0;
    local_28.SimBlockChannels = 0;
    local_28.Word3 = 0;
    local_28.SimWord3 = 0;
  }
  else {
    Chaos::FPerShapeData::GetShapeFilterData(param_1->Shape,&local_28);
  }
  Chaos::Filter::FShapeFilterData::SetMaskFilter(&local_28,param_2);
  Chaos::FPerShapeData::SetShapeFilterData(param_1->Shape,&local_28);
  return;
}

// SetMassConditioningEnabled_AssumesLocked @ 1441b8950

void __cdecl
FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,bool param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(bool *)((longlong)&pFVar1[9].DirtyFlags.Bits + 3) = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetMassSpaceInertiaTensor_AssumesLocked @ 1441b89c0

void __cdecl
FChaosEngineInterface::SetMassSpaceInertiaTensor_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar4;
  TGeometryParticle<double,3> *pTVar5;
  float local_18;
  float fStack_14;
  float local_10;
  
  dVar1 = *(double *)&param_2->field0_0x0;
  if (((__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
      (dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 8),
      __real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 0x10),
     __real_3e45798ee2308c3a <
     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    local_18 = (float)dVar1;
    this = *param_1;
    fStack_14 = (float)dVar2;
    local_10 = (float)dVar3;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetI
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this,(TVector<float,3> *)&local_18);
    local_18 = (float)(__real_3ff0000000000000 / (param_2->field0_0x0)._s_0.X);
    fStack_14 = (float)(__real_3ff0000000000000 / (param_2->field0_0x0)._s_0.Y);
    local_10 = (float)(__real_3ff0000000000000 / (param_2->field0_0x0)._s_0.Z);
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar5 = (this->Particle).Ptr;
    if (pTVar5->Type < Rigid) {
      pTVar5 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar5 != (TGeometryParticle<double,3> *)0x0) {
      pIVar4 = pTVar5->Proxy;
      *(ulonglong *)&pTVar5[1].MDirtyFlags = CONCAT44(fStack_14,local_18);
      *(float *)((longlong)&pTVar5[2]._padding_ + 4) = local_10;
      (pTVar5->MDirtyFlags).Bits = (pTVar5->MDirtyFlags).Bits | 0x20;
      if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
      }
    }
  }
  return;
}

// SetMass_AssumesLocked @ 1441b8af0

void __cdecl
FChaosEngineInterface::SetMass_AssumesLocked(FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  double dVar1;
  TGeometryParticle<double,3> *pTVar2;
  IPhysicsProxyBase *pIVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar2 = (this->Particle).Ptr;
  pTVar4 = (TGeometryParticle<double,3> *)0x0;
  if (pTVar2->Type < Rigid) {
    pTVar2 = pTVar4;
  }
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    pIVar3 = pTVar2->Proxy;
    pTVar2[1].MNonFrequentData.Property.MDebugName.Object = (FString *)(double)param_2;
    (pTVar2->MDirtyFlags).Bits = (pTVar2->MDirtyFlags).Bits | 0x20;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
  }
  if ((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar2 = (this->Particle).Ptr;
    if (pTVar2->Type < Rigid) {
      pTVar2 = pTVar4;
    }
    if (pTVar2 == (TGeometryParticle<double,3> *)0x0) {
      return;
    }
    pIVar3 = pTVar2->Proxy;
    pTVar2[2]._padding_ = 0;
  }
  else {
    dVar1 = __real_3ff0000000000000 / (double)param_2;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar2 = (this->Particle).Ptr;
    if (pTVar2->Type < Rigid) {
      pTVar2 = pTVar4;
    }
    if (pTVar2 == (TGeometryParticle<double,3> *)0x0) {
      return;
    }
    pIVar3 = pTVar2->Proxy;
    pTVar2[2]._padding_ = (longlong)dVar1;
  }
  (pTVar2->MDirtyFlags).Bits = (pTVar2->MDirtyFlags).Bits | 0x20;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  return;
}

// SetMaxAngularVelocity_AssumesLocked @ 1441b8c00

void __cdecl
FChaosEngineInterface::SetMaxAngularVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  float fVar5;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615952>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2b0,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar5 = __real_7f7fffff;
    if (param_2 <= MaxInput) {
      fVar5 = param_2 * param_2;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(float *)&pTVar4[2].MXR.Property.MR.field_0xc = fVar5;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  return;
}

// SetMaxDepenetrationVelocity_AssumesLocked @ 1441b8cc0

void __cdecl
FChaosEngineInterface::SetMaxDepenetrationVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615923>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x2cd,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(float *)&pTVar4[2].MNonFrequentData.Property.MGeometry.Reference = param_2;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  return;
}

// SetMaxLinearVelocity_AssumesLocked @ 1441b8d70

void __cdecl
FChaosEngineInterface::SetMaxLinearVelocity_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticle<double,3> *pTVar4;
  float fVar5;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373615941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,699,"FChaosEngineInterface::IsValid(InActorReference)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar5 = __real_7f7fffff;
    if (param_2 <= MaxInput) {
      fVar5 = param_2 * param_2;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
    pTVar4 = (this->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(float *)&pTVar4[2].MXR.Property.MR.field_0x8 = fVar5;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 8;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
      }
    }
  }
  return;
}

// SetOneWayInteraction_AssumesLocked @ 1441b8ed0

void __cdecl
FChaosEngineInterface::SetOneWayInteraction_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfffb;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 2;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetParentDominates_AssumesLocked @ 1441b8f50

void __cdecl
FChaosEngineInterface::SetParentDominates_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,bool param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      if (param_2) {
        pFVar1[9].Proxy = (IPhysicsProxyBase *)0x0;
      }
      else {
        pFVar1[9].Proxy = (IPhysicsProxyBase *)&DAT_3ff0000000000000;
      }
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetPartialIslandSleepAllowed_AssumesLocked @ 1441b8fe0

void __cdecl
FChaosEngineInterface::SetPartialIslandSleepAllowed_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfbff;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 10;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetPlasticityLimits_AssumesLocked @ 1441b92a0

void __cdecl
FChaosEngineInterface::SetPlasticityLimits_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3,
          EConstraintPlasticityType param_4)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pFVar1[0x19].Type = param_4;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      pFVar1[0x19]._padding_ = (longlong)(double)param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[0x1a].Type = (double)param_3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetPositionSolverIterationCount_AssumesLocked @ 1441b9410

void __cdecl
FChaosEngineInterface::SetPositionSolverIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetPositionSolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetProjectionEnabled_AssumesLocked @ 1441b9420

void __cdecl
FChaosEngineInterface::SetProjectionEnabled_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,bool param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(bool *)((longlong)&pFVar1[9].DirtyFlags.Bits + 1) = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[8].Type = (double)param_3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      pFVar1[8].Proxy = (IPhysicsProxyBase *)(double)param_4;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      pFVar1[9]._padding_ = (longlong)(double)param_5;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[9].Type = (double)(param_6 * __real_3c8efa35);
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetProjectionSolverIterationCount_AssumesLocked @ 1441b95f0

void __cdecl
FChaosEngineInterface::SetProjectionSolverIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetProjectionSolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetQueryFilter @ 1441b9600

void __cdecl
FChaosEngineInterface::SetQueryFilter
          (FPhysicsShapeReference_Chaos *param_1,FCollisionFilterData *param_2)

{
  code *pcVar1;
  bool bVar2;
  FCombinedShapeFilterData local_28;
  
  if (param_1->Shape == (FPerShapeData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614577>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x80f,"InShape.Shape");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.ShapeFilterData.QueryBlockChannels = 0;
    local_28.ShapeFilterData.QueryOverlapChannels = 0;
    local_28.ShapeFilterData.SimBlockChannels = 0;
    local_28.ShapeFilterData.Word3 = 0;
    local_28.ShapeFilterData.SimWord3 = 0;
    local_28.InstanceData.ActorId = 0;
    local_28.InstanceData.ComponentId = 0;
    local_28.InstanceData.BodyIndex = 0;
  }
  else {
    Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1->Shape,&local_28);
  }
  Chaos::Filter::FShapeFilterBuilder::SetLegacyShapeQueryFilter(&local_28,param_2);
  Chaos::FPerShapeData::SetCombinedShapeFilterData(param_1->Shape,&local_28);
  return;
}

// SetSendsSleepNotifies_AssumesLocked @ 1441b97b0

void __cdecl
FChaosEngineInterface::SetSendsSleepNotifies_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  return;
}

// SetShapeFilterData @ 1441b97c0

void __cdecl
FChaosEngineInterface::SetShapeFilterData
          (FPhysicsShapeReference_Chaos *param_1,FShapeFilterData *param_2)

{
  Chaos::FPerShapeData::SetShapeFilterData(param_1->Shape,param_2);
  return;
}

// SetShockPropagationEnabled_AssumesLocked @ 1441b97d0

void __cdecl
FChaosEngineInterface::SetShockPropagationEnabled_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,bool param_2,float param_3)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(bool *)((longlong)&pFVar1[9].DirtyFlags.Bits + 2) = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[8].DirtyFlags = (double)param_3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetSimulationFilter @ 1441b9870

void __cdecl
FChaosEngineInterface::SetSimulationFilter
          (FPhysicsShapeReference_Chaos *param_1,FCollisionFilterData *param_2)

{
  code *pcVar1;
  bool bVar2;
  FCombinedShapeFilterData local_28;
  
  if (param_1->Shape == (FPerShapeData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373614577>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x80f,"InShape.Shape");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.ShapeFilterData.QueryBlockChannels = 0;
    local_28.ShapeFilterData.QueryOverlapChannels = 0;
    local_28.ShapeFilterData.SimBlockChannels = 0;
    local_28.ShapeFilterData.Word3 = 0;
    local_28.ShapeFilterData.SimWord3 = 0;
    local_28.InstanceData.ActorId = 0;
    local_28.InstanceData.ComponentId = 0;
    local_28.InstanceData.BodyIndex = 0;
  }
  else {
    Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1->Shape,&local_28);
  }
  Chaos::Filter::FShapeFilterBuilder::SetLegacyShapeSimFilter(&local_28,param_2);
  Chaos::FPerShapeData::SetCombinedShapeFilterData(param_1->Shape,&local_28);
  return;
}

// SetSleepEnergyThreshold_AssumesLocked @ 1441b9910

void __cdecl
FChaosEngineInterface::SetSleepEnergyThreshold_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  return;
}

// SetSleepThresholdMultiplier_AssumesLocked @ 1441b9920

void __cdecl
FChaosEngineInterface::SetSleepThresholdMultiplier_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  TGeometryParticle<double,3> *pTVar2;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar2 = (this->Particle).Ptr;
  if (pTVar2->Type < Rigid) {
    pTVar2 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    pIVar1 = pTVar2->Proxy;
    *(float *)((longlong)&pTVar2[2].MNonFrequentData.Property.MGeometry.Reference + 4) = param_2;
    (pTVar2->MDirtyFlags).Bits = (pTVar2->MDirtyFlags).Bits | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetSmoothEdgeCollisionsEnabled_AssumesLocked @ 1441b9990

void __cdecl
FChaosEngineInterface::SetSmoothEdgeCollisionsEnabled_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar1;
  TGeometryParticle<double,3> *pTVar2;
  uint uVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar2 = (this->Particle).Ptr;
  if (pTVar2->Type < Rigid) {
    pTVar2 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    pIVar1 = pTVar2->Proxy;
    uVar3 = pTVar2[2].MNonFrequentData.Property.MParticleID.GlobalID;
    if (param_2) {
      uVar3 = uVar3 | 2;
    }
    else {
      uVar3 = uVar3 & 0xfffffffd;
    }
    pTVar2[2].MNonFrequentData.Property.MParticleID.GlobalID = uVar3;
    (pTVar2->MDirtyFlags).Bits = (pTVar2->MDirtyFlags).Bits | 8;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetSolverPositionIterationCount_AssumesLocked @ 1441b9a10

void __cdecl
FChaosEngineInterface::SetSolverPositionIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetPositionSolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetSolverProjectionIterationCount_AssumesLocked @ 1441b9a20

void __cdecl
FChaosEngineInterface::SetSolverProjectionIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetProjectionSolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetSolverVelocityIterationCount_AssumesLocked @ 1441b9a30

void __cdecl
FChaosEngineInterface::SetSolverVelocityIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetVelocitySolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetStabilizationEnergyThreshold_AssumesLocked @ 1441b9a40

void __cdecl
FChaosEngineInterface::SetStabilizationEnergyThreshold_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  return;
}

// SetSwingLimit @ 1441b9a50

void __cdecl
FChaosEngineInterface::SetSwingLimit
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3,float param_4)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      fVar4 = param_3 * __real_3c8efa35;
      fVar5 = param_2 * __real_3c8efa35;
      pFVar1[0xb].Type = pFVar1[0xb].Type;
      *(undefined4 *)&pFVar1[0xb].field_0xc = *(undefined4 *)&pFVar1[0xb].field_0xc;
      pFVar1[0xb].Proxy = (IPhysicsProxyBase *)(double)fVar4;
      *(double *)&pFVar1[0xb].DirtyFlags = (double)fVar5;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[0xf].Type = (double)param_4;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetTwistLimit @ 1441b9b50

void __cdecl
FChaosEngineInterface::SetTwistLimit
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3,float param_4)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  double dVar5;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar4 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      dVar5 = (double)((param_3 - param_2) * __real_3c8efa35);
      auVar3._8_4_ = *(undefined4 *)&pFVar1[0xb].Proxy;
      auVar3._0_8_ = dVar5;
      auVar3._12_4_ = *(undefined4 *)((longlong)&pFVar1[0xb].Proxy + 4);
      pFVar1[0xb].Type = SUB84(dVar5,0);
      *(int *)&pFVar1[0xb].field_0xc = (int)((ulonglong)dVar5 >> 0x20);
      pFVar1[0xb].Proxy = (IPhysicsProxyBase *)auVar3._8_8_;
      pFVar1[0xb].DirtyFlags = (TDirtyFlags<Chaos::EChaosPropertyFlags>)pFVar1[0xb].DirtyFlags.Bits;
      *(undefined4 *)&pFVar1[0xb].field_0x1c = *(undefined4 *)&pFVar1[0xb].field_0x1c;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      pFVar1[0xf]._padding_ = (longlong)(double)param_4;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetUpdateKinematicFromSimulation_AssumesLocked @ 1441b9d40

void __cdecl
FChaosEngineInterface::SetUpdateKinematicFromSimulation_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  int *piVar1;
  FSingleParticlePhysicsProxy *this;
  IPhysicsProxyBase *pIVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  if (pTVar3->Type < Rigid) {
    pTVar3 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
    pIVar2 = pTVar3->Proxy;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 & 0xfeff;
    piVar1 = &pTVar3[2].MNonFrequentData.Property.MParticleID.LocalID;
    *(ushort *)piVar1 = (ushort)*piVar1 | (ushort)param_2 << 8;
    (pTVar3->MDirtyFlags).Bits = (pTVar3->MDirtyFlags).Bits | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// SetUseLinearJointSolver_AssumesLocked @ 1441b9dc0

void __cdecl
FChaosEngineInterface::SetUseLinearJointSolver_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,bool param_2)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      pFVar1[9].field_0x1c = param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetUserData @ 1441b9e30

void __cdecl FChaosEngineInterface::SetUserData(FMaterialHandle *param_1,void *param_2)

{
  FChaosPhysicsMaterial *pFVar1;
  FPhysicalMaterialManager *this;
  
  pFVar1 = Chaos::FMaterialHandle::Get(param_1);
  if (pFVar1 != (FChaosPhysicsMaterial *)0x0) {
    pFVar1->UserData = param_2;
  }
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::UpdateMaterial(this,*(FMaterialHandle *)&param_1->InnerHandle);
  return;
}

// SetUserData @ 1441b9e70

void __cdecl FChaosEngineInterface::SetUserData(FPhysicsShapeReference_Chaos *param_1,void *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  FPerShapeData *pFVar3;
  IPhysicsProxyBase *pIVar4;
  
  pFVar3 = param_1->Shape;
  if (pFVar3 != (FPerShapeData *)0x0) {
    if (pFVar3->Type == 0) {
      pIVar4 = (IPhysicsProxyBase *)pFVar3[1]._padding_;
      *(void **)&pFVar3[1].WorldSpaceShapeBounds.MMin.field_0x10 = param_2;
      uVar2 = (pFVar3->DirtyFlags).Bits;
      (pFVar3->DirtyFlags).Bits = uVar2 | 1;
      if (((uVar2 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar4->Solver,pIVar4,pFVar3->ShapeIdx);
        return;
      }
    }
    else {
      *(void **)&pFVar3[1].WorldSpaceShapeBounds.MMin.field_0x8 = param_2;
    }
  }
  return;
}

// SetVelocitySolverIterationCount_AssumesLocked @ 1441b9f40

void __cdecl
FChaosEngineInterface::SetVelocitySolverIterationCount_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,int param_2)

{
  Chaos::FRigidBodyHandle_External::SetVelocitySolverIterationCount
            ((FRigidBodyHandle_External *)*param_1,param_2);
  return;
}

// SetViolationCallbackThresholds_AssumesLocked @ 1441b9f50

void __cdecl
FChaosEngineInterface::SetViolationCallbackThresholds_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  
  if (param_1->Constraint != (FConstraintBase *)0x0) {
    bVar3 = Chaos::FConstraintBase::IsValid(param_1->Constraint);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      pIVar2 = pFVar1->Proxy;
      *(double *)&pFVar1[0x18].DirtyFlags = (double)param_2;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pIVar2 = pFVar1->Proxy;
      pFVar1[0x1a]._padding_ = (longlong)(double)param_3;
      (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
  }
  return;
}

// SetWakeCounter_AssumesLocked @ 1441ba000

void __cdecl
FChaosEngineInterface::SetWakeCounter_AssumesLocked
          (FSingleParticlePhysicsProxy **param_1,float param_2)

{
  return;
}

// UpdateMaterial @ 1441bcbf0

void __cdecl
FChaosEngineInterface::UpdateMaterial(FMaterialHandle *param_1,UPhysicalMaterial *param_2)

{
  float fVar1;
  ECombineMode EVar2;
  FChaosPhysicsMaterial *pFVar3;
  FPhysicalMaterialManager *this;
  
  pFVar3 = Chaos::FMaterialHandle::Get(param_1);
  if (pFVar3 != (FChaosPhysicsMaterial *)0x0) {
    pFVar3->Friction = (double)param_2->Friction;
    pFVar3->StaticFriction = (double)param_2->StaticFriction;
    EVar2 = UToCCombineMode((uint)(param_2->FrictionCombineMode).Value);
    pFVar3->FrictionCombineMode = EVar2;
    pFVar3->Restitution = (double)param_2->Restitution;
    EVar2 = UToCCombineMode((uint)(param_2->RestitutionCombineMode).Value);
    fVar1 = __real_461c4000;
    pFVar3->RestitutionCombineMode = EVar2;
    pFVar3->Density = (double)param_2->Density;
    pFVar3->SleepingLinearThreshold = (double)param_2->SleepLinearVelocityThreshold;
    pFVar3->SleepingAngularThreshold = (double)param_2->SleepAngularVelocityThreshold;
    pFVar3->SleepCounterThreshold = param_2->SleepCounterThreshold;
    (pFVar3->Strength).TensileStrength = (param_2->Strength).TensileStrength * fVar1;
    (pFVar3->Strength).CompressionStrength = (param_2->Strength).CompressionStrength * fVar1;
    (pFVar3->Strength).ShearStrength = (param_2->Strength).ShearStrength * fVar1;
    (pFVar3->DamageModifier).DamageThresholdMultiplier =
         (param_2->DamageModifier).DamageThresholdMultiplier;
    pFVar3->BaseFrictionImpulse = param_2->BaseFrictionImpulse;
    pFVar3->SoftCollisionMode = param_2->SoftCollisionMode;
    pFVar3->SoftCollisionThickness = param_2->SoftCollisionThickness;
  }
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::UpdateMaterial(this,*(FMaterialHandle *)&param_1->InnerHandle);
  return;
}

// WakeUp_AssumesLocked @ 1441bd0f0

void __cdecl FChaosEngineInterface::WakeUp_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar1;
  char cVar2;
  TGeometryParticle<double,3> *pTVar3;
  
  this = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  pTVar3 = (TGeometryParticle<double,3> *)0x0;
  if (pTVar1->Type == Static) {
    pTVar1 = pTVar3;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    if (pTVar1->Type < Rigid) {
      cVar2 = '\x02';
    }
    else {
      cVar2 = *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx;
    }
    if (cVar2 == '\x04') goto LAB_1441bd169;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type == Static) {
    pTVar1 = pTVar3;
  }
  if (pTVar1 == (TGeometryParticle<double,3> *)0x0) {
    return;
  }
  if (pTVar1->Type < Rigid) {
    cVar2 = '\x02';
  }
  else {
    cVar2 = *(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx;
  }
  if (cVar2 != '\x01') {
    return;
  }
LAB_1441bd169:
  Chaos::FRigidBodyHandle_External::SetObjectState
            ((FRigidBodyHandle_External *)this,Dynamic,false,true);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = pTVar3;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    *(undefined1 *)
     ((longlong)
      &pTVar1[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController + 1)
         = 0;
  }
  return;
}

