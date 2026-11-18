// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 146d6bc70

void __thiscall
TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
           *this,TArray<FNavAgentProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FNavAgentProperties *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FNavAgentProperties *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FNavAgentProperties,int>
            ((FNavAgentProperties *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146d6bd50;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_146d6bd50:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FNavAgentProperties *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x48);
      pFVar6 = (FNavAgentProperties *)(param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      FNavAgentProperties::FNavAgentProperties
                ((FNavAgentProperties *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x38),pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 146d6c020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
           *this,TArray<FNavAgentProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FNavAgentProperties *pFVar2;
  FNavAgentProperties *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  uint *puVar16;
  longlong lVar17;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  undefined1 local_f4 [12];
  float fStack_e8;
  float fStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  float local_d0;
  uint uStack_cc;
  TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar2 = (FNavAgentProperties *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FNavAgentProperties,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNavAgentProperties,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar15 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  fVar13 = 0.0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar11 == 0) goto LAB_146d6c31d;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar12 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_146d6c31d;
  local_50 = uVar12;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_146d6c158;
      }
    }
    else {
LAB_146d6c158:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar14 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      puVar16 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar11 = *puVar16;
      uVar14 = uVar15;
      while (uVar11 == 0) {
        uStack_130 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_146d6c262;
        uVar11 = puVar16[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_146d6c262:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>
                *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        lVar9 = *(longlong *)&local_c0->Elements;
        lVar17 = (longlong)(int)uVar10 * 0x40;
        uVar11 = (((int)(short)(int)*(float *)(lVar17 + 4 + lVar9) << 0x10 |
                  (int)(short)(int)*(float *)(lVar17 + 8 + lVar9)) ^
                 (int)*(float *)(lVar17 + 0xc + lVar9)) & local_50 - 1;
        *(uint *)(lVar17 + 0x3c + lVar9) = uVar11;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar17 + 0x38 + lVar9) = *(undefined4 *)((longlong)FVar8.Data + uVar14 * 4);
        *(int *)((longlong)FVar8.Data + uVar14 * 4) = (int)uVar10;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_146d6c31d:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_d0 = fVar13;
  fStack_e4 = 1.4013e-45;
  if (uVar11 != 0) {
    puVar16 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_120.Array;
    }
    uVar12 = *puVar16;
    uVar14 = uVar15;
    while( true ) {
      fVar13 = (float)uVar15;
      local_d0 = (float)uVar14;
      if (uVar12 != 0) break;
      lVar9 = (longlong)(int)fVar13;
      local_d0 = (float)((int)local_d0 + 0x20);
      uVar14 = (ulonglong)(uint)local_d0;
      fVar13 = (float)((int)fVar13 + 1);
      uVar15 = (ulonglong)(uint)fVar13;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)fVar13)
      goto LAB_146d6c3ce;
      uVar12 = puVar16[lVar9 + 1];
    }
    fStack_e4 = (float)(-uVar12 & uVar12);
    uVar15 = (ulonglong)(uint)fStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar12 = ((int)local_d0 - 1U) + local_f8;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_146d6c3ce:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(fStack_e4,fVar13);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = (int)local_d0;
  local_f4._4_8_ = this;
  fStack_e8 = fVar13;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar11) {
    do {
      lVar17 = (longlong)(int)uVar10;
      lVar9 = *(longlong *)&(this->Pairs).Elements;
      pFVar2 = (FNavAgentProperties *)(lVar9 + lVar17 * 0x48);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar6 = *(int *)((longlong)FVar8.Data +
                             (ulonglong)
                             (local_50 - 1 &
                             (((int)(short)(int)*(float *)(lVar9 + 4 + lVar17 * 0x48) << 0x10 |
                              (int)(short)(int)pFVar2->AgentHeight) ^ (int)pFVar2->AgentStepHeight))
                             * 4); iVar6 != -1;
            iVar6 = *(int *)(local_98._0_8_ + 0x38 + (longlong)iVar6 * 0x40)) {
          bVar5 = FNavAgentProperties::operator==
                            ((FNavAgentProperties *)(local_98._0_8_ + (longlong)iVar6 * 0x40),pFVar2
                            );
          if (bVar5) goto LAB_146d6c565;
        }
      }
      pFVar3 = (FNavAgentProperties *)(param_1->AllocatorInstance).Data;
      pFVar2 = (FNavAgentProperties *)(*(longlong *)&(this->Pairs).Elements + lVar17 * 0x48);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar6 + 1;
      FNavAgentProperties::FNavAgentProperties
                ((FNavAgentProperties *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x38)
                 ,pFVar2);
      TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>::
      Emplace<FNavAgentProperties_const_&>
                ((TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>
                  *)local_98,(FNavAgentProperties *)local_f4,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_120.CurrentBitIndex * 0x48));
LAB_146d6c565:
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FNavAgentProperties>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 146d95260

int * __thiscall
TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
::Find(TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
       *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UClass **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 146d95310

TSharedPtr<FNavigationElement,1> * __thiscall
TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
::Find(TMapBase<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
       *this,FNavigationElementHandle *param_1)

{
  longlong lVar1;
  int iVar2;
  TSharedPtr<FNavigationElement,1> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (int)(param_1->SubElementId >> 0x20) * 0x17 + (int)param_1->SubElementId;
  uVar6 = ((param_1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (param_1->OwnerUObject).WeakPtr.ObjectIndex) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  iVar2 = TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNavigationElementHandle>
                    (&this->Pairs,(uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    pTVar3 = (TSharedPtr<FNavigationElement,1> *)0x0;
    if (lVar1 != 0) {
      pTVar3 = (TSharedPtr<FNavigationElement,1> *)(lVar1 + 0x10);
    }
    return pTVar3;
  }
  return (TSharedPtr<FNavigationElement,1> *)0x0;
}

// Find @ 146d953f0

FOctreeElementId2 * __thiscall
TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
::Find(TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
       *this,FNavigationElementHandle *param_1)

{
  int iVar1;
  FOctreeElementId2 *pFVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (int)(param_1->SubElementId >> 0x20) * 0x17 + (int)param_1->SubElementId;
  uVar6 = ((param_1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (param_1->OwnerUObject).WeakPtr.ObjectIndex) - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 10;
  iVar1 = TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNavigationElementHandle>
                    (&this->Pairs,(uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xf,param_1);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar2 = (FOctreeElementId2 *)0x0;
    if (lVar4 != 0) {
      pFVar2 = (FOctreeElementId2 *)(lVar4 + 0x10);
    }
    return pFVar2;
  }
  return (FOctreeElementId2 *)0x0;
}

// Find @ 146d954d0

FNavigationElementHandle * __thiscall
TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
::Find(TMapBase<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
       *this,FObjectKey *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FNavigationElementHandle *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = param_1->ObjectSerialNumber;
  uVar7 = param_1->ObjectIndex - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar8 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == param_1->ObjectIndex) && (piVar2[1] == uVar1)) {
          if (iVar8 == -1) {
            return (FNavigationElementHandle *)0x0;
          }
          pFVar5 = (FNavigationElementHandle *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar5 = (FNavigationElementHandle *)(piVar2 + 2);
          }
          return pFVar5;
        }
        iVar8 = piVar2[6];
      } while (iVar8 != -1);
    }
  }
  return (FNavigationElementHandle *)0x0;
}

