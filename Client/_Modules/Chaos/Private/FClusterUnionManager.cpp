// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 36

// CreateTransformGeometryForClusterUnion<1> @ 143808cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TImplicitObjectTransformed<double,3,1> * __cdecl
Chaos::FClusterUnionManager::CreateTransformGeometryForClusterUnion<1>
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,TTransform<double> *param_2)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  TImplicitObjectTransformed<double,3,1> *this;
  TImplicitObjectTransformed<double,3,1> *pTVar4;
  FImplicitObject *pFVar5;
  TImplicitObjectTransformed<double,3,1> *pTVar6;
  undefined1 auStack_b8 [32];
  TRefCountPtr<Chaos::FImplicitObject> local_98 [2];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar6 = (TImplicitObjectTransformed<double,3,1> *)0x0;
  local_98[0].Reference = local_98[0].Reference & 0xffffffff00000000;
  this = ::operator_new(0xc0);
  pTVar4 = pTVar6;
  if (this != (TImplicitObjectTransformed<double,3,1> *)0x0) {
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
    local_98[0].Reference =
         TGeometryParticleHandleImp<double,3,1>::GetGeometry
                   ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    if (local_98[0].Reference != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&(local_98[0].Reference)->_padding_ = (int)(local_98[0].Reference)->_padding_ + 1;
      UNLOCK();
    }
    pTVar4 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                       (this,local_98,(TRigidTransform<double,3> *)&local_88);
    pTVar6 = (TImplicitObjectTransformed<double,3,1> *)&DAT_00000001;
  }
  if ((pTVar6 != (TImplicitObjectTransformed<double,3,1> *)0x0) &&
     (local_98[0].Reference != (FImplicitObject *)0x0)) {
    LOCK();
    plVar1 = &(local_98[0].Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&(local_98[0].Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_98[0].Reference)->_padding_)(local_98[0].Reference,1);
    }
  }
  pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                     ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if (pFVar5 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
    UNLOCK();
  }
  pFVar2 = (pTVar4->MObject).Reference;
  if (pFVar2 != pFVar5) {
    (pTVar4->MObject).Reference = pFVar5;
    if (pFVar5 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar2->_padding_;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  if (pFVar5 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar5->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  return pTVar4;
}

// FClusterUnionManager @ 14388a7a0

FClusterUnionManager * __thiscall
Chaos::FClusterUnionManager::FClusterUnionManager
          (FClusterUnionManager *this,FRigidClustering *param_1,FPBDRigidsEvolutionGBF *param_2)

{
  this->MClustering = param_1;
  *(undefined8 *)&this->PendingClusterIndexOperations = 0;
  *(undefined8 *)&(this->PendingClusterIndexOperations).field_0x8 = 0;
  *(undefined8 *)&(this->PendingClusterIndexOperations).field_0x20 = 0;
  this->MEvolution = param_2;
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x28 = 0;
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x34 = 0;
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingClusterIndexOperations).field_0x40 = 0;
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x48 = 0;
  *(undefined8 *)&this->PendingExplicitIndexOperations = 0;
  *(undefined8 *)&(this->PendingExplicitIndexOperations).field_0x8 = 0;
  *(undefined8 *)&(this->PendingExplicitIndexOperations).field_0x20 = 0;
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x28 = 0;
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x34 = 0;
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingExplicitIndexOperations).field_0x40 = 0;
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x48 = 0;
  *(undefined8 *)&this->PendingChildToParentUpdates = 0;
  *(undefined8 *)&(this->PendingChildToParentUpdates).field_0x8 = 0;
  *(undefined8 *)&(this->PendingChildToParentUpdates).field_0x20 = 0;
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x28 = 0;
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x34 = 0;
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingChildToParentUpdates).field_0x40 = 0;
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x48 = 0;
  *(undefined8 *)&(this->PendingParticlesToUndoChildToParentLock).Elements = 0;
  *(undefined8 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x30 = 0xffffffff;
  (this->PendingParticlesToUndoChildToParentLock).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PendingParticlesToUndoChildToParentLock).HashSize = 0;
  *(undefined8 *)&this->ClusterUnions = 0;
  *(undefined8 *)&(this->ClusterUnions).field_0x8 = 0;
  *(undefined8 *)&(this->ClusterUnions).field_0x20 = 0;
  *(undefined4 *)&(this->ClusterUnions).field_0x28 = 0;
  *(undefined4 *)&(this->ClusterUnions).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClusterUnions).field_0x34 = 0;
  *(undefined4 *)&(this->ClusterUnions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClusterUnions).field_0x40 = 0;
  *(undefined4 *)&(this->ClusterUnions).field_0x48 = 0;
  *(undefined8 *)&this->DeferredClusterUnionsForUpdateProperties = 0;
  *(undefined8 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x34 = 0;
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x48 = 0;
  (this->ReusableIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReusableIndices).ArrayNum = 0;
  (this->ReusableIndices).ArrayMax = 0;
  *(undefined8 *)&this->ExplicitIndexMap = 0;
  *(undefined8 *)&(this->ExplicitIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExplicitIndexMap).field_0x20 = 0;
  this->NextAvailableUnionIndex = 1;
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExplicitIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x48 = 0;
  return this;
}

// operator() @ 14388f970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FClusterUnionManager::FlushIncrementalGeometryOperations'::__l25::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  longlong lVar2;
  FImplicitObject *pFVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TImplicitObjectTransformed<double,3,1> *pTVar9;
  FImplicitObject *pFVar10;
  ulonglong uVar11;
  TRefCountPtr<Chaos::FImplicitObject> TVar12;
  uint uVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_140;
  TGeometryParticleHandleImp<double,3,1> *local_130;
  TRefCountPtr<Chaos::FImplicitObject> local_128;
  uint local_120;
  TImplicitObjectTransformed<double,3,1> *local_118;
  longlong *local_110;
  undefined8 *local_108;
  TRigidTransform<double,3> local_f8;
  TRigidTransform<double,3> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar15 = false;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_120 = 0;
  uVar13 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&local_140.AllocatorInstance,0,&local_140.ArrayMax);
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar13 = *(int *)(*(longlong *)((longlong)this + 0x10) + 8) + *(int *)(lVar2 + 0x28);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*(int *)(lVar2 + 0x2c) < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,(ForAnyElementType *)(lVar2 + 0x20),*(int *)(lVar2 + 0x28),
               (int *)(lVar2 + 0x2c));
  }
  local_110 = *(longlong **)((longlong)this + 0x10);
  local_120 = *(uint *)(local_110 + 1);
  uVar11 = (ulonglong)(int)local_120;
  puVar14 = (undefined8 *)*local_110;
  local_108 = puVar14 + uVar11;
  TVar12.Reference = local_128.Reference;
  while( true ) {
    puVar5 = local_108;
    if ((int)local_110[1] != (int)uVar11) {
      local_148[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (puVar14 == puVar5) {
      if (local_140.ArrayNum != 0) {
        Chaos::TGeometryParticleHandleImp<double,3,1>::MergeGeometry
                  ((TGeometryParticleHandleImp<double,3,1> *)**(undefined8 **)((longlong)this + 8),
                   &local_140);
      }
      DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                ((TRefCountPtr<Chaos::FImplicitObject> *)local_140.AllocatorInstance.Data,
                 local_140.ArrayNum);
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      return;
    }
    local_130 = (TGeometryParticleHandleImp<double,3,1> *)*puVar14;
    Chaos::`anonymous_namespace'::GetParticleRigidFrameInClusterUnion
              (&local_f8,(TPBDRigidParticleHandleImp<double,3,1> *)local_130,
               *(TRigidTransform<double,3> **)((longlong)this + 0x18));
    uVar13 = (uint)local_130->_padding_;
    lVar2 = local_130->_padding_;
    uVar7 = 0;
    if ((int)uVar13 < *(int *)(lVar2 + 0x68)) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x60) + (longlong)(int)uVar13 * 8) != 0) {
      lVar2 = *(longlong *)((longlong)this + 8);
      if (((*(TGeometryParticleHandleImp<double,3,1> ***)(lVar2 + 0x20) <= &local_130) &&
          (&local_130 <
           *(TGeometryParticleHandleImp<double,3,1> ***)(lVar2 + 0x20) + *(int *)(lVar2 + 0x2c))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)(lVar2 + 0x28);
      if (iVar8 == *(int *)(lVar2 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
      }
      this_00 = local_130;
      *(int *)(lVar2 + 0x28) = iVar8 + 1;
      *(TGeometryParticleHandleImp<double,3,1> **)
       (*(longlong *)(lVar2 + 0x20) + (longlong)iVar8 * 8) = local_130;
      pTVar9 = ::operator_new(0xc0);
      if (pTVar9 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
        pTVar9 = (TImplicitObjectTransformed<double,3,1> *)0x0;
      }
      else {
        local_98._0_8_ = local_f8._0_8_;
        local_98._8_8_ = local_f8._8_8_;
        local_98._16_8_ = local_f8._16_8_;
        local_98._24_8_ = local_f8._24_8_;
        local_98._32_8_ = local_f8._32_8_;
        local_98._40_8_ = local_f8._40_8_;
        local_98._48_8_ = local_f8._48_8_;
        local_98._56_8_ = local_f8._56_8_;
        local_98._64_8_ = local_f8._64_8_;
        local_98._72_8_ = local_f8._72_8_;
        local_98._80_8_ = local_f8._80_8_;
        local_98._88_8_ = local_f8._88_8_;
        local_128.Reference = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
        if (local_128.Reference != (FImplicitObject *)0x0) {
          LOCK();
          *(int *)&(local_128.Reference)->_padding_ = (int)(local_128.Reference)->_padding_ + 1;
          UNLOCK();
        }
        bVar15 = true;
        pTVar9 = Chaos::TImplicitObjectTransformed<double,3,1>::
                 TImplicitObjectTransformed<double,3,1>(pTVar9,&local_128,&local_98);
        TVar12.Reference = local_128.Reference;
      }
      if ((bVar15) && (bVar15 = false, TVar12.Reference != (FImplicitObject *)0x0)) {
        LOCK();
        plVar1 = &(TVar12.Reference)->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar2 == 1) && (*(int *)((longlong)&(TVar12.Reference)->_padding_ + 4) == 0)) {
          (**(code **)(TVar12.Reference)->_padding_)(TVar12.Reference,1);
        }
      }
      pFVar10 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
      if (pFVar10 != (FImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
        UNLOCK();
      }
      pFVar3 = (pTVar9->MObject).Reference;
      if (pFVar3 != pFVar10) {
        (pTVar9->MObject).Reference = pFVar10;
        if (pFVar10 != (FImplicitObject *)0x0) {
          LOCK();
          *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar3 != (FImplicitObject *)0x0) {
          LOCK();
          plVar1 = &pFVar3->_padding_;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar2 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      if (pFVar10 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar10->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar2 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
      LOCK();
      *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
      UNLOCK();
      local_118 = pTVar9;
      if (((local_140.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           local_140.AllocatorInstance.Data + (longlong)local_140.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = local_140.ArrayNum;
      if (local_140.ArrayNum == local_140.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_140.AllocatorInstance,&local_140.ArrayMax);
      }
      local_140.ArrayNum = iVar8 + 1;
      *(undefined8 *)(local_140.AllocatorInstance.Data + (longlong)iVar8 * 8) = 0;
      *(TImplicitObjectTransformed<double,3,1> **)
       (local_140.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_118;
      local_118 = (TImplicitObjectTransformed<double,3,1> *)0x0;
    }
    puVar14 = puVar14 + 1;
    uVar11 = (ulonglong)local_120;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// AddParticleToConnectionGraphInCluster @ 14389ad20

void __thiscall
Chaos::FClusterUnionManager::AddParticleToConnectionGraphInCluster
          (FClusterUnionManager *this,FClusterUnion *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  Chaos::`anonymous_namespace'::AddParticleToConnectionGraph(this->MClustering,param_1,param_2);
  return;
}

// AddPendingClusterIndexOperation @ 14389ad30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::AddPendingClusterIndexOperation
          (FClusterUnionManager *this,int param_1,EClusterUnionOperation param_2,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingClusterIndexOperation> FVar7;
  TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  uint local_res8;
  uint uStackX_c;
  EClusterUnionOperation local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (param_2 == UpdateChildToParent) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Op != EClusterUnionOperation::UpdateChildToParent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                       ,0x19d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_AddPendingClusterIndexOperation;
  if (StatPtr_STAT_AddPendingClusterIndexOperation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingClusterIndexOperation>)0x0) {
    pFVar6 = ::FName::FName(&local_68,"STAT_AddPendingClusterIndexOperation");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingClusterIndexOperation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPendingClusterIndexOperation,
                       *pFVar6,L"FClusterUnionManager::AddPendingClusterIndexOperation",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar5 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar9.Value;
        local_78.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x19e);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar9.Value;
      uStackX_c = uVar8;
      local_60 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_60.ComparisonIndex.Value;
      goto LAB_14389aeb9;
    }
  }
  bVar3 = false;
  FVar10 = local_60;
LAB_14389aeb9:
  local_res8 = param_1;
  local_res10[0] = param_2;
  this_00 = TMapBase<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::FindOrAddImpl<int_const_&>
                      (&this->PendingClusterIndexOperations,param_1,(int *)&local_res8);
  this_01 = TMapBase<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<enum_Chaos::EClusterUnionOperation_const_&>
                      (this_00,local_res10[0],local_res10);
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  Append<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
            (this_01,param_3);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_50.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_50);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// AddPendingExplicitIndexOperation @ 14389b000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::AddPendingExplicitIndexOperation
          (FClusterUnionManager *this,int param_1,EClusterUnionOperation param_2,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingExplicitIndexOperation> FVar7;
  TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  uint local_res8;
  uint uStackX_c;
  EClusterUnionOperation local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (param_2 == UpdateChildToParent) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Op != EClusterUnionOperation::UpdateChildToParent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                       ,0x195,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_AddPendingExplicitIndexOperation;
  if (StatPtr_STAT_AddPendingExplicitIndexOperation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingExplicitIndexOperation>)0x0) {
    pFVar6 = ::FName::FName(&local_68,"STAT_AddPendingExplicitIndexOperation");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AddPendingExplicitIndexOperation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPendingExplicitIndexOperation,
                       *pFVar6,L"FClusterUnionManager::AddPendingExplicitIndexOperation",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar5 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar9.Value;
        local_78.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x196);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar9.Value;
      uStackX_c = uVar8;
      local_60 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_60.ComparisonIndex.Value;
      goto LAB_14389b189;
    }
  }
  bVar3 = false;
  FVar10 = local_60;
LAB_14389b189:
  local_res8 = param_1;
  local_res10[0] = param_2;
  this_00 = TMapBase<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::FindOrAddImpl<int_const_&>
                      (&this->PendingExplicitIndexOperations,param_1,(int *)&local_res8);
  this_01 = TMapBase<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<enum_Chaos::EClusterUnionOperation_const_&>
                      (this_00,local_res10[0],local_res10);
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  Append<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
            (this_01,param_3);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_50.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_50);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// ClaimNextUnionIndex @ 1438a74a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Chaos::FClusterUnionManager::ClaimNextUnionIndex(FClusterUnionManager *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClaimNextUnionIndex> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar10 = StatPtr_STAT_ClaimNextUnionIndex;
  if (StatPtr_STAT_ClaimNextUnionIndex ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClaimNextUnionIndex>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_ClaimNextUnionIndex");
    FVar10 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClaimNextUnionIndex>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClaimNextUnionIndex,*pFVar9,
                        L"FClusterUnionManager::ClaimNextUnionIndex","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x187);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1438a75f2;
    }
  }
  bVar5 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1438a75f2:
  iVar8 = (this->ReusableIndices).ArrayNum;
  if (iVar8 == 0) {
    iVar8 = this->NextAvailableUnionIndex;
    this->NextAvailableUnionIndex = iVar8 + 1;
  }
  else {
    if (iVar8 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
    }
    iVar2 = (this->ReusableIndices).ArrayNum;
    iVar8 = *(int *)((this->ReusableIndices).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->ReusableIndices).ArrayNum = iVar2 + -1;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return iVar8;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar8;
}

// CreateNewClusterUnion @ 1438abc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::FClusterUnionManager::CreateNewClusterUnion
          (FClusterUnionManager *this,FClusterCreationParameters *param_1,
          FClusterUnionCreationParameters *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  TRefCountPtr<Chaos::FImplicitObject> TVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNewClusterUnion> FVar13;
  FImplicitObjectUnionClustered *this_00;
  TRefCountPtr<Chaos::FImplicitObject> TVar14;
  FRigidClusteredFlags_u_0 *pFVar15;
  FSpatialAccelerationIdx *pFVar16;
  bool *pbVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  undefined1 auStackY_288 [32];
  int local_228 [2];
  undefined1 local_220 [8];
  FColor local_218 [2];
  FName local_210;
  FName local_208;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1f8;
  LARGE_INTEGER local_1e0;
  FStatMessage local_1d8;
  int *local_1c8;
  TGeometryParticleHandleImp<double,3,1> **local_1c0;
  FName local_1b8 [2];
  TGeometryParticleHandleImp<double,3,1> *local_1a8;
  TRefCountPtr<Chaos::FImplicitObject> local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined4 local_148;
  undefined4 local_144;
  void *local_138;
  undefined4 local_130;
  int local_128;
  int local_124;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double dStack_108;
  FBVHParticles *local_100;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  void *local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  TVar14.Reference = (FImplicitObject *)0x0;
  FVar13 = StatPtr_STAT_CreateNewClusterUnion;
  if (StatPtr_STAT_CreateNewClusterUnion ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNewClusterUnion>)0x0) {
    pFVar12 = ::FName::FName(local_1b8,"STAT_CreateNewClusterUnion");
    FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNewClusterUnion>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateNewClusterUnion,*pFVar12,
                        L"FClusterUnionManager::CreateNewClusterUnion","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar4 = false;
  bVar6 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218[0].field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(local_218,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar19.Value;
        local_210.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x121);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_220._0_4_ = FVar19.Value;
      local_220._4_4_ = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar5 = true;
      goto LAB_1438abdbc;
    }
  }
  bVar5 = false;
  FVar20 = local_208;
LAB_1438abdbc:
  local_228[0] = ClaimNextUnionIndex(this);
  if ((local_228[0] < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewIndex > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                          ,0x123,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  local_120 = (double)__real_3fd3333333333333;
  local_b0 = local_b0 & 0xf9 | 0x19;
  dStack_108 = 0.0;
  local_128 = local_228[0];
  local_124 = param_2->ExplicitIndex;
  local_f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_1a0.Reference = (FImplicitObject *)0x0;
  local_e0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.NumBits = 0;
  local_168.MaxBits = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  uStack_118 = CONCAT17(uStack_118._7_1_,0x1010100000064);
  local_110 = CONCAT44(local_110._4_4_,2);
  local_100 = (FBVHParticles *)0x0;
  pTStack_f8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  uStack_d8 = CONCAT62(uStack_d8._2_6_,0x100);
  local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0xffffffff);
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  this_00 = ::operator_new(0xd0);
  if ((this_00 != (FImplicitObjectUnionClustered *)0x0) &&
     (TVar14.Reference =
           (FImplicitObject *)FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(this_00),
     (FImplicitObjectUnionClustered *)TVar14.Reference != (FImplicitObjectUnionClustered *)0x0)) {
    LOCK();
    *(int *)&((FImplicitObjectUnionClustered *)TVar14.Reference)->_padding_ =
         (int)((FImplicitObjectUnionClustered *)TVar14.Reference)->_padding_ + 1;
    UNLOCK();
  }
  TVar9.Reference = local_1a0.Reference;
  if (local_1a0.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_1a0.Reference)->_padding_;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (*(int *)((longlong)&(local_1a0.Reference)->_padding_ + 4) == 0)) {
      plVar1 = &(local_1a0.Reference)->_padding_;
      local_1a0.Reference = TVar14.Reference;
      (**(code **)*plVar1)(TVar9.Reference,1);
      TVar14.Reference = local_1a0.Reference;
    }
  }
  local_1a0.Reference = TVar14.Reference;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  local_1a8 = (TGeometryParticleHandleImp<double,3,1> *)
              FRigidClustering::CreateClusterParticle
                        (this->MClustering,-local_228[0],&local_1f8,param_1,&local_1a0,
                         (TRigidTransform<double,3> *)0x0,param_2->UniqueIndex);
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  local_120 = param_1->CoillisionThicknessPercent;
  uStack_118._0_4_ = param_1->MaxNumConnections;
  uStack_118._4_1_ = param_1->bCleanCollisionParticles;
  uStack_118._5_1_ = param_1->bCopyCollisionParticles;
  uStack_118._6_1_ = param_1->bGenerateConnectionGraph;
  uStack_118._7_1_ = param_1->field_0xf;
  local_110 = *(undefined8 *)&param_1->ConnectionMethod;
  dStack_108 = param_1->ConnectionGraphBoundsFilteringMargin;
  local_100 = param_1->CollisionParticles;
  pTStack_f8 = param_1->ClusterParticleHandle;
  local_f0 = *(double *)&param_1->Scale;
  dStack_e8 = *(double *)&(param_1->Scale).field_0x8;
  local_e0 = *(double *)&(param_1->Scale).field_0x10;
  uStack_d8._0_1_ = param_1->bIsAnchored;
  uStack_d8._1_1_ = param_1->bEnableStrainOnCollision;
  uStack_d8._2_6_ = *(undefined6 *)&param_1->field_0x4a;
  local_d0 = *(undefined8 *)param_2;
  local_c0._0_4_ = param_2->ActorId;
  local_c0._4_4_ = param_2->ComponentId;
  uStack_b8 = *(undefined8 *)&param_2->GravityGroupOverride;
  uStack_c8 = 0;
  if (local_1a8 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6606637497797574960>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                        ,0x130,"NewUnion.InternalCluster != nullptr");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
  }
  else {
    if (param_2->GravityGroupOverride != -1) {
      TPBDRigidParticleHandleImp<double,3,1>::SetGravityGroupIndex
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_1a8,param_2->GravityGroupOverride);
    }
    pFVar15 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)local_1a8->_padding_,
                          (int)local_1a8->_padding_)->field0_0x0;
    pFVar15->Bits = pFVar15->Bits | 1;
    iVar11 = (int)local_1a8->_padding_;
    if (AccelerationStructureSplitStaticAndDynamic == 1) {
      pFVar16 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                          ((TGeometryParticlesImp<double,3,0> *)local_1a8->_padding_,iVar11);
      pFVar16->Bucket = 0;
      pFVar16->InnerIdx = 1;
    }
    else {
      pFVar16 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                          ((TGeometryParticlesImp<double,3,0> *)local_1a8->_padding_,iVar11);
      pFVar16->Bucket = 0;
      pFVar16->InnerIdx = 0;
    }
    pbVar17 = TGeometryParticlesImp<double,3,0>::HasBounds
                        ((TGeometryParticlesImp<double,3,0> *)local_1a8->_padding_,
                         (int)local_1a8->_padding_);
    *pbVar17 = false;
  }
  FPBDRigidsEvolutionBase::DisableParticle((FPBDRigidsEvolutionBase *)this->MEvolution,local_1a8);
  local_1c8 = local_228;
  local_1c0 = &local_1a8;
  TSet<TTuple<int,Chaos::FClusterUnion>,TDefaultMapHashableKeyFuncs<int,Chaos::FClusterUnion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,Chaos::FClusterUnion_const_&>_>
            ((TSet<TTuple<int,Chaos::FClusterUnion>,TDefaultMapHashableKeyFuncs<int,Chaos::FClusterUnion,0>,FDefaultSetAllocator>
              *)&this->ClusterUnions,
             (TPairInitializer<int_const_&,Chaos::FClusterUnion_const_&> *)local_220,
             (bool *)&local_1c8);
  iVar11 = local_228[0];
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&local_98,0,(int)local_90);
  uVar8 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  local_130 = 0;
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  uVar8 = local_170 >> 0x20;
  local_170 = local_170 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_178,0,(int *)((longlong)&local_170 + 4));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_168.NumBits = 0;
  if (0x80 < (uint)local_168.MaxBits) {
    local_168.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,0);
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  if ((FImplicitObjectUnionClustered *)local_1a0.Reference != (FImplicitObjectUnionClustered *)0x0)
  {
    LOCK();
    plVar1 = &(local_1a0.Reference)->_padding_;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (*(int *)((longlong)&(local_1a0.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_1a0.Reference)->_padding_)(local_1a0.Reference,1);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1d8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_1d8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1e0);
      local_1d8.StatData.Pad[4] = '\0';
      local_1d8.StatData.Pad[5] = '\0';
      local_1d8.StatData.Pad[6] = '\0';
      local_1d8.StatData.Pad[7] = '\0';
      local_1d8.StatData.Pad[0] = local_1e0.s.LowPart._0_1_;
      local_1d8.StatData.Pad[1] = local_1e0.s.LowPart._1_1_;
      local_1d8.StatData.Pad[2] = local_1e0.s.LowPart._2_1_;
      local_1d8.StatData.Pad[3] = local_1e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1d8);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return iVar11;
}

// DefaultClusterCreationParameters @ 1438ac8c0

FClusterCreationParameters * __thiscall
Chaos::FClusterUnionManager::DefaultClusterCreationParameters
          (FClusterUnionManager *this,FClusterCreationParameters *__return_storage_ptr__)

{
  FRigidClustering *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  bVar5 = FRigidClustering::ShouldUnionsHaveCollisionParticles();
  __return_storage_ptr__->bCopyCollisionParticles = bVar5;
  __return_storage_ptr__->CoillisionThicknessPercent = 0.30000001192092896;
  __return_storage_ptr__->ConnectionGraphBoundsFilteringMargin = 0.0;
  __return_storage_ptr__->CollisionParticles = (FBVHParticles *)0x0;
  __return_storage_ptr__->ClusterParticleHandle =
       (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  pFVar1 = this->MClustering;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Scale).field_0x8 = uVar3;
  __return_storage_ptr__->MaxNumConnections = 100;
  __return_storage_ptr__->ConnectionMethod = pFVar1->MClusterUnionConnectionType;
  __return_storage_ptr__->bCleanCollisionParticles = false;
  __return_storage_ptr__->bGenerateConnectionGraph = true;
  *(undefined8 *)&(__return_storage_ptr__->Scale).field_0x10 = uVar4;
  __return_storage_ptr__->bIsAnchored = false;
  __return_storage_ptr__->bEnableStrainOnCollision = true;
  return __return_storage_ptr__;
}

// DeferredClusterUnionUpdate @ 1438ac960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::DeferredClusterUnionUpdate
          (FClusterUnionManager *this,FClusterUnion *param_1,
          EUpdateClusterUnionPropertiesFlags param_2)

{
  int *piVar1;
  FUniqueIdx FVar2;
  int iVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  TGeometryParticle<double,3> *pTVar6;
  FPBDRigidsSOAs *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FSpatialAccelerationIdx FVar14;
  undefined2 uVar15;
  undefined7 uVar16;
  bool bVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<Chaos::FStat_STAT_DeferredClusterUnionUpdate> FVar19;
  bool *pbVar20;
  ClusterId *pCVar21;
  FRigidClusteredFlags_u_0 *pFVar22;
  IPhysicsProxyBase *pIVar23;
  IPhysicsProxyBase *pIVar24;
  FUniqueIdx *pFVar25;
  FPendingSpatialData *pFVar26;
  TGeometryParticle<double,3> **ppTVar27;
  FSpatialAccelerationIdx *pFVar28;
  FPendingSpatialData *pFVar29;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TGeometryParticleHandleImp<double,3,1> *pTVar30;
  FName FVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  TGeometryParticleHandleImp<double,3,1> *this_03;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FCollisionFilterData FStack_8c;
  FCollisionFilterData FStack_7c;
  uint local_6c;
  FName local_68;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  FVar19 = StatPtr_STAT_DeferredClusterUnionUpdate;
  if (StatPtr_STAT_DeferredClusterUnionUpdate ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_DeferredClusterUnionUpdate>)0x0) {
    pFVar18 = ::FName::FName(&local_40,"STAT_DeferredClusterUnionUpdate");
    FVar19 = (FThreadSafeStaticStat<Chaos::FStat_STAT_DeferredClusterUnionUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeferredClusterUnionUpdate,
                        *pFVar18,L"FClusterUnionManager::DeferredClusterUnionUpdate",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar31 = *(FName *)FVar19;
  bVar8 = false;
  bVar10 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_1438aca9b:
    bVar9 = false;
    FVar31 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_res10.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x2f9);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1438aca9b;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar9 = true;
  }
  UpdateAllClusterUnionProperties(this,param_1,param_2);
  if ((param_1->ChildParticles).ArrayNum == 0) {
    FPBDRigidsEvolutionBase::DisableParticle
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster);
    goto LAB_1438accfa;
  }
  pbVar20 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster);
  if (*pbVar20 != false) {
    FPBDRigidsEvolutionBase::EnableParticle
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster);
  }
  pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster;
  pFVar5 = this->MEvolution;
  pTVar30 = pTVar32;
  if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
    pTVar30 = pTVar4;
  }
  if (pTVar30 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar17 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
    if (bVar17) {
      pTVar30 = pTVar32;
      if (2 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
        pTVar30 = pTVar4;
      }
      if (pTVar30 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1438accfa;
      pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                           (int)pTVar30->_padding_);
      pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)pCVar21->Id;
      if (pTVar30 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1438accfa;
      this_03 = pTVar32;
      if (2 < *(byte *)((longlong)&pTVar30->_padding_ + 4)) {
        this_03 = pTVar30;
      }
      if (this_03 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2113888976451403243>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                            ,0x215,"false");
        if (bVar17) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_1438accfa;
      }
      pFVar22 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                           ((TPBDRigidClusteredParticles<double,3> *)this_03->_padding_,
                            (int)this_03->_padding_)->field0_0x0;
      if ((pFVar22->Bits & 1) == 0) goto LAB_1438accfa;
      pIVar23 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_03);
      pIVar24 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar4);
      if (pIVar23 != pIVar24) goto LAB_1438accfa;
    }
  }
  pbVar20 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,(int)pTVar4->_padding_
                      );
  if ((*pbVar20 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar25 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                         (int)pTVar4->_padding_);
    FVar2.Idx = pFVar25->Idx;
    pFVar26 = FPendingSpatialInternalDataQueue::Add
                        ((FPendingSpatialInternalDataQueue *)&pFVar5->_padding_,0,FVar2,Add);
    pFVar26->Operation = Update;
    ppTVar27 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                          (int)pTVar4->_padding_);
    pTVar6 = *ppTVar27;
    pFVar25 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                         (int)pTVar4->_padding_);
    FStack_8c.Word2 = 0;
    FStack_8c.Word3 = 0;
    FStack_8c.Word0 = 0;
    FStack_8c.Word1 = 0;
    FStack_7c.Word2 = 0;
    FStack_7c.Word3 = 0;
    iVar3 = pFVar25->Idx;
    FStack_7c.Word0 = 0;
    FStack_7c.Word1 = 0;
    local_6c = local_6c & 0xffffff00;
    if (iVar3 == -1) {
      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3133560516564217994>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                          ,0xf76,"CachedUniqueIdx.IsValid()");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (pTVar4,&FStack_8c);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (pTVar4,&FStack_7c);
    local_6c = CONCAT31(local_6c._1_3_,1);
    (pFVar26->AccelerationHandle).ExternalGeometryParticle = pTVar6;
    (pFVar26->AccelerationHandle).GeometryParticleHandle = pTVar4;
    (pFVar26->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar3;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_8c.Word0;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_8c.Word1;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_8c.Word2;
    *(ulonglong *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_7c.Word0,FStack_8c.Word3);
    (pFVar26->AccelerationHandle).UnionSimFilterData.Word1 = FStack_7c.Word1;
    (pFVar26->AccelerationHandle).UnionSimFilterData.Word2 = FStack_7c.Word2;
    *(ulonglong *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_6c,FStack_7c.Word3);
    pFVar28 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                         (int)pTVar4->_padding_);
    pFVar26->SpatialIdx = *pFVar28;
    pFVar29 = FPendingSpatialDataQueue::FindOrAdd
                        ((FPendingSpatialDataQueue *)&pFVar5->_padding_,FVar2,Add);
    pTVar4 = (pFVar26->AccelerationHandle).GeometryParticleHandle;
    (pFVar29->AccelerationHandle).ExternalGeometryParticle =
         (pFVar26->AccelerationHandle).ExternalGeometryParticle;
    (pFVar29->AccelerationHandle).GeometryParticleHandle = pTVar4;
    uVar11 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar12 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar13 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar29->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar26->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar29->AccelerationHandle).UnionQueryFilterData.Word0 = uVar11;
    (pFVar29->AccelerationHandle).UnionQueryFilterData.Word1 = uVar12;
    (pFVar29->AccelerationHandle).UnionQueryFilterData.Word2 = uVar13;
    uVar11 = (pFVar26->AccelerationHandle).UnionSimFilterData.Word1;
    uVar12 = (pFVar26->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar29->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar29->AccelerationHandle).UnionSimFilterData.Word1 = uVar11;
    (pFVar29->AccelerationHandle).UnionSimFilterData.Word2 = uVar12;
    FVar14 = pFVar26->SpatialIdx;
    uVar15 = *(undefined2 *)&pFVar26->field_0x3a;
    iVar3 = pFVar26->SyncTimestamp;
    *(undefined8 *)&(pFVar29->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar29->SpatialIdx = FVar14;
    *(undefined2 *)&pFVar29->field_0x3a = uVar15;
    pFVar29->SyncTimestamp = iVar3;
    uVar16 = *(undefined7 *)&pFVar26->field_0x41;
    pFVar29->Operation = pFVar26->Operation;
    *(undefined7 *)&pFVar29->field_0x41 = uVar16;
  }
