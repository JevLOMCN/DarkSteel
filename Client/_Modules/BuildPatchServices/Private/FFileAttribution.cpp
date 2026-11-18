// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// FFileAttribution @ 14327f8f0

FFileAttribution * __thiscall
BuildPatchServices::FFileAttribution::FFileAttribution
          (FFileAttribution *this,IFileSystem *param_1,IBuildManifestSet *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,FString *param_4,
          FString *param_5,bool param_6,FBuildPatchProgress *param_7)

{
  ForElementType<FSetElementId> FVar1;
  undefined4 local_28;
  undefined4 local_24 [3];
  
  this->FileSystem = param_1;
  this->_padding_ = (longlong)&___7FFileAttribution_BuildPatchServices__6B_;
  this->ManifestSet = param_2;
  *(undefined8 *)&(this->TouchedFiles).Elements = 0;
  *(undefined8 *)&(this->TouchedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TouchedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TouchedFiles).Elements.field_0x34 = 0;
  (this->TouchedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TouchedFiles).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&this->TouchedFiles,param_3);
  ::FString::FString(&this->InstallDirectory,param_4);
  ::FString::FString(&this->StagedFileDirectory,param_5);
  this->bUseStageDirectory = param_6;
  this->BuildProgress = param_7;
  this->bIsPaused = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  local_28 = 0;
  local_24[0] = 6;
  (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_24,&local_28);
  param_3->HashSize = 0;
  FVar1 = (param_3->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  return this;
}

// ~FFileAttribution @ 143288250

void __thiscall BuildPatchServices::FFileAttribution::~FFileAttribution(FFileAttribution *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7FFileAttribution_BuildPatchServices__6B_;
  pFVar1 = (this->StagedFileDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstallDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TouchedFiles).HashSize = 0;
  FVar2 = (this->TouchedFiles).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TouchedFiles).Elements);
  this->_padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  return;
}

// Abort @ 1432bea60

void __thiscall BuildPatchServices::FFileAttribution::Abort(FFileAttribution *this)

