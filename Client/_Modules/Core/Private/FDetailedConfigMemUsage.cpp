// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FDetailedConfigMemUsage @ 141857740

void __thiscall FDetailedConfigMemUsage::~FDetailedConfigMemUsage(FDetailedConfigMemUsage *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PerSectionValueInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerSectionValueInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSectionValueInfo);
  *(undefined4 *)&(this->PerSectionInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerSectionInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSectionInfo);
  *(undefined4 *)&(this->PerLayerInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerLayerInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerLayerInfo);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// TrackCommandStream @ 141893ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDetailedConfigMemUsage::TrackCommandStream
          (FDetailedConfigMemUsage *this,FString *param_1,FConfigCommandStream *param_2)

{
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  code *pcVar5;
  FDetailedConfigMemUsage *pFVar6;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar7;
  FConfigCommandStream *pFVar8;
  bool bVar9;
  uint uVar10;
  FArchiveCountConfigMem *pFVar11;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar12;
  FArchive *pFVar13;
  FConfigExpansion *pFVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  FString *pFVar19;
  uint uVar20;
  longlong *plVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  undefined1 local_2f7 [3];
  uint local_2f4;
  FDetailedConfigMemUsage *local_2f0;
  FConfigCommandStream *local_2e8;
  int iStack_2e0;
  uint uStack_2dc;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  FSlotBase local_2a8;
  TBitArray<FDefaultBitArrayAllocator> *local_2a0;
  FConfigCommandStream *local_298;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *local_290;
  int iStack_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *local_280;
  undefined4 uStack_278;
  int iStack_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FConfigCommandStream *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  wchar_t *local_1f8 [4];
  undefined4 local_1d4;
  FStructuredArchiveFromArchive local_1d0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar18 = (param_1->Data).ArrayNum;
  iVar15 = iVar18 + -1;
  if (iVar18 == 0) {
    pwVar17 = L"";
    iVar15 = 0;
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_2f0 = this;
  local_298 = param_2;
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
  pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                        *)&this->PerLayerInfo,uVar10,param_1);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ((FArchive *)pFVar11,
             (TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
              *)param_2);
  iVar15 = (int)param_2->_padding_;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->_padding_;
  iStack_2e0 = 0;
  uStack_2dc = 1;
  local_2c8 = 0;
  iStack_2cc = 0;
  if (iVar15 != 0) {
    plVar21 = (longlong *)param_2->_padding_;
    if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
      plVar21 = (longlong *)pTVar23;
    }
    uVar10 = (uint)*plVar21;
    while (uVar10 == 0) {
      lVar16 = (longlong)iStack_2e0;
      local_2c8 = local_2c8 + 0x20;
      iStack_2e0 = iStack_2e0 + 1;
      iStack_2cc = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2e0) goto LAB_141893bde;
      uVar10 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
    }
    uStack_2dc = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_2dc * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_2b8 = (int)lVar16;
    iStack_2cc = local_2c8 + -1 + local_2b8;
    if (iVar15 < iStack_2cc) {
      iStack_2cc = iVar15;
    }
  }
