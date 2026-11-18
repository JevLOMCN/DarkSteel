// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FPersistentStorageManager @ 14167a730

FPersistentStorageManager * __thiscall
FPersistentStorageManager::FPersistentStorageManager(FPersistentStorageManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPersistentStorageManager *pFVar4;
  undefined4 uStack_1c;
  TArrayView<FPersistentStorageCategory_const_,int> local_18;
  
  this->bInitialized = false;
  (this->RootDirectories).RootDirectories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDirectories).RootDirectories.ArrayNum = 0;
  (this->RootDirectories).RootDirectories.ArrayMax = 0;
  InitCategories(&this->Categories);
  iVar1 = (this->Categories).Categories.ArrayNum;
  local_18.DataPtr =
       (FPersistentStorageCategory *)(this->Categories).Categories.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPersistentStorageManager *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  FRootDirInfo::Init(&this->RootDirectories,&local_18);
  return this;
}

// GenerateCategoryStats @ 141697d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
* __thiscall
FPersistentStorageManager::GenerateCategoryStats
          (FPersistentStorageManager *this,
          TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
          *__return_storage_ptr__)

{
  FString *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
  *pTVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *SRWLock;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_188 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TPairInitializer<FString_const_&,FPersistentStorageCategory::CategoryStat_&&> local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  FScriptContainerElement *local_f0;
  FString *local_e8;
  FString local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_70;
  int local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [3];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar11 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar14 = (this->Categories).Categories.ArrayNum;
  if (((int)uVar14 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  if (uVar14 <= (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
                      *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_141697ff1;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_141697ff1;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar16 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar16 = 0;
        goto LAB_141697e2e;
      }
    }
    else {
LAB_141697e2e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar16,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar12 = uVar11;
      do {
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar10 + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar14 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    uStack_144 = 1;
    local_148 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    if (uVar14 != 0) {
      puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)local_110.Array;
      }
      uVar16 = *puVar18;
      uVar12 = uVar11;
      while (uVar16 == 0) {
        uStack_130 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_130;
        iVar9 = (int)uVar11;
        local_148 = iVar9 + 1;
        uVar11 = (ulonglong)local_148;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_141697f31;
        uVar16 = puVar18[(longlong)iVar9 + 1];
      }
      uStack_144 = -uVar16 & uVar16;
      uVar11 = (ulonglong)uStack_144 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_134 = (int)lVar2 + -1 + uStack_130;
      uVar11 = (ulonglong)uStack_134;
      if ((int)uVar14 < (int)uStack_134) {
LAB_141697f31:
        uVar11 = (ulonglong)uVar14;
        uStack_134 = uVar14;
      }
    }
    local_110._padding_ = CONCAT44(uStack_144,local_148);
    local_110.CurrentBitIndex = uStack_134;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110._28_4_ = uStack_12c;
    local_110.BaseBitIndex = uStack_130;
    local_120.Value = (CategoryStat *)__return_storage_ptr__;
    if ((int)uVar11 < (int)uVar14) {
      do {
        pFVar15 = ((local_120.Value)->CategoryName).Data.AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0xa0;
        if (*(int *)(pFVar15 + 8) == 0) {
          pwVar13 = L"";
          iVar9 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)pFVar15;
          iVar9 = *(int *)(pFVar15 + 8) + -1;
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
        uVar14 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar14;
        *(uint *)(pFVar15 + 0x9c) = uVar14;
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar12 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(pFVar15 + 0x98) = *(undefined4 *)(puVar10 + uVar12 * 4);
        *(int *)(puVar10 + uVar12 * 4) = (int)uVar11;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar11 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_141697ff1:
  iVar9 = (this->Categories).Categories.ArrayNum;
  pFVar15 = (this->Categories).Categories.AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  uVar5 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  pFVar19 = pFVar15 + (longlong)iVar9 * 0x108;
  if (pFVar15 != pFVar19) {
    local_e8 = &local_d8;
    SRWLock = pFVar15 + 0x88;
    do {
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      ::FString::FString(&local_d8,(FString *)pFVar15);
      local_c8 = *(undefined8 *)&SRWLock[-0x58].field_0x0;
      local_c0 = *(undefined8 *)&SRWLock[-0x68].field_0x0;
      local_b8 = *(undefined8 *)&SRWLock[-0x60].field_0x0;
      local_b0._0_8_ = (FScriptContainerElement *)0x0;
      local_b0._8_8_ = 0;
      local_90 = (void *)0x0;
      local_88 = uVar4;
      uStack_80 = uVar5;
      local_70 = (ForElementType<FSetElementId>)0x0;
      local_68 = 0;
      TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                   *)local_b0,
                  (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                   *)(SRWLock + -0x50));
      iVar9 = *(int *)&SRWLock[-0x70].field_0x0;
      pFVar1 = *(FString **)&SRWLock[-0x78].field_0x0;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = iVar9;
      if (iVar9 == 0) {
        local_54[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar9,0,&local_60,iVar9,local_54);
        ConstructItems<FString,FString,int>(local_60.Data,pFVar1,iVar9);
      }
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      local_f0 = pFVar15;
      TSet<TTuple<FString,FPersistentStorageCategory::CategoryStat>,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FPersistentStorageCategory::CategoryStat_&&>_>
                ((TSet<TTuple<FString,FPersistentStorageCategory::CategoryStat>,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_120,(bool *)&local_f0);
      DestructItems<FString,int>((FString *)local_60.Data,local_58);
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      local_68 = 0;
      if (local_70 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_70);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b0,0,local_b0._8_4_);
      iVar9 = SUB84(local_b0._8_8_,4);
      local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
      }
      uVar14 = local_88._4_4_;
      uStack_80 = 0xffffffff;
      local_88 = (ulonglong)local_88._4_4_ << 0x20;
      if (0x80 < uVar14) {
        local_88 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pFVar15 = pFVar15 + 0x108;
      SRWLock = SRWLock + 0x108;
    } while (pFVar15 != pFVar19);
  }
  return __return_storage_ptr__;
}

// Get @ 1416982f0

FPersistentStorageManager * __cdecl FPersistentStorageManager::Get(void)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FPersistentStorageManager *pFVar4;
  undefined4 uStack_1c;
  TArrayView<FPersistentStorageCategory_const_,int> local_18;
  
  if ((GConfig != (FConfigCacheIni *)0x0) && (GConfig->bIsReadyForUse != false)) {
    bVar3 = FCommandLine::IsInitialized();
    if ((bVar3) && (GIsCriticalError == false)) goto LAB_14169833e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsReady()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\IPlatformFileManagedStorageWrapper.cpp"
                     ,0xca,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPersistentStorageManager *)(*pcVar1)();
    return pFVar4;
  }
LAB_14169833e:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitCategories(&::Singleton.Categories);
      iVar2 = ::Singleton.Categories.Categories.ArrayNum;
      local_18.DataPtr =
           (FPersistentStorageCategory *)::Singleton.Categories.Categories.AllocatorInstance;
      if (::Singleton.Categories.Categories.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPersistentStorageManager *)(*pcVar1)();
          return pFVar4;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar2;
      FRootDirInfo::Init(&::Singleton.RootDirectories,&local_18);
      atexit(`FPersistentStorageManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// InitCategories @ 1416a29a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCategoryInfo * __cdecl
FPersistentStorageManager::InitCategories(FCategoryInfo *__return_storage_ptr__)

{
  void *_Src;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FCategoryInfo *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  int iVar19;
  long64 lVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  wchar_t *pwVar27;
  uint uVar28;
  undefined1 auStackY_388 [32];
  <lambda_1> local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345 [5];
  FString local_340;
  TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_> local_330;
  FString local_320;
  TArray<FString,TSizedDefaultAllocator<32>_> local_310;
  FString local_300;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f0;
  uint local_2e0;
  uint local_2dc;
  FScriptContainerElement *local_2d8;
  FString local_2d0;
  longlong *local_2c0;
  uint uStack_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  long64 local_290;
  longlong local_288;
  long64 local_280;
  int local_278;
  int local_274;
  int local_270;
  undefined1 local_26c [20];
  FCategoryInfo *local_258;
  undefined1 local_250 [16];
  int local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_208;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f8;
  FString local_1e8;
  FString local_1d8;
  int local_1c8;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FString local_160;
  FString *local_150;
  FString *local_148;
  FString local_140;
  FString *local_130;
  FString *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0 [2];
  undefined4 local_b4;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_258 = __return_storage_ptr__;
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\IPlatformFileManagedStorageWrapper.cpp"
                         ,0xd8,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FCategoryInfo *)(*pcVar2)();
    return pFVar9;
  }
  local_5c = 0x80;
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  local_330.ArrayMax = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar24 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  pFVar10 = FPaths::ProjectPersistentDownloadDir(&local_110);
  pFVar10 = FPaths::ConvertRelativePathToFull(&local_120,pFVar10);
  ::FString::FString(&local_160,L"[persistent]");
  local_130 = &local_160;
  local_128 = pFVar10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FString_&&,FString_&&> *)local_26c,(bool *)&local_130);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  pFVar10 = FPaths::ConvertRelativePathToFull(&local_100,pFVar10);
  ::FString::FString(&local_140,L"[saved]");
  local_150 = &local_140;
  local_148 = pFVar10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FString_&&,FString_&&> *)local_250,(bool *)&local_150);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  uVar21 = local_60;
  uStack_2b4 = 1;
  local_2a0 = 0;
  uStack_2a4 = local_2a0;
  if (local_60 != 0) {
    puVar26 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar26 = local_68;
    }
    uVar28 = *puVar26;
    local_2a0 = 0;
    uVar24 = 0;
    while (uVar28 == 0) {
      lVar15 = (longlong)(int)uVar24;
      local_2a0 = local_2a0 + 0x20;
      uVar24 = uVar24 + 1;
      uStack_2a4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
      goto LAB_1416a2bf3;
      uVar28 = (puVar26 + 1)[lVar15];
    }
    uStack_2b4 = -uVar28 & uVar28;
    uVar17 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c8 = (int)lVar15;
    uStack_2a4 = (local_2a0 - 1) + local_1c8;
    if ((int)local_60 < (int)uStack_2a4) {
      uStack_2a4 = local_60;
    }
  }
LAB_1416a2bf3:
  local_2c0 = (longlong *)local_88;
  uStack_29c = local_b4;
  local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_298 = local_88._8_4_ - local_54;
  uVar28 = local_60 & 0xffffffe0;
  TStack_1b8._padding_ = CONCAT44(uStack_2b4,uVar24);
  uStack_2a8 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = uStack_2a4;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)local_60 >> 5;
  TStack_1b8._28_4_ = local_b4;
  TStack_1b8.BaseBitIndex = local_2a0;
  uStack_198 = CONCAT44(uStack_294,iStack_298);
  bVar14 = (byte)local_60;
  uStack_2b8 = uVar24;
  local_1c0 = local_2c0;
  TStack_1b8.Array = local_2b0;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FCategoryInfo *)(*pcVar2)();
    return pFVar9;
  }
  if (uVar21 != local_60) {
    puVar26 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar26 = local_68;
    }
    uVar24 = -1 << (bVar14 & 0x1f) & puVar26[iVar19];
    while (uVar24 == 0) {
      lVar15 = (longlong)iVar19;
      uVar28 = uVar28 + 0x20;
      iVar19 = iVar19 + 1;
      uVar21 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_1416a2d30;
      uVar24 = (puVar26 + 1)[lVar15];
    }
    uVar17 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_278 = (int)lVar15;
    uVar21 = local_278 + -1 + uVar28;
    if ((int)local_60 < (int)uVar21) {
      uVar21 = local_60;
    }
  }
LAB_1416a2d30:
  while( true ) {
    plVar4 = local_1c0;
    if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
      local_347 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_347);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar21) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar4 == (longlong *)local_88)) break;
    lVar15 = *plVar4 + (longlong)TStack_1b8.CurrentBitIndex * 0x28;
    bVar5 = ::FString::EndsWith((FString *)(lVar15 + 0x10),L"/",1,IgnoreCase);
    if (!bVar5) {
      ::FString::AppendChars((FString *)(lVar15 + 0x10),L"/",1);
    }
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"PersistentStorageManager",L"Categories",&local_2f0,&GEngineIni);
  iVar19 = local_2f0.ArrayNum;
  if (local_2f0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_2f0._8_8_ & 0xffffffff);
  }
  DestructItems<FPersistentStorageCategory,int>
            ((FPersistentStorageCategory *)local_330.AllocatorInstance.Data,local_330.ArrayNum);
  if (local_330.ArrayMax != iVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,iVar19,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
  }
  uVar11 = (ulonglong)local_2f0.ArrayNum;
  local_26c._12_8_ = local_2f0.AllocatorInstance.Data + uVar11 * 0x10;
  local_2dc = local_2f0.ArrayNum;
  uVar17 = uVar11;
  FVar22.Data = local_2f0.AllocatorInstance.Data;
  do {
    uVar3 = local_26c._12_8_;
    local_2d8 = FVar22.Data;
    if ((int)uVar11 != (int)uVar17) {
      local_346 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_346)
      ;
    }
    iVar19 = 0;
    if (FVar22.Data == (FScriptContainerElement *)uVar3) {
      local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d0.Data.ArrayNum = 0;
      local_2d0.Data.ArrayMax = 0;
      FConfigCacheIni::GetString
                (GConfig,L"PersistentStorageManager",L"DefaultCategoryName",&local_2d0,&GEngineIni);
      iVar19 = AlgoImpl::
               IndexOfBy<TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_>,FString,_FPersistentStorageManager::InitCategories_::__l2::<lambda_1>_>
                         (&local_330,&local_2d0,local_348);
      if ((iVar19 == -1) && (1 < (byte)LogPlatformFileManagedStorage._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
      }
      pFVar9 = local_258;
      FVar22.Data = local_330.AllocatorInstance.Data;
      local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_258->Categories).AllocatorInstance.Data = FVar22.Data;
      (local_258->Categories).ArrayNum = local_330.ArrayNum;
      (local_258->Categories).ArrayMax = local_330.ArrayMax;
      local_258->DefaultCategory = iVar19;
      local_330.ArrayNum = 0;
      local_330.ArrayMax = 0;
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_2f0.AllocatorInstance.Data,local_2f0.ArrayNum);
      if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.AllocatorInstance.Data);
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      DestructItems<FPersistentStorageCategory,int>
                ((FPersistentStorageCategory *)local_330.AllocatorInstance.Data,local_330.ArrayNum);
      if ((FPersistentStorageCategory *)local_330.AllocatorInstance.Data !=
          (FPersistentStorageCategory *)0x0) {
        FMemory::Free(local_330.AllocatorInstance.Data);
      }
      return pFVar9;
    }
    local_340.Data.ArrayNum = *(int *)(FVar22.Data + 8);
    lVar15 = (longlong)local_340.Data.ArrayNum;
    _Src = *(void **)FVar22.Data;
    local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_340.Data.ArrayNum == 0) {
      local_340.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_340.Data.ArrayNum,0,(ForAnyElementType *)&local_340,
                 local_340.Data.ArrayNum,&local_340.Data.ArrayMax);
      memcpy(local_340.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_340);
    iVar7 = local_340.Data.ArrayNum + -1;
    if (local_340.Data.ArrayNum == 0) {
      iVar7 = iVar19;
    }
    if (1 < iVar7) {
      iVar7 = 1;
    }
    iVar25 = iVar19;
    if (0 < iVar7) {
      iVar25 = iVar7;
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_340.Data.ArrayNum != 0) {
      FVar16.Data = local_340.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize((FString *)(local_250 + 8),(wchar_t *)FVar16.Data,iVar25);
    pFVar10 = (FString *)L"";
    if (local_240 != 0) {
      pFVar10 = (FString *)local_250._8_8_;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar10,L"(");
    if ((FString *)local_250._8_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_250._8_8_);
    }
    if (iVar7 == 0) {
      ::FString::RemoveAt(&local_340,0,1,No);
    }
    iVar7 = local_340.Data.ArrayNum + -1;
    FVar16.Data = local_340.Data.AllocatorInstance.Data;
    if (local_340.Data.ArrayNum == 0) {
      iVar7 = iVar19;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    iVar25 = iVar7;
    if (1 < iVar7) {
      iVar25 = 1;
    }
    iVar8 = iVar19;
    if (0 < iVar25) {
      iVar8 = iVar25;
    }
    ::FString::FString(&local_238,(wchar_t *)(FVar16.Data + ((longlong)iVar7 - (longlong)iVar8) * 2)
                      );
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_238.Data.ArrayNum != 0) {
      FVar16.Data = local_238.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L")");
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = local_340.Data.ArrayNum + -1;
      if (local_340.Data.ArrayNum == 0) {
        iVar7 = iVar19;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar25 = iVar19;
      if (0 < iVar7) {
        iVar25 = iVar7;
      }
      ::FString::RemoveAt(&local_340,iVar25,1,No);
    }
    local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_340.Data.ArrayNum != 0) {
      FVar16.Data = local_340.Data.AllocatorInstance.Data;
    }
    local_320.Data.ArrayNum = 0;
    local_320.Data.ArrayMax = 0;
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.Data.ArrayNum = 0;
    local_300.Data.ArrayMax = 0;
    bVar5 = FParse::Value((wchar_t *)FVar16.Data,L"Name=",&local_320,true,(wchar_t **)0x0);
    if (bVar5) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_340.Data.ArrayNum != 0) {
        FVar16.Data = local_340.Data.AllocatorInstance.Data;
      }
      bVar5 = FParse::Value((wchar_t *)FVar16.Data,L"QuotaMB=",&local_288);
      if (bVar5) {
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_340.Data.ArrayNum != 0) {
          FVar16.Data = local_340.Data.AllocatorInstance.Data;
        }
        bVar5 = FParse::Value((wchar_t *)FVar16.Data,L"Directories=",&local_300,false,
                              (wchar_t **)0x0);
        if (bVar5) {
          iVar7 = local_320.Data.ArrayNum + -1;
          if (local_320.Data.ArrayNum == 0) {
            iVar7 = iVar19;
          }
          if (iVar7 == 0) {
            if (1 < (byte)LogPlatformFileManagedStorage._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
            }
          }
          else {
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_340.Data.ArrayNum != 0) {
              FVar22.Data = local_340.Data.AllocatorInstance.Data;
            }
            bVar5 = FParse::Value((wchar_t *)FVar22.Data,L"OptionalQuotaMB=",&local_280);
            if (!bVar5) {
              local_280 = 0;
            }
            ::FString::ReplaceInline(&local_320,L"\"",L"",IgnoreCase);
            iVar7 = local_300.Data.ArrayNum + -1;
            if (local_300.Data.ArrayNum == 0) {
              iVar7 = iVar19;
            }
            if (1 < iVar7) {
              iVar7 = 1;
            }
            iVar25 = iVar19;
            if (0 < iVar7) {
              iVar25 = iVar7;
            }
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_300.Data.ArrayNum != 0) {
              FVar22.Data = local_300.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_228,(wchar_t *)FVar22.Data,iVar25);
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_228.Data.ArrayNum != 0) {
              FVar22.Data = local_228.Data.AllocatorInstance.Data;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar22.Data,L"(");
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (iVar7 == 0) {
              ::FString::RemoveAt(&local_300,0,1,No);
            }
            iVar7 = local_300.Data.ArrayNum + -1;
            FVar22.Data = local_300.Data.AllocatorInstance.Data;
            if (local_300.Data.ArrayNum == 0) {
              iVar7 = iVar19;
              FVar22.Data = (FScriptContainerElement *)L"";
            }
            iVar25 = iVar7;
            if (1 < iVar7) {
              iVar25 = 1;
            }
            iVar8 = iVar19;
            if (0 < iVar25) {
              iVar8 = iVar25;
            }
            ::FString::FString(&local_218,
                               (wchar_t *)(FVar22.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_218.Data.ArrayNum != 0) {
              FVar22.Data = local_218.Data.AllocatorInstance.Data;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar22.Data,L")");
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (iVar7 == 0) {
              iVar7 = local_300.Data.ArrayNum + -1;
              if (local_300.Data.ArrayNum == 0) {
                iVar7 = iVar19;
              }
              if (iVar7 + -1 < iVar7) {
                iVar7 = iVar7 + -1;
              }
              if (0 < iVar7) {
                iVar19 = iVar7;
              }
              ::FString::RemoveAt(&local_300,iVar19,1,No);
            }
            local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_310.ArrayNum = 0;
            local_310.ArrayMax = 0;
            ::FString::ParseIntoArray(&local_300,&local_310,L",",true);
            uVar11 = (ulonglong)local_310.ArrayNum;
            local_26c._4_8_ = local_310.AllocatorInstance.Data + uVar11 * 0x10;
            local_2e0 = local_310.ArrayNum;
            uVar17 = uVar11;
            FVar22.Data = local_310.AllocatorInstance.Data;
            while( true ) {
              uVar3 = local_26c._4_8_;
              uVar23 = 0;
              if ((int)uVar11 != (int)uVar17) {
                local_345[0] = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_345);
              }
              if (FVar22.Data == (FScriptContainerElement *)uVar3) break;
              ::FString::ReplaceInline((FString *)FVar22.Data,L"\"",L"",IgnoreCase);
              uVar24 = local_60;
              bVar5 = false;
              uStack_2b8 = 0;
              uStack_2b4 = 1;
              uStack_2a4 = uStack_2b8;
              local_2a0 = uStack_2b8;
              if (local_60 != 0) {
                puVar26 = (uint *)(local_88 + 0x10);
                if (local_68 != (uint *)0x0) {
                  puVar26 = local_68;
                }
                uStack_2b4 = *puVar26;
                uVar17 = uVar23;
                while( true ) {
                  uStack_2b8 = (uint)uVar23;
                  local_2a0 = (uint)uVar17;
                  if (uStack_2b4 != 0) break;
                  lVar15 = (longlong)(int)uStack_2b8;
                  local_2a0 = local_2a0 + 0x20;
                  uVar17 = (ulonglong)local_2a0;
                  uStack_2b8 = uStack_2b8 + 1;
                  uVar23 = (ulonglong)uStack_2b8;
                  uStack_2b4 = 1;
                  uStack_2a4 = local_60;
                  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)uStack_2b8) goto LAB_1416a3310;
                  uStack_2b4 = (puVar26 + 1)[lVar15];
                }
                uStack_2b4 = -uStack_2b4 & uStack_2b4;
                uVar17 = (ulonglong)uStack_2b4 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_274 = (int)lVar15;
                uStack_2a4 = (local_2a0 - 1) + local_274;
                if ((int)local_60 < (int)uStack_2a4) {
                  uStack_2a4 = local_60;
                }
              }
LAB_1416a3310:
              local_2c0 = (longlong *)local_88;
              uStack_29c = local_94;
              local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              uVar21 = local_60 & 0xffffffe0;
              iStack_298 = local_88._8_4_ - local_54;
              TStack_188._padding_ = CONCAT44(uStack_2b4,uStack_2b8);
              uStack_2a8 = 0xffffffff;
              TStack_188.CurrentBitIndex = uStack_2a4;
              TStack_188.UnvisitedBitMask = 0xffffffff;
              iVar19 = (int)local_60 >> 5;
              TStack_188._28_4_ = local_94;
              TStack_188.BaseBitIndex = local_2a0;
              uStack_168 = CONCAT44(uStack_294,iStack_298);
              bVar14 = (byte)local_60;
              local_190 = local_2c0;
              TStack_188.Array = local_2b0;
              if (((int)local_60 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                pFVar9 = (FCategoryInfo *)(*pcVar2)();
                return pFVar9;
              }
              if (uVar24 != local_60) {
                puVar26 = (uint *)(local_88 + 0x10);
                if (local_68 != (uint *)0x0) {
                  puVar26 = local_68;
                }
                uVar24 = -1 << (bVar14 & 0x1f) & puVar26[iVar19];
                while (uVar24 == 0) {
                  lVar15 = (longlong)iVar19;
                  uVar21 = uVar21 + 0x20;
                  iVar19 = iVar19 + 1;
                  uVar24 = local_60;
                  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
                  goto LAB_1416a3440;
                  uVar24 = (puVar26 + 1)[lVar15];
                }
                uVar17 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
                lVar15 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_270 = (int)lVar15;
                uVar24 = (uVar21 - 1) + local_270;
                if ((int)local_60 < (int)uVar24) {
                  uVar24 = local_60;
                }
              }
LAB_1416a3440:
              while( true ) {
                plVar4 = local_190;
                if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
                  local_348 = (<lambda_1>)0x0;
                  `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_348);
                }
                lVar15 = (longlong)TStack_188.CurrentBitIndex;
                if (((TStack_188.CurrentBitIndex == uVar24) &&
                    (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10)))
                   && (plVar4 == (longlong *)local_88)) break;
                lVar1 = *plVar4;
                if (*(int *)(lVar1 + 0x18 + lVar15 * 0x28) == 0) {
                  pwVar27 = L"";
                }
                else {
                  pwVar27 = *(wchar_t **)(lVar1 + 0x10 + lVar15 * 0x28);
                }
                if (*(int *)(lVar1 + 8 + lVar15 * 0x28) == 0) {
                  pwVar18 = L"";
                }
                else {
                  pwVar18 = *(wchar_t **)(lVar1 + lVar15 * 0x28);
                }
                iVar19 = ::FString::ReplaceInline((FString *)FVar22.Data,pwVar18,pwVar27,IgnoreCase)
                ;
                if (0 < iVar19) {
                  bVar5 = true;
                }
                TStack_188.UnvisitedBitMask =
                     TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
              }
              if (bVar5) {
                FPaths::NormalizeDirectoryName((FString *)FVar22.Data);
              }
              else {
                pTVar12 = &FPaths::ProjectPersistentDownloadDir(local_e0)->Data;
                iVar19 = *(int *)(FVar22.Data + 8) + -1;
                if (*(int *)(FVar22.Data + 8) == 0) {
                  iVar19 = 0;
                }
                if ((pTVar12->ArrayNum != 0) || (iVar7 = 2, iVar19 == -1)) {
                  iVar7 = 1;
                }
                TArray<wchar_t,TSizedDefaultAllocator<32>_>::
                TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                          (&local_208,pTVar12,iVar19 + iVar7);
                ::FString::PathAppend((FString *)&local_208,*(wchar_t **)FVar22.Data,iVar19);
                pFVar13 = (FScriptContainerElement *)
                          FPaths::ConvertRelativePathToFull(&local_f0,(FString *)&local_208);
                if (FVar22.Data != pFVar13) {
                  if (*(void **)FVar22.Data != (void *)0x0) {
                    FMemory::Free(*(void **)FVar22.Data);
                  }
                  *(undefined8 *)FVar22.Data = *(undefined8 *)pFVar13;
                  *(undefined8 *)pFVar13 = 0;
                  *(int *)(FVar22.Data + 8) = *(int *)(pFVar13 + 8);
                  *(int *)(FVar22.Data + 0xc) = *(int *)(pFVar13 + 0xc);
                  *(undefined8 *)(pFVar13 + 8) = 0;
                }
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
                if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.AllocatorInstance.Data);
                }
                if (local_e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0[0].Data.AllocatorInstance.Data);
                }
              }
              uVar11 = local_310._8_8_ & 0xffffffff;
              FVar22.Data = FVar22.Data + 0x10;
              uVar17 = (ulonglong)local_2e0;
            }
            local_290 = -1;
            ::FString::PrintfImpl(&local_1d8,L"persistentstoragequota%s=");
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_1d8.Data.ArrayNum != 0) {
              FVar22.Data = local_1d8.Data.AllocatorInstance.Data;
            }
            pwVar27 = FCommandLine::Get();
            bVar5 = FParse::Value(pwVar27,(wchar_t *)FVar22.Data,&local_290);
            if (bVar5) {
              local_288 = local_290;
            }
            if (local_288 < 0) {
              lVar20 = -1;
            }
            else {
              lVar20 = local_288 << 0x14;
            }
            if (-1 < local_280) {
              uVar23 = local_280 << 0x14;
            }
            iVar19 = local_330.ArrayNum;
            if (local_330.ArrayNum == local_330.ArrayMax) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x108,8,&local_330.AllocatorInstance,&local_330.ArrayMax);
            }
            local_330.ArrayNum = iVar19 + 1;
            local_1f8.AllocatorInstance.Data = local_310.AllocatorInstance.Data;
            local_1e8.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
            local_1f8.ArrayNum = local_310.ArrayNum;
            local_1e8.Data.ArrayNum = local_320.Data.ArrayNum;
            local_1f8.ArrayMax = local_310.ArrayMax;
            local_1e8.Data.ArrayMax = local_320.Data.ArrayMax;
            local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_310.ArrayNum = 0;
            local_310.ArrayMax = 0;
            local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_320.Data.ArrayNum = 0;
            local_320.Data.ArrayMax = 0;
            FPersistentStorageCategory::FPersistentStorageCategory
                      ((FPersistentStorageCategory *)
                       (local_330.AllocatorInstance.Data + (longlong)iVar19 * 0x108),&local_1e8,
                       &local_1f8,lVar20,uVar23);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
            FVar22.Data = local_2d8;
            if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.AllocatorInstance.Data);
              FVar22.Data = local_2d8;
            }
          }
        }
      }
    }
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    uVar11 = local_2f0._8_8_ & 0xffffffff;
    FVar22.Data = FVar22.Data + 0x10;
    uVar17 = (ulonglong)local_2dc;
  } while( true );
}

