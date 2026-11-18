// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// AddIgnoreCollisions @ 1439c5580

void __thiscall
Chaos::FIgnoreCollisionManager::AddIgnoreCollisions
          (FIgnoreCollisionManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  FUniqueIdx FVar1;
  FUniqueIdx FVar2;
  FUniqueIdx *pFVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar4 = param_1;
    }
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar5 = param_2;
    }
    if ((pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      pFVar3 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_);
      FVar1.Idx = pFVar3->Idx;
      pFVar3 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                          (int)param_2->_padding_);
      FVar2.Idx = pFVar3->Idx;
      if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        AddIgnoreCollisionsImpl(this,FVar1,FVar2);
        SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar4,true);
      }
      if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        AddIgnoreCollisionsImpl(this,FVar2,FVar1);
        SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,true);
      }
    }
  }
  return;
}

// AddIgnoreCollisionsImpl @ 1439c5650

void __thiscall
Chaos::FIgnoreCollisionManager::AddIgnoreCollisionsImpl
          (FIgnoreCollisionManager *this,FUniqueIdx param_1,FUniqueIdx param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FUniqueIdx local_res10 [6];
  int local_18;
  undefined4 uStack_14;
  
  local_res10[0].Idx = param_1.Idx;
  pTVar5 = TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<Chaos::FUniqueIdx_const_&>
                     ((TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,param_1.Idx,local_res10);
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  for (pFVar6 = pFVar1; pFVar6 != pFVar1 + (longlong)pTVar5->ArrayNum * 8; pFVar6 = pFVar6 + 8) {
    if (*(int *)pFVar6 == param_2.Idx) {
      *(int *)(pFVar6 + 4) = *(int *)(pFVar6 + 4) + 1;
      return;
    }
  }
  uStack_14 = 1;
  local_18 = param_2.Idx;
  if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(ulonglong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       CONCAT44(uStack_14,local_18);
  return;
}

// ContainsHandle @ 1439c8580

bool __thiscall
Chaos::FIgnoreCollisionManager::ContainsHandle(FIgnoreCollisionManager *this,FUniqueIdx param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
      *(int *)&(this->IgnoreCollisionsList).field_0x34) {
    puVar2 = *(undefined1 **)&(this->IgnoreCollisionsList).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->IgnoreCollisionsList).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->IgnoreCollisionsList).field_0x48 - 1U & param_1.Idx)
                              * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->IgnoreCollisionsList) ==
            param_1.Idx) goto LAB_1439c85cc;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->IgnoreCollisionsList);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1439c85cc:
  return iVar1 != -1;
}

// GetParticleHandle @ 1439d37d0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FIgnoreCollisionManager::GetParticleHandle
          (FIgnoreCollisionManager *this,FUniqueIdx param_1,FPBDRigidsSolver *param_2)

{
  FSingleParticlePhysicsProxy *pFVar1;
  FUniqueIdx local_res10 [6];
  
  local_res10[0].Idx = param_1.Idx;
  pFVar1 = FPBDRigidsSolver::GetParticleProxy_PT(param_2,local_res10);
  if (pFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
    return pFVar1->Handle;
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// IgnoresCollision @ 1439d4730

bool __thiscall
Chaos::FIgnoreCollisionManager::IgnoresCollision
          (FIgnoreCollisionManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  uint uVar1;
  FUniqueIdx *pFVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  
  pFVar2 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                      (int)param_2->_padding_);
  uVar1 = pFVar2->Idx;
  pFVar2 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
      *(int *)&(this->IgnoreCollisionsList).field_0x34) {
    puVar7 = *(undefined1 **)&(this->IgnoreCollisionsList).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->IgnoreCollisionsList).field_0x38;
    }
    uVar5 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->IgnoreCollisionsList).field_0x48 - 1U & pFVar2->Idx)
                               * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->IgnoreCollisionsList);
        if (*puVar6 == pFVar2->Idx) {
          puVar4 = puVar6 + 2;
          if (puVar6 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return false;
          }
          puVar3 = *(uint **)puVar4;
          puVar6 = puVar3 + (longlong)(int)puVar4[2] * 2;
          for (; (puVar4 = (uint *)0x0, puVar3 != puVar6 && (puVar4 = puVar3, *puVar3 != uVar1));
              puVar3 = puVar3 + 2) {
          }
          return puVar4 != (uint *)0x0;
        }
        uVar5 = puVar6[6];
      } while (uVar5 != 0xffffffff);
    }
  }
  return false;
}

// IgnoresCollision @ 1439d4810

bool __thiscall
Chaos::FIgnoreCollisionManager::IgnoresCollision
          (FIgnoreCollisionManager *this,FUniqueIdx param_1,FUniqueIdx param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
      *(int *)&(this->IgnoreCollisionsList).field_0x34) {
    puVar5 = *(undefined1 **)&(this->IgnoreCollisionsList).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->IgnoreCollisionsList).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->IgnoreCollisionsList).field_0x48 - 1U & param_1.Idx)
                              * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->IgnoreCollisionsList);
        if (*piVar4 == param_1.Idx) {
          piVar3 = piVar4 + 2;
          if (piVar4 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          if (piVar3 == (int *)0x0) {
            return false;
          }
          piVar2 = *(int **)piVar3;
          piVar4 = piVar2 + (longlong)piVar3[2] * 2;
          for (; (piVar3 = (int *)0x0, piVar2 != piVar4 && (piVar3 = piVar2, *piVar2 != param_2.Idx)
                 ); piVar2 = piVar2 + 2) {
          }
          return piVar3 != (int *)0x0;
        }
        iVar1 = piVar4[6];
      } while (iVar1 != -1);
    }
  }
  return false;
}

// NumIgnoredCollision @ 1439d5c00

int __thiscall
Chaos::FIgnoreCollisionManager::NumIgnoredCollision
          (FIgnoreCollisionManager *this,FUniqueIdx param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
      *(int *)&(this->IgnoreCollisionsList).field_0x34) {
    puVar4 = *(undefined1 **)&(this->IgnoreCollisionsList).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IgnoreCollisionsList).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->IgnoreCollisionsList).field_0x48 - 1U & param_1.Idx)
                              * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->IgnoreCollisionsList);
        if (*piVar3 == param_1.Idx) {
          piVar2 = piVar3 + 2;
          if (piVar3 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          return piVar2[2];
        }
        iVar1 = piVar3[6];
      } while (iVar1 != -1);
    }
  }
  return 0;
}

