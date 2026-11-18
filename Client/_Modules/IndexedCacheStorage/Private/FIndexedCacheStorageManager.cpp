// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 15

// CreateCacheStorage @ 144565c30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Experimental::FIndexedCacheStorageManager::CreateCacheStorage
          (FIndexedCacheStorageManager *this,ulong64 param_1,int param_2)

{
  bool bVar1;
  FCacheStorageMetaData *this_00;
  
  this_00 = GetCacheStorageMetaData(this,param_2);
  if (this_00 == (FCacheStorageMetaData *)0x0) {
    if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    return false;
  }
  bVar1 = FCacheStorageMetaData::CreateCacheStorage(this_00,param_1);
  return bVar1;
}

// DestroyCacheStorage @ 144565f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FIndexedCacheStorageManager::DestroyCacheStorage
          (FIndexedCacheStorageManager *this,int param_1)

{
  FCacheStorageMetaData *this_00;
  
  this_00 = GetCacheStorageMetaData(this,param_1);
  if (this_00 != (FCacheStorageMetaData *)0x0) {
    FCacheStorageMetaData::DestroyCacheStorage(this_00);
    return;
  }
  if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    return;
  }
  return;
}

// EnsureEarlyStartupCache @ 144565f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache
          (FIndexedCacheStorageManager *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  code *pcVar2;
  FIndexedCacheStorageManager *this_00;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  FCacheStorageMetaData *pFVar10;
  TSparseSetElement<TTuple<int,unsigned___int64>_> *pTVar11;
  byte bVar12;
  longlong lVar13;
  uint *puVar14;
  ForAnyElementType FVar15;
  TSparseSetElement<TTuple<int,unsigned___int64>_> *pTVar16;
  uint uVar17;
  uint uVar18;
  size_t _Size;
  FIndexedCacheStorageMetaData *pFVar19;
  longlong lVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  TSparseSetElement<TTuple<int,unsigned___int64>_> *pTVar24;
  TSparseSetElement<TTuple<int,unsigned___int64>_> *pTVar25;
  undefined1 auStackY_b28 [32];
  undefined1 local_ae8 [4];
  uint local_ae4;
  ForAnyElementType local_ae0;
  int local_ad8;
  int local_ad4;
  int local_ad0;
  int local_acc;
  uint local_ac8;
  uint local_ac0;
  uint uStack_abc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ab8;
  undefined4 local_ab0;
  uint uStack_aac;
  uint uStack_aa8;
  undefined4 uStack_aa4;
  longlong local_aa0;
  longlong local_a98;
  TSparseSetElement<TTuple<int,unsigned___int64>_> *local_a90;
  FIndexedCacheStorageManager *local_a88;
  FString local_a80;
  undefined4 local_a70;
  int local_a6c;
  int local_a68;
  int local_a64;
  longlong *local_a60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a58;
  longlong *local_a38;
  uint uStack_a30;
  uint uStack_a2c;
  TBitArray<FDefaultBitArrayAllocator> *local_a28;
  undefined4 uStack_a20;
  uint uStack_a1c;
  uint local_a18;
  undefined4 uStack_a14;
  int iStack_a10;
  undefined4 uStack_a0c;
  longlong *local_a08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a00;
  undefined8 uStack_9e0;
  FSparseArrayAllocationInfo local_9d8;
  FSparseArrayAllocationInfo local_9c8 [2];
  undefined4 local_99c;
  undefined1 local_998 [32];
  ForElementType<unsigned_int> local_978;
  uint local_970;
  int local_96c;
  int local_968;
  int local_964;
  undefined1 local_960 [8];
  ForAnyElementType local_958;
  uint local_950;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  local_a88 = this;
  ::FString::FString(&local_a80,L"EarlyStartupCache");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_a80.Data.ArrayNum != 0) {
    FVar15.Data = local_a80.Data.AllocatorInstance.Data;
  }
  uVar21 = 0;
  uVar5 = local_a80.Data.ArrayNum - 1;
  if (local_a80.Data.ArrayNum == 0) {
    uVar5 = uVar21;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar15.Data);
  iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->StorageNameToStorageIndex,uVar5,&local_a80);
  uVar5 = uVar21;
  if (iVar6 != -1) {
    lVar13 = (longlong)iVar6 * 0x20 + *(longlong *)&this->StorageNameToStorageIndex;
    puVar14 = (uint *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      puVar14 = (uint *)0x0;
    }
    if (puVar14 != (uint *)0x0) {
      uVar5 = *puVar14;
    }
  }
  local_ac8 = uVar5;
  if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data.AllocatorInstance.Data);
  }
  if (uVar5 == 0) {
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      local_948._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_948,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache",
                 0x42,Yes);
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      FVar15.Data = (FScriptContainerElement *)local_948._padding_;
LAB_144566e5d:
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
    }
    return;
  }
  local_ad8 = param_1->ArrayNum;
  _Size = (size_t)local_ad8;
  _Src = (param_1->AllocatorInstance).Data;
  local_ae0.Data = (FScriptContainerElement *)0x0;
  if (local_ad8 == 0) {
    local_ad4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_ad8,0,&local_ae0,local_ad8,&local_ad4);
    memcpy(local_ae0.Data,_Src,_Size);
  }
  if ((int)uVar5 < local_ad8) {
    uVar21 = ~uVar5 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_ae0.Data[(int)uVar5] != (FScriptContainerElement)0x0) {
    if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
      local_828._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_828,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache",
                 0x42,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      if ((void *)local_828._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_828._padding_);
      }
    }
    DestroyCacheStorage(this,uVar5);
    uVar21 = 0;
    if ((int)uVar5 < local_ad8) {
      uVar21 = ~uVar5 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_ae0.Data[(int)uVar5] = (FScriptContainerElement)0x0;
  }
  uVar5 = 0;
  pTVar24 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0;
  local_96c = 0x80;
  local_998._0_8_ = (FScriptContainerElement *)0x0;
  local_998._8_8_ = 0;
  local_978 = (ForElementType<unsigned_int>)0x0;
  local_970 = 0;
  local_968 = -1;
  local_964 = 0;
  local_958.Data = (FScriptContainerElement *)0x0;
  local_950 = 0;
  lVar13 = (**(code **)((longlong)::Instance + 0x48))(&::Instance);
  if (lVar13 == 0) goto LAB_1445665f8;
  if (local_964 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)local_998,(int *)(local_998 + 8),
                       (int *)(local_998 + 0xc));
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_998 + 0x10),1);
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_998 + 0x10);
    if (local_978 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_978;
    }
    uVar21 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar21;
    puVar14 = (uint *)((longlong)FVar22 + (longlong)(iVar7 >> 5) * 4);
    *puVar14 = *puVar14 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar21 & 0x1f));
    iVar7 = local_968;
  }
  else {
    local_964 = local_964 + -1;
    iVar7 = *(int *)(local_998._0_8_ + (longlong)local_968 * 0x18 + 4);
    iVar6 = local_968;
    if (local_964 != 0) {
      *(undefined4 *)(local_998._0_8_ + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  local_968 = iVar7;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_998,&local_9d8,iVar6);
  pTVar16 = pTVar24;
  if (local_9d8.Pointer != (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0) {
    *(undefined4 *)local_9d8.Pointer = 0;
    *(longlong *)((longlong)local_9d8.Pointer + 8) = lVar13;
    *(undefined4 *)((longlong)local_9d8.Pointer + 0x10) = 0xffffffff;
    pTVar16 = local_9d8.Pointer;
  }
  uVar21 = *(uint *)pTVar16;
  local_ad0 = local_9d8.Index;
  bVar4 = TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_998,uVar21,pTVar16,&local_ad0,(bool *)0x0);
  if (bVar4) goto LAB_1445665f8;
  uVar18 = 1;
  uVar17 = local_998._8_4_ - local_964;
  if (3 < uVar17) {
    uVar23 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a70 = (undefined4)lVar13;
    uVar18 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar18 <= (int)local_950)) {
    uVar21 = local_950 - 1 & uVar21;
    *(uint *)&pTVar16->field_0x14 = uVar21;
    FVar15.Data = (FScriptContainerElement *)local_960;
    if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
      FVar15.Data = local_958.Data;
    }
    uVar23 = (longlong)(int)local_950 - 1U & (longlong)(int)uVar21;
    *(undefined4 *)&pTVar16->field_0x10 = *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4);
    *(int *)((longlong)FVar15.Data + uVar23 * 4) = local_ad0;
    goto LAB_1445665f8;
  }
  local_950 = uVar18;
  if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_958,0,0,4);
  }
  if (uVar18 != 0) {
    uVar21 = uVar18;
    if (uVar18 < 2) {
      if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
        uVar21 = 0;
        goto LAB_1445663e9;
      }
    }
    else {
LAB_1445663e9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_958,0,uVar21,4);
    }
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      pTVar16 = pTVar24;
      do {
        FVar15.Data = (FScriptContainerElement *)local_960;
        if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_958.Data;
        }
        uVar8 = (ulonglong)pTVar16 & (longlong)(int)uVar18 - 1U;
        pTVar16 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)&pTVar16->field_0x1;
        *(undefined4 *)((longlong)FVar15.Data + uVar8 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_950 != 0) {
    uStack_abc = 1;
    local_ac0 = 0;
    pTStack_ab8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_998 + 0x10);
    uStack_aac = 0;
    uStack_aa8 = 0;
    if (local_970 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_998 + 0x10);
      if (local_978 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_978;
      }
      uVar21 = *(uint *)FVar22;
      uStack_aa8 = uVar5;
      local_ac0 = uVar5;
      while (uVar21 == 0) {
        uStack_aa8 = uStack_aa8 + 0x20;
        lVar13 = (longlong)(int)local_ac0;
        local_ac0 = local_ac0 + 1;
        if ((int)((local_970 - 1) + ((int)(local_970 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_ac0)
        goto LAB_14456650e;
        uVar21 = ((uint *)((longlong)FVar22 + 4))[lVar13];
      }
      uStack_abc = -uVar21 & uVar21;
      uVar23 = (ulonglong)uStack_abc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_a6c = (int)lVar13;
      uStack_aac = local_a6c + -1 + uStack_aa8;
      if ((int)local_970 < (int)uStack_aac) {
LAB_14456650e:
        uStack_aac = local_970;
      }
    }
    local_ab0 = 0xffffffff;
    local_a60 = (longlong *)local_998;
    local_a58._padding_ = CONCAT44(uStack_abc,local_ac0);
    local_a58.CurrentBitIndex = uStack_aac;
    local_a58.UnvisitedBitMask = 0xffffffff;
    local_a58._28_4_ = uStack_aa4;
    local_a58.BaseBitIndex = uStack_aa8;
    uVar21 = uStack_aac;
    local_a58.Array = pTStack_ab8;
    if ((int)uStack_aac < (int)local_970) {
      do {
        uVar17 = local_950 - 1 & *(uint *)(*local_a60 + (longlong)(int)uVar21 * 0x18);
        lVar13 = *local_a60 + (longlong)(int)uVar21 * 0x18;
        *(uint *)(lVar13 + 0x14) = uVar17;
        FVar15.Data = (FScriptContainerElement *)local_960;
        if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_958.Data;
        }
        uVar23 = (longlong)(int)local_950 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)((longlong)FVar15.Data + uVar23 * 4);
        *(uint *)((longlong)FVar15.Data + uVar23 * 4) = uVar21;
        local_a58.UnvisitedBitMask = local_a58.UnvisitedBitMask & ~local_a58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a58);
        uVar21 = local_a58.CurrentBitIndex;
      } while (local_a58.CurrentBitIndex < (local_a58.Array)->NumBits);
    }
  }