LAB_141893bde:
  uVar10 = (uint)param_2->_padding_;
  uStack_2c4 = local_1d4;
  uVar20 = uVar10 & 0xffffffe0;
  iStack_2c0 = (int)param_2->_padding_ - *(int *)((longlong)&param_2->_padding_ + 4);
  TStack_228._padding_ = CONCAT44(uStack_2dc,iStack_2e0);
  uStack_2d0 = 0xffffffff;
  TStack_228.CurrentBitIndex = iStack_2cc;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar10 >> 5;
  TStack_228._28_4_ = local_1d4;
  TStack_228.BaseBitIndex = local_2c8;
  uStack_208 = CONCAT44(uStack_2bc,iStack_2c0);
  local_2f4 = uVar10;
  local_2e8 = param_2;
  local_2d8 = (longlong *)pTVar23;
  local_2a0 = pTVar23;
  local_230 = param_2;
  TStack_228.Array = pTVar23;
  if ((((int)uVar10 < 0) || (iVar15 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = (uint)param_2->_padding_;
  if (uVar10 != uVar3) {
    plVar21 = (longlong *)param_2->_padding_;
    if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
      plVar21 = (longlong *)pTVar23;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)plVar21 + (longlong)iVar18 * 4);
    while (uVar10 == 0) {
      lVar16 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar10 = uVar3;
      local_2f4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_141893d00;
      uVar10 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_2b4 = (int)lVar16;
    uVar10 = local_2b4 + -1 + uVar20;
    local_2f4 = uVar10;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
      local_2f4 = uVar3;
    }
  }
LAB_141893d00:
  do {
    pFVar8 = local_230;
    if ((int)local_230->_padding_ - *(int *)((longlong)&local_230->_padding_ + 4) != (int)uStack_208
       ) {
      local_2f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f8);
    }
    if (((TStack_228.CurrentBitIndex == uVar10) && (TStack_228.Array == pTVar23)) &&
       (pFVar8 == param_2)) {
      return;
    }
    pFVar19 = (FString *)(pFVar8->_padding_ + (longlong)TStack_228.CurrentBitIndex * 0xb8);
    iVar18 = (pFVar19->Data).ArrayNum;
    iVar15 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar17 = L"";
      iVar15 = 0;
    }
    else {
      pwVar17 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
    pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                          *)&this->PerSectionInfo,uVar10,pFVar19);
    pTVar1 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)(pFVar19 + 1);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              ((FArchive *)pFVar11,pTVar1);
    pFVar6 = local_2f0;
    iVar18 = (pFVar19->Data).ArrayNum;
    iVar15 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar17 = L"";
      iVar15 = 0;
    }
    else {
      pwVar17 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
    pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                          *)&pFVar6->PerSectionValueInfo,uVar10,pFVar19);
    iVar15 = pFVar19[3].Data.ArrayNum;
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 2);
    iStack_288 = 0;
    uStack_284 = 1;
    local_270 = 0;
    iStack_274 = 0;
    if (iVar15 != 0) {
      pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar19[3].Data.AllocatorInstance.Data;
      pTVar22 = pTVar23;
      if (pTVar4 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar4;
      }
      uVar10 = *(uint *)&((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data;
      while (uVar10 == 0) {
        lVar16 = (longlong)iStack_288;
        local_270 = local_270 + 0x20;
        iStack_288 = iStack_288 + 1;
        iStack_274 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288)
        goto LAB_141893e4f;
        uVar10 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                          lVar16 * 4 + 4);
      }
      uStack_284 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uStack_284 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2b0 = (int)lVar16;
      iStack_274 = local_270 + -1 + local_2b0;
      if (iVar15 < iStack_274) {
        iStack_274 = iVar15;
      }
    }