// PopStorageData_Internal @ 1439d5f20

void __thiscall
Chaos::FIgnoreCollisionManager::PopStorageData_Internal(FIgnoreCollisionManager *this,int param_1)

{
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  atomic<int> *paVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar6;
  code *pcVar7;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar8;
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  int iVar11;
  TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *pTVar12;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar13;
  longlong *plVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  FUniqueIdx *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar27;
  undefined1 *puVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  uint local_154;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_150;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  undefined1 local_110 [16];
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FUniqueIdx *local_98;
  FUniqueIdx *local_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  do {
    plVar20 = (longlong *)0x0;
    if ((this->StorageDataQueue).NumElems == (atomic<int>)0x0) {
      return;
    }
    lVar15 = *(longlong *)(this->StorageDataQueue).Tail;
    plVar14 = plVar20;
    if (lVar15 != 0) {
      plVar14 = (longlong *)(lVar15 + 8);
    }
    pTVar27 = (TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)*plVar14;
    if (pTVar27 ==
        (TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *)0x0) {
      return;
    }
    if (param_1 < *(int *)&pTVar27[2].Elements) {
      return;
    }
    uVar22 = *(uint *)&(pTVar27->Elements).field_0x28;
    pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar27->Elements).field_0x10;
    uStack_13c = 1;
    local_128 = 0;
    uStack_12c = local_128;
    if (uVar22 != 0) {
      puVar4 = *(uint **)&(pTVar27->Elements).field_0x20;
      puVar26 = (uint *)pTVar29;
      if (puVar4 != (uint *)0x0) {
        puVar26 = puVar4;
      }
      uVar24 = *puVar26;
      plVar14 = plVar20;
      while (local_128 = (uint)plVar14, uVar24 == 0) {
        iVar18 = (int)plVar20;
        local_128 = local_128 + 0x20;
        plVar14 = (longlong *)(ulonglong)local_128;
        uVar24 = iVar18 + 1;
        plVar20 = (longlong *)(ulonglong)uVar24;
        uStack_12c = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
        goto LAB_1439d601d;
        uVar24 = puVar26[(longlong)iVar18 + 1];
      }
      uStack_13c = -uVar24 & uVar24;
      uVar2 = (ulonglong)uStack_13c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_118 = (int)lVar15;
      uStack_12c = (local_128 - 1) + local_118;
      if ((int)uVar22 < (int)uStack_12c) {
        uStack_12c = uVar22;
      }
    }
LAB_1439d601d:
    uVar24 = *(uint *)&(pTVar27->Elements).field_0x28;
    uStack_124 = local_6c;
    uVar19 = uVar24 & 0xffffffe0;
    iStack_120 = *(int *)&(pTVar27->Elements).field_0x8 - *(int *)&(pTVar27->Elements).field_0x34;
    iStack_140 = (int)plVar20;
    TStack_f0._padding_ = CONCAT44(uStack_13c,iStack_140);
    uStack_130 = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_12c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar24 >> 5;
    TStack_f0._28_4_ = local_6c;
    TStack_f0.BaseBitIndex = local_128;
    uStack_d0 = CONCAT44(uStack_11c,iStack_120);
    local_154 = uVar24;
    local_150 = pTVar27;
    local_148 = pTVar27;
    local_138 = (undefined1 *)pTVar29;
    local_100 = pTVar29;
    local_f8 = pTVar27;
    TStack_f0.Array = pTVar29;
    if ((((int)uVar24 < 0) || ((int)uVar22 < (int)uVar24)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar22 = *(uint *)&(pTVar27->Elements).field_0x28;
    if (uVar24 != uVar22) {
      puVar28 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
      puVar17 = (undefined1 *)pTVar29;
      if (puVar28 != (undefined1 *)0x0) {
        puVar17 = puVar28;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
      while (uVar24 == 0) {
        lVar15 = (longlong)iVar18;
        uVar19 = uVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar24 = uVar22;
        local_154 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_1439d6131;
        uVar24 = *(uint *)(puVar17 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_114 = (int)lVar15;
      uVar24 = local_114 + -1 + uVar19;
      local_154 = uVar24;
      if ((int)uVar22 < (int)uVar24) {
        uVar24 = uVar22;
        local_154 = uVar22;
      }
    }
LAB_1439d6131:
    while( true ) {
      pTVar8 = local_f8;
      if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
          (int)uStack_d0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_f0.CurrentBitIndex == uVar24) && (TStack_f0.Array == pTVar29)) &&
         (pTVar8 == pTVar27)) break;
      this_01 = &this->PendingActivations;
      pFVar21 = (FUniqueIdx *)
                ((longlong)TStack_f0.CurrentBitIndex * 0x20 + *(longlong *)&pTVar8->Elements);
      if (*(int *)&(this->PendingActivations).field_0x8 !=
          *(int *)&(this->PendingActivations).field_0x34) {
        puVar28 = *(undefined1 **)&(this->PendingActivations).field_0x40;
        puVar17 = &(this->PendingActivations).field_0x38;
        if (puVar28 != (undefined1 *)0x0) {
          puVar17 = puVar28;
        }
        iVar18 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&(this->PendingActivations).field_0x48 - 1U & pFVar21->Idx) * 4);
        if (iVar18 != -1) {
LAB_1439d61b0:
          if (*(uint *)((longlong)iVar18 * 0x20 + *(longlong *)&this_01->field_0x0) != pFVar21->Idx)
          goto code_r0x0001439d61bd;
          if (iVar18 != -1) {
            pFVar23 = *(FScriptContainerElement **)(pFVar21 + 2);
            iVar18 = pFVar21[4].Idx;
            pFVar1 = pFVar23 + (longlong)iVar18 * 4;
            while( true ) {
              if (pFVar21[4].Idx != iVar18) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              pTVar27 = local_150;
              if (pFVar23 == pFVar1) break;
              pTVar12 = TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindChecked((TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
                                       *)this_01,pFVar21);
              pFVar16 = (pTVar12->AllocatorInstance).Data;
              pFVar5 = pFVar16 + (longlong)pTVar12->ArrayNum * 4;
              if (pFVar16 != pFVar5) {
                do {
                  if (*(int *)pFVar16 == *(int *)pFVar23) goto LAB_1439d62e5;
                  pFVar16 = pFVar16 + 4;
                } while (pFVar16 != pFVar5);
              }
              pTVar12 = TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindChecked((TMapBase<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
                                       *)this_01,pFVar21);
              pFVar5 = (pTVar12->AllocatorInstance).Data;
              if (((pFVar5 <= pFVar23) && (pFVar23 < pFVar5 + (longlong)pTVar12->ArrayMax * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = pTVar12->ArrayNum;
              if (iVar11 == pTVar12->ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
              }
              pTVar12->ArrayNum = iVar11 + 1;
              *(int *)((pTVar12->AllocatorInstance).Data + (longlong)iVar11 * 4) = *(int *)pFVar23;
LAB_1439d62e5:
              pFVar23 = pFVar23 + 4;
            }
            goto LAB_1439d62fa;
          }
        }
      }
LAB_1439d61cc:
      local_90 = pFVar21 + 2;
      local_98 = pFVar21;
      TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_01,
                 (TPairInitializer<Chaos::FUniqueIdx_const_&,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_const_&>
                  *)local_110,(bool *)&local_98);
LAB_1439d62fa:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      pTVar29 = local_100;
      uVar24 = local_154;
    }
    iVar18 = *(int *)&pTVar27[1].Elements.field_0x28;
    this_00 = (TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *)
              (pTVar27 + 1);
    puVar28 = &pTVar27[1].Elements.field_0x10;
    iStack_140 = 0;
    local_128 = 0;
    uStack_13c = 1;
    uStack_12c = 0;
    if (iVar18 != 0) {
      puVar4 = *(uint **)&pTVar27[1].Elements.field_0x20;
      puVar26 = (uint *)puVar28;
      if (puVar4 != (uint *)0x0) {
        puVar26 = puVar4;
      }
      uVar22 = *puVar26;
      while (uVar22 == 0) {
        lVar15 = (longlong)iStack_140;
        local_128 = local_128 + 0x20;
        iStack_140 = iStack_140 + 1;
        uStack_12c = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140)
        goto LAB_1439d639d;
        uVar22 = puVar26[lVar15 + 1];
      }
      uStack_13c = -uVar22 & uVar22;
      uVar2 = (ulonglong)uStack_13c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_110._4_4_ = (undefined4)lVar15;
      uStack_12c = local_128 + -1 + local_110._4_4_;
      if (iVar18 < (int)uStack_12c) {
        uStack_12c = iVar18;
      }
    }
LAB_1439d639d:
    uStack_124 = local_4c;
    iStack_120 = *(int *)&local_150[1].Elements.field_0x8 -
                 *(int *)&local_150[1].Elements.field_0x34;
    uVar22 = *(uint *)&local_150[1].Elements.field_0x28;
    uVar24 = uVar22 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uStack_13c,iStack_140);
    uStack_130 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_12c;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar22 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = local_128;
    uStack_a0 = CONCAT44(uStack_11c,iStack_120);
    local_148 = (TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)this_00;
    local_138 = puVar28;
    local_c8 = this_00;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
    if ((((int)uVar22 < 0) || (iVar18 < (int)uVar22)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar19 = *(uint *)&pTVar27[1].Elements.field_0x28;
    if (uVar22 != uVar19) {
      puVar17 = *(undefined1 **)&pTVar27[1].Elements.field_0x20;
      puVar25 = puVar28;
      if (puVar17 != (undefined1 *)0x0) {
        puVar25 = puVar17;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar11 * 4);
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar11;
        uVar24 = uVar24 + 0x20;
        iVar11 = iVar11 + 1;
        uVar22 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1439d64b0;
        uVar22 = *(uint *)(puVar25 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_110._8_4_ = (undefined4)lVar15;
      uVar22 = (uVar24 - 1) + local_110._8_4_;
      if ((int)uVar19 < (int)uVar22) {
        uVar22 = uVar19;
      }
    }
LAB_1439d64b0:
    while( true ) {
      pTVar9 = local_c8;
      if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
          (int)uStack_a0) {
        local_158[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::FUniqueIdx>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      pTVar8 = local_150;
      if (((TStack_c0.CurrentBitIndex == uVar22) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar28)) &&
         (pTVar9 == this_00)) break;
      TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::
      Emplace<Chaos::FUniqueIdx_const_&>
                (&this->PendingDeactivations,(FUniqueIdx *)(local_110 + 0xc),
                 (bool *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_c0.CurrentBitIndex * 0xc
                         ));
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    aVar13 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *
              )(this->StorageDataQueue).Tail;
    if (aVar13 != (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                   )0x0) {
      (this->StorageDataQueue).Tail = aVar13;
      LOCK();
      paVar3 = &(this->StorageDataQueue).NumElems;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
    }
    TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(local_150);
    if (*(int *)&pTVar8[1].Elements.field_0x8 != *(int *)&pTVar8[1].Elements.field_0x34) {
      TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
      iVar18 = *(int *)&pTVar27[1].Elements.field_0xc;
      *(undefined4 *)&pTVar27[1].Elements.field_0x8 = 0;
      if (iVar18 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)&pTVar27[1].Elements.field_0xc);
      }
      *(undefined4 *)&pTVar27[1].Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar27[1].Elements.field_0x34 = 0;
      *(undefined4 *)&pTVar27[1].Elements.field_0x28 = 0;
    }
    *(undefined4 *)&pTVar8[2].Elements = 0xffffffff;
    aVar13 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
             (this->StorageDataFreePool).First;
    if (aVar13 == (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                   )(this->StorageDataFreePool).TailCopy) {
      aVar6 = (this->StorageDataFreePool).Tail;
      aVar13 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
               (this->StorageDataFreePool).First;
      (this->StorageDataFreePool).TailCopy = (FNode *)aVar6;
      if (aVar13 == aVar6) {
        aVar13 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                  )FMemory::Malloc(0x10,8);
        *(undefined8 *)aVar13 = 0;
      }
      else {
        (this->StorageDataFreePool).First = *(FNode **)aVar13;
        *(undefined8 *)aVar13 = 0;
      }
    }
    else {
      (this->StorageDataFreePool).First = *(FNode **)aVar13;
      *(undefined8 *)aVar13 = 0;
    }
    *(TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      **)((TTypeCompatibleBytes<Chaos::FIgnoreCollisionManager::FStorageData_*> *)
         ((longlong)aVar13 + 8))->Pad = pTVar8;
    ((this->StorageDataFreePool).Head)->Next = aVar13;
    (this->StorageDataFreePool).Head = (FNode *)aVar13;
    LOCK();
    paVar3 = &(this->StorageDataFreePool).NumElems;
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  } while( true );
code_r0x0001439d61bd:
  iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + *(longlong *)&this_01->field_0x0);
  if (iVar18 == -1) goto LAB_1439d61cc;
  goto LAB_1439d61b0;
}