LAB_1438accfa:
  pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster;
  this_00 = (FPBDRigidsSOAs *)this->MEvolution->_padding_;
  if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
    pTVar32 = pTVar4;
  }
  if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar17 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                       (&this_00->ActiveParticlesMapArray,
                        (TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
    if (!bVar17) {
      bVar17 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                         (&this_00->MovingKinematicsMapArray,
                          (TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
      if (!bVar17) {
        FPBDRigidsSOAs::
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,
                   &this_00->TransientDirtyMapArray);
        if (CVars::bChaosSolverCheckParticleViews != false) {
          FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar4);
        }
        FPBDRigidsSOAs::UpdateViews(this_00);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_50.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_50);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// DestroyClusterUnion @ 1438ad3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::DestroyClusterUnion(FClusterUnionManager *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_DestroyClusterUnion> FVar11;
  FClusterUnion *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  uint local_res10 [2];
  FName local_res18;
  FColor_u_0 local_res20 [2];
  uint local_98 [2];
  uint local_90 [2];
  uint local_88 [2];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_80;
  FName local_70;
  FName local_68;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar11 = StatPtr_STAT_DestroyClusterUnion;
  local_res10[0] = param_1;
  if (StatPtr_STAT_DestroyClusterUnion ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_DestroyClusterUnion>)0x0) {
    pFVar10 = ::FName::FName(&local_40,"STAT_DestroyClusterUnion");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_DestroyClusterUnion>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyClusterUnion,*pFVar10,
                        L"FClusterUnionManager::DestroyClusterUnion","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_70.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x14d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1438ad4e2;
    }
  }
  bVar6 = false;
  FVar13 = local_68;
LAB_1438ad4e2:
  uVar15 = local_res10[0];
  pFVar12 = FindClusterUnion(this,local_res10[0]);
  if (pFVar12 != (FClusterUnion *)0x0) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = (pFVar12->ChildParticles).ArrayNum;
    lVar14 = (longlong)local_80.ArrayNum;
    local_res18 = (FName)(pFVar12->ChildParticles).AllocatorInstance.Data;
    if (local_80.ArrayNum == 0) {
      local_80.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_80.ArrayNum,0,&local_80.AllocatorInstance,local_80.ArrayNum,
                 &local_80.ArrayMax);
      memcpy(local_80.AllocatorInstance.Data,(void *)local_res18,lVar14 << 3);
      uVar15 = local_res10[0];
    }
    HandleRemoveOperation(this,uVar15,&local_80,Never);
    (pFVar12->ChildParticles).ArrayNum = 0;
    if ((pFVar12->ChildParticles).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pFVar12->ChildParticles).AllocatorInstance,0,
                 &(pFVar12->ChildParticles).ArrayMax);
    }
    local_res18 = (FName)((ulonglong)local_res18 & 0xffffffffffffff00);
    FRigidClustering::DestroyClusterParticle
              (this->MClustering,pFVar12->InternalCluster,(FClusterDestoryParameters *)&local_res18)
    ;
    if (pFVar12->ExplicitIndex != -1) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->ExplicitIndexMap,pFVar12->ExplicitIndex);
      local_98[0] = pFVar12->ExplicitIndex;
      if (*(int *)&(this->PendingExplicitIndexOperations).field_0x8 !=
          *(int *)&(this->PendingExplicitIndexOperations).field_0x34) {
        TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>(&this->PendingExplicitIndexOperations,local_98[0],(int *)local_98);
      }
    }
    pTVar2 = &this->ReusableIndices;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar3 + (longlong)(this->ReusableIndices).ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar9 = (this->ReusableIndices).ArrayNum;
    piVar1 = &(this->ReusableIndices).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ReusableIndices).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_res10[0];
    local_90[0] = local_res10[0];
    if (*(int *)&(this->PendingClusterIndexOperations).field_0x8 !=
        *(int *)&(this->PendingClusterIndexOperations).field_0x34) {
      TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>(&this->PendingClusterIndexOperations,local_res10[0],(int *)local_90);
    }
    local_88[0] = local_res10[0];
    if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
      TSet<TTuple<int,Chaos::FClusterUnion>,TDefaultMapHashableKeyFuncs<int,Chaos::FClusterUnion,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,Chaos::FClusterUnion>,TDefaultMapHashableKeyFuncs<int,Chaos::FClusterUnion,0>,FDefaultSetAllocator>
                         *)&this->ClusterUnions,local_res10[0],(int *)local_88);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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

// FindClusterUnion @ 1438b1f80

FClusterUnion * __thiscall
Chaos::FClusterUnionManager::FindClusterUnion(FClusterUnionManager *this,int param_1)

{
  int iVar1;
  FClusterUnion *pFVar2;
  FClusterUnion *pFVar3;
  undefined1 *puVar4;
  FClusterUnion *pFVar5;
  
  pFVar5 = (FClusterUnion *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ClusterUnions).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FClusterUnion *)((longlong)iVar1 * 0x170 + *(longlong *)&this->ClusterUnions);
        if (*(int *)&pFVar2->InternalCluster == param_1) break;
        iVar1 = *(int *)&pFVar2[1].Geometry.Reference;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FClusterUnion *)&pFVar2->Geometry;
  if (pFVar2 == (FClusterUnion *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindClusterUnion @ 1438b2010

FClusterUnion * __thiscall
Chaos::FClusterUnionManager::FindClusterUnion(FClusterUnionManager *this,int param_1)

{
  int iVar1;
  FClusterUnion *pFVar2;
  FClusterUnion *pFVar3;
  undefined1 *puVar4;
  FClusterUnion *pFVar5;
  
  pFVar5 = (FClusterUnion *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ClusterUnions).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FClusterUnion *)((longlong)iVar1 * 0x170 + *(longlong *)&this->ClusterUnions);
        if (*(int *)&pFVar2->InternalCluster == param_1) break;
        iVar1 = *(int *)&pFVar2[1].Geometry.Reference;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FClusterUnion *)&pFVar2->Geometry;
  if (pFVar2 == (FClusterUnion *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindClusterUnionFromExplicitIndex @ 1438b20a0

FClusterUnion * __thiscall
Chaos::FClusterUnionManager::FindClusterUnionFromExplicitIndex
          (FClusterUnionManager *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FClusterUnion *pFVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->ExplicitIndexMap).field_0x8 != *(int *)&(this->ExplicitIndexMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ExplicitIndexMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ExplicitIndexMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ExplicitIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this->ExplicitIndexMap);
        if (*piVar2 == param_1) {
          piVar4 = piVar2 + 1;
          if (piVar2 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 == (int *)0x0) {
            return (FClusterUnion *)0x0;
          }
          pFVar3 = FindClusterUnion(this,*piVar4);
          return pFVar3;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  return (FClusterUnion *)0x0;
}

// FindClusterUnionFromParticle @ 1438b2120

FClusterUnion * __thiscall
Chaos::FClusterUnionManager::FindClusterUnionFromParticle
          (FClusterUnionManager *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  FClusterUnion *pFVar2;
  
  iVar1 = FindClusterUnionIndexFromParticle(this,param_1);
  pFVar2 = FindClusterUnion(this,iVar1);
  return pFVar2;
}

// FindClusterUnionFromParticle @ 1438b2150

FClusterUnion * __thiscall
Chaos::FClusterUnionManager::FindClusterUnionFromParticle
          (FClusterUnionManager *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  FClusterUnion *pFVar2;
  
  iVar1 = FindClusterUnionIndexFromParticle(this,param_1);
  pFVar2 = FindClusterUnion(this,iVar1);
  return pFVar2;
}

// FindClusterUnionIndexFromParticle @ 1438b2180

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::FClusterUnionManager::FindClusterUnionIndexFromParticle
          (FClusterUnionManager *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<Chaos::FStat_STAT_FindClusterUnionIndexFromParticle> FVar10;
  ClusterId *pCVar11;
  FClusterUnion *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar18;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  FVar10 = StatPtr_STAT_FindClusterUnionIndexFromParticle;
  if (StatPtr_STAT_FindClusterUnionIndexFromParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_FindClusterUnionIndexFromParticle>)0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_FindClusterUnionIndexFromParticle");
    FVar10 = (FThreadSafeStaticStat<Chaos::FStat_STAT_FindClusterUnionIndexFromParticle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindClusterUnionIndexFromParticle
                        ,*pFVar9,L"FClusterUnionManager::FindClusterUnionIndexFromParticle",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_1438b22d3:
    bVar5 = false;
    FVar16 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar15.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x545);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1438b22d3;
    local_res20.s.LowPart = FVar15.Value;
    local_res20.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  if (param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pTVar18 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)param_1->field_0xc) {
      pTVar18 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_1;
    }
    if (pTVar18 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar18,
                           *(int *)&pTVar18->field_0x8);
      if (pCVar11->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            (*(TPBDRigidClusteredParticles<double,3> **)pTVar18,
                             *(int *)&pTVar18->field_0x8);
        pTVar14 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pCVar11->Id->field_0xc) {
          pTVar14 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar11->Id;
        }
        if (pTVar14 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          iVar8 = FindClusterUnionIndexFromParticle
                            (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
          goto LAB_1438b23c4;
        }
      }
      uVar13 = *(uint *)&pTVar18->field_0x8;
      lVar2 = *(longlong *)pTVar18;
      uVar17 = 0;
      if ((int)uVar13 < *(int *)(lVar2 + 0x5f8)) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x5f0);
      iVar8 = -*(int *)(lVar2 + (longlong)(int)uVar13 * 4);
      if (iVar8 < 0) {
        iVar8 = *(int *)(lVar2 + (longlong)(int)uVar13 * 4);
      }
      pFVar12 = FindClusterUnion(this,iVar8);
      if ((pFVar12 != (FClusterUnion *)0x0) && (pFVar12->InternalCluster == pTVar18)) {
        iVar8 = pFVar12->InternalIndex;
        goto LAB_1438b23c4;
      }
    }
  }
  iVar8 = -1;
LAB_1438b23c4:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return iVar8;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar8;
}

// FlushIncrementalConnectivityGraphOperations @ 1438b3820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::FlushIncrementalConnectivityGraphOperations
          (FClusterUnionManager *this,FClusterUnion *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalConnectivityGraphOperations> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  FVar8 = StatPtr_STAT_FlushIncrementalConnectivityGraphOperations;
  if (StatPtr_STAT_FlushIncrementalConnectivityGraphOperations ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalConnectivityGraphOperations>)0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_FlushIncrementalConnectivityGraphOperations");
    FVar8 = (FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalConnectivityGraphOperations>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FlushIncrementalConnectivityGraphOperations,*pFVar7,
                       L"FClusterUnionManager::FlushIncrementalConnectivityGraphOperations",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar3 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar10 = FVar3.ComparisonIndex.Value;
  uVar9 = FVar3.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x471);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar5 = true;
      local_58 = FVar3;
      goto LAB_1438b3983;
    }
  }
  bVar5 = false;