{
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// ApplyAttributes @ 1432bee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall BuildPatchServices::FFileAttribution::ApplyAttributes(FFileAttribution *this)

{
  int iVar1;
  FThreadSafeBool FVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar6;
  float fVar7;
  longlong *plVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  FFileManifest *pFVar19;
  FString *pFVar20;
  FString *pFVar21;
  byte bVar22;
  uint *puVar23;
  ForAnyElementType FVar24;
  ulonglong uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  undefined1 auStackY_238 [32];
  FIdentityFunctor local_1f8 [4];
  uint local_1f4;
  undefined1 local_1f0 [4];
  int local_1ec;
  FString local_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0 [2];
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_188;
  int local_180;
  int local_17c;
  FIdentityFunctor *local_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_6c = 0x80;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1f4 = 0;
  local_1ec = -1;
  (**(code **)((longlong)*this->ManifestSet + 0x50))(this->ManifestSet,local_98);
  local_1d0 = 0;
  local_1cc = 6;
  (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,&local_1cc,&local_1d0);
  local_178 = local_1f8;
  local_1c8 = local_98._8_4_ - local_64;
  local_1c4 = local_64;
  local_1c0 = local_98._8_4_;
  local_1d8 = 1;
  if (0 < (int)local_1c8) {
    uVar16 = local_1c8;
    uVar5 = 1;
    uVar28 = local_98._8_4_;
    uVar30 = local_64;
    uVar13 = local_98._8_4_;
    pTVar9 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_98._0_8_;
    pTVar6 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_98._0_8_;
    iVar15 = local_68;
    if (local_64 != 0) {
      while (iVar1 = iVar15, local_188 = pTVar9, local_1c4 = uVar30, local_1c0 = uVar13, iVar1 != -1
            ) {
        iVar15 = *(int *)((longlong)pTVar6 + (longlong)iVar1 * 0x18 + 4);
        pTVar9 = local_188;
        if (iVar1 < (int)uVar16) {
          bVar22 = (byte)uVar28 & 0x1f;
          uVar30 = (uint)uVar5 << bVar22 | (uint)uVar5 >> 0x20 - bVar22;
          uVar16 = uVar28;
          do {
            uVar30 = uVar30 >> 1 | (uint)((uVar30 & 1) != 0) << 0x1f;
            uVar28 = uVar16 - 1;
            if ((((int)uVar28 < 0) || ((int)local_70 <= (int)uVar28)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return (bool)uVar11;
            }
            puVar23 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar23 = local_78;
            }
            uVar13 = uVar28;
            if ((int)uVar28 < 0) {
              uVar13 = uVar16 + 0x1e;
            }
            uVar16 = uVar28;
          } while ((puVar23[(int)uVar13 >> 5] & uVar30) == 0);
          memmove(pTVar6 + iVar1,local_188 + (int)uVar28,0x18);
          if (((iVar1 < 0) || ((int)local_70 <= iVar1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          puVar23 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar23 = local_78;
          }
          iVar14 = iVar1;
          if (iVar1 < 0) {
            iVar14 = iVar1 + 0x1f;
          }
          puVar23[iVar14 >> 5] = puVar23[iVar14 >> 5] | (int)local_1d8 << ((byte)iVar1 & 0x1f);
          uVar16 = local_1c8;
          uVar5 = local_1d8;
          uVar30 = local_1c4;
          uVar13 = local_1c0;
          pTVar9 = local_188;
          pTVar6 = local_188;
        }
      }
      uVar28 = 0;
      if ((int)uVar13 <= (int)local_98._8_4_) {
        uVar28 = ~(uVar30 | uVar16) >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      iVar15 = (local_98._8_4_ - uVar30) - uVar16;
      if (iVar15 != 0) {
        memmove((FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar16 * 0x18),
                (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar16 * 0x18) +
                (longlong)(int)uVar30 * 0x18,(longlong)iVar15 * 0x18);
      }
      local_98._8_4_ = local_98._8_4_ - uVar30;
      if ((((int)uVar30 < 0) || ((int)local_70 < (int)uVar13)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x3ee,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      if (uVar13 != local_70) {
        puVar23 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar23 = local_78;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar23,uVar16,puVar23,uVar13,(local_70 - uVar30) - uVar16);
      }
      local_70 = local_70 - uVar30;
      uVar28 = (int)local_70 >> 0x1f & 0x1f;
      uVar16 = local_70 + uVar28;
      iVar15 = (uVar16 & 0x1f) - uVar28;
      if (iVar15 != 0) {
        puVar23 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar23 = local_78;
        }
        puVar23[(int)uVar16 >> 5] =
             puVar23[(int)uVar16 >> 5] & 0xffffffffU >> (0x20U - (char)iVar15 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10));
      local_64 = 0;
      local_68 = -1;
      if (local_98._12_4_ != local_98._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_98._8_4_,(ForAnyElementType *)local_98,local_98._8_4_,
                   (int *)(local_98 + 0xc));
      }
    }
    uVar5 = local_98._0_8_;
    iVar15 = local_98._8_4_ - local_64;
    if ((iVar15 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar5,iVar15,local_1f8[0],
               (FElementCompareClass<TLess<FString>_> *)&local_178);
  }
  uVar16 = local_50;
  uVar25 = 0;
  uVar33 = (ulonglong)local_50;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_1432bf31b;
  uVar28 = uVar16;
  if (uVar16 < 2) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar28 = 0;
      goto LAB_1432bf2c3;
    }
  }
  else {
LAB_1432bf2c3:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar28,4);
  }
  if (0 < (int)uVar16) {
    uVar31 = uVar25;
    do {
      FVar24.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar24.Data = local_58.Data;
      }
      uVar17 = (longlong)(int)uVar16 - 1U & uVar31;
      uVar31 = uVar31 + 1;
      *(undefined4 *)(FVar24.Data + uVar17 * 4) = 0xffffffff;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
LAB_1432bf31b:
  uVar16 = (uint)local_1d8;
  if (local_50 != 0) {
    local_1a8 = 0;
    pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_1a4 = uVar16;
    if (local_70 != 0) {
      puVar23 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar23 = local_78;
      }
      uVar28 = *puVar23;
      uVar33 = uVar25;
      while (uVar28 == 0) {
        uStack_190 = (int)uVar33 + 0x20;
        uVar33 = (ulonglong)uStack_190;
        iVar15 = (int)uVar25;
        local_1a8 = iVar15 + 1;
        uVar25 = (ulonglong)local_1a8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a8)
        goto LAB_1432bf3da;
        uVar28 = (puVar23 + 1)[iVar15];
      }
      uStack_1a4 = -uVar28 & uVar28;
      uVar25 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_180 = (int)lVar26;
      uStack_194 = (uStack_190 - 1) + local_180;
      uVar25 = (ulonglong)uStack_194;
      if ((int)local_70 < (int)uStack_194) {
LAB_1432bf3da:
        uVar25 = (ulonglong)local_70;
        uStack_194 = local_70;
      }
    }
    local_198 = 0xffffffff;
    local_170 = (longlong *)local_98;
    local_168._padding_ = CONCAT44(uStack_1a4,local_1a8);
    local_168.CurrentBitIndex = uStack_194;
    local_168.UnvisitedBitMask = 0xffffffff;
    local_168._28_4_ = uStack_18c;
    local_168.BaseBitIndex = uStack_190;
    local_168.Array = pTStack_1a0;
    if ((int)uVar25 < (int)local_70) {
      do {
        lVar26 = *local_170;
        lVar18 = (longlong)(int)uVar25;
        iVar1 = *(int *)(lVar26 + 8 + lVar18 * 0x18);
        iVar15 = iVar1 + -1;
        if (iVar1 == 0) {
          pwVar32 = L"";
          iVar15 = 0;
        }
        else {
          pwVar32 = *(wchar_t **)(lVar26 + lVar18 * 0x18);
        }
        uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar32);
        uVar28 = local_50 - 1 & uVar28;
        *(uint *)(lVar26 + 0x14 + lVar18 * 0x18) = uVar28;
        FVar24.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_58.Data;
        }
        uVar33 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar28;
        *(undefined4 *)(lVar26 + 0x10 + lVar18 * 0x18) = *(undefined4 *)(FVar24.Data + uVar33 * 4);
        *(int *)(FVar24.Data + uVar33 * 4) = (int)uVar25;
        local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
        uVar25 = (ulonglong)(uint)local_168.CurrentBitIndex;
      } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
    }
  }
  uVar28 = local_70;
  uStack_140 = 0;
  local_128 = 0;
  uStack_12c = uStack_140;
  if (local_70 != 0) {
    puVar23 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar23 = local_78;
    }
    uVar30 = *puVar23;
    local_128 = 0;
    uStack_140 = 0;
    while (uVar30 == 0) {
      lVar26 = (longlong)(int)uStack_140;
      local_128 = local_128 + 0x20;
      uStack_140 = uStack_140 + 1;
      uStack_12c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_140)
      goto LAB_1432bf530;
      uVar30 = (puVar23 + 1)[lVar26];
    }
    uVar16 = -uVar30 & uVar30;
    uVar25 = (ulonglong)uVar16 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_17c = (int)lVar26;
    uStack_12c = (local_128 - 1) + local_17c;
    if ((int)local_70 < (int)uStack_12c) {
      uStack_12c = local_70;
    }
  }