// ProcessPendingQueues @ 1439d8a30

void __thiscall
Chaos::FIgnoreCollisionManager::ProcessPendingQueues
          (FIgnoreCollisionManager *this,FPBDRigidsSolver *param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *pTVar3;
  FUniqueIdx FVar4;
  FUniqueIdx FVar5;
  code *pcVar6;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  FSingleParticlePhysicsProxy *pFVar10;
  FUniqueIdx *pFVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar29;
  FScriptContainerElement *pFVar30;
  TGeometryParticleHandleImp<double,3,1> *pTVar31;
  FScriptContainerElement *pFVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  TGeometryParticleHandleImp<double,3,1> *pTVar34;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [2];
  uint local_234;
  uint local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  uint local_1f8;
  longlong local_1f0;
  FUniqueIdx local_1e8 [2];
  FUniqueIdx local_1e0 [2];
  FUniqueIdx local_1d8 [2];
  uint local_1d0;
  FUniqueIdx local_1cc;
  FUniqueIdx local_1c8 [2];
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *local_148;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  int local_54;
  
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  iVar14 = *(int *)&(this->PendingActivations).field_0x8 -
           *(int *)&(this->PendingActivations).field_0x34;
  if ((iVar14 != 0) &&
     (*(int *)&(this->PendingDeactivations).Elements.field_0x8 !=
      *(int *)&(this->PendingDeactivations).Elements.field_0x34)) {
    pTVar29 = &this->PendingActivations;
    local_228.Data = (FScriptContainerElement *)0x0;
    local_180 = &(this->PendingActivations).field_0x10;
    local_220 = 0;
    iVar16 = *(int *)&(this->PendingActivations).field_0x28;
    local_170 = 0;
    uStack_184 = 1;
    iStack_174 = local_170;
    iStack_188 = 0;
    if (iVar16 != 0) {
      puVar27 = *(uint **)&(this->PendingActivations).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)local_180;
      }
      uStack_184 = *puVar27;
      local_170 = 0;
      while (uStack_184 == 0) {
        lVar13 = (longlong)iStack_188;
        local_170 = local_170 + 0x20;
        iStack_188 = iStack_188 + 1;
        uStack_184 = 1;
        iStack_174 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188)
        goto LAB_1439d8b2f;
        uStack_184 = puVar27[lVar13 + 1];
      }
      uStack_184 = -uStack_184 & uStack_184;
      uVar1 = (ulonglong)uStack_184 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_160 = (int)lVar13;
      iStack_174 = local_170 + -1 + local_160;
      if (iVar16 < iStack_174) {
        iStack_174 = iVar16;
      }
    }
