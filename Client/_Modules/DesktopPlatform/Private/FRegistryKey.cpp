// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 12

// FRegistryKey @ 142d1bf40

FRegistryKey * __thiscall FRegistryKey::FRegistryKey(FRegistryKey *this)

{
  *(undefined8 *)&this->Keys = 0;
  *(undefined8 *)&(this->Keys).field_0x8 = 0;
  *(undefined8 *)&(this->Keys).field_0x20 = 0;
  *(undefined4 *)&(this->Keys).field_0x28 = 0;
  *(undefined4 *)&(this->Keys).field_0x2c = 0x80;
  *(undefined4 *)&(this->Keys).field_0x34 = 0;
  *(undefined4 *)&(this->Keys).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Keys).field_0x40 = 0;
  *(undefined4 *)&(this->Keys).field_0x48 = 0;
  *(undefined8 *)&this->Values = 0;
  *(undefined8 *)&(this->Values).field_0x8 = 0;
  *(undefined8 *)&(this->Values).field_0x20 = 0;
  *(undefined4 *)&(this->Values).field_0x28 = 0;
  *(undefined4 *)&(this->Values).field_0x2c = 0x80;
  *(undefined4 *)&(this->Values).field_0x34 = 0;
  *(undefined4 *)&(this->Values).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Values).field_0x40 = 0;
  *(undefined4 *)&(this->Values).field_0x48 = 0;
  return this;
}

// ~FRegistryKey @ 142d1c8b0

void __thiscall FRegistryKey::~FRegistryKey(FRegistryKey *this)

{
  TMap<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
  *this_00;
  FRegistryKey *this_01;
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  FRegistryKey *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
              *)this);
  iVar5 = 1;
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_01 = *(FRegistryKey **)((longlong)(int)uVar4 * 0x20 + 0x10 + *local_48);
      if (this_01 != (FRegistryKey *)0x0) {
        ~FRegistryKey(this_01);
        ::operator_delete(this_01,0xa0);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Keys).field_0x8 - *(int *)&(local_18->Keys).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&(local_18->Keys).field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&(local_18->Keys).field_0x48)) {
        *(int *)&(local_18->Keys).field_0x48 = iVar3;
        TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
                  *)local_18);
      }
    }
  }
  this_00 = &this->Values;
  TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (FRegistryKey *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar1 = *(void **)((longlong)(int)uVar4 * 0x20 + 0x10 + *local_48);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 8));
        }
        ::operator_delete(pvVar1,0x18);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FString,FRegistryValue_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_18->Keys)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<FString,FRegistryValue_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_18->Keys)->field_0x34;
      if (3 < uVar6) {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)((longlong)local_18 + 0x48) < iVar5)) ||
         (iVar5 < *(int *)((longlong)local_18 + 0x48))) {
        *(int *)((longlong)local_18 + 0x48) = iVar5;
        TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
                  *)local_18);
      }
    }
  }
  *(undefined4 *)&(this->Values).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Values).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRegistryValue_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRegistryValue_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRegistryValue_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->Keys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Keys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRegistryKey_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRegistryKey_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRegistryKey_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindOrAddKey @ 142d221f0