LAB_1438b3983:
  iVar2 = (param_1->PendingConnectivityOperations).ArrayNum;
  pFVar11 = (param_1->PendingConnectivityOperations).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->PendingConnectivityOperations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,enum_Chaos::EClusterUnionConnectivityOperation>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar11 == pFVar12) break;
    if (pFVar11[8] == (FScriptContainerElement)0x0) {
      Chaos::`anonymous_namespace'::AddParticleToConnectionGraph
                (this->MClustering,param_1,*(TPBDRigidParticleHandleImp<double,3,1> **)pFVar11);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      if (pFVar11[8] == (FScriptContainerElement)0x1) {
        Chaos::`anonymous_namespace'::RemoveClusterUnionEdges
                  (this->MClustering,param_1,*(TPBDRigidParticleHandleImp<double,3,1> **)pFVar11);
      }
      pFVar11 = pFVar11 + 0x10;
    }
  }
  piVar1 = &(param_1->PendingConnectivityOperations).ArrayMax;
  (param_1->PendingConnectivityOperations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(param_1->PendingConnectivityOperations).AllocatorInstance,0,piVar1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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

// FlushIncrementalGeometryOperations @ 1438b3b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::FlushIncrementalGeometryOperations
          (FClusterUnionManager *this,FClusterUnion *param_1)

{
  longlong *plVar1;
  FFLags *pFVar2;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar3;
  float fVar4;
  undefined8 uVar5;
  FPBDRigidsEvolutionGBF *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  bool bVar39;
  bool bVar40;
  uchar uVar41;
  bool bVar42;
  int iVar43;
  FName *pFVar44;
  FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalGeometryOperations> FVar45;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar46;
  ulonglong uVar47;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar48;
  FName FVar49;
  TVector<double,3> *pTVar50;
  FImplicitObject *pFVar51;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar52;
  TRigidTransform<double,3> *pTVar53;
  TAABB<double,3> *pTVar54;
  uint uVar55;
  int iVar56;
  uint uVar57;
  ForAnyElementType FVar58;
  FImplicitObject *pFVar59;
  TRigidTransform<double,3> *__return_storage_ptr__;
  FName FVar60;
  FScriptContainerElement *pFVar61;
  uint uVar62;
  FImplicitObject *pFVar63;
  uint uVar64;
  uint uVar65;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar66;
  FScriptContainerElement *pFVar67;
  uint uVar68;
  ulonglong uVar69;
  ForElementType<unsigned_int> FVar70;
  longlong lVar71;
  FImplicitObjectUnion *pFVar72;
  longlong lVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined4 uVar84;
  undefined4 uVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  undefined1 auStackY_438 [32];
  EClusterUnionGeometryOperation local_3d0 [8];
  EClusterUnionGeometryOperation local_3c8 [8];
  undefined1 local_3c0 [8];
  EClusterUnionGeometryOperation local_3b8 [8];
  FName local_3b0;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_3a8;
  FClusterUnionManager *local_3a0;
  uint local_398;
  FImplicitObjectUnion *local_390;
  FColor_u_0 local_388;
  uint local_384;
  uint local_380;
  uint local_378;
  uint uStack_374;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_370;
  undefined4 local_368;
  uint uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  FName local_358;
  FName local_350;
  FScriptContainerElement *local_348;
  FName local_340;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_330;
  TPBDRigidParticleHandleImp<double,3,1> *local_328;
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  <lambda_1> local_2f8;
  double local_2d8;
  FName local_2d0;
  TVector<double,3> local_2c8;
  double local_2b0;
  double local_2a8;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_2a0;
  undefined1 local_290 [48];
  TAABB<double,3> local_260;
  undefined1 local_228 [32];
  ForElementType<unsigned_int> local_208;
  uint local_200;
  uint local_1fc;
  int local_1f8;
  int local_1f4;
  FScriptContainerElement local_1f0 [8];
  ForAnyElementType local_1e8;
  uint local_1e0;
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
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pFVar59 = (FImplicitObject *)0x0;
  FVar45 = StatPtr_STAT_FlushIncrementalGeometryOperations;
  local_3a0 = this;
  if (StatPtr_STAT_FlushIncrementalGeometryOperations ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalGeometryOperations>)0x0) {
    pFVar44 = ::FName::FName(&local_2d0,"STAT_FlushIncrementalGeometryOperations");
    FVar45 = (FThreadSafeStaticStat<Chaos::FStat_STAT_FlushIncrementalGeometryOperations>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FlushIncrementalGeometryOperations,*pFVar44,
                        L"FClusterUnionManager::FlushIncrementalGeometryOperations",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar60 = *(FName *)FVar45;
  bVar20 = false;
  bVar21 = false;
  local_340.ComparisonIndex.Value = 0;
  local_340.Number = 0;
  bVar39 = false;
  bVar40 = false;
  if ((FVar60.ComparisonIndex.Value.Value == 0) && (FVar60.Number == 0)) {
LAB_1438b3c84:
    bVar21 = bVar40;
    bVar20 = bVar39;
    bVar39 = false;
    local_358 = local_340;
    FVar60 = local_340;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_388.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_388._s_0,(char *)*(FName *)((longlong)FVar45 + 0x10));
      bVar20 = false;
      bVar21 = true;
      bVar39 = false;
      bVar40 = true;
      if (-1 < CpuChannel->Enabled) {
        local_350.ComparisonIndex.Value = FVar60.ComparisonIndex.Value.Value;
        local_350.Number = FVar60.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_350,(wchar_t *)*(FName *)((longlong)FVar45 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x49e);
        bVar20 = true;
        bVar21 = true;
        bVar39 = true;
        bVar40 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1438b3c84;
    local_3b0 = FVar60;
    local_358 = FVar60;
    FThreadStats::AddMessage(FVar60,CycleScopeStart);
    bVar39 = true;
  }
  if (((param_1->Geometry).Reference == (FImplicitObject *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClusterUnion.Geometry != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                          ,0x49f,L""), bVar40)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar41 = FImplicitObject::GetType((param_1->Geometry).Reference);
  if (uVar41 == '\x0f') {
    pTVar46 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
              TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                        (&local_2a0,&param_1->ChildParticles);
    ppTVar66 = pTVar46->DataPtr;
    local_228._0_8_ = (FScriptContainerElement *)0x0;
    local_228._8_8_ = 0;
    local_208 = (ForElementType<unsigned_int>)0x0;
    uVar62 = (uint)*(undefined8 *)&pTVar46->ArrayNum;
    local_200 = 0;
    local_1fc = 0x80;
    local_1f8 = -1;
    local_1f4 = 0;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = 0;
    if (uVar62 != 0) {
      if ((int)uVar62 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar62);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_228,uVar62);
      uVar64 = 1;
      if (3 < uVar62) {
        uVar69 = (ulonglong)((uVar62 >> 1) + 7) * 2 + 1;
        lVar73 = 0x3f;
        if (uVar69 != 0) {
          for (; uVar69 >> lVar73 == 0; lVar73 = lVar73 + -1) {
          }
        }
        uVar64 = 1 << ((byte)lVar73 & 0x1f);
      }
      if ((local_1e0 == 0) || ((int)local_1e0 < (int)uVar64)) {
        local_1e0 = uVar64;
        if (local_1e8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,4);
        }
        if (uVar64 != 0) {
          uVar68 = uVar64;
          if (uVar64 < 2) {
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              uVar68 = 0;
              goto LAB_1438b3dcc;
            }
          }
          else {
LAB_1438b3dcc:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1e8,0,uVar68,4);
          }
          if (0 < (int)uVar64) {
            uVar69 = (ulonglong)uVar64;
            pFVar63 = pFVar59;
            do {
              FVar58.Data = local_1f0;
              if (local_1e8.Data != (FScriptContainerElement *)0x0) {
                FVar58.Data = local_1e8.Data;
              }
              uVar47 = (ulonglong)pFVar63 & (longlong)(int)uVar64 - 1U;
              pFVar63 = (FImplicitObject *)((longlong)&pFVar63->_padding_ + 1);
              *(undefined4 *)(FVar58.Data + uVar47 * 4) = 0xffffffff;
              uVar69 = uVar69 - 1;
            } while (uVar69 != 0);
          }
        }
        if (local_1e0 != 0) {
          pTStack_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
          local_378 = 0;
          uStack_374 = 1;
          uStack_364 = 0;
          uStack_360 = 0;
          if (local_200 != 0) {
            FVar70 = (ForElementType<unsigned_int>)((longlong)local_228 + 0x10);
            if (local_208 != (ForElementType<unsigned_int>)0x0) {
              FVar70 = local_208;
            }
            uVar64 = *(uint *)FVar70;
            pFVar63 = pFVar59;
            while (uVar64 == 0) {
              uStack_360 = (int)pFVar63 + 0x20;
              pFVar63 = (FImplicitObject *)(ulonglong)uStack_360;
              iVar43 = (int)pFVar59;
              local_378 = iVar43 + 1;
              pFVar59 = (FImplicitObject *)(ulonglong)local_378;
              if ((int)((local_200 - 1) + ((int)(local_200 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_378) goto LAB_1438b3eea;
              uVar64 = ((uint *)((longlong)FVar70 + 4))[iVar43];
            }
            uStack_374 = -uVar64 & uVar64;
            uVar69 = (ulonglong)uStack_374 * 2 + 1;
            lVar73 = 0x3f;
            if (uVar69 != 0) {
              for (; uVar69 >> lVar73 == 0; lVar73 = lVar73 + -1) {
              }
            }
            uStack_364 = (uStack_360 - 1) + (int)lVar73;
            pFVar59 = (FImplicitObject *)(ulonglong)uStack_364;
            if ((int)local_200 < (int)uStack_364) {
LAB_1438b3eea:
              pFVar59 = (FImplicitObject *)(ulonglong)local_200;
              uStack_364 = local_200;
            }
          }
          local_368 = 0xffffffff;
          local_320 = (longlong *)local_228;
          local_318._padding_ = CONCAT44(uStack_374,local_378);
          local_318.CurrentBitIndex = uStack_364;
          local_318.UnvisitedBitMask = 0xffffffff;
          local_318._28_4_ = uStack_35c;
          local_318.BaseBitIndex = uStack_360;
          local_318.Array = pTStack_370;
          if ((int)pFVar59 < (int)local_200) {
            do {
              lVar73 = *local_320;
              lVar71 = (longlong)(int)pFVar59;
              uVar69 = *(ulonglong *)(lVar73 + lVar71 * 0x10);
              uVar64 = ((uint)(uVar69 >> 0x14) & 0xffff ^ (uint)(uVar69 >> 4)) * -0x7a143595;
              uVar64 = (uVar64 >> 0xd ^ uVar64) * -0x3d4d51cb;
              uVar64 = (uVar64 >> 0x10 ^ uVar64) & local_1e0 - 1;
              *(uint *)(lVar73 + 0xc + lVar71 * 0x10) = uVar64;
              FVar58.Data = local_1f0;
              if (local_1e8.Data != (FScriptContainerElement *)0x0) {
                FVar58.Data = local_1e8.Data;
              }
              uVar69 = (longlong)(int)local_1e0 - 1U & (longlong)(int)uVar64;
              *(undefined4 *)(lVar73 + 8 + lVar71 * 0x10) =
                   *(undefined4 *)(FVar58.Data + uVar69 * 4);
              *(int *)(FVar58.Data + uVar69 * 4) = (int)pFVar59;
              local_318.UnvisitedBitMask = local_318.UnvisitedBitMask & ~local_318._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
              pFVar59 = (FImplicitObject *)(ulonglong)(uint)local_318.CurrentBitIndex;
            } while (local_318.CurrentBitIndex < (local_318.Array)->NumBits);
          }
        }
      }
    }
    ppTVar3 = ppTVar66 + (int)uVar62;
    for (; ppTVar66 != ppTVar3; ppTVar66 = ppTVar66 + 1) {
      TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)local_228,&local_328,(bool *)ppTVar66);
    }
    ForceRegenerateGeometry
              (local_3a0,param_1,
               (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_228);
    local_1e0 = 0;
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    iVar43 = SUB84(local_228._8_8_,4);
    local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
    if (iVar43 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
    }
    local_1f8 = -1;
    local_1f4 = 0;
    local_200 = 0;
    if (0x80 < local_1fc) {
      local_1fc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
    }
    if (local_208 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_208);
    }
    if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_228._0_8_);
    }
    goto LAB_1438b4a04;
  }
  pFVar72 = (FImplicitObjectUnion *)(param_1->Geometry).Reference;
  uVar41 = FImplicitObject::GetType((FImplicitObject *)pFVar72);
  if ((uVar41 == '\x05') || (uVar41 == '\x0f')) {
    local_390 = pFVar72;
    if (pFVar72 == (FImplicitObjectUnion *)0x0) goto LAB_1438b40e6;
  }
  else {
    local_390 = (FImplicitObjectUnion *)0x0;
LAB_1438b40e6:
    pFVar72 = local_390;
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("ImplicitUnion != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                        ,0x4a8,L"");
    if (bVar40) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pTVar48 = FClusterUnion::GetPendingGeometryOperationParticles(param_1,Add);
  FVar49 = (FName)FClusterUnion::GetPendingGeometryOperationParticles(param_1,Remove);
  local_3b0 = FVar49;
  local_3a8 = FClusterUnion::GetPendingGeometryOperationParticles(param_1,Refresh);
  if (((pTVar48->ArrayNum == 0) && (*(int *)((longlong)FVar49 + 8) == 0)) &&
     (local_3a8->ArrayNum == 0)) goto LAB_1438b4a04;
  pFVar6 = this->MEvolution;
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster;
  Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
            ((FPBDIslandManager *)&pFVar6->_padding_,pTVar7);
  (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,pTVar7);
  if (((pFVar72->Flags).Bits & 1) != 0) {
    FImplicitObjectUnion::CheckNotLocked(pFVar72);
    (pFVar72->Flags).Bits = (pFVar72->Flags).Bits & 0xfe;
    FImplicitObjectUnion::RebuildBVH(pFVar72);
  }
  uVar62 = *(uint *)&param_1->InternalCluster->field_0x8;
  lVar71 = (longlong)(int)uVar62;
  lVar73 = *(longlong *)param_1->InternalCluster;
  uVar64 = 0;
  if ((int)uVar62 < *(int *)(lVar73 + 0x50)) {
    uVar64 = ~uVar62 >> 0x1f;
  }
  if ((uVar64 == 0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar40)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar73 = *(longlong *)(lVar73 + 0x48);
  fVar4 = *(float *)(lVar73 + lVar71 * 0x10);
  uVar5 = *(undefined8 *)(lVar73 + 8 + lVar71 * 0x10);
  dVar17 = (double)(float)((ulonglong)uVar5 >> 0x20);
  dVar88 = (double)*(float *)(lVar73 + 4 + lVar71 * 0x10);
  pTVar50 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1->InternalCluster,
                       *(int *)&param_1->InternalCluster->field_0x8);
  uVar38 = _UNK_150689688;
  uVar37 = ___xmm_3ff00000000000003ff0000000000000;
  uVar36 = _UNK_150689518;
  uVar35 = ___xmm_00000000000000003ff0000000000000;
  local_168._8_4_ = SUB84(dVar17,0);
  local_168._0_8_ = (double)(float)uVar5;
  local_168._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_178._8_4_ = SUB84(dVar88,0);
  local_178._0_8_ = (double)fVar4;
  local_178._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
  local_158 = *(undefined8 *)pTVar50;
  uStack_150 = *(undefined8 *)&pTVar50->field_0x8;
  local_148 = *(undefined8 *)&pTVar50->field_0x10;
  uStack_140 = 0;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_128 = ___xmm_00000000000000003ff0000000000000;
  uStack_120 = _UNK_150689518;
  if (pTVar48->ArrayNum != 0) {
    local_2f8.__this = local_3a0;
    local_2f8.ClusterWorldTM = (TRigidTransform<double,3> *)local_178;
    local_2f8.ClusterUnion = param_1;
    local_2f8.PendingGeometryAdditions = pTVar48;
    ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticleHandleImp<double,3,1>,_Chaos::FClusterUnionManager::FlushIncrementalGeometryOperations_::__l25::<lambda_1>_>
              (param_1->InternalCluster,pTVar48,(param_1->ClusterUnionParameters).ActorId,
               (param_1->ClusterUnionParameters).ComponentId,&local_2f8);
    param_1->bGeometryModified = true;
    local_3d0[0] = Add;
    if (*(int *)&(param_1->PendingGeometryOperations).field_0x8 !=
        *(int *)&(param_1->PendingGeometryOperations).field_0x34) {
      TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_Chaos::EClusterUnionGeometryOperation>
                (&param_1->PendingGeometryOperations,0,local_3d0);
    }
  }
  if (*(int *)((longlong)local_3b0 + 8) != 0) {
    RemoveParticlesFromClusterUnionGeometry<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (param_1->InternalCluster,
               (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)local_3b0,&param_1->GeometryChildParticles);
    pFVar51 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster);
    pFVar63 = (param_1->Geometry).Reference;
    if (pFVar63 != pFVar51) {
      (param_1->Geometry).Reference = pFVar51;
      if (pFVar51 != (FImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar63 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar63->_padding_;
        lVar73 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar73 == 1) && (*(int *)((longlong)&pFVar63->_padding_ + 4) == 0)) {
          (**(code **)pFVar63->_padding_)(pFVar63,1);
        }
      }
    }
    param_1->bGeometryModified = true;
    local_3c8[0] = Remove;
    if (*(int *)&(param_1->PendingGeometryOperations).field_0x8 !=
        *(int *)&(param_1->PendingGeometryOperations).field_0x34) {
      TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_Chaos::EClusterUnionGeometryOperation>
                (&param_1->PendingGeometryOperations,1,local_3c8);
    }
    pFVar72 = (FImplicitObjectUnion *)(param_1->Geometry).Reference;
    local_390 = pFVar72;
    uVar41 = FImplicitObject::GetType((FImplicitObject *)pFVar72);
    if ((uVar41 == '\x05') || (uVar41 == '\x0f')) {
      if (pFVar72 != (FImplicitObjectUnion *)0x0) goto LAB_1438b43c9;
    }
    else {
      local_390 = (FImplicitObjectUnion *)0x0;
    }
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("ImplicitUnion != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                        ,0x4e1,L"");
    if (bVar40) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
LAB_1438b43c9:
  if (((param_1->Geometry).Reference == (FImplicitObject *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClusterUnion.Geometry != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                          ,0x4e4,L""), bVar40)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar41 = FImplicitObject::GetType((param_1->Geometry).Reference);
  pTVar48 = local_3a8;
  if ((local_3a8->ArrayNum != 0) && (uVar41 != '\x0f')) {
    FVar49 = (FName)TGeometryParticlesImp<double,3,0>::ShapesArray
                              (*(TGeometryParticlesImp<double,3,0> **)param_1->InternalCluster,
                               *(int *)&param_1->InternalCluster->field_0x8);
    local_3b0 = FVar49;
    if (((param_1->ChildParticles).ArrayNum != *(int *)((longlong)FVar49 + 0x10)) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClusterUnion.ChildParticles.Num() == ShapesArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                            ,0x4ef,L""), bVar40)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    dVar17 = __real_3f1a36e2e0000000;
    uVar34 = _UNK_15061cc8c;
    uVar68 = _UNK_15061cc88;
    uVar64 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar62 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_398 = pTVar48->ArrayNum;
    uVar69 = (ulonglong)(int)local_398;
    pFVar61 = (pTVar48->AllocatorInstance).Data;
    bVar40 = false;
    local_348 = pFVar61 + uVar69 * 8;
    while( true ) {
      pFVar9 = local_348;
      if (pTVar48->ArrayNum != (int)uVar69) {
        local_3c0[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_3c0);
      }
      FVar60 = local_358;
      if (pFVar61 == pFVar9) break;
      pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar61;
      if (pTVar8 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1438b4871:
        uVar69 = (ulonglong)local_398;
        pFVar61 = pFVar61 + 8;
      }
      else {
        pFVar9 = (param_1->ChildParticles).AllocatorInstance.Data;
        pFVar67 = pFVar9;
        pTVar48 = local_3a8;
        if (pFVar9 == pFVar9 + (longlong)(param_1->ChildParticles).ArrayNum * 8) goto LAB_1438b4871;
        do {
          if (*(TPBDRigidParticleHandleImp<double,3,1> **)pFVar67 == pTVar8) {
            uVar65 = (uint)((longlong)pFVar67 - (longlong)pFVar9 >> 3);
            if ((-1 < (int)uVar65) && ((int)uVar65 < *(int *)((longlong)FVar49 + 0x10))) {
              FVar52 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                        )TGeometryParticlesImp<double,3,0>::ShapesArray
                                   (*(TGeometryParticlesImp<double,3,0> **)pTVar8,
                                    *(int *)&pTVar8->field_0x8);
              if ((*(int *)((longlong)FVar52 + 0x10) < 1) &&
                 (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar42)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar60 = local_3b0;
              local_330 = FVar52;
              if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    *)((longlong)FVar52 + 8) !=
                  (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   )0x0) {
                local_330 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                              *)((longlong)FVar52 + 8);
              }
              FVar49 = local_3b0;
              pTVar48 = local_3a8;
              if (*(longlong *)local_330 != 0) {
                uVar55 = 0;
                if ((int)uVar65 < *(int *)((longlong)local_3b0 + 0x10)) {
                  uVar55 = ~uVar65 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FVar49 = *(FName *)((longlong)FVar60 + 8);
                local_3a0 = (FClusterUnionManager *)(longlong)(int)uVar65;
                if (FVar49 != (FName)0x0) {
                  FVar60 = FVar49;
                }
                pFVar63 = *(FImplicitObject **)
                           (*(longlong *)((longlong)FVar60 + (longlong)local_3a0 * 8) + 0x10);
                if (pFVar63 != (FImplicitObject *)0x0) {
                  uVar41 = FImplicitObject::GetType(pFVar63);
                  if (uVar41 != '\x04') {
                    pFVar63 = pFVar59;
                  }
                  if (pFVar63 != (FImplicitObject *)0x0) {
                    __return_storage_ptr__ = (TRigidTransform<double,3> *)&local_1d8;
                    pTVar53 = Chaos::`anonymous_namespace'::GetParticleRigidFrameInClusterUnion
                                        (__return_storage_ptr__,pTVar8,
                                         (TRigidTransform<double,3> *)local_178);
                    dVar88 = (double)pFVar63[3]._padding_ - local_1a8;
                    dVar11 = (double)pFVar63[3]._padding_ - dStack_1a0;
                    dVar12 = *(double *)&pFVar63[2].Margin - local_1b8;
                    dVar13 = *(double *)&pFVar63[2].Type - dStack_1b0;
                    uVar84 = SUB84(dVar17,0);
                    uVar85 = (undefined4)((ulonglong)dVar17 >> 0x20);
                    auVar74._8_4_ = uVar84;
                    auVar74._0_8_ = dVar17;
                    auVar74._12_4_ = uVar85;
                    local_2b0 = dVar17;
                    auVar75._8_8_ =
                         -(ulonglong)
                          (auVar74._8_8_ <
                          (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar34,
                                           SUB84(dVar11,0) & uVar68));
                    auVar75._0_8_ =
                         -(ulonglong)
                          (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar88 >> 0x20) & uVar64,
                                                     SUB84(dVar88,0) & uVar62));
                    uVar55 = movmskpd((int)__return_storage_ptr__,auVar75);
                    lVar73 = -(ulonglong)
                              (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar34,
                                                         SUB84(dVar13,0) & uVar68));
                    auVar14._8_4_ = (int)lVar73;
                    auVar14._0_8_ =
                         -(ulonglong)
                          (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar64,
                                                     SUB84(dVar12,0) & uVar62));
                    auVar14._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
                    iVar43 = movmskpd((int)pTVar53,auVar14);
                    if ((uVar55 & 0x3fffffff) == 0 && iVar43 == 0) {
                      dVar18 = local_1c8 + (double)pFVar63[2]._padding_;
                      dVar19 = dStack_1c0 + (double)pFVar63[2]._padding_;
                      dVar88 = (double)pFVar63[2]._padding_ - local_1c8;
                      dVar11 = (double)pFVar63[2]._padding_ - dStack_1c0;
                      dVar12 = local_1d8 + *(double *)&pFVar63[1].Margin;
                      dVar13 = dStack_1d0 + *(double *)&pFVar63[1].Type;
                      dVar86 = *(double *)&pFVar63[1].Margin - local_1d8;
                      dVar87 = *(double *)&pFVar63[1].Type - dStack_1d0;
                      auVar76._8_4_ = uVar84;
                      auVar76._0_8_ = dVar17;
                      auVar76._12_4_ = uVar85;
                      local_2a8 = dVar17;
                      auVar77._8_8_ =
                           -(ulonglong)
                            (auVar76._8_8_ <
                            (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar34,
                                             SUB84(dVar11,0) & uVar68));
                      auVar77._0_8_ =
                           -(ulonglong)
                            (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar88 >> 0x20) & uVar64,
                                                       SUB84(dVar88,0) & uVar62));
                      iVar56 = movmskpd(0,auVar77);
                      auVar78._8_4_ = uVar84;
                      auVar78._0_8_ = dVar17;
                      auVar78._12_4_ = uVar85;
                      auVar79._8_8_ =
                           -(ulonglong)
                            (auVar78._8_8_ <
                            (double)CONCAT44((uint)((ulonglong)dVar87 >> 0x20) & uVar34,
                                             SUB84(dVar87,0) & uVar68));
                      auVar79._0_8_ =
                           -(ulonglong)
                            (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar86 >> 0x20) & uVar64,
                                                       SUB84(dVar86,0) & uVar62));
                      uVar55 = movmskpd(iVar43,auVar79);
                      uVar57 = iVar56 << 2 | uVar55;
                      if (uVar57 != 0) {
                        auVar80._8_4_ = uVar84;
                        auVar80._0_8_ = dVar17;
                        auVar80._12_4_ = uVar85;
                        auVar81._8_8_ =
                             -(ulonglong)
                              (auVar80._8_8_ <
                              (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar34,
                                               SUB84(dVar19,0) & uVar68));
                        auVar81._0_8_ =
                             -(ulonglong)
                              (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar64,
                                                         SUB84(dVar18,0) & uVar62));
                        uVar57 = movmskpd(uVar57,auVar81);
                        lVar73 = -(ulonglong)
                                  (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                                             uVar34,SUB84(dVar13,0) & uVar68));
                        auVar16._8_4_ = (int)lVar73;
                        auVar16._0_8_ =
                             -(ulonglong)
                              (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar64,
                                                         SUB84(dVar12,0) & uVar62));
                        auVar16._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
                        uVar55 = movmskpd(uVar55,auVar16);
                        if ((uVar57 & 0x3fffffff) != 0 || uVar55 != 0) goto LAB_1438b4740;
                      }
                      dVar88 = (double)pFVar63[4]._padding_ - local_188;
                      dVar11 = (double)pFVar63[4]._padding_ - dStack_180;
                      dVar12 = *(double *)&pFVar63[3].Margin - local_198;
                      dVar13 = *(double *)&pFVar63[3].Type - dStack_190;
                      auVar82._8_4_ = uVar84;
                      auVar82._0_8_ = dVar17;
                      auVar82._12_4_ = uVar85;
                      local_2d8 = dVar17;
                      auVar83._8_8_ =
                           -(ulonglong)
                            (auVar82._8_8_ <
                            (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar34,
                                             SUB84(dVar11,0) & uVar68));
                      auVar83._0_8_ =
                           -(ulonglong)
                            (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar88 >> 0x20) & uVar64,
                                                       SUB84(dVar88,0) & uVar62));
                      uVar57 = movmskpd(0,auVar83);
                      lVar73 = -(ulonglong)
                                (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                                           uVar34,SUB84(dVar13,0) & uVar68));
                      auVar15._8_4_ = (int)lVar73;
                      auVar15._0_8_ =
                           -(ulonglong)
                            (dVar17 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar64,
                                                       SUB84(dVar12,0) & uVar62));
                      auVar15._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
                      iVar43 = movmskpd(uVar55,auVar15);
                      if ((uVar57 & 0x3fffffff) == 0 && iVar43 == 0) goto LAB_1438b47e7;
                    }
LAB_1438b4740:
                    pTVar54 = (TAABB<double,3> *)
                              (**(code **)(*(longlong *)pFVar63[1]._padding_ + 0x90))
                                        ((longlong *)pFVar63[1]._padding_,local_290);
                    pTVar54 = TAABB<double,3>::TransformedAABB
                                        (pTVar54,&local_260,(TRigidTransform<double,3> *)&local_1d8)
                    ;
                    bVar40 = true;
                    uVar22 = (pTVar54->MMin).field_0x4;
                    uVar23 = (pTVar54->MMin).field_0x5;
                    uVar24 = (pTVar54->MMin).field_0x6;
                    uVar25 = (pTVar54->MMin).field_0x7;
                    uVar26 = (pTVar54->MMin).field_0x8;
                    uVar27 = (pTVar54->MMin).field_0x9;
                    uVar28 = (pTVar54->MMin).field_0xa;
                    uVar29 = (pTVar54->MMin).field_0xb;
                    uVar30 = (pTVar54->MMin).field_0xc;
                    uVar31 = (pTVar54->MMin).field_0xd;
                    uVar32 = (pTVar54->MMin).field_0xe;
                    uVar33 = (pTVar54->MMin).field_0xf;
                    pFVar63[4].Margin = (float)*(undefined4 *)&(pTVar54->MMin).field_0x0;
                    pFVar63[4].bIsConvex = (bool)uVar22;
                    pFVar63[4].bDoCollide = (bool)uVar23;
                    pFVar63[4].bHasBoundingBox = (bool)uVar24;
                    pFVar63[4].bIsTracked = (bool)uVar25;
                    pFVar63[4].Type = uVar26;
                    pFVar63[4].CollisionType = uVar27;
                    pFVar63[4].Pad[0] = uVar28;
                    pFVar63[4].Pad[1] = uVar29;
                    pFVar63[4].Pad[2] = uVar30;
                    pFVar63[4].Pad[3] = uVar31;
                    pFVar63[4].Pad[4] = uVar32;
                    pFVar63[4].Pad[5] = uVar33;
                    pFVar63[5]._padding_ = *(longlong *)&(pTVar54->MMin).field_0x10;
                    uVar84 = *(undefined4 *)&(pTVar54->MMax).field_0x8;
                    uVar22 = (pTVar54->MMax).field_0xc;
                    uVar23 = (pTVar54->MMax).field_0xd;
                    uVar24 = (pTVar54->MMax).field_0xe;
                    uVar25 = (pTVar54->MMax).field_0xf;
                    pFVar63[5]._padding_ = *(longlong *)&pTVar54->MMax;
                    pFVar63[5].Margin = (float)uVar84;
                    pFVar63[5].bIsConvex = (bool)uVar22;
                    pFVar63[5].bDoCollide = (bool)uVar23;
                    pFVar63[5].bHasBoundingBox = (bool)uVar24;
                    pFVar63[5].bIsTracked = (bool)uVar25;
                    uVar22 = (pTVar54->MMax).field_0x11;
                    uVar23 = (pTVar54->MMax).field_0x12;
                    uVar24 = (pTVar54->MMax).field_0x13;
                    uVar25 = (pTVar54->MMax).field_0x14;
                    uVar26 = (pTVar54->MMax).field_0x15;
                    uVar27 = (pTVar54->MMax).field_0x16;
                    uVar28 = (pTVar54->MMax).field_0x17;
                    pFVar63[5].Type = (pTVar54->MMax).field_0x10;
                    pFVar63[5].CollisionType = uVar22;
                    pFVar63[5].Pad[0] = uVar23;
                    pFVar63[5].Pad[1] = uVar24;
                    pFVar63[5].Pad[2] = uVar25;
                    pFVar63[5].Pad[3] = uVar26;
                    pFVar63[5].Pad[4] = uVar27;
                    pFVar63[5].Pad[5] = uVar28;
                    *(double *)&pFVar63[1].Margin = local_1d8;
                    *(double *)&pFVar63[1].Type = dStack_1d0;
                    pFVar63[2]._padding_ = (longlong)local_1c8;
                    pFVar63[2]._padding_ = (longlong)dStack_1c0;
                    *(double *)&pFVar63[2].Margin = local_1b8;
                    *(double *)&pFVar63[2].Type = dStack_1b0;
                    pFVar63[3]._padding_ = (longlong)local_1a8;
                    pFVar63[3]._padding_ = (longlong)dStack_1a0;
                    *(double *)&pFVar63[3].Margin = local_198;
                    *(double *)&pFVar63[3].Type = dStack_190;
                    pFVar63[4]._padding_ = (longlong)local_188;
                    pFVar63[4]._padding_ = (longlong)dStack_180;
                  }
                }
LAB_1438b47e7:
                FVar49 = local_3b0;
                local_384 = (param_1->ClusterUnionParameters).ComponentId;
                local_380 = (param_1->ClusterUnionParameters).ActorId;
                uVar55 = 0;
                if ((int)uVar65 < *(int *)((longlong)local_3b0 + 0x10)) {
                  uVar55 = ~uVar65 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar42)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FVar60 = FVar49;
                if (*(FName *)((longlong)FVar49 + 8) != (FName)0x0) {
                  FVar60 = *(FName *)((longlong)FVar49 + 8);
                }
                TransferClusterUnionShapeData<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *
                           )((longlong)FVar60 + (longlong)local_3a0 * 8),pTVar8,
                           (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *
                           )local_330,local_380,local_384);
                pTVar48 = local_3a8;
              }
            }
            goto LAB_1438b4871;
          }
          pFVar67 = pFVar67 + 8;
        } while (pFVar67 != pFVar9 + (longlong)(param_1->ChildParticles).ArrayNum * 8);
        pFVar61 = pFVar61 + 8;
        uVar69 = (ulonglong)local_398;
      }
    }
    param_1->bGeometryModified = true;
    local_3b8[0] = Refresh;
    if (*(int *)&(param_1->PendingGeometryOperations).field_0x8 !=
        *(int *)&(param_1->PendingGeometryOperations).field_0x34) {
      TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_Chaos::EClusterUnionGeometryOperation>
                (&param_1->PendingGeometryOperations,2,local_3b8);
    }
    if (bVar40) {
      pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster;
      local_2c8._16_8_ = 0;
      local_2c8._0_8_ = 0;
      local_2c8._8_8_ = 0;
      uVar62 = *(uint *)&pTVar8->field_0x8;
      lVar71 = (longlong)(int)uVar62;
      lVar73 = *(longlong *)pTVar8;
      uVar64 = 0;
      if ((int)uVar62 < *(int *)(lVar73 + 0x568)) {
        uVar64 = ~uVar62 >> 0x1f;
      }
      if ((uVar64 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar73 = *(longlong *)(lVar73 + 0x560);
      uVar5 = *(undefined8 *)(lVar73 + 8 + lVar71 * 0x10);
      fVar4 = *(float *)(lVar73 + lVar71 * 0x10);
      dVar88 = (double)*(float *)(lVar73 + 4 + lVar71 * 0x10);
      dVar17 = (double)(float)((ulonglong)uVar5 >> 0x20);
      pTVar50 = TPBDRigidParticleHandleImp<double,3,1>::GetP(pTVar8);
      local_108._8_4_ = SUB84(dVar17,0);
      local_108._0_8_ = (double)(float)uVar5;
      local_108._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_118._8_4_ = SUB84(dVar88,0);
      local_118._0_8_ = (double)fVar4;
      local_118._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
      local_e8 = *(undefined8 *)&pTVar50->field_0x10;
      local_f8 = *(undefined8 *)pTVar50;
      uStack_f0 = *(undefined8 *)&pTVar50->field_0x8;
      uStack_e0 = 0;
      local_d8 = uVar37;
      uStack_d0 = uVar38;
      local_c8 = uVar35;
      uStack_c0 = uVar36;
      TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                (*(TGeometryParticlesImp<double,3,0> **)pTVar8,*(int *)&pTVar8->field_0x8,
                 (TRigidTransform<double,3> *)local_118,&local_2c8);
    }
  }
  pFVar72 = local_390;
  if (((local_390->Flags).Bits & 1) == 0) {
    FImplicitObjectUnion::CheckNotLocked(local_390);
    pFVar2 = &pFVar72->Flags;
    pFVar2->Bits = pFVar2->Bits | 1;
    FImplicitObjectUnion::RebuildBVH(pFVar72);
  }
LAB_1438b4a04:
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar39) {
    FThreadStats::AddMessage(FVar60,CycleScopeEnd);
  }
  return;
}

// FlushPendingOperations @ 1438b4a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FClusterUnionManager::FlushPendingOperations(FClusterUnionManager *this)

{
  undefined1 *puVar1;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  FRewindData *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TStatId TVar9;
  byte bVar10;
  longlong lVar11;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *pTVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int *piVar20;
  uint *puVar21;
  int *piVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_258;
  undefined1 local_254 [4];
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_250;
  undefined8 uStack_248;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  uint uStack_238;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  undefined4 uStack_224;
  FCycleCounter local_220;
  uint local_210;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  FKeyComparisonClass<_public:_void___cdecl_Chaos::FClusterUnionManager::FlushPendingOperations(void)_::_20_::<lambda_1>_>
  local_178;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FSourceLocation local_d8 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  TVar9 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_FlushPendingOperations,1>::GetStatId
                    ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_FlushPendingOperations,1> *)
                     &StatPtr_STAT_FlushPendingOperations);
  local_d8[0].Impl._Line = 0x1a5;
  local_d8[0].Impl._Column = 3;
  local_d8[0].Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
  ;
  local_d8[0].Impl._Function =
       "void __cdecl Chaos::FClusterUnionManager::FlushPendingOperations(void)";
  local_220.StatId.ComparisonIndex.Value = 0;
  local_220.StatId.Number = 0;
  local_220.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_220,*(TStatIdData **)&(TVar9.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             local_d8);
  if (*(int *)&(this->PendingExplicitIndexOperations).field_0x8 !=
      *(int *)&(this->PendingExplicitIndexOperations).field_0x34) {
    puVar1 = &(this->PendingExplicitIndexOperations).field_0x10;
    local_1b0._padding_._0_4_ = 0;
    pTVar2 = &this->PendingExplicitIndexOperations;
    local_1b0._padding_._4_4_ = 1;
    local_1b0.UnvisitedBitMask = 0xffffffff;
    local_1b0.CurrentBitIndex = 0;
    local_1b0.BaseBitIndex = 0;
    local_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(this->PendingExplicitIndexOperations).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
    }
    uVar8 = *(uint *)&(this->PendingExplicitIndexOperations).field_0x28;
    TStack_1f8._padding_ = CONCAT44(local_1b0._padding_._4_4_,(undefined4)local_1b0._padding_);
    bVar10 = (byte)uVar8 & 0x1f;
    TStack_1f8.CurrentBitIndex = local_1b0.CurrentBitIndex;
    TStack_1f8.UnvisitedBitMask = local_1b0.UnvisitedBitMask;
    TStack_1f8._28_4_ = local_1b0._28_4_;
    TStack_1f8.BaseBitIndex = local_1b0.BaseBitIndex;
    local_1d8 = CONCAT44(local_1d8._4_4_,
                         *(int *)&(this->PendingExplicitIndexOperations).field_0x8 -
                         *(int *)&(this->PendingExplicitIndexOperations).field_0x34);
    local_1d0._padding_._0_4_ = (int)uVar8 >> 5;
    local_1d0._padding_._4_4_ = 1 << bVar10;
    local_1d0.UnvisitedBitMask = -1 << bVar10;
    TStack_1f8.Array = local_1b0.Array;
    local_1d0.BaseBitIndex = uVar8 & 0xffffffe0;
    TStack_138.Array = local_1b0.Array;
    uStack_118 = local_1d8;
    local_200 = pTVar2;
    local_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_1d0.CurrentBitIndex = uVar8;
    local_140 = pTVar2;
    TStack_138._padding_ = TStack_1f8._padding_;
    TStack_138._16_8_ = TStack_1f8._16_8_;
    TStack_138._24_8_ = TStack_1f8._24_8_;
    if (((int)uVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar8 != *(uint *)&(this->PendingExplicitIndexOperations).field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d0);
    }
    uStack_248 = CONCAT44(local_1d0._padding_._4_4_,(int)local_1d0._padding_);
    iStack_234 = local_1d0.CurrentBitIndex;
    uStack_238 = local_1d0.UnvisitedBitMask;
    uStack_22c = local_1d0._28_4_;
    iStack_230 = local_1d0.BaseBitIndex;
    pTStack_240 = local_1d0.Array;
    local_208 = local_1d0.Array;
    local_210 = local_1d0.CurrentBitIndex;
    while( true ) {
      pTVar2 = local_140;
      uVar8 = local_210;
      iVar15 = 0;
      pTVar12 = &this->PendingExplicitIndexOperations;
      if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_138.CurrentBitIndex == uVar8) && (TStack_138.Array == local_208)) &&
         (pTVar2 == pTVar12)) break;
      piVar22 = (int *)((longlong)TStack_138.CurrentBitIndex * 0x60 + *(longlong *)pTVar2);
      iVar7 = GetOrCreateClusterUnionIndexFromExplicitIndex(this,*piVar22);
      iVar17 = piVar22[0xc];
      pTVar2 = (TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                *)(piVar22 + 2);
      pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar22 + 6);
      iStack_230 = 0;
      uVar8 = 1;
      iStack_234 = 0;
      if (iVar17 != 0) {
        pTVar19 = pTVar3;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10);
        }
        uVar13 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar15;
          iStack_230 = iStack_230 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_234 = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1438b4d0d;
          uVar13 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar8 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_190 = (int)lVar11;
        iStack_234 = iStack_230 + -1 + local_190;
        if (iVar17 < iStack_234) {
          iStack_234 = iVar17;
        }
      }
LAB_1438b4d0d:
      local_228 = piVar22[4] - piVar22[0xf];
      uVar13 = piVar22[0xc];
      uStack_248 = CONCAT44(uVar8,iVar15);
      uVar8 = uVar13 & 0xffffffe0;
      uStack_238 = 0xffffffff;
      uStack_22c = local_94;
      TStack_168._padding_ = uStack_248;
      iVar15 = (int)uVar13 >> 5;
      uStack_148 = CONCAT44(uStack_224,local_228);
      TStack_168.UnvisitedBitMask = 0xffffffff;
      TStack_168.CurrentBitIndex = iStack_234;
      TStack_168.BaseBitIndex = iStack_230;
      TStack_168._28_4_ = local_94;
      local_250 = pTVar2;
      pTStack_240 = pTVar3;
      local_170 = pTVar2;
      TStack_168.Array = pTVar3;
      if ((((int)uVar13 < 0) || (iVar17 < (int)uVar13)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = piVar22[0xc];
      if (uVar13 != uVar14) {
        pTVar19 = pTVar3;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10);
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar15;
          uVar8 = uVar8 + 0x20;
          iVar15 = iVar15 + 1;
          uVar13 = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_1438b4e21;
          uVar13 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_18c = (int)lVar11;
        uVar13 = (uVar8 - 1) + local_18c;
        if ((int)uVar14 < (int)uVar13) {
          uVar13 = uVar14;
        }
      }
LAB_1438b4e21:
      while( true ) {
        pTVar12 = local_170;
        if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_168.CurrentBitIndex == uVar13) && (TStack_168.Array == pTVar3)) &&
           (pTVar12 == pTVar2)) break;
        lVar11 = *(longlong *)pTVar12;
        AddPendingClusterIndexOperation
                  (this,iVar7,
                   *(EClusterUnionOperation *)((longlong)TStack_168.CurrentBitIndex * 0x20 + lVar11)
                   ,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(lVar11 + 8 + (longlong)TStack_168.CurrentBitIndex * 0x20));
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      }
      TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    }
    bVar6 = 1 < *(int *)&(this->PendingExplicitIndexOperations).field_0x48;
    if (!bVar6) {
      TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar12);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(pTVar12,0,*(int *)&(this->PendingExplicitIndexOperations).field_0x8);
    *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x8 = 0;
    if (*(int *)&(this->PendingExplicitIndexOperations).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)pTVar12,0,
                 (int *)&(this->PendingExplicitIndexOperations).field_0xc);
    }
    *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x34 = 0;
    iVar15 = *(int *)&(this->PendingExplicitIndexOperations).field_0x2c;
    *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x28 = 0;
    if ((iVar15 < 0) || (0x80 < iVar15)) {
      *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingExplicitIndexOperations).field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x48 = 1;
      TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::Rehash(pTVar12);
    }
  }
  iVar15 = *(int *)&(this->PendingClusterIndexOperations).field_0x34;
  iVar17 = *(int *)&(this->PendingClusterIndexOperations).field_0x8;
  if (iVar17 != iVar15) {
    iVar7 = *(int *)&(this->PendingClusterIndexOperations).field_0x28;
    puVar1 = &(this->PendingClusterIndexOperations).field_0x10;
    iVar16 = 0;
    local_250 = &this->PendingClusterIndexOperations;
    iStack_230 = 0;
    uVar8 = 1;
    iStack_234 = 0;
    if (iVar7 != 0) {
      puVar21 = *(uint **)&(this->PendingClusterIndexOperations).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar13 = *puVar21;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar16;
        iStack_230 = iStack_230 + 0x20;
        iVar16 = iVar16 + 1;
        iStack_234 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1438b4fd0;
        uVar13 = puVar21[lVar11 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_188 = (int)lVar11;
      iStack_234 = iStack_230 + -1 + local_188;
      if (iVar7 < iStack_234) {
        iStack_234 = iVar7;
      }
    }
LAB_1438b4fd0:
    local_228 = iVar17 - iVar15;
    local_258 = *(uint *)&(this->PendingClusterIndexOperations).field_0x28;
    uStack_248 = CONCAT44(uVar8,iVar16);
    uVar8 = local_258 & 0xffffffe0;
    uStack_238 = 0xffffffff;
    TStack_1f8._padding_ = uStack_248;
    uStack_22c = local_74;
    local_1d8 = CONCAT44(uStack_224,local_228);
    iVar15 = (int)local_258 >> 5;
    TStack_1f8.BaseBitIndex = iStack_230;
    TStack_1f8._28_4_ = local_74;
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    TStack_1f8.CurrentBitIndex = iStack_234;
    pTStack_240 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_200 = local_250;
    TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_258 < 0) || (iVar7 < (int)local_258)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = *(uint *)&(this->PendingClusterIndexOperations).field_0x28;
    if (local_258 != uVar13) {
      puVar18 = *(undefined1 **)&(this->PendingClusterIndexOperations).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar14 = -1 << ((byte)local_258 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        uVar8 = uVar8 + 0x20;
        iVar15 = iVar15 + 1;
        local_258 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1438b50f0;
        uVar14 = *(uint *)(puVar18 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_184 = (int)lVar11;
      local_258 = local_184 + -1 + uVar8;
      if ((int)uVar13 < (int)local_258) {
        local_258 = uVar13;
      }
    }
LAB_1438b50f0:
    while( true ) {
      pTVar2 = local_200;
      pTVar12 = &this->PendingClusterIndexOperations;
      if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)local_1d8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_1f8.CurrentBitIndex == local_258) &&
          (TStack_1f8.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingClusterIndexOperations).field_0x10
          )) && (pTVar2 == pTVar12)) break;
      local_178.Predicate.Predicate =
           (TDereferenceWrapper<Chaos::EClusterUnionOperation,_public:_void___cdecl_Chaos::FClusterUnionManager::FlushPendingOperations(void)_::_20_::<lambda_1>_>
            )local_254;
      piVar22 = (int *)((longlong)TStack_1f8.CurrentBitIndex * 0x60 + *(longlong *)pTVar2);
      pTVar2 = (TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                *)(piVar22 + 2);
      TSet<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      StableSort<TSortableMapBase<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<_Chaos::FClusterUnionManager::FlushPendingOperations_::__l20::<lambda_1>_>_>
                (pTVar2,&local_178);
      iVar15 = piVar22[0xc];
      pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar22 + 6);
      iVar17 = 0;
      iStack_230 = 0;
      uVar8 = 1;
      iStack_234 = 0;
      if (iVar15 != 0) {
        pTVar19 = pTVar3;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10);
        }
        uVar13 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar17;
          iStack_230 = iStack_230 + 0x20;
          iVar17 = iVar17 + 1;
          iStack_234 = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1438b51cd;
          uVar13 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar8 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_180 = (int)lVar11;
        iStack_234 = local_180 + -1 + iStack_230;
        if (iVar15 < iStack_234) {
          iStack_234 = iVar15;
        }
      }
LAB_1438b51cd:
      uVar13 = piVar22[0xc];
      local_228 = piVar22[4] - piVar22[0xf];
      uVar14 = uVar13 & 0xffffffe0;
      uStack_248 = CONCAT44(uVar8,iVar17);
      uStack_238 = 0xffffffff;
      uStack_22c = local_54;
      TStack_108._padding_ = uStack_248;
      iVar17 = (int)uVar13 >> 5;
      uStack_e8 = CONCAT44(uStack_224,local_228);
      TStack_108.UnvisitedBitMask = 0xffffffff;
      TStack_108.CurrentBitIndex = iStack_234;
      TStack_108.BaseBitIndex = iStack_230;
      TStack_108._28_4_ = local_54;
      local_250 = pTVar2;
      pTStack_240 = pTVar3;
      local_110 = pTVar2;
      TStack_108.Array = pTVar3;
      if ((((int)uVar13 < 0) || (iVar15 < (int)uVar13)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = piVar22[0xc];
      if (uVar13 != uVar8) {
        pTVar19 = pTVar3;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar22 + 10);
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar17;
          uVar14 = uVar14 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_1438b52ed;
          uVar13 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_17c = (int)lVar11;
        uVar13 = (uVar14 - 1) + local_17c;
        if ((int)uVar8 < (int)uVar13) {
          uVar13 = uVar8;
        }
      }
LAB_1438b52ed:
      while( true ) {
        pTVar2 = local_110;
        if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_108.CurrentBitIndex == uVar13) && (TStack_108.Array == pTVar3)) &&
           (pTVar2 == (TMap<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                       *)(piVar22 + 2))) break;
        piVar20 = (int *)((longlong)TStack_108.CurrentBitIndex * 0x20 + *(longlong *)pTVar2);
        iVar15 = *piVar20;
        if ((iVar15 == 0) || (iVar15 == 1)) {
          HandleAddOperation(this,*piVar22,
                             (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                              *)(piVar20 + 2),iVar15 == 1);
        }
        else if (iVar15 == 2) {
          HandleRemoveOperation
                    (this,*piVar22,
                     (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(piVar20 + 2),Defer);
        }
        else if (iVar15 == 3) {
          HandleUpdateChildToParentOperation
                    (this,*piVar22,
                     (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(piVar20 + 2));
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
    bVar6 = 1 < *(int *)&(this->PendingClusterIndexOperations).field_0x48;
    if (!bVar6) {
      TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar12);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(pTVar12,0,*(int *)&(this->PendingClusterIndexOperations).field_0x8);
    puVar1 = &(this->PendingClusterIndexOperations).field_0xc;
    *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)pTVar12,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x34 = 0;
    iVar15 = *(int *)&(this->PendingClusterIndexOperations).field_0x2c;
    *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x28 = 0;
    if ((iVar15 < 0) || (0x80 < iVar15)) {
      *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingClusterIndexOperations).field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x48 = 1;
      TSet<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::Rehash(pTVar12);
    }
    this_00 = (FRewindData *)this->MEvolution->_padding_;
    if (this_00 != (FRewindData *)0x0) {
      FRewindData::BlockResim(this_00);
    }
  }
  HandleDeferredClusterUnionUpdateProperties(this);
  if ((local_220.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_220.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_220.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_220.StatId,CycleScopeEnd);
  }
  return;
}

// ForceRecreateClusterUnionGeometry @ 1438b5510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FClusterUnionManager::ForceRecreateClusterUnionGeometry
          (FClusterUnionManager *this,FClusterUnion *param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRecreateClusterUnionSharedGeometry> FVar20;
  TRefCountPtr<Chaos::FImplicitObject> TVar21;
  TVector<double,3> *pTVar22;
  FImplicitObjectUnion *this_00;
  FImplicitObjectUnion *this_01;
  FImplicitObjectUnionClustered *pFVar23;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar24;
  FName FVar25;
  longlong lVar26;
  longlong *in_R8;
  undefined8 *puVar27;
  undefined1 auStackY_218 [32];
  undefined1 local_1b7 [7];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_1b0;
  FColor_u_0 local_1a0 [2];
  TImplicitObjectTransformed<double,3,1> *local_198;
  FName local_190;
  undefined8 *local_188;
  FName local_180;
  FName local_178;
  FClusterUnion *local_168;
  LARGE_INTEGER local_160;
  FStatMessage local_158;
  FName local_148 [2];
  TTransform<double> local_138;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_01 = (FImplicitObjectUnion *)0x0;
  FVar20 = StatPtr_STAT_ForceRecreateClusterUnionSharedGeometry;
  local_168 = param_1;
  if (StatPtr_STAT_ForceRecreateClusterUnionSharedGeometry ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRecreateClusterUnionSharedGeometry>)0x0) {
    pFVar19 = ::FName::FName(local_148,"STAT_ForceRecreateClusterUnionSharedGeometry");
    FVar20 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRecreateClusterUnionSharedGeometry>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ForceRecreateClusterUnionSharedGeometry,*pFVar19,
                        L"FClusterUnionManager::ForceRecreateClusterUnionSharedGeometry",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar25 = *(FName *)FVar20;
  bVar11 = false;
  bVar13 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) ||
     (bVar12 = bVar11, bVar14 = bVar13, FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar13 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_180.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x16a);
        bVar11 = true;
        bVar13 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    bVar12 = bVar11;
    bVar14 = bVar13;
    if (FThreadStats::bPrimaryEnable != false) {
      local_190 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar16 = true;
      goto LAB_1438b567a;
    }
  }
  bVar13 = bVar17;
  bVar11 = bVar16;
  bVar16 = false;
  local_190 = local_178;
  FVar25 = local_178;
LAB_1438b567a:
  if (((int)in_R8[3] == 0) || (plVar5 = (longlong *)*in_R8, plVar5 == (longlong *)0x0)) {
    pFVar23 = ::operator_new(0xd0);
    if (pFVar23 == (FImplicitObjectUnionClustered *)0x0) {
      param_1->InternalCluster = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      pFVar23 = FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(pFVar23);
      param_1->InternalCluster = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pFVar23;
      if (pFVar23 != (FImplicitObjectUnionClustered *)0x0) {
        LOCK();
        *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
        UNLOCK();
      }
    }
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar16) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
        local_158.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
        local_158.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_160);
        local_158.StatData.Pad[4] = '\0';
        local_158.StatData.Pad[5] = '\0';
        local_158.StatData.Pad[6] = '\0';
        local_158.StatData.Pad[7] = '\0';
        local_158.StatData.Pad[0] = local_160.s.LowPart._0_1_;
        local_158.StatData.Pad[1] = local_160.s.LowPart._1_1_;
        local_158.StatData.Pad[2] = local_160.s.LowPart._2_1_;
        local_158.StatData.Pad[3] = local_160.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_02,&local_158);
        piVar1 = &this_02->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_02,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
    }
  }
  else {
    uVar4 = *(uint *)(plVar5 + 1);
    lVar26 = (longlong)(int)uVar4;
    lVar6 = *plVar5;
    uVar24 = 0;
    if ((int)uVar4 < *(int *)(lVar6 + 0x50)) {
      uVar24 = ~uVar4 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar8)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    lVar6 = *(longlong *)(lVar6 + 0x48);
    fVar2 = *(float *)(lVar6 + lVar26 * 0x10);
    uVar3 = *(undefined8 *)(lVar6 + 8 + lVar26 * 0x10);
    dVar9 = (double)(float)((ulonglong)uVar3 >> 0x20);
    dVar10 = (double)*(float *)(lVar6 + 4 + lVar26 * 0x10);
    pTVar22 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)*in_R8,*(int *)((undefined8 *)*in_R8 + 1));
    uVar4 = *(uint *)(in_R8 + 3);
    local_d8._8_4_ = SUB84(dVar10,0);
    local_d8._0_8_ = (double)fVar2;
    local_d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_c8._8_4_ = SUB84(dVar9,0);
    local_c8._0_8_ = (double)(float)uVar3;
    local_c8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_a8 = *(undefined8 *)&pTVar22->field_0x10;
    local_b8 = *(undefined8 *)pTVar22;
    uStack_b0 = *(undefined8 *)&pTVar22->field_0x8;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_a0 = 0;
    local_88 = ___xmm_00000000000000003ff0000000000000;
    uStack_80 = _UNK_150689518;
    local_98 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_90 = _UNK_150689688;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&local_1b0.AllocatorInstance,0,&local_1b0.ArrayMax);
    }
    puVar27 = (undefined8 *)in_R8[2];
    lVar6 = in_R8[3];
    local_188 = puVar27 + (int)lVar6;
    while( true ) {
      puVar15 = local_188;
      if ((int)in_R8[3] != (int)lVar6) {
        local_1b7[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1b7);
      }
      if (puVar27 == puVar15) break;
      pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)*puVar27;
      Chaos::`anonymous_namespace'::GetParticleRigidFrameInClusterUnion
                ((TRigidTransform<double,3> *)&local_138,pTVar7,
                 (TRigidTransform<double,3> *)local_d8);
      uVar4 = *(uint *)&pTVar7->field_0x8;
      lVar26 = *(longlong *)pTVar7;
      uVar24 = 0;
      if ((int)uVar4 < *(int *)(lVar26 + 0x68)) {
        uVar24 = ~uVar4 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        TVar21.Reference = (FImplicitObject *)(*pcVar8)();
        return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
      }
      if (*(longlong *)(*(longlong *)(lVar26 + 0x60) + (longlong)(int)uVar4 * 8) != 0) {
        local_198 = CreateTransformGeometryForClusterUnion<1>(pTVar7,&local_138);
        if (local_198 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
          LOCK();
          *(int *)&local_198->_padding_ = (int)local_198->_padding_ + 1;
          UNLOCK();
        }
        if (((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_198) &&
            ((FScriptContainerElement *)&local_198 <
             local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          TVar21.Reference = (FImplicitObject *)(*pcVar8)();
          return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
        }
        iVar18 = local_1b0.ArrayNum;
        if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
        }
        local_1b0.ArrayNum = iVar18 + 1;
        *(undefined8 *)(local_1b0.AllocatorInstance.Data + (longlong)iVar18 * 8) = 0;
        *(TImplicitObjectTransformed<double,3,1> **)
         (local_1b0.AllocatorInstance.Data + (longlong)iVar18 * 8) = local_198;
        local_198 = (TImplicitObjectTransformed<double,3,1> *)0x0;
      }
      puVar27 = puVar27 + 1;
    }
    this_00 = ::operator_new(0x70);
    if (this_00 != (FImplicitObjectUnion *)0x0) {
      this_01 = FImplicitObjectUnion::FImplicitObjectUnion(this_00,&local_1b0);
    }
    FVar25 = local_190;
    if (((this_01->Flags).Bits & 1) == 0) {
      FImplicitObjectUnion::CheckNotLocked(this_01);
      (this_01->Flags).Bits = (this_01->Flags).Bits | 1;
      FImplicitObjectUnion::RebuildBVH(this_01);
    }
    param_1 = local_168;
    local_168->InternalCluster = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_01;
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_1b0.AllocatorInstance.Data,
               local_1b0.ArrayNum);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    if (bVar13) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar16) {
      FThreadStats::AddMessage(FVar25,CycleScopeEnd);
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// ForceRegenerateGeometry @ 1438b5b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::ForceRegenerateGeometry
          (FClusterUnionManager *this,FClusterUnion *param_1,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_2)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int *piVar4;
  TMap<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar5;
  FPBDRigidsEvolutionGBF *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *_Src;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRegenerateGeometry> FVar15;
  FImplicitObjectUnionClustered *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  <lambda_1> local_58;
  
  FVar15 = StatPtr_STAT_ForceRegenerateGeometry;
  if (StatPtr_STAT_ForceRegenerateGeometry ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRegenerateGeometry>)0x0) {
    pFVar14 = ::FName::FName(&local_res10,"STAT_ForceRegenerateGeometry");
    FVar15 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ForceRegenerateGeometry>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceRegenerateGeometry,*pFVar14,
                        L"FClusterUnionManager::ForceRegenerateGeometry","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar11 = false;
  bVar13 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x484);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar17.Value;
      local_res8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar12 = true;
      goto LAB_1438b5c61;
    }
  }
  bVar12 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_1438b5c61:
  pFVar6 = this->MEvolution;
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster;
  Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
            ((FPBDIslandManager *)&pFVar6->_padding_,pTVar7);
  (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,pTVar7);
  pTVar8 = param_1->InternalCluster;
  this_01 = ::operator_new(0xd0);
  if (this_01 == (FImplicitObjectUnionClustered *)0x0) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
  }
  else {
    local_res10 = (FName)FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(this_01);
    if (local_res10 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + 1;
      UNLOCK();
    }
  }
  plVar9 = *(longlong **)pTVar8;
  (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined4 *)&pTVar8->field_0x8,&local_res10);
  if (local_res10 != (FName)0x0) {
    LOCK();
    plVar9 = (longlong *)((longlong)local_res10 + 8);
    iVar5 = *(int *)plVar9;
    *(int *)plVar9 = *(int *)plVar9 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (*(int *)((longlong)local_res10 + 0xc) == 0)) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
  }
  pTVar1 = &param_1->ChildParticles;
  local_58.__this = this;
  local_58.ClusterUnion = param_1;
  local_58.FullChildrenSet = param_2;
  ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticleHandleImp<double,3,1>,_Chaos::FClusterUnionManager::ForceRegenerateGeometry_::__l2::<lambda_1>_>
            (param_1->InternalCluster,pTVar1,(param_1->ClusterUnionParameters).ActorId,
             (param_1->ClusterUnionParameters).ComponentId,&local_58);
  pTVar2 = &param_1->GeometryChildParticles;
  if (pTVar2 != pTVar1) {
    iVar5 = (param_1->ChildParticles).ArrayNum;
    piVar4 = &(param_1->GeometryChildParticles).ArrayMax;
    _Src = (pTVar1->AllocatorInstance).Data;
    (param_1->GeometryChildParticles).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar4,&pTVar2->AllocatorInstance,iVar5,piVar4);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
      }
    }
  }
  param_1->bGeometryModified = true;
  this_00 = &param_1->PendingGeometryOperations;
  bVar10 = 1 < *(int *)&(param_1->PendingGeometryOperations).field_0x48;
  if (!bVar10) {
    TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(param_1->PendingGeometryOperations).field_0x8);
  puVar3 = &(param_1->PendingGeometryOperations).field_0xc;
  *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x34 = 0;
  iVar5 = *(int *)&(param_1->PendingGeometryOperations).field_0x2c;
  *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(param_1->PendingGeometryOperations).field_0x10,0);
  }
  if (bVar10) {
    *(undefined4 *)&(param_1->PendingGeometryOperations).field_0x48 = 1;
    TSet<TTuple<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_58.ClusterUnion =
           (FClusterUnion *)((ulonglong)FVar18 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_58.__this = (FClusterUnionManager *)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_02,(FStatMessage *)&local_58);
      piVar4 = &this_02->ScopeCount;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// GenerateInterclusterEdgesBetweenParticles @ 1438b8ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::GenerateInterclusterEdgesBetweenParticles
          (FClusterUnionManager *this,FClusterUnion *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2,
          TPBDRigidParticleHandleImp<double,3,1> *param_3)

{
  int *piVar1;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesBetweenParticles> FVar9;
  FClusterUnionParticleProperties *pFVar10;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar11;
  ulonglong uVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  FNameEntryId FVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  uint uVar19;
  uint uVar20;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar21;
  uint uVar22;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ForElementType<unsigned_int> FVar27;
  undefined1 auStackY_258 [32];
  FColor_u_0 local_1f8;
  uint uStack_1f4;
  uint local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1d0;
  LARGE_INTEGER local_1c0 [2];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1b0;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  FName local_178;
  undefined1 local_168 [56];
  double dStack_130;
  double local_128;
  undefined2 local_120;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_118;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FVar16.Value = 0;
  FVar9 = StatPtr_STAT_GenerateInterclusterEdgesBetweenParticles;
  local_1c0[0] = (LARGE_INTEGER)this;
  if (StatPtr_STAT_GenerateInterclusterEdgesBetweenParticles ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesBetweenParticles>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_1d0,"STAT_GenerateInterclusterEdgesBetweenParticles");
    FVar9 = (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesBetweenParticles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_GenerateInterclusterEdgesBetweenParticles,*pFVar8,
                       L"FClusterUnionManager::GenerateInterclusterEdgesBetweenParticles",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar18 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar19 = FVar18.Number;
  if ((FVar17.Bits == 0) && (uVar19 == 0)) {
LAB_1438b9021:
    bVar5 = false;
    FVar18 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.Bits = FVar17.Bits;
        uStack_1f4 = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1f8._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x448);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1438b9021;
    local_1f8.Bits = FVar17.Bits;
    uStack_1f4 = uVar19;
    local_178 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_178.ComparisonIndex.Value;
  }
  if ((((param_2 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
       (param_3 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) ||
      (pFVar10 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                 ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                         *)&param_1->ChildProperties,param_2), LVar7 = local_1c0[0],
      pFVar10 == (FClusterUnionParticleProperties *)0x0)) ||
     ((bChaosClusterUnionGenerateInterclusterEdges == false ||
      ((bFixPartialDestruction == false && (pFVar10->bIsAuxiliaryParticle != 0))))))
  goto LAB_1438b9904;
  pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_2->field_0xc) {
    pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_2;
  }
  TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  ::FindRef((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
             *)(*(longlong *)local_1c0[0] + 200),&local_1b0,pTVar23);
  pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_3->field_0xc) {
    pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_3;
  }
  TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  ::FindRef((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
             *)(*(longlong *)LVar7 + 200),
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            &local_1c0[0].s,pTVar23);
  pTVar11 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
            TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                      (&local_118,&local_1b0);
  uVar15 = 0;
  ppTVar21 = pTVar11->DataPtr;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  uVar19 = (uint)*(undefined8 *)&pTVar11->ArrayNum;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (uVar19 != 0) {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8,uVar19);
    uVar20 = 1;
    if (3 < uVar19) {
      uVar24 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar20 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_70 == 0) || ((int)local_70 < (int)uVar20)) {
      local_70 = uVar20;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar20 != 0) {
        uVar22 = uVar20;
        if (uVar20 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar22 = 0;
            goto LAB_1438b91ac;
          }
        }
        else {
LAB_1438b91ac:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar22,4)
          ;
        }
        if (0 < (int)uVar20) {
          uVar25 = (ulonglong)uVar20;
          uVar24 = uVar15;
          do {
            FVar14.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_78.Data;
            }
            uVar12 = uVar24 & (longlong)(int)uVar20 - 1U;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (local_70 != 0) {
        pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        local_1f0 = 0;
        uStack_1ec = 1;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        uVar24 = uVar15;
        if (local_90 != 0) {
          FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_98;
          }
          uVar20 = *(uint *)FVar27;
          uVar25 = uVar15;
          while (uVar20 == 0) {
            uStack_1d8 = (int)uVar25 + 0x20;
            uVar25 = (ulonglong)uStack_1d8;
            iVar13 = (int)uVar24;
            local_1f0 = iVar13 + 1;
            uVar24 = (ulonglong)local_1f0;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f0)
            goto LAB_1438b92cf;
            uVar20 = ((uint *)((longlong)FVar27 + 4))[iVar13];
          }
          uStack_1ec = -uVar20 & uVar20;
          uVar24 = (ulonglong)uStack_1ec * 2 + 1;
          lVar3 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_1dc = (uStack_1d8 - 1) + (int)lVar3;
          uVar24 = (ulonglong)uStack_1dc;
          if ((int)local_90 < (int)uStack_1dc) {
LAB_1438b92cf:
            uVar24 = (ulonglong)local_90;
            uStack_1dc = local_90;
          }
        }
        local_1e0 = 0xffffffff;
        local_1a0 = (longlong *)local_b8;
        local_198._padding_ = CONCAT44(uStack_1ec,local_1f0);
        local_198.CurrentBitIndex = uStack_1dc;
        local_198.UnvisitedBitMask = 0xffffffff;
        local_198._28_4_ = uStack_1d4;
        local_198.BaseBitIndex = uStack_1d8;
        local_198.Array = pTStack_1e8;
        if ((int)uVar24 < (int)local_90) {
          do {
            lVar3 = *local_1a0;
            lVar26 = (longlong)(int)uVar24;
            uVar25 = *(ulonglong *)(lVar3 + lVar26 * 0x10);
            uVar20 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
            uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
            uVar20 = (uVar20 >> 0x10 ^ uVar20) & local_70 - 1;
            *(uint *)(lVar3 + 0xc + lVar26 * 0x10) = uVar20;
            FVar14.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_78.Data;
            }
            uVar25 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar20;
            *(undefined4 *)(lVar3 + 8 + lVar26 * 0x10) = *(undefined4 *)(FVar14.Data + uVar25 * 4);
            *(int *)(FVar14.Data + uVar25 * 4) = (int)uVar24;
            local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            uVar24 = (ulonglong)(uint)local_198.CurrentBitIndex;
          } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
        }
      }
    }
  }
  ppTVar2 = ppTVar21 + (int)uVar19;
  for (; ppTVar21 != ppTVar2; ppTVar21 = ppTVar21 + 1) {
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_b8,(TPBDRigidParticleHandleImp<double,3,1> **)&local_1f8,(bool *)ppTVar21);
  }
  pTVar11 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
            TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                      (&local_118,
                       (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                        *)&local_1c0[0].s);
  ppTVar21 = pTVar11->DataPtr;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  uVar19 = (uint)*(undefined8 *)&pTVar11->ArrayNum;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if (uVar19 != 0) {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_108,uVar19);
    uVar20 = 1;
    if (3 < uVar19) {
      uVar24 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar20 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_c0 == 0) || ((int)local_c0 < (int)uVar20)) {
      local_c0 = uVar20;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
      }
      if (uVar20 != 0) {
        uVar22 = uVar20;
        if (uVar20 < 2) {
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            uVar22 = 0;
            goto LAB_1438b94b3;
          }
        }
        else {
LAB_1438b94b3:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar22,4)
          ;
        }
        if (0 < (int)uVar20) {
          uVar25 = (ulonglong)uVar20;
          uVar24 = uVar15;
          do {
            FVar14.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_c8.Data;
            }
            uVar12 = uVar24 & (longlong)(int)uVar20 - 1U;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (local_c0 != 0) {
        pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
        local_1f0 = 0;
        uStack_1ec = 1;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        if (local_e0 != 0) {
          FVar27 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
          if (local_e8 != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_e8;
          }
          uVar20 = *(uint *)FVar27;
          uVar24 = uVar15;
          while (uVar20 == 0) {
            uStack_1d8 = (int)uVar24 + 0x20;
            uVar24 = (ulonglong)uStack_1d8;
            iVar13 = (int)uVar15;
            local_1f0 = iVar13 + 1;
            uVar15 = (ulonglong)local_1f0;
            if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f0)
            goto LAB_1438b95bf;
            uVar20 = ((uint *)((longlong)FVar27 + 4))[iVar13];
          }
          uStack_1ec = -uVar20 & uVar20;
          uVar15 = (ulonglong)uStack_1ec * 2 + 1;
          lVar3 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_1dc = (uStack_1d8 - 1) + (int)lVar3;
          uVar15 = (ulonglong)uStack_1dc;
          if ((int)local_e0 < (int)uStack_1dc) {
LAB_1438b95bf:
            uVar15 = (ulonglong)local_e0;
            uStack_1dc = local_e0;
          }
        }
        local_1e0 = 0xffffffff;
        local_1a0 = (longlong *)local_108;
        local_198._padding_ = CONCAT44(uStack_1ec,local_1f0);
        local_198.CurrentBitIndex = uStack_1dc;
        local_198.UnvisitedBitMask = 0xffffffff;
        local_198._28_4_ = uStack_1d4;
        local_198.BaseBitIndex = uStack_1d8;
        local_198.Array = pTStack_1e8;
        if ((int)uVar15 < (int)local_e0) {
          do {
            lVar3 = *local_1a0;
            lVar26 = (longlong)(int)uVar15;
            uVar24 = *(ulonglong *)(lVar3 + lVar26 * 0x10);
            uVar20 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
            uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
            uVar20 = (uVar20 >> 0x10 ^ uVar20) & local_c0 - 1;
            *(uint *)(lVar3 + 0xc + lVar26 * 0x10) = uVar20;
            FVar14.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_c8.Data;
            }
            uVar24 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar20;
            *(undefined4 *)(lVar3 + 8 + lVar26 * 0x10) = *(undefined4 *)(FVar14.Data + uVar24 * 4);
            *(int *)(FVar14.Data + uVar24 * 4) = (int)uVar15;
            local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            uVar15 = (ulonglong)(uint)local_198.CurrentBitIndex;
          } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
        }
      }
    }
  }
  ppTVar2 = ppTVar21 + (int)uVar19;
  for (; ppTVar21 != ppTVar2; ppTVar21 = ppTVar21 + 1) {
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_108,(TPBDRigidParticleHandleImp<double,3,1> **)&local_1f8,(bool *)ppTVar21);
  }
  uVar19 = ((local_108._8_4_ - local_d4) - local_84) + local_b8._8_4_;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar19,&local_1d0.AllocatorInstance,0,&local_1d0.ArrayMax);
  }
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  Append<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
            (&local_1d0,&local_1b0);
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  Append<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
            (&local_1d0,
             (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             &local_1c0[0].s);
  local_168._0_8_ = __real_3fd3333340000000;
  local_168._8_4_ = 100;
  local_168._32_8_ = (FBVHParticles *)0x0;
  local_168._40_8_ = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_168._24_8_ = __real_3ff0000000000000;
  local_168[0xc] = false;
  local_168[0xd] = false;
  local_168[0xe] = true;
  local_168._48_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_130 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_120._0_1_ = false;
  local_120._1_1_ = true;
  local_168._16_4_ = BoundsOverlapFilteredDelaunayTriangulation;
  FRigidClustering::GenerateConnectionGraph
            (*(FRigidClustering **)LVar7,&local_1d0,(FClusterCreationParameters *)local_168,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_b8,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_108);
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  local_c0 = 0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  iVar13 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = -1;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  local_70 = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  iVar13 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = -1;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  if ((FClusterUnionManager *)local_1c0[0].QuadPart != (FClusterUnionManager *)0x0) {
    FMemory::Free((void *)local_1c0[0]);
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
LAB_1438b9904:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1b0.ArrayMax = FVar18.Number & 0xffff6fff | 0x6000;
      local_1b0.ArrayNum = FVar16.Value;
      QueryPerformanceCounter(local_1c0);
      local_1b0.AllocatorInstance.Data =
           (FScriptContainerElement *)(local_1c0[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_1b0);
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

// GenerateInterclusterEdgesForParticle @ 1438b9a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::GenerateInterclusterEdgesForParticle
          (FClusterUnionManager *this,FClusterUnion *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesForParticle> FVar6;
  FClusterUnionParticleProperties *pFVar7;
  FGeometryCollectionPhysicsProxy *pFVar8;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FColor_u_0 FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar14;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  
  FVar6 = StatPtr_STAT_GenerateInterclusterEdgesForParticle;
  if (StatPtr_STAT_GenerateInterclusterEdgesForParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesForParticle>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_GenerateInterclusterEdgesForParticle");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateInterclusterEdgesForParticle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_GenerateInterclusterEdgesForParticle,*pFVar5,
                       L"FClusterUnionManager::GenerateInterclusterEdgesForParticle",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar12 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar11.Bits = (uint)FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar11.Bits;
        uStackX_1c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x413);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar11.Bits;
      uStackX_1c = uVar10;
      local_res20 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      goto LAB_1438b9b96;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_1438b9b96:
  if (param_2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pFVar7 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
             ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                     *)&param_1->ChildProperties,param_2);
    if ((pFVar7 != (FClusterUnionParticleProperties *)0x0) && (pFVar7->bEdgesAreGenerated == '\0'))
    {
      pFVar8 = (FGeometryCollectionPhysicsProxy *)
               TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                         ((TGeometryParticleHandleImp<double,3,1> *)param_2);
      if ((pFVar8 != (FGeometryCollectionPhysicsProxy *)0x0) && (*(int *)&pFVar8->field_0x1c == 2))
      {
        FGeometryCollectionPhysicsProxy::CreateChildrenGeometry_Internal(pFVar8);
      }
      this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)param_2->field_0xc) {
        this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_2;
      }
      if (this_00 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
        pTVar9 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(this_00);
        iVar1 = pTVar9->ArrayNum;
        pFVar14 = (pTVar9->AllocatorInstance).Data;
        pFVar13 = pFVar14 + (longlong)iVar1 * 0x10;
        while( true ) {
          if (pTVar9->ArrayNum != iVar1) {
            `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_res18);
          }
          if (pFVar14 == pFVar13) break;
          if (*(TGeometryParticleHandleImp<double,3,1> **)pFVar14 !=
              (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar8 = (FGeometryCollectionPhysicsProxy *)
                     TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                               (*(TGeometryParticleHandleImp<double,3,1> **)pFVar14);
            if ((pFVar8 != (FGeometryCollectionPhysicsProxy *)0x0) &&
               (*(int *)&pFVar8->field_0x1c == 2)) {
              FGeometryCollectionPhysicsProxy::CreateChildrenGeometry_Internal(pFVar8);
            }
            GenerateInterclusterEdgesBetweenParticles
                      (this,param_1,param_2,*(TPBDRigidParticleHandleImp<double,3,1> **)pFVar14);
          }
          pFVar14 = pFVar14 + 0x10;
        }
        pFVar7->bEdgesAreGenerated = '\x01';
        FVar12 = local_res20;
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// GetOrCreateClusterUnionIndexFromExplicitIndex @ 1438bb440

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::FClusterUnionManager::GetOrCreateClusterUnionIndexFromExplicitIndex
          (FClusterUnionManager *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<Chaos::FStat_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FUniqueIdx FVar16;
  FNameEntryId FVar17;
  FUniqueIdx local_res8;
  uint local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FClusterUnionCreationParameters local_c8;
  undefined1 local_a8 [56];
  double dStack_70;
  double local_68;
  undefined2 local_60;
  
  FVar17.Value = 0;
  FVar10 = StatPtr_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex;
  local_res10[0] = param_1;
  if (StatPtr_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_GetOrCreateClusterUnionIndexFromExplicitIndex");
    FVar10 = (FThreadSafeStaticStat<Chaos::FStat_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_GetOrCreateClusterUnionIndexFromExplicitIndex,*pFVar9,
                         L"FClusterUnionManager::GetOrCreateClusterUnionIndexFromExplicitIndex",
                         "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar14.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x52c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar17.Value = FVar14.Value;
      goto LAB_1438bb58c;
    }
  }
  bVar3 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_1438bb58c:
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  if (*(int *)&(this->ExplicitIndexMap).field_0x8 != *(int *)&(this->ExplicitIndexMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->ExplicitIndexMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ExplicitIndexMap).field_0x38;
    }
    uVar8 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->ExplicitIndexMap).field_0x48 - 1U & local_res10[0])
                     * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar8 * 0x10 +
                          *(longlong *)&(this->ExplicitIndexMap).field_0x0);
        if (*puVar12 == local_res10[0]) {
          puVar11 = puVar12 + 1;
          if (puVar12 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            FVar16.Idx = *puVar11;
            goto LAB_1438bb6ac;
          }
          break;
        }
        uVar8 = puVar12[2];
      } while (uVar8 != 0xffffffff);
    }
  }
  local_c8.UniqueIndex = (FUniqueIdx *)0x0;
  local_c8.ActorId = 0;
  local_c8.ComponentId = 0;
  local_c8.GravityGroupOverride = -1;
  local_c8.ExplicitIndex = local_res10[0];
  local_a8[0xd] = FRigidClustering::ShouldUnionsHaveCollisionParticles();
  local_a8._0_8_ = __real_3fd3333340000000;
  local_a8._24_8_ = 0.0;
  local_a8._8_4_ = 100;
  local_a8[0xc] = false;
  local_a8[0xe] = true;
  local_a8._32_8_ = (FBVHParticles *)0x0;
  local_a8._40_8_ = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  local_60._0_1_ = false;
  local_60._1_1_ = true;
  local_a8._48_8_ = uVar5;
  dStack_70 = (double)uVar6;
  local_68 = (double)uVar7;
  local_a8._16_4_ = this->MClustering->MClusterUnionConnectionType;
  local_res8.Idx = CreateNewClusterUnion(this,(FClusterCreationParameters *)local_a8,&local_c8);
  local_c8._0_8_ = local_res10;
  local_c8.UniqueIndex = &local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ExplicitIndexMap,(TPairInitializer<int_const_&,int_const_&> *)&local_res18.s,
             (bool *)&local_c8);
  FVar16.Idx = local_res8.Idx;
LAB_1438bb6ac:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.UniqueIndex =
           (FUniqueIdx *)
           (CONCAT44(FVar15.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_c8._0_8_ = ZEXT48(local_res18.s.LowPart);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_c8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return FVar16.Idx;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return FVar16.Idx;
}

// HandleAddOperation @ 1438bd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::HandleAddOperation
          (FClusterUnionManager *this,int param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  FPBDRigidsSOAs *this_00;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  FClusterUnionManager *pFVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<Chaos::FStat_STAT_HandleAddOperation> FVar26;
  int *piVar27;
  ClusterId *pCVar28;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar29;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar30;
  bool *pbVar31;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  FRigidClusteredFlags_u_0 *pFVar34;
  double *pdVar35;
  FGeometryCollectionPhysicsProxy *this_01;
  TVector<double,3> *pTVar36;
  TRigidTransform<double,3> *pTVar37;
  EUpdateClusterUnionPropertiesFlags *pEVar38;
  undefined8 uVar39;
  EUpdateClusterUnionPropertiesFlags EVar40;
  longlong lVar41;
  undefined ***pppuVar42;
  uint uVar43;
  undefined1 *puVar44;
  FName FVar45;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar46;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar47;
  TGeometryParticleHandleImp<double,3,1> *pTVar48;
  FScriptContainerElement *pFVar49;
  longlong lVar50;
  IPhysicsProxyBase *pIVar51;
  uint uVar52;
  uint uVar53;
  uint *puVar55;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar56;
  byte bVar57;
  TGeometryParticleHandleImp<double,3,1> *pTVar58;
  ForAnyElementType FVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  float fVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined1 auStackY_5b8 [32];
  bool local_558;
  byte local_556;
  bool local_554;
  TGeometryParticleHandleImp<double,3,1> *local_550;
  byte local_548 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_540;
  undefined1 local_530;
  undefined1 local_52f;
  undefined1 local_52e [6];
  EClusterUnionGeometryOperation local_528 [8];
  undefined1 local_520 [4];
  undefined2 local_51c;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_518;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_510;
  undefined2 local_500;
  char local_4fe;
  int local_4fc;
  uint local_4f8;
  FName local_4f0;
  EPhysicsProxyType local_4e8;
  uint local_4e4;
  uint local_4e0;
  IPhysicsProxyBase *local_4d8;
  FClusterUnionManager *local_4d0;
  uint local_4c8 [2];
  FColor_u_0 local_4c0;
  uint local_4bc;
  longlong *local_4b8;
  undefined8 uStack_4b0;
  TBitArray<FDefaultBitArrayAllocator> *local_4a8;
  uint uStack_4a0;
  uint uStack_49c;
  uint local_498;
  undefined4 uStack_494;
  int iStack_490;
  undefined4 uStack_48c;
  FName local_488;
  TPBDRigidParticleHandleImp<double,3,1> *local_480;
  TGeometryParticleHandleImp<double,3,1> *local_478;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  FName local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_458;
  TGeometryParticleHandleImp<double,3,1> *local_438;
  FScriptContainerElement *local_430;
  undefined1 local_428 [16];
  undefined8 local_418;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_410;
  longlong *local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_400;
  undefined8 uStack_3e0;
  longlong *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d0;
  undefined8 uStack_3b0;
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined8 *local_398;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_390;
  TGeometryParticleHandleImp<double,3,1> **local_388;
  byte *local_380;
  undefined4 local_36f;
  undefined2 local_36b;
  undefined1 local_369;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_368;
  FName local_358 [2];
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_348;
  TRigidTransform<double,3> local_338;
  undefined4 local_2bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  undefined1 local_298 [32];
  uint *local_278;
  uint local_270;
  undefined4 local_26c;
  undefined4 local_268;
  int local_264;
  ForElementType<FSetElementId> local_258;
  int local_250;
  code *local_248;
  undefined **local_238;
  FClusterUnionManager *pFStack_230;
  undefined8 local_228;
  undefined ***local_220;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_218;
  undefined **local_1b8;
  FClusterUnionManager *pFStack_1b0;
  undefined1 local_1a8;
  undefined4 uStack_1a7;
  undefined2 uStack_1a3;
  undefined1 uStack_1a1;
  undefined1 local_198 [40];
  int local_170;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar54;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  pTVar54 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  uVar53 = 0;
  FVar26 = StatPtr_STAT_HandleAddOperation;
  local_4d0 = this;
  local_4bc = param_1;
  if (StatPtr_STAT_HandleAddOperation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleAddOperation>)0x0) {
    pFVar25 = ::FName::FName(local_358,"STAT_HandleAddOperation");
    FVar26 = (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleAddOperation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleAddOperation,*pFVar25,
                        L"FClusterUnionManager::HandleAddOperation","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar26;
  bVar11 = false;
  bVar12 = false;
  local_468.ComparisonIndex.Value = 0;
  local_468.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar45.ComparisonIndex.Value.Value != 0) || (FVar45.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4c0._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_488.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_488.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_488,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x203);
        bVar11 = true;
        bVar12 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4f0 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar19 = true;
      goto LAB_1438bd6f0;
    }
  }
  bVar12 = bVar20;
  bVar11 = bVar19;
  bVar19 = false;
  local_4f0 = local_468;
  FVar45 = local_468;
LAB_1438bd6f0:
  if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
    puVar44 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
    if (puVar44 == (undefined1 *)0x0) {
      puVar44 = &(this->ClusterUnions).field_0x38;
    }
    iVar22 = *(int *)(puVar44 +
                     (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & param_1) * 4);
    if (iVar22 != -1) {
      while (piVar27 = (int *)((longlong)iVar22 * 0x170 + *(longlong *)&this->ClusterUnions),
            *piVar27 != param_1) {
        iVar22 = piVar27[0x5a];
        if (iVar22 == -1) goto LAB_1438bf1a5;
      }
      pTVar56 = (TPBDRigidParticleHandleImp<double,3,1> *)(piVar27 + 2);
      if (piVar27 == (int *)0x0) {
        pTVar56 = pTVar54;
      }
      local_480 = pTVar56;
      if (pTVar56 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_1438bf1a5;
      pFVar49 = (param_2->AllocatorInstance).Data;
      local_510.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_510.ArrayNum = 0;
      local_510.ArrayMax = 0;
      pFVar1 = pFVar49 + (longlong)param_2->ArrayNum * 8;
      for (; pFVar49 != pFVar1; pFVar49 = pFVar49 + 8) {
        pTVar29 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar49;
        if (pTVar29 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar46 = pTVar54;
          if (2 < (byte)pTVar29->field_0xc) {
            pTVar46 = pTVar29;
          }
          if (pTVar46 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pCVar28 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                (*(TPBDRigidClusteredParticles<double,3> **)pTVar46,
                                 *(int *)&pTVar46->field_0x8);
            pTVar29 = pTVar54;
            if (pCVar28->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pCVar28 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar46,
                                   *(int *)&pTVar46->field_0x8);
              if (2 < (byte)pCVar28->Id->field_0xc) {
                pTVar29 = pCVar28->Id;
              }
            }
            if (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar56 != pTVar29) {
              if (((local_510.AllocatorInstance.Data <= pFVar49) &&
                  (pFVar49 < local_510.AllocatorInstance.Data + (longlong)local_510.ArrayMax * 8))
                 && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar22 = local_510.ArrayNum;
              if (local_510.ArrayNum == local_510.ArrayMax) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_510.AllocatorInstance,&local_510.ArrayMax);
              }
              local_510.ArrayNum = iVar22 + 1;
              *(undefined8 *)(local_510.AllocatorInstance.Data + (longlong)iVar22 * 8) =
                   *(undefined8 *)pFVar49;
            }
          }
        }
      }
      HandleRemoveOperationWithClusterLookup(this,&local_510,Defer);
      local_1b8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClusterUnionManager::HandleAddOperation'::`2'::<lambda_2>,0,0>
                   ::_vftable_;
      local_1a8 = this->MClustering->DoGenerateBreakingData;
      uStack_1a7 = local_36f;
      uStack_1a3 = local_36b;
      uStack_1a1 = local_369;
      local_228 = CONCAT17(local_369,CONCAT25(local_36b,CONCAT41(local_36f,local_1a8)));
      local_248 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClusterUnionManager::HandleAddOperation'::__l2::<lambda_2>,void>
                  ::Call;
      local_220 = (undefined ***)0x0;
      local_238 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClusterUnionManager::HandleAddOperation'::`2'::<lambda_2>,0,0>
                   ::_vftable_;
      this->MClustering->DoGenerateBreakingData = false;
      pFStack_230 = this;
      pFStack_1b0 = this;
      local_4d8 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                            (*(TGeometryParticleHandleImp<double,3,1> **)pTVar56);
      if (local_4d8 == (IPhysicsProxyBase *)0x0) {
        local_4e8 = NoneType;
      }
      else {
        local_4e8 = local_4d8->Type;
      }
      local_4fc = *(int *)(pTVar56 + 1);
      iVar22 = local_510.ArrayNum;
      local_3a8 = local_510.AllocatorInstance.Data;
      bVar20 = true;
      local_556 = 0;
      if ((local_510.ArrayNum < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iStack_3a0 = iVar22;
      local_348._12_4_ = uStack_39c;
      local_348.ArrayNum = iVar22;
      local_348.DataPtr = (TPBDRigidParticleHandleImp<double,3,1> **)local_3a8;
      local_298._0_8_ = 0;
      local_298._8_8_ = 0;
      local_278 = (uint *)0x0;
      local_270 = 0;
      local_26c = 0x80;
      local_268 = 0xffffffff;
      local_264 = 0;
      local_258 = (ForElementType<FSetElementId>)0x0;
      local_250 = 0;
      TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Append((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_298,&local_348);
      uVar52 = local_298._8_4_ - local_264;
      local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_540.ArrayNum = 0;
      local_540.ArrayMax = 0;
      if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
      }
      if (0 < (int)uVar52) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar52,&local_540.AllocatorInstance,0,&local_540.ArrayMax);
      }
      uVar52 = local_270;
      uVar23 = 1;
      local_218.Elements._0_8_ = 0;
      local_218.Elements._8_8_ = 0;
      local_218.Elements._32_8_ = 0;
      local_218.Elements._40_4_ = 0;
      local_218.Elements._44_4_ = 0x80;
      local_218.Elements._48_4_ = 0xffffffff;
      local_218.Elements._52_4_ = 0;
      local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_218.HashSize = 0;
      uStack_49c = uVar53;
      local_498 = uVar53;
      if (local_270 != 0) {
        puVar55 = (uint *)(local_298 + 0x10);
        if (local_278 != (uint *)0x0) {
          puVar55 = local_278;
        }
        uVar43 = *puVar55;
        pTVar56 = pTVar54;
        local_498 = 0;
        uVar53 = 0;
        while (uVar43 == 0) {
          iVar22 = (int)pTVar54;
          local_498 = (int)pTVar56 + 0x20;
          pTVar56 = (TPBDRigidParticleHandleImp<double,3,1> *)(ulonglong)local_498;
          uVar53 = iVar22 + 1;
          pTVar54 = (TPBDRigidParticleHandleImp<double,3,1> *)(ulonglong)uVar53;
          uStack_49c = local_270;
          if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar53)
          goto LAB_1438bdb24;
          uVar43 = (puVar55 + 1)[iVar22];
        }
        uVar23 = -uVar43 & uVar43;
        uVar3 = (ulonglong)uVar23 * 2 + 1;
        lVar41 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        local_428._8_4_ = (undefined4)lVar41;
        uStack_49c = (local_498 - 1) + local_428._8_4_;
        if ((int)local_270 < (int)uStack_49c) {
          uStack_49c = local_270;
        }
      }
LAB_1438bdb24:
      iStack_490 = local_298._8_4_ - local_264;
      local_4b8 = (longlong *)local_298;
      local_4a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10);
      uStack_4b0 = CONCAT44(uVar23,uVar53);
      uStack_4a0 = 0xffffffff;
      uVar53 = local_270 & 0xffffffe0;
      TStack_400._padding_ = uStack_4b0;
      uStack_494 = local_2bc;
      uStack_3e0 = CONCAT44(uStack_48c,iStack_490);
      iVar22 = (int)local_270 >> 5;
      bVar57 = (byte)local_270;
      TStack_400.BaseBitIndex = local_498;
      TStack_400._28_4_ = local_2bc;
      TStack_400.UnvisitedBitMask = 0xffffffff;
      TStack_400.CurrentBitIndex = uStack_49c;
      local_408 = local_4b8;
      TStack_400.Array = local_4a8;
      if (((int)local_270 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar17 = local_4d0;
      if (uVar52 != local_270) {
        puVar55 = (uint *)(local_298 + 0x10);
        if (local_278 != (uint *)0x0) {
          puVar55 = local_278;
        }
        uVar52 = -1 << (bVar57 & 0x1f) & puVar55[iVar22];
        while (uVar52 == 0) {
          lVar41 = (longlong)iVar22;
          uVar53 = uVar53 + 0x20;
          iVar22 = iVar22 + 1;
          uVar52 = local_270;
          if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_1438bdc50;
          uVar52 = (puVar55 + 1)[lVar41];
        }
        uVar3 = (ulonglong)(-uVar52 & uVar52) * 2 + 1;
        lVar41 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        local_428._4_4_ = (undefined4)lVar41;
        uVar52 = (uVar53 - 1) + local_428._4_4_;
        if ((int)local_270 < (int)uVar52) {
          uVar52 = local_270;
        }
      }
LAB_1438bdc50:
      while( true ) {
        plVar18 = local_408;
        if ((int)local_408[1] - *(int *)((longlong)local_408 + 0x34) != (int)uStack_3e0) {
          local_530 = 0;
          `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_530);
        }
        pTVar54 = local_480;
        if (((TStack_400.CurrentBitIndex == uVar52) &&
            (TStack_400.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10))) &&
           (plVar18 == (longlong *)local_298)) break;
        local_518 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                     (*plVar18 + (longlong)TStack_400.CurrentBitIndex * 0x10);
        if (local_518 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          pTVar47 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)local_518->field_0xc) {
            pTVar47 = local_518;
          }
          if (pTVar47 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
            if (((local_540.AllocatorInstance.Data <= (FScriptContainerElement *)&local_518) &&
                ((FScriptContainerElement *)&local_518 <
                 local_540.AllocatorInstance.Data + (longlong)local_540.ArrayMax * 8)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (local_540.ArrayNum == local_540.ArrayMax) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_540.AllocatorInstance,&local_540.ArrayMax);
              local_540.ArrayNum = iVar22;
            }
            lVar41 = (longlong)local_540.ArrayNum;
            local_540.ArrayNum = local_540.ArrayNum + 1;
            *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
             (local_540.AllocatorInstance.Data + lVar41 * 8) = local_518;
          }
          else {
            if (((bChaosClusterUnionDoNotAddEmptyClusters != false) &&
                (pTVar47->field_0xc == '\x03')) &&
               ((pTVar30 = TPBDRigidClusteredParticleHandleImp<double,3,1>::Parent(pTVar47),
                pTVar30 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0 &&
                ((pbVar31 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar47),
                 *pbVar31 != false &&
                 (pCVar28 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                      (*(TPBDRigidClusteredParticles<double,3> **)pTVar47,
                                       *(int *)&pTVar47->field_0x8), pCVar28->NumChildren == 0))))))
            {
              if (5 < (byte)LogChaos._0_1_) {
                lVar41 = *(longlong *)pTVar47;
                uVar53 = *(uint *)&pTVar47->field_0x8;
                uVar23 = 0;
                if ((int)uVar53 < *(int *)(lVar41 + 0x280)) {
                  uVar23 = ~uVar53 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(longlong *)(*(longlong *)(lVar41 + 0x278) + (longlong)(int)uVar53 * 0x10) != 0
                   ) {
                  uVar23 = 0;
                  if ((int)uVar53 < *(int *)(lVar41 + 0x280)) {
                    uVar23 = ~uVar53 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              }
              goto LAB_1438be243;
            }
            if (param_3) {
              FRigidClustering::ReleaseClusterParticles
                        (pFVar17->MClustering,
                         (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                          *)local_198,pTVar47,true);
              pTVar32 = TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                        ::Array((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                                 *)local_198,&local_368);
              if ((&local_540 == pTVar32) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x986,L""), bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar22 = pTVar32->ArrayNum;
              if (iVar22 != 0) {
                iVar24 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,8,iVar22,&local_540.AllocatorInstance,&local_540.ArrayNum,
                                    &local_540.ArrayMax);
                memmove(local_540.AllocatorInstance.Data + (longlong)iVar24 * 8,
                        (pTVar32->AllocatorInstance).Data,(longlong)iVar22 << 3);
                pTVar32->ArrayNum = 0;
              }
              if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.AllocatorInstance.Data);
              }
              local_458.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
              local_458._padding_._0_4_ = 0;
              local_458._padding_._4_4_ = 1;
              local_458.UnvisitedBitMask = 0xffffffff;
              local_458.CurrentBitIndex = 0;
              local_458.BaseBitIndex = 0;
              if (local_170 != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_458);
              }
              uStack_4b0 = CONCAT44(local_458._padding_._4_4_,(undefined4)local_458._padding_);
              local_4b8 = (longlong *)local_198;
              uStack_49c = local_458.CurrentBitIndex;
              uStack_4a0 = local_458.UnvisitedBitMask;
              uStack_494 = local_458._28_4_;
              local_498 = local_458.BaseBitIndex;
              iStack_490 = local_198._8_4_ - local_164;
              local_4a8 = local_458.Array;
              uStack_3b0 = CONCAT44(uStack_48c,iStack_490);
              TStack_3d0.Array = local_458.Array;
              local_3d8 = local_4b8;
              TStack_3d0._padding_ = uStack_4b0;
              TStack_3d0._16_8_ = _uStack_4a0;
              TStack_3d0._24_8_ = _local_498;
              pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_2b8,
                                   (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),
                                   local_170);
              uStack_4b0 = pTVar33->_padding_;
              pTVar10 = pTVar33->Array;
              uVar39._0_4_ = pTVar33->UnvisitedBitMask;
              uVar39._4_4_ = pTVar33->CurrentBitIndex;
              local_498 = pTVar33->BaseBitIndex;
              uStack_494 = *(undefined4 *)&pTVar33->field_0x1c;
              local_4a8 = pTVar10;
              _uStack_4a0 = uVar39;
              while( true ) {
                plVar18 = local_3d8;
                if ((int)local_3d8[1] - *(int *)((longlong)local_3d8 + 0x34) != (int)uStack_3b0) {
                  local_52f = 0;
                  `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_52f);
                }
                if (((TStack_3d0.CurrentBitIndex == uVar39._4_4_) && (TStack_3d0.Array == pTVar10))
                   && (plVar18 == (longlong *)local_198)) break;
                local_418 = *(undefined8 *)(*plVar18 + (longlong)TStack_3d0.CurrentBitIndex * 0x10);
                local_398 = &local_418;
                local_390 = &local_410;
                local_410 = pTVar47;
                TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_&&>_>
                          (&local_218,
                           (TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_&&>
                            *)(local_428 + 0xc),(bool *)&local_398);
                TStack_3d0.UnvisitedBitMask =
                     TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d0);
              }
              local_150 = 0;
              if (local_158 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_158);
              }
              TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_198);
            }
            else {
              if (((local_540.AllocatorInstance.Data <= (FScriptContainerElement *)&local_518) &&
                  ((FScriptContainerElement *)&local_518 <
                   local_540.AllocatorInstance.Data + (longlong)local_540.ArrayMax * 8)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (local_540.ArrayNum == local_540.ArrayMax) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_540.AllocatorInstance,&local_540.ArrayMax);
                local_540.ArrayNum = iVar22;
              }
              lVar41 = (longlong)local_540.ArrayNum;
              local_540.ArrayNum = local_540.ArrayNum + 1;
              *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               (local_540.AllocatorInstance.Data + lVar41 * 8) = local_518;
            }
            pFVar34 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 (*(TPBDRigidClusteredParticles<double,3> **)pTVar47,
                                  *(int *)&pTVar47->field_0x8)->field0_0x0;
            local_556 = local_556 | pFVar34->Bits >> 1 & 1;
          }
          uVar53 = *(uint *)&local_518->field_0x8;
          lVar41 = *(longlong *)local_518;
          uVar23 = 0;
          if ((int)uVar53 < *(int *)(lVar41 + 0x2e0)) {
            uVar23 = ~uVar53 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar20 = (bool)(bVar20 & *(char *)(*(longlong *)(lVar41 + 0x2d8) + 0xb +
                                            (longlong)(int)uVar53 * 0x10) == '\x01');
        }