LAB_1439d8b2f:
    puVar25 = &(this->PendingActivations).field_0x10;
    uVar22 = *(uint *)&(this->PendingActivations).field_0x28;
    uStack_178 = 0xffffffff;
    TStack_118.CurrentBitIndex = iStack_174;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    uVar20 = uVar22 & 0xffffffe0;
    TStack_118._padding_ = CONCAT44(uStack_184,iStack_188);
    iVar15 = (int)uVar22 >> 5;
    TStack_118._28_4_ = local_74;
    TStack_118.BaseBitIndex = local_170;
    uStack_f8 = CONCAT44(uStack_164,iVar14);
    local_190 = pTVar29;
    iStack_168 = iVar14;
    local_120 = pTVar29;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
    if ((((int)uVar22 < 0) || (iVar16 < (int)uVar22)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar23 = *(uint *)&(this->PendingActivations).field_0x28;
    if (uVar22 != uVar23) {
      puVar24 = *(undefined1 **)&(this->PendingActivations).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar25;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar15 * 4);
      while (uVar22 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar22 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1439d8c30;
        uVar22 = *(uint *)(puVar24 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_138 = (int)lVar13;
      uVar22 = local_138 + -1 + uVar20;
      if ((int)uVar23 < (int)uVar22) {
        uVar22 = uVar23;
      }
    }
LAB_1439d8c30:
    while( true ) {
      pTVar7 = local_120;
      if (*(int *)(&local_120->field_0x0 + 8) - *(int *)(&local_120->field_0x0 + 0x34) !=
          (int)uStack_f8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_118.CurrentBitIndex == uVar22) &&
          (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) &&
         (pTVar7 == pTVar29)) break;
      pFVar17 = (FScriptContainerElement *)
                ((longlong)TStack_118.CurrentBitIndex * 0x20 + *(longlong *)&pTVar7->field_0x0);
      if ((*(int *)&(this->PendingDeactivations).Elements.field_0x8 !=
           *(int *)&(this->PendingDeactivations).Elements.field_0x34) &&
         (iVar14 = TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>
                   ::RemoveImpl<Chaos::FUniqueIdx>
                             (&this->PendingDeactivations,*(int *)pFVar17,(FUniqueIdx *)pFVar17),
         iVar14 != 0)) {
        if ((local_228.Data <= pFVar17) &&
           ((pFVar17 < local_228.Data + (longlong)local_220._4_4_ * 4 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (int)local_220;
        if ((int)local_220 == local_220._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_228,(int *)((longlong)&local_220 + 4));
        }
        local_220 = CONCAT44(local_220._4_4_,iVar14 + 1);
        *(int *)(local_228.Data + (longlong)iVar14 * 4) = *(int *)pFVar17;
        if (((local_208.Data <= pFVar17) &&
            (pFVar17 < local_208.Data + (longlong)local_200._4_4_ * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (int)local_200;
        if ((int)local_200 == local_200._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_208,(int *)((longlong)&local_200 + 4));
        }
        local_200 = CONCAT44(local_200._4_4_,iVar14 + 1);
        *(int *)(local_208.Data + (longlong)iVar14 * 4) = *(int *)pFVar17;
      }
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    }
    iVar14 = (int)local_220;
    pFVar17 = local_228.Data + (longlong)(int)local_220 * 4;
    FVar18.Data = local_228.Data;
    while( true ) {
      if ((int)local_220 != iVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar18.Data == pFVar17) break;
      local_1e8[0].Idx = *(int *)FVar18.Data;
      if (*(int *)&(this->PendingActivations).field_0x8 !=
          *(int *)&(this->PendingActivations).field_0x34) {
        TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::FUniqueIdx>
                  ((TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)pTVar29,local_1e8[0].Idx,local_1e8);
      }
      FVar18.Data = FVar18.Data + 4;
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data);
    }
  }
  iVar14 = 0;
  iVar16 = *(int *)&(this->PendingActivations).field_0x8 -
           *(int *)&(this->PendingActivations).field_0x34;
  if (iVar16 != 0) {
    pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingActivations).field_0x10;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    pTVar29 = &this->PendingActivations;
    iVar15 = *(int *)&(this->PendingActivations).field_0x28;
    local_1a0 = 0;
    uStack_1b4 = 1;
    iStack_1a4 = local_1a0;
    iStack_1b8 = iVar14;
    if (iVar15 != 0) {
      puVar27 = *(uint **)&(this->PendingActivations).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)pTVar33;
      }
      uStack_1b4 = *puVar27;
      local_1a0 = iVar14;
      while (uStack_1b4 == 0) {
        lVar13 = (longlong)iStack_1b8;
        local_1a0 = local_1a0 + 0x20;
        iStack_1b8 = iStack_1b8 + 1;
        uStack_1b4 = 1;
        iStack_1a4 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
        goto LAB_1439d8efe;
        uStack_1b4 = puVar27[lVar13 + 1];
      }
      uStack_1b4 = -uStack_1b4 & uStack_1b4;
      uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_134 = (int)lVar13;
      iStack_1a4 = local_134 + -1 + local_1a0;
      if (iVar15 < iStack_1a4) {
        iStack_1a4 = iVar15;
      }
    }
LAB_1439d8efe:
    uStack_1a8 = 0xffffffff;
    uVar22 = *(uint *)&(this->PendingActivations).field_0x28;
    TStack_e8._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
    uVar20 = uVar22 & 0xffffffe0;
    TStack_e8.CurrentBitIndex = iStack_1a4;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iStack_19c = local_54;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = local_1a0;
    uStack_c8 = CONCAT44(uStack_194,iVar16);
    iVar14 = (int)uVar22 >> 5;
    local_1f8 = uVar22;
    local_1c0 = (TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator> *
                )pTVar29;
    local_1b0 = (undefined1 *)pTVar33;
    iStack_198 = iVar16;
    local_148 = pTVar29;
    local_140 = pTVar33;
    local_f0 = pTVar29;
    TStack_e8.Array = pTVar33;
    if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar23 = *(uint *)&(this->PendingActivations).field_0x28;
    if (uVar22 != uVar23) {
      puVar25 = *(undefined1 **)&(this->PendingActivations).field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = (undefined1 *)pTVar33;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar14 * 4);
      while (uVar22 == 0) {
        lVar13 = (longlong)iVar14;
        uVar20 = uVar20 + 0x20;
        iVar14 = iVar14 + 1;
        uVar22 = uVar23;
        local_1f8 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1439d9010;
        uVar22 = *(uint *)(puVar25 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_130 = (int)lVar13;
      uVar22 = local_130 + -1 + uVar20;
      local_1f8 = uVar22;
      if ((int)uVar23 < (int)uVar22) {
        uVar22 = uVar23;
        local_1f8 = uVar23;
      }
    }
LAB_1439d9010:
    while( true ) {
      pTVar7 = local_f0;
      if (*(int *)(&local_f0->field_0x0 + 8) - *(int *)(&local_f0->field_0x0 + 0x34) !=
          (int)uStack_c8) {
        local_238 = 0;
        `TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_238);
      }
      if (((TStack_e8.CurrentBitIndex == uVar22) && (TStack_e8.Array == pTVar33)) &&
         (pTVar7 == pTVar29)) break;
      pFVar30 = (FScriptContainerElement *)
                ((longlong)TStack_e8.CurrentBitIndex * 0x20 + *(longlong *)&pTVar7->field_0x0);
      local_234 = *(uint *)(pFVar30 + 0x10);
      pFVar17 = pFVar30 + 8;
      pFVar19 = pFVar30 + 0x10;
      uVar22 = local_234 - 1;
      pFVar32 = pFVar30;
      local_230 = uVar22;
      local_158 = pFVar19;
      local_150 = pFVar30;
      if (-1 < (int)uVar22) {
        lVar13 = (longlong)(int)uVar22;
        do {
          uVar23 = ~uVar22;
          uVar28 = uVar23 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar22 < (int)*(uint *)pFVar19) {
            uVar20 = uVar28;
          }
          local_230 = uVar22;
          local_1f0 = lVar13;
          local_1d0 = uVar23;
          if ((uVar20 == 0) &&
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
                    /* WARNING: Load size is inaccurate */
          if (local_208.Data != local_208.Data + (longlong)(int)local_200 * 4) {
            FVar18.Data = local_208.Data;
            do {
              if (*(int *)FVar18.Data == *(int *)(*pFVar17 + lVar13 * 4)) {
                uVar20 = 0;
                if ((int)local_234 <= (int)*(uint *)(pFVar30 + 0x10)) {
                  uVar20 = uVar28;
                }
                if ((uVar20 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                    /* WARNING: Load size is inaccurate */
                iVar14 = uVar23 + *(uint *)(pFVar30 + 0x10);
                if (1 < iVar14) {
                  iVar14 = 1;
                }
                if (iVar14 != 0) {
                  memmove(*pFVar17 + lVar13 * 4,
                          *pFVar17 + (longlong)(int)(*(uint *)(pFVar30 + 0x10) - iVar14) * 4,
                          (longlong)iVar14 << 2);
                }
                *(uint *)(pFVar30 + 0x10) = *(uint *)(pFVar30 + 0x10) - 1;
                uVar20 = *(uint *)(pFVar30 + 0x10);
                goto LAB_1439d9357;
              }
              FVar18.Data = FVar18.Data + 4;
            } while (FVar18.Data != local_208.Data + (longlong)(int)local_200 * 4);
          }
          uVar20 = *(uint *)pFVar32;
          uVar23 = 0;
          if ((int)uVar22 < (int)*(uint *)(pFVar30 + 0x10)) {
            uVar23 = uVar28;
          }
          if ((uVar23 == 0) &&
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
                    /* WARNING: Load size is inaccurate */
          iVar14 = *(int *)(*pFVar17 + lVar13 * 4);
          local_1e0[0].Idx = uVar20;
          pFVar10 = FPBDRigidsSolver::GetParticleProxy_PT(param_1,local_1e0);
          if (pFVar10 == (FSingleParticlePhysicsProxy *)0x0) {
            pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          }
          else {
            pTVar31 = pFVar10->Handle;
          }
          local_1d8[0].Idx = iVar14;
          pFVar10 = FPBDRigidsSolver::GetParticleProxy_PT(param_1,local_1d8);
          if (pFVar10 == (FSingleParticlePhysicsProxy *)0x0) {
            pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          }
          else {
            pTVar12 = pFVar10->Handle;
          }
          if ((pTVar31 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
             (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
            pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
              pTVar34 = pTVar31;
            }
            pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar12->_padding_ + 4)) {
              pTVar21 = pTVar12;
            }
            if ((pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
               (lVar13 = local_1f0, uVar22 = local_230,
               pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
              pFVar11 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  ((TGeometryParticlesImp<double,3,0> *)pTVar31->_padding_,
                                   (int)pTVar31->_padding_);
              FVar4.Idx = pFVar11->Idx;
              pFVar11 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  ((TGeometryParticlesImp<double,3,0> *)pTVar12->_padding_,
                                   (int)pTVar12->_padding_);
              FVar5.Idx = pFVar11->Idx;
              if (pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                AddIgnoreCollisionsImpl(this,FVar4,FVar5);
                SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar34,true);
              }
              lVar13 = local_1f0;
              uVar22 = local_230;
              if (pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                AddIgnoreCollisionsImpl(this,FVar5,FVar4);
                SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar21,true);
                lVar13 = local_1f0;
                uVar22 = local_230;
              }
            }
          }
          pFVar19 = local_158;
          uVar20 = 0;
          if ((int)local_234 <= (int)*(uint *)local_158) {
            uVar20 = uVar28;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = local_1d0 + *(uint *)pFVar19;
                    /* WARNING: Load size is inaccurate */
          if (1 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            memmove(*pFVar17 + lVar13 * 4,*pFVar17 + (longlong)(int)(*(uint *)pFVar19 - iVar14) * 4,
                    (longlong)iVar14 << 2);
          }
          *(uint *)pFVar19 = *(uint *)pFVar19 - 1;
          uVar20 = *(uint *)pFVar19;
          pFVar32 = local_150;
LAB_1439d9357:
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar17,uVar20,(int *)(pFVar30 + 0x14));
          uVar22 = uVar22 - 1;
          local_234 = local_234 - 1;
          lVar13 = lVar13 + -1;
          pTVar29 = local_148;
          local_230 = uVar22;
          local_1f0 = lVar13;
        } while (-1 < (int)uVar22);
      }
      if (*(uint *)pFVar19 == 0) {
        if (((local_218.Data <= pFVar32) &&
            (pFVar32 < local_218.Data + (longlong)local_210._4_4_ * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)local_210 == local_210._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_218,(int *)((longlong)&local_210 + 4));
          local_210 = CONCAT44(local_210._4_4_,iVar14);
        }
        lVar13 = (longlong)(int)local_210;
        local_210 = CONCAT44(local_210._4_4_,(int)local_210 + 1);
        *(uint *)(local_218.Data + lVar13 * 4) = *(uint *)pFVar32;
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      pTVar33 = local_140;
      uVar22 = local_1f8;
    }
    iVar14 = (int)local_210;
    pFVar17 = local_218.Data + (longlong)(int)local_210 * 4;
    FVar18.Data = local_218.Data;
    while( true ) {
      if ((int)local_210 != iVar14) {
        local_237 = 0;
        `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_237);
      }
      if (FVar18.Data == pFVar17) break;
      local_1cc.Idx = *(int *)FVar18.Data;
      if (*(int *)&(this->PendingActivations).field_0x8 !=
          *(int *)&(this->PendingActivations).field_0x34) {
        TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::FUniqueIdx>
                  ((TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->PendingActivations,local_1cc.Idx,&local_1cc);
      }
      FVar18.Data = FVar18.Data + 4;
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
  }
  iVar14 = *(int *)&(this->PendingDeactivations).Elements.field_0x8 -
           *(int *)&(this->PendingDeactivations).Elements.field_0x34;
  if (iVar14 != 0) {
    local_1b0 = &(this->PendingDeactivations).Elements.field_0x10;
    iStack_1b8 = 0;
    iVar16 = *(int *)&(this->PendingDeactivations).Elements.field_0x28;
    pTVar3 = &this->PendingDeactivations;
    local_1a0 = 0;
    uStack_1b4 = 1;
    iStack_1a4 = 0;
    if (iVar16 != 0) {
      puVar27 = *(uint **)&(this->PendingDeactivations).Elements.field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)local_1b0;
      }
      uVar22 = *puVar27;
      while (uVar22 == 0) {
        lVar13 = (longlong)iStack_1b8;
        local_1a0 = local_1a0 + 0x20;
        iStack_1b8 = iStack_1b8 + 1;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
        goto LAB_1439d9577;
        uVar22 = puVar27[lVar13 + 1];
      }
      uStack_1b4 = -uVar22 & uVar22;
      uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_12c = (int)lVar13;
      iStack_1a4 = local_1a0 + -1 + local_12c;
      if (iVar16 < iStack_1a4) {
LAB_1439d9577:
        iStack_1a4 = iVar16;
      }
    }
    puVar25 = &(this->PendingDeactivations).Elements.field_0x10;
    uVar22 = *(uint *)&(this->PendingDeactivations).Elements.field_0x28;
    uStack_1a8 = 0xffffffff;
    uVar20 = uVar22 & 0xffffffe0;
    TStack_b8.CurrentBitIndex = iStack_1a4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
    iStack_19c = iStack_174;
    iVar15 = (int)uVar22 >> 5;
    TStack_b8._28_4_ = iStack_174;
    TStack_b8.BaseBitIndex = local_1a0;
    uStack_98 = CONCAT44(uStack_194,iVar14);
    local_1c0 = pTVar3;
    iStack_198 = iVar14;
    local_c0 = pTVar3;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b0;
    if ((((int)uVar22 < 0) || (iVar16 < (int)uVar22)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar23 = *(uint *)&(this->PendingDeactivations).Elements.field_0x28;
    if (uVar22 != uVar23) {
      puVar24 = *(undefined1 **)&(this->PendingDeactivations).Elements.field_0x20;
      puVar26 = puVar25;
      if (puVar24 != (undefined1 *)0x0) {
        puVar26 = puVar24;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar15 * 4);
      while (uVar22 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar22 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1439d96a0;
        uVar22 = *(uint *)(puVar26 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_128 = (int)lVar13;
      uVar22 = (uVar20 - 1) + local_128;
      if ((int)uVar23 < (int)uVar22) {
        uVar22 = uVar23;
      }
    }
LAB_1439d96a0:
    while( true ) {
      pTVar8 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        local_236[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::FUniqueIdx>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
      }
      if (((TStack_b8.CurrentBitIndex == uVar22) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) &&
         (pTVar8 == pTVar3)) break;
      pFVar11 = (FUniqueIdx *)
                (*(longlong *)&pTVar8->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc);
      if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
          *(int *)&(this->IgnoreCollisionsList).field_0x34) {
        TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::FUniqueIdx>
                  ((TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this,pFVar11->Idx,pFVar11);
      }
      local_1c8[0].Idx = pFVar11->Idx;
      pFVar10 = FPBDRigidsSolver::GetParticleProxy_PT(param_1,local_1c8);
      if ((pFVar10 != (FSingleParticlePhysicsProxy *)0x0) &&
         (pTVar31 = pFVar10->Handle, pTVar31 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
        pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
          pTVar12 = pTVar31;
        }
        if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          uVar20 = (uint)pTVar12->_padding_;
          lVar13 = pTVar12->_padding_;
          uVar23 = 0;
          if ((int)uVar20 < *(int *)(lVar13 + 0x2e0)) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
          pbVar2 = (byte *)((longlong)(int)uVar20 * 0x10 + 10 + *(longlong *)(lVar13 + 0x2d8));
          *pbVar2 = *pbVar2 & 0xfd;
        }
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    pTVar3 = &this->PendingDeactivations;
    bVar9 = 1 < (this->PendingDeactivations).HashSize;
    if (!bVar9) {
      TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::
      UnhashElements(pTVar3);
    }
    puVar25 = &(this->PendingDeactivations).Elements.field_0xc;
    *(undefined4 *)&(this->PendingDeactivations).Elements.field_0x8 = 0;
    if (*(int *)puVar25 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar25);
    }
    *(undefined4 *)&(this->PendingDeactivations).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingDeactivations).Elements.field_0x34 = 0;
    iVar14 = *(int *)&(this->PendingDeactivations).Elements.field_0x2c;
    *(undefined4 *)&(this->PendingDeactivations).Elements.field_0x28 = 0;
    if ((iVar14 < 0) || (0x80 < iVar14)) {
      *(undefined4 *)&(this->PendingDeactivations).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingDeactivations).Elements.field_0x10,0);
    }
    if (bVar9) {
      (this->PendingDeactivations).HashSize = 1;
      TSet<Chaos::FUniqueIdx,DefaultKeyFuncs<Chaos::FUniqueIdx,0>,FDefaultSetAllocator>::Rehash
                (pTVar3);
    }
  }
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  return;
}

// RemoveIgnoreCollisions @ 1439dcfb0

void __thiscall
Chaos::FIgnoreCollisionManager::RemoveIgnoreCollisions
          (FIgnoreCollisionManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  FUniqueIdx FVar1;
  FUniqueIdx FVar2;
  int iVar3;
  FUniqueIdx *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar6 = param_1;
    }
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar5 = param_2;
    }
    if ((pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_);
      FVar1.Idx = pFVar4->Idx;
      pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                          (int)param_2->_padding_);
      FVar2.Idx = pFVar4->Idx;
      if ((pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (iVar3 = RemoveIgnoreCollisionsImpl(this,FVar1,FVar2), iVar3 == 0)) {
        SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar6,false);
      }
      if ((pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (iVar3 = RemoveIgnoreCollisionsImpl(this,FVar2,FVar1), iVar3 == 0)) {
        SetIgnoreCollisionFlag(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,false);
      }
    }
  }
  return;
}