LAB_1445665f8:
  pFVar19 = (this->IndexedCacheStorageMetaData).Ptr;
  uVar21 = uVar5;
  if (0 < (pFVar19->IndexedCacheEntriesMetaData).ArrayNum) {
    do {
      uVar17 = uVar5;
      if ((int)uVar21 < (pFVar19->IndexedCacheEntriesMetaData).ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar13 = *(longlong *)
                ((pFVar19->IndexedCacheEntriesMetaData).AllocatorInstance.Data +
                (longlong)(int)uVar21 * 8);
      if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x18), lVar13 != 0)) {
        if (local_964 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)local_998,(int *)(local_998 + 8),
                             (int *)(local_998 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_998 + 0x10),false);
          iVar6 = local_968;
        }
        else {
          local_964 = local_964 + -1;
          iVar6 = *(int *)(local_998._0_8_ + (longlong)local_968 * 0x18 + 4);
          iVar7 = local_968;
          if (local_964 != 0) {
            *(undefined4 *)(local_998._0_8_ + (longlong)iVar6 * 0x18) = 0xffffffff;
          }
        }
        local_968 = iVar6;
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_998,local_9c8,iVar7);
        pTVar16 = pTVar24;
        if (local_9c8[0].Pointer != (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0) {
          *(uint *)local_9c8[0].Pointer = uVar21;
          *(longlong *)((longlong)local_9c8[0].Pointer + 8) = lVar13;
          *(undefined4 *)((longlong)local_9c8[0].Pointer + 0x10) = 0xffffffff;
          pTVar16 = local_9c8[0].Pointer;
        }
        uVar17 = *(uint *)pTVar16;
        local_acc = local_9c8[0].Index;
        bVar4 = TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                ::TryReplaceExisting
                          ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                            *)local_998,uVar17,pTVar16,&local_acc,(bool *)0x0);
        if (!bVar4) {
          TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                          *)local_998,uVar17,pTVar16,local_acc);
        }
      }
      pFVar19 = (this->IndexedCacheStorageMetaData).Ptr;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (pFVar19->IndexedCacheEntriesMetaData).ArrayNum);
  }
  uVar21 = local_970;
  local_a90 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0;
  uStack_a2c = 1;
  uStack_a1c = uVar5;
  local_a18 = uVar5;
  if (local_970 != 0) {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_998 + 0x10);
    if (local_978 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_978;
    }
    uVar17 = *(uint *)FVar22;
    while (uVar17 == 0) {
      lVar13 = (longlong)(int)uVar5;
      local_a18 = local_a18 + 0x20;
      uVar5 = uVar5 + 1;
      uStack_a1c = local_970;
      if ((int)((local_970 - 1) + ((int)(local_970 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
      goto LAB_144566810;
      uVar17 = ((uint *)((longlong)FVar22 + 4))[lVar13];
    }
    uStack_a2c = -uVar17 & uVar17;
    uVar23 = (ulonglong)uStack_a2c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a68 = (int)lVar13;
    uStack_a1c = local_a68 + -1 + local_a18;
    if ((int)local_970 < (int)uStack_a1c) {
      uStack_a1c = local_970;
    }
  }
LAB_144566810:
  local_a38 = (longlong *)local_998;
  uVar17 = local_970 & 0xffffffe0;
  uStack_a14 = local_99c;
  local_a28 = (TBitArray<FDefaultBitArrayAllocator> *)(local_998 + 0x10);
  iStack_a10 = local_998._8_4_ - local_964;
  uStack_a20 = 0xffffffff;
  TStack_a00.CurrentBitIndex = uStack_a1c;
  TStack_a00.UnvisitedBitMask = 0xffffffff;
  TStack_a00._padding_ = CONCAT44(uStack_a2c,uVar5);
  iVar6 = (int)local_970 >> 5;
  TStack_a00._28_4_ = local_99c;
  TStack_a00.BaseBitIndex = local_a18;
  uStack_9e0 = CONCAT44(uStack_a0c,iStack_a10);
  bVar12 = (byte)local_970;
  local_ae4 = local_970;
  uStack_a30 = uVar5;
  local_a08 = local_a38;
  TStack_a00.Array = local_a28;
  if (((int)local_970 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar16 = pTVar24;
  pTVar11 = pTVar24;
  pTVar25 = local_a90;
  if (uVar21 != local_970) {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_998 + 0x10);
    if (local_978 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_978;
    }
    uVar5 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar6 * 4);
    while (uVar5 == 0) {
      lVar13 = (longlong)iVar6;
      uVar17 = uVar17 + 0x20;
      iVar6 = iVar6 + 1;
      pTVar16 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0;
      pTVar11 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0;
      local_ae4 = local_970;
      uVar21 = local_970;
      if ((int)((local_970 - 1) + ((int)(local_970 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_144566940;
      uVar5 = ((uint *)((longlong)FVar22 + 4))[lVar13];
    }
    uVar23 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a64 = (int)lVar13;
    local_ae4 = local_a64 + -1 + uVar17;
    pTVar16 = pTVar24;
    pTVar11 = pTVar24;
    uVar21 = local_ae4;
    if ((int)local_970 < (int)local_ae4) {
      local_ae4 = local_970;
      uVar21 = local_970;
    }
  }
LAB_144566940:
  do {
    local_a90 = pTVar25;
    pTVar24 = pTVar11;
    plVar3 = local_a08;
    lVar13 = 0;
    if ((int)local_a08[1] - *(int *)((longlong)local_a08 + 0x34) != (int)uStack_9e0) {
      local_ae8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_ae8);
    }
    uVar5 = local_ac8;
    if (((TStack_a00.CurrentBitIndex == uVar21) &&
        (TStack_a00.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_998 + 0x10))) &&
       (plVar3 == (longlong *)local_998)) {
      if (pTVar24 == (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x0) {
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache"
                     ,0x42,Yes);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u__s__All_caches__150d710b0,
                     (FLogCategoryBase *)&LogIndexedCacheStorageManager);
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
          }
        }
      }
      else if ((TSparseSetElement<TTuple<int,unsigned___int64>_> *)&DAT_00000001 < pTVar16) {
        if (pTVar24 < (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x200000) {
          pTVar24 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)0x200000;
        }
        pTVar11 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)
                  (**(code **)((longlong)::Instance + 0x50))(&::Instance,pTVar24,local_ac8);
        pTVar16 = pTVar24;
        if (pTVar11 < pTVar24) {
          pTVar16 = pTVar11;
        }
        pTVar25 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)
                  ((longlong)pTVar24 - (longlong)pTVar16);
        if ((TSparseSetElement<TTuple<int,unsigned___int64>_> *)
            ((longlong)pTVar24 - (longlong)pTVar16) < pTVar11) {
          pTVar25 = pTVar11;
        }
        this_00 = local_a88;
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache"
                     ,0x42,Yes);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          this_00 = local_a88;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
            this_00 = local_a88;
          }
        }
        do {
          while (pFVar10 = GetCacheStorageMetaData(this_00,uVar5),
                pFVar10 == (FCacheStorageMetaData *)0x0) {
            if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
            }
          }
          bVar4 = FCacheStorageMetaData::CreateCacheStorage(pFVar10,(ulong64)pTVar25);
        } while (!bVar4);
        pFVar10 = GetCacheStorageMetaData(this_00,uVar5);
        if (pFVar10 == (FCacheStorageMetaData *)0x0) {
          if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          }
        }
        else {
          FCacheStorageMetaData::DestroyCacheStorage(pFVar10);
        }
      }
      else if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache",
                   0x42,Yes);
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
      local_950 = 0;
      if ((ForElementType<FSetElementId>)local_958.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_958.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_998);
      FVar15.Data = local_ae0.Data;
      goto LAB_144566e5d;
    }
    lVar20 = 0;
    lVar1 = *plVar3;
    uVar5 = *(uint *)(lVar1 + (longlong)TStack_a00.CurrentBitIndex * 0x18);
    lVar1 = *(longlong *)(lVar1 + 8 + (longlong)TStack_a00.CurrentBitIndex * 0x18);
    lVar9 = (**(code **)((longlong)::Instance + 0x50))(&::Instance,lVar1,uVar5);
    uVar21 = 0;
    if ((int)uVar5 < local_ad8) {
      uVar21 = ~uVar5 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_ae0.Data[(int)uVar5] == (FScriptContainerElement)0x0) {
      if (lVar1 != 0) {
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          local_4c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4c8,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache"
                     ,0x42,Yes);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          if ((void *)local_4c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4c8._padding_);
          }
        }
        goto LAB_144566be6;
      }
    }
    else {
      local_a98 = 0;
      local_aa0 = 0;
      (**(code **)((longlong)::Instance + 0x28))(&::Instance,uVar5,&local_a98,&local_aa0);
      if ((local_a98 == lVar1) && (local_aa0 == lVar9)) {
        lVar20 = lVar13;
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          local_708._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_708,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache"
                     ,0x42,Yes);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          if ((void *)local_708._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_708._padding_);
          }
        }
      }
      else {
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          local_5e8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_5e8,"Experimental::FIndexedCacheStorageManager::EnsureEarlyStartupCache"
                     ,0x42,Yes);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          if ((void *)local_5e8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_5e8._padding_);
          }
        }
        pFVar10 = GetCacheStorageMetaData(local_a88,uVar5);
        if (pFVar10 == (FCacheStorageMetaData *)0x0) {
          if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
          }
        }
        else {
          FCacheStorageMetaData::DestroyCacheStorage(pFVar10);
        }