FRegistryKey * __thiscall FRegistryKey::FindOrAddKey(FRegistryKey *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FRegistryKey **ppFVar3;
  FRegistryKey *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  ppFVar3 = TMapBase<FString,FRegistryKey_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,FRegistryKey_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>_>
                        *)this,uVar2,param_1);
  pFVar4 = *ppFVar3;
  if (*ppFVar3 == (FRegistryKey *)0x0) {
    pFVar4 = ::operator_new(0xa0);
    if (pFVar4 != (FRegistryKey *)0x0) {
      *(undefined8 *)&pFVar4->Keys = 0;
      *(undefined8 *)&(pFVar4->Keys).field_0x8 = 0;
      *(undefined8 *)&(pFVar4->Keys).field_0x20 = 0;
      *(undefined4 *)&(pFVar4->Keys).field_0x28 = 0;
      *(undefined4 *)&(pFVar4->Keys).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar4->Keys).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar4->Keys).field_0x34 = 0;
      *(undefined8 *)&(pFVar4->Keys).field_0x40 = 0;
      *(undefined4 *)&(pFVar4->Keys).field_0x48 = 0;
      *(undefined8 *)&pFVar4->Values = 0;
      *(undefined8 *)&(pFVar4->Values).field_0x8 = 0;
      *(undefined8 *)&(pFVar4->Values).field_0x20 = 0;
      *(undefined4 *)&(pFVar4->Values).field_0x28 = 0;
      *(undefined4 *)&(pFVar4->Values).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar4->Values).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar4->Values).field_0x34 = 0;
      *(undefined8 *)&(pFVar4->Values).field_0x40 = 0;
      *(undefined4 *)&(pFVar4->Values).field_0x48 = 0;
      *ppFVar3 = pFVar4;
      return pFVar4;
    }
    *ppFVar3 = (FRegistryKey *)0x0;
    pFVar4 = (FRegistryKey *)0x0;
  }
  return pFVar4;
}

// FindOrAddValue @ 142d222e0

FRegistryValue * __thiscall FRegistryKey::FindOrAddValue(FRegistryKey *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FRegistryValue **ppFVar3;
  FRegistryValue *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  ppFVar3 = TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
                        *)&this->Values,uVar2,param_1);
  pFVar4 = *ppFVar3;
  if (*ppFVar3 == (FRegistryValue *)0x0) {
    pFVar4 = ::operator_new(0x18);
    if (pFVar4 != (FRegistryValue *)0x0) {
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      pFVar4->Type = 0;
      *ppFVar3 = pFVar4;
      return pFVar4;
    }
    *ppFVar3 = (FRegistryValue *)0x0;
    pFVar4 = (FRegistryValue *)0x0;
  }
  return pFVar4;
}

// IsUpToDate @ 142d29a90

bool __thiscall
FRegistryKey::IsUpToDate(FRegistryKey *this,HKEY__ *param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  wchar_t *lpSubKey;
  HKEY__ *local_res18 [2];
  
  if ((param_2->Data).ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  LVar2 = RegOpenKeyExW((HKEY)param_1,lpSubKey,0,0x20019,(PHKEY)local_res18);
  if (LVar2 == 0) {
    bVar1 = IsUpToDate(this,local_res18[0],param_3);
    RegCloseKey((HKEY)local_res18[0]);
    return bVar1;
  }
  return false;
}

// IsUpToDate @ 142d29b20

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FRegistryKey::IsUpToDate(FRegistryKey *this,HKEY__ *param_1,bool param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint *puVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FRegistryKey *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  FRegistryKey *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FRegistryValue local_88 [2];
  undefined4 local_54;
  undefined4 local_34;
  
  if (param_2) {
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    EnumerateRegistryValues(param_1,&local_108);
    uVar10 = 0;
    if (0 < local_108.ArrayNum) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < local_108.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar12 = local_108.AllocatorInstance.Data + lVar11;
        if (*(int *)(pFVar12 + 8) == 0) {
          pwVar9 = L"";
          iVar7 = 0;
        }
        else {
          pwVar9 = *(wchar_t **)pFVar12;
          iVar7 = *(int *)(pFVar12 + 8) + -1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
        iVar7 = TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
                            *)&this->Values,uVar6,(FString *)pFVar12);
        if (iVar7 == -1) goto LAB_142d29f7c;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < local_108.ArrayNum);
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    EnumerateRegistryKeys(param_1,&local_f8);
    uVar10 = 0;
    if (0 < local_f8.ArrayNum) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < local_f8.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar12 = local_f8.AllocatorInstance.Data + lVar11;
        if (*(int *)(pFVar12 + 8) == 0) {
          pwVar9 = L"";
          iVar7 = 0;
        }
        else {
          pwVar9 = *(wchar_t **)pFVar12;
          iVar7 = *(int *)(pFVar12 + 8) + -1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
        iVar7 = TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
                            *)this,uVar6,(FString *)pFVar12);
        if (iVar7 == -1) {
          DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
          if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.AllocatorInstance.Data);
          }
