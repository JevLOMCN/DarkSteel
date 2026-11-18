// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ComputeNodeValues @ 1438a9590

void __thiscall Chaos::FClusterUnionStressSolver::ComputeNodeValues(FClusterUnionStressSolver *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  FNode *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  pFVar14 = (this->RootNodeIds).AllocatorInstance.Data;
  iVar2 = (this->RootNodeIds).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
LAB_1438a95c0:
  do {
    if ((this->RootNodeIds).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    uVar3 = *(ulonglong *)pFVar14;
    uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (*(int *)&(this->NodesById).field_0x8 != *(int *)&(this->NodesById).field_0x34) {
      puVar4 = *(undefined1 **)&(this->NodesById).field_0x40;
      puVar12 = &(this->NodesById).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar12 = puVar4;
      }
      iVar8 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->NodesById).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
      if (iVar8 != -1) {
        do {
          puVar11 = (ulonglong *)((longlong)iVar8 * 0x40 + *(longlong *)&this->NodesById);
          if (*puVar11 == uVar3) {
            pFVar13 = (FNode *)(puVar11 + 1);
            if (puVar11 == (ulonglong *)0x0) {
              pFVar13 = (FNode *)0x0;
            }
            if (pFVar13 != (FNode *)0x0) {
              uVar10 = *(uint *)&pFVar13->Particle->field_0x8;
              lVar5 = *(longlong *)pFVar13->Particle;
              uVar9 = 0;
              if ((int)uVar10 < *(int *)(lVar5 + 0x3d0)) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if (uVar9 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar13->Value =
                   (float)*(double *)(*(longlong *)(lVar5 + 0x3c8) + (longlong)(int)uVar10 * 8);
              PropagateValue(this,pFVar13);
            }
            goto LAB_1438a96f4;
          }
          iVar8 = (int)puVar11[7];
        } while (iVar8 != -1);
        pFVar14 = pFVar14 + 8;
        goto LAB_1438a95c0;
      }
    }
LAB_1438a96f4:
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// CreateNodeFromClusterUnion @ 1438ac370

void __thiscall
Chaos::FClusterUnionStressSolver::CreateNodeFromClusterUnion(FClusterUnionStressSolver *this)

{
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FClusterUnion *pFVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  EObjectStateType EVar10;
  bool bVar11;
  int iVar12;
  TVector<double,3> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar16;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 local_res8 [8];
  TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*_const_&>
  local_res10;
  FScriptContainerElement *local_res18;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  *local_res20;
  TPBDRigidParticleHandleImp<double,3,1> *local_68;
  TPBDRigidParticleHandleImp<double,3,1> **local_60 [4];
  
  this_01 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
             *)&this->NodesById;
  iVar3 = (this->ClusterUnion->ChildParticles).ArrayNum;
  local_res20 = this_01;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  ::Reset(this_01);
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  ::Reserve(this_01,iVar3);
  pTVar1 = &this->RootNodeIds;
  piVar2 = &(this->RootNodeIds).ArrayMax;
  (this->RootNodeIds).ArrayNum = 0;
  if ((this->RootNodeIds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  dVar9 = __real_4069000000000000;
  pFVar4 = this->ClusterUnion;
  pFVar15 = (pFVar4->ChildParticles).AllocatorInstance.Data;
  iVar3 = (pFVar4->ChildParticles).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar3 * 8;
  local_res18 = pFVar16;
  while( true ) {
    if ((pFVar4->ChildParticles).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar16) break;
    pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar15;
    if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pTVar5->field_0xc) {
        this_00 = pTVar5;
      }
      pFVar16 = local_res18;
      if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        local_60[0] = &local_68;
        local_68 = this_00;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
        ::
        Emplace<TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*_const_&>_>
                  (this_01,&local_res10,(bool *)local_60);
        lVar6 = *(longlong *)&this_01->Elements;
        lVar14 = (longlong)(int)local_res10.Key;
        *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar6 + 8 + lVar14 * 0x40) = this_00;
        EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
        pFVar16 = local_res18;
        this_01 = local_res20;
        if ((EVar10 == Kinematic) &&
           (puVar7 = *(undefined8 **)(lVar6 + 8 + lVar14 * 0x40),
           pTVar13 = TParticles<double,3>::GetX
                               ((TParticles<double,3> *)*puVar7,*(int *)(puVar7 + 1)),
           pFVar16 = local_res18, this_01 = local_res20,
           *(double *)&pTVar13->field_0x10 <= dVar9 && dVar9 != *(double *)&pTVar13->field_0x10)) {
          pFVar16 = (pTVar1->AllocatorInstance).Data;
          if ((pFVar16 <= (FScriptContainerElement *)&local_68) &&
             (((FScriptContainerElement *)&local_68 < pFVar16 + (longlong)*piVar2 * 8 &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this->RootNodeIds).ArrayNum;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->RootNodeIds).ArrayNum = iVar12 + 1;
          *(TPBDRigidParticleHandleImp<double,3,1> **)
           ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_68;
          pFVar16 = local_res18;
          this_01 = local_res20;
        }
      }
    }
    pFVar15 = pFVar15 + 8;
  }
  return;
}

