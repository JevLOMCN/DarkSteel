// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 19

// ~FGroomCacheStreamingManager @ 14dff1c50

void __thiscall
FGroomCacheStreamingManager::~FGroomCacheStreamingManager(FGroomCacheStreamingManager *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->StreamingComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StreamingGroomCachesToDelete).HashSize = 0;
  FVar2 = (this->StreamingGroomCachesToDelete).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StreamingGroomCachesToDelete).Elements);
  *(undefined4 *)&(this->GroomCacheUsers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GroomCacheUsers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroomCacheUsers);
  *(undefined4 *)&(this->StreamingGroomCaches).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StreamingGroomCaches).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamingGroomCaches);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddLevel @ 14dff7f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::AddLevel(FGroomCacheStreamingManager *this,ULevel *param_1)

{
  return;
}

// BlockTillAllRequestsFinished @ 14dff89f0

int __thiscall
FGroomCacheStreamingManager::BlockTillAllRequestsFinished
          (FGroomCacheStreamingManager *this,float param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  TMap<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
  *pTVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  LARGE_INTEGER local_res8;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar9 = 0;
  iVar6 = 0;
  pTVar7 = &this->StreamingGroomCaches;
  local_48 = (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
              *)pTVar7;
  if (param_1 == 0.0) {
    TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                *)pTVar7);
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar5 = local_a8._24_8_ >> 0x20;
    if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
      do {
        FGroomCacheStreamingData::BlockTillAllRequestsFinished
                  (*(FGroomCacheStreamingData **)(*local_78 + 8 + (longlong)(int)uVar5 * 0x18),0.0);
        uStack_60 = uStack_60 & ~auStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
        uVar5 = (ulonglong)uStack_5c;
      } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
      iVar9 = iVar6;
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        iVar6 = 1;
        uVar8 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
        if (3 < uVar8) {
          uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_48->HashSize < iVar6)) || (iVar6 < local_48->HashSize)) {
          local_48->HashSize = iVar6;
          TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
          ::Rehash(local_48);
        }
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                *)pTVar7);
    fVar3 = __real_3a83126f;
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar5 = local_a8._24_8_ >> 0x20;
    if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
      do {
        QueryPerformanceCounter(&local_res8);
        iVar6 = 1;
        fVar10 = (float)((dVar2 + (double)param_1) -
                        (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle);
        if ((fVar10 < fVar3) ||
           (bVar4 = FGroomCacheStreamingData::BlockTillAllRequestsFinished
                              (*(FGroomCacheStreamingData **)
                                (*local_78 + 8 + (longlong)(int)uVar5 * 0x18),fVar10), !bVar4)) {
          iVar9 = 1;
          break;
        }
        uStack_60 = uStack_60 & ~auStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
        uVar5 = (ulonglong)uStack_5c;
      } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
        if (3 < uVar8) {
          uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_48->HashSize < iVar6)) || (iVar6 < local_48->HashSize)) {
          local_48->HashSize = iVar6;
          TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
          ::Rehash(local_48);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar9;
}

// CancelForcedResources @ 14e004c20

void __thiscall
FGroomCacheStreamingManager::CancelForcedResources(FGroomCacheStreamingManager *this)

{
  return;
}

// DeleteStreamingData @ 14e009bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGroomCacheStreamingManager::DeleteStreamingData(FGroomCacheStreamingManager *this,bool param_1)

{
  ulonglong uVar1;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar2;
  FGroomCacheStreamingData *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_208 [32];
  bool local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6 [6];
  ulonglong local_1e0;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  FGroomCacheStreamingData *local_198;
  longlong *local_190;
  int iStack_188;
  undefined4 uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  iStack_1d0 = 0;
  this_00 = &this->StreamingGroomCachesToDelete;
  local_b8 = (uint *)0x0;
  local_1c8 = &(this->StreamingGroomCachesToDelete).Elements.field_0x10;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_1b8 = 0;
  local_90 = 0;
  iVar11 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  local_1e0 = 1;
  uStack_1cc = 1;
  iStack_1bc = local_1b8;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&(this->StreamingGroomCachesToDelete).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_1c8;
    }
    uStack_1cc = *puVar15;
    local_1b8 = 0;
    iStack_1d0 = 0;
    while (uStack_1cc == 0) {
      lVar9 = (longlong)iStack_1d0;
      local_1b8 = local_1b8 + 0x20;
      iStack_1d0 = iStack_1d0 + 1;
      uStack_1cc = 1;
      iStack_1bc = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d0) goto LAB_14e009cef;
      uStack_1cc = puVar15[lVar9 + 1];
    }
    uStack_1cc = -uStack_1cc & uStack_1cc;
    uVar1 = (ulonglong)uStack_1cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1a8 = (int)lVar9;
    iStack_1bc = local_1b8 + -1 + local_1a8;
    if (iVar11 < iStack_1bc) {
      iStack_1bc = iVar11;
    }
  }