LAB_142d29f7c:
          DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum)
          ;
          if (local_108.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_108.AllocatorInstance.Data);
          return false;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < local_f8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  iVar7 = *(int *)&(this->Keys).field_0x28;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Keys).field_0x10;
  iVar13 = 0;
  TStack_b0.BaseBitIndex = 0;
  uVar6 = 1;
  TStack_e0.CurrentBitIndex = 0;
  uVar10 = 1;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->Keys).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_e0.Array;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar11 = (longlong)iVar13;
      TStack_b0.BaseBitIndex = TStack_b0.BaseBitIndex + 0x20;
      iVar13 = iVar13 + 1;
      TStack_e0.CurrentBitIndex = iVar7;
      uVar10 = 1;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142d29d9a;
      uVar10 = puVar14[lVar11 + 1];
    }
    uVar10 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_e0.CurrentBitIndex = TStack_b0.BaseBitIndex + -1 + (int)lVar11;
    if (iVar7 < TStack_e0.CurrentBitIndex) {
      TStack_e0.CurrentBitIndex = iVar7;
    }
  }
LAB_142d29d9a:
  TStack_b0._padding_ = CONCAT44(uVar10,iVar13);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_54;
  TStack_e0._padding_ = TStack_b0._padding_;
  TStack_e0.BaseBitIndex = TStack_b0.BaseBitIndex;
  TStack_e0._28_4_ = local_54;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  local_e8 = this;
  local_b8 = this;
  TStack_b0.Array = TStack_e0.Array;
  TStack_b0.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  if (TStack_e0.CurrentBitIndex < iVar7) {
    do {
      pFVar8 = (FString *)
               (*(longlong *)&local_e8->Keys + (longlong)TStack_e0.CurrentBitIndex * 0x20);
      bVar4 = IsUpToDate((FRegistryKey *)pFVar8[1].Data.AllocatorInstance.Data,param_1,pFVar8,
                         param_2);
      if (!bVar4) {
        return false;
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  local_e8 = (FRegistryKey *)&this->Values;
  iVar7 = *(int *)&(this->Values).field_0x28;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Values).field_0x10;
  iVar13 = 0;
  TStack_e0.BaseBitIndex = iVar13;
  TStack_b0.CurrentBitIndex = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->Values).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_e0.Array;
    }
    uVar10 = *puVar14;
    TStack_e0.BaseBitIndex = 0;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar11 = (longlong)iVar13;
      TStack_e0.BaseBitIndex = TStack_e0.BaseBitIndex + 0x20;
      iVar13 = iVar13 + 1;
      TStack_b0.CurrentBitIndex = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142d29eae;
      uVar10 = puVar14[lVar11 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_b0.CurrentBitIndex = TStack_e0.BaseBitIndex + -1 + (int)lVar11;
    if (iVar7 < TStack_b0.CurrentBitIndex) {
      TStack_b0.CurrentBitIndex = iVar7;
    }
  }
