// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 6

// FindOrAddImpl<FInputDeviceId_const_&> @ 1423bdb80

FPlatformInputDeviceState * __thiscall
TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
::FindOrAddImpl<FInputDeviceId_const_&>
          (TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
           *this,uint param_1,FInputDeviceId *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FInputDeviceId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x14) == param_2->InternalId) {
          if (lVar3 != 0) goto LAB_1423bdc12;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FInputDeviceId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FInputDeviceId_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_1423bdc12:
  return (FPlatformInputDeviceState *)(lVar3 + 4);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 1423bdc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
           *this,TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
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
  FInputDeviceId local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FInputDeviceId,FPlatformInputDeviceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>_>
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
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_1423bded9;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_1423bded9;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_1423bdd41;
      }
    }
    else {
LAB_1423bdd41:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar13 = uVar15;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_1423bde42;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_1423bde42:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_1423bded9:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar17;
    uVar13 = uVar15;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar15;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_1423bdf8e;
      uVar12 = puVar17[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_1423bdf8e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      if (local_98._8_4_ != local_64) {
        uVar14 = *(uint *)(lVar4 + (longlong)(int)uVar10 * 0x14);
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar14) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar14) goto LAB_1423be0ee;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x14);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator>::
      Emplace<FInputDeviceId_const_&>
                ((TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator> *)
                 local_98,&local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x14));
LAB_1423be0ee:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FInputDeviceId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FInputDeviceId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FInputDeviceId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// FindChecked @ 1423dc2a0

TSharedRef<FGenericAccessibleUser,1> * __thiscall
TMapBase<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
::FindChecked(TMapBase<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<FGenericAccessibleUser,1> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TSharedRef<FGenericAccessibleUser,1> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSharedRef<FGenericAccessibleUser,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedRef<FGenericAccessibleUser,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1423dc340

FString * __thiscall
TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
::FindChecked(TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
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
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FString *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1423dc3e0

FInternalContext * __thiscall
TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
::FindChecked(TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              *this,TWeakPtr<ITextInputMethodContext_const_,1> *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FInternalContext *pFVar7;
  longlong lVar8;
  atomic<int> *paVar9;
  TWeakPtr<ITextInputMethodContext_const_,1> local_18;
  
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar9 = &pTVar2->WeakReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_18.WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  iVar6 = TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,&local_18);
  if (iVar6 == -1) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &pTVar2->WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
      }
    }
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar6 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &pTVar2->WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
      }
    }
    if (lVar8 != 0) goto LAB_1423dc4ff;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FInternalContext *)(*pcVar3)();
    return pFVar7;
  }
LAB_1423dc4ff:
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar9 = &pTVar2->WeakReferenceCount;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  return (FInternalContext *)(lVar8 + 0x10);
}

// Remove @ 142400450

int __thiscall
TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
::Remove(TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
         *this,TWeakPtr<ITextInputMethodContext_const_,1> *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  int iVar4;
  atomic<int> *paVar5;
  TWeakPtr<ITextInputMethodContext_const_,1> local_18;
  
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar5 = &pTVar2->WeakReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  local_18.WeakReferenceCount.ReferenceController = pTVar2;
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      aVar1 = *paVar5;
      *paVar5 = (atomic<int>)((int)*paVar5 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
      }
    }
    iVar4 = 0;
    goto LAB_14240055f;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
LAB_142400503:
    iVar4 = TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
            ::RemoveImpl<TWeakPtr<ITextInputMethodContext_const_,1>_>(&this->Pairs,uVar3,&local_18);
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) goto LAB_14240055f;
  }
  else {
    LOCK();
    aVar1 = *paVar5;
    *paVar5 = (atomic<int>)((int)*paVar5 + -1);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x1) goto LAB_142400503;
    (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    iVar4 = TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
            ::RemoveImpl<TWeakPtr<ITextInputMethodContext_const_,1>_>(&this->Pairs,uVar3,&local_18);
  }
  LOCK();
  paVar5 = &pTVar2->WeakReferenceCount;
  aVar1 = *paVar5;
  *paVar5 = (atomic<int>)((int)*paVar5 + -1);
  UNLOCK();
  if (aVar1 == (atomic<int>)0x1) {
    (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
  }
LAB_14240055f:
  pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar5 = &pTVar2->WeakReferenceCount;
    aVar1 = *paVar5;
    *paVar5 = (atomic<int>)((int)*paVar5 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  return iVar4;
}

