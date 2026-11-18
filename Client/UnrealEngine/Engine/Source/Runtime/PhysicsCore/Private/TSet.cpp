// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 3

// Rehash @ 1441b3ef0

void __thiscall
TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  ulonglong *puVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar3 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1441b3fcc;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar4 * 4 + 4);
      }
      uStack_54 = -uVar3 & uVar3;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1441b3fcc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar7 = (ulonglong *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar3 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = (uVar3 >> 0x10 ^ uVar3) & *piVar1 - 1U;
        *(uint *)((longlong)puVar7 + 0x1c) = uVar3;
        pFVar6 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(pFVar6->InlineData + uVar5 * 4);
        *(int *)(pFVar6->InlineData + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 1441b40b0

void __thiscall
TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(void *this,uint param_1,
              TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>
              *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if (uVar4 < 4) {
    iVar1 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar1 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((0 < (int)uVar4) && (*(int *)((longlong)this + 0x48) < iVar1)) {
    *(int *)((longlong)this + 0x48) = iVar1;
    Rehash(this);
    return;
  }
  uVar4 = *(int *)((longlong)this + 0x48) - 1U & param_1;
  *(uint *)&param_2->field_0x1c = uVar4;
  lVar3 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar3 = (longlong)this + 0x38;
  }
  uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar4;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)(lVar3 + uVar2 * 4);
  *(int *)(lVar3 + uVar2 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 1441bc140

bool __thiscall
TSet<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  bool bVar4;
  
  bVar4 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)this;
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar4 = iVar3 != -1;
          if (bVar4) {
            _Dst = (void *)((longlong)iVar3 * 0x20 + lVar2);
            pvVar1 = *(void **)((longlong)_Dst + 8);
            if (pvVar1 != (void *)0x0) {
              FMemory::Free(pvVar1);
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,*param_3,1);
            *param_3 = iVar3;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar2);
      } while (iVar3 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar4;
  }
  return bVar4;
}