LAB_144566be6:
        lVar20 = lVar1 + lVar9;
      }
    }
    TStack_a00.UnvisitedBitMask = TStack_a00.UnvisitedBitMask & ~TStack_a00._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a00);
    pTVar16 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)&local_a90->field_0x1;
    pTVar11 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)(&pTVar24->field_0x0 + lVar20);
    pTVar25 = (TSparseSetElement<TTuple<int,unsigned___int64>_> *)&local_a90->field_0x1;
    uVar21 = local_ae4;
    if (lVar20 == 0) {
      pTVar16 = local_a90;
      pTVar11 = pTVar24;
      pTVar25 = local_a90;
    }
  } while( true );
}

// EnumerateCacheStorages @ 144566ea0

void __thiscall
Experimental::FIndexedCacheStorageManager::EnumerateCacheStorages
          (FIndexedCacheStorageManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar13 = *(int *)&(this->StorageNameToStorageIndex).field_0x8 -
           *(int *)&(this->StorageNameToStorageIndex).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar9 = *(int *)&(this->StorageNameToStorageIndex).field_0x28;
  puVar3 = &(this->StorageNameToStorageIndex).field_0x10;
  iVar14 = 0;
  uVar13 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(this->StorageNameToStorageIndex).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_144566f8d;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar13 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar10;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_144566f8d:
  uVar12 = *(uint *)&(this->StorageNameToStorageIndex).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar13,iVar14);
  uVar13 = uVar12 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->StorageNameToStorageIndex).field_0x8 -
                       *(int *)&(this->StorageNameToStorageIndex).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->StorageNameToStorageIndex).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(this->StorageNameToStorageIndex).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1445670a0;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_1445670a0:
  while( true ) {
    if (*(int *)&(this->StorageNameToStorageIndex).field_0x8 -
        *(int *)&(this->StorageNameToStorageIndex).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    pFVar11 = (FScriptContainerElement *)
              (*(longlong *)&this->StorageNameToStorageIndex +
              (longlong)TStack_68.CurrentBitIndex * 0x20);
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar9 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                       (FString *)pFVar11);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// Get @ 1445671d0

FIndexedCacheStorageManager * __cdecl Experimental::FIndexedCacheStorageManager::Get(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Experimental::FIndexedCacheStorageManager::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      GIndexedCacheStorageManager = &::Instance;
      _Init_thread_footer(&::_TSS1);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetCacheEarlyStartupSize @ 1445672b0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
Experimental::FIndexedCacheStorageManager::GetCacheEarlyStartupSize
          (FIndexedCacheStorageManager *this,int param_1)

{
  FCacheStorageMetaData *pFVar1;
  
  pFVar1 = GetCacheStorageMetaData(this,param_1);
  if (pFVar1 == (FCacheStorageMetaData *)0x0) {
    if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    return 0;
  }
  return pFVar1->EarlyStartupSize;
}

// GetCacheStorageCapacity @ 144567300

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
Experimental::FIndexedCacheStorageManager::GetCacheStorageCapacity
          (FIndexedCacheStorageManager *this,int param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  ulong64 uVar3;
  FCacheStorageMetaData *pFVar4;
  bool bVar5;
  ulong64 local_res20;
  undefined8 local_18 [2];
  
  pFVar4 = GetCacheStorageMetaData(this,param_1);
  if (pFVar4 != (FCacheStorageMetaData *)0x0) {
    LOCK();
    bVar5 = (pFVar4->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      (pFVar4->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(&pFVar4->Mutex);
    }
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)
                 &`public:_unsigned___int64___cdecl_Experimental::FCacheStorageMetaData::GetCacheStorageInfo(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    local_res20 = 0;
    local_18[0] = 0;
    if (pFVar4->CacheStorageState == Deleted) {
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)
                   &`public:_unsigned___int64___cdecl_Experimental::FCacheStorageMetaData::GetCacheStorageInfo(void)___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)
                   &`public:_unsigned___int64___cdecl_Experimental::FCacheStorageMetaData::GetCacheStorageInfo(void)___ptr64'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      (**(code **)((longlong)::Instance + 0x28))
                (&::Instance,pFVar4->CacheIndex,&local_res20,local_18);
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)
                   &`public:_unsigned___int64___cdecl_Experimental::FCacheStorageMetaData::GetCacheStorageInfo(void)___ptr64'
                    ::__l60::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      if ((pFVar4->ConditionVariable).bHasWaiters != (atomic<bool>)0x0) {
        LOCK();
        (pFVar4->ConditionVariable).bHasWaiters = (atomic<bool>)0x0;
        UNLOCK();
        UE::ParkingLot::WakeAll(&pFVar4->ConditionVariable);
      }
    }
    uVar3 = local_res20;
    LOCK();
    pFVar1 = &pFVar4->Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&pFVar4->Mutex);
    }
    return uVar3;
  }
  if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  return 0;
}