LAB_1438be243:
        TStack_400.UnvisitedBitMask = TStack_400.UnvisitedBitMask & ~TStack_400._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_400);
      }
      FVar45 = local_4f0;
      if (local_540.ArrayNum != 0) {
        puVar44 = &local_480->field_0x10;
        if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             puVar44 == &local_540) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar41 = (longlong)local_540.ArrayNum;
        if (local_540.ArrayNum != 0) {
          iVar22 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,local_540.ArrayNum,(ForAnyElementType *)puVar44,
                              (int *)(pTVar54 + 1),(int *)&pTVar54[1].field_0x4);
          memcpy((void *)(*(longlong *)puVar44 + (longlong)iVar22 * 8),
                 local_540.AllocatorInstance.Data,lVar41 << 3);
        }
        FRigidClustering::AddParticlesToCluster
                  (local_4d0->MClustering,
                   *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pTVar54,&local_540,
                   (TMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
                    *)&local_218);
        if ((local_4fc == 0) ||
           (bVar21 = TPBDRigidParticleHandleImp<double,3,1>::OneWayInteraction
                               (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54), bVar21)) {
          bVar57 = 1;
        }
        else {
          bVar57 = 0;
        }
        local_558 = TPBDRigidParticleHandleImp<double,3,1>::MACDEnabled
                              (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54);
        uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
        lVar41 = **(longlong **)pTVar54;
        uVar52 = 0;
        if ((int)uVar53 < *(int *)(lVar41 + 0x520)) {
          uVar52 = ~uVar53 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar16 = __real_7f7fffff;
        lVar41 = *(longlong *)(lVar41 + 0x518);
        local_51c = *(undefined2 *)((longlong)(int)uVar53 * 3 + lVar41);
        local_4f8 = (uint)*(byte *)((longlong)(int)uVar53 * 3 + 2 + lVar41);
        pdVar35 = TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
                            (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54);
        dVar5 = *pdVar35;
        pdVar35 = TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
                            (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54);
        dVar6 = *pdVar35;
        local_554 = TPBDRigidParticleHandleImp<double,3,1>::GravityEnabled
                              (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54);
        uVar15 = _UNK_150689688;
        uVar14 = ___xmm_3ff00000000000003ff0000000000000;
        uVar13 = _UNK_150689518;
        uVar39 = ___xmm_00000000000000003ff0000000000000;
        iVar22 = local_540.ArrayNum;
        local_430 = local_540.AllocatorInstance.Data + (longlong)local_540.ArrayNum * 8;
        local_4e0 = (uint)local_51c._1_1_;
        local_4e4 = (uint)(byte)local_51c;
        FVar59.Data = local_540.AllocatorInstance.Data;
        fVar65 = fVar16;
        uVar66 = SUB84(dVar5,0);
        uVar67 = (int)((ulonglong)dVar5 >> 0x20);
        uVar68 = SUB84(dVar6,0);
        uVar69 = (int)((ulonglong)dVar6 >> 0x20);
        while( true ) {
          pFVar1 = local_430;
          if (local_540.ArrayNum != iVar22) {
            local_52e[0] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_52e);
          }
          FVar45 = local_4f0;
          if (FVar59.Data == pFVar1) break;
          local_550 = *(TGeometryParticleHandleImp<double,3,1> **)FVar59.Data;
          uVar53 = (uint)local_550->_padding_;
          lVar41 = local_550->_padding_;
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar41 + 0x68)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((*(longlong *)(*(longlong *)(lVar41 + 0x60) + (longlong)(int)uVar53 * 8) == 0) &&
              (this_01 = (FGeometryCollectionPhysicsProxy *)
                         TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(local_550),
              this_01 != (FGeometryCollectionPhysicsProxy *)0x0)) &&
             (*(int *)&this_01->field_0x1c == 2)) {
            FGeometryCollectionPhysicsProxy::CreateChildrenGeometry_Internal(this_01);
          }
          if (local_4fc != 0) {
            puVar44 = &pTVar54[10].field_0x10;
            uStack_470 = 0;
            local_478 = local_550;
            if (((*(TGeometryParticleHandleImp<double,3,1> ***)puVar44 <= &local_478) &&
                (&local_478 <
                 *(TGeometryParticleHandleImp<double,3,1> ***)puVar44 +
                 (longlong)*(int *)&pTVar54[0xb].field_0x4 * 2)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar24 = *(int *)(pTVar54 + 0xb);
            if (iVar24 == *(int *)&pTVar54[0xb].field_0x4) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)puVar44,(int *)&pTVar54[0xb].field_0x4)
              ;
              *(int *)(pTVar54 + 0xb) = iVar24;
            }
            local_528[0] = Add;
            *(int *)(pTVar54 + 0xb) = iVar24 + 1;
            puVar2 = (undefined8 *)(*(longlong *)puVar44 + (longlong)iVar24 * 0x10);
            *puVar2 = local_478;
            puVar2[1] = CONCAT71(uStack_46f,uStack_470);
            local_438 = local_550;
            pTVar32 = TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&>
                                (&pTVar54[0xb].field_0x8,0,local_528);
            TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                      (pTVar32,(TPBDRigidParticleHandleImp<double,3,1> **)&local_438);
          }
          uVar53 = (uint)local_550->_padding_;
          lVar41 = local_550->_padding_;
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar41 + 0x2e0)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar52 = (uint)local_550->_padding_;
          lVar50 = local_550->_padding_;
          bVar57 = bVar57 & (byte)(*(ushort *)
                                    (*(longlong *)(lVar41 + 0x2d8) + 8 +
                                    (longlong)(int)uVar53 * 0x10) >> 2);
          uVar53 = 0;
          if ((int)uVar52 < *(int *)(lVar50 + 0x2e0)) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar53 = (uint)local_550->_padding_;
          lVar41 = local_550->_padding_;
          local_558 = (bool)(local_558 |
                            (byte)((ushort)*(undefined2 *)
                                            (*(longlong *)(lVar50 + 0x2d8) + 8 +
                                            (longlong)(int)uVar52 * 0x10) >> 9) & 1);
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar41 + 0x4a8)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar50 = local_550->_padding_;
          fVar62 = *(float *)(*(longlong *)(lVar41 + 0x4a0) + (longlong)(int)uVar53 * 4);
          uVar53 = (uint)local_550->_padding_;
          if (fVar65 <= fVar62) {
            fVar62 = fVar65;
          }
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar50 + 0x430)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar41 = local_550->_padding_;
          dVar5 = *(double *)(*(longlong *)(lVar50 + 0x428) + (longlong)(int)uVar53 * 8);
          uVar53 = (uint)local_550->_padding_;
          uVar60 = SUB84(dVar5,0);
          uVar63 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar67,uVar66)) {
            uVar60 = uVar66;
            uVar63 = uVar67;
          }
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar41 + 0x448)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar50 = local_550->_padding_;
          dVar5 = *(double *)(*(longlong *)(lVar41 + 0x440) + (longlong)(int)uVar53 * 8);
          uVar53 = (uint)local_550->_padding_;
          uVar61 = SUB84(dVar5,0);
          uVar64 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar69,uVar68)) {
            uVar61 = uVar68;
            uVar64 = uVar69;
          }
          uVar52 = 0;
          if ((int)uVar53 < *(int *)(lVar50 + 0x2e0)) {
            uVar52 = ~uVar53 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar52 = (uint)local_550->_padding_;
          lVar41 = local_550->_padding_;
          local_554 = (bool)(local_554 &
                            *(byte *)((longlong)(int)uVar53 * 0x10 + 8 +
                                     *(longlong *)(lVar50 + 0x2d8)));
          uVar53 = 0;
          if ((int)uVar52 < *(int *)(lVar41 + 0x520)) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar41 = *(longlong *)(lVar41 + 0x518);
          uVar8 = *(undefined2 *)((longlong)(int)uVar52 * 3 + lVar41);
          local_4fe = *(char *)((longlong)(int)uVar52 * 3 + 2 + lVar41);
          uVar53 = (int)local_4fe;
          if ((int)local_4fe < (int)(char)local_4f8) {
            uVar53 = (int)(char)local_4f8;
          }
          local_500._1_1_ = (char)((ushort)uVar8 >> 8);
          uVar52 = (int)local_500._1_1_;
          if ((int)local_500._1_1_ < (int)(char)local_4e0) {
            uVar52 = (int)(char)local_4e0;
          }
          uVar23 = (int)(char)uVar8;
          if ((int)(char)uVar8 < (int)(char)local_4e4) {
            uVar23 = (int)(char)local_4e4;
          }
          uVar43 = 0x7f;
          if ((int)uVar23 < 0x7f) {
            uVar43 = uVar23;
          }
          uVar23 = 0x7f;
          if ((int)uVar52 < 0x7f) {
            uVar23 = uVar52;
          }
          uVar52 = 0x7f;
          if ((int)uVar53 < 0x7f) {
            uVar52 = uVar53;
          }
          local_4e4 = 0xffffffff;
          if (-1 < (int)uVar43) {
            local_4e4 = uVar43 & 0xff;
          }
          local_4e0 = 0xffffffff;
          if (-1 < (int)uVar23) {
            local_4e0 = uVar23 & 0xff;
          }
          local_4f8 = 0xffffffff;
          if (-1 < (int)uVar52) {
            local_4f8 = uVar52 & 0xff;
          }
          local_51c = CONCAT11((char)local_4e0,(char)local_4e4);
          uVar53 = ((uint)((ulonglong)local_550 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_550 >> 4)) * -0x7a143595;
          uVar53 = (uVar53 >> 0xd ^ uVar53) * -0x3d4d51cb;
          local_500 = uVar8;
          if (*(int *)&pTVar54[2].field_0x8 != *(int *)&pTVar54[4].field_0x4) {
            puVar44 = &pTVar54[4].field_0x8;
            if (*(undefined1 **)&pTVar54[4].field_0x10 != (undefined1 *)0x0) {
              puVar44 = *(undefined1 **)&pTVar54[4].field_0x10;
            }
            iVar24 = *(int *)(puVar44 +
                             (ulonglong)(*(int *)(pTVar54 + 5) - 1U & (uVar53 >> 0x10 ^ uVar53)) * 4
                             );
            if (iVar24 != -1) {
              do {
                if (*(TGeometryParticleHandleImp<double,3,1> **)
                     (*(longlong *)(pTVar54 + 2) + (longlong)iVar24 * 0x18) == local_550)
                goto LAB_1438bea42;
                iVar24 = *(int *)(*(longlong *)(pTVar54 + 2) + 0x10 + (longlong)iVar24 * 0x18);
              } while (iVar24 != -1);
            }
          }
          local_548[0] = local_548[0] & 0xfc;
          local_388 = &local_550;
          local_380 = local_548;
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FClusterUnionParticleProperties_const_&>_>
                    ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
                      *)(pTVar54 + 2),
                     (TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FClusterUnionParticleProperties_const_&>
                      *)local_428,(bool *)&local_388);