LAB_141893e4f:
    uVar10 = pFVar19[3].Data.ArrayNum;
    iStack_26c = iStack_2cc;
    iStack_268 = pFVar19[1].Data.ArrayNum -
                 *(int *)((longlong)&pFVar19[4].Data.AllocatorInstance.Data + 4);
    uVar20 = uVar10 & 0xffffffe0;
    TStack_258._padding_ = CONCAT44(uStack_284,iStack_288);
    uStack_278 = 0xffffffff;
    TStack_258.CurrentBitIndex = iStack_274;
    TStack_258.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar10 >> 5;
    TStack_258._28_4_ = iStack_2cc;
    TStack_258.BaseBitIndex = local_270;
    uStack_238 = CONCAT44(uStack_264,iStack_268);
    local_290 = pTVar1;
    local_280 = pTVar23;
    local_260 = pTVar1;
    TStack_258.Array = pTVar23;
    if ((((int)uVar10 < 0) || (iVar15 < (int)uVar10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = pFVar19[3].Data.ArrayNum;
    if (uVar10 != uVar3) {
      pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar19[3].Data.AllocatorInstance.Data;
      pTVar22 = pTVar23;
      if (pTVar4 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar4;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((longlong)
                         &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                        (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar16 = (longlong)iVar18;
        uVar20 = uVar20 + 0x20;
        iVar18 = iVar18 + 1;
        uVar10 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_141893f50;
        uVar10 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                          lVar16 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2ac = (int)lVar16;
      uVar10 = local_2ac + -1 + uVar20;
      if ((int)uVar3 < (int)uVar10) {
        uVar10 = uVar3;
      }
    }
LAB_141893f50:
    while( true ) {
      pTVar7 = local_260;
      if (*(int *)&(local_260->Elements).field_0x8 - *(int *)&(local_260->Elements).field_0x34 !=
          (int)uStack_238) {
        local_2f7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2f7);
      }
      if (((TStack_258.CurrentBitIndex == uVar10) && (TStack_258.Array == pTVar23)) &&
         (pTVar7 == pTVar1)) break;
      lVar16 = *(longlong *)&pTVar7->Elements + (longlong)TStack_258.CurrentBitIndex * 0x28;
      this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                          (&local_1d0,(FArchive *)pFVar11);
      FVar12 = FStructuredArchiveFromArchive::GetSlot(this_00);
      local_2a8.StructuredArchive = *(FStructuredArchive **)FVar12;
      ::operator<<((local_2a8.StructuredArchive)->Formatter->Inner,(FString *)(lVar16 + 8));
      pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_2a8);
      if ((pFVar13->field_0x28 & 1) != 0) {
        if (*(int *)(lVar16 + 0x10) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(lVar16 + 8);
        }
        pFVar14 = FindNextExpansion(pwVar17,local_1f8);
        *(bool *)(lVar16 + 0x1d) = pFVar14 != (FConfigExpansion *)0x0;
      }
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d0);
      TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
    }
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    this = local_2f0;
    param_2 = local_298;
    pTVar23 = local_2a0;
    uVar10 = local_2f4;
  } while( true );
}

// TrackFile @ 141894070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDetailedConfigMemUsage::TrackFile
          (FDetailedConfigMemUsage *this,FString *param_1,FConfigFile *param_2)

{
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  code *pcVar6;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FArchiveCountConfigMem *pFVar11;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar12;
  FArchive *pFVar13;
  FConfigExpansion *pFVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FString *pFVar21;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  undefined1 local_2e7 [3];
  int local_2e4;
  int local_2e0;
  FSlotBase local_2d8;
  FDetailedConfigMemUsage *local_2d0;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  undefined1 local_268 [12];
  uint local_25c;
  longlong local_258;
  uint local_250;
  int local_24c;
  int local_240;
  wchar_t *local_230;
  TBaseIterator<1,1> local_228;
  undefined4 local_1dc;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  iVar18 = (param_1->Data).ArrayNum;
  iVar15 = iVar18 + -1;
  if (iVar18 == 0) {
    pwVar17 = L"";
    iVar15 = 0;
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_2d0 = this;
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
  pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                        *)&this->PerLayerInfo,uVar10,param_1);
  ::operator<<((FArchive *)pFVar11,param_2);
  FConfigFile::begin(param_2,(TBaseIterator<1,1> *)local_268);
  FConfigFile::end(param_2,&local_228);
  do {
    uVar8 = local_268._0_8_;
    if ((int)*(longlong *)(local_268._0_8_ + 8) - *(int *)(local_268._0_8_ + 0x34) != local_240) {
      local_2e8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e8);
    }
    if (((local_24c == local_228.ElementIt._padding_._4_4_) &&
        (local_258 == local_228.ElementIt._padding_)) && (uVar8 == local_228.ElementIt._padding_)) {
      return;
    }
    pFVar21 = (FString *)((longlong)local_24c * 0x110 + *(longlong *)uVar8);
    iVar18 = (pFVar21->Data).ArrayNum;
    iVar15 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar17 = L"";
      iVar15 = 0;
    }
    else {
      pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
    pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                          *)&this->PerSectionInfo,uVar10,pFVar21);
    pTVar1 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)(pFVar21 + 1);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              ((FArchive *)pFVar11,pTVar1);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              ((FArchive *)pFVar11,
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)(pFVar21 + 6));
    iVar18 = (pFVar21->Data).ArrayNum;
    iVar15 = iVar18 + -1;
    if (iVar18 == 0) {
      pwVar17 = L"";
      iVar15 = 0;
    }
    else {
      pwVar17 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
    pFVar11 = TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
                          *)&this->PerSectionValueInfo,uVar10,pFVar21);
    iVar15 = pFVar21[3].Data.ArrayNum;
    iStack_2c0 = 0;
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar21 + 2);
    local_2a8 = 0;
    uStack_2bc = 1;
    iStack_2ac = 0;
    if (iVar15 != 0) {
      pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar21[3].Data.AllocatorInstance.Data;
      pTVar20 = pTVar2;
      if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = pTVar5;
      }
      uVar10 = *(uint *)&((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data;
      while (uVar10 == 0) {
        lVar16 = (longlong)iStack_2c0;
        local_2a8 = local_2a8 + 0x20;
        iStack_2c0 = iStack_2c0 + 1;
        iStack_2ac = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c0)
        goto LAB_14189425e;
        uVar10 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data +
                          lVar16 * 4 + 4);
      }
      uStack_2bc = -uVar10 & uVar10;
      uVar3 = (ulonglong)uStack_2bc * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2e4 = (int)lVar16;
      iStack_2ac = local_2a8 + -1 + local_2e4;
      if (iVar15 < iStack_2ac) {
        iStack_2ac = iVar15;
      }
    }