// GetCacheStorageMetaData @ 1445674b0

FCacheStorageMetaData * __thiscall
Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData
          (FIndexedCacheStorageManager *this,int param_1)

{
  FIndexedCacheStorageMetaData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCacheStorageMetaData *pFVar4;
  FCacheStorageMetaData *pFVar5;
  
  if (((0 < param_1) &&
      (pFVar1 = (this->IndexedCacheStorageMetaData).Ptr,
      pFVar1 != (FIndexedCacheStorageMetaData *)0x0)) &&
     (param_1 < (pFVar1->IndexedCacheEntriesMetaData).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCacheStorageMetaData *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = *(FCacheStorageMetaData **)
              ((pFVar1->IndexedCacheEntriesMetaData).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (pFVar4 != (FCacheStorageMetaData *)0x0) {
      pFVar5 = (FCacheStorageMetaData *)0x0;
      if (1 < (pFVar4->MountName).Data.ArrayNum) {
        pFVar5 = pFVar4;
      }
      return pFVar5;
    }
  }
  return (FCacheStorageMetaData *)0x0;
}

// GetMountName @ 1445678f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
Experimental::FIndexedCacheStorageManager::GetMountName
          (FIndexedCacheStorageManager *this,FString *__return_storage_ptr__,int param_1)

{
  FCacheStorageMetaData *pFVar1;
  
  pFVar1 = GetCacheStorageMetaData(this,param_1);
  if (pFVar1 == (FCacheStorageMetaData *)0x0) {
    if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&pFVar1->MountName);
  return __return_storage_ptr__;
}

// GetMountPath @ 144567970

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
Experimental::FIndexedCacheStorageManager::GetMountPath
          (FIndexedCacheStorageManager *this,FString *__return_storage_ptr__,int param_1)

{
  FCacheStorageMetaData *pFVar1;
  
  pFVar1 = GetCacheStorageMetaData(this,param_1);
  if (pFVar1 == (FCacheStorageMetaData *)0x0) {
    if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (**(code **)((longlong)::Instance + 0x30))(&::Instance,__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetStorageIndex @ 144567a30

int __thiscall
Experimental::FIndexedCacheStorageManager::GetStorageIndex
          (FIndexedCacheStorageManager *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  wchar_t *pwVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
  iVar2 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->StorageNameToStorageIndex,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->StorageNameToStorageIndex).field_0x0;
    piVar5 = (int *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return *piVar5;
    }
  }
  return 0;
}

// Initialize @ 144567ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FIndexedCacheStorageManager::Initialize(FIndexedCacheStorageManager *this)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  void *_Src;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType *pFVar13;
  FIndexedCacheStorageMetaData *pFVar14;
  int iVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  ForAnyElementType *pFVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  longlong lVar21;
  FIndexedCacheStorageMetaData *pFVar22;
  ForAnyElementType FVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  ForAnyElementType FVar27;
  int iVar28;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  FString local_1a8;
  ForAnyElementType local_198;
  int local_190 [2];
  FString local_188;
  FString local_178;
  TArray<bool,TSizedDefaultAllocator<32>_> local_168;
  int local_158;
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  undefined4 local_110;
  int local_10c;
  uint local_108;
  FString local_100;
  uint *local_f0;
  ulonglong local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString *local_a0;
  undefined4 *local_98;
  FString local_90;
  FScriptContainerElement *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement local_68 [16];
  TStringView<wchar_t> local_58;
  
  uVar6 = (**(code **)((longlong)::Instance + 8))(&::Instance);
  if (uVar6 == 0) {
    return;
  }
  iVar28 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190[0] = 0;
  local_190[1] = 0;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) goto LAB_14456867b;
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar6,&local_198,local_190,local_190 + 1);
    memset(local_198.Data + (longlong)iVar7 * 8,0,(longlong)(int)uVar6 << 3);
  }
  local_f0 = (uint *)0x0;
  local_e8 = 0;
  (**(code **)((longlong)::Instance + 0x20))(&::Instance,&local_f0);
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) {
LAB_14456867b:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar6,&local_168.AllocatorInstance,&local_168.ArrayNum,
                       &local_168.ArrayMax);
    memset(local_168.AllocatorInstance.Data + iVar7,0,(longlong)(int)uVar6);
  }
  iVar7 = (int)local_e8;
  uVar16 = (ulonglong)(int)local_e8;
  puVar1 = local_f0 + uVar16;
  puVar24 = local_f0;
  while( true ) {
    if ((int)uVar16 != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar24 == puVar1) break;
    uVar11 = *puVar24;
    uVar8 = 0;
    if ((int)uVar11 < local_168.ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar24 = puVar24 + 1;
    local_168.AllocatorInstance.Data[(int)uVar11] = (FScriptContainerElement)0x1;
    uVar16 = local_e8 & 0xffffffff;
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"IndexedCacheStorage",L"Storage",&local_150,&GEngineIni);
  uVar16 = (ulonglong)local_150.ArrayNum;
  local_d8 = local_150.AllocatorInstance.Data + uVar16 * 0x10;
  local_158 = 0;
  local_108 = local_150.ArrayNum;
  FVar23.Data = local_150.AllocatorInstance.Data;
  while( true ) {
    pFVar12 = local_d8;
    pFVar22 = (FIndexedCacheStorageMetaData *)0x0;
    local_e0 = FVar23.Data;
    if (local_150.ArrayNum != (int)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar23.Data == pFVar12) break;
    local_1a8.Data.ArrayNum = *(int *)(FVar23.Data + 8);
    lVar20 = (longlong)local_1a8.Data.ArrayNum;
    _Src = *(void **)FVar23.Data;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1a8.Data.ArrayNum == 0) {
      local_1a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                 local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
      memcpy(local_1a8.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_1a8);
    iVar15 = 0;
    iVar9 = 0;
    iVar7 = local_1a8.Data.ArrayNum + -1;
    if (local_1a8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
    }
    if (1 < iVar7) {
      iVar7 = 1;
    }
    iVar26 = iVar15;
    if (0 < iVar7) {
      iVar26 = iVar7;
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_d0,(wchar_t *)FVar17.Data,iVar26);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar17.Data = local_d0.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar17.Data,L"(");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      ::FString::RemoveAt(&local_1a8,0,1,No);
    }
    iVar7 = local_1a8.Data.ArrayNum + -1;
    FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
    if (local_1a8.Data.ArrayNum == 0) {
      iVar7 = iVar9;
      FVar17.Data = (FScriptContainerElement *)L"";
    }
    iVar26 = iVar7;
    if (1 < iVar7) {
      iVar26 = 1;
    }
    iVar10 = iVar9;
    if (0 < iVar26) {
      iVar10 = iVar26;
    }
    ::FString::FString(&local_c0,(wchar_t *)(FVar17.Data + ((longlong)iVar7 - (longlong)iVar10) * 2)
                      );
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar17.Data = local_c0.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar17.Data,L")");
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = local_1a8.Data.ArrayNum + -1;
      if (local_1a8.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar26 = iVar9;
      if (0 < iVar7) {
        iVar26 = iVar7;
      }
      ::FString::RemoveAt(&local_1a8,iVar26,1,No);
    }
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    bVar5 = FParse::Value((wchar_t *)FVar17.Data,L"Name=",&local_188,true,(wchar_t **)0x0);
    if (bVar5) {
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      bVar5 = FParse::Value((wchar_t *)FVar17.Data,L"Index=",(int *)local_res20);
      if (bVar5) {
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1a8.Data.ArrayNum != 0) {
          FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        bVar5 = FParse::Value((wchar_t *)FVar17.Data,L"Mount=",&local_178,true,(wchar_t **)0x0);
        if (bVar5) {
          iVar7 = local_188.Data.ArrayNum + -1;
          if (local_188.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          if (iVar7 == 0) {
            if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
            }
          }
          else if (((int)local_res20[0] < 1) || ((int)uVar6 <= (int)local_res20[0])) {
            if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
            }
          }
          else {
            iVar7 = local_178.Data.ArrayNum + -1;
            if (local_178.Data.ArrayNum == 0) {
              iVar7 = iVar9;
            }
            if (iVar7 == 0) {
              if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
              }
            }
            else {
              ::FString::ReplaceInline(&local_188,L"\"",L"",IgnoreCase);
              ::FString::ReplaceInline(&local_178,L"\"",L"",IgnoreCase);
              local_110 = 0;
              if (local_188.Data.ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                iVar15 = local_188.Data.ArrayNum + -1;
                pwVar19 = (wchar_t *)local_188.Data.AllocatorInstance.Data;
              }
              uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar19);
              iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>
                                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                                  *)&this->StorageNameToStorageIndex,uVar11,&local_188);
              if ((iVar7 == -1) ||
                 (lVar20 = (longlong)iVar7 * 0x20 + *(longlong *)&this->StorageNameToStorageIndex,
                 lVar20 == 0)) {
                local_a0 = &local_188;
                local_98 = &local_110;
                TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TPairInitializer<FString_const_&,int_&&>_>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&this->StorageNameToStorageIndex,(uint)&local_10c,
                           (TPairInitializer<FString_const_&,int_&&> *)(ulonglong)uVar11,
                           (bool *)&local_a0);
                lVar20 = (longlong)local_10c * 0x20 + *(longlong *)&this->StorageNameToStorageIndex;
              }
              if (*(int *)(lVar20 + 0x10) < 1) {
                uVar11 = 0;
                *(uint *)(lVar20 + 0x10) = local_res20[0];
                local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FVar17.Data = (FScriptContainerElement *)L"";
                if (local_1a8.Data.ArrayNum != 0) {
                  FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
                }
                pFVar12 = (FScriptContainerElement *)0x0;
                local_100.Data.ArrayNum = 0;
                local_100.Data.ArrayMax = 0;
                bVar5 = FParse::Value((wchar_t *)FVar17.Data,L"EarlyStartup=",&local_100,true,
                                      (wchar_t **)0x0);
                if (bVar5) {
                  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_120.Data.ArrayNum = 0;
                  local_120.Data.ArrayMax = 0;
                  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_130.Data.ArrayNum = 0;
                  local_130.Data.ArrayMax = 0;
                  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_140.Data.ArrayNum = 0;
                  local_140.Data.ArrayMax = 0;
                  bVar5 = GetIniParameters(&local_120,&local_130,&local_140,&local_100);
                  if (bVar5) {
                    FVar17.Data = (FScriptContainerElement *)L"";
                    if (local_120.Data.ArrayNum != 0) {
                      FVar17.Data = local_120.Data.AllocatorInstance.Data;
                    }
                    ::FString::FString(&local_90,(wchar_t *)FVar17.Data);
                    FVar17.Data = (FScriptContainerElement *)L"";
                    if (local_140.Data.ArrayNum != 0) {
                      FVar17.Data = local_140.Data.AllocatorInstance.Data;
                    }
                    FVar27.Data = (FScriptContainerElement *)L"";
                    if (local_130.Data.ArrayNum != 0) {
                      FVar27.Data = local_130.Data.AllocatorInstance.Data;
                    }
                    FConfigCacheIni::GetStr
                              (GConfig,&local_b0,(wchar_t *)FVar27.Data,(wchar_t *)FVar17.Data,
                               &local_90);
                    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Data.AllocatorInstance.Data);
                    }
                    local_78 = local_b0.Data.AllocatorInstance.Data;
                    uStack_70 = local_b0.Data.ArrayNum - 1;
                    if (local_b0.Data.ArrayNum == 0) {
                      uStack_70 = uVar11;
                    }
                    local_58._12_4_ = uStack_6c;
                    local_58.Size = uStack_70;
                    local_58.DataPtr = (wchar_t *)local_b0.Data.AllocatorInstance.Data;
                    pFVar12 = (FScriptContainerElement *)ParseSizeParam(&local_58);
                    if ((pFVar12 == (FScriptContainerElement *)0x0) &&
                       (1 < (byte)LogIndexedCacheStorageManager._0_1_)) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
                    }
                    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                    }
                  }
                  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_140.Data.AllocatorInstance.Data);
                  }
                  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_130.Data.AllocatorInstance.Data);
                  }
                  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_120.Data.AllocatorInstance.Data);
                  }
                }
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                lVar20 = (longlong)(int)local_res20[0];
                uVar8 = uVar11;
                if ((int)local_res20[0] < local_190[0]) {
                  uVar8 = ~local_res20[0] >> 0x1f;
                }
                if (uVar8 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                lVar21 = (longlong)(int)local_res20[0];
                if (*(longlong *)(local_198.Data + lVar20 * 8) == 0) {
                  if ((int)local_res20[0] < local_168.ArrayNum) {
                    uVar11 = ~local_res20[0] >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar25 = local_168.AllocatorInstance.Data + lVar21;
                  pFVar13 = ::operator_new(0x28);
                  FVar17.Data = local_178.Data.AllocatorInstance.Data;
                  uVar11 = local_res20[0];
                  if (pFVar13 != (ForAnyElementType *)0x0) {
                    FVar2 = *pFVar25;
                    pFVar13->Data = (FScriptContainerElement *)0x0;
                    lVar20 = (longlong)local_178.Data.ArrayNum;
                    *(int *)&pFVar13[1].Data = local_178.Data.ArrayNum;
                    piVar4 = (int *)((longlong)&pFVar13[1].Data + 4);
                    if (local_178.Data.ArrayNum == 0) {
                      *piVar4 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_178.Data.ArrayNum,0,pFVar13,local_178.Data.ArrayNum,
                                 piVar4);
                      memcpy(pFVar13->Data,FVar17.Data,lVar20 * 2);
                    }
                    *(uint *)&pFVar13[2].Data = uVar11;
                    *(bool *)((longlong)&pFVar13[4].Data + 4) =
                         FVar2 != (FScriptContainerElement)0x0;
                    pFVar13[3].Data = pFVar12;
                    *(undefined4 *)&pFVar13[4].Data = 0;
                    *(undefined2 *)((longlong)&pFVar13[4].Data + 5) = 0;
                    FVar23.Data = local_e0;
                    iVar28 = local_158;
                  }
                  lVar20 = (longlong)(int)local_res20[0];
                  uVar11 = 0;
                  if ((int)local_res20[0] < local_190[0]) {
                    uVar11 = ~local_res20[0] >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar12 = local_198.Data + lVar20 * 8;
                  if (pFVar12 == local_68) {
                    if (pFVar13 != (ForAnyElementType *)0x0) {
                      pFVar18 = pFVar13;
                      if (pFVar13->Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(pFVar13->Data);
                      }
                      goto LAB_144568431;
                    }
                  }
                  else {
                    pFVar18 = *(ForAnyElementType **)pFVar12;
                    *(ForAnyElementType **)pFVar12 = pFVar13;
                    if (pFVar18 != (ForAnyElementType *)0x0) {
                      if (pFVar18->Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(pFVar18->Data);
                      }
LAB_144568431:
                      ::operator_delete(pFVar18,0x28);
                    }
                  }
                  iVar28 = iVar28 + 1;
                  local_158 = iVar28;
                }
                else {
                  if ((int)local_res20[0] < local_190[0]) {
                    uVar11 = ~local_res20[0] >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              ((FStaticBasicLogRecord *)&PTR_u_Found_an_existi_150d71700,
                               (FLogCategoryBase *)&LogIndexedCacheStorageManager);
                  }
                }
              }
              else if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
              }
            }
          }
        }
      }
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    FVar23.Data = FVar23.Data + 0x10;
    uVar16 = (ulonglong)local_108;
  }
  this->bHasRegisteredEntries = iVar28 != 0;
  if (iVar28 == 0) goto LAB_144568603;
  pFVar14 = ::operator_new(0x10);
  if (pFVar14 != (FIndexedCacheStorageMetaData *)0x0) {
    (pFVar14->IndexedCacheEntriesMetaData).AllocatorInstance.Data = local_198.Data;
    local_198.Data = (FScriptContainerElement *)0x0;
    (pFVar14->IndexedCacheEntriesMetaData).ArrayNum = local_190[0];
    (pFVar14->IndexedCacheEntriesMetaData).ArrayMax = local_190[1];
    local_190[0] = 0;
    local_190[1] = 0;
    pFVar22 = pFVar14;
  }
  if (this == (FIndexedCacheStorageManager *)(local_68 + 8)) {
    if (pFVar22 == (FIndexedCacheStorageMetaData *)0x0) goto LAB_1445685f7;
    DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int>
              ((TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>
                *)(pFVar22->IndexedCacheEntriesMetaData).AllocatorInstance.Data,
               (pFVar22->IndexedCacheEntriesMetaData).ArrayNum);
    pFVar12 = (pFVar22->IndexedCacheEntriesMetaData).AllocatorInstance.Data;
    pFVar14 = pFVar22;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
  }
  else {
    pFVar14 = (this->IndexedCacheStorageMetaData).Ptr;
    (this->IndexedCacheStorageMetaData).Ptr = pFVar22;
    if (pFVar14 == (FIndexedCacheStorageMetaData *)0x0) goto LAB_1445685f7;
    DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int>
              ((TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>
                *)(pFVar14->IndexedCacheEntriesMetaData).AllocatorInstance.Data,
               (pFVar14->IndexedCacheEntriesMetaData).ArrayNum);
    pFVar12 = (pFVar14->IndexedCacheEntriesMetaData).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
  }
  ::operator_delete(pFVar14,0x10);