LAB_1432bf530:
  local_148 = (longlong *)local_98;
  uStack_124 = local_a4;
  local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar30 = local_70 & 0xffffffe0;
  iStack_120 = local_98._8_4_ - local_64;
  uStack_130 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_12c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uVar16,uStack_140);
  iVar15 = (int)local_70 >> 5;
  TStack_110._28_4_ = local_a4;
  TStack_110.BaseBitIndex = local_128;
  uStack_f0 = CONCAT44(uStack_11c,iStack_120);
  bVar22 = (byte)local_70;
  uStack_13c = uVar16;
  local_118 = local_148;
  TStack_110.Array = local_138;
  if (((int)local_70 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  fVar7 = __real_3f000000;
  if (uVar28 != local_70) {
    puVar23 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar23 = local_78;
    }
    uVar16 = -1 << (bVar22 & 0x1f) & puVar23[iVar15];
    while (uVar16 == 0) {
      lVar26 = (longlong)iVar15;
      uVar30 = uVar30 + 0x20;
      iVar15 = iVar15 + 1;
      uVar28 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1432bf650;
      uVar16 = (puVar23 + 1)[lVar26];
    }
    uVar25 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar28 = (uVar30 - 1) + (int)lVar26;
    if ((int)local_70 < (int)uVar28) {
      uVar28 = local_70;
    }
  }
LAB_1432bf650:
  do {
    plVar8 = local_118;
    pFVar29 = (FScriptContainerElement *)0x0;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f0);
    }
    iVar15 = 0;
    if (((TStack_110.CurrentBitIndex == uVar28) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar8 == (longlong *)local_98)) {
LAB_1432bf8f4:
      local_1b4 = 0x3f800000;
      local_1b0[0] = 6;
      (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_1b0,&local_1b4)
      ;
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return true;
    }
    local_1ec = local_1ec + 1;
    pFVar21 = (FString *)(*plVar8 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    if (this->bShouldAbort != (FThreadSafeBool)0x0) goto LAB_1432bf8f4;
    pFVar19 = (FFileManifest *)
              (**(code **)((longlong)*this->ManifestSet + 0x70))(this->ManifestSet,pFVar21);
    (**(code **)((longlong)*this->ManifestSet + 0x68))(this->ManifestSet,pFVar21);
    bVar10 = (bool)(**(code **)((longlong)*this->ManifestSet + 0x98))(this->ManifestSet,pFVar21);
    if (bVar10 == false) {
      iVar1 = (pFVar21->Data).ArrayNum;
      if (iVar1 == 0) {
        pwVar32 = L"";
      }
      else {
        pwVar32 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        iVar15 = iVar1 + -1;
      }
      uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar32);
      iVar15 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&this->TouchedFiles,uVar16,pFVar21);
      if (iVar15 != -1) goto LAB_1432bf735;
      bVar4 = false;
    }
    else {
LAB_1432bf735:
      bVar4 = true;
    }
    if ((pFVar19 != (FFileManifest *)0x0) && (bVar4)) {
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      if (this->bUseStageDirectory == false) {
LAB_1432bf7ce:
        pFVar21 = ::operator/(local_d0,&this->InstallDirectory,pFVar21);
        if (&local_1e8 != pFVar21) {
          if (pFVar29 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar29);
          }
          pFVar29 = (pFVar21->Data).AllocatorInstance.Data;
          (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.Data.ArrayNum = (pFVar21->Data).ArrayNum;
          local_1e8.Data.ArrayMax = (pFVar21->Data).ArrayMax;
          (pFVar21->Data).ArrayNum = 0;
          (pFVar21->Data).ArrayMax = 0;
          local_1e8.Data.AllocatorInstance.Data = pFVar29;
        }
        if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar20 = ::operator/(&local_e0,&this->StagedFileDirectory,pFVar21);
        pFVar34 = pFVar29;
        if (&local_1e8 != pFVar20) {
          pFVar29 = (pFVar20->Data).AllocatorInstance.Data;
          (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar34 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar20->Data).ArrayNum;
          local_1e8.Data.ArrayNum = (pFVar20->Data).ArrayNum;
          local_1e8.Data.ArrayMax = (pFVar20->Data).ArrayMax;
          (pFVar20->Data).ArrayNum = 0;
          (pFVar20->Data).ArrayMax = 0;
          local_1e8.Data.AllocatorInstance.Data = pFVar29;
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        pFVar27 = (FScriptContainerElement *)L"";
        if ((int)pFVar34 != 0) {
          pFVar27 = pFVar29;
        }
        cVar12 = (**(code **)((longlong)*this->FileSystem + 0x18))
                           (this->FileSystem,pFVar27,local_e8);
        if (cVar12 == '\0') goto LAB_1432bf7ce;
      }
      if (((local_1f4 & 1) != 0) &&
         (local_1f4 = local_1f4 & 0xfffffffe, pFVar29 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar29);
      }
      SetupFileAttributes(this,&local_1e8,pFVar19,bVar10);
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
    }
    local_1b8 = 6;
    local_1bc = (float)local_1ec / (float)(int)(local_98._8_4_ - local_64);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,&local_1b8,&local_1bc);
    FVar2 = this->bIsPaused;
    while ((FVar2 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
      FWindowsPlatformProcess::Sleep(fVar7);
      FVar2 = this->bIsPaused;
    }
    TStack_110._padding_._4_4_ = (uint)((ulonglong)TStack_110._padding_ >> 0x20);
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  } while( true );
}