LAB_1438bea42:
          pTVar48 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&local_550->_padding_ + 4)) {
            pTVar48 = local_550;
          }
          if (pTVar48 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
            lVar50 = (longlong)(int)uVar53;
            lVar41 = **(longlong **)pTVar54;
            uVar52 = 0;
            if ((int)uVar53 < *(int *)(lVar41 + 0x50)) {
              uVar52 = ~uVar53 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar41 = *(longlong *)(lVar41 + 0x48);
            fVar65 = *(float *)(lVar41 + lVar50 * 0x10);
            uVar7 = *(undefined8 *)(lVar41 + 8 + lVar50 * 0x10);
            dVar5 = (double)(float)((ulonglong)uVar7 >> 0x20);
            dVar6 = (double)*(float *)(lVar41 + 4 + lVar50 * 0x10);
            pTVar36 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)**(undefined8 **)pTVar54,
                                 *(int *)(*(undefined8 **)pTVar54 + 1));
            local_138._8_4_ = SUB84(dVar5,0);
            local_138._0_8_ = (double)(float)uVar7;
            local_138._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_148._8_4_ = SUB84(dVar6,0);
            local_148._0_8_ = (double)fVar65;
            local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_118 = *(undefined8 *)&pTVar36->field_0x10;
            local_128 = *(undefined8 *)pTVar36;
            uStack_120 = *(undefined8 *)&pTVar36->field_0x8;
            uStack_110 = 0;
            local_108 = uVar14;
            uStack_100 = uVar15;
            local_f8 = uVar39;
            uStack_f0 = uVar13;
            Chaos::`anonymous_namespace'::GetParticleRigidFrameInClusterUnion
                      (&local_338,(TPBDRigidParticleHandleImp<double,3,1> *)local_550,
                       (TRigidTransform<double,3> *)local_148);
            pTVar37 = TPBDRigidClusteredParticles<double,3>::ChildToParent
                                ((TPBDRigidClusteredParticles<double,3> *)pTVar48->_padding_,
                                 (int)pTVar48->_padding_);
            *(undefined8 *)pTVar37 = local_338._0_8_;
            *(undefined8 *)&pTVar37->field_0x8 = local_338._8_8_;
            *(undefined8 *)&pTVar37->field_0x10 = local_338._16_8_;
            *(undefined8 *)&pTVar37->field_0x18 = local_338._24_8_;
            *(undefined8 *)&pTVar37->field_0x20 = local_338._32_8_;
            *(undefined8 *)&pTVar37->field_0x28 = local_338._40_8_;
            *(undefined8 *)&pTVar37->field_0x30 = local_338._48_8_;
            *(undefined8 *)&pTVar37->field_0x38 = local_338._56_8_;
            *(undefined8 *)&pTVar37->field_0x40 = local_338._64_8_;
            *(undefined8 *)&pTVar37->field_0x48 = local_338._72_8_;
            *(undefined8 *)&pTVar37->field_0x50 = local_338._80_8_;
            *(undefined8 *)&pTVar37->field_0x58 = local_338._88_8_;
          }
          pTVar48 = local_550;
          pTVar58 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&local_550->_padding_ + 4)) {
            pTVar58 = local_550;
          }
          this_00 = (FPBDRigidsSOAs *)local_4d0->MEvolution->_padding_;
          if (((pTVar58 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (bVar21 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                  (&this_00->ActiveParticlesMapArray,
                                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar58), !bVar21)) &&
             (bVar21 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                 (&this_00->MovingKinematicsMapArray,
                                  (TPBDRigidParticleHandleImp<double,3,1> *)pTVar58), !bVar21)) {
            FPBDRigidsSOAs::
            AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                      (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar58,
                       &this_00->TransientDirtyMapArray);
            if (CVars::bChaosSolverCheckParticleViews != false) {
              FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar48);
            }
            FPBDRigidsSOAs::UpdateViews(this_00);
          }
          FVar59.Data = FVar59.Data + 8;
          fVar65 = fVar62;
          uVar66 = uVar60;
          uVar67 = uVar63;
          uVar68 = uVar61;
          uVar69 = uVar64;
        }
        pIVar51 = local_4d8;
        if ((local_4d8 != (IPhysicsProxyBase *)0x0) && (local_4e8 == ClusterUnionProxy)) {
          iVar22 = local_540.ArrayNum;
          pFVar1 = local_540.AllocatorInstance.Data + (longlong)local_540.ArrayNum * 8;
          FVar59.Data = local_540.AllocatorInstance.Data;
          while( true ) {
            pIVar51 = local_4d8;
            if (local_540.ArrayNum != iVar22) {
              local_520[0] = 0;
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_520);
            }
            pTVar54 = local_480;
            if (FVar59.Data == pFVar1) break;
            pTVar47 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar59.Data;
            if (pTVar47 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
LAB_1438bed62:
              FVar59.Data = FVar59.Data + 8;
            }
            else {
              uVar53 = *(uint *)&pTVar47->field_0x8;
              lVar41 = *(longlong *)pTVar47;
              uVar52 = 0;
              if ((int)uVar53 < *(int *)(lVar41 + 0xd0)) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(longlong *)(*(longlong *)(lVar41 + 200) + (longlong)(int)uVar53 * 8) == 0)
              goto LAB_1438bed62;
              uVar53 = *(uint *)&pTVar47->field_0x8;
              lVar41 = *(longlong *)pTVar47;
              uVar52 = 0;
              if ((int)uVar53 < *(int *)(lVar41 + 0xd0)) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar59.Data = FVar59.Data + 8;
              *(IPhysicsProxyBase **)
               (*(longlong *)(*(longlong *)(lVar41 + 200) + (longlong)(int)uVar53 * 8) + 0x30) =
                   local_4d8;
            }
          }
        }
        iVar22 = local_4fc;
        if (((local_4fc == 0) && (local_556 != 0)) && ((pTVar54[10].field_0x8 & 2) == 0)) {
          pFVar34 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                               ((TPBDRigidClusteredParticles<double,3> *)**(undefined8 **)pTVar54,
                                *(int *)(*(undefined8 **)pTVar54 + 1))->field0_0x0;
          pFVar34->Bits = pFVar34->Bits | 2;
        }
        pFVar17 = local_4d0;
        local_4c8[0] = local_4bc;
        pEVar38 = TMapBase<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
                  ::FindOrAddImpl<int_const_&>
                            (&local_4d0->DeferredClusterUnionsForUpdateProperties,local_4bc,
                             (int *)local_4c8);
        EVar40 = IncrementalGenerateGeometry|IncrementalGenerateConnectionGraph;
        if (iVar22 == 0) {
          EVar40 = All;
        }
        *pEVar38 = *pEVar38 | EVar40;
        if (pIVar51 != (IPhysicsProxyBase *)0x0) {
          TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy
                    (*(TGeometryParticleHandleImp<double,3,1> **)pTVar54,pIVar51);
        }
        if (iVar22 == 0) {
          if (bVar20) {
            FPBDRigidsEvolutionBase::SetParticleObjectState
                      ((FPBDRigidsEvolutionBase *)pFVar17->MEvolution,
                       *(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54,Sleeping);
          }
          if (local_540.ArrayNum != 0) {
            if ((local_540.ArrayNum < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar56 = *(TPBDRigidParticleHandleImp<double,3,1> **)local_540.AllocatorInstance.Data;
            if (*(int *)(pTVar54 + 10) == -1) {
              uVar53 = *(uint *)&pTVar56->field_0x8;
              lVar41 = *(longlong *)pTVar56;
              pTVar29 = *(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54;
              uVar52 = 0;
              if ((int)uVar53 < *(int *)(lVar41 + 0x2e0)) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              TPBDRigidParticleHandleImp<double,3,1>::SetGravityGroupIndex
                        (pTVar29,*(ushort *)
                                  (*(longlong *)(lVar41 + 0x2d8) + 8 + (longlong)(int)uVar53 * 0x10)
                                 >> 5 & 7);
            }
            pTVar29 = *(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54;
            fVar62 = TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity
                               (pTVar56);
            TPBDRigidParticleHandleImp<double,3,1>::SetInitialOverlapDepenetrationVelocity
                      (pTVar29,fVar62);
          }
        }
        uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
        lVar41 = **(longlong **)pTVar54;
        uVar52 = 0;
        if ((int)uVar53 < *(int *)(lVar41 + 0x430)) {
          uVar52 = ~uVar53 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(ulonglong *)(*(longlong *)(lVar41 + 0x428) + (longlong)(int)uVar53 * 8) =
             CONCAT44(uVar67,uVar66);
        uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
        lVar41 = **(longlong **)pTVar54;
        uVar52 = 0;
        if ((int)uVar53 < *(int *)(lVar41 + 0x448)) {
          uVar52 = ~uVar53 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(ulonglong *)(*(longlong *)(lVar41 + 0x440) + (longlong)(int)uVar53 * 8) =
             CONCAT44(uVar69,uVar68);
        TPBDRigidParticleHandleImp<double,3,1>::SetGravityEnabled
                  (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54,local_554);
        uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
        lVar41 = **(longlong **)pTVar54;
        uVar52 = 0;
        if ((int)uVar53 < *(int *)(lVar41 + 0x2e0)) {
          uVar52 = ~uVar53 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar41 = *(longlong *)(lVar41 + 0x2d8);
        puVar4 = (ushort *)((longlong)(int)uVar53 * 0x10 + 8 + lVar41);
        *puVar4 = *puVar4 & 0xfffb;
        puVar4 = (ushort *)((longlong)(int)uVar53 * 0x10 + 8 + lVar41);
        *puVar4 = *puVar4 | (ushort)bVar57 << 2;
        TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
                  (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54,local_558);
        uVar53 = *(uint *)(*(longlong **)pTVar54 + 1);
        lVar41 = **(longlong **)pTVar54;
        uVar52 = 0;
        if ((int)uVar53 < *(int *)(lVar41 + 0x520)) {
          uVar52 = ~uVar53 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar41 = *(longlong *)(lVar41 + 0x518);
        *(undefined2 *)((longlong)(int)uVar53 * 3 + lVar41) = local_51c;
        *(char *)((longlong)(int)uVar53 * 3 + 2 + lVar41) = (char)local_4f8;
        if (fVar65 != fVar16) {
          TPBDRigidParticleHandleImp<double,3,1>::SetSleepThresholdMultiplier
                    (*(TPBDRigidParticleHandleImp<double,3,1> **)pTVar54,fVar65);
        }
      }
      local_218.HashSize = 0;
      if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_218.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_218.Elements);
      if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.AllocatorInstance.Data);
      }
      local_250 = 0;
      if (local_258 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_258);
      }
      TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_298);
      UE::Core::Private::Function::CheckCallable(local_248);
      pcVar9 = local_248;
      pppuVar42 = &local_238;
      if (local_220 != (undefined ***)0x0) {
        pppuVar42 = local_220;
      }
      uVar39 = (*(code *)(*pppuVar42)[1])();
      (*pcVar9)(uVar39);
      if (local_248 != (code *)0x0) {
        pppuVar42 = &local_238;
        if (local_220 != (undefined ***)0x0) {
          pppuVar42 = local_220;
        }
        (*(code *)(*pppuVar42)[2])();
      }
      if (local_510.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.AllocatorInstance.Data);
      }
    }
  }
LAB_1438bf1a5:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  return;
}

// HandleDeferredClusterUnionUpdateProperties @ 1438bf210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::HandleDeferredClusterUnionUpdateProperties(FClusterUnionManager *this)

{
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<int,Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
  *pTVar8;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::FStat_STAT_HandleDeferredClusterUnionUpdateProperties> FVar14;
  uint *puVar15;
  FRigidClusteredFlags_u_0 *pFVar16;
  longlong lVar17;
  undefined1 *puVar18;
  FClusterUnion *pFVar19;
  FName FVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_168;
  FName local_160;
  TMap<int,Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  TMap<int,Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
  *local_110;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<int,Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78 [4];
  undefined4 local_54;
  
  iVar23 = 0;
  FVar14 = StatPtr_STAT_HandleDeferredClusterUnionUpdateProperties;
  if (StatPtr_STAT_HandleDeferredClusterUnionUpdateProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleDeferredClusterUnionUpdateProperties>)0x0) {
    pFVar13 = ::FName::FName(local_78,"STAT_HandleDeferredClusterUnionUpdateProperties");
    FVar14 = (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleDeferredClusterUnionUpdateProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HandleDeferredClusterUnionUpdateProperties,*pFVar13,
                        L"FClusterUnionManager::HandleDeferredClusterUnionUpdateProperties",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar7 = false;
  bVar6 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_168.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x311);
        bVar7 = true;
        bVar6 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      goto LAB_1438bf385;
    }
  }
  bVar7 = bVar11;
  bVar6 = bVar10;
  bVar10 = false;
  FVar20 = local_160;
LAB_1438bf385:
  local_110 = &this->DeferredClusterUnionsForUpdateProperties;
  iVar22 = *(int *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x34;
  iVar2 = *(int *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x8;
  if (iVar2 != iVar22) {
    local_140 = &(this->DeferredClusterUnionsForUpdateProperties).field_0x10;
    iVar3 = *(int *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x28;
    uStack_144 = 1;
    local_130 = 0;
    iStack_134 = 0;
    if (iVar3 != 0) {
      puVar25 = *(uint **)&(this->DeferredClusterUnionsForUpdateProperties).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_140;
      }
      uVar21 = *puVar25;
      iVar23 = 0;
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar23;
        local_130 = local_130 + 0x20;
        iVar23 = iVar23 + 1;
        iStack_134 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1438bf42f;
        uVar21 = puVar25[lVar17 + 1];
      }
      uStack_144 = -uVar21 & uVar21;
      uVar1 = (ulonglong)uStack_144 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_120 = (int)lVar17;
      iStack_134 = local_130 + -1 + local_120;
      if (iVar3 < iStack_134) {
        iStack_134 = iVar3;
      }
    }
LAB_1438bf42f:
    iStack_128 = iVar2 - iVar22;
    local_150 = &this->DeferredClusterUnionsForUpdateProperties;
    uVar21 = *(uint *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x28;
    TStack_d0._padding_ = CONCAT44(uStack_144,iVar23);
    uStack_138 = 0xffffffff;
    TStack_d0.CurrentBitIndex = iStack_134;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    uVar26 = uVar21 & 0xffffffe0;
    uStack_12c = local_54;
    TStack_d0._28_4_ = local_54;
    TStack_d0.BaseBitIndex = local_130;
    uStack_b0 = CONCAT44(uStack_124,iStack_128);
    iVar22 = (int)uVar21 >> 5;
    iStack_148 = iVar23;
    local_d8 = local_150;
    TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
    if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = *(uint *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x28;
    if (uVar21 != uVar12) {
      puVar24 = *(undefined1 **)&(this->DeferredClusterUnionsForUpdateProperties).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = &(this->DeferredClusterUnionsForUpdateProperties).field_0x10;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar22 * 4);
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar22;
        uVar26 = uVar26 + 0x20;
        iVar22 = iVar22 + 1;
        uVar21 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_1438bf53f;
        uVar21 = *(uint *)(puVar24 + lVar17 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_11c = (int)lVar17;
      uVar21 = (uVar26 - 1) + local_11c;
      if ((int)uVar12 < (int)uVar21) {
        uVar21 = uVar12;
      }
    }
LAB_1438bf53f:
    while( true ) {
      pTVar8 = local_d8;
      if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_d0.CurrentBitIndex == uVar21) &&
          (TStack_d0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->DeferredClusterUnionsForUpdateProperties).field_0x10)) &&
         (pTVar8 == &this->DeferredClusterUnionsForUpdateProperties)) break;
      puVar25 = (uint *)((longlong)TStack_d0.CurrentBitIndex * 0x10 + *(longlong *)pTVar8);
      uVar26 = *puVar25;
      if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
        puVar24 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
        puVar18 = &(this->ClusterUnions).field_0x38;
        if (puVar24 != (undefined1 *)0x0) {
          puVar18 = puVar24;
        }
        uVar12 = *(uint *)(puVar18 +
                          (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & uVar26) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            puVar15 = (uint *)((longlong)(int)uVar12 * 0x170 + *(longlong *)&this->ClusterUnions);
            if (*puVar15 == uVar26) {
              pFVar19 = (FClusterUnion *)(puVar15 + 2);
              if (puVar15 == (uint *)0x0) {
                pFVar19 = (FClusterUnion *)0x0;
              }
              if (pFVar19 != (FClusterUnion *)0x0) {
                DeferredClusterUnionUpdate(this,pFVar19,puVar25[1]);
              }
              break;
            }
            uVar12 = puVar15[0x5a];
          } while (uVar12 != 0xffffffff);
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    local_e8 = 0;
    puVar24 = &(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x10;
    iVar23 = *(int *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x28;
    this_00 = &this->PendingParticlesToUndoChildToParentLock;
    iStack_100 = 0;
    uStack_fc = 1;
    iStack_ec = local_e8;
    if (iVar23 != 0) {
      puVar25 = *(uint **)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)puVar24;
      }
      uVar21 = *puVar25;
      while (uVar21 == 0) {
        lVar17 = (longlong)iStack_100;
        local_e8 = local_e8 + 0x20;
        iStack_100 = iStack_100 + 1;
        iStack_ec = iVar23;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
        goto LAB_1438bf6bf;
        uVar21 = puVar25[lVar17 + 1];
      }
      uStack_fc = -uVar21 & uVar21;
      uVar1 = (ulonglong)uStack_fc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_118 = (int)lVar17;
      iStack_ec = local_e8 + -1 + local_118;
      if (iVar23 < iStack_ec) {
        iStack_ec = iVar23;
      }
    }
LAB_1438bf6bf:
    iStack_e4 = iStack_134;
    iStack_e0 = *(int *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x8 -
                *(int *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x34;
    uVar21 = *(uint *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x28;
    uStack_f0 = 0xffffffff;
    uVar26 = uVar21 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uStack_fc,iStack_100);
    TStack_a0.CurrentBitIndex = iStack_ec;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar21 >> 5;
    TStack_a0._28_4_ = iStack_134;
    TStack_a0.BaseBitIndex = local_e8;
    uStack_80 = CONCAT44(uStack_dc,iStack_e0);
    local_108 = this_00;
    local_f8 = puVar24;
    local_a8 = this_00;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar24;
    if ((((int)uVar21 < 0) || (iVar23 < (int)uVar21)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = *(uint *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x28;
    if (uVar21 != uVar12) {
      puVar18 = *(undefined1 **)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x20
      ;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar24;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar22 * 4);
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar22;
        uVar26 = uVar26 + 0x20;
        iVar22 = iVar22 + 1;
        uVar21 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_1438bf7c0;
        uVar21 = *(uint *)(puVar18 + lVar17 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar21 = (uVar26 - 1) + (int)lVar17;
      if ((int)uVar12 < (int)uVar21) {
        uVar21 = uVar12;
      }
    }
LAB_1438bf7c0:
    while( true ) {
      pTVar9 = local_a8;
      if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
          (int)uStack_80) {
        `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_a0.CurrentBitIndex == uVar21) &&
          (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar24)) &&
         (pTVar9 == this_00)) break;
      puVar4 = *(undefined8 **)
                (*(longlong *)&pTVar9->Elements + (longlong)TStack_a0.CurrentBitIndex * 0x10);
      if (puVar4 != (undefined8 *)0x0) {
        pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)*puVar4,*(int *)(puVar4 + 1))
                   ->field0_0x0;
        pFVar16->Bits = pFVar16->Bits & 0xf7;
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
    bVar11 = 1 < (this->PendingParticlesToUndoChildToParentLock).HashSize;
    if (!bVar11) {
      TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    puVar24 = &(this->PendingParticlesToUndoChildToParentLock).Elements.field_0xc;
    *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x8 = 0;
    if (*(int *)puVar24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar24);
    }
    *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x30 = 0xffffffff
    ;
    *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x34 = 0;
    iVar23 = *(int *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x2c;
    *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x28 = 0;
    if ((iVar23 < 0) || (0x80 < iVar23)) {
      *(undefined4 *)&(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingParticlesToUndoChildToParentLock).Elements.field_0x10,0);
    }
    if (bVar11) {
      (this->PendingParticlesToUndoChildToParentLock).HashSize = 1;
      TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    TSet<TTuple<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags>,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>,FDefaultSetAllocator>
    ::Reset(local_110);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// HandleRemoveOperation @ 1438bf930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::HandleRemoveOperation
          (FClusterUnionManager *this,int param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,EClusterUnionOperationTiming param_3)

{
  TArray<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::EClusterUnionConnectivityOperation>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *this_00;
  bool *pbVar2;
  FScriptContainerElement *pFVar3;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  FPBDRigidsSOAs *this_02;
  FRigidClustering *this_03;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperation> FVar11;
  int *piVar12;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FRigidClusteredFlags_u_0 *pFVar16;
  IPhysicsProxyBase *pIVar17;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong *plVar19;
  EUpdateClusterUnionPropertiesFlags *pEVar20;
  undefined8 uVar21;
  byte bVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  byte *pbVar26;
  undefined ***pppuVar27;
  undefined1 *puVar28;
  longlong lVar29;
  ForElementType<FSetElementId> FVar30;
  undefined1 *puVar31;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar32;
  ForElementType<FSetElementId> FVar33;
  FName FVar34;
  uint uVar35;
  int iVar36;
  bool *pbVar37;
  uint uVar38;
  ulonglong uVar39;
  ForElementType<unsigned_int> FVar40;
  ulonglong uVar41;
  ulonglong *puVar42;
  ForElementType<FSetElementId> FVar43;
  FClusterUnion *pFVar44;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
  *this_04;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar45;
  uint *puVar46;
  FClusterUnionManager *pFVar47;
  undefined1 auStackY_328 [32];
  undefined1 local_2c7 [7];
  EClusterUnionGeometryOperation local_2c0 [8];
  FIdentityFunctor local_2b8 [4];
  int local_2b4;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_2a0;
  FName local_290;
  TPBDRigidParticleHandleImp<double,3,1> *local_288;
  uint local_280;
  uint local_27c;
  FClusterUnion *local_278;
  FColor_u_0 local_270;
  EClusterUnionOperationTiming local_26c;
  uint local_268 [2];
  FClusterUnionManager *local_260;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_258;
  int local_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_248;
  undefined4 local_240;
  uint uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  longlong local_230;
  TGeometryParticleHandleImp<double,3,1> *local_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  FName local_218;
  FName local_210;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined1 uStack_1ec;
  undefined2 uStack_1eb;
  undefined1 uStack_1e9;
  longlong *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  int local_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  int local_1b4;
  TPBDRigidParticleHandleImp<double,3,1> *local_1b0;
  TPBDRigidParticleHandleImp<double,3,1> *local_1a8;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
  *local_1a0;
  IPhysicsProxyBase *local_198;
  int local_190;
  int local_18c;
  TGeometryParticleHandleImp<double,3,1> *local_188;
  TPBDRigidParticleHandleImp<double,3,1> *local_180;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FName local_120;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_118;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_108;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  code *local_a8;
  undefined **local_98;
  FClusterUnionManager *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined **local_68;
  FClusterUnionManager *pFStack_60;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined1 uStack_51;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FVar11 = StatPtr_STAT_HandleRemoveOperation;
  local_27c = param_1;
  local_26c = param_3;
  local_260 = this;
  if (StatPtr_STAT_HandleRemoveOperation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperation>)0x0) {
    pFVar10 = ::FName::FName(&local_120,"STAT_HandleRemoveOperation");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleRemoveOperation,*pFVar10,
                        L"FClusterUnionManager::HandleRemoveOperation","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar11;
  bVar6 = false;
  bVar7 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_270.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_270._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_218.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x32f);
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_290 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar8 = true;
      goto LAB_1438bfaaf;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_290 = local_210;
  FVar34 = local_210;
LAB_1438bfaaf:
  if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
    puVar28 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = &(this->ClusterUnions).field_0x38;
    }
    iVar36 = *(int *)(puVar28 +
                     (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & param_1) * 4);
    if (iVar36 != -1) {
      while (piVar12 = (int *)((longlong)iVar36 * 0x170 + *(longlong *)&this->ClusterUnions),
            *piVar12 != param_1) {
        iVar36 = piVar12[0x5a];
        if (iVar36 == -1) goto LAB_1438c0b30;
      }
      pFVar44 = (FClusterUnion *)(piVar12 + 2);
      if (piVar12 == (int *)0x0) {
        pFVar44 = (FClusterUnion *)0x0;
      }
      local_278 = pFVar44;
      if ((pFVar44 == (FClusterUnion *)0x0) || (param_2->ArrayNum == 0)) goto LAB_1438c0b30;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FClusterUnionManager::HandleRemoveOperation'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_58 = this->MClustering->DoGenerateBreakingData;
      uStack_57 = CONCAT13(uStack_1ec,uStack_1f0._1_3_);
      uStack_53 = uStack_1eb;
      uStack_51 = uStack_1e9;
      local_88 = CONCAT17(uStack_1e9,CONCAT25(uStack_1eb,CONCAT41(uStack_57,local_58)));
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClusterUnionManager::HandleRemoveOperation'::__l2::<lambda_1>,void>
                 ::Call;
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FClusterUnionManager::HandleRemoveOperation'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      this->MClustering->DoGenerateBreakingData = false;
      pFStack_90 = this;
      pFStack_60 = this;
      pTVar13 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
                TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                          (&local_108,param_2);
      local_1f8 = *(undefined4 *)&pTVar13->DataPtr;
      uStack_1f4 = *(undefined4 *)((longlong)&pTVar13->DataPtr + 4);
      uVar38 = pTVar13->ArrayNum;
      uVar5 = *(undefined4 *)&pTVar13->field_0xc;
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      uStack_1ec = (undefined1)uVar5;
      uStack_1eb = (undefined2)((uint)uVar5 >> 8);
      uStack_1e9 = (undefined1)((uint)uVar5 >> 0x18);
      local_d8 = (ForElementType<unsigned_int>)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = -1;
      local_c4 = 0;
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      uStack_1f0 = uVar38;
      if (uVar38 == 0) goto LAB_1438bfebe;
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar38);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_f8,uVar38);
      uVar35 = 1;
      if (3 < uVar38) {
        uVar39 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_1b8 = (undefined4)lVar29;
        uVar35 = 1 << ((byte)lVar29 & 0x1f);
      }
      if ((local_b0 == 0) || ((int)local_b0 < (int)uVar35)) {
        local_b0 = uVar35;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
        }
        if (uVar35 != 0) {
          uVar23 = uVar35;
          if (uVar35 < 2) {
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              uVar23 = 0;
              goto LAB_1438bfcca;
            }
          }
          else {
LAB_1438bfcca:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_b8,0,uVar23,4);
          }
          if (0 < (int)uVar35) {
            uVar39 = 0;
            uVar41 = (ulonglong)uVar35;
            do {
              FVar24.Data = local_c0;
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FVar24.Data = local_b8.Data;
              }
              uVar14 = uVar39 & (longlong)(int)uVar35 - 1U;
              uVar39 = uVar39 + 1;
              *(undefined4 *)(FVar24.Data + uVar14 * 4) = 0xffffffff;
              uVar41 = uVar41 - 1;
            } while (uVar41 != 0);
          }
        }
        if (local_b0 != 0) {
          pTStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
          local_250 = 0;
          uStack_23c = 0;
          iStack_238 = 0;
          uStack_24c = 1;
          if (local_d0 != 0) {
            FVar40 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
            if (local_d8 != (ForElementType<unsigned_int>)0x0) {
              FVar40 = local_d8;
            }
            uVar35 = *(uint *)FVar40;
            iStack_238 = 0;
            while (uVar35 == 0) {
              iStack_238 = iStack_238 + 0x20;
              lVar29 = (longlong)local_250;
              local_250 = local_250 + 1;
              if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_250)
              goto LAB_1438bfdd9;
              uVar35 = ((uint *)((longlong)FVar40 + 4))[lVar29];
            }
            uStack_24c = -uVar35 & uVar35;
            uVar39 = (ulonglong)uStack_24c * 2 + 1;
            lVar29 = 0x3f;
            if (uVar39 != 0) {
              for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            local_1b4 = (int)lVar29;
            uStack_23c = local_1b4 + -1 + iStack_238;
            if ((int)uStack_23c <= (int)local_d0) goto LAB_1438bfde0;
LAB_1438bfdd9:
            uStack_23c = local_d0;
          }
LAB_1438bfde0:
          local_240 = 0xffffffff;
          local_178 = (longlong *)local_f8;
          local_170._padding_ = CONCAT44(uStack_24c,local_250);
          local_170.CurrentBitIndex = uStack_23c;
          local_170.UnvisitedBitMask = 0xffffffff;
          local_170._28_4_ = uStack_234;
          local_170.BaseBitIndex = iStack_238;
          uVar35 = uStack_23c;
          local_170.Array = pTStack_248;
          if ((int)uStack_23c < (int)local_d0) {
            do {
              puVar42 = (ulonglong *)((longlong)(int)uVar35 * 0x10 + *local_178);
              uVar23 = ((uint)(*puVar42 >> 0x14) & 0xffff ^ (uint)(*puVar42 >> 4)) * -0x7a143595;
              uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
              uVar23 = (uVar23 >> 0x10 ^ uVar23) & local_b0 - 1;
              *(uint *)((longlong)puVar42 + 0xc) = uVar23;
              FVar24.Data = local_c0;
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FVar24.Data = local_b8.Data;
              }
              uVar39 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar23;
              *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(FVar24.Data + uVar39 * 4);
              *(uint *)(FVar24.Data + uVar39 * 4) = uVar35;
              local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
              uVar35 = local_170.CurrentBitIndex;
            } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
          }
        }
      }
