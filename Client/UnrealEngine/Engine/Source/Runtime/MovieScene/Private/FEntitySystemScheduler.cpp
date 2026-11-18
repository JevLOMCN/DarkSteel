// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 26

// FEntitySystemScheduler @ 14617e830

/* WARNING: Enum "Type": Some values do not have unique names */

FEntitySystemScheduler * __thiscall
UE::MovieScene::FEntitySystemScheduler::FEntitySystemScheduler
          (FEntitySystemScheduler *this,FEntityManager *param_1)

{
  uint uVar1;
  
  (this->Tasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tasks).ArrayNum = 0;
  (this->Tasks).ArrayMax = 0;
  (this->CurrentSubsequents).SystemWidePrerequisites.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum = 0;
  (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayMax = 0;
  (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum = 0;
  (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayMax = 0;
  (this->InitialTasks).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTasks).Entries.ArrayNum = 0;
  (this->InitialTasks).Entries.ArrayMax = 0;
  *(undefined8 *)&this->ComponentDepedenciesByAllocation = 0;
  *(undefined8 *)&(this->ComponentDepedenciesByAllocation).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentDepedenciesByAllocation).field_0x20 = 0;
  this->CurrentPrerequisites = (FTaskPrerequisiteCache *)0x0;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentDepedenciesByAllocation).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x48 = 0;
  *(undefined8 *)&this->AllPrerequisites = 0;
  *(undefined8 *)&(this->AllPrerequisites).field_0x8 = 0;
  *(undefined8 *)&(this->AllPrerequisites).field_0x20 = 0;
  *(undefined4 *)&(this->AllPrerequisites).field_0x28 = 0;
  *(undefined4 *)&(this->AllPrerequisites).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllPrerequisites).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllPrerequisites).field_0x34 = 0;
  *(undefined8 *)&(this->AllPrerequisites).field_0x40 = 0;
  *(undefined4 *)&(this->AllPrerequisites).field_0x48 = 0;
  this->EntityManager = param_1;
  (this->NumTasksRemaining).Payload = 0;
  this->GameThreadSignal = (FEvent *)0x0;
  *(undefined8 *)&this->GameThreadTaskList = 0;
  *(undefined8 *)&(this->GameThreadTaskList).field_0x40 = 0;
  *(undefined8 *)&this->GameThreadTaskList = 0;
  *(undefined8 *)&(this->GameThreadTaskList).field_0x40 = 0;
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)&this->GameThreadTaskList =
       *(ulonglong *)&this->GameThreadTaskList & 0xfffffffffc000000 | (ulonglong)uVar1;
  *(ulonglong *)&(this->GameThreadTaskList).field_0x40 =
       *(ulonglong *)&(this->GameThreadTaskList).field_0x40 & 0xfffffffffc000000 | (ulonglong)uVar1;
  (this->WriteContextBase).SystemSerial = 0;
  this->SystemSerialIncrement = 0;
  this->ThreadingModel = NoThreading;
  return this;
}