LAB_1445685f7:
  EnsureEarlyStartupCache(this,&local_168);
LAB_144568603:
  DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_f0 != (uint *)0x0) {
    FMemory::Free(local_f0);
  }
  DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int>
            ((TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>
              *)local_198.Data,local_190[0]);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// MountCacheStorage @ 144568ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
Experimental::FIndexedCacheStorageManager::MountCacheStorage
          (FIndexedCacheStorageManager *this,FString *__return_storage_ptr__,int param_1)

{
  FCacheStorageMetaData *this_00;
  
  this_00 = GetCacheStorageMetaData(this,param_1);
  if (this_00 == (FCacheStorageMetaData *)0x0) {
    if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FCacheStorageMetaData::MountCacheStorage(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SupportsIndexedCacheStorage @ 144568d00

bool __thiscall
Experimental::FIndexedCacheStorageManager::SupportsIndexedCacheStorage
          (FIndexedCacheStorageManager *this)

{
  char cVar1;
  
  if (this->bHasRegisteredEntries != false) {
    cVar1 = (**(code **)::Instance)(&::Instance);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// UnmountCacheStorage @ 144569230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FIndexedCacheStorageManager::UnmountCacheStorage
          (FIndexedCacheStorageManager *this,int param_1)

{
  FCacheStorageMetaData *this_00;
  
  this_00 = GetCacheStorageMetaData(this,param_1);
  if (this_00 != (FCacheStorageMetaData *)0x0) {
    FCacheStorageMetaData::UnmountCacheStorage(this_00);
    return;
  }
  if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    return;
  }
  return;
}