// HasSameAttributes @ 1432daa80

bool __thiscall
BuildPatchServices::FFileAttribution::HasSameAttributes
          (FFileAttribution *this,FFileManifest *param_1,FFileManifest *param_2)

{
  return false;
}

// SelectFullFilePath @ 1432ec710

FString * __thiscall
BuildPatchServices::FFileAttribution::SelectFullFilePath
          (FFileAttribution *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (this->bUseStageDirectory != false) {
    pFVar3 = ::operator/(&local_28,&this->StagedFileDirectory,param_1);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*this->FileSystem + 0x18))(this->FileSystem,pwVar4,local_res8);
    if (cVar2 != '\0') {
      return __return_storage_ptr__;
    }
  }
  pFVar3 = ::operator/(&local_28,&this->InstallDirectory,param_1);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetPaused @ 1432edda0

void __thiscall BuildPatchServices::FFileAttribution::SetPaused(FFileAttribution *this,bool param_1)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = param_1;
  this->bIsPaused = FVar1;
  UNLOCK();
  return;
}

// SetupFileAttributes @ 1432ee120

void __thiscall
BuildPatchServices::FFileAttribution::SetupFileAttributes
          (FFileAttribution *this,FString *param_1,FFileManifest *param_2,bool param_3)

{
  EFileMetaFlags EVar1;
  char cVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  uint local_res8 [2];
  uint local_res10;
  
  pwVar4 = L"";
  local_res8[0] = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*this->FileSystem + 0x20))(this->FileSystem,pwVar3,local_res8);
  EVar1 = param_2->FileMetaFlags;
  bVar8 = (local_res8[0] & 2) != 0;
  local_res10 = local_res8[0] >> 3 & 0xffffff01;
  bVar7 = EVar1 >> 1 & 1;
  bVar5 = EVar1 >> 2 & 1;
  if ((cVar2 != '\0') && ((local_res8[0] & 1) == 0)) {
    return;
  }
  cVar6 = '\0';
  if (!param_3) {
    cVar6 = cVar2;
  }
  if (cVar6 == '\0') {
LAB_1432ee1dd:
    bVar8 = false;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->FileSystem + 0x30))(this->FileSystem,pwVar3,0);
LAB_1432ee1fb:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->FileSystem + 0x38))(this->FileSystem,pwVar3,bVar7);
    if (cVar6 != '\0') goto LAB_1432ee21c;
LAB_1432ee228:
    bVar8 = false;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->FileSystem + 0x30))(this->FileSystem,pwVar3,0);
LAB_1432ee246:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->FileSystem + 0x40))(this->FileSystem,pwVar3,bVar5);
    if (cVar6 == '\0') goto LAB_1432ee26c;
  }
  else {
    if (((byte)(local_res8[0] >> 2) & 1) != bVar7) {
      if ((local_res8[0] & 2) != 0) goto LAB_1432ee1dd;
      goto LAB_1432ee1fb;
    }
LAB_1432ee21c:
    if ((byte)local_res10 != bVar5) {
      if (bVar8 != false) goto LAB_1432ee228;
      goto LAB_1432ee246;
    }
  }
  if (bVar8 == (bool)(EVar1 & ReadOnly)) {
    return;
  }
LAB_1432ee26c:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x30))(this->FileSystem,pwVar4,EVar1 & ReadOnly);
  return;
}