LAB_1438bfebe:
      pbVar37 = (bool *)CONCAT44(uStack_1f4,local_1f8);
      pbVar2 = pbVar37 + (longlong)(int)uVar38 * 8;
      for (; pbVar37 != pbVar2; pbVar37 = pbVar37 + 8) {
        TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                  ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                    *)local_f8,&local_180,pbVar37);
      }
      local_198 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                            ((TGeometryParticleHandleImp<double,3,1> *)pFVar44->InternalCluster);
      uVar38 = local_f8._8_4_ - local_c4;
      local_2b0.Data = (FScriptContainerElement *)0x0;
      local_2a8 = 0;
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      if (0 < (int)uVar38) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar38,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
      }
      uVar38 = local_d0;
      iStack_1e0 = 0;
      local_1c8 = 0;
      uStack_1dc = 1;
      uStack_1cc = 0;
      if (local_d0 != 0) {
        FVar40 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
        if (local_d8 != (ForElementType<unsigned_int>)0x0) {
          FVar40 = local_d8;
        }
        uVar35 = *(uint *)FVar40;
        while (uVar35 == 0) {
          lVar29 = (longlong)iStack_1e0;
          local_1c8 = local_1c8 + 0x20;
          iStack_1e0 = iStack_1e0 + 1;
          uStack_1cc = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1e0)
          goto LAB_1438bffe4;
          uVar35 = ((uint *)((longlong)FVar40 + 4))[lVar29];
        }
        uStack_1dc = -uVar35 & uVar35;
        uVar39 = (ulonglong)uStack_1dc * 2 + 1;
        lVar29 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_18c = (int)lVar29;
        uStack_1cc = local_18c + -1 + local_1c8;
        if ((int)local_d0 < (int)uStack_1cc) {
          uStack_1cc = local_d0;
        }
      }
