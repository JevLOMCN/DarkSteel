// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 17

// FindOrAddImpl<UClass_*_const_&> @ 146e7c940

uint * __thiscall
TMapBase<UClass_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>_>
           *this,uint param_1,UClass **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(UClass **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_146e7c9d2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_146e7c9d2:
  return (uint *)(lVar3 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 146eb3be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
           *this,TArray<FBlackboard::FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  FKey local_114 [2];
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar18 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar16 = 0;
  if (uVar12 == 0) goto LAB_146eb3e9d;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_120 = (undefined4)lVar5;
    uVar13 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_146eb3e9d;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_146eb3cfa;
      }
    }
    else {
LAB_146eb3cfa:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar15 = (ulonglong)uVar13;
      uVar11 = uVar18;
      do {
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar9 = (longlong)(int)uVar13 - 1U & uVar11;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar10.Data + uVar9 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar11 = uVar18;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar12 = *(uint *)FVar17;
      uVar15 = uVar18;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_150;
        iVar8 = (int)uVar11;
        local_168 = iVar8 + 1;
        uVar11 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_146eb3e02;
        uVar12 = ((uint *)((longlong)FVar17 + 4))[iVar8];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar11 = (ulonglong)uStack_164 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_11c = (int)lVar5;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar11 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_146eb3e02:
        uVar11 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar11 < (int)local_70) {
      do {
        iVar8 = (int)uVar11;
        lVar5 = *local_110 + (longlong)iVar8 * 0xc;
        uVar12 = local_50 - 1 & (uint)*(ushort *)(*local_110 + (longlong)iVar8 * 0xc);
        *(uint *)(lVar5 + 8) = uVar12;
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(FVar10.Data + uVar11 * 4);
        *(int *)(FVar10.Data + uVar11 * 4) = iVar8;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar11 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_146eb3e9d:
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = *(uint *)&(this->Pairs).Elements.field_0x28;
  uVar11 = uVar18;
  local_c8 = uVar16;
  uStack_dc = 1;
  if (uVar12 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar11 = (ulonglong)uVar12;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar14;
    uVar15 = uVar18;
    local_c8 = 0;
    uVar16 = 0;
    while (uVar13 == 0) {
      iVar8 = (int)uVar18;
      local_c8 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)local_c8;
      uVar16 = iVar8 + 1;
      uVar18 = (ulonglong)uVar16;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_146eb3f1f;
      uVar13 = puVar14[(longlong)iVar8 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar18 = (ulonglong)uStack_dc * 2 + 1;
    lVar5 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_118 = (int)lVar5;
    uVar13 = (local_c8 - 1) + local_118;
    if ((int)uVar12 < (int)uVar13) {
      uVar13 = uVar12;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_146eb3f1f:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar11;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar16);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar16;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar12) {
    do {
      lVar5 = *(longlong *)&(this->Pairs).Elements;
      uVar3 = *(ushort *)(lVar5 + (longlong)(int)uVar11 * 0x28);
      if (local_98._8_4_ != local_64) {
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        for (iVar8 = *(int *)(FVar10.Data + ((ulonglong)(local_50 - 1) & (ulonglong)uVar3) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0xc + 4)) {
          if (*(ushort *)(local_98._0_8_ + (longlong)iVar8 * 0xc) == uVar3) goto LAB_146eb4080;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar5 + (longlong)(int)uVar11 * 0x28);
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined2 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 2) =
           *(undefined2 *)pFVar2;
      TSet<FBlackboard::FKey,DefaultKeyFuncs<FBlackboard::FKey,0>,FDefaultSetAllocator>::
      Emplace<FBlackboard::FKey_const_&>
                ((TSet<FBlackboard::FKey,DefaultKeyFuncs<FBlackboard::FKey,0>,FDefaultSetAllocator>
                  *)local_98,local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x28));
LAB_146eb4080:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar11 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar8 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FBlackboard::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FBlackboard::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FBlackboard::FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar8;
}

// Emplace<FName_const_&,float_const_&> @ 146f19f20

float * __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
Emplace<FName_const_&,float_const_&>
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,FName *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,float>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(float *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x14 + 8);
}

// Emplace<FName_const_&,float> @ 146f1a060

float * __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
Emplace<FName_const_&,float>
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,FName *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,float>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(float *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x14 + 8);
}

// Emplace<FName,FEQSDebugger::FStatsInfo_const_&> @ 146f1a5a0

FStatsInfo * __thiscall
TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
::Emplace<FName,FEQSDebugger::FStatsInfo_const_&>
          (TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
           *this,FName *param_1,FStatsInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x90);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    FEQSDebugger::FStatsInfo::FStatsInfo((FStatsInfo *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x88) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FStatsInfo *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x90);
}

// EmplaceByHash<FName> @ 146f1a950

FStatsInfo * __thiscall
TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FName_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x90);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_> *)0x0) {
    TKeyInitializer<FName_&&>::
    operator<FName,FEQSDebugger::FStatsInfo>_TTuple<FName,FEQSDebugger::FStatsInfo>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x88) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FStatsInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x90);
}