// ~FEntitySystemScheduler @ 146184e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(FEntitySystemScheduler *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->GameThreadSignal != (FEvent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GameThreadSignal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                       ,0xaa,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::
  ~FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>
            ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
             &this->GameThreadTaskList);
  *(undefined4 *)&(this->AllPrerequisites).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllPrerequisites).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllPrerequisites);
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComponentDepedenciesByAllocation).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentDepedenciesByAllocation);
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)(this->InitialTasks).Entries.AllocatorInstance.Data,
             (this->InitialTasks).Entries.ArrayNum);
  pFVar2 = (this->InitialTasks).Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)
             (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.AllocatorInstance.Data
             ,(this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum);
  pFVar2 = (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)
             (this->CurrentSubsequents).SystemWidePrerequisites.Entries.AllocatorInstance.Data,
             (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum);
  pFVar2 = (this->CurrentSubsequents).SystemWidePrerequisites.Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::MovieScene::FScheduledTask,int>
            ((FScheduledTask *)(this->Tasks).AllocatorInstance.Data,(this->Tasks).ArrayNum);
  pFVar2 = (this->Tasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 146188520

void __thiscall
`UE::MovieScene::FEntitySystemScheduler::ShuffleTasks'::__l2::<lambda_1>::operator()
          (void *this,
          TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FEntry *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 uVar11;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *this_00;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *this_01;
  uint uVar18;
  int local_res18;
  ForAnyElementType local_f8;
  undefined8 uStack_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  undefined4 uStack_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  byte bStack_c0;
  byte bStack_bf;
  ushort uStack_be;
  int local_b8;
  undefined8 local_b4;
  FScriptContainerElement *local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  FScriptContainerElement *local_90;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  
  local_e8 = (param_1->Entries).AllocatorInstance.Data;
  pFVar16 = (FScriptContainerElement *)0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_res18 = (param_1->Entries).ArrayNum;
  uVar18 = 0;
  uStack_f0 = 0;
  local_e0 = (FScriptContainerElement *)0x0;
  local_c8 = (FScriptContainerElement *)0x0;
  bStack_c0 = 0;
  bStack_bf = 0;
  uStack_be = 0;
  local_b4 = 0;
  this_01 = pFVar16;
  local_d0 = local_e8;
  local_b8 = local_res18;
  local_a8 = local_e8;
  if (local_res18 == 0) goto LAB_146188630;
  local_b4 = (ulonglong)(uint)(*(int *)&local_e8[0x18].field_0x0 << 9) << 0x20;
  uVar18 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                      &local_e8[0x10].field_0x0)->AllocatorInstance).Data;
  if (uVar18 == 0) {
    uStack_d8 = 0x20;
    uVar18 = uStack_d8;
    this_01 = local_e8;
  }
  else {
    local_70 = 0;
    if (uVar18 != 0) {
      for (; (uVar18 >> local_70 & 1) == 0; local_70 = local_70 + 1) {
      }
    }
    uVar11 = 0x20;
    if (uVar18 != 0) {
      uVar11 = (char)local_70;
    }
    uStack_d8 = CONCAT31((int3)(uStack_d8 >> 8),uVar11) & 0xffff;
    local_e0 = local_e8;
    uVar6 = UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                      ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_e8,0);
    local_a8 = (param_1->Entries).AllocatorInstance.Data;
    local_res18 = (param_1->Entries).ArrayNum;
    local_6c = 0;
    if ((uVar6 | 0xffff0000) != 0) {
      for (; ((uVar6 | 0xffff0000) >> local_6c & 1) == 0; local_6c = local_6c + 1) {
      }
    }
    uStack_d8 = CONCAT22(uVar6,CONCAT11((char)local_6c,(undefined1)uStack_d8));
    uVar18 = uStack_d8;
    this_01 = local_e0;
  }
  do {
    bStack_c0 = (byte)uVar18;
    bStack_bf = (byte)(uVar18 >> 8);
    uStack_be = (ushort)(uVar18 >> 0x10);
    local_e0 = this_01;
    local_c8 = this_01;
LAB_146188630:
    do {
      uVar6 = uStack_be;
      uVar15 = 0;
      iVar17 = (int)pFVar16;
      local_9c = iVar17;
      local_98 = iVar17;
      if ((((local_e8 == local_a8) && (iVar17 == local_res18)) &&
          (this_01 == (FScriptContainerElement *)0x0)) &&
         (((char)uVar18 == '\0' && (bStack_bf == 0)))) {
        pFVar3 = (FEntry *)(param_1->Entries).AllocatorInstance.Data;
        uVar4._0_4_ = (param_1->Entries).ArrayNum;
        uVar4._4_4_ = (param_1->Entries).ArrayMax;
        (param_1->Entries).AllocatorInstance.Data = local_f8.Data;
        (param_1->Entries).ArrayNum = (int)uStack_f0;
        (param_1->Entries).ArrayMax = uStack_f0._4_4_;
        local_f8.Data = (FScriptContainerElement *)pFVar3;
        uStack_f0 = uVar4;
        DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                  (pFVar3,(undefined4)uVar4);
        if ((FEntry *)local_f8.Data != (FEntry *)0x0) {
          FMemory::Free(local_f8.Data);
        }
        return;
      }
      plVar1 = *(longlong **)this;
      local_a0 = uVar18 & 0xff;
      uVar13 = local_a0 * 0x10 + (uint)bStack_bf + local_b4._4_4_;
      uVar7 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar14 = 0;
      uVar7 = *(uint *)(*plVar1 + (longlong)(int)uVar13 * 4);
      uVar13 = uVar7 >> 9;
      if (0 < (longlong)(int)uStack_f0) {
        pFVar10 = local_f8.Data + 0x18;
        do {
          if (*(uint *)pFVar10 == uVar13) {
            this_00 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                       *)(local_f8.Data + (longlong)(int)uVar15 * 0x20);
            goto LAB_146188775;
          }
          if (uVar13 <= *(uint *)pFVar10) {
            iVar8 = (int)uStack_f0;
            if ((int)uStack_f0 == uStack_f0._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&local_f8,(int *)((longlong)&uStack_f0 + 4));
            }
            uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar8 + 1);
            lVar14 = lVar14 * 0x20;
            memmove(local_f8.Data + lVar14 + 0x20,local_f8.Data + lVar14,
                    (longlong)(int)(iVar8 - uVar15) << 5);
            uVar9 = 0;
            if ((int)uVar15 < (int)uStack_f0) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined8 *)(local_f8.Data + lVar14) = 0;
            *(undefined8 *)(local_f8.Data + lVar14 + 8) = 0;
            this_00 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                       *)(local_f8.Data + lVar14);
            *(undefined4 *)(local_f8.Data + lVar14 + 0x10) = 0;
            *(uint *)(local_f8.Data + lVar14 + 0x18) = uVar13;
            this_01 = local_e0;
            goto LAB_146188775;
          }
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 1;
          pFVar10 = pFVar10 + 0x20;
        } while (lVar14 < (int)uStack_f0);
      }
      iVar8 = (int)uStack_f0;
      if ((int)uStack_f0 == uStack_f0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_f8,(int *)((longlong)&uStack_f0 + 4));
      }
      uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar8 + 1);
      lVar14 = (longlong)iVar8 * 0x20;
      this_00 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                 *)(local_f8.Data + lVar14);
      (this_00->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(local_f8.Data + lVar14 + 8) = 0;
      *(undefined4 *)(local_f8.Data + lVar14 + 0x10) = 0;
      *(uint *)(local_f8.Data + lVar14 + 0x18) = uVar13;
LAB_146188775:
      UE::MovieScene::
      TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
      ::SetBit(this_00,uVar7 + uVar13 * -0x200);
      uStack_be = uVar6 - 1 & uVar6;
      if (uStack_be == 0) {
        if ((char)uVar18 == '\x1f') {
          bStack_c0 = 0x20;
          bStack_bf = 0;
          uVar18 = 0x20;
        }
        else {
          uVar15 = -1 << ((char)local_a0 + 1U & 0x1f) & *(uint *)&this_01[0x10].field_0x0;
          local_64 = 0;
          if (uVar15 != 0) {
            for (; (uVar15 >> local_64 & 1) == 0; local_64 = local_64 + 1) {
            }
          }
          uVar18 = 0x20;
          if (uVar15 != 0) {
            uVar18 = local_64 & 0xff;
          }
          bStack_c0 = (byte)uVar18;
          if (bStack_c0 != 0x20) {
            uVar15 = (1 << (bStack_c0 & 0x1f)) - 1U & *(uint *)&this_01[0x10].field_0x0;
            uVar12 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
            uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
            uStack_be = UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                  ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_01,
                                   (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) *
                                                0x101010101010101 >> 0x38));
            iVar8 = 0;
            local_60 = iVar8;
            if ((uStack_be | 0xffff0000) != 0) {
              for (; local_60 = iVar8, ((uStack_be | 0xffff0000) >> iVar8 & 1) == 0;
                  iVar8 = iVar8 + 1) {
              }
            }
            goto LAB_146188964;
          }
          bStack_bf = 0;
        }
      }
      else {
        iVar8 = 0;
        local_68 = iVar8;
        if ((uStack_be | 0xffff0000) != 0) {
          for (; local_68 = iVar8, ((uStack_be | 0xffff0000) >> iVar8 & 1) == 0; iVar8 = iVar8 + 1)
          {
          }
        }
LAB_146188964:
        bStack_bf = (byte)iVar8;
      }
    } while ((byte)uVar18 < 0x20);
    uVar15 = iVar17 + 1;
    pFVar16 = (FScriptContainerElement *)(ulonglong)uVar15;
    if ((int)uVar15 < local_b8) {
      local_b4 = CONCAT44(*(int *)&local_e8[((longlong)local_9c * 2 + 3) * 0x10 + 8].field_0x0 << 9,
                          uVar15);
      local_90 = local_e8 + ((longlong)local_98 + 1) * 0x20;
      uVar18 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          &local_90[0x10].field_0x0)->AllocatorInstance).Data;
      if (uVar18 == 0) {
        uStack_88 = 0x20;
        uVar18 = 0x20;
        this_01 = local_90;
      }
      else {
        local_5c = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> local_5c & 1) == 0; local_5c = local_5c + 1) {
          }
        }
        uVar11 = 0x20;
        if (uVar18 != 0) {
          uVar11 = (char)local_5c;
        }
        uStack_88 = CONCAT31((int3)(uStack_88 >> 8),uVar11) & 0xffff;
        uVar6 = UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                          ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_90,0);
        local_58 = 0;
        if ((uVar6 | 0xffff0000) != 0) {
          for (; ((uVar6 | 0xffff0000) >> local_58 & 1) == 0; local_58 = local_58 + 1) {
          }
        }
        uStack_88 = CONCAT22(uVar6,CONCAT11((char)local_58,(undefined1)uStack_88));
        uVar18 = uStack_88;
        this_01 = local_90;
      }
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      this_01 = (FScriptContainerElement *)0x0;
      uVar18 = 0;
      local_b4 = (ulonglong)uVar15;
    }
  } while( true );
}

// operator() @ 146188b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::__l54::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  byte local_res8;
  
  uVar1 = *(uint *)((longlong)this + 8);
  plVar2 = *(longlong **)this;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::MovieScene::FScheduledTask::Run
            ((FScheduledTask *)((longlong)(int)uVar1 * 0x88 + *plVar2),
             *(FEntitySystemScheduler **)this,(FTaskExecutionFlags)(local_res8 | 1));
  return;
}

// AddChildBack @ 14618cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::AddChildBack
          (FEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTaskID FVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_1.Index == -1) {
    return;
  }
  if (param_2.Index == -1) {
    return;
  }
  if (param_2.Index <= param_1.Index) {
LAB_14618cff2:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7429933679914254702>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                       ,0x16e,
                       "Child.Index > Parent.Index && Child.Index == Parent.Index + Tasks[Parent.Index].NumChildren + 1"
                      );
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = (uint)~param_1.Index >> 0x1f;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  lVar7 = (longlong)param_1.Index * 0x88;
  if (param_2.Index !=
      *(ushort *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x80) + 1 + param_1.Index)
  goto LAB_14618cff2;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)((this->Tasks).AllocatorInstance.Data + lVar7),param_2.Index);
  if (!bVar3) {
    uVar4 = 0;
    if (param_2.Index < (this->Tasks).ArrayNum) {
      uVar4 = (uint)~param_2.Index >> 0x1f;
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
    bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((this->Tasks).AllocatorInstance.Data + (longlong)param_2.Index * 0x88),
                       param_1.Index);
    if (!bVar3) goto LAB_14618ce96;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Tasks[Parent.Index].ComputedSubsequents.IsBitSet(Child.Index) && !Tasks[Child.Index].ComputedSubsequents.IsBitSet(Parent.Index)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                     ,0x171,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14618ce96:
  FVar6.Index = param_1.Index + 1;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  iVar5 = (uint)*(ushort *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x80) + FVar6.Index;
  for (; FVar6.Index < iVar5; FVar6.Index = FVar6.Index + 1) {
    AddPrerequisite(this,FVar6,param_2);
  }
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  pFVar1 = (this->Tasks).AllocatorInstance.Data + lVar7 + 0x80;
  *(short *)pFVar1 = *(short *)pFVar1 + 1;
  uVar4 = 0;
  if (param_2.Index < (this->Tasks).ArrayNum) {
    uVar4 = (uint)~param_2.Index >> 0x1f;
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
  lVar7 = (longlong)param_2.Index * 0x88;
  pFVar1 = (this->Tasks).AllocatorInstance.Data + lVar7 + 0x70;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  uVar4 = 0;
  if (param_2.Index < (this->Tasks).ArrayNum) {
    uVar4 = (uint)~param_2.Index >> 0x1f;
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
  *(int *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x7c) = param_1.Index;
  return;
}

// AddChildFront @ 14618d050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::AddChildFront
          (FEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTaskID FVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_1.Index == -1) {
    return;
  }
  if (param_2.Index == -1) {
    return;
  }
  if (param_2.Index <= param_1.Index) {
LAB_14618d332:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7429933679914254678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                       ,0x156,
                       "Child.Index > Parent.Index && Child.Index == Parent.Index + Tasks[Parent.Index].NumChildren + 1"
                      );
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = (uint)~param_1.Index >> 0x1f;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  lVar7 = (longlong)param_1.Index * 0x88;
  if (param_2.Index !=
      *(ushort *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x80) + 1 + param_1.Index)
  goto LAB_14618d332;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)((this->Tasks).AllocatorInstance.Data + lVar7),param_2.Index);
  if (!bVar3) {
    uVar4 = 0;
    if (param_2.Index < (this->Tasks).ArrayNum) {
      uVar4 = (uint)~param_2.Index >> 0x1f;
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
    bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((this->Tasks).AllocatorInstance.Data + (longlong)param_2.Index * 0x88),
                       param_1.Index);
    if (!bVar3) goto LAB_14618d1d6;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Tasks[Parent.Index].ComputedSubsequents.IsBitSet(Child.Index) && !Tasks[Child.Index].ComputedSubsequents.IsBitSet(Parent.Index)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                     ,0x159,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14618d1d6:
  FVar6.Index = param_1.Index + 1;
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  iVar5 = (uint)*(ushort *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x80) + FVar6.Index;
  for (; FVar6.Index < iVar5; FVar6.Index = FVar6.Index + 1) {
    AddPrerequisite(this,param_2,FVar6);
  }
  uVar4 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar4 = uVar8;
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
  pFVar1 = (this->Tasks).AllocatorInstance.Data + lVar7 + 0x80;
  *(short *)pFVar1 = *(short *)pFVar1 + 1;
  uVar4 = 0;
  if (param_2.Index < (this->Tasks).ArrayNum) {
    uVar4 = (uint)~param_2.Index >> 0x1f;
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
  lVar7 = (longlong)param_2.Index * 0x88;
  pFVar1 = (this->Tasks).AllocatorInstance.Data + lVar7 + 0x70;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  uVar4 = 0;
  if (param_2.Index < (this->Tasks).ArrayNum) {
    uVar4 = (uint)~param_2.Index >> 0x1f;
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
  *(int *)((this->Tasks).AllocatorInstance.Data + lVar7 + 0x7c) = param_1.Index;
  return;
}

// AddNullTask @ 14618e440

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall UE::MovieScene::FEntitySystemScheduler::AddNullTask(FEntitySystemScheduler *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_RDX;
  FEntityAllocationWriteContext local_res8;
  
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_res8,this->EntityManager);
  iVar2 = (this->Tasks).ArrayNum;
  piVar1 = &(this->Tasks).ArrayMax;
  iVar3 = iVar2;
  if (iVar2 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)this,piVar1);
  }
  (this->Tasks).ArrayNum = iVar3 + 1;
  FScheduledTask::FScheduledTask
            ((FScheduledTask *)((this->Tasks).AllocatorInstance.Data + (longlong)iVar3 * 0x88),
             local_res8);
  *in_RDX = iVar2;
  return (FTaskID)(int)in_RDX;
}

// AddPrerequisite @ 14618edf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::AddPrerequisite
          (FEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (((param_1.Index != -1) && (param_2.Index != -1)) && (param_1.Index != param_2.Index)) {
    uVar4 = 0;
    if (param_1.Index < (this->Tasks).ArrayNum) {
      uVar4 = (uint)~param_1.Index >> 0x1f;
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
    bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((this->Tasks).AllocatorInstance.Data + (longlong)param_1.Index * 0x88),
                       param_2.Index);
    if (!bVar3) {
      uVar4 = 0;
      if (param_1.Index < (this->Tasks).ArrayNum) {
        uVar4 = (uint)~param_1.Index >> 0x1f;
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
      TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
      ::SetBit((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                *)((this->Tasks).AllocatorInstance.Data + (longlong)param_1.Index * 0x88),
               param_2.Index);
      uVar4 = 0;
      if (param_2.Index < (this->Tasks).ArrayNum) {
        uVar4 = (uint)~param_2.Index >> 0x1f;
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
      pFVar1 = (this->Tasks).AllocatorInstance.Data + (longlong)param_2.Index * 0x88 + 0x70;
      *(int *)pFVar1 = *(int *)pFVar1 + 1;
    }
  }
  return;
}

// AddTask @ 1461905f0

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::FEntitySystemScheduler::AddTask
          (FEntitySystemScheduler *this,FTaskParams *param_1,
          TSharedPtr<UE::MovieScene::ITaskContext,1> *param_2,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITaskContext *pIVar5;
  FTaskPrerequisiteCache *pFVar6;
  FEntry *pFVar7;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  FIterator FVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  FScheduledTask *this_01;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auVar25 [8];
  FScriptContainerElement *this_02;
  FEntry *this_03;
  int iVar26;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000028;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  ushort uStack_d6;
  undefined4 uStack_d4;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  ushort uStack_c6;
  undefined4 uStack_c4;
  undefined1 local_b8 [8];
  FIterator local_b0;
  int local_a0;
  int local_9c;
  int local_98;
  FEntitySystemScheduler *local_90;
  int local_88;
  int local_84;
  uint local_80;
  FTaskParams *local_78;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_70;
  FEntityAllocationWriteContext local_60;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_58;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_50;
  
  local_90 = this;
  local_78 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_60,this->EntityManager);
  uVar21 = (this->Tasks).ArrayNum;
  piVar1 = &(this->Tasks).ArrayMax;
  uVar15 = uVar21;
  local_80 = uVar21;
  if (uVar21 == *piVar1) {
    uVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x888,(ForAnyElementType *)this,piVar1);
  }
  (this->Tasks).ArrayNum = uVar15 + 1;
  this_01 = FScheduledTask::FScheduledTask
                      ((FScheduledTask *)
                       ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x88),
                       local_60);
  pTVar17 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_70,in_stack_00000028);
  FScheduledTask::SetFunction(this_01,pTVar17);
  pTVar4 = *(TReferenceControllerBase<1> **)&param_3->TypeIndex;
  pIVar5 = (ITaskContext *)param_3->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this_01->TaskContext).SharedReferenceCount.ReferenceController;
  (this_01->TaskContext).Object = pIVar5;
  (this_01->TaskContext).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  uVar2 = this_01->field_0x83;
  (this_01->StatId).StatIdPtr = (TStatIdData *)(param_2->SharedReferenceCount).ReferenceController;
  this_01->field_0x83 = (this_01->bForceGameThread ^ *(byte *)&param_2[1].Object) & 1 ^ uVar2;
  ::FString::operator=(&this_01->DebugName,(wchar_t *)param_2->Object);
  *(uint *)&param_1->DebugName = uVar21;
  pFVar6 = this->CurrentPrerequisites;
  if (pFVar6 != (FTaskPrerequisiteCache *)0x0) {
    if (((ulonglong)param_2[1].Object & 0x10) != 0) {
      MovieScene::begin((FIterator *)local_b8,&pFVar6->SystemWidePrerequisites);
      pFVar7 = (FEntry *)(pFVar6->SystemWidePrerequisites).Entries.AllocatorInstance.Data;
      iVar3 = (pFVar6->SystemWidePrerequisites).Entries.ArrayNum;
      uVar21 = (uint)local_b0.BucketBitIndex;
      auVar25 = local_b8;
      this_03 = (FEntry *)local_b0.BitSet;
      iVar26 = local_98;
      iVar23 = local_9c;
      uStack_d6 = local_b0.CurrentBucket;
LAB_14619073e:
      uVar15 = (uint)uStack_d6;
LAB_146190741:
      bVar20 = (byte)uVar21;
      if ((((auVar25 != (undefined1  [8])pFVar7) || (iVar23 != iVar3)) || (this_03 != (FEntry *)0x0)
          ) || ((bVar20 != 0 || (this = local_90, local_b0.IndexWithinBucket != '\0')))) {
        AddPrerequisite(local_90,(FTaskID)((uVar21 & 0xff) * 0x10 + (local_b0._9_4_ & 0xff) + iVar26
                                          ),(FTaskID)*(int *)&local_78->DebugName);
        FVar13 = local_b0;
        uVar14 = (ushort)uVar15 - 1 & (ushort)uVar15;
        local_b0.CurrentBucket = uVar14;
        if (uVar14 != 0) goto LAB_146190855;
        if (bVar20 != 0x1f) {
          uVar15 = (this_03->Bits).BucketHash;
          uVar16 = -1 << (bVar20 + 1 & 0x1f) & uVar15;
          uVar22 = 0;
          if (uVar16 != 0) {
            for (; (uVar16 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar21 = 0x20;
          if (uVar16 != 0) {
            uVar21 = uVar22 & 0xff;
          }
          bVar20 = (byte)uVar21;
          local_b0.BitSet = FVar13.BitSet;
          local_b0.BucketBitIndex = bVar20;
          auVar25 = local_b8;
          if (bVar20 != 0x20) {
            uVar15 = (1 << (bVar20 & 0x1f)) - 1U & uVar15;
            uVar19 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
            uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
            uVar14 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                               ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_03,
                                (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) *
                                             0x101010101010101 >> 0x38));
            local_b0.CurrentBucket = uVar14;
            goto LAB_146190855;
          }
        }
        goto LAB_146190885;
      }
    }
    pFVar24 = (FScriptContainerElement *)0x0;
    pFVar6 = this->CurrentPrerequisites;
    uVar22 = 0;
    local_b0.BucketBitIndex = '\0';
    local_b0.IndexWithinBucket = '\0';
    local_b0.CurrentBucket = 0;
    uVar15 = 0;
    local_88 = (pFVar6->ForcedSystemWidePrerequisites).Entries.ArrayNum;
    this_00 = (pFVar6->ForcedSystemWidePrerequisites).Entries.AllocatorInstance.Data;
    this_02 = pFVar24;
    pFVar18 = pFVar24;
    if (local_88 != 0) {
      uVar21 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          &this_00[0x10].field_0x0)->AllocatorInstance).Data;
      pFVar18 = (FScriptContainerElement *)(ulonglong)(uint)(*(int *)&this_00[0x18].field_0x0 << 9);
      uStack_d6 = 0;
      if (uVar21 == 0) {
        uStack_d8 = 0x20;
        uStack_d7 = 0;
      }
      else {
        iVar3 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        uStack_d8 = 0x20;
        if (uVar21 != 0) {
          uStack_d8 = (char)iVar3;
        }
        uStack_d6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                              ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_00,0);
        iVar3 = 0;
        if ((uStack_d6 | 0xffff0000) != 0) {
          for (; ((uStack_d6 | 0xffff0000) >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        uStack_d7 = (undefined1)iVar3;
      }
      auVar12[8] = uStack_d8;
      auVar12._0_8_ = this_00;
      auVar12[9] = uStack_d7;
      auVar12._10_2_ = uStack_d6;
      local_b0._12_4_ = uStack_d4;
      local_b0.BitSet =
           (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            *)this_00;
      local_b0.BucketBitIndex = uStack_d8;
      local_b0.IndexWithinBucket = uStack_d7;
      local_b0.CurrentBucket = uStack_d6;
      uVar22 = auVar12._8_4_;
      uVar15 = (uint)uStack_d6;
      this_02 = this_00;
    }
    pFVar8 = (pFVar6->ForcedSystemWidePrerequisites).Entries.AllocatorInstance.Data;
    iVar3 = (pFVar6->ForcedSystemWidePrerequisites).Entries.ArrayNum;
LAB_146190a10:
    iVar26 = (int)pFVar24;
    bVar20 = (byte)uVar22;
    local_84 = iVar26;
    if (((this_00 != pFVar8) || (iVar26 != iVar3)) ||
       ((this_02 != (FScriptContainerElement *)0x0 ||
        ((bVar20 != 0 ||
         (param_1 = local_78, param_3 = local_50, this = local_90, param_2 = local_58,
         uVar21 = local_80, local_b0.IndexWithinBucket != '\0')))))) {
      AddPrerequisite(local_90,(FTaskID)((uVar22 & 0xff) * 0x10 +
                                        (local_b0._9_4_ & 0xff) + (int)pFVar18),
                      (FTaskID)*(int *)&local_78->DebugName);
      FVar13 = local_b0;
      uVar14 = (ushort)(uVar15 - 1) & (ushort)uVar15;
      local_b0.CurrentBucket = uVar14;
      if (uVar14 != 0) goto LAB_146190b2c;
      if (bVar20 != 0x1f) {
        uVar15 = -1 << (bVar20 + 1 & 0x1f) & *(uint *)&this_02[0x10].field_0x0;
        uVar21 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
          }
        }
        uVar22 = 0x20;
        if (uVar15 != 0) {
          uVar22 = uVar21 & 0xff;
        }
        bVar20 = (byte)uVar22;
        local_b0.BitSet = FVar13.BitSet;
        local_b0.BucketBitIndex = bVar20;
        if (bVar20 != 0x20) {
          uVar21 = (1 << (bVar20 & 0x1f)) - 1U & *(uint *)&this_02[0x10].field_0x0;
          uVar19 = (ulonglong)uVar21 - ((ulonglong)(uVar21 >> 1) & 0x5555555555555555);
          uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
          uVar14 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                             ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_02,
                              (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) *
                                           0x101010101010101 >> 0x38));
          local_b0.CurrentBucket = uVar14;
          goto LAB_146190b2c;
        }
      }
      goto LAB_146190b4d;
    }
  }
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  ::SetBit(&(this->CurrentSubsequents).SystemWidePrerequisites,uVar21);
  if (((ulonglong)param_2[1].Object & 8) != 0) {
    TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
    ::SetBit(&(this->CurrentSubsequents).ForcedSystemWidePrerequisites,uVar21);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_3->TypeIndex);
  return (FTaskID)(int)param_1;
LAB_146190855:
  uVar15 = (uint)uVar14;
  iVar9 = 0;
  if ((uVar15 | 0xffff0000) != 0) {
    for (; ((uVar15 | 0xffff0000) >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
    }
  }
  local_b0.IndexWithinBucket = (uchar)iVar9;
  auVar25 = local_b8;
  if (bVar20 < 0x20) goto LAB_146190741;
LAB_146190885:
  iVar23 = iVar23 + 1;
  if (local_a0 <= iVar23) {
    iVar26 = 0;
    this_03 = (FEntry *)0x0;
    local_b0._12_4_ = uStack_c4;
    local_b0.BitSet =
         (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          *)0x0;
    local_b0.BucketBitIndex = 0;
    local_b0.IndexWithinBucket = 0;
    local_b0.CurrentBucket = 0;
    uVar21 = 0;
    uVar15 = 0;
    goto LAB_146190741;
  }
  this_03 = (FEntry *)((longlong)auVar25 + (longlong)iVar23 * 0x20);
  uStack_d6 = 0;
  iVar26 = ((FEntry *)((longlong)auVar25 + (longlong)iVar23 * 0x20))->Offset << 9;
  uVar21 = (this_03->Bits).BucketHash;
  if (uVar21 == 0) {
    uStack_d8 = 0x20;
    uStack_d7 = 0;
  }
  else {
    iVar9 = 0;
    if (uVar21 != 0) {
      for (; (uVar21 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
      }
    }
    uStack_d8 = 0x20;
    if (uVar21 != 0) {
      uStack_d8 = (char)iVar9;
    }
    uStack_d6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                          ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_03,0);
    iVar9 = 0;
    if ((uStack_d6 | 0xffff0000) != 0) {
      for (; ((uStack_d6 | 0xffff0000) >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
      }
    }
    uStack_d7 = (undefined1)iVar9;
  }
  auVar11[8] = uStack_d8;
  auVar11._0_8_ = this_03;
  auVar11[9] = uStack_d7;
  auVar11._10_2_ = uStack_d6;
  local_b0._12_4_ = uStack_d4;
  local_b0.BitSet =
       (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
        *)this_03;
  local_b0.BucketBitIndex = uStack_d8;
  local_b0.IndexWithinBucket = uStack_d7;
  local_b0.CurrentBucket = uStack_d6;
  uVar21 = auVar11._8_4_;
  goto LAB_14619073e;
LAB_146190b2c:
  uVar15 = (uint)uVar14;
  iVar23 = 0;
  if ((uVar15 | 0xffff0000) != 0) {
    for (; ((uVar15 | 0xffff0000) >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
    }
  }
  local_b0.IndexWithinBucket = (uchar)iVar23;
  if (0x1f < bVar20) {
LAB_146190b4d:
    pFVar24 = (FScriptContainerElement *)(ulonglong)(iVar26 + 1U);
    if ((int)(iVar26 + 1U) < local_88) {
      this_02 = this_00 + ((longlong)iVar26 + 1) * 0x20;
      uStack_c6 = 0;
      uVar21 = *(uint *)&this_02[0x10].field_0x0;
      pFVar18 = (FScriptContainerElement *)
                (ulonglong)
                (uint)(*(int *)&this_00[((longlong)local_84 * 2 + 3) * 0x10 + 8].field_0x0 << 9);
      if (uVar21 == 0) {
        uStack_c8 = 0x20;
        uStack_c7 = 0;
      }
      else {
        iVar26 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
          }
        }
        uStack_c8 = 0x20;
        if (uVar21 != 0) {
          uStack_c8 = (char)iVar26;
        }
        uStack_c6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                              ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_02,0);
        iVar26 = 0;
        if ((uStack_c6 | 0xffff0000) != 0) {
          for (; ((uStack_c6 | 0xffff0000) >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
          }
        }
        uStack_c7 = (undefined1)iVar26;
      }
      uVar22 = CONCAT22(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
      local_b0._12_4_ = uStack_c4;
    }
    else {
      pFVar18 = (FScriptContainerElement *)0x0;
      local_70._padding_ = 0;
      local_70.TypeIndex = '\0';
      local_70._9_3_ = 0;
      this_02 = (FScriptContainerElement *)0x0;
      uVar22 = 0;
      local_b0._12_4_ = local_70._12_4_;
    }
    local_b0.BucketBitIndex = (char)uVar22;
    local_b0.IndexWithinBucket = (char)(uVar22 >> 8);
    local_b0.CurrentBucket = (short)(uVar22 >> 0x10);
    local_b0.BitSet =
         (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          *)this_02;
    uVar15 = uVar22 >> 0x10;
  }
  goto LAB_146190a10;
}

// BeginConstruction @ 146194870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::BeginConstruction(FEntitySystemScheduler *this)

{
  int *piVar1;
  int iVar2;
  FEntityManager *pFVar3;
  FScheduledTask *pFVar4;
  FScriptContainerElement *pFVar5;
  FEntityAllocationWriteContext *pFVar6;
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar7;
  FEntityAllocationWriteContext local_res8;
  undefined8 local_18 [2];
  
  pFVar6 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (&local_res8,this->EntityManager);
  piVar1 = &(this->Tasks).ArrayMax;
  pFVar3 = this->EntityManager;
  (this->WriteContextBase).SystemSerial = pFVar6->SystemSerial;
  this->SystemSerialIncrement = (uint)pFVar3->SystemSerialNumber;
  pFVar4 = (FScheduledTask *)(this->Tasks).AllocatorInstance.Data;
  iVar2 = (this->Tasks).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<UE::MovieScene::FScheduledTask,int>(pFVar4,iVar2);
    (this->Tasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<UE::MovieScene::FScheduledTask,int>(pFVar4,iVar2);
    (this->Tasks).ArrayNum = 0;
  }
  pTVar7 = &this->InitialTasks;
  if (pTVar7 != (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                 *)local_18) {
    DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
              ((FEntry *)(pTVar7->Entries).AllocatorInstance.Data,
               (this->InitialTasks).Entries.ArrayNum);
    pFVar5 = (pTVar7->Entries).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar7->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InitialTasks).Entries.ArrayNum = 0;
    (this->InitialTasks).Entries.ArrayMax = 0;
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)0x0,0);
  return;
}

// BeginSystem @ 146194950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::BeginSystem(FEntitySystemScheduler *this,ushort param_1)

{
  int iVar1;
  FTaskPrerequisiteCache *pFVar2;
  FTaskPrerequisiteCache *pFVar3;
  undefined1 *puVar4;
  FTaskPrerequisiteCache *pFVar5;
  
  FTaskPrerequisiteCache::Reset(&this->CurrentSubsequents);
  pFVar5 = (FTaskPrerequisiteCache *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->AllPrerequisites).field_0x8 != *(int *)&(this->AllPrerequisites).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AllPrerequisites).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AllPrerequisites).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->AllPrerequisites).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FTaskPrerequisiteCache *)
                 ((longlong)iVar1 * 0x30 + *(longlong *)&this->AllPrerequisites);
        if (*(ushort *)&(pFVar2->SystemWidePrerequisites).Entries.AllocatorInstance.Data == param_1)
        break;
        iVar1 = pFVar2[1].SystemWidePrerequisites.Entries.ArrayNum;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FTaskPrerequisiteCache *)&(pFVar2->SystemWidePrerequisites).Entries.ArrayNum;
  if (pFVar2 == (FTaskPrerequisiteCache *)0x0) {
    pFVar3 = pFVar5;
  }
  this->CurrentPrerequisites = pFVar3;
  return;
}

// CompleteTask @ 146197800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::CompleteTask
          (FEntitySystemScheduler *this,FScheduledTask *param_1,FTaskExecutionFlags param_2)

{
  FEntitySystemMaybeAtomicInt32 *pFVar1;
  FScriptContainerElement *this_00;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FScheduledTask *pFVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  byte local_res8;
  int local_res20;
  FScriptContainerElement *local_e8;
  byte bStack_c7;
  ushort uStack_c6;
  uint local_a8 [2];
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  undefined4 uStack_90;
  uint local_88;
  int local_84;
  int local_80;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  
  if (this->ThreadingModel == NoThreading) {
    (param_1->WaitCount).Payload = param_1->NumPrerequisites;
  }
  else {
    LOCK();
    (param_1->WaitCount).Payload = param_1->NumPrerequisites;
    UNLOCK();
  }
  if (this->ThreadingModel == NoThreading) {
    (param_1->ChildCompleteCount).Payload = (uint)param_1->NumChildren;
  }
  else {
    LOCK();
    (param_1->ChildCompleteCount).Payload = (uint)param_1->NumChildren;
    UNLOCK();
  }
  iVar8 = (param_1->ComputedSubsequents).Entries.ArrayNum;
  pFVar15 = (FScriptContainerElement *)0x0;
  this_00 = (param_1->ComputedSubsequents).Entries.AllocatorInstance.Data;
  uVar17 = 0;
  local_a8[0] = 0xffffffff;
  local_e8 = (FScriptContainerElement *)0x0;
  uStack_c6 = 0;
  bStack_c7 = 0;
  pFVar14 = pFVar15;
  pFVar16 = pFVar15;
  local_res20 = iVar8;
  local_a0 = this_00;
  if (iVar8 == 0) goto LAB_146197940;
  uVar17 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                      &this_00[0x10].field_0x0)->AllocatorInstance).Data;
  pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)(*(int *)&this_00[0x18].field_0x0 << 9);
  local_98 = this_00;
  if (uVar17 == 0) {
    uStack_90 = 0x20;
    uVar17 = uStack_90;
    local_e8 = this_00;
  }
  else {
    local_58 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> local_58 & 1) == 0; local_58 = local_58 + 1) {
      }
    }
    uVar6 = 0x20;
    if (uVar17 != 0) {
      uVar6 = (char)local_58;
    }
    uStack_90 = CONCAT31((int3)(uStack_90 >> 8),uVar6) & 0xffff;
    uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                      ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_00,0);
    local_54 = 0;
    if ((uVar4 | 0xffff0000) != 0) {
      for (; ((uVar4 | 0xffff0000) >> local_54 & 1) == 0; local_54 = local_54 + 1) {
      }
    }
    uStack_90 = CONCAT22(uVar4,CONCAT11((char)local_54,(undefined1)uStack_90));
    uVar17 = uStack_90;
    local_res20 = (param_1->ComputedSubsequents).Entries.ArrayNum;
    local_a0 = (param_1->ComputedSubsequents).Entries.AllocatorInstance.Data;
    local_e8 = local_98;
  }
  do {
    bStack_c7 = (byte)(uVar17 >> 8);
    uStack_c6 = (ushort)(uVar17 >> 0x10);
LAB_146197940:
    do {
      iVar13 = (int)pFVar14;
      local_84 = iVar13;
      local_80 = iVar13;
      if ((((this_00 == local_a0) && (iVar13 == local_res20)) &&
          (local_e8 == (FScriptContainerElement *)0x0)) &&
         (((char)uVar17 == '\0' && (bStack_c7 == 0)))) {
        uVar17 = (param_1->Parent).Index;
        if (uVar17 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar17 < (this->Tasks).ArrayNum) {
            uVar5 = ~uVar17 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (FScheduledTask *)
                    ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x88);
          if (this->ThreadingModel == NoThreading) {
            iVar8 = (pFVar11->ChildCompleteCount).Payload;
            (pFVar11->ChildCompleteCount).Payload = iVar8 + -1;
          }
          else {
            LOCK();
            pFVar1 = &pFVar11->ChildCompleteCount;
            iVar8 = pFVar1->Payload;
            pFVar1->Payload = pFVar1->Payload + -1;
            UNLOCK();
          }
          if (iVar8 == 1) {
            CompleteTask(this,pFVar11,param_2);
          }
        }
        lVar12 = (longlong)(int)local_a8[0];
        if (local_a8[0] != 0xffffffff) {
          uVar17 = 0;
          if ((int)local_a8[0] < (this->Tasks).ArrayNum) {
            uVar17 = ~local_a8[0] >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FScheduledTask::Run((FScheduledTask *)
                              ((this->Tasks).AllocatorInstance.Data + lVar12 * 0x88),this,
                              (FTaskExecutionFlags)(local_res8 | 1));
        }
        if (this->ThreadingModel == NoThreading) {
          iVar8 = (this->NumTasksRemaining).Payload;
          (this->NumTasksRemaining).Payload = iVar8 + -1;
        }
        else {
          LOCK();
          pFVar1 = &this->NumTasksRemaining;
          iVar8 = pFVar1->Payload;
          pFVar1->Payload = pFVar1->Payload + -1;
          UNLOCK();
        }
        if ((iVar8 == 1) && (this->ThreadingModel != NoThreading)) {
          (**(code **)(this->GameThreadSignal->_padding_ + 0x10))();
          if (this->ThreadingModel == NoThreading) {
            (this->NumTasksRemaining).Payload = (this->NumTasksRemaining).Payload + -1;
          }
          else {
            LOCK();
            (this->NumTasksRemaining).Payload = (this->NumTasksRemaining).Payload + -1;
            UNLOCK();
          }
        }
        return;
      }
      local_88 = uVar17 & 0xff;
      local_98 = (FScriptContainerElement *)local_a8;
      if (param_2.bCanInlineSubsequents == 0) {
        local_98 = pFVar15;
      }
      uVar10 = local_88 * 0x10 + (uint)bStack_c7 + (int)pFVar16;
      uVar5 = 0;
      if ((int)uVar10 < (this->Tasks).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      PrerequisiteCompleted
                (this,(FScheduledTask *)
                      ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x88),
                 (int *)local_98);
      uStack_c6 = uStack_c6 - 1 & uStack_c6;
      if (uStack_c6 == 0) {
        if ((char)uVar17 == '\x1f') {
          bStack_c7 = 0;
          uVar17 = 0x20;
        }
        else {
          uVar5 = -1 << ((char)local_88 + 1U & 0x1f) & *(uint *)&local_e8[0x10].field_0x0;
          local_4c = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> local_4c & 1) == 0; local_4c = local_4c + 1) {
            }
          }
          uVar17 = 0x20;
          if (uVar5 != 0) {
            uVar17 = local_4c & 0xff;
          }
          if ((byte)uVar17 != 0x20) {
            uVar5 = (1 << ((byte)uVar17 & 0x1f)) - 1U & *(uint *)&local_e8[0x10].field_0x0;
            uVar9 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
            uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
            uStack_c6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                  ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_e8,
                                   (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) *
                                                0x101010101010101 >> 0x38));
            iVar7 = 0;
            local_48 = iVar7;
            if ((uStack_c6 | 0xffff0000) != 0) {
              for (; local_48 = iVar7, ((uStack_c6 | 0xffff0000) >> iVar7 & 1) == 0;
                  iVar7 = iVar7 + 1) {
              }
            }
            goto LAB_146197b28;
          }
          bStack_c7 = 0;
        }
      }
      else {
        iVar7 = 0;
        local_50 = iVar7;
        if ((uStack_c6 | 0xffff0000) != 0) {
          for (; local_50 = iVar7, ((uStack_c6 | 0xffff0000) >> iVar7 & 1) == 0; iVar7 = iVar7 + 1)
          {
          }
        }
LAB_146197b28:
        bStack_c7 = (byte)iVar7;
      }
    } while ((byte)uVar17 < 0x20);
    pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar13 + 1U);
    if ((int)(iVar13 + 1U) < iVar8) {
      local_78 = this_00 + ((longlong)local_80 + 1) * 0x20;
      pFVar16 = (FScriptContainerElement *)
                (ulonglong)
                (uint)(*(int *)&this_00[((longlong)local_84 * 2 + 3) * 0x10 + 8].field_0x0 << 9);
      uVar17 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          &local_78[0x10].field_0x0)->AllocatorInstance).Data;
      if (uVar17 == 0) {
        uStack_70 = 0x20;
        uVar17 = 0x20;
        local_e8 = local_78;
      }
      else {
        local_44 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> local_44 & 1) == 0; local_44 = local_44 + 1) {
          }
        }
        uVar6 = 0x20;
        if (uVar17 != 0) {
          uVar6 = (char)local_44;
        }
        uStack_70 = CONCAT31((int3)(uStack_70 >> 8),uVar6) & 0xffff;
        uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                          ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_78,0);
        local_40 = 0;
        if ((uVar4 | 0xffff0000) != 0) {
          for (; ((uVar4 | 0xffff0000) >> local_40 & 1) == 0; local_40 = local_40 + 1) {
          }
        }
        uStack_70 = CONCAT22(uVar4,CONCAT11((char)local_40,(undefined1)uStack_70));
        uVar17 = uStack_70;
        local_e8 = local_78;
      }
    }
    else {
      local_68 = 0;
      pFVar16 = (FScriptContainerElement *)0x0;
      uStack_60 = 0;
      uVar17 = 0;
      local_e8 = (FScriptContainerElement *)0x0;
    }
  } while( true );
}

// CreateForkedAllocationTask @ 14619adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::FEntitySystemScheduler::CreateForkedAllocationTask
          (FEntitySystemScheduler *this,FTaskParams *param_1,
          TSharedPtr<UE::MovieScene::ITaskContext,1> *param_2,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_3,TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                   *param_4,FEntityComponentFilter *param_5,FComponentMask *param_6,
          FComponentMask *param_7)

{
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar1;
  FLockedComponentData *pFVar2;
  FString *this_00;
  int iVar3;
  FTaskID FVar4;
  ITaskContext *pIVar5;
  FTaskPrerequisiteCache *pFVar6;
  FEntry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  FIterator FVar15;
  TMap<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
  *this_01;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  void *pvVar19;
  size_t sVar20;
  FIterator *pFVar21;
  FScheduledTask *this_02;
  FString *pFVar22;
  FComponentDependencies *pFVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar28;
  ulong64 uVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  byte bVar32;
  uint uVar33;
  ITaskContext *_Str;
  ulonglong uVar34;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  uint uVar39;
  uint uVar40;
  wchar_t *pwVar41;
  int iVar42;
  TBitArray<TFixedAllocator<12>_> *in_stack_00000048;
  undefined1 auStackY_518 [32];
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  FTaskID local_4c0;
  FScriptContainerElement *local_4b8;
  <lambda_1> local_4a0 [4];
  uint local_49c;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  FScriptContainerElement *local_488;
  ForAnyElementType local_480;
  undefined8 local_478;
  ushort local_470;
  FScriptContainerElement *local_468;
  undefined1 local_460 [16];
  int local_450;
  undefined8 local_44c;
  FScriptContainerElement *local_440;
  undefined1 local_438 [16];
  int local_428;
  undefined8 local_424;
  int local_418;
  int local_414;
  int local_410;
  ulonglong local_408;
  TBitArray<TFixedAllocator<12>_> *local_400;
  FIterator local_3f8;
  FScriptContainerElement *local_3d0;
  undefined1 uStack_3c8;
  undefined1 uStack_3c7;
  ushort uStack_3c6;
  undefined4 uStack_3c4;
  FScriptContainerElement *local_3c0;
  undefined1 uStack_3b8;
  undefined1 uStack_3b7;
  ushort uStack_3b6;
  undefined4 uStack_3b4;
  FScriptContainerElement *local_3b0;
  undefined1 uStack_3a8;
  undefined1 uStack_3a7;
  ushort uStack_3a6;
  undefined4 uStack_3a4;
  FScriptContainerElement *local_3a0;
  undefined1 uStack_398;
  undefined1 uStack_397;
  ushort uStack_396;
  undefined4 uStack_394;
  ulonglong local_390;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_388;
  FComponentMask *local_380;
  FName local_378;
  FEntityAllocationWriteContext local_370;
  TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
  *local_368;
  FName local_360;
  TTuple<int,UE::MovieScene::FComponentTypeID> local_358;
  TTuple<int,UE::MovieScene::FComponentTypeID> local_350;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int *local_2f0;
  FEntityComponentFilter *local_2e8;
  TMap<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
  *local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  uint local_2c4;
  int local_2c0;
  FEntityAllocationIteratorProxy local_2b8;
  FComponentDependencies local_2a8;
  FEntityAllocationIterator local_290;
  int local_278;
  int local_274;
  int local_270;
  FEntityAllocationProxy local_268;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_258;
  FEntityAllocationIterator local_248;
  FEntityManager *local_228 [2];
  ITaskContext *local_218;
  TReferenceControllerBase<1> *pTStack_210;
  FString local_208;
  FIterator local_1f8;
  TBitArray<TFixedAllocator<12>_> local_1e8;
  TTypeCompatibleBytes<unsigned_int> local_1b0 [4];
  TTypeCompatibleBytes<unsigned_int> local_1a0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_198 [2];
  TTypeCompatibleBytes<unsigned_int> local_190 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_188 [2];
  uint local_180;
  int local_17c;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [3];
  ulonglong uVar38;
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_2e8 = param_5;
  local_368 = param_4;
  local_400 = in_stack_00000048;
  local_380 = param_7;
  local_388 = param_3;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_370,this->EntityManager);
  uVar38 = 0;
  local_1e8.NumBits = 0;
  local_1e8.MaxBits = 0x180;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&param_7->Bits,in_stack_00000048,&local_1e8,MinSize,local_4a0);
  iVar3 = local_1e8.NumBits;
  local_17c = local_1e8.MaxBits;
  iVar18 = local_1e8.NumBits + 0x1f;
  local_180 = local_1e8.NumBits;
  local_1e8.NumBits = 0;
  local_1e8.MaxBits = 0;
  iVar18 = (int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5;
  local_1b0[0].Pad[0] = local_1e8.AllocatorInstance.InlineData[0].Pad[0];
  local_1b0[0].Pad[1] = local_1e8.AllocatorInstance.InlineData[0].Pad[1];
  local_1b0[0].Pad[2] = local_1e8.AllocatorInstance.InlineData[0].Pad[2];
  local_1b0[0].Pad[3] = local_1e8.AllocatorInstance.InlineData[0].Pad[3];
  local_1b0[1].Pad[0] = local_1e8.AllocatorInstance.InlineData[1].Pad[0];
  local_1b0[1].Pad[1] = local_1e8.AllocatorInstance.InlineData[1].Pad[1];
  local_1b0[1].Pad[2] = local_1e8.AllocatorInstance.InlineData[1].Pad[2];
  local_1b0[1].Pad[3] = local_1e8.AllocatorInstance.InlineData[1].Pad[3];
  local_1b0[2].Pad[0] = local_1e8.AllocatorInstance.InlineData[2].Pad[0];
  local_1b0[2].Pad[1] = local_1e8.AllocatorInstance.InlineData[2].Pad[1];
  local_1b0[2].Pad[2] = local_1e8.AllocatorInstance.InlineData[2].Pad[2];
  local_1b0[2].Pad[3] = local_1e8.AllocatorInstance.InlineData[2].Pad[3];
  local_1b0[3].Pad[0] = local_1e8.AllocatorInstance.InlineData[3].Pad[0];
  local_1b0[3].Pad[1] = local_1e8.AllocatorInstance.InlineData[3].Pad[1];
  local_1b0[3].Pad[2] = local_1e8.AllocatorInstance.InlineData[3].Pad[2];
  local_1b0[3].Pad[3] = local_1e8.AllocatorInstance.InlineData[3].Pad[3];
  local_1a0[0].Pad[0] = local_1e8.AllocatorInstance.InlineData[4].Pad[0];
  local_1a0[0].Pad[1] = local_1e8.AllocatorInstance.InlineData[4].Pad[1];
  local_1a0[0].Pad[2] = local_1e8.AllocatorInstance.InlineData[4].Pad[2];
  local_1a0[0].Pad[3] = local_1e8.AllocatorInstance.InlineData[4].Pad[3];
  local_1a0[1].Pad[0] = local_1e8.AllocatorInstance.InlineData[5].Pad[0];
  local_1a0[1].Pad[1] = local_1e8.AllocatorInstance.InlineData[5].Pad[1];
  local_1a0[1].Pad[2] = local_1e8.AllocatorInstance.InlineData[5].Pad[2];
  local_1a0[1].Pad[3] = local_1e8.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_198[0].Pad[0] = local_1e8.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_198[0].Pad[1] = local_1e8.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_198[0].Pad[2] = local_1e8.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_198[0].Pad[3] = local_1e8.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_198[1].Pad[0] = local_1e8.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_198[1].Pad[1] = local_1e8.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_198[1].Pad[2] = local_1e8.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_198[1].Pad[3] = local_1e8.AllocatorInstance.InlineData[7].Pad[3];
  local_190[0].Pad[0] = local_1e8.AllocatorInstance.InlineData[8].Pad[0];
  local_190[0].Pad[1] = local_1e8.AllocatorInstance.InlineData[8].Pad[1];
  local_190[0].Pad[2] = local_1e8.AllocatorInstance.InlineData[8].Pad[2];
  local_190[0].Pad[3] = local_1e8.AllocatorInstance.InlineData[8].Pad[3];
  local_190[1].Pad[0] = local_1e8.AllocatorInstance.InlineData[9].Pad[0];
  local_190[1].Pad[1] = local_1e8.AllocatorInstance.InlineData[9].Pad[1];
  local_190[1].Pad[2] = local_1e8.AllocatorInstance.InlineData[9].Pad[2];
  local_190[1].Pad[3] = local_1e8.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_188[0].Pad[0] = local_1e8.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_188[0].Pad[1] = local_1e8.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_188[0].Pad[2] = local_1e8.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_188[0].Pad[3] = local_1e8.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_188[1].Pad[0] = local_1e8.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_188[1].Pad[1] = local_1e8.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_188[1].Pad[2] = local_1e8.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_188[1].Pad[3] = local_1e8.AllocatorInstance.InlineData[0xb].Pad[3];
  uVar39 = iVar3 & 0x8000001f;
  if ((int)uVar39 < 0) {
    uVar39 = (uVar39 - 1 | 0xffffffe0) + 1;
  }
  uVar33 = 0xffffffff >> ((byte)(0x20 - uVar39) & 0x1f);
  if (0x1f < (int)(0x20 - uVar39)) {
    uVar33 = 0xffffffff;
  }
  uVar39 = 0xffffffff;
  if (iVar18 == 1) {
    uVar39 = uVar33;
  }
  uVar34 = uVar38;
  if (0 < iVar18) {
    do {
      uVar40 = uVar39 & *(uint *)local_1b0[uVar38].Pad;
      if (uVar39 == 0xffffffff) {
        uVar40 = *(uint *)local_1b0[uVar38].Pad;
      }
      uVar37 = (int)uVar38 + 1;
      uVar38 = (ulonglong)uVar37;
      uVar26 = (ulonglong)uVar40 - ((ulonglong)(uVar40 >> 1) & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar40 = (int)uVar34 +
               (uint)(byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
      uVar39 = 0xffffffff;
      if (uVar37 == iVar18 - 1U) {
        uVar39 = uVar33;
      }
      uVar34 = (ulonglong)uVar40;
    } while ((int)uVar37 < iVar18);
    if ((uVar40 != 0) &&
       (bVar16 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7429933679914254522>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0xba,
                            "FComponentMask::BitwiseAND(ReadDeps, WriteDeps, EBitwiseOperatorFlags::MinSize).NumComponents() == 0"
                           ), bVar16)) {
      pcVar9 = (code *)swi(3);
      iVar18 = (*pcVar9)();
      return (FTaskID)iVar18;
    }
  }
  uVar38 = 0;
  *(undefined4 *)&param_1->DebugName = 0xffffffff;
  local_4c0.Index = -1;
  FEntityManager::Iterate(this->EntityManager,&local_2b8,(FEntityComponentFilter *)param_6);
  FEntityAllocationIterator::FEntityAllocationIterator
            (&local_290,local_2b8.Manager,local_2b8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_248,local_2b8.Manager);
  bVar16 = FEntityAllocationIterator::operator!=(&local_290,&local_248);
  uVar39 = 0;
  if (bVar16) {
    local_2f0 = &(this->Tasks).ArrayMax;
    do {
      piVar36 = &(this->Tasks).ArrayMax;
      FEntityAllocationIterator::operator*(&local_290,&local_268);
      if (*(int *)&param_1->DebugName == -1) {
        iVar18 = (this->Tasks).ArrayNum;
        if (iVar18 == *piVar36) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x888,(ForAnyElementType *)this,piVar36);
        }
        (this->Tasks).ArrayNum = iVar18 + 1;
        FScheduledTask::FScheduledTask
                  ((FScheduledTask *)
                   ((this->Tasks).AllocatorInstance.Data + (longlong)iVar18 * 0x88),local_370);
        local_178.Base = local_158;
        *(int *)&param_1->DebugName = iVar18;
        local_178.CurPos = local_158;
        local_178.bIsDynamic = false;
        local_178.bIsExternal = false;
        local_178.End = (wchar_t *)local_58;
        pvVar19 = FGenericPlatformString::Memcpy(local_158,L"Parent task for ",0x20);
        pIVar5 = param_2->Object;
        pwVar41 = (wchar_t *)((longlong)pvVar19 + 0x20);
        iVar18 = 0;
        local_178.CurPos = pwVar41;
        if (pIVar5 != (ITaskContext *)0x0) {
          sVar20 = wcslen((wchar_t *)pIVar5);
          iVar18 = (int)sVar20;
        }
        uVar29 = (ulong64)iVar18;
        _Str = pIVar5;
        if (local_178.End < pwVar41 + uVar29) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,uVar29);
          _Str = param_2->Object;
          pwVar41 = local_178.CurPos;
        }
        if (iVar18 != 0) {
          pvVar19 = FGenericPlatformString::Memcpy(pwVar41,pIVar5,uVar29 * 2);
          local_178.CurPos = (wchar_t *)((longlong)pvVar19 + uVar29 * 2);
          _Str = param_2->Object;
        }
        if (_Str == (ITaskContext *)0x0) {
          lVar30 = ((param_2->SharedReferenceCount).ReferenceController)->_padding_;
          local_378.ComparisonIndex.Value = (uint)lVar30;
          local_378.Number = (uint)((ulonglong)lVar30 >> 0x20);
          ::FName::ToString(&local_378,&local_178);
        }
        else {
          sVar20 = wcslen((wchar_t *)_Str);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_178,(wchar_t *)_Str,(int)sVar20);
        }
        uVar33 = *(uint *)&param_1->DebugName;
        uVar40 = uVar39;
        if ((int)uVar33 < (this->Tasks).ArrayNum) {
          uVar40 = ~uVar33 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          iVar18 = (*pcVar9)();
          return (FTaskID)iVar18;
        }
        pFVar31 = (this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x88 + 0x83;
        *pFVar31 = (FScriptContainerElement)((byte)*pFVar31 | 2);
        uVar33 = *(uint *)&param_1->DebugName;
        uVar40 = uVar39;
        if ((int)uVar33 < (this->Tasks).ArrayNum) {
          uVar40 = ~uVar33 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          iVar18 = (*pcVar9)();
          return (FTaskID)iVar18;
        }
        pFVar31 = (this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x88 + 0x83;
        *pFVar31 = (FScriptContainerElement)((byte)*pFVar31 & 0xfe);
        pFVar6 = this->CurrentPrerequisites;
        if (pFVar6 != (FTaskPrerequisiteCache *)0x0) {
          iVar18 = local_3f8.EntryIndex;
          if (((ulonglong)param_2[1].Object & 0x10) != 0) {
            MovieScene::begin(&local_3f8,&pFVar6->SystemWidePrerequisites);
            pFVar7 = (FEntry *)(pFVar6->SystemWidePrerequisites).Entries.AllocatorInstance.Data;
            iVar3 = (pFVar6->SystemWidePrerequisites).Entries.ArrayNum;
            uVar40 = (uint)local_3f8.BucketIt.CurrentBucket;
            uVar33 = (uint)local_3f8.BucketIt.BucketBitIndex;
            pTVar28 = local_3f8.BucketIt.BitSet;
            iVar42 = local_3f8.CurrentOffsetInBits;
            iVar18 = local_3f8.EntryIndex;
            while ((((bVar32 = (byte)uVar33, local_3f8.Entries != pFVar7 || (iVar18 != iVar3)) ||
                    (pTVar28 !=
                     (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)0x0)) || ((bVar32 != 0 || (local_3f8.BucketIt.IndexWithinBucket != '\0')))))
            {
              AddPrerequisite(this,(FTaskID)((uVar33 & 0xff) * 0x10 +
                                            (local_3f8.BucketIt._9_4_ & 0xff) + iVar42),
                              (FTaskID)*(int *)&param_1->DebugName);
              FVar15 = local_3f8.BucketIt;
              uVar17 = (ushort)uVar40 - 1 & (ushort)uVar40;
              uVar40 = (uint)uVar17;
              local_3f8.BucketIt.CurrentBucket = uVar17;
              if (uVar17 == 0) {
                if (bVar32 != 0x1f) {
                  uVar40 = -1 << (bVar32 + 1 & 0x1f) & pTVar28->BucketHash;
                  local_2c4 = 0;
                  if (uVar40 != 0) {
                    for (; (uVar40 >> local_2c4 & 1) == 0; local_2c4 = local_2c4 + 1) {
                    }
                  }
                  uVar33 = 0x20;
                  if (uVar40 != 0) {
                    uVar33 = local_2c4 & 0xff;
                  }
                  bVar32 = (byte)uVar33;
                  local_3f8.BucketIt.BitSet = FVar15.BitSet;
                  local_3f8.BucketIt.BucketBitIndex = bVar32;
                  if (bVar32 != 0x20) {
                    uVar40 = FGenericPlatformMath::CountBits
                                       ((ulonglong)
                                        ((1 << (bVar32 & 0x1f)) - 1U & pTVar28->BucketHash));
                    uVar17 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                       (&pTVar28->Buckets,uVar40 & 0xff);
                    uVar40 = (uint)uVar17;
                    local_3f8.BucketIt.CurrentBucket = uVar17;
                    iVar25 = 0;
                    local_2c0 = iVar25;
                    if ((uVar40 | 0xffff0000) != 0) {
                      for (; local_2c0 = iVar25, ((uVar40 | 0xffff0000) >> iVar25 & 1) == 0;
                          iVar25 = iVar25 + 1) {
                      }
                    }
                    goto LAB_14619b3e0;
                  }
                }
                goto LAB_14619b3f7;
              }
              iVar25 = 0;
              local_2c8 = iVar25;
              if ((uVar40 | 0xffff0000) != 0) {
                for (; local_2c8 = iVar25, ((uVar40 | 0xffff0000) >> iVar25 & 1) == 0;
                    iVar25 = iVar25 + 1) {
                }
              }
LAB_14619b3e0:
              local_3f8.BucketIt.IndexWithinBucket = (uchar)iVar25;
              if (0x1f < bVar32) {
LAB_14619b3f7:
                iVar18 = iVar18 + 1;
                if (iVar18 < local_3f8.NumEntries) {
                  iVar42 = local_3f8.Entries[iVar18].Offset << 9;
                  local_3f8.CurrentOffsetInBits = iVar42;
                  pFVar21 = TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                            ::FIterator::Begin(&local_1f8,&local_3f8.Entries[iVar18].Bits);
                  local_3f8.BucketIt = *pFVar21;
                  uVar33._0_1_ = pFVar21->BucketBitIndex;
                  uVar33._1_1_ = pFVar21->IndexWithinBucket;
                  uVar33._2_2_ = pFVar21->CurrentBucket;
                  uVar40 = (uint)local_3f8.BucketIt.CurrentBucket;
                  pTVar28 = local_3f8.BucketIt.BitSet;
                }
                else {
                  local_348 = 0;
                  uStack_340 = 0;
                  local_3f8.BucketIt._12_4_ = uStack_33c;
                  local_3f8.BucketIt.BitSet =
                       (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)0x0;
                  local_3f8.BucketIt.BucketBitIndex = 0;
                  local_3f8.BucketIt.IndexWithinBucket = 0;
                  local_3f8.BucketIt.CurrentBucket = 0;
                  local_3f8.CurrentOffsetInBits = 0;
                  pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                             *)0x0;
                  uVar33 = 0;
                  uVar40 = 0;
                  iVar42 = 0;
                }
              }
            }
          }
          local_3f8.EntryIndex = iVar18;
          pFVar6 = this->CurrentPrerequisites;
          local_4b8 = (FScriptContainerElement *)0x0;
          uVar33 = 0;
          local_438._0_12_ = ZEXT812(0);
          iVar18 = (pFVar6->ForcedSystemWidePrerequisites).Entries.ArrayNum;
          local_498 = (pFVar6->ForcedSystemWidePrerequisites).Entries.AllocatorInstance.Data;
          local_424 = 0;
          uVar34 = uVar38;
          local_440 = local_498;
          local_428 = iVar18;
          uVar17 = 0;
          if (iVar18 != 0) {
            uVar33 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                &local_498[0x10].field_0x0)->AllocatorInstance).Data;
            uVar40 = *(int *)&local_498[0x18].field_0x0 << 9;
            uVar34 = (ulonglong)uVar40;
            local_424 = (ulonglong)uVar40 << 0x20;
            uStack_396 = 0;
            local_3a0 = local_498;
            if (uVar33 == 0) {
              uStack_398 = 0x20;
              uStack_397 = 0;
            }
            else {
              local_318 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> local_318 & 1) == 0; local_318 = local_318 + 1) {
                }
              }
              uStack_398 = 0x20;
              if (uVar33 != 0) {
                uStack_398 = (char)local_318;
              }
              uStack_396 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                     ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                      local_498,0);
              local_314 = 0;
              if ((uStack_396 | 0xffff0000) != 0) {
                for (; ((uStack_396 | 0xffff0000) >> local_314 & 1) == 0; local_314 = local_314 + 1)
                {
                }
              }
              uStack_397 = (undefined1)local_314;
            }
            auVar13[8] = uStack_398;
            auVar13._0_8_ = local_3a0;
            auVar13[9] = uStack_397;
            auVar13._10_2_ = uStack_396;
            local_438._12_4_ = uStack_394;
            local_438._0_12_ = auVar13;
            local_4b8 = local_3a0;
            uVar33 = auVar13._8_4_;
            uVar17 = uStack_396;
          }
          pFVar31 = (pFVar6->ForcedSystemWidePrerequisites).Entries.AllocatorInstance.Data;
          iVar3 = (pFVar6->ForcedSystemWidePrerequisites).Entries.ArrayNum;
          uVar26 = uVar38;
          while( true ) {
            iVar42 = (int)uVar26;
            bVar32 = (byte)uVar33;
            if (((local_498 == pFVar31) && (iVar42 == iVar3)) &&
               ((local_4b8 == (FScriptContainerElement *)0x0 &&
                ((bVar32 == 0 && (local_438[9] == '\0')))))) break;
            AddPrerequisite(this,(FTaskID)((uVar33 & 0xff) * 0x10 +
                                          (local_438._9_4_ & 0xff) + (int)uVar34),
                            (FTaskID)*(int *)&param_1->DebugName);
            auVar14 = local_438;
            uVar17 = uVar17 - 1 & uVar17;
            local_438._10_2_ = uVar17;
            if (uVar17 == 0) {
              if (bVar32 != 0x1f) {
                uVar33 = -1 << (bVar32 + 1 & 0x1f) & *(uint *)&local_4b8[0x10].field_0x0;
                local_30c = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> local_30c & 1) == 0; local_30c = local_30c + 1) {
                  }
                }
                bVar32 = 0x20;
                if (uVar33 != 0) {
                  bVar32 = (byte)local_30c;
                }
                uVar33 = (uint)bVar32;
                local_438._0_8_ = auVar14._0_8_;
                local_438[8] = bVar32;
                if (bVar32 != 0x20) {
                  uVar40 = (1 << (bVar32 & 0x1f)) - 1U & *(uint *)&local_4b8[0x10].field_0x0;
                  uVar27 = (ulonglong)uVar40 - ((ulonglong)(uVar40 >> 1) & 0x5555555555555555);
                  uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
                  uVar17 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                     ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                      local_4b8,
                                      (uint)(byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) *
                                                   0x101010101010101 >> 0x38));
                  local_438._10_2_ = uVar17;
                  iVar25 = 0;
                  local_308 = iVar25;
                  if ((uVar17 | 0xffff0000) != 0) {
                    for (; local_308 = iVar25, ((uVar17 | 0xffff0000) >> iVar25 & 1) == 0;
                        iVar25 = iVar25 + 1) {
                    }
                  }
                  goto LAB_14619b6eb;
                }
              }
              goto LAB_14619b70b;
            }
            iVar25 = 0;
            local_310 = iVar25;
            if ((uVar17 | 0xffff0000) != 0) {
              for (; local_310 = iVar25, ((uVar17 | 0xffff0000) >> iVar25 & 1) == 0;
                  iVar25 = iVar25 + 1) {
              }
            }
LAB_14619b6eb:
            local_438[9] = (char)iVar25;
            if (0x1f < bVar32) {
LAB_14619b70b:
              uVar26 = (ulonglong)(iVar42 + 1U);
              if ((int)(iVar42 + 1U) < iVar18) {
                local_3b0 = local_498 + ((longlong)iVar42 + 1) * 0x20;
                uStack_3a6 = 0;
                uVar40 = *(int *)&local_498[((longlong)iVar42 * 2 + 3) * 0x10 + 8].field_0x0 << 9;
                uVar33 = *(uint *)&local_3b0[0x10].field_0x0;
                local_424 = CONCAT44(uVar40,(undefined4)local_424);
                if (uVar33 == 0) {
                  uStack_3a8 = 0x20;
                  uStack_3a7 = 0;
                }
                else {
                  local_304 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> local_304 & 1) == 0; local_304 = local_304 + 1) {
                    }
                  }
                  uStack_3a8 = 0x20;
                  if (uVar33 != 0) {
                    uStack_3a8 = (char)local_304;
                  }
                  uStack_3a6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                         ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                          local_3b0,0);
                  local_270 = 0;
                  if ((uStack_3a6 | 0xffff0000) != 0) {
                    for (; ((uStack_3a6 | 0xffff0000) >> local_270 & 1) == 0;
                        local_270 = local_270 + 1) {
                    }
                  }
                  uStack_3a7 = (undefined1)local_270;
                }
                auVar12[8] = uStack_3a8;
                auVar12._0_8_ = local_3b0;
                auVar12[9] = uStack_3a7;
                auVar12._10_2_ = uStack_3a6;
                local_438._12_4_ = uStack_3a4;
                local_438._0_12_ = auVar12;
                uVar33 = auVar12._8_4_;
                local_4b8 = local_3b0;
                uVar34 = (ulonglong)uVar40;
                uVar17 = uStack_3a6;
              }
              else {
                local_338 = 0;
                uStack_330 = 0;
                local_438._12_4_ = uStack_32c;
                local_438._0_12_ = ZEXT812(0);
                local_424 = local_424 & 0xffffffff;
                local_4b8 = (FScriptContainerElement *)0x0;
                uVar33 = 0;
                uVar17 = 0;
                uVar34 = uVar38;
              }
            }
          }
          local_424 = CONCAT44(local_424._4_4_,iVar42);
        }
        uVar33 = *(uint *)&param_1->DebugName;
        pFVar6 = &this->CurrentSubsequents;
        lVar30 = (longlong)(this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum;
        pFVar31 = (pFVar6->SystemWidePrerequisites).Entries.AllocatorInstance.Data;
        uVar40 = uVar33 >> 9;
        if (0 < lVar30) {
          pFVar24 = pFVar31 + 0x18;
          uVar34 = uVar38;
          uVar26 = uVar38;
          do {
            uVar37 = (uint)uVar26;
            if (*(uint *)pFVar24 == uVar40) {
              pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                         *)(pFVar31 + (longlong)(int)uVar37 * 0x20);
              goto LAB_14619b8ac;
            }
            if (uVar40 <= *(uint *)pFVar24) {
              iVar18 = (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum;
              piVar36 = &(this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayMax;
              if (iVar18 == *piVar36) {
                iVar18 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,(ForAnyElementType *)pFVar6,piVar36);
              }
              lVar30 = uVar34 * 0x20;
              pFVar31 = (pFVar6->SystemWidePrerequisites).Entries.AllocatorInstance.Data + lVar30;
              (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum = iVar18 + 1;
              memmove(pFVar31 + 0x20,pFVar31,(longlong)(int)(iVar18 - uVar37) << 5);
              uVar35 = uVar39;
              if ((int)uVar37 < (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum)
              {
                uVar35 = ~uVar37 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                iVar18 = (*pcVar9)();
                return (FTaskID)iVar18;
              }
              goto LAB_14619b897;
            }
            uVar26 = (ulonglong)(uVar37 + 1);
            uVar34 = uVar34 + 1;
            pFVar24 = pFVar24 + 0x20;
          } while ((longlong)uVar34 < lVar30);
        }
        iVar18 = (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum;
        piVar36 = &(this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayMax;
        if (iVar18 == *piVar36) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)pFVar6,piVar36);
        }
        lVar30 = (longlong)iVar18 << 5;
        (this->CurrentSubsequents).SystemWidePrerequisites.Entries.ArrayNum = iVar18 + 1;
LAB_14619b897:
        pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)((pFVar6->SystemWidePrerequisites).Entries.AllocatorInstance.Data + lVar30);
        (pTVar28->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar28->Buckets).Storage.ArrayNum = 0;
        (pTVar28->Buckets).Storage.ArrayMax = 0;
        pTVar28->BucketHash = 0;
        *(uint *)&pTVar28[1].Buckets.Storage.AllocatorInstance.Data = uVar40;
LAB_14619b8ac:
        TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
        ::SetBit(pTVar28,uVar33 + uVar40 * -0x200);
        if (((ulonglong)param_2[1].Object & 8) != 0) {
          pFVar31 = (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.
                    AllocatorInstance.Data;
          pTVar1 = &(this->CurrentSubsequents).ForcedSystemWidePrerequisites;
          uVar33 = *(uint *)&param_1->DebugName;
          lVar30 = (longlong)
                   (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum;
          uVar40 = uVar33 >> 9;
          if (0 < lVar30) {
            pFVar24 = pFVar31 + 0x18;
            uVar34 = uVar38;
            uVar26 = uVar38;
            do {
              uVar37 = (uint)uVar26;
              if (*(uint *)pFVar24 == uVar40) {
                pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                           *)(pFVar31 + (longlong)(int)uVar37 * 0x20);
                goto LAB_14619b95f;
              }
              if (uVar40 <= *(uint *)pFVar24) {
                iVar18 = (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum;
                piVar36 = &(this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayMax
                ;
                if (iVar18 == *piVar36) {
                  iVar18 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)pTVar1,piVar36);
                }
                pFVar31 = (pTVar1->Entries).AllocatorInstance.Data;
                (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum =
                     iVar18 + 1;
                pFVar31 = pFVar31 + uVar34 * 0x20;
                memmove(pFVar31 + 0x20,pFVar31,(longlong)(int)(iVar18 - uVar37) << 5);
                uVar35 = uVar39;
                if ((int)uVar37 <
                    (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum) {
                  uVar35 = ~uVar37 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  iVar18 = (*pcVar9)();
                  return (FTaskID)iVar18;
                }
                pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                           *)((pTVar1->Entries).AllocatorInstance.Data + uVar34 * 0x20);
                goto LAB_14619b94d;
              }
              uVar26 = (ulonglong)(uVar37 + 1);
              uVar34 = uVar34 + 1;
              pFVar24 = pFVar24 + 0x20;
            } while ((longlong)uVar34 < lVar30);
          }
          iVar18 = (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum;
          piVar36 = &(this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayMax;
          if (iVar18 == *piVar36) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)pTVar1,piVar36);
          }
          pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                     *)((pTVar1->Entries).AllocatorInstance.Data + (longlong)iVar18 * 0x20);
          (this->CurrentSubsequents).ForcedSystemWidePrerequisites.Entries.ArrayNum = iVar18 + 1;
LAB_14619b94d:
          (pTVar28->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar28->Buckets).Storage.ArrayNum = 0;
          (pTVar28->Buckets).Storage.ArrayMax = 0;
          pTVar28->BucketHash = 0;
          *(uint *)&pTVar28[1].Buckets.Storage.AllocatorInstance.Data = uVar40;
LAB_14619b95f:
          TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::SetBit(pTVar28,uVar33 + uVar40 * -0x200);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
        piVar36 = local_2f0;
      }
      iVar3 = local_268.AllocationIndex;
      FVar4.Index = (this->Tasks).ArrayNum;
      local_480.Data = (FScriptContainerElement *)0x0;
      local_478 = 0;
      local_470 = (ushort)local_268.AllocationIndex;
      local_228[0] = local_268.Manager;
      (**(code **)(local_2e8->AllMask).Bits.AllocatorInstance.InlineData)
                (*(undefined8 *)((local_2e8->AllMask).Bits.AllocatorInstance.InlineData + 2),
                 local_228,&local_480);
      iVar18 = (this->Tasks).ArrayNum;
      if (iVar18 == *piVar36) {
        iVar18 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,(ForAnyElementType *)this,piVar36);
      }
      (this->Tasks).ArrayNum = iVar18 + 1;
      this_02 = FScheduledTask::FScheduledTask
                          ((FScheduledTask *)
                           ((this->Tasks).AllocatorInstance.Data + (longlong)iVar18 * 0x88),
                           local_370);
      local_258.TypeIndex = local_368->field_0x8;
      uVar34 = (ulonglong)local_258.TypeIndex;
      if ((3 < local_258.TypeIndex) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xec,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        iVar18 = (*pcVar9)();
        return (FTaskID)iVar18;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<void_(__cdecl*)(UE::MovieScene::ITaskContext_const*___ptr64,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::ITaskContext_const*___ptr64,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const*___ptr64,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const*___ptr64,UE::MovieScene::FEntityAllocationWriteContext)>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[uVar34])(&local_258,local_368);
      FScheduledTask::SetFunction(this_02,&local_258);
      (this_02->StatId).StatIdPtr =
           (TStatIdData *)(param_2->SharedReferenceCount).ReferenceController;
      (this_02->Parent).Index = *(int *)&param_1->DebugName;
      pIVar5 = (ITaskContext *)local_388->_padding_;
      pTVar8 = *(TReferenceControllerBase<1> **)&local_388->TypeIndex;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_218 = (this_02->TaskContext).Object;
      pTStack_210 = (this_02->TaskContext).SharedReferenceCount.ReferenceController;
      (this_02->TaskContext).Object = pIVar5;
      (this_02->TaskContext).SharedReferenceCount.ReferenceController = pTVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_210);
      pFVar2 = &this_02->LockedComponentData;
      bVar32 = *(byte *)&param_2[1].Object;
      this_02->NumPrerequisites = 1;
      this_02->field_0x83 = (this_02->bForceGameThread ^ bVar32) & 1 ^ this_02->field_0x83;
      if (pFVar2 != (FLockedComponentData *)&local_480) {
        pFVar31 = (pFVar2->PreLockedComponentData).AllocatorInstance.Data;
        if (pFVar31 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar31);
        }
        (pFVar2->PreLockedComponentData).AllocatorInstance.Data = local_480.Data;
        local_480.Data = (FScriptContainerElement *)0x0;
        (this_02->LockedComponentData).PreLockedComponentData.ArrayNum = (int)local_478;
        (this_02->LockedComponentData).PreLockedComponentData.ArrayMax = local_478._4_4_;
        local_478 = 0;
      }
      (this_02->LockedComponentData).AllocationIndex = local_470;
      this_00 = &this_02->DebugName;
      if (param_2->Object == (ITaskContext *)0x0) {
        lVar30 = ((param_2->SharedReferenceCount).ReferenceController)->_padding_;
        local_360.ComparisonIndex.Value = (uint)lVar30;
        local_360.Number = (uint)((ulonglong)lVar30 >> 0x20);
        pFVar22 = ::FName::ToString(&local_360,&local_208);
        if (this_00 != pFVar22) {
          pFVar31 = (this_00->Data).AllocatorInstance.Data;
          if (pFVar31 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar31);
          }
          (this_00->Data).AllocatorInstance.Data = (pFVar22->Data).AllocatorInstance.Data;
          (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_02->DebugName).Data.ArrayNum = (pFVar22->Data).ArrayNum;
          (this_02->DebugName).Data.ArrayMax = (pFVar22->Data).ArrayMax;
          (pFVar22->Data).ArrayNum = 0;
          (pFVar22->Data).ArrayMax = 0;
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::operator=(this_00,(wchar_t *)param_2->Object);
      }
      uVar33 = *(uint *)&param_1->DebugName;
      uVar40 = uVar39;
      if ((int)uVar33 < (this->Tasks).ArrayNum) {
        uVar40 = ~uVar33 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        iVar18 = (*pcVar9)();
        return (FTaskID)iVar18;
      }
      local_408 = CONCAT44(local_408._4_4_,1);
      local_4e8 = 0;
      pFVar31 = (this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x88 + 0x80;
      *(short *)pFVar31 = *(short *)pFVar31 + 1;
      uVar33 = (local_380->Bits).NumBits;
      uVar34 = uVar38;
      uVar26 = uVar38;
      if (uVar33 != 0) {
        uVar26 = (ulonglong)uVar33;
        uVar40 = *(uint *)(local_380->Bits).AllocatorInstance.InlineData[0].Pad;
        uVar27 = uVar38;
        while (uVar40 == 0) {
          local_4e8 = (int)uVar27 + 0x20;
          uVar27 = (ulonglong)local_4e8;
          iVar18 = (int)uVar34;
          uVar40 = iVar18 + 1;
          uVar34 = (ulonglong)uVar40;
          if ((int)(((int)(uVar33 - 1) >> 0x1f & 0x1fU) + (uVar33 - 1)) >> 5 < (int)uVar40)
          goto LAB_14619be0d;
          uVar40 = *(uint *)(local_380->Bits).AllocatorInstance.InlineData[(longlong)iVar18 + 1].Pad
          ;
        }
        local_408 = (ulonglong)(-uVar40 & uVar40);
        uVar26 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_274 = (int)lVar30;
        uVar40 = (local_4e8 - 1) + local_274;
        if ((int)uVar33 < (int)uVar40) {
          uVar40 = uVar33;
        }
        uVar26 = (ulonglong)uVar40;
      }
LAB_14619be0d:
      local_4e4 = 0xffffffff;
      if ((int)uVar26 < (int)uVar33) {
        uVar33 = (uint)FVar4.Index >> 9;
        local_49c = ((uint)iVar3 >> 2) + iVar3 * 0x40;
        do {
          uVar40 = local_49c;
          if (((uVar26 & 0xffff0000) != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BitIndex & 0xFFFF0000) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                  ,0xba,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            iVar18 = (*pcVar9)();
            return (FTaskID)iVar18;
          }
          local_358._0_4_ = iVar3;
          local_358._4_2_ = SUB82(uVar26,0);
          pFVar23 = TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
                    ::FindOrAddImpl<TTuple<int,UE::MovieScene::FComponentTypeID>_>
                              ((TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
                                *)&this->ComponentDepedenciesByAllocation,
                               ((uint)uVar26 & 0xffff) + 0x9e3779b9 + uVar40 ^ iVar3,&local_358);
          if ((pFVar23->WriteTask).Index != -1) {
            AddPrerequisite(this,(FTaskID)(pFVar23->WriteTask).Index,FVar4);
          }
          lVar30 = (longlong)(pFVar23->ReadTasks).Entries.ArrayNum;
          pFVar31 = (pFVar23->ReadTasks).Entries.AllocatorInstance.Data;
          if (0 < lVar30) {
            pFVar24 = pFVar31 + 0x18;
            uVar26 = uVar38;
            uVar27 = uVar38;
            do {
              uVar40 = (uint)uVar26;
              if (*(uint *)pFVar24 == uVar33) {
                pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                           *)(pFVar31 + (longlong)(int)uVar40 * 0x20);
                goto LAB_14619bf42;
              }
              if (uVar33 <= *(uint *)pFVar24) {
                iVar18 = (pFVar23->ReadTasks).Entries.ArrayNum;
                piVar36 = &(pFVar23->ReadTasks).Entries.ArrayMax;
                if (iVar18 == *piVar36) {
                  iVar18 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)pFVar23,piVar36);
                }
                lVar30 = uVar27 * 0x20;
                pFVar31 = (pFVar23->ReadTasks).Entries.AllocatorInstance.Data + lVar30;
                (pFVar23->ReadTasks).Entries.ArrayNum = iVar18 + 1;
                memmove(pFVar31 + 0x20,pFVar31,(longlong)(int)(iVar18 - uVar40) << 5);
                uVar37 = uVar39;
                if ((int)uVar40 < (pFVar23->ReadTasks).Entries.ArrayNum) {
                  uVar37 = ~uVar40 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  iVar18 = (*pcVar9)();
                  return (FTaskID)iVar18;
                }
                goto LAB_14619bf2d;
              }
              uVar26 = (ulonglong)(uVar40 + 1);
              uVar27 = uVar27 + 1;
              pFVar24 = pFVar24 + 0x20;
            } while ((longlong)uVar27 < lVar30);
          }
          iVar18 = (pFVar23->ReadTasks).Entries.ArrayNum;
          piVar36 = &(pFVar23->ReadTasks).Entries.ArrayMax;
          if (iVar18 == *piVar36) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)pFVar23,piVar36);
          }
          lVar30 = (longlong)iVar18 << 5;
          (pFVar23->ReadTasks).Entries.ArrayNum = iVar18 + 1;
LAB_14619bf2d:
          pTVar28 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                     *)((pFVar23->ReadTasks).Entries.AllocatorInstance.Data + lVar30);
          (pTVar28->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar28->Buckets).Storage.ArrayNum = 0;
          (pTVar28->Buckets).Storage.ArrayMax = 0;
          pTVar28->BucketHash = 0;
          *(uint *)&pTVar28[1].Buckets.Storage.AllocatorInstance.Data = uVar33;
LAB_14619bf42:
          TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::SetBit(pTVar28,FVar4.Index + uVar33 * -0x200);
          local_4e4 = local_4e4 & ~(uint)local_408;
          uVar40 = (local_380->Bits).NumBits;
          uVar37 = local_4e4 &
                   *(uint *)(local_380->Bits).AllocatorInstance.InlineData[(int)uVar34].Pad;
          while (uVar37 == 0) {
            local_4e8 = local_4e8 + 0x20;
            iVar18 = (int)uVar34;
            uVar35 = iVar18 + 1;
            uVar34 = (ulonglong)uVar35;
            uVar37 = uVar40;
            if ((int)(((int)(uVar40 - 1) >> 0x1f & 0x1fU) + (uVar40 - 1)) >> 5 < (int)uVar35)
            goto LAB_14619bfdf;
            uVar37 = *(uint *)(local_380->Bits).AllocatorInstance.InlineData[(longlong)iVar18 + 1].
                              Pad;
            local_4e4 = 0xffffffff;
          }
          local_408 = CONCAT44(local_408._4_4_,-uVar37 & uVar37);
          uVar26 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
          lVar30 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_278 = (int)lVar30;
          uVar37 = (local_4e8 - 1) + local_278;
          if ((int)uVar40 < (int)uVar37) {
            uVar37 = uVar40;
          }
LAB_14619bfdf:
          uVar26 = (ulonglong)uVar37;
        } while ((int)uVar37 < (local_380->Bits).NumBits);
      }
      local_4e0 = 0;
      local_390 = CONCAT44(local_390._4_4_,1);
      uVar33 = local_400->NumBits;
      local_4e8 = 0;
      uVar34 = uVar38;
      if (uVar33 != 0) {
        uVar34 = (ulonglong)uVar33;
        uVar40 = *(uint *)(local_400->AllocatorInstance).InlineData[0].Pad;
        uVar26 = uVar38;
        uVar27 = uVar38;
        while (uVar40 == 0) {
          local_4e8 = (int)uVar27 + 0x20;
          uVar27 = (ulonglong)local_4e8;
          iVar18 = (int)uVar26;
          local_4e0 = iVar18 + 1;
          uVar26 = (ulonglong)local_4e0;
          if ((int)(((int)(uVar33 - 1) >> 0x1f & 0x1fU) + (uVar33 - 1)) >> 5 < (int)local_4e0)
          goto LAB_14619c0b6;
          uVar40 = *(uint *)(local_400->AllocatorInstance).InlineData[(longlong)iVar18 + 1].Pad;
        }
        local_390 = (ulonglong)(-uVar40 & uVar40);
        uVar34 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_2a8.WriteTask.Index = (int)lVar30;
        uVar40 = (local_4e8 - 1) + local_2a8.WriteTask.Index;
        if ((int)uVar33 < (int)uVar40) {
          uVar40 = uVar33;
        }
        uVar34 = (ulonglong)uVar40;
      }
LAB_14619c0b6:
      local_4e4 = 0xffffffff;
      if ((int)uVar34 < (int)uVar33) {
        local_2e0 = &this->ComponentDepedenciesByAllocation;
        iVar18 = iVar3 * 0x40 + ((uint)iVar3 >> 2);
        local_498 = (FScriptContainerElement *)CONCAT44(local_498._4_4_,iVar18);
        do {
          this_01 = local_2e0;
          if (((uVar34 & 0xffff0000) != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BitIndex & 0xFFFF0000) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                  ,0xba,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            iVar18 = (*pcVar9)();
            return (FTaskID)iVar18;
          }
          local_350._4_2_ = SUB82(uVar34,0);
          pFVar23 = TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
                    ::FindOrAddImpl<TTuple<int,UE::MovieScene::FComponentTypeID>_>
                              ((TMapBase<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>_>
                                *)this_01,((uint)uVar34 & 0xffff) + 0x9e3779b9 + iVar18 ^ iVar3,
                               &local_350);
          uVar33 = 0;
          local_490 = (FScriptContainerElement *)0x0;
          local_488 = (pFVar23->ReadTasks).Entries.AllocatorInstance.Data;
          local_450 = (pFVar23->ReadTasks).Entries.ArrayNum;
          local_460._0_12_ = ZEXT812(0);
          local_44c = 0;
          uVar34 = uVar38;
          local_468 = local_488;
          local_418 = local_450;
          uVar17 = 0;
          if (local_450 != 0) {
            uVar33 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                &local_488[0x10].field_0x0)->AllocatorInstance).Data;
            uVar40 = *(int *)&local_488[0x18].field_0x0 << 9;
            uVar34 = (ulonglong)uVar40;
            local_44c = (ulonglong)uVar40 << 0x20;
            uStack_3b6 = 0;
            local_3c0 = local_488;
            if (uVar33 == 0) {
              uStack_3b8 = 0x20;
              uStack_3b7 = 0;
            }
            else {
              local_2cc = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> local_2cc & 1) == 0; local_2cc = local_2cc + 1) {
                }
              }
              uStack_3b8 = 0x20;
              if (uVar33 != 0) {
                uStack_3b8 = (char)local_2cc;
              }
              uStack_3b6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                     ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                      local_488,0);
              local_2d0 = 0;
              if ((uStack_3b6 | 0xffff0000) != 0) {
                for (; ((uStack_3b6 | 0xffff0000) >> local_2d0 & 1) == 0; local_2d0 = local_2d0 + 1)
                {
                }
              }
              uStack_3b7 = (undefined1)local_2d0;
            }
            auVar11[8] = uStack_3b8;
            auVar11._0_8_ = local_3c0;
            auVar11[9] = uStack_3b7;
            auVar11._10_2_ = uStack_3b6;
            local_460._12_4_ = uStack_3b4;
            local_460._0_12_ = auVar11;
            local_490 = local_3c0;
            uVar33 = auVar11._8_4_;
            uVar17 = uStack_3b6;
          }
          pFVar31 = (pFVar23->ReadTasks).Entries.AllocatorInstance.Data;
          iVar18 = (pFVar23->ReadTasks).Entries.ArrayNum;
          uVar26 = uVar38;
          while( true ) {
            pFVar24 = local_490;
            iVar42 = (int)uVar26;
            bVar32 = (byte)uVar33;
            local_414 = iVar42;
            local_410 = iVar42;
            if ((((local_488 == pFVar31) && (iVar42 == iVar18)) &&
                (local_490 == (FScriptContainerElement *)0x0)) &&
               ((bVar32 == 0 && (local_460[9] == '\0')))) break;
            local_49c = uVar33 & 0xff;
            AddPrerequisite(this,(FTaskID)(local_49c * 0x10 + (local_460._9_4_ & 0xff) + (int)uVar34
                                          ),FVar4);
            auVar14 = local_460;
            uVar17 = uVar17 - 1 & uVar17;
            local_460._10_2_ = uVar17;
            if (uVar17 == 0) {
              if (bVar32 != 0x1f) {
                uVar40 = *(uint *)&(((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                    &pFVar24[0x10].field_0x0)->AllocatorInstance).Data;
                uVar33 = -1 << ((char)local_49c + 1U & 0x1f) & uVar40;
                local_2d8 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> local_2d8 & 1) == 0; local_2d8 = local_2d8 + 1) {
                  }
                }
                bVar32 = 0x20;
                if (uVar33 != 0) {
                  bVar32 = (byte)local_2d8;
                }
                local_460._0_8_ = auVar14._0_8_;
                local_460[8] = bVar32;
                uVar33 = (uint)bVar32;
                if (bVar32 != 0x20) {
                  uVar40 = (1 << (bVar32 & 0x1f)) - 1U & uVar40;
                  uVar27 = (ulonglong)uVar40 - ((ulonglong)(uVar40 >> 1) & 0x5555555555555555);
                  uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
                  uVar17 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                     ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                      local_490,
                                      (uint)(byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) *
                                                   0x101010101010101 >> 0x38));
                  local_460._10_2_ = uVar17;
                  iVar25 = 0;
                  local_2f8 = iVar25;
                  if ((uVar17 | 0xffff0000) != 0) {
                    for (; local_2f8 = iVar25, ((uVar17 | 0xffff0000) >> iVar25 & 1) == 0;
                        iVar25 = iVar25 + 1) {
                    }
                  }
                  goto LAB_14619c44f;
                }
              }
              goto LAB_14619c46e;
            }
            iVar25 = 0;
            local_2d4 = iVar25;
            if ((uVar17 | 0xffff0000) != 0) {
              for (; local_2d4 = iVar25, ((uVar17 | 0xffff0000) >> iVar25 & 1) == 0;
                  iVar25 = iVar25 + 1) {
              }
            }
LAB_14619c44f:
            local_460[9] = (char)iVar25;
            if (0x1f < bVar32) {
LAB_14619c46e:
              uVar26 = (ulonglong)(iVar42 + 1U);
              if ((int)(iVar42 + 1U) < local_418) {
                local_3d0 = local_488 + ((longlong)local_410 + 1) * 0x20;
                uStack_3c6 = 0;
                uVar40 = *(int *)&local_488[((longlong)local_414 * 2 + 3) * 0x10 + 8].field_0x0 << 9
                ;
                uVar33 = *(uint *)&local_3d0[0x10].field_0x0;
                local_44c = CONCAT44(uVar40,(undefined4)local_44c);
                if (uVar33 == 0) {
                  uStack_3c8 = 0x20;
                  uStack_3c7 = 0;
                }
                else {
                  local_2fc = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> local_2fc & 1) == 0; local_2fc = local_2fc + 1) {
                    }
                  }
                  uStack_3c8 = 0x20;
                  if (uVar33 != 0) {
                    uStack_3c8 = (char)local_2fc;
                  }
                  uStack_3c6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                         ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)
                                          local_3d0,0);
                  local_300 = 0;
                  if ((uStack_3c6 | 0xffff0000) != 0) {
                    for (; ((uStack_3c6 | 0xffff0000) >> local_300 & 1) == 0;
                        local_300 = local_300 + 1) {
                    }
                  }
                  uStack_3c7 = (undefined1)local_300;
                }
                auVar10[8] = uStack_3c8;
                auVar10._0_8_ = local_3d0;
                auVar10[9] = uStack_3c7;
                auVar10._10_2_ = uStack_3c6;
                local_460._12_4_ = uStack_3c4;
                local_460._0_12_ = auVar10;
                local_490 = local_3d0;
                uVar33 = auVar10._8_4_;
                uVar34 = (ulonglong)uVar40;
                uVar17 = uStack_3c6;
              }
              else {
                local_328 = 0;
                uStack_320 = 0;
                local_460._12_4_ = uStack_31c;
                local_460._0_12_ = ZEXT812(0);
                local_44c = local_44c & 0xffffffff;
                local_490 = (FScriptContainerElement *)0x0;
                uVar33 = 0;
                uVar17 = 0;
                uVar34 = uVar38;
              }
            }
          }
          local_44c = CONCAT44(local_44c._4_4_,iVar42);
          if ((pFVar23->WriteTask).Index != -1) {
            AddPrerequisite(this,(FTaskID)(pFVar23->WriteTask).Index,FVar4);
          }
          local_2a8.ReadTasks.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a8.ReadTasks.Entries.ArrayNum = 0;
          local_2a8.ReadTasks.Entries.ArrayMax = 0;
          if (pFVar23 != &local_2a8) {
            DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                      ((FEntry *)(pFVar23->ReadTasks).Entries.AllocatorInstance.Data,
                       (pFVar23->ReadTasks).Entries.ArrayNum);
            pFVar31 = (pFVar23->ReadTasks).Entries.AllocatorInstance.Data;
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
            (pFVar23->ReadTasks).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar23->ReadTasks).Entries.ArrayNum = 0;
            (pFVar23->ReadTasks).Entries.ArrayMax = 0;
          }
          DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                    ((FEntry *)0x0,0);
          uVar34 = (ulonglong)(int)local_4e0;
          local_4e4 = local_4e4 & ~(uint)local_390;
          (pFVar23->WriteTask).Index = FVar4.Index;
          uVar33 = local_400->NumBits;
          uVar40 = local_4e4 & *(uint *)(local_400->AllocatorInstance).InlineData[uVar34].Pad;
          while (uVar40 == 0) {
            local_4e8 = local_4e8 + 0x20;
            iVar18 = (int)uVar34;
            local_4e0 = iVar18 + 1;
            uVar34 = (ulonglong)local_4e0;
            uVar40 = uVar33;
            if ((int)(((int)(uVar33 - 1) >> 0x1f & 0x1fU) + (uVar33 - 1)) >> 5 < (int)local_4e0)
            goto LAB_14619c695;
            uVar40 = *(uint *)(local_400->AllocatorInstance).InlineData[(longlong)iVar18 + 1].Pad;
            local_4e4 = 0xffffffff;
          }
          local_390 = CONCAT44(local_390._4_4_,-uVar40 & uVar40);
          uVar34 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
          lVar30 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_2f4 = (int)lVar30;
          uVar40 = local_2f4 + -1 + local_4e8;
          if ((int)uVar33 < (int)uVar40) {
            uVar40 = uVar33;
          }
LAB_14619c695:
          uVar34 = (ulonglong)uVar40;
          iVar18 = (int)local_498;
        } while ((int)uVar40 < local_400->NumBits);
      }
      if ((((ulonglong)param_2[1].Object & 2) != 0) && (local_4c0.Index != -1)) {
        AddPrerequisite(this,local_4c0,FVar4);
      }
      if (local_480.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data);
      }
      FEntityAllocationIterator::operator++(&local_290);
      bVar16 = FEntityAllocationIterator::operator!=(&local_290,&local_248);
      local_4c0.Index = FVar4.Index;
    } while (bVar16);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_248);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_290);
  uVar33 = *(uint *)&param_1->DebugName;
  if (uVar33 != 0xffffffff) {
    iVar18 = (this->Tasks).ArrayNum;
    if ((int)uVar33 < iVar18) {
      uVar39 = ~uVar33 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      iVar18 = (*pcVar9)();
      return (FTaskID)iVar18;
    }
    if (((uint)*(ushort *)
                ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x88 + 0x80) +
         *(int *)&param_1->DebugName != iVar18 + -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ParentTaskID || ParentTaskID.Index + Tasks[ParentTaskID.Index].NumChildren == Tasks.Num()-1"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0x143,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      iVar18 = (*pcVar9)();
      return (FTaskID)iVar18;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&local_388->TypeIndex);
  return (FTaskID)(int)param_1;
}

// EndConstruction @ 1461a1510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::EndConstruction(FEntitySystemScheduler *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>_>
  *this_00;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong local_res8;
  FString local_38;
  
  uVar14 = 0;
  uVar3 = this->EntityManager->SystemSerialNumber;
  uVar6 = 0;
  if (this->SystemSerialIncrement <= uVar3) {
    uVar6 = (int)uVar3 - this->SystemSerialIncrement;
  }
  this->SystemSerialIncrement = uVar6;
  piVar1 = &(this->Tasks).ArrayMax;
  iVar7 = (this->Tasks).ArrayNum;
  if (*piVar1 != iVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,iVar7,(ForAnyElementType *)this,iVar7,piVar1);
  }
  this_00 = &this->AllPrerequisites;
  bVar5 = 1 < *(int *)&(this->AllPrerequisites).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AllPrerequisites).field_0x8);
  puVar2 = &(this->AllPrerequisites).field_0xc;
  *(undefined4 *)&(this->AllPrerequisites).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->AllPrerequisites).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllPrerequisites).field_0x34 = 0;
  iVar7 = *(int *)&(this->AllPrerequisites).field_0x2c;
  *(undefined4 *)&(this->AllPrerequisites).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->AllPrerequisites).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllPrerequisites).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->AllPrerequisites).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>,FDefaultSetAllocator>
              *)this_00);
  }
  bVar5 = 1 < *(int *)&(this->ComponentDepedenciesByAllocation).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>,FDefaultSetAllocator>
                      *)&this->ComponentDepedenciesByAllocation);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ComponentDepedenciesByAllocation,0,
                    *(int *)&(this->ComponentDepedenciesByAllocation).field_0x8);
  puVar2 = &(this->ComponentDepedenciesByAllocation).field_0xc;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->ComponentDepedenciesByAllocation,0,(int *)puVar2
              );
  }
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x34 = 0;
  iVar7 = *(int *)&(this->ComponentDepedenciesByAllocation).field_0x2c;
  *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ComponentDepedenciesByAllocation).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ComponentDepedenciesByAllocation).field_0x48 = 1;
    TSet<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies>,TDefaultMapHashableKeyFuncs<TTuple<int,UE::MovieScene::FComponentTypeID>,UE::MovieScene::FEntitySystemScheduler::FComponentDependencies,0>,FDefaultSetAllocator>
              *)&this->ComponentDepedenciesByAllocation);
  }
  FTaskPrerequisiteCache::Reset(&this->CurrentSubsequents);
  iVar7 = (this->Tasks).ArrayNum;
  this->CurrentPrerequisites = (FTaskPrerequisiteCache *)0x0;
  if (0 < iVar7) {
    local_res8 = 0;
    do {
      uVar13 = 0;
      uVar16 = (uint)uVar14;
      uVar6 = 0;
      if ((int)uVar16 < iVar7) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Tasks).AllocatorInstance.Data;
      if (this->ThreadingModel == NoThreading) {
        *(undefined4 *)(pFVar11 + local_res8 + 0x74) = *(undefined4 *)(pFVar11 + local_res8 + 0x70);
      }
      else {
        LOCK();
        *(undefined4 *)(pFVar11 + local_res8 + 0x74) = *(undefined4 *)(pFVar11 + local_res8 + 0x70);
        UNLOCK();
      }
      if (this->ThreadingModel == NoThreading) {
        *(uint *)(pFVar11 + local_res8 + 0x78) = (uint)*(ushort *)(pFVar11 + local_res8 + 0x80);
      }
      else {
        LOCK();
        *(uint *)(pFVar11 + local_res8 + 0x78) = (uint)*(ushort *)(pFVar11 + local_res8 + 0x80);
        UNLOCK();
      }
      if (*(int *)(pFVar11 + local_res8 + 0x70) == 0) {
        iVar7 = (this->InitialTasks).Entries.ArrayNum;
        pFVar11 = (this->InitialTasks).Entries.AllocatorInstance.Data;
        uVar6 = (uint)(uVar14 >> 9);
        lVar12 = 0;
        uVar15 = uVar16 + uVar6 * -0x200;
        if (0 < iVar7) {
          pFVar9 = pFVar11 + 0x18;
          do {
            if (*(uint *)pFVar9 == uVar6) {
              TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
              ::SetBit((TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)(pFVar11 + (longlong)(int)uVar13 * 0x20),uVar15);
              goto LAB_1461a1807;
            }
            if (uVar6 <= *(uint *)pFVar9) {
              if (iVar7 == (this->InitialTasks).Entries.ArrayMax) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,(ForAnyElementType *)&this->InitialTasks,
                                   &(this->InitialTasks).Entries.ArrayMax);
                (this->InitialTasks).Entries.ArrayNum = iVar7;
              }
              iVar7 = (this->InitialTasks).Entries.ArrayNum;
              pFVar11 = (this->InitialTasks).Entries.AllocatorInstance.Data + lVar12 * 0x20;
              (this->InitialTasks).Entries.ArrayNum = iVar7 + 1;
              memmove(pFVar11 + 0x20,pFVar11,(longlong)(int)(iVar7 - uVar13) << 5);
              uVar8 = 0;
              if ((int)uVar13 < (this->InitialTasks).Entries.ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                         *)((this->InitialTasks).Entries.AllocatorInstance.Data + lVar12 * 0x20);
              (pTVar10->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pTVar10->Buckets).Storage.ArrayNum = 0;
              (pTVar10->Buckets).Storage.ArrayMax = 0;
              pTVar10->BucketHash = 0;
              *(uint *)&pTVar10[1].Buckets.Storage.AllocatorInstance.Data = uVar6;
              TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
              ::SetBit(pTVar10,uVar15);
              goto LAB_1461a1807;
            }
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 1;
            pFVar9 = pFVar9 + 0x20;
          } while (lVar12 < iVar7);
        }
        iVar7 = (this->InitialTasks).Entries.ArrayNum;
        piVar1 = &(this->InitialTasks).Entries.ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)&this->InitialTasks,piVar1);
        }
        (this->InitialTasks).Entries.ArrayNum = iVar7 + 1;
        pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)((this->InitialTasks).Entries.AllocatorInstance.Data + (longlong)iVar7 * 0x20);
        (pTVar10->Buckets).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar10->Buckets).Storage.ArrayNum = 0;
        (pTVar10->Buckets).Storage.ArrayMax = 0;
        pTVar10->BucketHash = 0;
        *(uint *)&pTVar10[1].Buckets.Storage.AllocatorInstance.Data = uVar6;
        TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
        ::SetBit(pTVar10,uVar15);
      }
LAB_1461a1807:
      iVar7 = (this->Tasks).ArrayNum;
      local_res8 = local_res8 + 0x88;
      uVar14 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < iVar7);
  }
  if (GIsAutomationTesting != false) {
    ShuffleTasks(this);
  }
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    ToString(this,&local_38);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndSystem @ 1461a1990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::EndSystem(FEntitySystemScheduler *this,ushort param_1)

{
  return;
}

// ExecuteTasks @ 1461a4920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntitySystemScheduler::ExecuteTasks(FEntitySystemScheduler *this)

{
  atomic<unsigned_int> *paVar1;
  ulong64 *puVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  FIterator FVar8;
  FIterator FVar9;
  undefined6 uVar10;
  EEntityThreadingModel EVar11;
  bool bVar12;
  bool bVar13;
  ushort uVar14;
  uint uVar15;
  FEntityAllocationWriteContext *pFVar16;
  FEvent *pFVar17;
  FTaskBase *this_00;
  FScheduledTask *this_01;
  int iVar18;
  ulonglong uVar19;
  FEntry *pFVar20;
  FEntry *this_02;
  uint uVar21;
  int iVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  FTaskExecutionFlags local_res10;
  FTaskExecutionFlags local_res18;
  int local_128;
  FIterator local_118;
  FEntry *local_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  ushort uStack_e6;
  undefined4 uStack_e4;
  FIterator local_e0;
  FEntry *local_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  ushort uStack_ae;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FEntitySystemScheduler *local_60;
  uint uStack_58;
  undefined4 uStack_54;
  FEntityAllocationWriteContext local_50 [2];
  
  if ((this->Tasks).ArrayNum != 0) {
    EVar11 = FEntityManager::GetThreadingModel(this->EntityManager);
    iVar4 = (this->Tasks).ArrayNum;
    if (EVar11 == NoThreading) {
      iVar22 = (this->NumTasksRemaining).Payload;
      (this->NumTasksRemaining).Payload = iVar4;
    }
    else {
      LOCK();
      iVar22 = (this->NumTasksRemaining).Payload;
      (this->NumTasksRemaining).Payload = iVar4;
      UNLOCK();
    }
    if ((iVar22 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PreviousNumRemaining == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0x20d,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this->ThreadingModel = EVar11;
    pFVar16 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                        (local_50,this->EntityManager);
    EVar11 = this->ThreadingModel;
    (this->WriteContextBase).SystemSerial = pFVar16->SystemSerial;
    if (EVar11 == NoThreading) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId537,"Run Scheduled Tasks",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                   ,0x219);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId537);
      }
      MovieScene::begin(&local_e0,&this->InitialTasks);
      pFVar20 = (FEntry *)(this->InitialTasks).Entries.AllocatorInstance.Data;
      iVar4 = (this->InitialTasks).Entries.ArrayNum;
      uVar26 = (uint)local_e0.BucketIt.CurrentBucket;
      uVar24 = (uint)local_e0.BucketIt.BucketBitIndex;
      this_02 = (FEntry *)local_e0.BucketIt.BitSet;
      iVar22 = local_e0.EntryIndex;
      while ((((cVar23 = (char)uVar24, local_e0.Entries != pFVar20 || (iVar22 != iVar4)) ||
              (this_02 != (FEntry *)0x0)) ||
             ((cVar23 != '\0' || (local_e0.BucketIt.IndexWithinBucket != '\0'))))) {
        uVar21 = (uVar24 & 0xff) * 0x10 +
                 (local_e0.BucketIt._9_4_ & 0xff) + local_e0.CurrentOffsetInBits;
        uVar15 = 0;
        if ((int)uVar21 < (this->Tasks).ArrayNum) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10 = (FTaskExecutionFlags)((byte)local_res10 | 1);
        FScheduledTask::Run((FScheduledTask *)
                            ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x88),
                            this,local_res10);
        FVar8 = local_e0.BucketIt;
        uVar14 = (ushort)uVar26 - 1 & (ushort)uVar26;
        uVar26 = (uint)uVar14;
        local_e0.BucketIt.CurrentBucket = uVar14;
        FVar9 = local_e0.BucketIt;
        if (uVar14 == 0) {
          local_e0.BucketIt.BitSet = FVar8.BitSet;
          local_e0.BucketIt._10_6_ = FVar9._10_6_;
          uVar10 = local_e0.BucketIt._10_6_;
          if (cVar23 == '\x1f') {
            local_e0.BucketIt.BucketBitIndex = ' ';
            local_e0.BucketIt.IndexWithinBucket = '\0';
            uVar24 = 0x20;
          }
          else {
            uVar15 = (this_02->Bits).BucketHash;
            uVar21 = -1 << (cVar23 + 1U & 0x1f) & uVar15;
            local_84 = 0;
            if (uVar21 != 0) {
              for (; (uVar21 >> local_84 & 1) == 0; local_84 = local_84 + 1) {
              }
            }
            uVar24 = 0x20;
            if (uVar21 != 0) {
              uVar24 = local_84 & 0xff;
            }
            local_e0.BucketIt.BucketBitIndex = (uchar)uVar24;
            local_e0.BucketIt._9_7_ = FVar9._9_7_;
            if (local_e0.BucketIt.BucketBitIndex != 0x20) {
              uVar15 = (1 << (local_e0.BucketIt.BucketBitIndex & 0x1f)) - 1U & uVar15;
              uVar19 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
              uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
              uVar14 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                 ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)this_02,
                                  (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) *
                                               0x101010101010101 >> 0x38));
              uVar26 = (uint)uVar14;
              local_e0.BucketIt.CurrentBucket = uVar14;
              iVar18 = 0;
              local_80 = iVar18;
              if ((uVar26 | 0xffff0000) != 0) {
                for (; local_80 = iVar18, ((uVar26 | 0xffff0000) >> iVar18 & 1) == 0;
                    iVar18 = iVar18 + 1) {
                }
              }
              goto LAB_1461a4c2d;
            }
            local_e0.BucketIt.IndexWithinBucket = '\0';
            local_e0.BucketIt = (FIterator)CONCAT610(uVar10,local_e0.BucketIt._0_10_);
          }
        }
        else {
          iVar18 = 0;
          local_88 = iVar18;
          if ((uVar26 | 0xffff0000) != 0) {
            for (; local_88 = iVar18, ((uVar26 | 0xffff0000) >> iVar18 & 1) == 0;
                iVar18 = iVar18 + 1) {
            }
          }
LAB_1461a4c2d:
          local_e0.BucketIt.IndexWithinBucket = (uchar)iVar18;
        }
        if (0x1f < (byte)uVar24) {
          iVar22 = iVar22 + 1;
          local_e0.EntryIndex = iVar22;
          if (iVar22 < local_e0.NumEntries) {
            uStack_e6 = 0;
            local_e0.CurrentOffsetInBits = local_e0.Entries[iVar22].Offset << 9;
            local_f0 = local_e0.Entries + iVar22;
            uVar24 = (local_f0->Bits).BucketHash;
            if (uVar24 == 0) {
              uStack_e8 = 0x20;
              uStack_e7 = 0;
            }
            else {
              local_7c = 0;
              if (uVar24 != 0) {
                for (; (uVar24 >> local_7c & 1) == 0; local_7c = local_7c + 1) {
                }
              }
              uStack_e8 = 0x20;
              if (uVar24 != 0) {
                uStack_e8 = (char)local_7c;
              }
              uStack_e6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                    ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_f0
                                     ,0);
              local_78 = 0;
              if ((uStack_e6 | 0xffff0000) != 0) {
                for (; ((uStack_e6 | 0xffff0000) >> local_78 & 1) == 0; local_78 = local_78 + 1) {
                }
              }
              uStack_e7 = (undefined1)local_78;
            }
            auVar6[8] = uStack_e8;
            auVar6._0_8_ = local_f0;
            auVar6[9] = uStack_e7;
            auVar6._10_2_ = uStack_e6;
            local_e0.BucketIt._12_4_ = uStack_e4;
            local_e0.BucketIt.BitSet = &local_f0->Bits;
            local_e0.BucketIt.BucketBitIndex = uStack_e8;
            local_e0.BucketIt.IndexWithinBucket = uStack_e7;
            local_e0.BucketIt.CurrentBucket = uStack_e6;
            uVar24 = auVar6._8_4_;
            uVar26 = (uint)uStack_e6;
            this_02 = local_f0;
          }
          else {
            local_a8 = 0;
            uStack_a0 = 0;
            local_e0.BucketIt._12_4_ = uStack_9c;
            local_e0.BucketIt.BitSet =
                 (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)0x0;
            local_e0.BucketIt.BucketBitIndex = 0;
            local_e0.BucketIt.IndexWithinBucket = 0;
            local_e0.BucketIt.CurrentBucket = 0;
            local_e0.CurrentOffsetInBits = 0;
            this_02 = (FEntry *)0x0;
            uVar24 = 0;
            uVar26 = 0;
          }
        }
      }
      if (((this->NumTasksRemaining).Payload != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumTasksRemaining.Load(ThreadingModel) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                              ,0x21f,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar2 = &this->EntityManager->SystemSerialNumber;
      *puVar2 = *puVar2 + (ulonglong)this->SystemSerialIncrement;
    }
    else {
      if ((this->GameThreadSignal != (FEvent *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!GameThreadSignal",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                              ,0x229,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      this->GameThreadSignal = pFVar17;
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId557,"Dispatch Scheduled Tasks",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                   ,0x22d);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
      }
      local_128 = 0;
      MovieScene::begin(&local_118,&this->InitialTasks);
      local_f0 = (FEntry *)(this->InitialTasks).Entries.AllocatorInstance.Data;
      iVar4 = (this->InitialTasks).Entries.ArrayNum;
      uVar26 = (uint)local_118.BucketIt.CurrentBucket;
      uVar24 = (uint)local_118.BucketIt.BucketBitIndex;
      pFVar20 = (FEntry *)local_118.BucketIt.BitSet;
      while( true ) {
        cVar23 = (char)uVar24;
        if ((((local_118.Entries == local_f0) && (local_118.EntryIndex == iVar4)) &&
            (pFVar20 == (FEntry *)0x0)) &&
           ((cVar23 == '\0' && (local_118.BucketIt.IndexWithinBucket == '\0')))) break;
        uVar25 = (uVar24 & 0xff) * 0x10 +
                 (local_118.BucketIt._9_4_ & 0xff) + local_118.CurrentOffsetInBits;
        uVar21 = ~uVar25 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar25 < (this->Tasks).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((byte)(this->Tasks).AllocatorInstance.Data[(longlong)(int)uVar25 * 0x88 + 0x83] & 1) ==
            0) {
          bVar13 = FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::IsEmpty
                             ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                              &this->GameThreadTaskList);
          if (bVar13) {
            uVar15 = 0;
            if ((int)uVar25 < (this->Tasks).ArrayNum) {
              uVar15 = uVar21;
            }
            goto joined_r0x0001461a4f53;
          }
          local_60 = this;
          uStack_58 = uVar25;
          this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&Tasks::Private::SmallTaskAllocator);
          if (this_00 == (FTaskBase *)0x0) {
            Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
          }
          else {
            Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
            this_00->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::`54'::<lambda_1>,void,void>
                  ::_vftable_;
            Tasks::Private::FTaskBase::Init(this_00,L"MovieSceneTask",High,None,None);
            this_00[1]._padding_ = (longlong)local_60;
            this_00[1]._padding_ = CONCAT44(uStack_54,uStack_58);
            this_00->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTask<`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::`54'::<lambda_1>_>
                  ::_vftable_;
            Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
            LOCK();
            paVar1 = &this_00->RefCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (**(code **)this_00->_padding_)(this_00,1);
            }
          }
        }
        else {
          uVar15 = 0;
          if ((int)uVar25 < (this->Tasks).ArrayNum) {
            uVar15 = uVar21;
          }
joined_r0x0001461a4f53:
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::Push
                    ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                     &this->GameThreadTaskList,
                     (FScheduledTask *)
                     ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x88));
        }
        FVar8 = local_118.BucketIt;
        local_128 = local_128 + 1;
        uVar14 = (ushort)uVar26 - 1 & (ushort)uVar26;
        uVar26 = (uint)uVar14;
        local_118.BucketIt.CurrentBucket = uVar14;
        FVar9 = local_118.BucketIt;
        if (uVar14 == 0) {
          local_118.BucketIt.BitSet = FVar8.BitSet;
          local_118.BucketIt._10_6_ = FVar9._10_6_;
          uVar10 = local_118.BucketIt._10_6_;
          if (cVar23 == '\x1f') {
            local_118.BucketIt.BucketBitIndex = ' ';
            local_118.BucketIt.IndexWithinBucket = '\0';
            uVar24 = 0x20;
          }
          else {
            uVar15 = (pFVar20->Bits).BucketHash;
            uVar21 = -1 << (cVar23 + 1U & 0x1f) & uVar15;
            local_70 = 0;
            if (uVar21 != 0) {
              for (; (uVar21 >> local_70 & 1) == 0; local_70 = local_70 + 1) {
              }
            }
            uVar24 = 0x20;
            if (uVar21 != 0) {
              uVar24 = local_70 & 0xff;
            }
            local_118.BucketIt.BucketBitIndex = (uchar)uVar24;
            local_118.BucketIt._9_7_ = FVar9._9_7_;
            if (local_118.BucketIt.BucketBitIndex != 0x20) {
              uVar15 = (1 << (local_118.BucketIt.BucketBitIndex & 0x1f)) - 1U & uVar15;
              uVar19 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
              uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
              uVar14 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                 ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)pFVar20,
                                  (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) *
                                               0x101010101010101 >> 0x38));
              uVar26 = (uint)uVar14;
              local_118.BucketIt.CurrentBucket = uVar14;
              iVar22 = 0;
              local_6c = iVar22;
              if ((uVar26 | 0xffff0000) != 0) {
                for (; local_6c = iVar22, ((uVar26 | 0xffff0000) >> iVar22 & 1) == 0;
                    iVar22 = iVar22 + 1) {
                }
              }
              goto LAB_1461a515a;
            }
            local_118.BucketIt.IndexWithinBucket = '\0';
            local_118.BucketIt = (FIterator)CONCAT610(uVar10,local_118.BucketIt._0_10_);
          }
        }
        else {
          iVar22 = 0;
          local_74 = iVar22;
          if ((uVar26 | 0xffff0000) != 0) {
            for (; local_74 = iVar22, ((uVar26 | 0xffff0000) >> iVar22 & 1) == 0;
                iVar22 = iVar22 + 1) {
            }
          }
LAB_1461a515a:
          local_118.BucketIt.IndexWithinBucket = (uchar)iVar22;
        }
        if (0x1f < (byte)uVar24) {
          local_118.EntryIndex = local_118.EntryIndex + 1;
          if (local_118.EntryIndex < local_118.NumEntries) {
            uStack_ae = 0;
            local_118.CurrentOffsetInBits = local_118.Entries[local_118.EntryIndex].Offset << 9;
            local_b8 = local_118.Entries + local_118.EntryIndex;
            uVar24 = (local_b8->Bits).BucketHash;
            if (uVar24 == 0) {
              uStack_b0 = 0x20;
              uStack_af = 0;
            }
            else {
              local_68 = 0;
              if (uVar24 != 0) {
                for (; (uVar24 >> local_68 & 1) == 0; local_68 = local_68 + 1) {
                }
              }
              uStack_b0 = 0x20;
              if (uVar24 != 0) {
                uStack_b0 = (char)local_68;
              }
              uStack_ae = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                    ((TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)local_b8
                                     ,0);
              local_64 = 0;
              if ((uStack_ae | 0xffff0000) != 0) {
                for (; ((uStack_ae | 0xffff0000) >> local_64 & 1) == 0; local_64 = local_64 + 1) {
                }
              }
              uStack_af = (undefined1)local_64;
            }
            auVar7[8] = uStack_b0;
            auVar7._0_8_ = local_b8;
            auVar7[9] = uStack_af;
            auVar7._10_2_ = uStack_ae;
            local_118.BucketIt._12_4_ = uStack_ac;
            local_118.BucketIt.BitSet = &local_b8->Bits;
            local_118.BucketIt.BucketBitIndex = uStack_b0;
            local_118.BucketIt.IndexWithinBucket = uStack_af;
            local_118.BucketIt.CurrentBucket = uStack_ae;
            uVar24 = auVar7._8_4_;
            uVar26 = (uint)uStack_ae;
            pFVar20 = local_b8;
          }
          else {
            local_98 = 0;
            uStack_90 = 0;
            local_118.BucketIt._12_4_ = uStack_8c;
            local_118.BucketIt.BitSet =
                 (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)0x0;
            local_118.BucketIt.BucketBitIndex = 0;
            local_118.BucketIt.IndexWithinBucket = 0;
            local_118.BucketIt.CurrentBucket = 0;
            local_118.CurrentOffsetInBits = 0;
            pFVar20 = (FEntry *)0x0;
            uVar24 = 0;
            uVar26 = 0;
          }
        }
      }
      if ((local_128 == 0) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7429933679914254919>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                              ,0x247,"NumInitialTasks != 0"), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId586,"Wait For Scheduled Tasks",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                   ,0x24a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId586);
      }
      while( true ) {
        this_01 = FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::Pop
                            ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                             &this->GameThreadTaskList);
        while (this_01 != (FScheduledTask *)0x0) {
          local_res18 = (FTaskExecutionFlags)((byte)local_res18 | 1);
          FScheduledTask::Run(this_01,this,local_res18);
          this_01 = FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::Pop
                              ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                               &this->GameThreadTaskList);
        }
        iVar4 = (this->NumTasksRemaining).Payload;
        if (iVar4 == -1) goto LAB_1461a5365;
        if (iVar4 == 0) break;
        (**(code **)(this->GameThreadSignal->_padding_ + 0x20))(this->GameThreadSignal,0xffffffff,0)
        ;
      }
      do {
      } while ((this->NumTasksRemaining).Payload != -1);
