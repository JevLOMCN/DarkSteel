// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// Add @ 1464eb500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSubmixMap::Add(FSubmixMap *this,uint param_1,TSharedPtr<Audio::FMixerSubmix,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint local_res10 [2];
  uint *local_18;
  TSharedPtr<Audio::FMixerSubmix,1> *local_10;
  
  local_res10[0] = param_1;
  local_10 = param_2;
  if (DisableSubmixMutationLockCVar == 0) {
    lpCriticalSection = &this->MutationLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = local_res10;
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>_>
              ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>
                        *)&stack0x00000020,(bool *)&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    local_18 = local_res10;
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>_>
              ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>
                        *)&stack0x00000020,(bool *)&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// FindRef @ 1464fe9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FSubmixMap::FindRef
          (FSubmixMap *this,TSharedPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (DisableSubmixMutationLockCVar != 0) {
    TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
    ::FindRef((TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
               *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  lpCriticalSection = &this->MutationLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
    ::FindRef((TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
               *)this,__return_storage_ptr__,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetKeys @ 146503100

TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> * __thiscall
Audio::FSubmixMap::GetKeys
          (FSubmixMap *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulong64 uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint local_res8 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_88;
  uint local_78;
  uint uStack_74;
  undefined1 *puStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  lpCriticalSection = &this->MutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar9 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
              *)this,&local_88);
  FVar16.Data = local_88.AllocatorInstance.Data;
  iVar11 = local_88.ArrayNum;
  uVar15 = (ulong64)local_88.ArrayNum;
  if ((local_88.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar6;
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (iVar11 == 0) goto LAB_1465033c6;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,iVar11);
  uVar17 = 1;
  if (3 < (uint)iVar11) {
    uVar10 = (ulonglong)(((uint)iVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar17 <= __return_storage_ptr__->HashSize))
  goto LAB_1465033c6;
  __return_storage_ptr__->HashSize = uVar17;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar17 != 0) {
    uVar12 = uVar17;
    if (uVar17 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_14650323a;
      }
    }
    else {
LAB_14650323a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar12,4);
    }
    if (0 < (int)uVar17) {
      uVar13 = (ulonglong)uVar17;
      uVar10 = uVar9;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        uVar7 = uVar10 & (longlong)(int)uVar17 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8 + uVar7 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    puStack_70 = &(__return_storage_ptr__->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar17 != 0) {
      puVar14 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puStack_70;
      }
      uVar12 = *puVar14;
      uVar10 = uVar9;
      while (uVar12 == 0) {
        iVar11 = (int)uVar9;
        uStack_60 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_60;
        local_78 = iVar11 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14650332b;
        uVar12 = puVar14[(longlong)iVar11 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar17 < (int)uStack_64) {
LAB_14650332b:
        uVar9 = (ulonglong)uVar17;
        uStack_64 = uVar17;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
    if ((int)uVar9 < (int)uVar17) {
      do {
        iVar11 = (int)uVar9;
        uVar17 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)&local_58->Elements + (longlong)iVar11 * 0xc);
        lVar3 = *(longlong *)&local_58->Elements + (longlong)iVar11 * 0xc;
        *(uint *)(lVar3 + 8) = uVar17;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar2;
        }
        uVar9 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar8 + uVar9 * 4);
        *(int *)((longlong)FVar8 + uVar9 * 4) = iVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_1465033c6:
  pFVar1 = FVar16.Data + uVar15 * 4;
  for (; FVar16.Data != pFVar1; FVar16.Data = FVar16.Data + 4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(__return_storage_ptr__,local_res8,(bool *)FVar16.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Iterate @ 14650f430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FSubmixMap::Iterate
          (FSubmixMap *this,
          TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  FSubmixMap *pFVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  FSubmixMap *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
  *local_d0;
  int local_c8;
  int local_c4;
  LPCRITICAL_SECTION local_c0;
  FSubmixMap *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FSubmixMap *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_100 = this;
  local_d0 = param_1;
  if (DisableSubmixMutationLockCVar == 0) {
    local_c0 = (LPCRITICAL_SECTION)&this->MutationLock;
    if (local_c0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_c0);
    iVar3 = *(int *)&(this->SubmixMap).field_0x28;
    puVar1 = &(this->SubmixMap).field_0x10;
    iStack_f8 = 0;
    uStack_f4 = 1;
    local_e0 = 0;
    iStack_e4 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(this->SubmixMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        iStack_e4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14650f70f;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_f4 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_c4 = (int)lVar10;
      iStack_e4 = local_e0 + -1 + local_c4;
      if (iVar3 < iStack_e4) {
        iStack_e4 = iVar3;
      }
    }
LAB_14650f70f:
    uVar14 = *(uint *)&(this->SubmixMap).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    iStack_d8 = *(int *)&(this->SubmixMap).field_0x8 - *(int *)&(this->SubmixMap).field_0x34;
    uStack_e8 = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uStack_f4,iStack_f8);
    TStack_80.CurrentBitIndex = iStack_e4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_80._28_4_ = iStack_e4;
    TStack_80.BaseBitIndex = local_e0;
    uStack_60 = CONCAT44(uStack_d4,iStack_d8);
    local_f0 = puVar1;
    iStack_dc = iStack_e4;
    local_88 = this;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_1 = local_d0;
    uVar4 = *(uint *)&(this->SubmixMap).field_0x28;
    if (uVar14 != uVar4) {
      puVar15 = *(undefined1 **)&(this->SubmixMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14650f81b;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_14650f81b:
    while( true ) {
      pFVar7 = local_88;
      if (*(int *)&(local_88->SubmixMap).field_0x8 - *(int *)&(local_88->SubmixMap).field_0x34 !=
          (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_107);
      }
      lVar10 = (longlong)TStack_80.CurrentBitIndex;
      if (((TStack_80.CurrentBitIndex == uVar14) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->SubmixMap).field_0x10)
          ) && (pFVar7 == this)) break;
      lVar5 = *(longlong *)&pFVar7->SubmixMap;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar6)(uVar9,lVar10 * 0x20 + lVar5);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    LeaveCriticalSection(local_c0);
  }
  else {
    iVar3 = *(int *)&(this->SubmixMap).field_0x28;
    puVar1 = &(this->SubmixMap).field_0x10;
    iStack_f8 = 0;
    uStack_f4 = 1;
    local_e0 = 0;
    iStack_e4 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(this->SubmixMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        iStack_e4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14650f4fd;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_f4 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_c8 = (int)lVar10;
      iStack_e4 = local_e0 + -1 + local_c8;
      if (iVar3 < iStack_e4) {
        iStack_e4 = iVar3;
      }
    }
LAB_14650f4fd:
    uVar14 = *(uint *)&(this->SubmixMap).field_0x28;
    iStack_dc = local_3c;
    uVar13 = uVar14 & 0xffffffe0;
    iStack_d8 = *(int *)&(this->SubmixMap).field_0x8 - *(int *)&(this->SubmixMap).field_0x34;
    uStack_e8 = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_f4,iStack_f8);
    TStack_b0.CurrentBitIndex = iStack_e4;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_b0._28_4_ = local_3c;
    TStack_b0.BaseBitIndex = local_e0;
    uStack_90 = CONCAT44(uStack_d4,iStack_d8);
    local_f0 = puVar1;
    local_b8 = this;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(this->SubmixMap).field_0x28;
    if (uVar14 != uVar4) {
      puVar15 = *(undefined1 **)&(this->SubmixMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14650f600;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_14650f600:
    while( true ) {
      pFVar7 = local_b8;
      if (*(int *)&(local_b8->SubmixMap).field_0x8 - *(int *)&(local_b8->SubmixMap).field_0x34 !=
          (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      lVar10 = (longlong)TStack_b0.CurrentBitIndex;
      if (((TStack_b0.CurrentBitIndex == uVar14) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
      break;
      lVar5 = *(longlong *)&pFVar7->SubmixMap;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar6)(uVar9,lVar10 * 0x20 + lVar5);
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// Remove @ 14651c770

int __thiscall Audio::FSubmixMap::Remove(FSubmixMap *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint local_res18 [4];
  
  local_res18[0] = param_1;
  if (DisableSubmixMutationLockCVar == 0) {
    lpCriticalSection = &this->MutationLock;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(this->SubmixMap).field_0x8 == *(int *)&(this->SubmixMap).field_0x34) {
        iVar1 = 0;
      }
      else {
        iVar1 = TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                            *)this,param_1,local_res18);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  if (*(int *)&(this->SubmixMap).field_0x8 != *(int *)&(this->SubmixMap).field_0x34) {
    iVar1 = TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                        *)this,param_1,local_res18);
    return iVar1;
  }
  return 0;
}

// Reset @ 14651e640

void __thiscall Audio::FSubmixMap::Reset(FSubmixMap *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (DisableSubmixMutationLockCVar != 0) {
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
             *)this);
    return;
  }
  lpCriticalSection = &this->MutationLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
             *)this);
                    /* WARNING: Could not recover jumptable at 0x00014651e688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