// FindOrAddImpl<FObjectKey> @ 146f1aba0

TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Emplace<int_const_&,int_const_&> @ 146f88800

int * __thiscall
TMapBase<int,int,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<int,int,0>_>
::Emplace<int_const_&,int_const_&>
          (TMapBase<int,int,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<int,int,0>_>
           *this,int *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
                      *)this,&local_28);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,int>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar1 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
          ::TryReplaceExisting(&this->Pairs,uVar1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar3 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,TSetAllocator<TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>,TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>_>_>
    ::RehashOrLink(&this->Pairs,uVar1,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar3 * 0x10);
}

// Find @ 146fa8a80

FAISightTarget * __thiscall
TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
::Find(TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  FAISightTarget *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FAISightTarget *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar3 = (FAISightTarget *)(puVar2 + 2);
          }
          return pFVar3;
        }
        uVar1 = puVar2[0xc];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FAISightTarget *)0x0;
}

// Find @ 146fa8ae0

FCrowdAgentData * __thiscall
TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
::Find(TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
       *this,ICrowdAgentInterface *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FCrowdAgentData *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((ICrowdAgentInterface *)*plVar2 == param_1) {
          pFVar4 = (FCrowdAgentData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FCrowdAgentData *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[6];
      } while (iVar1 != -1);
    }
  }
  return (FCrowdAgentData *)0x0;
}

// Find @ 146fa8b80

FActorPerceptionInfo * __thiscall
TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
::Find(TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
       *this,TObjectKey<AActor> *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FActorPerceptionInfo *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar7 = (uVar1 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == iVar2) && (piVar3[1] == uVar1)) {
          if (iVar9 == -1) {
            return (FActorPerceptionInfo *)0x0;
          }
          pFVar6 = (FActorPerceptionInfo *)0x0;
          if (piVar3 != (int *)0x0) {
            pFVar6 = (FActorPerceptionInfo *)(piVar3 + 2);
          }
          return pFVar6;
        }
        iVar9 = piVar3[0xc];
      } while (iVar9 != -1);
    }
  }
  return (FActorPerceptionInfo *)0x0;
}

// FindChecked @ 146fa8c90

FAISightTarget * __thiscall
TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
::FindChecked(TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAISightTarget *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FAISightTarget *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xc];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FAISightTarget *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FAISightTarget *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 146fa8d30