LAB_1438bffe4:
      iStack_1c0 = local_f8._8_4_ - local_c4;
      local_1e8 = (longlong *)local_f8;
      local_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uVar35 = local_d0 & 0xffffffe0;
      uStack_1d0 = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_1cc;
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
      iVar36 = (int)local_d0 >> 5;
      TStack_148._28_4_ = uStack_1cc;
      TStack_148.BaseBitIndex = local_1c8;
      uStack_128 = CONCAT44(uStack_1bc,iStack_1c0);
      bVar22 = (byte)local_d0;
      uStack_1c4 = uStack_1cc;
      local_150 = local_1e8;
      TStack_148.Array = local_1d8;
      if (((int)local_d0 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar47 = local_260;
      if (uVar38 != local_d0) {
        FVar40 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
        if (local_d8 != (ForElementType<unsigned_int>)0x0) {
          FVar40 = local_d8;
        }
        uVar38 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar40 + (longlong)iVar36 * 4);
        while (uVar38 == 0) {
          lVar29 = (longlong)iVar36;
          uVar35 = uVar35 + 0x20;
          iVar36 = iVar36 + 1;
          uVar38 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
          goto LAB_1438c00f4;
          uVar38 = ((uint *)((longlong)FVar40 + 4))[lVar29];
        }
        uVar39 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_190 = (int)lVar29;
        uVar38 = local_190 + -1 + uVar35;
        if ((int)local_d0 < (int)uVar38) {
          uVar38 = local_d0;
        }
      }
LAB_1438c00f4:
      while( true ) {
        plVar19 = local_150;
        if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
          local_2c7[0] = 0;
          `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2c7);
        }
        FVar34 = local_290;
        if (((TStack_148.CurrentBitIndex == uVar38) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar19 == (longlong *)local_f8)) break;
        pFVar3 = (pFVar44->ChildParticles).AllocatorInstance.Data;
        this_01 = *(TGeometryParticleHandleImp<double,3,1> **)
                   (*plVar19 + (longlong)TStack_148.CurrentBitIndex * 0x10);
        for (pFVar15 = pFVar3; pFVar15 != pFVar3 + (longlong)(pFVar44->ChildParticles).ArrayNum * 8;
            pFVar15 = pFVar15 + 8) {
          if (*(TGeometryParticleHandleImp<double,3,1> **)pFVar15 == this_01) {
            local_2b4 = (int)((longlong)pFVar15 - (longlong)pFVar3 >> 3);
            if (local_2b4 != -1) {
              if (((local_2b0.Data <= (FScriptContainerElement *)&local_2b4) &&
                  ((FScriptContainerElement *)&local_2b4 <
                   local_2b0.Data + (longlong)local_2a8._4_4_ * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_2a8 == local_2a8._4_4_) {
                iVar36 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_2b0,(int *)((longlong)&local_2a8 + 4));
                local_2a8 = CONCAT44(local_2a8._4_4_,iVar36);
              }
              lVar29 = (longlong)(int)local_2a8;
              local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 1);
              *(int *)(local_2b0.Data + lVar29 * 4) = local_2b4;
              pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (2 < *(byte *)((longlong)&this_01->_padding_ + 4)) {
                pTVar25 = this_01;
              }
              if (pTVar25 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                     ((TPBDRigidClusteredParticles<double,3> *)pTVar25->_padding_,
                                      (int)pTVar25->_padding_)->field0_0x0;
                pFVar16->Bits = pFVar16->Bits & 0xf7;
              }
              pIVar17 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_01);
              if (((pIVar17 != (IPhysicsProxyBase *)0x0) &&
                  (pIVar17->ParentProxy != (IPhysicsProxyBase *)0x0)) &&
                 (pIVar17->ParentProxy->Type == ClusterUnionProxy)) {
                pIVar17->ParentProxy = (IPhysicsProxyBase *)0x0;
              }
              pTVar1 = &pFVar44->PendingConnectivityOperations;
              pFVar3 = (pTVar1->AllocatorInstance).Data;
              uStack_220 = 1;
              local_228 = this_01;
              if (((pFVar3 <= (FScriptContainerElement *)&local_228) &&
                  ((FScriptContainerElement *)&local_228 <
                   pFVar3 + (longlong)(pFVar44->PendingConnectivityOperations).ArrayMax * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar36 = (pFVar44->PendingConnectivityOperations).ArrayNum;
              piVar12 = &(pFVar44->PendingConnectivityOperations).ArrayMax;
              if (iVar36 == *piVar12) {
                iVar36 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar1->AllocatorInstance,piVar12);
                (pFVar44->PendingConnectivityOperations).ArrayNum = iVar36;
              }
              (pFVar44->PendingConnectivityOperations).ArrayNum = iVar36 + 1;
              local_2c0[0] = Remove;
              pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
              *(TGeometryParticleHandleImp<double,3,1> **)pFVar3 = local_228;
              *(ulonglong *)(pFVar3 + 8) = CONCAT71(uStack_21f,uStack_220);
              local_188 = this_01;
              pTVar18 = TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&>
                                  (&pFVar44->PendingGeometryOperations,1,local_2c0);
              TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                        (pTVar18,(TPBDRigidParticleHandleImp<double,3,1> **)&local_188);
              pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&this_01->_padding_ + 4)) {
                pTVar25 = this_01;
              }
              this_02 = (FPBDRigidsSOAs *)pFVar47->MEvolution->_padding_;
              if (((pTVar25 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                  (bVar9 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                           Contains(&this_02->ActiveParticlesMapArray,
                                    (TPBDRigidParticleHandleImp<double,3,1> *)pTVar25), !bVar9)) &&
                 (bVar9 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                          Contains(&this_02->MovingKinematicsMapArray,
                                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar25), !bVar9)) {
                FPBDRigidsSOAs::
                AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          (this_02,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar25,
                           &this_02->TransientDirtyMapArray);
                if (CVars::bChaosSolverCheckParticleViews != false) {
                  FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_02,this_01);
                }
                FPBDRigidsSOAs::UpdateViews(this_02);
              }
            }
            goto LAB_1438c0186;
          }
        }
        local_2b4 = -1;
LAB_1438c0186:
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
      if ((int)local_2a8 != 0) {
        AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                  ((int *)local_2b0.Data,(int)local_2a8,local_2b8[0],(TLess<void> *)local_2b8);
        uVar39 = local_2a8 & 0xffffffff;
        local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a0.ArrayNum = 0;
        local_2a0.ArrayMax = 0;
        if ((int)local_2a8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar39);
        }
        if (0 < (int)local_2a8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_2a8,&local_2a0.AllocatorInstance,0,&local_2a0.ArrayMax);
          uVar39 = local_2a8 & 0xffffffff;
        }
        local_280 = (int)uVar39 - 1;
        if (-1 < (int)local_280) {
          this_04 = (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
                     *)&pFVar44->ChildProperties;
          pTVar18 = &local_278->ChildParticles;
          lVar29 = (longlong)(int)local_280 * 4;
          local_258 = pTVar18;
          local_1a0 = this_04;
          do {
            uVar38 = 0;
            if ((int)local_280 < (int)uVar39) {
              uVar38 = ~local_280 >> 0x1f;
            }
            local_230 = lVar29;
            if ((uVar38 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar38 = *(uint *)(local_2b0.Data + lVar29);
            uVar23 = ~uVar38 >> 0x1f;
            uVar35 = 0;
            if ((int)uVar38 < pTVar18->ArrayNum) {
              uVar35 = uVar23;
            }
            if ((uVar35 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_288 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         ((pTVar18->AllocatorInstance).Data + (longlong)(int)uVar38 * 8);
            uVar35 = ((uint)((ulonglong)local_288 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_288 >> 4)) * -0x7a143595;
            uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
            if (*(int *)&(local_278->ChildProperties).field_0x8 !=
                *(int *)&(this_04->Elements).field_0x34) {
              FVar43 = (this_04->Hash).SecondaryData;
              FVar30 = (ForElementType<FSetElementId>)&this_04->Hash;
              if (FVar43 != (ForElementType<FSetElementId>)0x0) {
                FVar30 = FVar43;
              }
              iVar36 = *(int *)((longlong)FVar30 +
                               (ulonglong)(this_04->HashSize - 1U & (uVar35 >> 0x10 ^ uVar35)) * 4);
              if (iVar36 != -1) {
                do {
                  lVar29 = *(longlong *)&this_04->Elements + (longlong)iVar36 * 0x18;
                  if (*(TPBDRigidParticleHandleImp<double,3,1> **)
                       (*(longlong *)&this_04->Elements + (longlong)iVar36 * 0x18) == local_288) {
                    pbVar26 = (byte *)(lVar29 + 8);
                    if (lVar29 == 0) {
                      pbVar26 = (byte *)0x0;
                    }
                    if (pbVar26 != (byte *)0x0) {
                      if ((*pbVar26 & 1) != 0) {
                        if (((local_2a0.AllocatorInstance.Data <=
                              (FScriptContainerElement *)&local_288) &&
                            ((FScriptContainerElement *)&local_288 <
                             local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayMax * 8))
                           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar9)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
                          iVar36 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax
                                             );
                          local_2a0.ArrayNum = iVar36;
                        }
                        lVar29 = (longlong)local_2a0.ArrayNum;
                        local_2a0.ArrayNum = local_2a0.ArrayNum + 1;
                        *(TPBDRigidParticleHandleImp<double,3,1> **)
                         (local_2a0.AllocatorInstance.Data + lVar29 * 8) = local_288;
                      }
                      local_1b0 = local_288;
                      if (*(int *)&(local_278->ChildProperties).field_0x8 !=
                          *(int *)&(local_278->ChildProperties).field_0x34) {
                        uVar35 = ((uint)((ulonglong)local_288 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)local_288 >> 4)) * -0x7a143595;
                        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
                        TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
                        ::RemoveImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*>
                                  (this_04,uVar35 >> 0x10 ^ uVar35,&local_1b0);
                      }
                    }
                    break;
                  }
                  iVar36 = *(int *)(lVar29 + 0x10);
                } while (iVar36 != -1);
              }
            }
            uVar35 = 0;
            if ((int)uVar38 < pTVar18->ArrayNum) {
              uVar35 = uVar23;
            }
            if ((uVar35 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar18->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
            iVar36 = pTVar18->ArrayNum + ~uVar38;
            if (iVar36 != 0) {
              memmove(pFVar3,pFVar3 + 8,(longlong)iVar36 << 3);
            }
            pTVar18->ArrayNum = pTVar18->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar18->AllocatorInstance,pTVar18->ArrayNum,&pTVar18->ArrayMax);
            pFVar47 = local_260;
            pTVar45 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)local_288->field_0xc) {
              pTVar45 = local_288;
            }
            if (pTVar45 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              uVar38 = ((uint)((ulonglong)pTVar45 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pTVar45 >> 4)) * -0x7a143595;
              uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
              uVar38 = uVar38 >> 0x10 ^ uVar38;
              if (*(int *)&(local_260->PendingChildToParentUpdates).field_0x8 !=
                  *(int *)&(local_260->PendingChildToParentUpdates).field_0x34) {
                puVar28 = *(undefined1 **)&(local_260->PendingChildToParentUpdates).field_0x40;
                puVar31 = &(local_260->PendingChildToParentUpdates).field_0x38;
                if (puVar28 != (undefined1 *)0x0) {
                  puVar31 = puVar28;
                }
                iVar36 = *(int *)(puVar31 +
                                 (ulonglong)
                                 (*(int *)&(local_260->PendingChildToParentUpdates).field_0x48 - 1U
                                 & uVar38) * 4);
                if (iVar36 != -1) {
                  do {
                    plVar19 = (longlong *)
                              ((longlong)iVar36 * 0x90 +
                              *(longlong *)&local_260->PendingChildToParentUpdates);
                    if ((TPBDRigidParticleHandleImp<double,3,1> *)*plVar19 == pTVar45) {
                      pTVar32 = (TPBDRigidParticleHandleImp<double,3,1> *)(plVar19 + 2);
                      if (plVar19 == (longlong *)0x0) {
                        pTVar32 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                      }
                      if ((pTVar32 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                         (*(uint *)&pTVar32[4].field_0x4 == local_27c)) {
                        local_1a8 = pTVar45;
                        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>,FDefaultSetAllocator>
                        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>,FDefaultSetAllocator>
                                    *)&local_260->PendingChildToParentUpdates,uVar38,
                                   (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_1a8);
                      }
                      break;
                    }
                    iVar36 = (int)plVar19[0x10];
                  } while (iVar36 != -1);
                }
              }
              this_00 = &pFVar47->PendingParticlesToUndoChildToParentLock;
              if (*(int *)&(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.field_0x8 !=
                  *(int *)&(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.field_0x34) {
                FVar30 = (pFVar47->PendingParticlesToUndoChildToParentLock).Hash.SecondaryData;
                FVar43 = (ForElementType<FSetElementId>)
                         &(pFVar47->PendingParticlesToUndoChildToParentLock).Hash;
                FVar33 = FVar43;
                if (FVar30 != (ForElementType<FSetElementId>)0x0) {
                  FVar33 = FVar30;
                }
                uVar38 = *(uint *)((longlong)FVar33 +
                                  ((longlong)
                                   (pFVar47->PendingParticlesToUndoChildToParentLock).HashSize - 1U
                                  & (longlong)(int)uVar38) * 4);
                pTVar18 = local_258;
                if (uVar38 != 0xffffffff) {
LAB_1438c08a0:
                  lVar29 = (longlong)(int)uVar38 * 0x10;
                  if (*(TPBDRigidParticleHandleImp<double,3,1> **)
                       (lVar29 + *(longlong *)&this_00->Elements) != pTVar45)
                  goto code_r0x0001438c08ad;
                  if (((int)uVar38 < 0) ||
                     (*(int *)&(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.
                               field_0x28 <= (int)uVar38)) {
LAB_1438c091c:
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Elements.IsValidIndex(ElementIndex)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                       ,0x2ab,
                                       L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                      );
                    if (bVar9) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  else {
                    if ((*(int *)&(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.
                                  field_0x28 <= (int)uVar38) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    puVar28 = *(undefined1 **)
                               &(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.
                                field_0x20;
                    puVar31 = &(pFVar47->PendingParticlesToUndoChildToParentLock).Elements.
                               field_0x10;
                    if (puVar28 != (undefined1 *)0x0) {
                      puVar31 = puVar28;
                    }
                    uVar35 = uVar38;
                    if ((int)uVar38 < 0) {
                      uVar35 = uVar38 + 0x1f;
                    }
                    if ((*(uint *)(puVar31 + (longlong)((int)uVar35 >> 5) * 4) >> (uVar38 & 0x1f) &
                        1) == 0) goto LAB_1438c091c;
                  }
                  FVar30 = (pFVar47->PendingParticlesToUndoChildToParentLock).Hash.SecondaryData;
                  lVar29 = *(longlong *)&this_00->Elements + lVar29;
                  if (FVar30 != (ForElementType<FSetElementId>)0x0) {
                    FVar43 = FVar30;
                  }
                  puVar46 = (uint *)((longlong)FVar43 + (longlong)*(int *)(lVar29 + 0xc) * 4);
                  while( true ) {
                    uVar35 = *puVar46;
                    if ((uVar35 == 0xffffffff) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("NextElementIndex != INDEX_NONE",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                           ,0x2b5,L"Corrupt hash"), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (uVar35 == uVar38) break;
                    puVar46 = (uint *)(*(longlong *)&this_00->Elements + 8 +
                                      (longlong)(int)uVar35 * 0x10);
                  }
                  *puVar46 = *(uint *)(lVar29 + 8);
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)this_00,uVar38,1);
                  pTVar18 = local_258;
                  this_04 = local_1a0;
                }
              }
            }
LAB_1438c09ca:
            local_280 = local_280 - 1;
            lVar29 = local_230 + -4;
            FVar34 = local_290;
            pFVar44 = local_278;
            pFVar47 = local_260;
            local_230 = lVar29;
            if ((int)local_280 < 0) break;
            uVar39 = local_2a8 & 0xffffffff;
          } while( true );
        }
        this_03 = pFVar47->MClustering;
        pTVar18 = TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  ::Array((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                           *)local_f8,&local_118);
        FRigidClustering::RemoveParticlesFromCluster(this_03,pFVar44->InternalCluster,pTVar18);
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
        bVar9 = FRigidClustering::ShouldThrottleParticleRelease(pFVar47->MClustering);
        if (bVar9) {
          FRigidClustering::ThrottleReleasedParticlesIfNecessary(pFVar47->MClustering,&local_2a0);
        }
        TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy
                  ((TGeometryParticleHandleImp<double,3,1> *)pFVar44->InternalCluster,local_198);
        if (local_26c == Defer) {
          local_268[0] = local_27c;
          pEVar20 = TMapBase<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
                    ::FindOrAddImpl<int_const_&>
                              (&pFVar47->DeferredClusterUnionsForUpdateProperties,local_27c,
                               (int *)local_268);
          *pEVar20 = *pEVar20 |
                     (ConnectivityCheck|IncrementalGenerateGeometry|UpdateKinematicProperties|
                     IncrementalGenerateConnectionGraph);
        }
        else if (local_26c == Immediate) {
          DeferredClusterUnionUpdate
                    (pFVar47,pFVar44,
                     ConnectivityCheck|IncrementalGenerateGeometry|UpdateKinematicProperties|
                     IncrementalGenerateConnectionGraph);
        }
        if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.AllocatorInstance.Data);
        }
      }
      if (local_2b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data);
      }
      local_b0 = 0;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      UE::Core::Private::Function::CheckCallable(local_a8);
      pcVar4 = local_a8;
      pppuVar27 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar27 = local_80;
      }
      uVar21 = (*(code *)(*pppuVar27)[1])();
      (*pcVar4)(uVar21);
      if (local_a8 != (code *)0x0) {
        pppuVar27 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar27 = local_80;
        }
        (*(code *)(*pppuVar27)[2])();
      }
    }
  }
LAB_1438c0b30:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
code_r0x0001438c08ad:
  uVar38 = *(uint *)(lVar29 + 8 + *(longlong *)&this_00->Elements);
  if (uVar38 == 0xffffffff) goto LAB_1438c09ca;
  goto LAB_1438c08a0;
}

// HandleRemoveOperationWithClusterLookup @ 1438c0bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::HandleRemoveOperationWithClusterLookup
          (FClusterUnionManager *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,EClusterUnionOperationTiming param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  EClusterUnionOperationTiming EVar7;
  FClusterUnionManager *this_00;
  longlong *plVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperationWithClusterLookup> FVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  byte bVar13;
  uint *puVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  FNameEntryId FVar17;
  FName FVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  int *piVar22;
  uint uVar23;
  undefined1 auStackY_1b8 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  FColor_u_0 local_154;
  uint local_150;
  int local_14c;
  EClusterUnionOperationTiming local_148;
  uint local_140;
  uint uStack_13c;
  FName local_138;
  FName local_130;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TPBDRigidParticleHandleImp<double,3,1> *local_f0;
  uint *local_e8;
  TPBDRigidParticleHandleImp<double,3,1> *local_e0;
  FClusterUnionManager *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FName local_a0;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FVar11 = StatPtr_STAT_HandleRemoveOperationWithClusterLookup;
  local_148 = param_2;
  local_d8 = this;
  if (StatPtr_STAT_HandleRemoveOperationWithClusterLookup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperationWithClusterLookup>)0x0) {
    pFVar10 = ::FName::FName(&local_a0,"STAT_HandleRemoveOperationWithClusterLookup");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_HandleRemoveOperationWithClusterLookup>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HandleRemoveOperationWithClusterLookup,*pFVar10,
                        L"FClusterUnionManager::HandleRemoveOperationWithClusterLookup",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar19 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar17.Value;
        local_138.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x3ac);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar17.Value;
      uStack_13c = uVar19;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      goto LAB_1438c0d17;
    }
  }
  bVar5 = false;
  FVar18 = local_130;
LAB_1438c0d17:
  pFVar21 = (param_1->AllocatorInstance).Data;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar20 = param_1->ArrayNum;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  pFVar1 = pFVar21 + (longlong)iVar20 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar20) {
      local_158 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    uVar19 = local_60;
    if (pFVar21 == pFVar1) break;
    local_e0 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar21;
    local_150 = FindClusterUnionIndexFromParticle(this,local_e0);
    if (local_150 != 0xffffffff) {
      if (local_88._8_4_ != local_54) {
        FVar16 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_48;
        }
        uVar19 = *(uint *)((longlong)FVar16 + (ulonglong)(local_40 - 1U & local_150) * 4);
        while (uVar19 != 0xffffffff) {
          puVar14 = (uint *)((longlong)(int)uVar19 * 0x60 + local_88._0_8_);
          if (*puVar14 == local_150) {
            if (puVar14 != (uint *)0x0) goto LAB_1438c0e16;
            break;
          }
          uVar19 = puVar14[0x16];
        }
      }
      local_e8 = &local_150;
      TSet<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)local_88,(uint)&local_14c,(TKeyInitializer<int_const_&> *)(ulonglong)local_150,
                 (bool *)&local_e8);
      puVar14 = (uint *)((longlong)local_14c * 0x60 + local_88._0_8_);
LAB_1438c0e16:
      TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)(puVar14 + 2),&local_f0,(bool *)&local_e0);
    }
    pFVar21 = pFVar21 + 8;
  }
  iStack_118 = 0;
  local_100 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar23 = *puVar14;
    while (uVar23 == 0) {
      lVar15 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_1438c0eb1;
      uVar23 = puVar14[lVar15 + 1];
    }
    uStack_114 = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_140 = (uint)lVar15;
    uStack_104 = (local_140 - 1) + local_100;
    if ((int)local_60 < (int)uStack_104) {
      uStack_104 = local_60;
    }
  }
LAB_1438c0eb1:
  local_120 = (longlong *)local_88;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar23 = local_60 & 0xffffffe0;
  iStack_f8 = local_88._8_4_ - local_54;
  uStack_108 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_104;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar20 = (int)local_60 >> 5;
  TStack_c8._28_4_ = uStack_104;
  TStack_c8.BaseBitIndex = local_100;
  uStack_a8 = CONCAT44(uStack_f4,iStack_f8);
  bVar13 = (byte)local_60;
  uStack_fc = uStack_104;
  local_d0 = local_120;
  TStack_c8.Array = local_110;
  if (((int)local_60 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = local_d8;
  EVar7 = local_148;
  if (uVar19 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar14[iVar20];
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1438c0fad;
      uVar19 = puVar14[lVar15 + 1];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar19 = (int)lVar15 + -1 + uVar23;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_1438c0fad:
  while( true ) {
    plVar8 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_157);
    }
    if (((TStack_c8.CurrentBitIndex == uVar19) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar8 == (longlong *)local_88)) break;
    piVar22 = (int *)(*plVar8 + (longlong)TStack_c8.CurrentBitIndex * 0x60);
    pTVar12 = TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::Array((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(piVar22 + 2),&local_98);
    HandleRemoveOperation(this_00,*piVar22,pTVar12,EVar7);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// HandleUpdateChildToParentOperation @ 1438c10d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::HandleUpdateChildToParentOperation
          (FClusterUnionManager *this,int param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  double *pdVar1;
  FName *pFVar2;
  float fVar3;
  undefined8 uVar4;
  FName FVar5;
  FName FVar6;
  longlong lVar7;
  FPBDRigidsSOAs *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent> FVar33;
  int *piVar34;
  FClusterUnionChildToParentUpdate *pFVar35;
  TRigidTransform<double,3> *pTVar36;
  FRigidClusteredFlags_u_0 *pFVar37;
  TVector<double,3> *pTVar38;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_00;
  EUpdateClusterUnionPropertiesFlags *pEVar39;
  uint uVar40;
  ulonglong uVar41;
  FName FVar42;
  undefined1 *puVar43;
  FName FVar44;
  FName FVar45;
  longlong lVar46;
  FName this_01;
  uint uVar47;
  FName FVar48;
  FName FVar49;
  undefined1 auStackY_3f8 [32];
  undefined1 local_396 [6];
  EClusterUnionGeometryOperation local_390 [8];
  FName local_388;
  uint local_380;
  FColor_u_0 local_37c;
  uint local_378;
  uint local_370 [2];
  FName local_368;
  FName local_360;
  FName *local_358;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_350;
  FName local_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  FName local_338;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  FName local_328;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_318;
  longlong local_310;
  FName local_308;
  FName local_300;
  FName *local_2f8;
  double local_2e0;
  FName local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  FVar48.ComparisonIndex.Value = 0;
  FVar48.Number = 0;
  uVar47 = 0;
  FVar33 = StatPtr_STAT_UpdateClusterUnionParticlesChildToParent;
  local_380 = param_1;
  local_350 = param_2;
  if (StatPtr_STAT_UpdateClusterUnionParticlesChildToParent ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent>)0x0) {
    pFVar32 = ::FName::FName(&local_2d8,"STAT_UpdateClusterUnionParticlesChildToParent");
    FVar33 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateClusterUnionParticlesChildToParent,*pFVar32,
                        L"FClusterUnionManager::UpdateClusterUnionParticlesChildToParent",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar45 = *(FName *)FVar33;
  bVar22 = false;
  bVar23 = false;
  local_328.ComparisonIndex.Value = 0;
  local_328.Number = 0;
  bVar28 = false;
  bVar29 = false;
  if ((FVar45.ComparisonIndex.Value.Value != 0) || (FVar45.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_37c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_37c._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar22 = false;
      bVar23 = true;
      bVar28 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_368.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_368.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_368,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x58c);
        bVar22 = true;
        bVar23 = true;
        bVar28 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_388 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar28 = true;
      goto LAB_1438c124b;
    }
  }
  bVar23 = bVar29;
  bVar22 = bVar28;
  bVar28 = false;
  FVar45 = local_328;
LAB_1438c124b:
  dVar27 = _UNK_150689688;
  dVar26 = ___xmm_3ff00000000000003ff0000000000000;
  dVar25 = _UNK_150689518;
  dVar24 = ___xmm_00000000000000003ff0000000000000;
  if (*(int *)&(this->ClusterUnions).field_0x8 != *(int *)&(this->ClusterUnions).field_0x34) {
    puVar43 = *(undefined1 **)&(this->ClusterUnions).field_0x40;
    if (puVar43 == (undefined1 *)0x0) {
      puVar43 = &(this->ClusterUnions).field_0x38;
    }
    iVar30 = *(int *)(puVar43 +
                     (ulonglong)(*(int *)&(this->ClusterUnions).field_0x48 - 1U & param_1) * 4);
    if (iVar30 != -1) {
      do {
        piVar34 = (int *)((longlong)iVar30 * 0x170 + *(longlong *)&this->ClusterUnions);
        if (*piVar34 == param_1) {
          FVar49 = (FName)(piVar34 + 2);
          if (piVar34 == (int *)0x0) {
            FVar49 = FVar48;
          }
          local_360 = FVar49;
          if (FVar49 != (FName)0x0) {
            local_378 = local_350->ArrayNum;
            uVar41 = (ulonglong)(int)local_378;
            if (local_378 != 0) {
              pFVar32 = (FName *)(local_350->AllocatorInstance).Data;
              local_2f8 = pFVar32 + uVar41;
              bVar29 = false;
              goto LAB_1438c136a;
            }
          }
          break;
        }
        iVar30 = piVar34[0x5a];
      } while (iVar30 != -1);
    }
  }
LAB_1438c1aec:
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  return;
LAB_1438c136a:
  pFVar2 = local_2f8;
  local_358 = pFVar32;
  if (local_350->ArrayNum != (int)uVar41) {
    local_396[0] = 0;
    `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_396);
  }
  if (pFVar32 == pFVar2) {
    if (bVar29) {
      FVar49 = *(FName *)FVar49;
      pFVar8 = (FPBDRigidsSOAs *)this->MEvolution->_padding_;
      if (1 < *(byte *)((longlong)FVar49 + 0xc)) {
        FVar48 = FVar49;
      }
      if ((((FVar48 != (FName)0x0) &&
           (bVar29 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                               (&pFVar8->ActiveParticlesMapArray,
                                (TPBDRigidParticleHandleImp<double,3,1> *)FVar48), !bVar29)) &&
          (bVar29 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                              (&pFVar8->MovingKinematicsMapArray,
                               (TPBDRigidParticleHandleImp<double,3,1> *)FVar48), !bVar29)) &&
         (FPBDRigidsSOAs::
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (pFVar8,(TPBDRigidParticleHandleImp<double,3,1> *)FVar48,
                     &pFVar8->TransientDirtyMapArray),
         CVars::bChaosSolverCheckParticleViews != false)) {
        FPBDRigidsSOAs::CheckParticleViewMaskImpl
                  (pFVar8,(TGeometryParticleHandleImp<double,3,1> *)FVar49);
      }
      local_370[0] = local_380;
      pEVar39 = TMapBase<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
                ::FindOrAddImpl<int_const_&>
                          (&this->DeferredClusterUnionsForUpdateProperties,local_380,
                           (int *)local_370);
      *pEVar39 = *pEVar39 | (IncrementalGenerateGeometry|IncrementalGenerateConnectionGraph);
    }
    goto LAB_1438c1aec;
  }
  FVar5 = *pFVar32;
  if (FVar5 == (FName)0x0) goto LAB_1438c1aec;
  FVar6 = *(FName *)((longlong)FVar49 + 0x10);
  FVar44 = FVar48;
  if (1 < *(byte *)((longlong)FVar5 + 0xc)) {
    FVar44 = FVar5;
  }
  this_01 = FVar48;
  if (2 < *(byte *)((longlong)FVar5 + 0xc)) {
    this_01 = FVar5;
  }
  for (FVar42 = FVar6; local_388 = this_01,
      FVar42 != (FName)((longlong)FVar6 +
                       (longlong)(int)(((FName *)((longlong)FVar49 + 0x18))->ComparisonIndex).Value
                       * 8); FVar42 = (FName)((longlong)FVar42 + 8)) {
    if (*(FName *)FVar42 == FVar44) {
      if ((((int)((longlong)FVar42 - (longlong)FVar6 >> 3) != -1) &&
          (*(FName *)FVar49 != (FName)0x0)) &&
         ((this_01 != (FName)0x0 &&
          (pFVar35 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
                     ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
                             *)&this->PendingChildToParentUpdates,
                            (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_01),
          pFVar35 != (FClusterUnionChildToParentUpdate *)0x0)))) {
        if (pFVar35->ClusterUnionIndex != local_380) goto LAB_1438c19ef;
        local_138.Rotation.XY.m128d_f64[0] = (pFVar35->ChildToParent).Rotation.XY.m128d_f64[0];
        local_138.Rotation.XY.m128d_f64[1] = (pFVar35->ChildToParent).Rotation.XY.m128d_f64[1];
        local_138.Rotation.ZW.m128d_f64[0] = (pFVar35->ChildToParent).Rotation.ZW.m128d_f64[0];
        local_138.Rotation.ZW.m128d_f64[1] = (pFVar35->ChildToParent).Rotation.ZW.m128d_f64[1];
        dVar10 = (pFVar35->ChildToParent).Rotation.XY.m128d_f64[0];
        dVar11 = (pFVar35->ChildToParent).Rotation.XY.m128d_f64[1];
        dVar12 = (pFVar35->ChildToParent).Rotation.ZW.m128d_f64[0];
        dVar13 = (pFVar35->ChildToParent).Rotation.ZW.m128d_f64[1];
        dVar14 = (pFVar35->ChildToParent).Translation.XY.m128d_f64[0];
        dVar15 = (pFVar35->ChildToParent).Translation.XY.m128d_f64[1];
        dVar16 = (pFVar35->ChildToParent).Translation.ZW.m128d_f64[0];
        dVar17 = (pFVar35->ChildToParent).Translation.ZW.m128d_f64[1];
        local_138.Translation.XY.m128d_f64[0] = (pFVar35->ChildToParent).Translation.XY.m128d_f64[0]
        ;
        local_138.Translation.XY.m128d_f64[1] = (pFVar35->ChildToParent).Translation.XY.m128d_f64[1]
        ;
        local_138.Translation.ZW.m128d_f64[0] = (pFVar35->ChildToParent).Translation.ZW.m128d_f64[0]
        ;
        local_138.Translation.ZW.m128d_f64[1] = (pFVar35->ChildToParent).Translation.ZW.m128d_f64[1]
        ;
        dVar18 = (pFVar35->ChildToParent).Scale3D.XY.m128d_f64[0];
        dVar19 = (pFVar35->ChildToParent).Scale3D.XY.m128d_f64[1];
        dVar20 = (pFVar35->ChildToParent).Scale3D.ZW.m128d_f64[0];
        dVar21 = (pFVar35->ChildToParent).Scale3D.ZW.m128d_f64[1];
        local_138.Scale3D.XY.m128d_f64[0] = dVar18;
        local_138.Scale3D.XY.m128d_f64[1] = dVar19;
        local_138.Scale3D.ZW.m128d_f64[0] = dVar20;
        local_138.Scale3D.ZW.m128d_f64[1] = dVar21;
        pTVar36 = TPBDRigidClusteredParticles<double,3>::ChildToParent
                            (*(TPBDRigidClusteredParticles<double,3> **)this_01,
                             *(int *)((longlong)this_01 + 8));
        *(double *)pTVar36 = dVar10;
        *(double *)&pTVar36->field_0x8 = dVar11;
        *(double *)&pTVar36->field_0x10 = dVar12;
        *(double *)&pTVar36->field_0x18 = dVar13;
        *(double *)&pTVar36->field_0x20 = dVar14;
        *(double *)&pTVar36->field_0x28 = dVar15;
        *(double *)&pTVar36->field_0x30 = dVar16;
        *(double *)&pTVar36->field_0x38 = dVar17;
        *(double *)&pTVar36->field_0x40 = dVar18;
        *(double *)&pTVar36->field_0x48 = dVar19;
        *(double *)&pTVar36->field_0x50 = dVar20;
        *(double *)&pTVar36->field_0x58 = dVar21;
        if ((pFVar35->bLock == false) &&
           (pFVar37 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 (*(TPBDRigidClusteredParticles<double,3> **)this_01,
                                  *(int *)((longlong)this_01 + 8))->field0_0x0,
           (pFVar37->Bits & 8) == 0)) {
          TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                    (&this->PendingParticlesToUndoChildToParentLock,&local_318,(bool *)&local_388);
        }
        pFVar37 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             (*(TPBDRigidClusteredParticles<double,3> **)this_01,
                              *(int *)((longlong)this_01 + 8))->field0_0x0;
        pFVar37->Bits = pFVar37->Bits | 8;
        FVar49 = *(FName *)FVar49;
        local_310 = *(longlong *)FVar49;
        uVar40 = *(uint *)((longlong)FVar49 + 8);
        lVar46 = (longlong)(int)uVar40;
        uVar31 = uVar47;
        if ((int)uVar40 < *(int *)(local_310 + 0x50)) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *(longlong *)(local_310 + 0x48);
        fVar3 = *(float *)(lVar7 + lVar46 * 0x10);
        uVar4 = *(undefined8 *)(lVar7 + 8 + lVar46 * 0x10);
        dVar10 = (double)(float)((ulonglong)uVar4 >> 0x20);
        dVar11 = (double)*(float *)(lVar7 + 4 + lVar46 * 0x10);
        pTVar38 = TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)FVar49,*(int *)((longlong)FVar49 + 8));
        local_198.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
        local_198.Rotation.XY.m128d_f64[0] = (double)fVar3;
        local_198.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_198.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
        local_198.Rotation.ZW.m128d_f64[0] = (double)(float)uVar4;
        local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_198.Translation.XY.m128d_f64[0] = *(double *)pTVar38;
        local_198.Translation.XY.m128d_f64[1] = *(double *)&pTVar38->field_0x8;
        local_198.Translation.ZW.m128d_f64[0] = *(double *)&pTVar38->field_0x10;
        local_1f8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1f8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_198.Translation.ZW.m128d_f64[1] = 0.0;
        local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1f8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1f8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_198.Scale3D.XY.m128d_f64[0] = dVar26;
        local_198.Scale3D.XY.m128d_f64[1] = dVar27;
        local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_198.Scale3D.ZW.m128d_f64[0] = dVar24;
        local_198.Scale3D.ZW.m128d_f64[1] = dVar25;
        local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1f8,&local_138,&local_198);
        uVar40 = *(uint *)((longlong)this_01 + 8);
        lVar46 = *(longlong *)this_01;
        dVar16 = local_1f8.Translation.ZW.m128d_f64[0];
        dVar14 = local_1f8.Translation.XY.m128d_f64[0];
        dVar15 = local_1f8.Translation.XY.m128d_f64[1];
        dVar10 = local_1f8.Rotation.XY.m128d_f64[0];
        dVar11 = local_1f8.Rotation.XY.m128d_f64[1];
        dVar12 = local_1f8.Rotation.ZW.m128d_f64[0];
        dVar13 = local_1f8.Rotation.ZW.m128d_f64[1];
        local_2c0 = local_1f8.Translation.ZW.m128d_f64[0];
        local_2e0 = local_1f8.Translation.ZW.m128d_f64[0];
        uVar31 = uVar47;
        if ((int)uVar40 < *(int *)(lVar46 + 0x30)) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        local_218 = local_1f8.Scale3D.XY.m128d_f64[0];
        dStack_210 = local_1f8.Scale3D.XY.m128d_f64[1];
        local_208 = local_1f8.Scale3D.ZW.m128d_f64[0];
        dStack_200 = local_1f8.Scale3D.ZW.m128d_f64[1];
        local_2d0 = local_1f8.Translation.XY.m128d_f64[0];
        dStack_2c8 = local_1f8.Translation.XY.m128d_f64[1];
        if ((uVar31 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar46 = *(longlong *)(lVar46 + 0x28);
        local_2a8 = dVar16;
        local_2b8 = dVar14;
        dStack_2b0 = dVar15;
        pdVar1 = (double *)(lVar46 + (longlong)(int)uVar40 * 0x18);
        *pdVar1 = dVar14;
        pdVar1[1] = dVar15;
        *(double *)(lVar46 + 0x10 + (longlong)(int)uVar40 * 0x18) = local_2e0;
        uVar40 = *(uint *)((longlong)this_01 + 8);
        lVar46 = *(longlong *)this_01;
        local_2e0 = dVar16;
        uVar31 = uVar47;
        if ((int)uVar40 < *(int *)(lVar46 + 0x550)) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar46 = *(longlong *)(lVar46 + 0x548);
        local_298 = dVar10;
        dStack_290 = dVar11;
        local_288 = dVar12;
        dStack_280 = dVar13;
        pdVar1 = (double *)(lVar46 + (longlong)(int)uVar40 * 0x18);
        *pdVar1 = dVar14;
        pdVar1[1] = dVar15;
        *(double *)(lVar46 + 0x10 + (longlong)(int)uVar40 * 0x18) = local_2e0;
        TGeometryParticleHandleImp<double,3,1>::SetR
                  ((TGeometryParticleHandleImp<double,3,1> *)this_01,
                   (TRotation<double,3> *)&local_298,false);
        local_278 = dVar10;
        dStack_270 = dVar11;
        local_268 = dVar12;
        dStack_260 = dVar13;
        TPBDRigidParticleHandleImp<double,3,1>::SetQ
                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                   (TRotation<double,3> *)&local_278);
        FVar49 = FVar48;
        if (1 < *(byte *)((longlong)this_01 + 0xc)) {
          FVar49 = this_01;
        }
        pFVar8 = (FPBDRigidsSOAs *)this->MEvolution->_padding_;
        if (((FVar49 != (FName)0x0) &&
            (bVar29 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                (&pFVar8->ActiveParticlesMapArray,
                                 (TPBDRigidParticleHandleImp<double,3,1> *)FVar49), !bVar29)) &&
           (bVar29 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                               (&pFVar8->MovingKinematicsMapArray,
                                (TPBDRigidParticleHandleImp<double,3,1> *)FVar49), !bVar29)) {
          FPBDRigidsSOAs::
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (pFVar8,(TPBDRigidParticleHandleImp<double,3,1> *)FVar49,
                     &pFVar8->TransientDirtyMapArray);
          if (CVars::bChaosSolverCheckParticleViews != false) {
            FPBDRigidsSOAs::CheckParticleViewMaskImpl
                      (pFVar8,(TGeometryParticleHandleImp<double,3,1> *)this_01);
          }
          FPBDRigidsSOAs::UpdateViews(pFVar8);
        }
        FVar6 = local_360;
        pFVar32 = (FName *)((longlong)local_360 + 0x100);
        uStack_340 = 1;
        local_348 = FVar5;
        if ((((ulonglong)*pFVar32 <= &local_348) &&
            (&local_348 <
             (FName *)((longlong)(int)*(uint *)((longlong)local_360 + 0x10c) * 0x10 +
                      (longlong)*pFVar32))) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar40 = (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value;
        if (uVar40 == *(uint *)((longlong)FVar6 + 0x10c)) {
          uVar40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar32,(int *)((longlong)FVar6 + 0x10c));
          (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value = uVar40;
        }
        FVar49._1_7_ = uStack_33f;
        FVar49.ComparisonIndex.Value._0_1_ = uStack_340;
        (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value = uVar40 + 1;
        uStack_330 = 0;
        pFVar2 = (FName *)((longlong)*pFVar32 + (longlong)(int)uVar40 * 0x10);
        *pFVar2 = local_348;
        pFVar2[1] = FVar49;
        local_338 = FVar5;
        if ((((ulonglong)*pFVar32 <= &local_338) &&
            (&local_338 <
             (FName *)((longlong)(int)*(uint *)((longlong)FVar6 + 0x10c) * 0x10 + (longlong)*pFVar32
                      ))) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar40 = (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value;
        if (uVar40 == *(uint *)((longlong)FVar6 + 0x10c)) {
          uVar40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar32,(int *)((longlong)FVar6 + 0x10c));
          (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value = uVar40;
        }
        FVar49 = local_360;
        FVar44._1_7_ = uStack_32f;
        FVar44.ComparisonIndex.Value._0_1_ = uStack_330;
        (((FName *)((longlong)FVar6 + 0x108))->ComparisonIndex).Value = uVar40 + 1;
        local_390[0] = Refresh;
        pFVar32 = (FName *)((longlong)*pFVar32 + (longlong)(int)uVar40 * 0x10);
        *pFVar32 = local_338;
        pFVar32[1] = FVar44;
        local_308 = FVar5;
        this_00 = TMapBase<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionGeometryOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<enum_Chaos::EClusterUnionGeometryOperation_const_&>
                            ((FName *)((longlong)local_360 + 0x110),2,local_390);
        TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> **)&local_308);
        bVar29 = true;
      }
      break;
    }
  }
  local_300 = this_01;
  if (*(int *)&(this->PendingChildToParentUpdates).field_0x8 !=
      *(int *)&(this->PendingChildToParentUpdates).field_0x34) {
    uVar40 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
             -0x7a143595;
    uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
    TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
              ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>,FDefaultSetAllocator>
                *)&this->PendingChildToParentUpdates,uVar40 >> 0x10 ^ uVar40,
               (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_300);
  }