LAB_142d29eae:
  TStack_e0._padding_ = CONCAT44(uVar6,iVar13);
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_34;
  TStack_b0._padding_ = TStack_e0._padding_;
  TStack_b0.BaseBitIndex = TStack_e0.BaseBitIndex;
  TStack_b0._28_4_ = local_34;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  local_b8 = local_e8;
  TStack_b0.Array = TStack_e0.Array;
  TStack_e0.CurrentBitIndex = TStack_b0.CurrentBitIndex;
  if (TStack_b0.CurrentBitIndex < iVar7) {
    do {
      local_88[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar8 = (FString *)((longlong)TStack_b0.CurrentBitIndex * 0x20 + *(longlong *)local_b8);
      local_88[0].Data.ArrayNum = 0;
      local_88[0].Data.ArrayMax = 0;
      local_88[0].Type = 0;
      pFVar12 = pFVar8[1].Data.AllocatorInstance.Data;
      bVar4 = FRegistryValue::Read(local_88,param_1,pFVar8);
      FVar3.Data = local_88[0].Data.AllocatorInstance.Data;
      if ((bVar4) && (local_88[0].Type == *(uint *)pFVar12)) {
        if ((local_88[0].Data.ArrayNum != *(int *)(pFVar12 + 0x10)) ||
           ((local_88[0].Data.ArrayNum != 0 &&
            (iVar7 = memcmp(local_88[0].Data.AllocatorInstance.Data,*(void **)(pFVar12 + 8),
                            (longlong)local_88[0].Data.ArrayNum), iVar7 != 0)))) goto LAB_142d29f9d;
        bVar4 = true;
      }
      else {
LAB_142d29f9d:
        bVar4 = false;
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      if (!bVar4) {
        return false;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return true;
}

// Read @ 142d2db10

bool __thiscall FRegistryKey::Read(FRegistryKey *this,HKEY__ *param_1)

{
  code *pcVar1;
  TMap<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
  *this_00;
  bool bVar2;
  undefined1 uVar3;
  LSTATUS LVar4;
  uint uVar5;
  FRegistryKey *this_01;
  FRegistryValue **ppFVar6;
  FRegistryValue *this_02;
  int iVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  HKEY__ *local_res18;
  TMap<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
  *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  uVar11 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  EnumerateRegistryKeys(param_1,&local_48);
  uVar9 = uVar11;
  if (0 < local_48.ArrayNum) {
    do {
      uVar12 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar12 < local_48.ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_01 = FindOrAddKey(this,(FString *)(local_48.AllocatorInstance.Data + uVar11));
      uVar5 = 0;
      if ((int)uVar12 < local_48.ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)(local_48.AllocatorInstance.Data + uVar11 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(local_48.AllocatorInstance.Data + uVar11);
      }
      LVar4 = RegOpenKeyExW((HKEY)param_1,pwVar8,0,0x20019,(PHKEY)&local_res18);
      if (LVar4 != 0) {
LAB_142d2dd0d:
        bVar2 = false;
        goto LAB_142d2ddf7;
      }
      bVar2 = Read(this_01,local_res18);
      RegCloseKey((HKEY)local_res18);
      if (!bVar2) goto LAB_142d2dd0d;
      uVar11 = uVar11 + 0x10;
      uVar9 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < local_48.ArrayNum);
  }
  uVar9 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  EnumerateRegistryValues(param_1,&local_58);
  if (0 < local_58.ArrayNum) {
    local_res20 = &this->Values;
    uVar11 = uVar9;
    do {
      this_00 = local_res20;
      uVar12 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar10 = local_58.AllocatorInstance.Data + uVar11;
      iVar7 = *(int *)(pFVar10 + 8) + -1;
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar8 = L"";
        iVar7 = 0;
      }
      else {
        pwVar8 = *(wchar_t **)pFVar10;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
      ppFVar6 = TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
                            *)this_00,uVar5,(FString *)pFVar10);
      this_02 = *ppFVar6;
      if (this_02 == (FRegistryValue *)0x0) {
        this_02 = ::operator_new(0x18);
        if (this_02 != (FRegistryValue *)0x0) {
          (this_02->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_02->Data).ArrayNum = 0;
          (this_02->Data).ArrayMax = 0;
          this_02->Type = 0;
        }
        *ppFVar6 = this_02;
      }
      uVar5 = 0;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FRegistryValue::Read
                        (this_02,param_1,(FString *)(local_58.AllocatorInstance.Data + uVar11));
      if (!bVar2) {
        bVar2 = false;
        iVar7 = local_58.ArrayNum;
        goto LAB_142d2dde0;
      }
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar12 + 1) < local_58.ArrayNum);
  }
  bVar2 = true;
  iVar7 = local_58.ArrayNum;
LAB_142d2dde0:
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,iVar7);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_142d2ddf7:
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar2;
}