LAB_1461a5365:
      if (((this->NumTasksRemaining).Payload != -1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumTasksRemaining.Load(ThreadingModel) == -1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                              ,0x26e,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar2 = &this->EntityManager->SystemSerialNumber;
      *puVar2 = *puVar2 + (ulonglong)this->SystemSerialIncrement;
      if (this->ThreadingModel == NoThreading) {
        (this->NumTasksRemaining).Payload = 0;
      }
      else {
        LOCK();
        (this->NumTasksRemaining).Payload = 0;
        UNLOCK();
      }
      if ((this->GameThreadSignal == (FEvent *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("GameThreadSignal",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                              ,0x275,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FGenericPlatformProcess::ReturnSynchEventToPool(this->GameThreadSignal);
      this->GameThreadSignal = (FEvent *)0x0;
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// HasAnyTasksToPropagateDownstream @ 1461b54a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntitySystemScheduler::HasAnyTasksToPropagateDownstream
          (FEntitySystemScheduler *this)

{
  uint uVar1;
  
  uVar1 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::CountSetBits(&(this->CurrentSubsequents).SystemWidePrerequisites);
  if (uVar1 == 0) {
    uVar1 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::CountSetBits(&(this->CurrentSubsequents).ForcedSystemWidePrerequisites);
    if (uVar1 == 0) {
      return false;
    }
  }
  return true;
}

// IsCustomSchedulingEnabled @ 1461bba90

bool __cdecl UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled(void)

{
  return GSequencerCustomTaskScheduling;
}

// OnAllTasksFinished @ 1461bf240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::OnAllTasksFinished(FEntitySystemScheduler *this)

{
  if (this->ThreadingModel != NoThreading) {
    (**(code **)(this->GameThreadSignal->_padding_ + 0x10))();
    if (this->ThreadingModel == NoThreading) {
      (this->NumTasksRemaining).Payload = (this->NumTasksRemaining).Payload + -1;
      return;
    }
    LOCK();
    (this->NumTasksRemaining).Payload = (this->NumTasksRemaining).Payload + -1;
    UNLOCK();
  }
  return;
}

// PrerequisiteCompleted @ 1461c3930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted
          (FEntitySystemScheduler *this,FScheduledTask *param_1,int *param_2)

{
  FEntitySystemMaybeAtomicInt32 *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  int iVar6;
  byte local_res8 [8];
  byte local_res10;
  
  if (((this->ThreadingModel != NoThreading) && (this->GameThreadSignal == (FEvent *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ThreadingModel == EEntityThreadingModel::NoThreading) || (GameThreadSignal != nullptr)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                         ,0x2a7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->ThreadingModel == NoThreading) {
    iVar6 = (param_1->WaitCount).Payload;
    (param_1->WaitCount).Payload = iVar6 + -1;
  }
  else {
    LOCK();
    pFVar1 = &param_1->WaitCount;
    iVar6 = pFVar1->Payload;
    pFVar1->Payload = pFVar1->Payload + -1;
    UNLOCK();
  }
  if (iVar6 < 2) {
    if (0 < iVar6) {
      if (this->ThreadingModel == NoThreading) {
        FScheduledTask::Run(param_1,this,(FTaskExecutionFlags)(local_res10 | 1));
        return;
      }
      if (param_1->bForceInline != '\0') {
        FScheduledTask::Run(param_1,this,(FTaskExecutionFlags)(local_res8[0] & 0xfe));
        return;
      }
      if (param_1->bForceGameThread == 0) {
        if ((param_2 != (int *)0x0) && (*param_2 == -1)) {
          *param_2 = (int)(((longlong)param_1 - (longlong)(this->Tasks).AllocatorInstance.Data) /
                          0x88);
          return;
        }
        bVar5 = FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::IsEmpty
                          ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                           &this->GameThreadTaskList);
        if (!bVar5) {
          this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&Tasks::Private::SmallTaskAllocator);
          if (this_00 == (FTaskBase *)0x0) {
            Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
            return;
          }
          Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
          this_00->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::`40'::<lambda_2>,void,void>
                ::_vftable_;
          Tasks::Private::FTaskBase::Init(this_00,L"MovieSceneTask",High,None,None);
          this_00[1]._padding_ = (longlong)this;
          this_00[1]._padding_ = (longlong)param_1;
          this_00->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTask<`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::`40'::<lambda_2>_>
                ::_vftable_;
          Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
          LOCK();
          paVar2 = &this_00->RefCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 != (atomic<unsigned_int>)0x1) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001461c3b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)this_00->_padding_)(this_00,1);
          return;
        }
      }
      FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1>::Push
                ((FLockFreePointerFIFOBase<UE::MovieScene::FScheduledTask,64,1> *)
                 &this->GameThreadTaskList,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001461c3a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->GameThreadSignal->_padding_ + 0x10))();
      return;
    }
    `UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::__l15::<lambda_1>::operator()
              (local_res8);
    if (this->GameThreadSignal != (FEvent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c39d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->GameThreadSignal->_padding_ + 0x10))();
      return;
    }
  }
  return;
}

// PrerequisiteCompleted @ 1461c3b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted
          (FEntitySystemScheduler *this,FTaskID param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1.Index < (this->Tasks).ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PrerequisiteCompleted
            (this,(FScheduledTask *)
                  ((this->Tasks).AllocatorInstance.Data + (longlong)param_1.Index * 0x88),param_2);
  return;
}

// PropagatePrerequisite @ 1461c3bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite
          (FEntitySystemScheduler *this,ushort param_1)

{
  FTaskPrerequisiteCache *this_00;
  ushort local_res10 [12];
  
  local_res10[0] = param_1;
  this_00 = TMapBase<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>_>
            ::FindOrAddImpl<unsigned_short_const_&>
                      ((TMapBase<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FTaskPrerequisiteCache,0>_>
                        *)&this->AllPrerequisites,(uint)param_1,local_res10);
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  ::operator|=(&this_00->SystemWidePrerequisites,&(this->CurrentSubsequents).SystemWidePrerequisites
              );
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  ::operator|=(&this_00->ForcedSystemWidePrerequisites,
               &(this->CurrentSubsequents).ForcedSystemWidePrerequisites);
  return;
}

// ShuffleTasks @ 1461d3f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntitySystemScheduler::ShuffleTasks(FEntitySystemScheduler *this)

{
  ushort uVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScheduledTask *pFVar4;
  undefined4 uVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  ForAnyElementType local_78;
  int local_70;
  int iStack_6c;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58 [2];
  
  uVar19 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  iStack_6c = 0;
  if (0 < (this->Tasks).ArrayNum) {
    do {
      if (local_70 == iStack_6c) {
        local_70 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_78,&iStack_6c);
      }
      iVar12 = local_70 + 1;
      *(uint *)(local_78.Data + (longlong)local_70 * 4) = uVar19;
      uVar21 = 0;
      if ((int)uVar19 < (this->Tasks).ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      local_70 = iVar12;
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = uVar19 + 1 +
               (uint)*(ushort *)
                      ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x88 + 0x80);
    } while ((int)uVar19 < (this->Tasks).ArrayNum);
  }
  FVar7.Data = local_78.Data;
  fVar6 = __real_38000100;
  iVar12 = local_70 + -1;
  iVar16 = 0;
  if (0 < iVar12) {
    lVar20 = 0;
    iVar14 = local_70;
    do {
      if (iVar14 < 1) {
        iVar9 = 0;
      }
      else {
        lVar22 = (longlong)iVar14 + -1;
        uVar19 = rand();
        lVar13 = (longlong)(int)((float)(uVar19 & 0x7fff) * (float)(longlong)iVar14 * fVar6);
        if (lVar13 < lVar22) {
          lVar22 = lVar13;
        }
        iVar9 = (int)lVar22;
      }
      iVar9 = iVar9 + iVar16;
      if (iVar9 != iVar16) {
        uVar2 = *(undefined4 *)(FVar7.Data + lVar20 * 4);
        *(undefined4 *)(FVar7.Data + lVar20 * 4) = *(undefined4 *)(FVar7.Data + (longlong)iVar9 * 4)
        ;
        *(undefined4 *)(FVar7.Data + (longlong)iVar9 * 4) = uVar2;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + -1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar12);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_68,(this->Tasks).ArrayNum,Default);
  uVar19 = 0;
  uVar21 = 0;
  if (0 < local_70) {
    local_res10 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar19 < local_70) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)(local_78.Data + local_res10);
      uVar15 = 0;
      if ((int)uVar21 < local_68.ArrayNum) {
        uVar15 = ~uVar21 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = uVar21 + 1;
      lVar20 = (longlong)(int)uVar21;
      *(uint *)(local_68.AllocatorInstance.Data + lVar20 * 4) = uVar10;
      uVar11 = 0;
      if ((int)uVar10 < (this->Tasks).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(ushort *)
               ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x88 + 0x80);
      uVar21 = uVar21 + 1 + (uint)uVar1;
      uVar17 = (ulonglong)(uint)uVar1;
      if (uVar1 != 0) {
        lVar20 = lVar20 * 4;
        iVar12 = (uVar10 + 1) - uVar15;
        do {
          lVar20 = lVar20 + 4;
          uVar10 = 0;
          if ((int)uVar15 < local_68.ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar16 = iVar12 + uVar15;
          uVar15 = uVar15 + 1;
          *(int *)(local_68.AllocatorInstance.Data + lVar20) = iVar16;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      uVar19 = uVar19 + 1;
      local_res10 = local_res10 + 4;
    } while ((int)uVar19 < local_70);
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(local_58,(this->Tasks).ArrayNum,Default);
  uVar19 = 0;
  if (0 < local_68.ArrayNum) {
    lVar20 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar19 < local_68.ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = *(uint *)(local_68.AllocatorInstance.Data + lVar20);
      uVar10 = 0;
      if ((int)uVar21 < local_58[0].ArrayNum) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = lVar20 + 4;
      *(uint *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar21 * 4) = uVar19;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < local_68.ArrayNum);
  }
  iVar12 = (this->Tasks).ArrayNum;
  local_res18 = local_58;
  uVar19 = 0;
  if (0 < iVar12) {
    lVar20 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar19 < iVar12) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar18 = (this->Tasks).AllocatorInstance.Data + lVar20;
      uVar21 = *(uint *)(pFVar18 + 0x7c);
      if (uVar21 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar21 < local_58[0].ArrayNum) {
          uVar10 = ~uVar21 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(pFVar18 + 0x7c) =
             *(undefined4 *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
      }
      `UE::MovieScene::FEntitySystemScheduler::ShuffleTasks'::__l2::<lambda_1>::operator()
                (&local_res18,
                 (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *)pFVar18);
      iVar12 = (this->Tasks).ArrayNum;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x88;
    } while ((int)uVar19 < iVar12);
  }
  `UE::MovieScene::FEntitySystemScheduler::ShuffleTasks'::__l2::<lambda_1>::operator()
            (&local_res18,&this->InitialTasks);
  pFVar4 = (FScheduledTask *)(this->Tasks).AllocatorInstance.Data;
  uVar5 = (this->Tasks).ArrayNum;
  uVar19 = 0;
  (this->Tasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tasks).ArrayNum = 0;
  (this->Tasks).ArrayMax = 0;
  if (0 < (int)uVar5) {
    lVar20 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar19 < local_68.ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = *(uint *)(local_68.AllocatorInstance.Data + lVar20);
      uVar10 = 0;
      if ((int)uVar21 < (int)uVar5) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = (this->Tasks).ArrayNum;
      if (iVar12 == (this->Tasks).ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,(ForAnyElementType *)this,&(this->Tasks).ArrayMax);
      }
      (this->Tasks).ArrayNum = iVar12 + 1;
      FScheduledTask::FScheduledTask
                ((FScheduledTask *)((this->Tasks).AllocatorInstance.Data + (longlong)iVar12 * 0x88),
                 pFVar4 + (int)uVar21);
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 4;
    } while ((int)uVar19 < (int)uVar5);
  }
  DestructItems<UE::MovieScene::FScheduledTask,int>(pFVar4,uVar5);
  if (pFVar4 != (FScheduledTask *)0x0) {
    FMemory::Free(pFVar4);
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// ToString @ 1461d6090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::FEntitySystemScheduler::ToString
          (FEntitySystemScheduler *this,FString *__return_storage_ptr__)

{
  uint *puVar1;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *this_00;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FColor FVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  FString *pFVar12;
  FLinearColor *this_01;
  undefined4 extraout_var;
  undefined1 uVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *this_02;
  longlong lVar19;
  int iVar20;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *pTVar21;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *pTVar22;
  undefined1 auStack_a48 [32];
  FScriptContainerElement *local_a28;
  FScriptContainerElement *local_a20;
  FScriptContainerElement *local_a18;
  uint local_a08;
  uint local_a04;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_a00;
  uint local_9f8;
  uint local_9f4;
  uint local_9f0;
  uint local_9ec;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_9e8;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_9e0;
  byte bStack_9d8;
  byte bStack_9d7;
  ushort uStack_9d6;
  uint local_9d0;
  undefined8 local_9cc;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_9c0;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_9b8;
  byte bStack_9b0;
  byte bStack_9af;
  ushort uStack_9ae;
  uint local_9a8;
  undefined8 local_9a4;
  FString local_998;
  FString local_988;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_978;
  undefined4 uStack_970;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_968;
  undefined4 uStack_960;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_958;
  undefined4 uStack_950;
  TDynamicSparseBitSetBucketStorage<unsigned_short,0> *local_948;
  undefined4 uStack_940;
  FEntitySystemScheduler *local_938;
  longlong local_930;
  FString *local_928;
  undefined8 local_920;
  undefined4 uStack_918;
  undefined8 local_910;
  undefined4 uStack_908;
  int local_900;
  int local_8f8;
  int local_8f4;
  int local_8f0;
  uint local_8ec;
  int local_8e8;
  int local_8e4;
  int local_8e0;
  int local_8dc;
  int local_8d8;
  int local_8d4;
  uint local_8d0;
  int local_8cc;
  int local_8c8;
  FLinearColor local_8c4;
  ForElementType<unsigned_int> local_8b0;
  uint local_898;
  int local_894;
  ForElementType<unsigned_int> local_890;
  uint local_878;
  int local_874;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_a48;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_938 = this;
  local_928 = __return_storage_ptr__;
  pvVar11 = FGenericPlatformString::Memcpy(local_848,L"\ndigraph FEntitySystemScheduler {\n",0x44);
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 0x44);
  if (local_868.End < (wchar_t *)((longlong)pvVar11 + 0x60U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,0xe);
  }
  pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\trankdir=\"LR\"\n",0x1c);
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 0x1c);
  if (local_868.End < (wchar_t *)((longlong)pvVar11 + 0x3aU)) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,0xf);
  }
  pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\tcompound=true\n",0x1e);
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 0x1e);
  if (local_868.End < (wchar_t *)((longlong)pvVar11 + 0x5eU)) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,0x20);
  }
  pvVar11 = FGenericPlatformString::Memcpy
                      (local_868.CurPos,L"\tnode [shape=record,height=.1];\n",0x40);
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 0x40);
  local_894 = 0x80;
  uVar9 = 0;
  local_898 = (this->Tasks).ArrayNum;
  local_8b0.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar17 = local_898 + 0x1f >> 5;
  if (local_898 + 0x1f >> 5 != 0) {
    if (4 < uVar17) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_8b0,0,uVar17,4);
      local_894 = uVar17 << 5;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_8b0;
    if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_8b0.SecondaryData;
    }
    memset((void *)FVar14,0,(ulonglong)uVar17 << 2);
    uVar17 = local_898 & 0x8000001f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
    }
    if (uVar17 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_8b0;
      if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_8b0.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar14 +
                       (longlong)((int)(local_898 + ((int)local_898 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar17 & 0x1f);
    }
  }
  local_878 = (this->Tasks).ArrayNum;
  local_890.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_874 = 0x80;
  uVar17 = local_878 + 0x1f >> 5;
  if (local_878 + 0x1f >> 5 != 0) {
    if (4 < uVar17) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_890,0,uVar17,4);
      local_874 = uVar17 << 5;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_890;
    if (local_890.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_890.SecondaryData;
    }
    memset((void *)FVar14,0,(ulonglong)uVar17 << 2);
    uVar17 = local_878 & 0x8000001f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
    }
    if (uVar17 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_890;
      if (local_890.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_890.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar14 +
                       (longlong)((int)(local_878 + ((int)local_878 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar17 & 0x1f);
    }
  }
  iVar5 = (this->Tasks).ArrayNum;
  if (0 < iVar5) {
    lVar19 = 0;
    uVar17 = 1;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar5) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_a20 = (FScriptContainerElement *)(longlong)iVar5;
        local_a28 = (FScriptContainerElement *)(longlong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar2)();
          return pFVar12;
        }
      }
      pFVar18 = (this->Tasks).AllocatorInstance.Data;
      if (*(int *)(pFVar18 + lVar19 + 0x40) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)(pFVar18 + lVar19 + 0x38);
      }
      ::FString::FString(&local_998,pwVar16);
      iVar5 = iswalpha(0x3c);
      if (iVar5 == 0) {
        ::FString::ReplaceCharInlineCaseSensitive(&local_998,L'<',L' ');
      }
      else {
        ::FString::ReplaceCharInlineIgnoreCase(&local_998,L'<',L' ');
      }
      iVar5 = iswalpha(0x3e);
      if (iVar5 == 0) {
        ::FString::ReplaceCharInlineCaseSensitive(&local_998,L'>',L' ');
      }
      else {
        ::FString::ReplaceCharInlineIgnoreCase(&local_998,L'>',L' ');
      }
      if (*(short *)(pFVar18 + lVar19 + 0x80) == 0) {
        local_a28 = (FScriptContainerElement *)L"";
        if (local_998.Data.ArrayNum != 0) {
          local_a28 = local_998.Data.AllocatorInstance.Data;
        }
        local_a20 = (FScriptContainerElement *)
                    CONCAT44(local_a20._4_4_,*(undefined4 *)(pFVar18 + lVar19 + 0x70));
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_868,L"\ttask_%d[label=\"Task %d: %s (%d prerequisites)\"];\n");
      }
      else {
        if ((((int)uVar9 < 0) || ((int)local_898 <= (int)uVar9)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar2)();
          return pFVar12;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_8b0;
        if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_8b0.SecondaryData;
        }
        uVar6 = uVar9;
        if ((int)uVar9 < 0) {
          uVar6 = uVar9 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar14 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar1 = *puVar1 | uVar17;
        local_a28 = (FScriptContainerElement *)L"";
        if (local_998.Data.ArrayNum != 0) {
          local_a28 = local_998.Data.AllocatorInstance.Data;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_868,L"\tsubgraph cluster_%d{ \n\t label=\"Parent Task %d: %s\";\n");
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_868,L"\t\ttask_%d[label=\"[All Children]\" style=invis];\n");
        iVar20 = uVar9 + 1;
        iVar5 = iVar20;
        if (iVar20 < (int)((uint)*(ushort *)(pFVar18 + lVar19 + 0x80) + iVar20)) {
          do {
            if (((iVar5 < 0) || ((int)local_878 <= iVar5)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar12 = (FString *)(*pcVar2)();
              return pFVar12;
            }
            FVar14 = (ForElementType<unsigned_int>)&local_890;
            if (local_890.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_890.SecondaryData;
            }
            iVar7 = iVar5;
            if (iVar5 < 0) {
              iVar7 = iVar5 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar7 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"\t\ttask_%d;\n");
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)((uint)*(ushort *)(pFVar18 + lVar19 + 0x80) + iVar20));
        }
        if (local_868.End < local_868.CurPos + 3) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,3);
        }
        pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\t}\n",6);
        local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 6);
        this = local_938;
      }
      uVar9 = uVar9 + 1;
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
      iVar5 = (this->Tasks).ArrayNum;
      lVar19 = lVar19 + 0x88;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      __return_storage_ptr__ = local_928;
    } while ((int)uVar9 < iVar5);
  }
  if (local_868.End < local_868.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,2);
  }
  pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\n\n",4);
  iVar5 = (this->Tasks).ArrayNum;
  local_a04 = 0;
  local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 4);
  if (iVar5 < 1) {
LAB_1461d6f8a:
    if (local_868.End < local_868.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,2);
    }
    pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,L"}\n",4);
    local_868.CurPos = (wchar_t *)((longlong)pvVar11 + 4);
    if (local_868.End < (wchar_t *)((longlong)pvVar11 + 6U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(__return_storage_ptr__,local_868.Base);
    if (local_890.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_890.SecondaryData);
    }
    if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_8b0.SecondaryData);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    return __return_storage_ptr__;
  }
  local_930 = 0;