// RemoveIgnoreCollisionsImpl @ 1439dd090

int __thiscall
Chaos::FIgnoreCollisionManager::RemoveIgnoreCollisionsImpl
          (FIgnoreCollisionManager *this,FUniqueIdx param_1,FUniqueIdx param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  ForAnyElementType *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FUniqueIdx local_res10 [2];
  
  if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
      *(int *)&(this->IgnoreCollisionsList).field_0x34) {
    puVar7 = *(undefined1 **)&(this->IgnoreCollisionsList).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->IgnoreCollisionsList).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->IgnoreCollisionsList).field_0x48 - 1U & param_1.Idx)
                              * 4);
    if (iVar5 != -1) {
      while (piVar6 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)&this->IgnoreCollisionsList),
            *piVar6 != param_1.Idx) {
        iVar5 = piVar6[6];
        if (iVar5 == -1) {
          return 0;
        }
      }
      pFVar8 = (ForAnyElementType *)(piVar6 + 2);
      if (piVar6 == (int *)0x0) {
        pFVar8 = (ForAnyElementType *)0x0;
      }
      if (pFVar8 != (ForAnyElementType *)0x0) {
        pFVar1 = pFVar8->Data;
        for (pFVar10 = pFVar1; local_res10[0].Idx = param_1.Idx,
            pFVar10 != pFVar1 + (longlong)*(int *)&pFVar8[1].Data * 8; pFVar10 = pFVar10 + 8) {
          if (*(int *)pFVar10 == param_2.Idx) {
            uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar1 >> 3);
            if (uVar9 != 0xffffffff) {
              uVar12 = ~uVar9 >> 0x1f;
              uVar4 = 0;
              if ((int)uVar9 < *(int *)&pFVar8[1].Data) {
                uVar4 = uVar12;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                iVar5 = (*pcVar2)();
                return iVar5;
              }
              lVar11 = (longlong)(int)uVar9;
              *(int *)(pFVar8->Data + lVar11 * 8 + 4) = *(int *)(pFVar8->Data + lVar11 * 8 + 4) + -1
              ;
              uVar4 = 0;
              if ((int)uVar9 < *(int *)&pFVar8[1].Data) {
                uVar4 = uVar12;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                iVar5 = (*pcVar2)();
                return iVar5;
              }
              if (*(int *)(pFVar8->Data + lVar11 * 8 + 4) < 1) {
                uVar4 = 0;
                if ((int)uVar9 < *(int *)&pFVar8[1].Data) {
                  uVar4 = uVar12;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  iVar5 = (*pcVar2)();
                  return iVar5;
                }
                iVar5 = *(int *)&pFVar8[1].Data + ~uVar9;
                if (1 < iVar5) {
                  iVar5 = 1;
                }
                if (iVar5 != 0) {
                  memmove(pFVar8->Data + lVar11 * 8,
                          pFVar8->Data + (longlong)(*(int *)&pFVar8[1].Data - iVar5) * 8,
                          (longlong)iVar5 << 3);
                }
                *(int *)&pFVar8[1].Data = *(int *)&pFVar8[1].Data + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,pFVar8,*(int *)&pFVar8[1].Data,(int *)((longlong)&pFVar8[1].Data + 4)
                          );
              }
            }
            break;
          }
        }
        if (*(int *)&pFVar8[1].Data != 0) {
          return *(int *)&pFVar8[1].Data;
        }
        if (*(int *)&(this->IgnoreCollisionsList).field_0x8 !=
            *(int *)&(this->IgnoreCollisionsList).field_0x34) {
          TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<Chaos::FUniqueIdx>
                    ((TSet<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this,param_1.Idx,local_res10);
        }
      }
    }
  }
  return 0;
}