// Read @ 142d2de50

bool __thiscall FRegistryKey::Read(FRegistryKey *this,HKEY__ *param_1,FString *param_2)

{
  bool bVar1;
  LSTATUS LVar2;
  wchar_t *lpSubKey;
  HKEY__ *local_res18 [2];
  
  if ((param_2->Data).ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  LVar2 = RegOpenKeyExW((HKEY)param_1,lpSubKey,0,0x20019,(PHKEY)local_res18);
  if (LVar2 == 0) {
    bVar1 = Read(this,local_res18[0]);
    RegCloseKey((HKEY)local_res18[0]);
    return bVar1;
  }
  return false;
}

// SetValue @ 142d32660

void __thiscall FRegistryKey::SetValue(FRegistryKey *this,FString *param_1,FString *param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRegistryValue *pFVar6;
  int iVar7;
  wchar_t *_Src;
  
  pFVar6 = FindOrAddValue(this,param_1);
  pTVar1 = &pFVar6->Data;
  pFVar6->Type = 1;
  piVar2 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  if ((pFVar6->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = (param_2->Data).ArrayNum;
  iVar7 = iVar5 * 2;
  if (iVar5 == 0) {
    iVar7 = 2;
    _Src = L"";
  }
  else {
    _Src = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((((FScriptContainerElement *)_Src == (FScriptContainerElement *)0x0) && (iVar7 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,&pTVar1->AllocatorInstance,&(pFVar6->Data).ArrayNum,piVar2);
  if (iVar7 != 0) {
    memcpy((pTVar1->AllocatorInstance).Data + iVar5,_Src,(longlong)iVar7);
  }
  return;
}

// SetValue @ 142d32780

void __thiscall FRegistryKey::SetValue(FRegistryKey *this,FString *param_1,uint param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRegistryValue *pFVar4;
  
  pFVar4 = FindOrAddValue(this,param_1);
  pTVar1 = &pFVar4->Data;
  pFVar4->Type = 4;
  piVar2 = &(pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  if ((pFVar4->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&pTVar1->AllocatorInstance,&(pFVar4->Data).ArrayNum,piVar2);
  *(uint *)((pTVar1->AllocatorInstance).Data + iVar3) = param_2;
  return;
}

// Write @ 142d36670

bool __thiscall
FRegistryKey::Write(FRegistryKey *this,HKEY__ *param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  wchar_t *lpSubKey;
  HKEY__ *local_res18 [2];
  
  if ((param_2->Data).ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  LVar2 = RegCreateKeyExW((HKEY)param_1,lpSubKey,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          (PHKEY)local_res18,(LPDWORD)0x0);
  if (LVar2 == 0) {
    bVar1 = Write(this,local_res18[0],param_3);
    RegCloseKey((HKEY)local_res18[0]);
    return bVar1;
  }
  return false;
}

// Write @ 142d36710

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FRegistryKey::Write(FRegistryKey *this,HKEY__ *param_1,bool param_2)

{
  DWORD *pDVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  LSTATUS LVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  FRegistryKey *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FRegistryKey *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> aTStack_a0 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  ulonglong uVar20;
  
  uVar16 = 0;
  uVar15 = 0;
  uVar19 = 0;
  if (param_2) {
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    EnumerateRegistryValues(param_1,&local_f8);
    uVar17 = uVar16;
    uVar20 = uVar16;
    if (0 < local_f8.ArrayNum) {
      do {
        uVar9 = (uint)uVar17;
        uVar6 = uVar19;
        if ((int)uVar9 < local_f8.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar23 = local_f8.AllocatorInstance.Data + uVar20;
        if (*(int *)(pFVar23 + 8) == 0) {
          pwVar14 = L"";
          uVar6 = uVar19;
        }
        else {
          pwVar14 = *(wchar_t **)pFVar23;
          uVar6 = *(int *)(pFVar23 + 8) - 1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar14);
        iVar7 = TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
                            *)&this->Values,uVar6,(FString *)pFVar23);
        if (iVar7 == -1) {
          uVar6 = uVar19;
          if ((int)uVar9 < local_f8.ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(int *)(local_f8.AllocatorInstance.Data + uVar20 + 8) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)(local_f8.AllocatorInstance.Data + uVar20);
          }
          LVar8 = RegDeleteValueW((HKEY)param_1,pwVar14);
          if (LVar8 != 0) goto LAB_142d36c0c;
        }
        uVar17 = (ulonglong)(uVar9 + 1);
        uVar20 = uVar20 + 0x10;
      } while ((int)(uVar9 + 1) < local_f8.ArrayNum);
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    EnumerateRegistryKeys(param_1,&local_e8);
    uVar17 = uVar16;
    uVar20 = uVar16;
    if (0 < local_e8.ArrayNum) {
      do {
        uVar9 = (uint)uVar17;
        uVar6 = uVar19;
        if ((int)uVar9 < local_e8.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar23 = local_e8.AllocatorInstance.Data + uVar20;
        if (*(int *)(pFVar23 + 8) == 0) {
          pwVar14 = L"";
          uVar6 = uVar19;
        }
        else {
          pwVar14 = *(wchar_t **)pFVar23;
          uVar6 = *(int *)(pFVar23 + 8) - 1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar14);
        iVar7 = TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
                            *)this,uVar6,(FString *)pFVar23);
        if (iVar7 == -1) {
          uVar6 = uVar19;
          if ((int)uVar9 < local_e8.ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(int *)(local_e8.AllocatorInstance.Data + uVar20 + 8) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)(local_e8.AllocatorInstance.Data + uVar20);
          }
          LVar8 = RegDeleteTreeW((HKEY)param_1,pwVar14);
          if (LVar8 != 0) {
            DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum)
            ;
            if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.AllocatorInstance.Data);
            }
LAB_142d36c0c:
            DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum)
            ;
            if (local_f8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_f8.AllocatorInstance.Data);
            return false;
          }
        }
        uVar17 = (ulonglong)(uVar9 + 1);
        uVar20 = uVar20 + 0x10;
      } while ((int)(uVar9 + 1) < local_e8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  uVar11 = 1;
  uVar6 = *(uint *)&(this->Keys).field_0x28;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Keys).field_0x10;
  uVar17 = uVar16;
  uVar9 = 1;
  uVar18 = uVar19;
  aTStack_a0[0].BaseBitIndex = uVar19;
  if (uVar6 != 0) {
    puVar22 = *(uint **)&(this->Keys).field_0x20;
    uVar17 = (ulonglong)uVar6;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_d0.Array;
    }
    uVar9 = *puVar22;
    uVar20 = uVar16;
    uVar21 = uVar16;
    while (uVar9 == 0) {
      iVar7 = (int)uVar20;
      aTStack_a0[0].BaseBitIndex = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)(uint)aTStack_a0[0].BaseBitIndex;
      uVar18 = iVar7 + 1;
      uVar20 = (ulonglong)uVar18;
      uVar9 = 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_142d36a5b;
      uVar9 = puVar22[(longlong)iVar7 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar17 = (ulonglong)uVar9 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar10 = (aTStack_a0[0].BaseBitIndex - 1U) + (int)lVar2;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
    uVar17 = (ulonglong)uVar10;
  }
LAB_142d36a5b:
  aTStack_a0[0]._padding_ = CONCAT44(uVar9,uVar18);
  TStack_d0.CurrentBitIndex = (int)uVar17;
  aTStack_a0[0].UnvisitedBitMask = 0xffffffff;
  aTStack_a0[0]._28_4_ = local_5c;
  TStack_d0._padding_ = aTStack_a0[0]._padding_;
  TStack_d0.BaseBitIndex = aTStack_a0[0].BaseBitIndex;
  TStack_d0._28_4_ = local_5c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  local_d8 = this;
  local_a8 = this;
  aTStack_a0[0].Array = TStack_d0.Array;
  aTStack_a0[0].CurrentBitIndex = TStack_d0.CurrentBitIndex;
  if (TStack_d0.CurrentBitIndex < (int)uVar6) {
    do {
      pFVar13 = (FString *)(*(longlong *)&local_d8->Keys + (longlong)(int)uVar17 * 0x20);
      bVar4 = Write((FRegistryKey *)pFVar13[1].Data.AllocatorInstance.Data,param_1,pFVar13,param_2);
      if (!bVar4) {
        return false;
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      uVar17 = (ulonglong)(uint)TStack_d0.CurrentBitIndex;
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  local_d8 = (FRegistryKey *)&this->Values;
  uVar6 = *(uint *)&(this->Values).field_0x28;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Values).field_0x10;
  uVar17 = uVar16;
  if (uVar6 != 0) {
    puVar22 = *(uint **)&(this->Values).field_0x20;
    uVar17 = (ulonglong)uVar6;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_d0.Array;
    }
    uVar9 = *puVar22;
    uVar20 = uVar16;
    uVar15 = uVar19;
    while (uVar9 == 0) {
      iVar7 = (int)uVar16;
      uVar19 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uVar19;
      uVar15 = iVar7 + 1;
      uVar16 = (ulonglong)uVar15;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_142d36b6b;
      uVar9 = puVar22[(longlong)iVar7 + 1];
    }
    uVar11 = -uVar9 & uVar9;
    uVar16 = (ulonglong)uVar11 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar9 = (uVar19 - 1) + (int)lVar2;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
    uVar17 = (ulonglong)uVar9;
  }
LAB_142d36b6b:
  TStack_d0._padding_ = CONCAT44(uVar11,uVar15);
  aTStack_a0[0].CurrentBitIndex = (int)uVar17;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = local_3c;
  TStack_d0.BaseBitIndex = uVar19;
  aTStack_a0[0]._padding_ = TStack_d0._padding_;
  aTStack_a0[0].BaseBitIndex = uVar19;
  aTStack_a0[0]._28_4_ = local_3c;
  aTStack_a0[0].UnvisitedBitMask = 0xffffffff;
  local_a8 = local_d8;
  aTStack_a0[0].Array = TStack_d0.Array;
  TStack_d0.CurrentBitIndex = aTStack_a0[0].CurrentBitIndex;
  if (aTStack_a0[0].CurrentBitIndex < (int)uVar6) {
    do {
      lVar2 = *(longlong *)local_a8;
      pDVar1 = *(DWORD **)((longlong)(int)uVar17 * 0x20 + 0x10 + lVar2);
      lVar12 = (longlong)(int)uVar17 * 0x20;
      if (*(int *)(lVar12 + 8 + lVar2) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)(lVar12 + lVar2);
      }
      LVar8 = RegSetValueExW((HKEY)param_1,pwVar14,0,*pDVar1,*(BYTE **)(pDVar1 + 2),pDVar1[4]);
      if (LVar8 != 0) {
        return false;
      }
      aTStack_a0[0].UnvisitedBitMask =
           aTStack_a0[0].UnvisitedBitMask & ~aTStack_a0[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(aTStack_a0);
      uVar17 = (ulonglong)(uint)aTStack_a0[0].CurrentBitIndex;
    } while (aTStack_a0[0].CurrentBitIndex < (aTStack_a0[0].Array)->NumBits);
  }
  return true;
}