LAB_1461d6700:
  lVar19 = local_930;
  uVar9 = local_a04;
  uVar17 = 0;
  if ((int)local_a04 < iVar5) {
    uVar17 = ~local_a04 >> 0x1f;
  }
  if (uVar17 == 0) {
    local_a20 = (FScriptContainerElement *)(longlong)iVar5;
    local_a28 = (FScriptContainerElement *)(longlong)(int)local_a04;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FString *)(*pcVar2)();
      return pFVar12;
    }
  }
  pFVar18 = (this->Tasks).AllocatorInstance.Data + lVar19;
  this_01 = FLinearColor::MakeRandomColor(&local_8c4);
  FVar8 = FLinearColor::ToFColorSRGB(this_01);
  FColor::ToHex((FColor *)CONCAT44(extraout_var,FVar8.field0_0x0),&local_988);
  if ((((int)uVar9 < 0) || ((int)local_898 <= (int)uVar9)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar12 = (FString *)(*pcVar2)();
    return pFVar12;
  }
  local_a08 = *(uint *)(pFVar18 + 8);
  this_00 = *(TDynamicSparseBitSetBucketStorage<unsigned_short,0> **)pFVar18;
  FVar14 = (ForElementType<unsigned_int>)&local_8b0;
  if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_8b0.SecondaryData;
  }
  uVar17 = uVar9 & 0x1f;
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 0x1f;
  }
  this_02 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
  uVar6 = 0;
  local_a00 = this_00;
  local_9f8 = local_a08;
  if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar9 >> 5) * 4) >> uVar17 & 1) == 0) {
    local_9b8 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
    bStack_9b0 = 0;
    bStack_9af = 0;
    uStack_9ae = 0;
    local_9a4 = 0;
    pTVar21 = this_02;
    pTVar22 = this_02;
    local_9c0 = this_00;
    local_9a8 = local_a08;
    if (local_a08 == 0) goto LAB_1461d6c60;
    uVar9 = *(uint *)&this_00[1].Storage.AllocatorInstance.Data;
    uVar17 = this_00[1].Storage.ArrayNum << 9;
    pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar17;
    local_9a4 = (ulonglong)uVar17 << 0x20;
    local_958 = this_00;
    if (uVar9 == 0) {
      uStack_950 = 0x20;
      uVar6 = uStack_950;
      this_02 = this_00;
    }
    else {
      local_8dc = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> local_8dc & 1) == 0; local_8dc = local_8dc + 1) {
        }
      }
      uVar13 = 0x20;
      if (uVar9 != 0) {
        uVar13 = (char)local_8dc;
      }
      uStack_950 = CONCAT31((int3)(uStack_950 >> 8),uVar13) & 0xffff;
      uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(this_00,0);
      local_a08 = *(uint *)(pFVar18 + 8);
      local_8d8 = 0;
      if ((uVar4 | 0xffff0000) != 0) {
        for (; ((uVar4 | 0xffff0000) >> local_8d8 & 1) == 0; local_8d8 = local_8d8 + 1) {
        }
      }
      uStack_950 = CONCAT22(uVar4,CONCAT11((char)local_8d8,(undefined1)uStack_950));
      uVar6 = uStack_950;
      local_a00 = *(TDynamicSparseBitSetBucketStorage<unsigned_short,0> **)pFVar18;
      this_02 = local_958;
    }
    do {
      bStack_9b0 = (byte)uVar6;
      bStack_9af = (byte)(uVar6 >> 8);
      uStack_9ae = (ushort)(uVar6 >> 0x10);
      local_9b8 = this_02;
LAB_1461d6c60:
      do {
        uVar4 = uStack_9ae;
        uVar9 = (uint)pTVar22;
        local_9f4 = uVar9;
        local_9f0 = uVar9;
        if ((((this_00 == local_a00) && (uVar9 == local_a08)) &&
            (this_02 == (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0)) &&
           (((char)uVar6 == '\0' && (bStack_9af == 0)))) goto LAB_1461d6f43;
        local_9ec = uVar6 & 0xff;
        uVar17 = local_9ec * 0x10 + (uint)bStack_9af + (int)pTVar21;
        if ((((int)uVar17 < 0) || ((int)local_898 <= (int)uVar17)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar2)();
          return pFVar12;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_8b0;
        if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_8b0.SecondaryData;
        }
        uVar10 = uVar17;
        if ((int)uVar17 < 0) {
          uVar10 = uVar17 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar17 & 0x1f) & 1)
            == 0) {
          local_a28 = (FScriptContainerElement *)L"";
          if (local_988.Data.ArrayNum != 0) {
            local_a28 = local_988.Data.AllocatorInstance.Data;
          }
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_868,L"\ttask_%d -> task_%d [color=\"#%s\"];\n");
        }
        else {
          local_a20 = (FScriptContainerElement *)L"";
          if (local_988.Data.ArrayNum != 0) {
            local_a20 = local_988.Data.AllocatorInstance.Data;
          }
          local_a28 = (FScriptContainerElement *)CONCAT44(local_a28._4_4_,uVar17);
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_868,L"\ttask_%d -> task_%d [lhead=cluster_%d, color=\"#%s\"];\n");
        }
        uStack_9ae = uVar4 - 1 & uVar4;
        if (uStack_9ae == 0) {
          if ((char)uVar6 == '\x1f') {
            bStack_9b0 = 0x20;
            bStack_9af = 0;
            uVar6 = 0x20;
          }
          else {
            uVar17 = *(uint *)&this_02[1].Storage.AllocatorInstance.Data;
            uVar10 = -1 << ((char)local_9ec + 1U & 0x1f) & uVar17;
            local_8d0 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> local_8d0 & 1) == 0; local_8d0 = local_8d0 + 1) {
              }
            }
            uVar6 = 0x20;
            if (uVar10 != 0) {
              uVar6 = local_8d0 & 0xff;
            }
            bStack_9b0 = (byte)uVar6;
            if (bStack_9b0 != 0x20) {
              uVar17 = (1 << (bStack_9b0 & 0x1f)) - 1U & uVar17;
              uVar15 = (ulonglong)uVar17 - ((ulonglong)(uVar17 >> 1) & 0x5555555555555555);
              uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
              uStack_9ae = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                     (this_02,(uint)(byte)(((uVar15 >> 4) + uVar15 &
                                                           0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                                          0x38));
              iVar5 = 0;
              local_8cc = iVar5;
              if ((uStack_9ae | 0xffff0000) != 0) {
                for (; local_8cc = iVar5, ((uStack_9ae | 0xffff0000) >> iVar5 & 1) == 0;
                    iVar5 = iVar5 + 1) {
                }
              }
              goto LAB_1461d6e6b;
            }
            bStack_9af = 0;
          }
        }
        else {
          iVar5 = 0;
          local_8d4 = iVar5;
          if ((uStack_9ae | 0xffff0000) != 0) {
            for (; local_8d4 = iVar5, ((uStack_9ae | 0xffff0000) >> iVar5 & 1) == 0;
                iVar5 = iVar5 + 1) {
            }
          }
LAB_1461d6e6b:
          bStack_9af = (byte)iVar5;
        }
      } while ((byte)uVar6 < 0x20);
      uVar9 = uVar9 + 1;
      pTVar22 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar9;
      if ((int)uVar9 < (int)local_9f8) {
        local_948 = this_00 + ((longlong)(int)local_9f4 + 1) * 2;
        uVar6 = this_00[(longlong)(int)local_9f0 * 2 + 3].Storage.ArrayNum << 9;
        pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar6;
        uVar17 = *(uint *)&local_948[1].Storage.AllocatorInstance.Data;
        local_9a4 = CONCAT44(uVar6,uVar9);
        if (uVar17 == 0) {
          uStack_940 = 0x20;
          uVar6 = 0x20;
          this_02 = local_948;
        }
        else {
          local_8c8 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> local_8c8 & 1) == 0; local_8c8 = local_8c8 + 1) {
            }
          }
          uVar13 = 0x20;
          if (uVar17 != 0) {
            uVar13 = (char)local_8c8;
          }
          uStack_940 = CONCAT31((int3)(uStack_940 >> 8),uVar13) & 0xffff;
          uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(local_948,0);
          local_900 = 0;
          if ((uVar4 | 0xffff0000) != 0) {
            for (; ((uVar4 | 0xffff0000) >> local_900 & 1) == 0; local_900 = local_900 + 1) {
            }
          }
          uStack_940 = CONCAT22(uVar4,CONCAT11((char)local_900,(undefined1)uStack_940));
          uVar6 = uStack_940;
          this_02 = local_948;
        }
      }
      else {
        local_910 = 0;
        pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
        uStack_908 = 0;
        uVar6 = 0;
        local_9a4 = (ulonglong)uVar9;
        this_02 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
      }
    } while( true );
  }
  local_9e0 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
  bStack_9d8 = 0;
  bStack_9d7 = 0;
  uStack_9d6 = 0;
  local_9cc = 0;
  pTVar21 = this_02;
  pTVar22 = this_02;
  local_9e8 = this_00;
  local_9d0 = local_a08;
  if (local_a08 == 0) goto LAB_1461d68b0;
  uVar9 = *(uint *)&this_00[1].Storage.AllocatorInstance.Data;
  uVar17 = this_00[1].Storage.ArrayNum << 9;
  pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar17;
  local_9cc = (ulonglong)uVar17 << 0x20;
  local_978 = this_00;
  if (uVar9 == 0) {
    uStack_970 = 0x20;
    uVar6 = uStack_970;
    this_02 = this_00;
  }
  else {
    local_8f8 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> local_8f8 & 1) == 0; local_8f8 = local_8f8 + 1) {
      }
    }
    uVar13 = 0x20;
    if (uVar9 != 0) {
      uVar13 = (char)local_8f8;
    }
    uStack_970 = CONCAT31((int3)(uStack_970 >> 8),uVar13) & 0xffff;
    uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(this_00,0);
    local_a08 = *(uint *)(pFVar18 + 8);
    local_8f4 = 0;
    if ((uVar4 | 0xffff0000) != 0) {
      for (; ((uVar4 | 0xffff0000) >> local_8f4 & 1) == 0; local_8f4 = local_8f4 + 1) {
      }
    }
    uStack_970 = CONCAT22(uVar4,CONCAT11((char)local_8f4,(undefined1)uStack_970));
    uVar6 = uStack_970;
    local_a00 = *(TDynamicSparseBitSetBucketStorage<unsigned_short,0> **)pFVar18;
    this_02 = local_978;
  }
  do {
    bStack_9d8 = (byte)uVar6;
    bStack_9d7 = (byte)(uVar6 >> 8);
    uStack_9d6 = (ushort)(uVar6 >> 0x10);
    local_9e0 = this_02;
LAB_1461d68b0:
    do {
      uVar4 = uStack_9d6;
      uVar9 = (uint)pTVar22;
      local_9f0 = uVar9;
      local_9ec = uVar9;
      if (((this_00 == local_a00) && (uVar9 == local_a08)) &&
         ((this_02 == (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0 &&
          (((char)uVar6 == '\0' && (bStack_9d7 == 0)))))) goto LAB_1461d6f43;
      local_9f4 = uVar6 & 0xff;
      uVar17 = local_9f4 * 0x10 + (uint)bStack_9d7 + (int)pTVar21;
      if ((((int)uVar17 < 0) || ((int)local_898 <= (int)uVar17)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar2)();
        return pFVar12;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_8b0;
      if (local_8b0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_8b0.SecondaryData;
      }
      uVar10 = uVar17;
      if ((int)uVar17 < 0) {
        uVar10 = uVar17 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar17 & 0x1f) & 1) ==
          0) {
        local_a20 = (FScriptContainerElement *)L"";
        if (local_988.Data.ArrayNum != 0) {
          local_a20 = local_988.Data.AllocatorInstance.Data;
        }
        local_a28 = (FScriptContainerElement *)CONCAT44(local_a28._4_4_,local_a04);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_868,L"\ttask_%d -> task_%d [ltail=cluster_%d, color=\"#%s\"];\n");
      }
      else {
        local_a18 = (FScriptContainerElement *)L"";
        if (local_988.Data.ArrayNum != 0) {
          local_a18 = local_988.Data.AllocatorInstance.Data;
        }
        local_a20 = (FScriptContainerElement *)CONCAT44(local_a20._4_4_,uVar17);
        local_a28 = (FScriptContainerElement *)CONCAT44(local_a28._4_4_,local_a04);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_868,
                   L"\ttask_%d -> task_%d [ltail=cluster_%d, lhead=cluster_%d, color=\"#%s\"];\n");
      }
      uStack_9d6 = uVar4 - 1 & uVar4;
      if (uStack_9d6 == 0) {
        if ((char)uVar6 == '\x1f') {
          bStack_9d8 = 0x20;
          bStack_9d7 = 0;
          uVar6 = 0x20;
        }
        else {
          uVar17 = *(uint *)&this_02[1].Storage.AllocatorInstance.Data;
          uVar10 = -1 << ((char)local_9f4 + 1U & 0x1f) & uVar17;
          local_8ec = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> local_8ec & 1) == 0; local_8ec = local_8ec + 1) {
            }
          }
          uVar6 = 0x20;
          if (uVar10 != 0) {
            uVar6 = local_8ec & 0xff;
          }
          bStack_9d8 = (byte)uVar6;
          if (bStack_9d8 != 0x20) {
            uVar17 = (1 << (bStack_9d8 & 0x1f)) - 1U & uVar17;
            uVar15 = (ulonglong)uVar17 - ((ulonglong)(uVar17 >> 1) & 0x5555555555555555);
            uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
            uStack_9d6 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get
                                   (this_02,(uint)(byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f
                                                         ) * 0x101010101010101 >> 0x38));
            iVar5 = 0;
            local_8e8 = iVar5;
            if ((uStack_9d6 | 0xffff0000) != 0) {
              for (; local_8e8 = iVar5, ((uStack_9d6 | 0xffff0000) >> iVar5 & 1) == 0;
                  iVar5 = iVar5 + 1) {
              }
            }
            goto LAB_1461d6ad8;
          }
          bStack_9d7 = 0;
        }
      }
      else {
        iVar5 = 0;
        local_8f0 = iVar5;
        if ((uStack_9d6 | 0xffff0000) != 0) {
          for (; local_8f0 = iVar5, ((uStack_9d6 | 0xffff0000) >> iVar5 & 1) == 0; iVar5 = iVar5 + 1
              ) {
          }
        }
LAB_1461d6ad8:
        bStack_9d7 = (byte)iVar5;
      }
    } while ((byte)uVar6 < 0x20);
    uVar9 = uVar9 + 1;
    pTVar22 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar9;
    if ((int)uVar9 < (int)local_9f8) {
      local_968 = this_00 + ((longlong)(int)local_9ec + 1) * 2;
      uVar6 = this_00[(longlong)(int)local_9f0 * 2 + 3].Storage.ArrayNum << 9;
      pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)(ulonglong)uVar6;
      uVar17 = *(uint *)&local_968[1].Storage.AllocatorInstance.Data;
      local_9cc = CONCAT44(uVar6,uVar9);
      if (uVar17 == 0) {
        uStack_960 = 0x20;
        uVar6 = 0x20;
        this_02 = local_968;
      }
      else {
        local_8e4 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> local_8e4 & 1) == 0; local_8e4 = local_8e4 + 1) {
          }
        }
        uVar13 = 0x20;
        if (uVar17 != 0) {
          uVar13 = (char)local_8e4;
        }
        uStack_960 = CONCAT31((int3)(uStack_960 >> 8),uVar13) & 0xffff;
        uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(local_968,0);
        local_8e0 = 0;
        if ((uVar4 | 0xffff0000) != 0) {
          for (; ((uVar4 | 0xffff0000) >> local_8e0 & 1) == 0; local_8e0 = local_8e0 + 1) {
          }
        }
        uStack_960 = CONCAT22(uVar4,CONCAT11((char)local_8e0,(undefined1)uStack_960));
        uVar6 = uStack_960;
        this_02 = local_968;
      }
    }
    else {
      local_920 = 0;
      pTVar21 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
      uStack_918 = 0;
      uVar6 = 0;
      local_9cc = (ulonglong)uVar9;
      this_02 = (TDynamicSparseBitSetBucketStorage<unsigned_short,0> *)0x0;
    }
  } while( true );