// SetIgnoreCollisionFlag @ 1439de5c0

void __thiscall
Chaos::FIgnoreCollisionManager::SetIgnoreCollisionFlag
          (FIgnoreCollisionManager *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  if (!param_2) {
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
    *pbVar1 = *pbVar1 & 0xfd;
    return;
  }
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
  *pbVar1 = *pbVar1 | 2;
  return;
}

// ~FIgnoreCollisionManager @ 143d032b0

void __thiscall
Chaos::FIgnoreCollisionManager::~FIgnoreCollisionManager(FIgnoreCollisionManager *this)

{
  FScriptContainerElement *pFVar1;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar6;
  bool bVar7;
  
  DestructItems<TUniquePtr<Chaos::FIgnoreCollisionManager::FStorageData,TDefaultDelete<Chaos::FIgnoreCollisionManager::FStorageData>_>,int>
            ((TUniquePtr<Chaos::FIgnoreCollisionManager::FStorageData,TDefaultDelete<Chaos::FIgnoreCollisionManager::FStorageData>_>
              *)(this->StorageDataBackingBuffer).AllocatorInstance.Data,
             (this->StorageDataBackingBuffer).ArrayNum);
  pFVar1 = (this->StorageDataBackingBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  aVar2 = (this->StorageDataFreePool).Tail;
  aVar6 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
          (this->StorageDataFreePool).First;
  do {
    aVar3 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *)
             aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar2;
    aVar6 = aVar3;
  } while (bVar7);
  while (aVar3 != (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                   )0x0) {
    aVar2 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *)
             aVar3;
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  aVar2 = (this->StorageDataQueue).Tail;
  aVar6 = (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
          (this->StorageDataQueue).First;
  do {
    aVar3 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *)
             aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar2;
    aVar6 = aVar3;
  } while (bVar7);
  while (aVar3 != (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>
                   )0x0) {
    aVar2 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *)
             aVar3;
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  (this->PendingDeactivations).HashSize = 0;
  FVar4 = (this->PendingDeactivations).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<Chaos::FUniqueIdx>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FUniqueIdx>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingDeactivations).Elements);
  *(undefined4 *)&(this->PendingActivations).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PendingActivations).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingActivations);
  *(undefined4 *)&(this->IgnoreCollisionsList).field_0x48 = 0;
  pvVar5 = *(void **)&(this->IgnoreCollisionsList).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FUniqueIdx,TArray<Chaos::FIgnoreCollisionManager::FIgnoreEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetNewStorageData @ 143d55f50