LAB_14189425e:
    uStack_2a4 = local_1dc;
    iStack_2a0 = pFVar21[1].Data.ArrayNum -
                 *(int *)((longlong)&pFVar21[4].Data.AllocatorInstance.Data + 4);
    uVar10 = pFVar21[3].Data.ArrayNum;
    uVar19 = uVar10 & 0xffffffe0;
    TStack_290._padding_ = CONCAT44(uStack_2bc,iStack_2c0);
    uStack_2b0 = 0xffffffff;
    TStack_290.CurrentBitIndex = iStack_2ac;
    TStack_290.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar10 >> 5;
    TStack_290._28_4_ = local_1dc;
    TStack_290.BaseBitIndex = local_2a8;
    uStack_270 = CONCAT44(uStack_29c,iStack_2a0);
    local_2c8 = pTVar1;
    local_2b8 = pTVar2;
    local_298 = pTVar1;
    TStack_290.Array = pTVar2;
    if ((((int)uVar10 < 0) || (iVar15 < (int)uVar10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = pFVar21[3].Data.ArrayNum;
    if (uVar10 != uVar4) {
      pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar21[3].Data.AllocatorInstance.Data;
      pTVar20 = pTVar2;
      if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = pTVar5;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((longlong)
                         &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data +
                        (longlong)iVar18 * 4);
      while (uVar10 == 0) {
        lVar16 = (longlong)iVar18;
        uVar19 = uVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar10 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_141894370;
        uVar10 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data +
                          lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2e0 = (int)lVar16;
      uVar10 = local_2e0 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar10) {
        uVar10 = uVar4;
      }
    }
LAB_141894370:
    while( true ) {
      pTVar7 = local_298;
      if (*(int *)&(local_298->Elements).field_0x8 - *(int *)&(local_298->Elements).field_0x34 !=
          (int)uStack_270) {
        local_2e7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2e7);
      }
      if (((TStack_290.CurrentBitIndex == uVar10) && (TStack_290.Array == pTVar2)) &&
         (pTVar7 == pTVar1)) break;
      lVar16 = *(longlong *)&pTVar7->Elements + (longlong)TStack_290.CurrentBitIndex * 0x28;
      this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                          (&local_1d8,(FArchive *)pFVar11);
      FVar12 = FStructuredArchiveFromArchive::GetSlot(this_00);
      local_2d8.StructuredArchive = *(FStructuredArchive **)FVar12;
      ::operator<<((local_2d8.StructuredArchive)->Formatter->Inner,(FString *)(lVar16 + 8));
      pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_2d8);
      if ((pFVar13->field_0x28 & 1) != 0) {
        if (*(int *)(lVar16 + 0x10) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(lVar16 + 8);
        }
        pFVar14 = FindNextExpansion(pwVar17,&local_230);
        *(bool *)(lVar16 + 0x1d) = pFVar14 != (FConfigExpansion *)0x0;
      }
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
      TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
    }
    local_250 = local_250 & ~local_25c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_268 + 8));
    this = local_2d0;
  } while( true );
}