LAB_1461d6f43:
  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data.AllocatorInstance.Data);
  }
  local_a04 = local_a04 + 1;
  local_930 = local_930 + 0x88;
  iVar5 = (local_938->Tasks).ArrayNum;
  __return_storage_ptr__ = local_928;
  this = local_938;
  if (iVar5 <= (int)local_a04) goto LAB_1461d6f8a;
  goto LAB_1461d6700;
}

// AddTask<FMyTask> @ 14627d270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::FEntitySystemScheduler::AddTask<FMyTask>
          (FEntitySystemScheduler *this,FTaskParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *in_R8;
  undefined1 local_48 [16];
  code *local_38;
  undefined1 local_30;
  
  local_30 = 0;
  local_38 = `UE::MovieScene::FEntitySystemScheduler::AddTask<FMyTask>'::__l2::FExecute::Execute;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_48._0_8_ = ___xmm_00000000000000000000000000000010;
    local_48._8_8_ = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_UFMyTask___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)&___7FMyTask__6B_;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FTaskID)iVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_48._0_8_ = pTVar4 + 1;
    local_48._8_8_ = pTVar4;
  }
  AddTask(this,param_1,in_R8,
          (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
           *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (FTaskID)(int)param_1;
}

// operator() @ 1504e6370

bool __thiscall
`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::__l15::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7429933679914255023>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7429933679914255023>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