// EvaluateConnectionStress @ 1438af1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FConnectionEvalResult * __thiscall
Chaos::FClusterUnionStressSolver::EvaluateConnectionStress
          (FClusterUnionStressSolver *this,FConnectionEvalResult *__return_storage_ptr__,
          double param_1,TVector<double,3> *param_2,float param_3,TVector<double,3> *param_4,
          TVector<double,3> *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  FDebugDrawQueue *pFVar7;
  FDebugDrawQueue *pFVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_2f8 [32];
  FString local_2b8;
  TVector<double,3> local_2a8;
  TVector<double>_u_0 local_288;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  FColor_u_0 local_258;
  undefined1 local_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar6 = __real_322bcc77 <= param_3;
  __return_storage_ptr__->CompressionStressRatio = 0.0;
  __return_storage_ptr__->TensileStressRatio = 0.0;
  __return_storage_ptr__->ShearStressRatio = 0.0;
  fVar5 = __real_3f800000;
  if ((bVar6) && (__real_3e45798ee0000000 <= param_1)) {
    fVar13 = (float)(*(double *)&param_2->field_0x10 - *(double *)&param_4->field_0x10);
    fVar17 = (float)(*(double *)&param_2->field_0x8 - *(double *)&param_4->field_0x8);
    dVar4 = param_1 * __real_c08ea80000000000;
    fVar20 = (float)((uint)(param_3 * __real_3ea2f983) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar18 = (float)(dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y);
    fVar15 = (float)(dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z);
    fVar19 = (float)(dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X);
    dVar3 = (double)(fVar17 * fVar15 - fVar13 * fVar18);
    dVar10 = *(double *)&param_5->field_0x10;
    dVar16 = (double)(fVar13 * fVar19 - (float)(*(double *)param_2 - *(double *)param_4) * fVar15);
    dVar1 = *(double *)param_5;
    dVar14 = (double)((float)(*(double *)param_2 - *(double *)param_4) * fVar18 - fVar17 * fVar19);
    dVar2 = *(double *)&param_5->field_0x8;
    dVar9 = dVar16 * dVar2 + dVar3 * dVar1 + dVar14 * dVar10;
    auVar11._0_8_ = dVar9 * dVar1;
    auVar11._8_8_ = 0;
    dVar14 = dVar14 - dVar9 * dVar10;
    dVar3 = dVar3 - auVar11._0_8_;
    dVar16 = dVar16 - dVar9 * dVar2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar3 * dVar3 + dVar16 * dVar16 + dVar14 * dVar14;
    auVar12 = sqrtpd(auVar11,auVar12);
    dVar10 = (auVar12._0_8_ * (double)SQRT(fVar20)) / (double)(fVar20 * fVar20 * __real_3f490fdb) +
             (dVar2 * dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
              dVar1 * dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
             dVar10 * dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z) *
             (double)(__real_3f800000 / param_3);
    fVar17 = (float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar10,0) ^ (uint)__xmm_80000000000000008000000000000000)
             / (ClusterUnionStressSolverStrengthScalar * ___real_48435000);
    __return_storage_ptr__->CompressionStressRatio = fVar17;
    fVar15 = (float)dVar10 / (ClusterUnionStressSolverStrengthScalar * __real_469c4000);
    __return_storage_ptr__->TensileStressRatio = fVar15;
    fVar13 = (float)dVar10 / (ClusterUnionStressSolverStrengthScalar * ___real_476a6000);
    __return_storage_ptr__->ShearStressRatio = fVar13;
    if ((bClusterUnionStressSolverEnableDebugDraw != false) &&
       (((fVar5 <= fVar17 || (fVar5 <= fVar15)) || (fVar5 <= fVar13)))) {
      pFVar7 = FDebugDrawQueue::GetInstance();
      fVar5 = __real_38d1b717;
      FDebugDrawQueue::DrawDebugPoint
                (pFVar7,(TVector<double> *)param_2,&FColor::Purple,false,__real_38d1b717,'\n',
                 __real_40a00000);
      pFVar7 = FDebugDrawQueue::GetInstance();
      pFVar8 = FDebugDrawQueue::GetInstance();
      if (pFVar8->bEnableDebugDrawing != false) {
        pFVar8 = FDebugDrawQueue::GetInstance();
        if (0 < pFVar8->NumConsumers) {
          lpCriticalSection = &pFVar7->CommandQueueCS;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          local_2a8._0_8_ = *(undefined8 *)param_2;
          local_2a8._8_8_ = *(undefined8 *)&param_2->field_0x8;
          local_2a8._16_8_ = *(undefined8 *)&param_2->field_0x10;
          bVar6 = FDebugDrawQueue::AcceptCommand(pFVar7,1,&local_2a8);
          if (bVar6) {
            local_288._s_0.X = (double)*(undefined8 *)param_2;
            local_288._s_0.Y = (double)*(undefined8 *)&param_2->field_0x8;
            local_288._s_0.Z = (double)*(undefined8 *)&param_2->field_0x10;
            local_270 = *(undefined8 *)param_4;
            uStack_268 = *(undefined8 *)&param_4->field_0x8;
            local_1c0 = (void *)0x0;
            local_260 = *(undefined8 *)&param_4->field_0x10;
            local_1b8 = 0;
            local_1b0 = 0;
            local_258 = FColor::Purple.field0_0x0;
            local_250 = 0;
            local_248 = 0x38d1b717;
            local_244 = 10;
            local_240 = 0x40000000;
            local_e0 = 1;
            FDebugDrawQueue::AddCommand(pFVar7,(FLatentDrawCommand *)&local_288._s_0);
            if (local_1c0 != (void *)0x0) {
              FMemory::Free(local_1c0);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
      }
      ::FString::FormatAsNumber(&local_2b8,(int)param_1);
      pFVar7 = FDebugDrawQueue::GetInstance();
      FDebugDrawQueue::DrawDebugString
                (pFVar7,(TVector<double> *)param_2,&local_2b8,(AActor *)0x0,&FColor::White,fVar5,
                 false,__real_3fc00000);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// EvaluateNode @ 1438af690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionStressSolver::EvaluateNode(FClusterUnionStressSolver *this,FNode *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  double *pdVar15;
  FDebugDrawQueue *pFVar16;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  TAABB<double,3> *pTVar18;
  TAABB<double,3> *pTVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  FScriptContainerElement *pFVar24;
  longlong *plVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  float fVar33;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  double local_res18;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  FConnectionEvalResult local_1d8;
  FString local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  TVector<double> local_e0;
  TVector<double> local_c8 [6];
  
  pdVar15 = TPBDRigidParticleHandleImp<double,3,1>::M
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this->ClusterUnion->InternalCluster
                      );
  dVar11 = __real_3e45798ee0000000;
  dVar2 = *pdVar15;
  if (dVar2 <= __real_3e45798ee0000000) {
    dVar9 = 0.0;
  }
  else {
    pdVar15 = TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1->Particle);
    dVar9 = *pdVar15 / dVar2;
  }
  TPBDRigidParticles<double,3>::XCom
            (*(TPBDRigidParticles<double,3> **)param_1->Particle,(TVector<double,3> *)&local_1b8,
             *(int *)&param_1->Particle->field_0x8);
  fVar12 = __real_3f800000;
  dVar10 = __real_3ff0000000000000;
  param_1->SumOfMassRatios = dVar9 + param_1->SumOfMassRatios;
  local_110 = local_1b8 * dVar9 + *(double *)&param_1->WeightedCenterOfMass;
  local_108 = local_1b0 * dVar9 + *(double *)&(param_1->WeightedCenterOfMass).field_0x8;
  dVar31 = local_1a8 * dVar9 + *(double *)&(param_1->WeightedCenterOfMass).field_0x10;
  *(double *)&param_1->WeightedCenterOfMass = local_110;
  *(double *)&(param_1->WeightedCenterOfMass).field_0x8 = local_108;
  *(double *)&(param_1->WeightedCenterOfMass).field_0x10 = dVar31;
  local_100 = dVar10 / param_1->SumOfMassRatios;
  dVar9 = param_1->SumOfMassRatios;
  local_110 = local_100 * local_110;
  local_108 = local_100 * local_108;
  local_100 = local_100 * dVar31;
  if (bClusterUnionStressSolverEnableDebugDraw != false) {
    pFVar16 = FDebugDrawQueue::GetInstance();
    TPBDRigidParticles<double,3>::XCom
              (*(TPBDRigidParticles<double,3> **)param_1->Particle,(TVector<double,3> *)&local_e0,
               *(int *)&param_1->Particle->field_0x8);
    fVar33 = __real_38d1b717;
    FDebugDrawQueue::DrawDebugPoint
              (pFVar16,&local_e0,&FColor::Yellow,false,__real_38d1b717,'\n',__real_40f00000);
    ::FString::SanitizeFloat(&local_1c8,(double)param_1->Value,1);
    pFVar16 = FDebugDrawQueue::GetInstance();
    TPBDRigidParticles<double,3>::XCom
              (*(TPBDRigidParticles<double,3> **)param_1->Particle,(TVector<double,3> *)local_c8,
               *(int *)&param_1->Particle->field_0x8);
    FDebugDrawQueue::DrawDebugString
              (pFVar16,local_c8,&local_1c8,(AActor *)0x0,&FColor::Purple,fVar33,false,fVar12);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  pTVar17 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1->Particle);
  uVar20 = pTVar17->ArrayNum;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (local_1e0._4_4_ < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,&local_1e8,(int)local_1e0,(int *)((longlong)&local_1e0 + 4));
  }
  fVar33 = 0.0;
  pTVar17 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1->Particle);
  iVar4 = pTVar17->ArrayNum;
  pFVar24 = (pTVar17->AllocatorInstance).Data;
  pFVar26 = pFVar24 + (longlong)iVar4 * 0x10;
LAB_1438af910:
  do {
    if (pTVar17->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    dVar31 = __real_3fe0000000000000;
    if (pFVar24 == pFVar26) {
      iVar4 = (int)local_1e0;
      pFVar24 = local_1e8.Data + (longlong)(int)local_1e0 * 0x10;
      FVar27.Data = local_1e8.Data;
      do {
        plVar21 = (longlong *)0x0;
        if ((int)local_1e0 != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (FVar27.Data == pFVar24) {
          if (local_1e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data);
          }
          return;
        }
        plVar22 = *(longlong **)FVar27.Data;
        if (plVar22 != (longlong *)0x0) {
          plVar25 = plVar21;
          if (2 < *(byte *)((longlong)plVar22 + 0xc)) {
            plVar25 = plVar22;
          }
          uVar20 = ((uint)((ulonglong)plVar25 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar25 >> 4)) *
                   -0x7a143595;
          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
          plVar22 = plVar21;
          if (*(int *)&(this->NodesById).field_0x8 != *(int *)&(this->NodesById).field_0x34) {
            puVar5 = *(undefined1 **)&(this->NodesById).field_0x40;
            puVar23 = &(this->NodesById).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar23 = puVar5;
            }
            iVar14 = *(int *)(puVar23 +
                             (ulonglong)
                             (*(int *)&(this->NodesById).field_0x48 - 1U & (uVar20 >> 0x10 ^ uVar20)
                             ) * 4);
            if (iVar14 != -1) {
              do {
                plVar22 = (longlong *)((longlong)iVar14 * 0x40 + *(longlong *)&this->NodesById);
                if ((longlong *)*plVar22 == plVar25) break;
                iVar14 = (int)plVar22[7];
                plVar22 = plVar21;
              } while (iVar14 != -1);
            }
          }
          plVar25 = plVar22 + 1;
          if (plVar22 == (longlong *)0x0) {
            plVar25 = plVar21;
          }
          if (plVar25 != (longlong *)0x0) {
            if ((param_1->Value < *(float *)(plVar25 + 1) ||
                 param_1->Value == *(float *)(plVar25 + 1)) &&
               (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4784331536084238066>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionStressSolver.cpp"
                                    ,0x10e,"OppositeNode->Value < Node.Value"), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TPBDRigidParticles<double,3>::XCom
                      (*(TPBDRigidParticles<double,3> **)param_1->Particle,
                       (TVector<double,3> *)&local_1a0,*(int *)&param_1->Particle->field_0x8);
            TPBDRigidParticles<double,3>::XCom
                      (*(TPBDRigidParticles<double,3> **)*plVar25,(TVector<double,3> *)&local_188,
                       *(int *)((undefined8 *)*plVar25 + 1));
            uVar32 = local_198 - local_180;
            uVar8 = local_1a0 - local_188;
            local_160 = local_190 - local_178;
            dVar29 = (double)uVar8 * (double)uVar8 + (double)uVar32 * (double)uVar32 +
                     local_160 * local_160;
            if (dVar29 != dVar10) {
              if (dVar11 <= dVar29) {
                local_res18 = dVar10 / SQRT(dVar29);
                uVar8 = (double)uVar8 * local_res18;
                uVar32 = (double)uVar32 * local_res18;
                local_160 = local_160 * local_res18;
              }
              else {
                local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              }
            }
            local_f8._8_4_ = (int)uVar32;
            local_f8._0_8_ = uVar8;
            local_f8._12_4_ = (int)((ulonglong)uVar32 >> 0x20);
            local_e8 = local_160;
            TPBDRigidParticles<double,3>::XCom
                      (*(TPBDRigidParticles<double,3> **)param_1->Particle,
                       (TVector<double,3> *)&local_140,*(int *)&param_1->Particle->field_0x8);
            TPBDRigidParticles<double,3>::XCom
                      (*(TPBDRigidParticles<double,3> **)*plVar25,(TVector<double,3> *)&local_158,
                       *(int *)((undefined8 *)*plVar25 + 1));
            local_128 = (local_158 + local_140) * dVar31;
            local_120 = (local_150 + local_138) * dVar31;
            local_118 = (local_148 + local_130) * dVar31;
            EvaluateConnectionStress
                      (this,&local_1d8,
                       (double)(*(float *)(FVar27.Data + 8) / fVar33) * dVar9 * dVar2,
                       (TVector<double,3> *)&local_110,*(float *)(FVar27.Data + 8),
                       (TVector<double,3> *)&local_128,(TVector<double,3> *)local_f8);
            if (((fVar12 <= local_1d8.CompressionStressRatio) ||
                (fVar12 <= local_1d8.TensileStressRatio)) || (fVar12 <= local_1d8.ShearStressRatio))
            {
              iVar14 = (this->Results).ArrayNum;
              piVar1 = &(this->Results).ArrayMax;
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(this->Results).AllocatorInstance,piVar1);
              }
              pFVar26 = (this->Results).AllocatorInstance.Data;
              (this->Results).ArrayNum = iVar14 + 1;
              pFVar26 = pFVar26 + (longlong)iVar14 * 0x20;
              DefaultConstructItems<Chaos::FClusterUnionStressSolver::FNodeEvalResult,int>
                        (pFVar26,1);
              *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar26 = param_1->Particle;
              *(longlong *)(pFVar26 + 8) = *plVar25;
              *(ulonglong *)(pFVar26 + 0x10) =
                   CONCAT44(local_1d8.TensileStressRatio,local_1d8.CompressionStressRatio);
              *(float *)(pFVar26 + 0x18) = local_1d8.ShearStressRatio;
            }
            dVar30 = (double)(fVar12 / (float)(int)local_1e0);
            plVar25[2] = (longlong)(dVar30 * param_1->SumOfMassRatios + (double)plVar25[2]);
            dVar29 = *(double *)&(param_1->WeightedCenterOfMass).field_0x8;
            dVar3 = *(double *)&param_1->WeightedCenterOfMass;
            plVar25[5] = (longlong)
                         (dVar30 * *(double *)&(param_1->WeightedCenterOfMass).field_0x10 +
                         (double)plVar25[5]);
            plVar25[4] = (longlong)(dVar30 * dVar29 + (double)plVar25[4]);
            plVar25[3] = (longlong)(dVar30 * dVar3 + (double)plVar25[3]);
          }
        }
        FVar27.Data = FVar27.Data + 0x10;
      } while( true );
    }
    plVar21 = *(longlong **)pFVar24;
    if (plVar21 == (longlong *)0x0) {
LAB_1438afac3:
      pFVar24 = pFVar24 + 0x10;
      goto LAB_1438af910;
    }
    plVar22 = (longlong *)0x0;
    if (2 < *(byte *)((longlong)plVar21 + 0xc)) {
      plVar22 = plVar21;
    }
    uVar20 = ((uint)((ulonglong)plVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar22 >> 4)) *
             -0x7a143595;
    uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
    if (*(int *)&(this->NodesById).field_0x8 == *(int *)&(this->NodesById).field_0x34)
    goto LAB_1438afac3;
    puVar5 = *(undefined1 **)&(this->NodesById).field_0x40;
    puVar23 = &(this->NodesById).field_0x38;
    if (puVar5 != (undefined1 *)0x0) {
      puVar23 = puVar5;
    }
    iVar14 = *(int *)(puVar23 +
                     (ulonglong)
                     (*(int *)&(this->NodesById).field_0x48 - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
    if (iVar14 == -1) goto LAB_1438afac3;
    do {
      plVar21 = (longlong *)((longlong)iVar14 * 0x40 + *(longlong *)&this->NodesById);
      if ((longlong *)*plVar21 == plVar22) {
        plVar22 = plVar21 + 1;
        if (plVar21 == (longlong *)0x0) {
          plVar22 = (longlong *)0x0;
        }
        if ((plVar22 != (longlong *)0x0) &&
           (*(float *)(plVar22 + 1) <= param_1->Value && param_1->Value != *(float *)(plVar22 + 1)))
        {
          pTVar18 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                              ((TGeometryParticleHandleImp<double,3,1> *)*plVar22);
          pTVar19 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                              ((TGeometryParticleHandleImp<double,3,1> *)param_1->Particle);
          fVar28 = ::`anonymous_namespace'::ComputeAreaFromBoundingBoxOverlap(pTVar19,pTVar18);
          if ((local_1e8.Data <= pFVar24) &&
             ((pFVar24 < local_1e8.Data + (longlong)local_1e0._4_4_ * 0x10 &&
              (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = (int)local_1e0;
          if ((int)local_1e0 == local_1e0._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_1e8,(int *)((longlong)&local_1e0 + 4));
          }
          local_1e0 = CONCAT44(local_1e0._4_4_,iVar14 + 1);
          fVar33 = fVar33 + fVar28;
          lVar6 = *(longlong *)pFVar24;
          *(float *)(local_1e8.Data + (longlong)iVar14 * 0x10 + 8) = fVar28;
          *(longlong *)(local_1e8.Data + (longlong)iVar14 * 0x10) = lVar6;
        }
        goto LAB_1438afac3;
      }
      iVar14 = (int)plVar21[7];
    } while (iVar14 != -1);
    pFVar24 = pFVar24 + 0x10;
  } while( true );
}

// EvaluateNodes @ 1438afec0

void __thiscall Chaos::FClusterUnionStressSolver::EvaluateNodes(FClusterUnionStressSolver *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FValueComparisonClass<_private:_void___cdecl_Chaos::FClusterUnionStressSolver::EvaluateNodes(void)_::_2_::<lambda_1>_>
  local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20.Predicate.Predicate =
       (TDereferenceWrapper<Chaos::FClusterUnionStressSolver::FNode,_private:_void___cdecl_Chaos::FClusterUnionStressSolver::EvaluateNodes(void)_::_2_::<lambda_1>_>
        )local_res8;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>_>::FValueComparisonClass<_Chaos::FClusterUnionStressSolver::EvaluateNodes_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
              *)&this->NodesById,&local_res20);
  iVar9 = 0;
  (this->Results).ArrayNum = 0;
  if ((this->Results).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->Results).AllocatorInstance,0,&(this->Results).ArrayMax);
  }
  iVar3 = *(int *)&(this->NodesById).field_0x28;
  puVar1 = &(this->NodesById).field_0x10;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->NodesById).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1438aff9d;
      uVar11 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1438aff9d:
  uVar11 = *(uint *)&(this->NodesById).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar9);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar12;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->NodesById).field_0x8 - *(int *)&(this->NodesById).field_0x34)
  ;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->NodesById).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->NodesById).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1438b00a0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1438b00a0:
  while( true ) {
    if (*(int *)&(this->NodesById).field_0x8 - *(int *)&(this->NodesById).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    EvaluateNode(this,(FNode *)(*(longlong *)&(this->NodesById).field_0x0 + 8 +
                               (longlong)TStack_70.CurrentBitIndex * 0x40));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// PrepareForSolve @ 1438c64c0

void __thiscall Chaos::FClusterUnionStressSolver::PrepareForSolve(FClusterUnionStressSolver *this)

{
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FClusterUnion *pFVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  EObjectStateType EVar10;
  bool bVar11;
  int iVar12;
  TVector<double,3> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar16;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 auStackX_8 [8];
  TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*_const_&> TStackX_10
  ;
  FScriptContainerElement *pFStackX_18;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  *pTStackX_20;
  TPBDRigidParticleHandleImp<double,3,1> *pTStack_68;
  TPBDRigidParticleHandleImp<double,3,1> **appTStack_60 [4];
  
  this_01 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
             *)&this->NodesById;
  iVar3 = (this->ClusterUnion->ChildParticles).ArrayNum;
  pTStackX_20 = this_01;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  ::Reset(this_01);
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
  ::Reserve(this_01,iVar3);
  pTVar1 = &this->RootNodeIds;
  piVar2 = &(this->RootNodeIds).ArrayMax;
  (this->RootNodeIds).ArrayNum = 0;
  if ((this->RootNodeIds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  dVar9 = __real_4069000000000000;
  pFVar4 = this->ClusterUnion;
  pFVar15 = (pFVar4->ChildParticles).AllocatorInstance.Data;
  iVar3 = (pFVar4->ChildParticles).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar3 * 8;
  pFStackX_18 = pFVar16;
  while( true ) {
    if ((pFVar4->ChildParticles).ArrayNum != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar15 == pFVar16) break;
    pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar15;
    if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pTVar5->field_0xc) {
        this_00 = pTVar5;
      }
      pFVar16 = pFStackX_18;
      if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        appTStack_60[0] = &pTStack_68;
        pTStack_68 = this_00;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*,Chaos::FClusterUnionStressSolver::FNode,0>,FDefaultSetAllocator>
        ::
        Emplace<TKeyInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*_const_&>_>
                  (this_01,&TStackX_10,(bool *)appTStack_60);
        lVar6 = *(longlong *)&this_01->Elements;
        lVar14 = (longlong)(int)TStackX_10.Key;
        *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar6 + 8 + lVar14 * 0x40) = this_00;
        EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
        pFVar16 = pFStackX_18;
        this_01 = pTStackX_20;
        if ((EVar10 == Kinematic) &&
           (puVar7 = *(undefined8 **)(lVar6 + 8 + lVar14 * 0x40),
           pTVar13 = TParticles<double,3>::GetX
                               ((TParticles<double,3> *)*puVar7,*(int *)(puVar7 + 1)),
           pFVar16 = pFStackX_18, this_01 = pTStackX_20,
           *(double *)&pTVar13->field_0x10 <= dVar9 && dVar9 != *(double *)&pTVar13->field_0x10)) {
          pFVar16 = (pTVar1->AllocatorInstance).Data;
          if ((pFVar16 <= (FScriptContainerElement *)&pTStack_68) &&
             (((FScriptContainerElement *)&pTStack_68 < pFVar16 + (longlong)*piVar2 * 8 &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this->RootNodeIds).ArrayNum;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->RootNodeIds).ArrayNum = iVar12 + 1;
          *(TPBDRigidParticleHandleImp<double,3,1> **)
           ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = pTStack_68;
          pFVar16 = pFStackX_18;
          this_01 = pTStackX_20;
        }
      }
    }
    pFVar15 = pFVar15 + 8;
  }
  return;
}

// PropagateValue @ 1438c66e0

void __thiscall
Chaos::FClusterUnionStressSolver::PropagateValue(FClusterUnionStressSolver *this,FNode *param_1)

{
  FNode *pFVar1;
  undefined1 *puVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FNode *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  
  if (param_1->Particle == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node.Particle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionStressSolver.cpp"
                       ,0x5a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar7 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1->Particle);
  pFVar13 = (pTVar7->AllocatorInstance).Data;
  local_res18 = pTVar7->ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar14 = pFVar13 + uVar8 * 0x10;
LAB_1438c6753:
  do {
    if (pTVar7->ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar14) {
      return;
    }
    pFVar1 = *(FNode **)pFVar13;
    if (pFVar1 != (FNode *)0x0) {
      pFVar12 = (FNode *)0x0;
      if (2 < (byte)pFVar1->field_0xc) {
        pFVar12 = pFVar1;
      }
      uVar9 = ((uint)((ulonglong)pFVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar12 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->NodesById).field_0x8 != *(int *)&(this->NodesById).field_0x34) {
        puVar2 = *(undefined1 **)&(this->NodesById).field_0x40;
        puVar11 = &(this->NodesById).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        iVar6 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->NodesById).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar6 != -1) {
          do {
            plVar10 = (longlong *)((longlong)iVar6 * 0x40 + *(longlong *)&this->NodesById);
            if ((FNode *)*plVar10 == pFVar12) {
              pFVar12 = (FNode *)(plVar10 + 1);
              if (plVar10 == (longlong *)0x0) {
                pFVar12 = (FNode *)0x0;
              }
              if (pFVar12 != (FNode *)0x0) {
                fVar15 = pFVar1->Value;
                pTVar3 = pFVar1->Particle;
                uVar9 = 0;
                if ((int)fVar15 < *(int *)&pTVar3[0x28].field_0x10) {
                  uVar9 = ~(uint)fVar15 >> 0x1f;
                }
                if (uVar9 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                fVar15 = (float)*(double *)
                                 (*(longlong *)&pTVar3[0x28].field_0x8 + (longlong)(int)fVar15 * 8)
                         + param_1->Value;
                if (fVar15 < pFVar12->Value) {
                  pFVar12->Value = fVar15;
                  PropagateValue(this,pFVar12);
                }
              }
              goto LAB_1438c68b4;
            }
            iVar6 = (int)plVar10[7];
          } while (iVar6 != -1);
          uVar8 = (ulonglong)local_res18;
          pFVar13 = pFVar13 + 0x10;
          goto LAB_1438c6753;
        }
      }
    }
LAB_1438c68b4:
    uVar8 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// Solve @ 1438d4af0

TArray<Chaos::FClusterUnionStressSolver::FNodeEvalResult,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClusterUnionStressSolver::Solve(FClusterUnionStressSolver *this)

{
  CreateNodeFromClusterUnion(this);
  ComputeNodeValues(this);
  EvaluateNodes(this);
  return &this->Results;
}