LAB_1438c19ef:
  uVar41 = (ulonglong)local_378;
  pFVar32 = local_358 + 1;
  goto LAB_1438c136a;
}

// IsClusterUnionParticle @ 1438c31b0

bool __thiscall
Chaos::FClusterUnionManager::IsClusterUnionParticle
          (FClusterUnionManager *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  FClusterUnion *pFVar2;
  
  iVar1 = FindClusterUnionIndexFromParticle(this,(TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  pFVar2 = FindClusterUnion(this,iVar1);
  if (pFVar2 != (FClusterUnion *)0x0) {
    return pFVar2->InternalCluster == param_1;
  }
  return false;
}

// IsDirectlyConnectedToMainParticleInClusterUnion @ 1438c3200

bool __thiscall
Chaos::FClusterUnionManager::IsDirectlyConnectedToMainParticleInClusterUnion
          (FClusterUnionManager *this,FClusterUnion *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  bool bVar2;
  FClusterUnionParticleProperties *pFVar3;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  ClusterId *pCVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  TConnectivityEdge<double> *pTVar9;
  TConnectivityEdge<double> *pTVar10;
  undefined1 local_res10 [8];
  
  this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_2->field_0xc) {
    this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_2;
  }
  if (this_00 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
LAB_1438c3353:
    bVar2 = false;
  }
  else {
    pFVar3 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
             ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                     *)&param_1->ChildProperties,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if ((pFVar3 == (FClusterUnionParticleProperties *)0x0) ||
       ((~pFVar3->bIsAuxiliaryParticle & 1) == 0)) {
      pTVar4 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(this_00);
      iVar1 = pTVar4->ArrayNum;
      pTVar9 = (TConnectivityEdge<double> *)(pTVar4->AllocatorInstance).Data;
      pTVar10 = pTVar9 + iVar1;
      do {
        if (pTVar4->ArrayNum != iVar1) {
          `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pTVar9 == pTVar10) goto LAB_1438c3353;
        if ((pTVar9->Sibling != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           (bVar2 = IsInterclusterEdge<double>
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,pTVar9), bVar2)) {
          pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar9->Sibling->field_0xc) {
            pTVar7 = pTVar9->Sibling;
          }
          if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pCVar5 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                               (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                                *(int *)&pTVar7->field_0x8);
            if (pCVar5->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            }
            else {
              pCVar5 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                 (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                                  *(int *)&pTVar7->field_0x8);
              pTVar6 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pCVar5->Id->field_0xc) {
                pTVar6 = pCVar5->Id;
              }
            }
            if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster) {
              pCVar5 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                 (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                                  *(int *)&pTVar7->field_0x8);
              if (pCVar5->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              }
              else {
                pCVar5 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                   (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                                    *(int *)&pTVar7->field_0x8);
                pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pCVar5->Id->field_0xc) {
                  pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar5->Id;
                }
              }
              pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)
                       Chaos::`anonymous_namespace'::GetParentParticleInClusterUnion(param_1,pTVar8)
              ;
              if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_1438c3346;
            }
            pFVar3 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                     ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                             *)&param_1->ChildProperties,pTVar7);
            if ((pFVar3 != (FClusterUnionParticleProperties *)0x0) &&
               ((~pFVar3->bIsAuxiliaryParticle & 1) != 0)) break;
          }
        }
LAB_1438c3346:
        pTVar9 = pTVar9 + 1;
      } while( true );
    }
    bVar2 = true;
  }
  return bVar2;
}

// RequestDeferredClusterPropertiesUpdate @ 1438cee20

void __thiscall
Chaos::FClusterUnionManager::RequestDeferredClusterPropertiesUpdate
          (FClusterUnionManager *this,int param_1,EUpdateClusterUnionPropertiesFlags param_2)

{
  EUpdateClusterUnionPropertiesFlags *pEVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pEVar1 = TMapBase<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags,0>_>
           ::FindOrAddImpl<int_const_&>
                     (&this->DeferredClusterUnionsForUpdateProperties,param_1,local_res10);
  *pEVar1 = *pEVar1 | param_2;
  return;
}

// UpdateAllClusterUnionProperties @ 1438daa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::UpdateAllClusterUnionProperties
          (FClusterUnionManager *this,FClusterUnion *param_1,
          EUpdateClusterUnionPropertiesFlags param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  uint uVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  FPBDRigidsEvolutionGBF *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  FRigidClustering *this_00;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  EObjectStateType EVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionProperties> FVar16;
  ulonglong uVar17;
  FRigidClusteredFlags_u_0 *pFVar18;
  FClusterUnionParticleProperties *pFVar19;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForAnyElementType FVar21;
  longlong lVar22;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar23;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar24;
  FName FVar25;
  uint uVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  longlong *plVar29;
  FName FVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ForElementType<unsigned_int> FVar34;
  longlong lVar35;
  int iVar36;
  EObjectStateType EVar37;
  FClusterUnionManager *this_03;
  bool bVar38;
  undefined1 auStackY_328 [32];
  undefined1 local_2c0;
  undefined1 local_2bf [3];
  FColor_u_0 local_2bc;
  FName local_2b8;
  FClusterUnionManager *local_2b0;
  FName local_2a8;
  int local_2a0;
  uint uStack_29c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  undefined4 local_290;
  int iStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  FName local_280;
  FName local_278;
  <lambda_1> local_268;
  FClusterUnion *local_260;
  LARGE_INTEGER local_258;
  FStatMessage local_250;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  FName local_218 [2];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  FKinematicTarget local_188;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  int local_130;
  uint local_12c;
  int local_128;
  int local_124;
  FScriptContainerElement local_120 [8];
  ForAnyElementType local_118;
  uint local_110;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_108;
  TRigidTransform<double,3> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FVar16 = StatPtr_STAT_UpdateClusterUnionProperties;
  local_2b0 = this;
  local_260 = param_1;
  if (StatPtr_STAT_UpdateClusterUnionProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionProperties>)0x0) {
    pFVar15 = ::FName::FName(local_218,"STAT_UpdateClusterUnionProperties");
    FVar16 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateClusterUnionProperties,
                        *pFVar15,L"FClusterUnionManager::UpdateClusterUnionProperties",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar10 = false;
  bVar11 = false;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  bVar12 = false;
  bVar38 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1438dab7b:
    bVar11 = bVar38;
    bVar10 = bVar12;
    bVar12 = false;
    local_280 = local_278;
    FVar25 = local_278;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2bc._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar38 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2a8 = FVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2a8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x3bf);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar38 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1438dab7b;
    local_2b8 = FVar25;
    local_280 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar12 = true;
  }
  local_208 = 0;
  local_1e8 = 0;
  local_1c8 = 0;
  local_200 = 0;
  local_1e0 = 0;
  local_1c0 = 0;
  local_1f8 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1f0 = 0;
  local_1d0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = ___xmm_3ff00000000000000000000000000000;
  uStack_190 = _UNK_15061cbc8;
  if (((param_2 & RecomputeMassOrientation) == None) || (!param_1->bNeedsXRInitialization)) {
    bVar38 = false;
  }
  else {
    bVar38 = true;
  }
  uVar4 = (param_1->ChildParticles).ArrayNum;
  pFVar28 = (param_1->ChildParticles).AllocatorInstance.Data;
  if (((int)uVar4 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  uVar26 = 1;
  local_158._8_8_ = 0;
  local_138 = (ForElementType<unsigned_int>)0x0;
  local_130 = 0;
  local_124 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_12c = 0x80;
  local_128 = -1;
  if (uVar4 == 0) goto LAB_1438daefe;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar4);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_158,uVar4);
  if (3 < uVar4) {
    uVar32 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_110 != 0) && ((int)uVar26 <= (int)local_110)) goto LAB_1438daefe;
  local_110 = uVar26;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,0,4);
  }
  if (uVar26 != 0) {
    uVar31 = uVar26;
    if (uVar26 < 2) {
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        uVar31 = 0;
        goto LAB_1438dad0c;
      }
    }
    else {
LAB_1438dad0c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,uVar31,4);
    }
    if (0 < (int)uVar26) {
      uVar33 = (ulonglong)uVar26;
      uVar32 = 0;
      do {
        FVar21.Data = local_120;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_118.Data;
        }
        uVar17 = uVar32 & (longlong)(int)uVar26 - 1U;
        uVar32 = uVar32 + 1;
        *(undefined4 *)(FVar21.Data + uVar17 * 4) = 0xffffffff;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
  }
  if (local_110 != 0) {
    pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
    local_2a0 = 0;
    uStack_29c = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    if (local_130 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
      if (local_138 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_138;
      }
      uVar26 = *(uint *)FVar34;
      iStack_288 = 0;
      local_2a0 = 0;
      while (uVar26 == 0) {
        iStack_288 = iStack_288 + 0x20;
        lVar22 = (longlong)local_2a0;
        local_2a0 = local_2a0 + 1;
        if ((int)(local_130 + -1 + (local_130 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2a0)
        goto LAB_1438dae2a;
        uVar26 = ((uint *)((longlong)FVar34 + 4))[lVar22];
      }
      uStack_29c = -uVar26 & uVar26;
      uVar32 = (ulonglong)uStack_29c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iStack_28c = iStack_288 + -1 + (int)lVar22;
      if (local_130 < iStack_28c) {
LAB_1438dae2a:
        iStack_28c = local_130;
      }
    }
    local_290 = 0xffffffff;
    local_240 = (longlong *)local_158;
    local_238._padding_ = CONCAT44(uStack_29c,local_2a0);
    local_238.CurrentBitIndex = iStack_28c;
    local_238.UnvisitedBitMask = 0xffffffff;
    local_238._28_4_ = uStack_284;
    local_238.BaseBitIndex = iStack_288;
    iVar36 = iStack_28c;
    local_238.Array = pTStack_298;
    if (iStack_28c < local_130) {
      do {
        lVar22 = *local_240;
        lVar35 = (longlong)iVar36;
        uVar32 = *(ulonglong *)(lVar22 + lVar35 * 0x10);
        uVar26 = ((uint)(uVar32 >> 0x14) & 0xffff ^ (uint)(uVar32 >> 4)) * -0x7a143595;
        uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
        uVar26 = (uVar26 >> 0x10 ^ uVar26) & local_110 - 1;
        *(uint *)(lVar22 + 0xc + lVar35 * 0x10) = uVar26;
        FVar21.Data = local_120;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_118.Data;
        }
        uVar32 = (longlong)(int)local_110 - 1U & (longlong)(int)uVar26;
        *(undefined4 *)(lVar22 + 8 + lVar35 * 0x10) = *(undefined4 *)(FVar21.Data + uVar32 * 4);
        *(int *)(FVar21.Data + uVar32 * 4) = iVar36;
        local_238.UnvisitedBitMask = local_238.UnvisitedBitMask & ~local_238._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        iVar36 = local_238.CurrentBitIndex;
      } while (local_238.CurrentBitIndex < (local_238.Array)->NumBits);
    }
  }
LAB_1438daefe:
  pFVar2 = pFVar28 + (longlong)(int)uVar4 * 8;
  for (; pFVar28 != pFVar2; pFVar28 = pFVar28 + 8) {
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_158,(TPBDRigidParticleHandleImp<double,3,1> **)&local_2b8,(bool *)pFVar28);
  }
  UpdateClusterMassProperties
            (param_1->InternalCluster,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_158);
  if (bVar38) {
    MoveClusterToMassOffset(&local_b8,param_1->InternalCluster,Position);
    param_1->bNeedsXRInitialization = false;
  }
  this_03 = local_2b0;
  if ((param_2 & UpdateKinematicProperties) != None) {
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster;
    if (param_1->bAnchorLock) {
      pFVar18 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                           (*(TPBDRigidClusteredParticles<double,3> **)pTVar5,
                            *(int *)&pTVar5->field_0x8)->field0_0x0;
      this_03 = local_2b0;
      if ((pFVar18->Bits & 2) == 0) {
        EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster);
        this_03 = local_2b0;
        EVar37 = Dynamic;
        if (EVar14 == Sleeping) {
          EVar37 = Sleeping;
        }
        FPBDRigidsEvolutionBase::SetParticleObjectState
                  ((FPBDRigidsEvolutionBase *)local_2b0->MEvolution,
                   (TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster,EVar37);
        local_188.Rotation._0_8_ = ___xmm_3f800000000000000000000000000000;
        local_188.Rotation._8_8_ = _UNK_150689648;
        local_188.Position._0_8_ = 0;
        local_188.Position._8_8_ = 0;
        local_188.Position._16_8_ = 0;
        local_188.Mode = None;
        FPBDRigidsEvolutionGBF::SetParticleKinematicTarget
                  (this_03->MEvolution,
                   (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster,&local_188);
      }
      else {
        FPBDRigidsEvolutionBase::SetParticleObjectState
                  ((FPBDRigidsEvolutionBase *)local_2b0->MEvolution,
                   (TPBDRigidParticleHandleImp<double,3,1> *)param_1->InternalCluster,Kinematic);
      }
    }
    else {
      UpdateKinematicProperties(pTVar5,&local_2b0->MClustering->MChildren,local_2b0->MEvolution);
    }
  }
  pFVar6 = this_03->MEvolution;
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)param_1->InternalCluster;
  Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
            ((FPBDIslandManager *)&pFVar6->_padding_,pTVar7);
  (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,pTVar7);
  if ((param_2 & ForceGenerateGeometry) == None) {
    if ((param_2 & IncrementalGenerateGeometry) != None) {
      FlushIncrementalGeometryOperations(this_03,param_1);
    }
  }
  else {
    ForceRegenerateGeometry
              (this_03,param_1,
               (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_158);
  }
  if (param_1->bGenerateConnectivityEdges) {
    if ((param_2 & ForceGenerateConnectionGraph) == None) {
      if ((param_2 & IncrementalGenerateConnectionGraph) != None) {
        FlushIncrementalConnectivityGraphOperations(this_03,param_1);
      }
    }
    else {
      local_2bc = (FColor_u_0)(param_1->ChildParticles).ArrayNum;
      uVar32 = (ulonglong)(int)local_2bc.Bits;
      FVar30 = (FName)(param_1->ChildParticles).AllocatorInstance.Data;
      this_00 = this_03->MClustering;
      FVar27 = (FName)((longlong)FVar30 + uVar32 * 8);
      local_2a8 = FVar27;
      while( true ) {
        local_2b8 = FVar30;
        if ((param_1->ChildParticles).ArrayNum != (int)uVar32) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_2c0);
        }
        FVar25 = local_280;
        if (FVar30 == FVar27) break;
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)FVar30;
        if (pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          FRigidClustering::RemoveNodeConnections(this_00,pTVar5);
          pFVar19 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                    ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                            *)&param_1->ChildProperties,pTVar5);
          if (pFVar19 != (FClusterUnionParticleProperties *)0x0) {
            pFVar19->bEdgesAreGenerated = '\0';
          }
          if (bChaosClusterUnionGenerateInterclusterEdges != false) {
            pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar5->field_0xc) {
              pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5;
            }
            if (pTVar23 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              pTVar20 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)&this_00->MChildren,pTVar23);
              pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)&pTVar20->field_0x8;
              if (pTVar20 ==
                  (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
                pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              }
              FVar27 = local_2a8;
              if (pTVar23 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                plVar29 = *(longlong **)pTVar23;
                iVar36 = *(int *)&pTVar23->field_0x8;
                plVar3 = plVar29 + iVar36;
                while( true ) {
                  if (*(int *)&pTVar23->field_0x8 != iVar36) {
                    `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>
                    ::operator!='::__l2::<lambda_1>::operator()(local_2bf);
                  }
                  if (plVar29 == plVar3) break;
                  pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar29;
                  if (pTVar8 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                    pTVar24 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                    if (2 < (byte)pTVar8->field_0xc) {
                      pTVar24 = pTVar8;
                    }
                    if (pTVar24 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                      local_268.Child = (TPBDRigidParticleHandleImp<double,3,1> *)pTVar8;
                      FRigidClustering::
                      RemoveFilteredNodeConnections<_Chaos::_anonymous_namespace_::RemoveClusterUnionEdges_::__l27::<lambda_1>_>
                                (this_00,pTVar24,&local_268);
                    }
                  }
                  plVar29 = plVar29 + 1;
                }
                uVar32 = (ulonglong)local_2bc.Bits;
                FVar27 = local_2a8;
                FVar30 = local_2b8;
                param_1 = local_260;
              }
            }
          }
        }
        Chaos::`anonymous_namespace'::AddParticleToConnectionGraph(this_00,param_1,pTVar5);
        FVar30 = (FName)((longlong)FVar30 + 8);
      }
      piVar1 = &(param_1->PendingConnectivityOperations).ArrayMax;
      (param_1->PendingConnectivityOperations).ArrayNum = 0;
      this_03 = local_2b0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(param_1->PendingConnectivityOperations).AllocatorInstance,0,piVar1);
        this_03 = local_2b0;
      }
    }
    if ((param_2 & ConnectivityCheck) != None) {
      FRigidClustering::HandleConnectivityOnReleaseClusterParticle
                (this_03->MClustering,&local_108,param_1->InternalCluster,false);
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
    }
  }
  FRigidClustering::BuildConvexOptimizer(this_03->MClustering,param_1->InternalCluster);
  local_110 = 0;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  bVar38 = local_158._12_4_ != 0;
  local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
  if (bVar38) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
  }
  local_128 = -1;
  local_124 = 0;
  local_130 = 0;
  if (0x80 < local_12c) {
    local_12c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
  }
  if (local_138 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138);
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_250.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_250.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_258);
      local_250.StatData.Pad[4] = '\0';
      local_250.StatData.Pad[5] = '\0';
      local_250.StatData.Pad[6] = '\0';
      local_250.StatData.Pad[7] = '\0';
      local_250.StatData.Pad[0] = local_258.s.LowPart._0_1_;
      local_250.StatData.Pad[1] = local_258.s.LowPart._1_1_;
      local_250.StatData.Pad[2] = local_258.s.LowPart._2_1_;
      local_250.StatData.Pad[3] = local_258.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_250);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// UpdateClusterUnionParticlesChildToParent @ 1438db6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionManager::UpdateClusterUnionParticlesChildToParent
          (FClusterUnionManager *this,int param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  int *piVar1;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent> FVar11;
  TMap<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_01;
  FClusterUnionChildToParentUpdate *pFVar12;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  int iVar13;
  uint uVar14;
  FName FVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  EClusterUnionOperation local_98 [2];
  FColor_u_0 local_90 [2];
  int local_88 [2];
  FName local_80;
  FName local_78;
  FName local_70;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  lVar18 = 0;
  FVar11 = StatPtr_STAT_UpdateClusterUnionParticlesChildToParent;
  if (StatPtr_STAT_UpdateClusterUnionParticlesChildToParent ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent>)0x0) {
    pFVar10 = ::FName::FName(&local_40,"STAT_UpdateClusterUnionParticlesChildToParent");
    FVar11 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterUnionParticlesChildToParent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateClusterUnionParticlesChildToParent,*pFVar10,
                        L"FClusterUnionManager::UpdateClusterUnionParticlesChildToParent",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_90[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_90[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_80.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ClusterUnionManager.cpp"
                   ,0x570);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      goto LAB_1438db84f;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_78 = local_70;
  FVar15 = local_70;
LAB_1438db84f:
  local_98[0] = UpdateChildToParent;
  local_88[0] = param_1;
  this_00 = TMapBase<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::FindOrAddImpl<int_const_&>(&this->PendingClusterIndexOperations,param_1,local_88);
  this_01 = TMapBase<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<enum_Chaos::EClusterUnionOperation_const_&>
                      (this_00,local_98[0],local_98);
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
  Append<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
            (this_01,param_2);
  iVar13 = param_2->ArrayNum;
  uVar17 = 0;
  if (0 < iVar13) {
    lVar19 = 0;
    do {
      FVar15 = local_78;
      if (param_3->ArrayNum <= (int)uVar17) break;
      uVar16 = ~uVar17 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar17 < iVar13) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((param_2->AllocatorInstance).Data + lVar19) != 0) {
        uVar14 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar2 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                  ((param_2->AllocatorInstance).Data + lVar19);
        local_60 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar2->field_0xc) {
          local_60 = pTVar2;
        }
        if ((local_60 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
           ((uVar14 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^
                      (uint)((ulonglong)local_60 >> 4)) * -0x7a143595,
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb,
            pFVar12 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
                      ::
                      FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                                ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate,0>_>
                                  *)&this->PendingChildToParentUpdates,uVar14 >> 0x10 ^ uVar14,
                                 &local_60), pFVar12->bLock == false || (param_4)))) {
          uVar14 = 0;
          if ((int)uVar17 < param_3->ArrayNum) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          dVar5 = *(double *)(pFVar3 + lVar18 + 8);
          (pFVar12->ChildToParent).Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar18);
          (pFVar12->ChildToParent).Rotation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar18 + 0x10 + 8);
          (pFVar12->ChildToParent).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar18 + 0x10);
          (pFVar12->ChildToParent).Rotation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar18 + 0x20 + 8);
          (pFVar12->ChildToParent).Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar18 + 0x20)
          ;
          (pFVar12->ChildToParent).Translation.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar18 + 0x30 + 8);
          (pFVar12->ChildToParent).Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar18 + 0x30)
          ;
          (pFVar12->ChildToParent).Translation.ZW.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar18 + 0x40 + 8);
          (pFVar12->ChildToParent).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar18 + 0x40);
          (pFVar12->ChildToParent).Scale3D.XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar18 + 0x50 + 8);
          (pFVar12->ChildToParent).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar18 + 0x50);
          (pFVar12->ChildToParent).Scale3D.ZW.m128d_f64[1] = dVar5;
          pFVar12->ClusterUnionIndex = param_1;
          pFVar12->bLock = param_4;
        }
      }
      iVar13 = param_2->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 0x60;
      FVar15 = local_78;
    } while ((int)uVar17 < iVar13);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_50);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// ~FClusterUnionManager @ 143c891a0

void __thiscall Chaos::FClusterUnionManager::~FClusterUnionManager(FClusterUnionManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  *(undefined4 *)&(this->ExplicitIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExplicitIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExplicitIndexMap);
  pFVar2 = (this->ReusableIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DeferredClusterUnionsForUpdateProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeferredClusterUnionsForUpdateProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_Chaos::EUpdateClusterUnionPropertiesFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DeferredClusterUnionsForUpdateProperties);
  *(undefined4 *)&(this->ClusterUnions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClusterUnions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Chaos::FClusterUnion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::FClusterUnion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Chaos::FClusterUnion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClusterUnions);
  (this->PendingParticlesToUndoChildToParentLock).HashSize = 0;
  FVar3 = (this->PendingParticlesToUndoChildToParentLock).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingParticlesToUndoChildToParentLock).Elements);
  *(undefined4 *)&(this->PendingChildToParentUpdates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingChildToParentUpdates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionChildToParentUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingChildToParentUpdates);
  *(undefined4 *)&(this->PendingExplicitIndexOperations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingExplicitIndexOperations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PendingExplicitIndexOperations);
  *(undefined4 *)&(this->PendingClusterIndexOperations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingClusterIndexOperations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Chaos::EClusterUnionOperation,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PendingClusterIndexOperations);
  return;
}