LAB_14e009cef:
  uVar13 = *(uint *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  puVar16 = &(this->StreamingGroomCachesToDelete).Elements.field_0x10;
  iStack_1b0 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x8 -
               *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x34;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_158._padding_ = CONCAT44(uStack_1cc,iStack_1d0);
  uStack_1c0 = 0xffffffff;
  TStack_158.CurrentBitIndex = iStack_1bc;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_158._28_4_ = local_e4;
  TStack_158.BaseBitIndex = local_1b8;
  uStack_138 = CONCAT44(uStack_1ac,iStack_1b0);
  local_1e8 = param_1;
  local_1d8 = this_00;
  local_160 = this_00;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c8;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = local_1e8;
  uVar2 = *(uint *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  if (uVar13 != uVar2) {
    puVar14 = *(undefined1 **)&(this->StreamingGroomCachesToDelete).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar16;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e009e10;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1a4 = (int)lVar9;
    uVar13 = local_1a4 + -1 + uVar12;
    if ((int)uVar2 < (int)uVar13) {
      uVar13 = uVar2;
    }
  }
LAB_14e009e10:
  while( true ) {
    pTVar7 = local_160;
    if (*(int *)&(local_160->Elements).field_0x8 - *(int *)&(local_160->Elements).field_0x34 !=
        (int)uStack_138) {
      local_1e7 = 0;
      `TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e7);
    }
    if (((TStack_158.CurrentBitIndex == uVar13) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) &&
       (pTVar7 == this_00)) break;
    pFVar3 = *(FGroomCacheStreamingData **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_158.CurrentBitIndex * 0x10);
    local_198 = pFVar3;
    FGroomCacheStreamingData::UpdateStreamingStatus(pFVar3,bVar6);
    if (*(int *)&(pFVar3->ChunksRequested).Elements.field_0x8 -
        *(int *)&(pFVar3->ChunksRequested).Elements.field_0x34 < 1) {
      TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
      ::Emplace<FGroomCacheStreamingData_*_const_&>
                ((TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                  *)local_d8,(FGroomCacheStreamingData **)&local_1a0,(bool *)&local_198);
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  pTVar7 = TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
           ::Difference(this_00,&local_88,
                        (TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                         *)local_d8);
  if (this_00 != pTVar7) {
    TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::
    Move<TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>_>
              (this_00,pTVar7);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  uVar13 = local_b0;
  iStack_188 = 0;
  local_170 = 0;
  uStack_174 = 0;
  if (local_b0 != 0) {
    puVar15 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar15 = local_b8;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      uStack_174 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_188)
      goto LAB_14e009f64;
      uVar12 = puVar15[lVar9 + 1];
    }
    local_1e0 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = local_1e0 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1a0._4_4_ = (int)lVar9;
    uStack_174 = local_170 + -1 + local_1a0._4_4_;
    if ((int)local_b0 < (int)uStack_174) {
      uStack_174 = local_b0;
    }
  }
LAB_14e009f64:
  local_190 = (longlong *)local_d8;
  uStack_184 = (undefined4)local_1e0;
  uVar12 = local_b0 & 0xffffffe0;
  iStack_16c = iStack_1bc;
  local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_168 = local_d8._8_4_ - local_a4;
  uStack_178 = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_174;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._padding_ = CONCAT44(uStack_184,iStack_188);
  iVar11 = (int)local_b0 >> 5;
  TStack_128._28_4_ = iStack_1bc;
  TStack_128.BaseBitIndex = local_170;
  uStack_108 = CONCAT44(uStack_164,iStack_168);
  bVar8 = (byte)local_b0;
  local_130 = local_190;
  TStack_128.Array = local_180;
  if (((int)local_b0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar13 != local_b0) {
    puVar15 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar15 = local_b8;
    }
    uVar13 = -1 << (bVar8 & 0x1f) & puVar15[iVar11];
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14e00a070;
      uVar13 = puVar15[lVar9 + 1];
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)local_b0 < (int)uVar13) {
      uVar13 = local_b0;
    }
  }
LAB_14e00a070:
  while( true ) {
    plVar5 = local_130;
    if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
      `TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e6);
    }
    if (((TStack_128.CurrentBitIndex == uVar13) &&
        (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar5 == (longlong *)local_d8)) break;
    pFVar3 = *(FGroomCacheStreamingData **)(*plVar5 + (longlong)TStack_128.CurrentBitIndex * 0x10);
    if (pFVar3 != (FGroomCacheStreamingData *)0x0) {
      FGroomCacheStreamingData::~FGroomCacheStreamingData(pFVar3);
      ::operator_delete(pFVar3,0x1f0);
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  return;
}

// MapAnimationData @ 14e021230

FGroomCacheAnimationData * __thiscall
FGroomCacheStreamingManager::MapAnimationData
          (FGroomCacheStreamingManager *this,UGroomCache *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGroomCacheStreamingData **ppFVar1;
  FGroomCacheAnimationData *pFVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId318,"FGroomCacheStreamingManager::MapAnimationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingManager.cpp"
               ,0x13e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId318);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar1 = TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
            ::Find((TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
                    *)&this->StreamingGroomCaches,param_1);
  if (ppFVar1 == (FGroomCacheStreamingData **)0x0) {
    pFVar2 = (FGroomCacheAnimationData *)0x0;
  }
  else {
    pFVar2 = FGroomCacheStreamingData::MapAnimationData(*ppFVar1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar2;
}

// NotifyLevelChange @ 14e021350

void __thiscall FGroomCacheStreamingManager::NotifyLevelChange(FGroomCacheStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 14e021360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::NotifyLevelOffset
          (FGroomCacheStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// PrefetchData @ 14e0229d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::PrefetchData
          (FGroomCacheStreamingManager *this,UGroomComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res18;
  UGroomComponent *local_res20;
  code *local_38 [2];
  undefined **local_28;
  FGroomCacheStreamingManager *local_20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    PrefetchDataInternal(this,param_1);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGroomComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGroomComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>
              ::_vftable_;
  local_18 = local_res18;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FGroomCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,void>
                ::Call;
  local_20 = this;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// PrefetchDataInternal @ 14e022aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::PrefetchDataInternal
          (FGroomCacheStreamingManager *this,UGroomComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UGroomCache *pUVar1;
  FGroomCacheStreamingData **ppFVar2;
  
  pUVar1 = (param_1->GroomCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGroomCache *)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ppFVar2 = TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
              ::Find((TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
                      *)&this->StreamingGroomCaches,pUVar1);
    if (ppFVar2 != (FGroomCacheStreamingData **)0x0) {
      FGroomCacheStreamingData::PrefetchData(*ppFVar2,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterComponent @ 14e0237a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::RegisterComponent
          (FGroomCacheStreamingManager *this,UGroomComponent *param_1)

{
  UGroomComponent *local_res10 [3];
  
  if ((param_1 != (UGroomComponent *)0x0) &&
     ((param_1->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0)) {
    local_res10[0] = param_1;
    TArray<UGroomComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UGroomComponent_*_const_&>
              (&this->StreamingComponents,local_res10);
    RegisterGroomCache(this,(local_res10[0]->GroomCache).field0_0x0.DebugPtr,local_res10[0]);
    (**(code **)(this->_padding_ + 0xa8))(this,local_res10[0]);
  }
  return;
}

// RegisterGroomCache @ 14e023810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::RegisterGroomCache
          (FGroomCacheStreamingManager *this,UGroomCache *param_1,UGroomComponent *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  int iVar6;
  FGroomCacheStreamingData *pFVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>
  *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  UGroomComponent *local_res18;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  UGroomCache *local_150;
  FGroomCacheStreamingData *local_148;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [8];
  UGroomComponent *local_100;
  FGroomCacheStreamingManager *local_f8;
  TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  UGroomCache **local_c0;
  FGroomCacheStreamingData **local_b8;
  UGroomCache **local_b0;
  ForAnyElementType *local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lpCriticalSection = &this->CriticalSection;
  local_res18 = param_2;
  local_150 = param_1;
  local_f8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar11 = ((uint)((ulonglong)local_150 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_150 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&(this->StreamingGroomCaches).field_0x8 !=
      *(int *)&(this->StreamingGroomCaches).field_0x34) {
    puVar13 = *(undefined1 **)&(this->StreamingGroomCaches).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->StreamingGroomCaches).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->StreamingGroomCaches).field_0x48 - 1U &
                    (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(UGroomCache **)(*(longlong *)&this->StreamingGroomCaches + (longlong)iVar6 * 0x18) ==
            local_150) goto LAB_14e023e03;
        iVar6 = *(int *)(*(longlong *)&this->StreamingGroomCaches + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  iStack_138 = 0;
  local_120 = 0;
  this_00 = &this->StreamingGroomCachesToDelete;
  local_130 = &(this->StreamingGroomCachesToDelete).Elements.field_0x10;
  local_148 = (FGroomCacheStreamingData *)0x0;
  iVar6 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar6 != 0) {
    puVar16 = *(uint **)&(this->StreamingGroomCachesToDelete).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_130;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar12 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14e023990;
      uVar11 = puVar16[lVar12 + 1];
    }
    uStack_134 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_110 = (int)lVar12;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar6 < iStack_124) {
      iStack_124 = iVar6;
    }
  }
LAB_14e023990:
  uVar11 = *(uint *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  uVar17 = uVar11 & 0xffffffe0;
  puVar13 = &(this->StreamingGroomCachesToDelete).Elements.field_0x10;
  iStack_118 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x8 -
               *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x34;
  uStack_128 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_124;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_134,iStack_138);
  iVar14 = (int)uVar11 >> 5;
  TStack_e8._28_4_ = iStack_124;
  TStack_e8.BaseBitIndex = local_120;
  uStack_c8 = CONCAT44(uStack_114,iStack_118);
  local_140 = this_00;
  iStack_11c = iStack_124;
  local_f0 = this_00;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
  if ((((int)uVar11 < 0) || (iVar6 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(uint *)&(this->StreamingGroomCachesToDelete).Elements.field_0x28;
  if (uVar11 != uVar2) {
    puVar15 = *(undefined1 **)&(this->StreamingGroomCachesToDelete).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar13;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar12 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e023ac0;
      uVar11 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_10c = (int)lVar12;
    uVar11 = local_10c + -1 + uVar17;
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = uVar2;
    }
  }
LAB_14e023ac0:
  do {
    pTVar4 = local_f0;
    if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
        (int)uStack_c8) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<FGroomCacheStreamingData_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_e8.CurrentBitIndex == uVar11) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) && (pTVar4 == this_00)
       ) goto LAB_14e023b29;
    pFVar7 = *(FGroomCacheStreamingData **)
              (*(longlong *)&pTVar4->Elements + (longlong)TStack_e8.CurrentBitIndex * 0x10);
    if (pFVar7->GroomCache == local_150) {
      local_148 = pFVar7;
      TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
      ::Remove(this_00,pFVar7);
LAB_14e023b29:
      if (local_148 == (FGroomCacheStreamingData *)0x0) {
        pFVar7 = ::operator_new(0x1f0);
        if (pFVar7 == (FGroomCacheStreamingData *)0x0) {
          local_148 = (FGroomCacheStreamingData *)0x0;
        }
        else {
          pTVar9 = (TNode *)0x0;
          pFVar7->GroomCache = local_150;
          (pFVar7->ChunksNeeded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->ChunksNeeded).ArrayNum = 0;
          (pFVar7->ChunksNeeded).ArrayMax = 0;
          *(undefined8 *)&(pFVar7->ChunksAvailable).Elements = 0;
          *(undefined8 *)&(pFVar7->ChunksAvailable).Elements.field_0x8 = 0;
          *(undefined8 *)&(pFVar7->ChunksAvailable).Elements.field_0x20 = 0;
          *(undefined4 *)&(pFVar7->ChunksAvailable).Elements.field_0x28 = 0;
          *(undefined4 *)&(pFVar7->ChunksAvailable).Elements.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->ChunksAvailable).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->ChunksAvailable).Elements.field_0x34 = 0;
          (pFVar7->ChunksAvailable).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          (pFVar7->ChunksAvailable).HashSize = 0;
          *(undefined8 *)&(pFVar7->ChunksRequested).Elements = 0;
          *(undefined8 *)&(pFVar7->ChunksRequested).Elements.field_0x8 = 0;
          *(undefined8 *)&(pFVar7->ChunksRequested).Elements.field_0x20 = 0;
          *(undefined4 *)&(pFVar7->ChunksRequested).Elements.field_0x28 = 0;
          *(undefined4 *)&(pFVar7->ChunksRequested).Elements.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->ChunksRequested).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->ChunksRequested).Elements.field_0x34 = 0;
          (pFVar7->ChunksRequested).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          (pFVar7->ChunksRequested).HashSize = 0;
          *(undefined8 *)&(pFVar7->ChunksEvicted).Elements = 0;
          *(undefined8 *)&(pFVar7->ChunksEvicted).Elements.field_0x8 = 0;
          *(undefined8 *)&(pFVar7->ChunksEvicted).Elements.field_0x20 = 0;
          *(undefined4 *)&(pFVar7->ChunksEvicted).Elements.field_0x28 = 0;
          *(undefined4 *)&(pFVar7->ChunksEvicted).Elements.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->ChunksEvicted).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->ChunksEvicted).Elements.field_0x34 = 0;
          (pFVar7->ChunksEvicted).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          (pFVar7->ChunksEvicted).HashSize = 0;
          *(undefined8 *)&pFVar7->Chunks = 0;
          *(undefined8 *)&(pFVar7->Chunks).field_0x8 = 0;
          *(undefined8 *)&(pFVar7->Chunks).field_0x20 = 0;
          *(undefined4 *)&(pFVar7->Chunks).field_0x28 = 0;
          *(undefined4 *)&(pFVar7->Chunks).field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->Chunks).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->Chunks).field_0x34 = 0;
          *(undefined8 *)&(pFVar7->Chunks).field_0x40 = 0;
          *(undefined4 *)&(pFVar7->Chunks).field_0x48 = 0;
          pTVar8 = ::operator_new(0x20);
          if (pTVar8 != (TNode *)0x0) {
            pTVar8->NextNode = (TNode *)0x0;
            (pTVar8->Item).AnimDataPtr = (FGroomCacheAnimationData *)0x0;
            (pTVar8->Item).ReadRequest = (IBulkDataIORequest *)0x0;
            (pTVar8->Item).LoadedChunkIndex = 0;
            (pTVar8->Item).bReadSuccessful = false;
            *(undefined3 *)&(pTVar8->Item).field_0x15 = 0;
            pTVar8->NextNode = (TNode *)0x0;
            (pTVar8->Item).AnimDataPtr = (FGroomCacheAnimationData *)0x0;
            (pTVar8->Item).ReadRequest = (IBulkDataIORequest *)0x0;
            (pTVar8->Item).LoadedChunkIndex = 0;
            (pTVar8->Item).bReadSuccessful = false;
            pTVar9 = pTVar8;
          }
          (pFVar7->CompletedChunks).Tail = pTVar9;
          (pFVar7->CompletedChunks).Head = pTVar9;
          *(undefined8 *)&(pFVar7->DelayedDeleteReadRequests).Elements = 0;
          *(undefined8 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x8 = 0;
          *(undefined8 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x20 = 0;
          *(undefined4 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x28 = 0;
          *(undefined4 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->DelayedDeleteReadRequests).Elements.field_0x34 = 0;
          (pFVar7->DelayedDeleteReadRequests).Hash.SecondaryData =
               (ForElementType<FSetElementId>)0x0;
          (pFVar7->DelayedDeleteReadRequests).HashSize = 0;
          pFVar7->LastUpdate = 0;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar7->CriticalSection,4000);
          local_148 = pFVar7;
        }
      }
      this = local_f8;
      local_c0 = &local_150;
      local_b8 = &local_148;
      TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UGroomCache_*_const_&,FGroomCacheStreamingData_*_const_&>_>
                ((TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                  *)&local_f8->StreamingGroomCaches,
                 (TPairInitializer<UGroomCache_*_const_&,FGroomCacheStreamingData_*_const_&> *)
                 local_108,(bool *)&local_c0);
      local_88.MaxBits = 0x80;
      local_b0 = &local_150;
      local_60 = 0;
      local_a8 = &local_98;
      local_50 = 0;
      local_88.AllocatorInstance.InlineData[0] = '\0';
      local_88.AllocatorInstance.InlineData[1] = '\0';
      local_88.AllocatorInstance.InlineData[2] = '\0';
      local_88.AllocatorInstance.InlineData[3] = '\0';
      local_88.AllocatorInstance.InlineData[4] = '\0';
      local_88.AllocatorInstance.InlineData[5] = '\0';
      local_88.AllocatorInstance.InlineData[6] = '\0';
      local_88.AllocatorInstance.InlineData[7] = '\0';
      local_88.AllocatorInstance.InlineData[8] = '\0';
      local_88.AllocatorInstance.InlineData[9] = '\0';
      local_88.AllocatorInstance.InlineData[10] = '\0';
      local_88.AllocatorInstance.InlineData[0xb] = '\0';
      local_88.AllocatorInstance.InlineData[0xc] = '\0';
      local_88.AllocatorInstance.InlineData[0xd] = '\0';
      local_88.AllocatorInstance.InlineData[0xe] = '\0';
      local_88.AllocatorInstance.InlineData[0xf] = '\0';
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (void *)0x0;
      TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UGroomCache_*_const_&,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)&this->GroomCacheUsers,
                 (TPairInitializer<UGroomCache_*_const_&,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_&&>
                  *)(local_108 + 4),(bool *)&local_b0);
      local_50 = local_50 & 0xffffffff00000000;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      uVar1 = local_90 >> 0x20;
      local_90 = local_90 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_98,0,(int *)((longlong)&local_90 + 4));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_88.NumBits = 0;
      if (0x80 < (uint)local_88.MaxBits) {
        local_88.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
LAB_14e023e03:
      pTVar10 = TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&this->GroomCacheUsers,local_150);
      if ((pTVar10 ==
           (TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>
            *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>::
      Emplace<UGroomComponent_*_const_&>
                ((TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>
                  *)&pTVar10->field_0x8,&local_100,(bool *)&local_res18);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
}

// RemoveLevel @ 14e025d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::RemoveLevel(FGroomCacheStreamingManager *this,ULevel *param_1)

{
  return;
}

// SetDisregardWorldResourcesForFrames @ 14e028290

void __thiscall
FGroomCacheStreamingManager::SetDisregardWorldResourcesForFrames
          (FGroomCacheStreamingManager *this,int param_1)

{
  return;
}

// Shutdown @ 14e029680

void __thiscall FGroomCacheStreamingManager::Shutdown(FGroomCacheStreamingManager *this)

{
  TMap<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  FGroomCacheStreamingData *this_01;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  iVar3 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x8 -
          *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x34;
  while (0 < iVar3) {
    DeleteStreamingData(this,false);
    iVar3 = *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x8 -
            *(int *)&(this->StreamingGroomCachesToDelete).Elements.field_0x34;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->StreamingGroomCaches;
    TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                *)this_00);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar4 = local_78._24_8_ >> 0x20;
    uVar5 = local_78._28_4_;
    local_18 = (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                *)this_00;
    if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        plVar2 = local_48;
        FGroomCacheStreamingData::BlockTillAllRequestsFinished
                  (*(FGroomCacheStreamingData **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18),0.0);
        this_01 = *(FGroomCacheStreamingData **)(*plVar2 + 8 + (longlong)(int)uVar5 * 0x18);
        if (this_01 != (FGroomCacheStreamingData *)0x0) {
          FGroomCacheStreamingData::~FGroomCacheStreamingData(this_01);
          ::operator_delete(this_01,0x1f0);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar4 = (ulonglong)uStack_2c;
        uVar5 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar5 < 4) {
          iVar3 = 1;
        }
        else {
          uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
          local_18->HashSize = iVar3;
          TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
             *)this_00);
    TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)&this->GroomCacheUsers);
    (this->StreamingComponents).ArrayNum = 0;
    if ((this->StreamingComponents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->StreamingComponents).AllocatorInstance,0,
                 &(this->StreamingComponents).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e02989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnmapAnimationData @ 14e02b2d0

void __thiscall
FGroomCacheStreamingManager::UnmapAnimationData
          (FGroomCacheStreamingManager *this,UGroomCache *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGroomCacheStreamingData **ppFVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId333,"FGroomCacheStreamingManager::UnmapAnimationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingManager.cpp"
               ,0x14d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId333);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar1 = TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
            ::Find((TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
                    *)&this->StreamingGroomCaches,param_1);
  if (ppFVar1 != (FGroomCacheStreamingData **)0x0) {
    FGroomCacheStreamingData::UnmapAnimationData(*ppFVar1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterComponent @ 14e02b3f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::UnregisterComponent
          (FGroomCacheStreamingManager *this,UGroomComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UGroomCache *pUVar3;
  code *pcVar4;
  bool bVar5;
  UGroomComponent *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UGroomComponent *local_res10;
  
  if (param_1 != (UGroomComponent *)0x0) {
    pFVar2 = (this->StreamingComponents).AllocatorInstance.Data;
    local_res10 = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar2 + (longlong)(this->StreamingComponents).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (this->StreamingComponents).ArrayNum;
    pUVar6 = local_res10;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (this->StreamingComponents).AllocatorInstance.Data;
      bVar5 = *(UGroomComponent **)pFVar2 != local_res10;
      lVar7 = 0;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar5 == (*(UGroomComponent **)(pFVar2 + lVar7 * 8) != pUVar6));
        if (bVar5 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                    (longlong)(iVar9 - iVar8) << 3);
            pUVar6 = local_res10;
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      (this->StreamingComponents).ArrayNum = iVar10;
    }
    pUVar3 = (pUVar6->GroomCache).field0_0x0.DebugPtr;
    if (pUVar3 != (UGroomCache *)0x0) {
      UnregisterGroomCache(this,pUVar3,pUVar6);
    }
  }
  return;
}

// UnregisterGroomCache @ 14e02b590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingManager::UnregisterGroomCache
          (FGroomCacheStreamingManager *this,UGroomCache *param_1,UGroomComponent *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FGroomCacheStreamingData *pFVar2;
  TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>
  *pTVar3;
  FGroomCacheStreamingData **ppFVar4;
  uint uVar5;
  TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator> *this_00;
  FGroomCacheStreamingData *local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                     *)&this->GroomCacheUsers,param_1);
    this_00 = (TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator> *)
              &pTVar3->field_0x8;
    if (pTVar3 == (TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>
                   *)0x0) {
      this_00 = (TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator> *
                )0x0;
    }
    if (this_00 !=
        (TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator> *)0x0) {
      TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>::Remove
                (this_00,param_2);
      if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
        ppFVar4 = TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
                  ::Find((TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
                          *)&this->StreamingGroomCaches,param_1);
        if (ppFVar4 != (FGroomCacheStreamingData **)0x0) {
          pFVar2 = *ppFVar4;
          piVar1 = &(pFVar2->ChunksNeeded).ArrayMax;
          (pFVar2->ChunksNeeded).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&(pFVar2->ChunksNeeded).AllocatorInstance,0,piVar1);
          }
          TSet<FGroomCacheStreamingData_*,DefaultKeyFuncs<FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
          ::Emplace<FGroomCacheStreamingData_*_const_&>
                    (&this->StreamingGroomCachesToDelete,&local_res8,(bool *)ppFVar4);
          if (*(int *)&(this->StreamingGroomCaches).field_0x8 !=
              *(int *)&(this->StreamingGroomCaches).field_0x34) {
            uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4))
                    * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            local_res8 = (FGroomCacheStreamingData *)param_1;
            TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<UGroomCache_const_*>
                      ((TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                        *)&this->StreamingGroomCaches,uVar5 >> 0x10 ^ uVar5,
                       (UGroomCache **)&local_res8);
          }
        }
        local_res8 = (FGroomCacheStreamingData *)param_1;
        if (*(int *)&(this->GroomCacheUsers).field_0x8 !=
            *(int *)&(this->GroomCacheUsers).field_0x34) {
          uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                  -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UGroomCache_const_*>
                    ((TSet<TTuple<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UGroomCache_*,TSet<UGroomComponent_*,DefaultKeyFuncs<UGroomComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->GroomCacheUsers,uVar5 >> 0x10 ^ uVar5,(UGroomCache **)&local_res8);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014e02b708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateResourceStreaming @ 14e02c3a0

void __thiscall
FGroomCacheStreamingManager::UpdateResourceStreaming
          (FGroomCacheStreamingManager *this,float param_1,bool param_2)

{
  longlong lVar1;
  longlong lVar2;
  UGroomCache *this_00;
  ForElementType<FSetElementId> FVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  int iVar5;
  int iVar6;
  UClass *this_01;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_d8 [8];
  TObjectPtr<UObject>_u_0 local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *local_78;
  FScriptContainerElement *local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId97,"FGroomCacheStreamingManager::UpdateResourceStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingManager.cpp"
               ,0x61);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId97);
  }
  this_01 = Z_Construct_UClass_UGroomPluginSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  local_d0 = (TObjectPtr<UObject>_u_0)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pTVar12 = (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
             *)&this->StreamingGroomCaches;
  local_78 = pTVar12;
  TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_68,pTVar12);
  local_80 = 0;
  stack0xffffffffffffff58 = local_68._16_16_;
  local_b8 = (longlong *)local_68._0_8_;
  auStack_b0._0_8_ = local_68._8_8_;
  local_98 = local_48;
  pTStack_90 = pTStack_40;
  uVar7 = local_68._24_8_ >> 0x20;
  local_88 = pTVar12;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      lVar2 = *(longlong *)(*local_b8 + 8 + (longlong)(int)uVar7 * 0x18);
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if (*(int *)(lVar2 + 0x14) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar2 + 8),0,(int *)(lVar2 + 0x14));
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar7 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      iVar5 = 1;
      if (3 < uVar10) {
        uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_88->HashSize < iVar5)) || (iVar5 < local_88->HashSize)) {
        local_88->HashSize = iVar5;
        TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  TVar4 = local_d0;
  iVar5 = (this->StreamingComponents).ArrayNum;
  pFVar11 = (this->StreamingComponents).AllocatorInstance.Data;
  local_70 = pFVar11 + (longlong)iVar5 * 8;
  pFVar14 = local_70;
LAB_14e02c591:
  if ((this->StreamingComponents).ArrayNum != iVar5) {
    `TCheckedPointerIterator<UGroomComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_d8);
  }
  if (pFVar11 == pFVar14) {
    TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_68,pTVar12);
    local_b8 = (longlong *)local_68._0_8_;
    auStack_b0._0_8_ = local_68._8_8_;
    local_98 = local_48;
    pTStack_90 = pTStack_40;
    stack0xffffffffffffff58 = local_68._16_16_;
    uVar7 = local_68._24_8_ >> 0x20;
    local_80 = 0;
    local_88 = pTVar12;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        FGroomCacheStreamingData::UpdateStreamingStatus
                  (*(FGroomCacheStreamingData **)(*local_b8 + 8 + (longlong)(int)uVar7 * 0x18),true)
        ;
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar7 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        iVar5 = 1;
        uVar10 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (3 < uVar10) {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_88->HashSize < iVar5)) || (iVar5 < local_88->HashSize)) {
          local_88->HashSize = iVar5;
          TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    DeleteStreamingData(this,true);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  lVar2 = *(longlong *)pFVar11;
  this_00 = *(UGroomCache **)(lVar2 + 0x5a8);
  if ((this_00 != (UGroomCache *)0x0) &&
     (uVar10 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
               -0x7a143595, uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb,
     *(int *)&(this->StreamingGroomCaches).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34)) {
    FVar3 = (pTVar12->Hash).SecondaryData;
    FVar8 = (ForElementType<FSetElementId>)&pTVar12->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = FVar3;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)(pTVar12->HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar6 != -1) {
      while (lVar1 = *(longlong *)&pTVar12->Elements + (longlong)iVar6 * 0x18,
            *(UGroomCache **)(*(longlong *)&pTVar12->Elements + (longlong)iVar6 * 0x18) != this_00)
      {
        iVar6 = *(int *)(lVar1 + 0x10);
        if (iVar6 == -1) goto code_r0x00014e02c648;
      }
      plVar13 = (longlong *)(lVar1 + 8);
      if (lVar1 == 0) {
        plVar13 = (longlong *)0x0;
      }
      if (plVar13 == (longlong *)0x0) {
        pTVar12 = (TSet<TTuple<UGroomCache_*,FGroomCacheStreamingData_*>,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>,FDefaultSetAllocator>
                   *)&this->StreamingGroomCaches;
        goto LAB_14e02c70b;
      }
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      UGroomCache::GetFrameIndicesForTimeRange
                (this_00,*(float *)(lVar2 + 0x774),
                 *(float *)(lVar2 + 0x774) + *(float *)(TVar4.DebugPtr + 1),*(bool *)(lVar2 + 0x772)
                 ,&local_c8);
      iVar6 = local_c8.ArrayNum;
      uVar7 = (ulonglong)local_c8.ArrayNum;
      pFVar14 = local_c8.AllocatorInstance.Data + uVar7 * 4;
      FVar9.Data = local_c8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (FVar9.Data == pFVar14) break;
        local_d0._0_4_ = *(undefined4 *)FVar9.Data;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar13 + 8),(int *)&local_d0);
        uVar7 = local_c8._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 8;
      pTVar12 = local_78;
      pFVar14 = local_70;
      goto LAB_14e02c591;
    }
  }
LAB_14e02c70b:
  pFVar11 = pFVar11 + 8;
  goto LAB_14e02c591;
code_r0x00014e02c648:
  pFVar11 = pFVar11 + 8;
  goto LAB_14e02c591;
}