FDigestedSightProperties * __thiscall
TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>_>
::FindChecked(TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>_>
              *this,FAIGenericID<FPerceptionListenerCounter> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDigestedSightProperties *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Index) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x28) == param_1->Index) {
          if (lVar1 != 0) {
            return (FDigestedSightProperties *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDigestedSightProperties *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDigestedSightProperties *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 146fa8dd0

FPerceptionListener * __thiscall
TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
::FindChecked(TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
              *this,FAIGenericID<FPerceptionListenerCounter> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPerceptionListener *pFVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->Index) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar6 == param_1->Index) {
          if (puVar6 != (uint *)0x0) {
            return (FPerceptionListener *)(puVar6 + 2);
          }
          break;
        }
        uVar3 = puVar6[0x16];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPerceptionListener *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPerceptionListener *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 146fcac70

int __thiscall
TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
::Remove(TMapBase<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>_>
         *this,TObjectKey<AActor> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar11 = 0;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar9 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar6 = (-0x61c88647 - uVar9) - uVar1 ^ uVar9 << 8;
  uVar4 = (uVar1 - uVar9) - uVar6 ^ uVar6 >> 0xd;
  uVar10 = (uVar9 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar9 = (uVar6 - uVar10) - uVar4 ^ uVar10 << 0x10;
  uVar6 = (uVar4 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 3;
  uVar4 = uVar10 << 10 ^ (uVar9 - uVar10) - uVar6;
  FVar8 = (this->Pairs).Hash.SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar7 = *(int *)((longlong)FVar8 +
                  (((longlong)(int)((uVar6 - uVar4) - uVar10) ^ (ulonglong)(uVar4 >> 0xf)) &
                  (longlong)(this->Pairs).HashSize - 1U) * 4);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    while ((lVar5 = (longlong)iVar7 * 0x38, *(int *)(lVar5 + lVar3) != iVar2 ||
           (*(uint *)(lVar5 + 4 + lVar3) != uVar1))) {
      iVar7 = *(int *)(lVar5 + 0x30 + lVar3);
      if (iVar7 == -1) {
        return 0;
      }
    }
    TSet<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar7);
    iVar11 = 1;
  }
  return iVar11;
}

// Emplace<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties_const_&> @ 146fe9e60

FDigestedTouchProperties * __thiscall
TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
::Emplace<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties_const_&>
          (TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
           *this,FAIGenericID<FPerceptionListenerCounter> *param_1,FDigestedTouchProperties *param_2
          )

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>
       *)0x0) {
    *(uint *)local_28.Pointer = param_1->Index;
    *(uchar *)((longlong)local_28.Pointer + 4) = param_2->AffiliationFlags;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_28.Pointer;
  if ((iVar5 - iVar1 != 1) && (iVar5 != iVar1)) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0x10) == uVar2) {
          if (iVar5 != -1) {
            *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x10) = *(undefined8 *)local_28.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_146fe9f3f;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_28.Pointer,local_28.Index);
  iVar5 = local_28.Index;
LAB_146fe9f3f:
  return (FDigestedTouchProperties *)
         (*(longlong *)&(this->Pairs).Elements + 4 + (longlong)iVar5 * 0x10);
}

// EmplaceByHash<FAIGenericID<FPerceptionListenerCounter>_const_&> @ 146fe9f70

FDigestedTouchProperties * __thiscall
TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
::EmplaceByHash<FAIGenericID<FPerceptionListenerCounter>_const_&>
          (TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
           *this,uint param_1,FAIGenericID<FPerceptionListenerCounter> *param_2)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>
       *)0x0) {
    *(uint *)local_28.Pointer = param_2->Index;
    *(undefined1 *)((longlong)local_28.Pointer + 4) = 7;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(int *)(lVar2 + (longlong)iVar4 * 0x10) == *(int *)local_28.Pointer) {
          if (iVar4 != -1) {
            *(undefined8 *)(lVar2 + (longlong)iVar4 * 0x10) = *(undefined8 *)local_28.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_146fea043;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
  iVar4 = local_28.Index;
LAB_146fea043:
  return (FDigestedTouchProperties *)
         (*(longlong *)&(this->Pairs).Elements + 4 + (longlong)iVar4 * 0x10);
}