FStorageData * __thiscall
Chaos::FIgnoreCollisionManager::GetNewStorageData(FIgnoreCollisionManager *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<TUniquePtr<Chaos::FIgnoreCollisionManager::FStorageData,TDefaultDelete<Chaos::FIgnoreCollisionManager::FStorageData>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> aVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FStorageData *pFVar9;
  uint uVar10;
  uint uVar11;
  
  aVar4 = *(atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*> *)
           (this->StorageDataFreePool).Tail;
  if (aVar4 != (atomic<TSpscQueue<Chaos::FIgnoreCollisionManager::FStorageData_*,FMemory>::FNode_*>)
               0x0) {
    pFVar9 = *(FStorageData **)((longlong)aVar4 + 8);
    (this->StorageDataFreePool).Tail = aVar4;
    LOCK();
    paVar2 = &(this->StorageDataFreePool).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    return pFVar9;
  }
  pTVar3 = &this->StorageDataBackingBuffer;
  puVar8 = ::operator_new(0xa8);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[7] = 0;
    puVar8[9] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0x11] = 0;
    puVar8[0x13] = 0;
    *(undefined4 *)((longlong)puVar8 + 0xa4) = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = 0x80;
    *(undefined4 *)(puVar8 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
    puVar8[8] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xe] = 0;
    *(undefined4 *)(puVar8 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = 0x80;
    *(undefined4 *)(puVar8 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x84) = 0;
    puVar8[0x12] = 0;
    *(undefined4 *)(puVar8 + 0x14) = 0xffffffff;
  }
  iVar7 = (this->StorageDataBackingBuffer).ArrayNum;
  piVar1 = &(this->StorageDataBackingBuffer).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->StorageDataBackingBuffer).ArrayNum = iVar7 + 1;
  *(undefined8 **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) = puVar8;
  iVar7 = (this->StorageDataBackingBuffer).ArrayNum;
  uVar10 = iVar7 - 1;
  uVar11 = 0;
  if ((int)uVar10 < iVar7) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStorageData *)(*pcVar5)();
      return pFVar9;
    }
  }
  return *(FStorageData **)
          ((pTVar3->AllocatorInstance).Data +
          (longlong)(this->StorageDataBackingBuffer).ArrayNum * 8 + -8);
}

