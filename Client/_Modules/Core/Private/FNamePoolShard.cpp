// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// CreateAndInsertEntry<FWriteScopeLock> @ 141a4cd60

FNameEntryId __thiscall
FNamePoolShard<1>::CreateAndInsertEntry<FWriteScopeLock>
          (FNamePoolShard<1> *this,FNameSlot *param_1,FNameValue<1> *param_2)

{
  undefined2 uVar1;
  FNameEntryAllocator *this_00;
  uchar *puVar2;
  code *pcVar3;
  void *_Src;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *in_R9;
  int iStack_50;
  
  this_00 = *(FNameEntryAllocator **)&this->field_0x18;
  _Src = (void *)*in_R9;
  uVar4 = in_R9[1];
  uVar1 = *(undefined2 *)((longlong)in_R9 + 0x1c);
  AcquireSRWLockExclusive((PSRWLOCK)this_00);
  iStack_50 = (int)uVar4;
  cVar5 = (char)((ulonglong)uVar4 >> 0x20);
  if (this_00->CurrentByteCursor < 0x20001) {
    uVar8 = ((cVar5 != '\0') + 1) * iStack_50 + 2;
    uVar7 = 0;
    if (uVar8 <= 0x20000 - this_00->CurrentByteCursor) {
      uVar7 = uVar8;
    }
    if (uVar7 != 0) goto LAB_141a4ce4e;
  }
  FNameEntryAllocator::AllocateNewBlock(this_00);
  uVar8 = ((cVar5 != '\0') + 1) * iStack_50 + 2;
  uVar7 = 0;
  if (uVar8 <= 0x20000 - this_00->CurrentByteCursor) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x277,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FNameEntryId)uVar7;
    }
  }
LAB_141a4ce4e:
  uVar9 = uVar7 + 1 & 0xfffffffe;
  uVar8 = this_00->CurrentBlock;
  this_00->Waste = this_00->Waste + (ulonglong)(uVar9 - uVar7);
  uVar10 = this_00->CurrentByteCursor >> 1;
  this_00->CurrentByteCursor = uVar9 + this_00->CurrentByteCursor;
  ReleaseSRWLockExclusive((PSRWLOCK)this_00);
  puVar2 = this_00->Blocks[uVar8];
  *(undefined2 *)(puVar2 + uVar10 * 2) = uVar1;
  memcpy(puVar2 + uVar10 * 2 + 2,_Src,(longlong)(int)(((cVar5 != '\0') + 1) * iStack_50));
  uVar7 = *(uint *)(in_R9 + 3);
  uVar10 = uVar8 << 0x10 | uVar10;
  uVar8 = uVar10 | uVar7;
  param_1->IdAndHash = uVar10;
  if ((((uVar10 & 0xe0000000) != 0) || ((uVar7 & 0x1fffffff) != 0)) || (uVar8 == 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(Value.ToUnstableInt() & ProbeHashMask) && !(ProbeHash & EntryIdMask) && Used()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x1ec,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FNameEntryId)uVar7;
    }
  }
  *(uint *)&(param_2->Name).field0_0x0 = uVar8;
  *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + 1;
  if ((uint)((*(int *)&this->field_0xc + 1) * 9) < (uint)(*(int *)&this->field_0x8 * 10)) {
    Grow(this,*(int *)&this->field_0xc * 2 + 2);
  }
  LOCK();
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  UNLOCK();
  LOCK();
  *(uint *)&this->field_0x24 = *(int *)&this->field_0x24 + (uint)*(byte *)((longlong)in_R9 + 0xc);
  UNLOCK();
  return (FNameEntryId)(uint)param_1;
}

// FNamePoolShard<1> @ 141a6b720

FNamePoolShard<1> * __thiscall FNamePoolShard<1>::FNamePoolShard<1>(FNamePoolShard<1> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  return this;
}

// ~FNamePoolShard<1> @ 141a72530

void __thiscall FNamePoolShard<1>::~FNamePoolShard<1>(FNamePoolShard<1> *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  FMemory::Free(*(void **)&this->field_0x10);
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  LOCK();
  *(undefined4 *)&this->field_0x20 = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)&this->field_0x24 = 0;
  UNLOCK();
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141a72c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Grow @ 141a82cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNamePoolShard<1>::Grow(FNamePoolShard<1> *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  void *_Dst;
  FWriteBuffer *pFVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar13;
  bool bVar14;
  undefined1 auStackY_c8 [32];
  FLLMScope local_94;
  FLLMScope local_90;
  FLLMScope local_8c;
  int local_88;
  uint local_80;
  uint uStack_7c;
  FMemScope local_78;
  TLogScope<0> local_70;
  ulonglong local_60 [5];
  ulonglong uVar12;
  
  local_60[4] = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FLLMScope::FLLMScope(&local_8c,FName,false,None,Default,true);
  FMemScope::FMemScope(&local_78,FName,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_90,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_94,AssetClasses,Default);
  bVar14 = -1 < MetadataChannel->Enabled;
  if (bVar14) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_70);
    *(undefined8 *)(local_70._8_8_ + 0x28) = *(undefined8 *)(local_70._8_8_ + 0x20);
  }
  iVar10 = *(int *)&this->field_0xc + 1;
  puVar2 = *(uint **)&this->field_0x10;
  if ((iVar10 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88 = *(int *)&this->field_0x8;
  _Dst = FMemory::Malloc((ulonglong)param_1 << 2,4);
  *(void **)&this->field_0x10 = _Dst;
  memset(_Dst,0,(ulonglong)param_1 << 2);
  uVar8 = 0;
  *(uint *)&this->field_0xc = param_1 - 1;
  iVar7 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  puVar13 = puVar2;
  if (puVar2 != puVar2 + iVar10) {
    do {
      uVar1 = *puVar13;
      uVar12 = uVar8;
      if (uVar1 != 0) {
        uStack_7c = uVar1 & 0xffff;
        local_80 = (uVar1 & 0x1fffffff) >> 0x10;
        uVar11 = (int)uVar8 + 1;
        uVar12 = (ulonglong)uVar11;
        *(uint *)((longlong)local_60 + uVar8 * 4) = uVar1;
        if (uVar11 == 8) {
          puVar9 = local_60;
          do {
            RehashAndInsert(this,(FNameSlot)(uint)*puVar9);
            puVar9 = (ulonglong *)((longlong)puVar9 + 4);
          } while (puVar9 != local_60 + 4);
          uVar12 = 0;
        }
      }
      iVar7 = (int)uVar12;
      puVar13 = puVar13 + 1;
      uVar8 = uVar12;
    } while (puVar13 != puVar2 + iVar10);
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  for (puVar9 = local_60; puVar9 != (ulonglong *)((longlong)local_60 + (longlong)iVar7 * 4);
      puVar9 = (ulonglong *)((longlong)puVar9 + 4)) {
    RehashAndInsert(this,(FNameSlot)(uint)*puVar9);
  }
  if ((local_88 != *(int *)&this->field_0x8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldUsedSlots == UsedSlots",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x66b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMemory::Free(puVar2);
  if (bVar14) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar6 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar6 - *(int *)&pFVar6->Cursor < 1) {
      pFVar6 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar6->Cursor = '\n';
    pFVar6->Cursor = pFVar6->Cursor + 1;
    pFVar6->Committed = pFVar6->Cursor;
  }
  FLLMScope::~FLLMScope(&local_94);
  FLLMScope::~FLLMScope(&local_90);
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(&local_8c);
  return;
}

// InsertBatch @ 141a84010

void __thiscall
FNamePoolShard<1>::InsertBatch(FNamePoolShard<1> *this,TArrayView<FNameLoad<1>,int> *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  FNameEntryHeader FVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar7;
  FNameEntryAllocator *this_00;
  uchar *puVar6;
  code *pcVar8;
  void *_Src;
  undefined4 uVar9;
  undefined1 uVar10;
  bool bVar11;
  FNameStringView_u_0 *pFVar12;
  longlong lVar13;
  FNameEntry *pFVar14;
  uint uVar15;
  FNameStringView_u_0 *pFVar16;
  ulonglong uVar17;
  FNameLoad<1> *pFVar18;
  FNameStringView_u_0 *pFVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  FNameLoad<1> *pFVar23;
  int iStack_60;
  FNameStringView_u_0 local_58;
  FNameStringView_u_0 FStack_50;
  FNameStringView_u_0 local_48;
  undefined8 uStack_40;
  
  iVar4 = param_1->ArrayNum;
  if (0 < iVar4) {
    uVar20 = 4;
    if ((int)(iVar4 - 1U) < 4) {
      uVar20 = iVar4 - 1U;
    }
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar15 = 0;
    puVar1 = &this->field_0xc;
    if (uVar20 != 0) {
      do {
        uVar22 = 0;
        if ((int)uVar15 < iVar4) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar20);
    }
    pFVar19 = (FNameStringView_u_0 *)param_1->DataPtr;
    iVar21 = 0;
    pFVar16 = pFVar19 + (ulonglong)uVar20 * 6;
    pFVar12 = pFVar19 + (longlong)iVar4 * 6;
    if (pFVar19 != pFVar12) {
      do {
        uVar15 = param_1->ArrayNum - 1;
        uVar20 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        pFVar18 = param_1->DataPtr;
        uVar20 = *(uint *)puVar1;
        lVar13 = 0;
        if (pFVar16 != (FNameStringView_u_0 *)(pFVar18 + (iVar4 + -1))) {
          lVar13 = 0x30;
        }
        pFVar16 = (FNameStringView_u_0 *)((longlong)pFVar16 + lVar13);
        uVar17 = (ulonglong)(*(uint *)((longlong)pFVar19 + 0x14) & uVar20);
        puVar2 = (uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
        uVar15 = *(uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
        while (uVar15 != 0) {
          if (((uVar15 & 0xe0000000) == *(uint *)(pFVar19 + 3)) &&
             (pFVar14 = (FNameEntry *)
                        ((ulonglong)((uVar15 & 0xffff) * 2) +
                        *(longlong *)
                         (*(longlong *)&this->field_0x18 + 0x10 +
                         (ulonglong)((uVar15 & 0x1fffffff) >> 0x10) * 8)),
             pFVar14->Header == *(FNameEntryHeader *)((longlong)pFVar19 + 0x1c))) {
            local_58 = *pFVar19;
            FStack_50 = pFVar19[1];
            bVar11 = EqualsSameDimensions<1>(pFVar14,(FNameStringView *)&local_58);
            if (bVar11) break;
          }
          uVar17 = (ulonglong)((int)uVar17 + 1U & uVar20);
          puVar2 = (uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
          uVar15 = *(uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
        }
        uVar20 = *puVar2;
        ((pFVar19[4].Data)->Id).Value = uVar20 & 0x1fffffff;
        *(bool *)((longlong)pFVar19 + 0x29) = uVar20 == 0;
        pFVar19 = pFVar19 + 6;
        iVar21 = iVar21 + (uint)(uVar20 == 0);
      } while (pFVar19 != pFVar12);
      if (iVar21 != 0) {
        uVar15 = (uint)((*(int *)&this->field_0x8 + 1 + iVar21) * 10) / 9;
        uVar20 = 1;
        if (uVar15 != 0) {
          uVar20 = uVar15;
        }
        uVar17 = (ulonglong)(uVar20 - 1) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar20 = 1 << ((byte)lVar13 & 0x1f);
        if (*(int *)puVar1 + 1U < uVar20) {
          Grow(this,uVar20);
        }
        AcquireSRWLockExclusive(*(PSRWLOCK *)&this->field_0x18);
        pFVar23 = pFVar18 + iVar4;
        for (; pFVar18 != pFVar23; pFVar18 = pFVar18 + 1) {
          if (pFVar18->bOutCreatedNewEntry != false) {
            uVar20 = *(uint *)puVar1;
            uVar17 = (ulonglong)((pFVar18->In).Hash.UnmaskedSlotIndex & uVar20);
            puVar2 = (uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
            uVar15 = *(uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
            while (uVar15 != 0) {
              if (((uVar15 & 0xe0000000) == (pFVar18->In).Hash.SlotProbeHash) &&
                 (pFVar14 = (FNameEntry *)
                            ((ulonglong)((uVar15 & 0xffff) * 2) +
                            *(longlong *)
                             (*(longlong *)&this->field_0x18 + 0x10 +
                             (ulonglong)((uVar15 & 0x1fffffff) >> 0x10) * 8)),
                 pFVar14->Header == (pFVar18->In).Hash.EntryProbeHeader)) {
                local_48.Data = *(void **)&(pFVar18->In).Name.field0_0x0;
                uStack_40._0_4_ = (pFVar18->In).Name.Len;
                uStack_40._4_1_ = (pFVar18->In).Name.bIsWide;
                uStack_40._5_3_ = *(undefined3 *)&(pFVar18->In).Name.field_0xd;
                bVar11 = EqualsSameDimensions<1>(pFVar14,(FNameStringView *)&local_48);
                if (bVar11) break;
              }
              uVar17 = (ulonglong)((int)uVar17 + 1U & uVar20);
              puVar2 = (uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
              uVar15 = *(uint *)(*(longlong *)&this->field_0x10 + uVar17 * 4);
            }
            pFVar18->bOutCreatedNewEntry = *puVar2 == 0;
            if (*puVar2 == 0) {
              this_00 = *(FNameEntryAllocator **)&this->field_0x18;
              _Src = (pFVar18->In).Name.field0_0x0.Data;
              uVar9 = (pFVar18->In).Name.Len;
              uVar10 = (pFVar18->In).Name.bIsWide;
              FVar3 = (pFVar18->In).Hash.EntryProbeHeader;
              if (this_00->CurrentByteCursor < 0x20001) {
                uVar5 = (pFVar18->In).Name.Len;
                uVar7 = (pFVar18->In).Name.bIsWide;
                uVar15 = ((uVar7 != '\0') + 1) * uVar5 + 2;
                uVar20 = 0;
                if (uVar15 <= 0x20000 - this_00->CurrentByteCursor) {
                  uVar20 = uVar15;
                }
                if (uVar20 == 0) goto LAB_141a8447d;
              }
              else {
LAB_141a8447d:
                FNameEntryAllocator::AllocateNewBlock(this_00);
                uVar15 = ((uVar10 != '\0') + 1) * uVar9 + 2;
                uVar20 = 0;
                if (uVar15 <= 0x20000 - this_00->CurrentByteCursor) {
                  uVar20 = uVar15;
                }
                if ((uVar20 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Bytes",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                        ,0x277,L""), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              uVar15 = uVar20 + 1 & 0xfffffffe;
              this_00->Waste = this_00->Waste + (ulonglong)(uVar15 - uVar20);
              uVar22 = this_00->CurrentByteCursor >> 1;
              this_00->CurrentByteCursor = uVar15 + this_00->CurrentByteCursor;
              uVar20 = this_00->CurrentBlock;
              puVar6 = this_00->Blocks[uVar20];
              *(FNameEntryHeader *)(puVar6 + uVar22 * 2) = FVar3;
              memcpy((FNameEntryHeader *)(puVar6 + uVar22 * 2) + 1,_Src,
                     (longlong)(int)(((uVar10 != '\0') + 1) * uVar9));
              uVar15 = (pFVar18->In).Hash.SlotProbeHash;
              uVar22 = uVar20 << 0x10 | uVar22;
              uVar20 = uVar15 | uVar22;
              if (((((uVar22 & 0xe0000000) != 0) || ((uVar15 & 0x1fffffff) != 0)) || (uVar20 == 0))
                 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("!(Value.ToUnstableInt() & ProbeHashMask) && !(ProbeHash & EntryIdMask) && Used()"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                         ,0x1ec,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *puVar2 = uVar20;
              *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + 1;
              if ((uint)((*(int *)puVar1 + 1) * 9) < (uint)(*(int *)&this->field_0x8 * 10)) {
                Grow(this,*(int *)puVar1 * 2 + 2);
              }
              LOCK();
              *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
              UNLOCK();
              LOCK();
              *(uint *)&this->field_0x24 =
                   *(int *)&this->field_0x24 + (uint)(pFVar18->In).Name.bIsWide;
              UNLOCK();
            }
            else {
              uVar22 = *puVar2 & 0x1fffffff;
            }
            (pFVar18->Out->Id).Value = uVar22;
          }
        }
        ReleaseSRWLockExclusive(*(PSRWLOCK *)&this->field_0x18);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// LogStatsCsv @ 141a89d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNamePoolShard<1>::LogStatsCsv(FNamePoolShard<1> *this,FOutputDevice *param_1)

{
  ushort uVar1;
  code *pcVar2;
  FNamePoolShard<1> *SRWLock;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  FNameHash *pFVar6;
  ulonglong uVar7;
  byte bVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  undefined1 auStack_bd8 [32];
  undefined4 local_bb8;
  undefined4 local_bb0;
  int local_ba8;
  int local_ba0;
  int local_b98;
  int local_b90;
  int local_b88;
  int local_b80;
  int local_b78;
  int local_b70;
  int local_b68;
  int local_b60;
  undefined1 local_b58;
  undefined1 local_b57;
  FIdentityFunctor local_b56;
  undefined1 local_b55;
  undefined1 local_b54;
  undefined1 local_b53 [3];
  int local_b50;
  int local_b4c;
  int local_b48;
  longlong *local_b40;
  uint uStack_b38;
  uint uStack_b34;
  TBitArray<FDefaultBitArrayAllocator> *local_b30;
  undefined4 uStack_b28;
  uint uStack_b24;
  uint local_b20;
  undefined4 uStack_b1c;
  int iStack_b18;
  undefined4 uStack_b14;
  uint local_b10;
  int local_b0c;
  int local_b08;
  int local_b04;
  ulonglong local_b00;
  uint local_af8;
  uint uStack_af4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_af0;
  undefined4 local_ae8;
  uint uStack_ae4;
  uint uStack_ae0;
  undefined4 uStack_adc;
  uint local_ad8;
  uint uStack_ad4;
  FNameHash local_ad0;
  int local_ac0;
  int local_abc;
  int local_ab8;
  FValueComparisonClass<TGreater<int>_> local_ab0;
  FValueComparisonClass<TGreater<int>_> local_aa8;
  FIdentityFunctor *local_aa0;
  FIdentityFunctor **local_a98;
  FNamePoolShard<1> *local_a90;
  FOutputDevice *local_a88;
  int local_a80;
  int local_a7c;
  longlong *local_a78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a70;
  int local_a50;
  longlong *local_a48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a40;
  undefined8 uStack_a20;
  longlong *local_a18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a10;
  undefined8 uStack_9f0;
  longlong *local_9e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9e0;
  undefined8 uStack_9c0;
  FNameHash local_9b8;
  FNameHash local_9a8 [2];
  undefined4 local_97c;
  undefined4 local_95c;
  undefined4 local_93c;
  undefined1 local_938 [32];
  ForElementType<unsigned_int> local_918;
  uint local_910;
  int local_90c;
  int local_908;
  int local_904;
  undefined1 local_900 [8];
  ForAnyElementType local_8f8;
  uint local_8f0;
  undefined1 local_8e8 [32];
  uint *local_8c8;
  uint local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  int local_8b4;
  undefined1 local_8b0 [8];
  ForElementType<FSetElementId> local_8a8;
  int local_8a0;
  undefined1 local_898 [32];
  uint *local_878;
  uint local_870;
  undefined4 local_86c;
  undefined4 local_868;
  int local_864;
  undefined1 local_860 [8];
  ForElementType<FSetElementId> local_858;
  int local_850;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_bd8;
  local_a90 = this;
  local_a88 = param_1;
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar22 = 0;
  local_898._0_8_ = 0;
  local_898._8_8_ = 0;
  local_878 = (uint *)0x0;
  local_870 = 0;
  local_86c = 0x80;
  local_868 = 0xffffffff;
  local_864 = 0;
  local_858 = (ForElementType<FSetElementId>)0x0;
  local_850 = 0;
  local_8e8._0_8_ = 0;
  local_8e8._8_8_ = 0;
  local_8c8 = (uint *)0x0;
  local_8c0 = 0;
  local_8bc = 0x80;
  local_8b8 = 0xffffffff;
  local_8b4 = 0;
  local_8a8 = (ForElementType<FSetElementId>)0x0;
  local_8a0 = 0;
  local_938._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
  local_938._8_8_ = 0;
  local_918 = (ForElementType<unsigned_int>)0x0;
  local_910 = 0;
  local_90c = 0x80;
  local_908 = -1;
  local_904 = 0;
  local_8f8.Data = (FScriptContainerElement *)0x0;
  local_8f0 = 0;
  uVar24 = uVar22;
  if (*(int *)&this->field_0xc != -1) {
    do {
      uVar18 = *(uint *)(*(longlong *)&this->field_0x10 + uVar24 * 4);
      if (uVar18 != 0) {
        uStack_ad4 = uVar18 & 0xffff;
        local_ad8 = (uVar18 & 0x1fffffff) >> 0x10;
        puVar19 = (ushort *)
                  (*(longlong *)(*(longlong *)&this->field_0x18 + 0x10 + (ulonglong)local_ad8 * 8) +
                  (ulonglong)((uVar18 & 0xffff) * 2));
        if ((*puVar19 < 0x40) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Header.Len != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0x976,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *puVar19;
        pwVar13 = (wchar_t *)(puVar19 + 1);
        if ((*puVar19 & 1) == 0) {
          if (pwVar13 == (wchar_t *)0x0) {
            memcpy(local_848,(void *)0x0,(ulonglong)(uVar1 >> 6));
            pwVar13 = local_848;
          }
          pFVar6 = HashLowerCase<char>(&local_9b8,(char *)pwVar13,(uint)(uVar1 >> 6));
        }
        else {
          if (pwVar13 == (wchar_t *)0x0) {
            memcpy(local_848,(void *)0x0,(ulonglong)(uVar1 >> 6) * 2);
            pwVar13 = local_848;
          }
          pFVar6 = HashLowerCase<wchar_t>(local_9a8,pwVar13,(uint)(uVar1 >> 6));
        }
        local_ad0 = *pFVar6;
        if (local_898._8_4_ != local_864) {
          FVar14 = (ForElementType<FSetElementId>)local_860;
          if (local_858 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_858;
          }
          uVar18 = *(uint *)((longlong)FVar14 +
                            ((ulonglong)(local_850 - 1) & local_ad0._0_8_ >> 0x20) * 4);
          while (uVar18 != 0xffffffff) {
            puVar9 = (uint *)((longlong)(int)uVar18 * 0x10 + local_898._0_8_);
            if (*puVar9 == local_ad0.UnmaskedSlotIndex) {
              if (puVar9 != (uint *)0x0) {
                puVar9 = puVar9 + 1;
                goto LAB_141a89fef;
              }
              break;
            }
            uVar18 = puVar9[2];
          }
        }
        puVar9 = (uint *)TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                         ::EmplaceByHash<unsigned_int_const_&>
                                   ((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                                     *)local_898,local_ad0.UnmaskedSlotIndex,
                                    &local_ad0.UnmaskedSlotIndex);
LAB_141a89fef:
        *puVar9 = *puVar9 + 1;
        local_b10 = local_ad0.UnmaskedSlotIndex & *(uint *)&this->field_0xc;
        if (local_8e8._8_4_ != local_8b4) {
          FVar14 = (ForElementType<FSetElementId>)local_8b0;
          if (local_8a8 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_8a8;
          }
          uVar18 = *(uint *)((longlong)FVar14 + (ulonglong)(local_8a0 - 1U & local_b10) * 4);
          while (uVar18 != 0xffffffff) {
            puVar9 = (uint *)((longlong)(int)uVar18 * 0x10 + local_8e8._0_8_);
            if (*puVar9 == local_b10) {
              if (puVar9 != (uint *)0x0) {
                puVar9 = puVar9 + 1;
                goto LAB_141a8a06e;
              }
              break;
            }
            uVar18 = puVar9[2];
          }
        }
        puVar9 = (uint *)TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                         ::EmplaceByHash<unsigned_int>
                                   ((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                                     *)local_8e8,local_b10,&local_b10);
LAB_141a8a06e:
        *puVar9 = *puVar9 + 1;
        if (local_938._8_4_ != local_904) {
          FVar11.Data = (FScriptContainerElement *)local_900;
          if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar11.Data = local_8f8.Data;
          }
          iVar15 = *(int *)((longlong)FVar11.Data +
                           (ulonglong)(local_8f0 - 1 & local_ad0.SlotProbeHash) * 4);
          while (iVar15 != -1) {
            pFVar10 = (FScriptContainerElement *)(local_938._0_8_ + (longlong)iVar15 * 0x10);
            if (*(uint *)&pFVar10->field_0x0 == local_ad0.SlotProbeHash) {
              if (pFVar10 != (FScriptContainerElement *)0x0) {
                pFVar10 = pFVar10 + 4;
                goto LAB_141a8a0df;
              }
              break;
            }
            iVar15 = *(int *)(pFVar10 + 8);
          }
        }
        pFVar10 = (FScriptContainerElement *)
                  TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                  ::EmplaceByHash<unsigned_int_const_&>
                            ((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                              *)local_938,local_ad0.SlotProbeHash,&local_ad0.SlotProbeHash);
LAB_141a8a0df:
        *(int *)pFVar10 = *(int *)pFVar10 + 1;
      }
      uVar18 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar18;
    } while (uVar18 < *(int *)&this->field_0xc + 1U);
  }
  local_ab0.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_b55;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)local_898,&local_ab0);
  local_aa8.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_b54;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              *)local_8e8,&local_aa8);
  local_aa0 = &local_b56;
  local_a98 = &local_aa0;
  if (0 < local_938._8_4_ - local_904) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_938);
    uVar4 = local_938._0_8_;
    iVar15 = local_938._8_4_ - local_904;
    if ((iVar15 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar4,iVar15,local_b56,
               (FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                *)&local_a98);
  }
  uVar18 = local_8f0;
  uVar24 = (ulonglong)local_8f0;
  if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8f8,0,0,4);
  }
  if (uVar18 == 0) goto LAB_141a8a27a;
  uVar20 = uVar18;
  if (uVar18 < 2) {
    if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
      uVar20 = 0;
      goto LAB_141a8a221;
    }
  }
  else {
LAB_141a8a221:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8f8,0,uVar20,4);
  }
  if (0 < (int)uVar18) {
    uVar21 = uVar22;
    do {
      FVar11.Data = (FScriptContainerElement *)local_900;
      if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = local_8f8.Data;
      }
      uVar7 = uVar21 & (longlong)(int)uVar18 - 1U;
      uVar21 = uVar21 + 1;
      *(undefined4 *)((longlong)FVar11.Data + uVar7 * 4) = 0xffffffff;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
LAB_141a8a27a:
  local_b00 = 1;
  uVar18 = 0;
  if (local_8f0 != 0) {
    pTStack_af0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_938 + 0x10);
    local_af8 = 0;
    uStack_af4 = 1;
    uStack_ae4 = 0;
    uStack_ae0 = 0;
    uVar24 = uVar22;
    if (local_910 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_938 + 0x10);
      if (local_918 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_918;
      }
      uVar20 = *(uint *)FVar23;
      uVar21 = uVar22;
      while (uVar20 == 0) {
        uStack_ae0 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_ae0;
        iVar15 = (int)uVar24;
        local_af8 = iVar15 + 1;
        uVar24 = (ulonglong)local_af8;
        if ((int)((local_910 - 1) + ((int)(local_910 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_af8)
        goto LAB_141a8a33a;
        uVar20 = ((uint *)((longlong)FVar23 + 4))[iVar15];
      }
      uStack_af4 = -uVar20 & uVar20;
      uVar24 = (ulonglong)uStack_af4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_a80 = (int)lVar12;
      uStack_ae4 = local_a80 + -1 + uStack_ae0;
      uVar24 = (ulonglong)uStack_ae4;
      if ((int)local_910 < (int)uStack_ae4) {
LAB_141a8a33a:
        uVar24 = (ulonglong)local_910;
        uStack_ae4 = local_910;
      }
    }
    local_ae8 = 0xffffffff;
    local_a78 = (longlong *)local_938;
    local_a70._padding_ = CONCAT44(uStack_af4,local_af8);
    local_a70.CurrentBitIndex = uStack_ae4;
    local_a70.UnvisitedBitMask = 0xffffffff;
    local_a70._28_4_ = uStack_adc;
    local_a70.BaseBitIndex = uStack_ae0;
    local_a70.Array = pTStack_af0;
    if ((int)uVar24 < (int)local_910) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar24 * 0x10 + *local_a78);
        uVar20 = local_8f0 - 1 & *puVar9;
        puVar9[3] = uVar20;
        FVar11.Data = (FScriptContainerElement *)local_900;
        if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_8f8.Data;
        }
        uVar21 = (longlong)(int)local_8f0 - 1U & (longlong)(int)uVar20;
        puVar9[2] = *(uint *)((longlong)FVar11.Data + uVar21 * 4);
        *(int *)((longlong)FVar11.Data + uVar21 * 4) = (int)uVar24;
        local_a70.UnvisitedBitMask = local_a70.UnvisitedBitMask & ~local_a70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a70);
        uVar24 = (ulonglong)(uint)local_a70.CurrentBitIndex;
      } while (local_a70.CurrentBitIndex < (local_a70.Array)->NumBits);
    }
  }
  uVar20 = local_870;
  local_b08 = local_8e8._8_4_ - local_8b4;
  iStack_b18 = local_898._8_4_ - local_864;
  local_b0c = local_938._8_4_ - local_904;
  local_b48 = 0;
  local_b4c = -0x80000000;
  uStack_b24 = uVar18;
  local_b20 = uVar18;
  uStack_b34 = 1;
  if (local_870 != 0) {
    puVar9 = (uint *)(local_898 + 0x10);
    if (local_878 != (uint *)0x0) {
      puVar9 = local_878;
    }
    uVar25 = *puVar9;
    uVar24 = uVar22;
    local_b20 = 0;
    uVar18 = 0;
    while (uVar25 == 0) {
      iVar15 = (int)uVar22;
      local_b20 = (int)uVar24 + 0x20;
      uVar24 = (ulonglong)local_b20;
      uVar18 = iVar15 + 1;
      uVar22 = (ulonglong)uVar18;
      uStack_b24 = local_870;
      if ((int)((local_870 - 1) + ((int)(local_870 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_141a8a490;
      uVar25 = puVar9[(longlong)iVar15 + 1];
    }
    uStack_b34 = -uVar25 & uVar25;
    uVar22 = (ulonglong)uStack_b34 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a7c = (int)lVar12;
    uStack_b24 = local_a7c + -1 + local_b20;
    if ((int)local_870 < (int)uStack_b24) {
      uStack_b24 = local_870;
    }
  }
LAB_141a8a490:
  local_b40 = (longlong *)local_898;
  local_b30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_898 + 0x10);
  uVar25 = local_870 & 0xffffffe0;
  TStack_a10._padding_ = CONCAT44(uStack_b34,uVar18);
  uStack_b28 = 0xffffffff;
  TStack_a10.CurrentBitIndex = uStack_b24;
  TStack_a10.UnvisitedBitMask = 0xffffffff;
  uStack_b1c = local_97c;
  TStack_a10._28_4_ = local_97c;
  TStack_a10.BaseBitIndex = local_b20;
  uStack_9f0 = CONCAT44(uStack_b14,iStack_b18);
  iVar15 = (int)local_870 >> 5;
  bVar8 = (byte)local_870;
  uStack_b38 = uVar18;
  local_b04 = iStack_b18;
  local_a18 = local_b40;
  TStack_a10.Array = local_b30;
  if (((int)local_870 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar20 != local_870) {
    puVar9 = (uint *)(local_898 + 0x10);
    if (local_878 != (uint *)0x0) {
      puVar9 = local_878;
    }
    uVar18 = -1 << (bVar8 & 0x1f) & puVar9[iVar15];
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar25 = uVar25 + 0x20;
      iVar15 = iVar15 + 1;
      uVar20 = local_870;
      if ((int)((local_870 - 1) + ((int)(local_870 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_141a8a5a3;
      uVar18 = puVar9[lVar12 + 1];
    }
    uVar22 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a50 = (int)lVar12;
    uVar20 = (uVar25 - 1) + local_a50;
    if ((int)local_870 < (int)uVar20) {
      uVar20 = local_870;
    }
  }
LAB_141a8a5a3:
  iVar15 = local_b4c;
  iVar26 = local_b48;
  while( true ) {
    plVar3 = local_a18;
    if ((int)local_a18[1] - *(int *)((longlong)local_a18 + 0x34) != (int)uStack_9f0) {
      local_b58 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b58);
    }
    uVar18 = local_8c0;
    if (((TStack_a10.CurrentBitIndex == uVar20) &&
        (TStack_a10.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_898 + 0x10))) &&
       (plVar3 == (longlong *)local_898)) break;
    iVar16 = *(int *)(*plVar3 + 4 + (longlong)TStack_a10.CurrentBitIndex * 0x10);
    iVar26 = iVar26 + -1 + iVar16;
    if (iVar16 < iVar15) {
      iVar16 = iVar15;
    }
    iVar15 = iVar16;
    TStack_a10.UnvisitedBitMask = TStack_a10.UnvisitedBitMask & ~TStack_a10._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a10);
  }
  uStack_b38 = 0;
  local_b20 = 0;
  local_b50 = 0;
  uStack_b34 = (uint)local_b00;
  uStack_b24 = 0;
  if (local_8c0 != 0) {
    puVar9 = (uint *)(local_8e8 + 0x10);
    if (local_8c8 != (uint *)0x0) {
      puVar9 = local_8c8;
    }
    uVar20 = *puVar9;
    local_b20 = 0;
    while (uVar20 == 0) {
      lVar12 = (longlong)(int)uStack_b38;
      local_b20 = local_b20 + 0x20;
      uStack_b38 = uStack_b38 + 1;
      uStack_b24 = local_8c0;
      if ((int)((local_8c0 - 1) + ((int)(local_8c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b38)
      goto LAB_141a8a6e0;
      uVar20 = puVar9[lVar12 + 1];
    }
    uStack_b34 = -uVar20 & uVar20;
    uVar22 = (ulonglong)uStack_b34 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_ac0 = (int)lVar12;
    uStack_b24 = local_b20 + -1 + local_ac0;
    if ((int)local_8c0 < (int)uStack_b24) {
      uStack_b24 = local_8c0;
    }
  }
LAB_141a8a6e0:
  local_b40 = (longlong *)local_8e8;
  uStack_b1c = local_93c;
  local_b30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_8e8 + 0x10);
  uVar20 = local_8c0 & 0xffffffe0;
  iStack_b18 = local_8e8._8_4_ - local_8b4;
  TStack_a40._padding_ = CONCAT44(uStack_b34,uStack_b38);
  uStack_b28 = 0xffffffff;
  TStack_a40.CurrentBitIndex = uStack_b24;
  TStack_a40.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_8c0 >> 5;
  TStack_a40._28_4_ = local_93c;
  TStack_a40.BaseBitIndex = local_b20;
  uStack_a20 = CONCAT44(uStack_b14,iStack_b18);
  bVar8 = (byte)local_8c0;
  local_b4c = iVar15;
  local_b48 = iVar26;
  local_a48 = local_b40;
  TStack_a40.Array = local_b30;
  if (((int)local_8c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar18 != local_8c0) {
    puVar9 = (uint *)(local_8e8 + 0x10);
    if (local_8c8 != (uint *)0x0) {
      puVar9 = local_8c8;
    }
    uVar18 = -1 << (bVar8 & 0x1f) & puVar9[iVar16];
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = local_8c0;
      if ((int)((local_8c0 - 1) + ((int)(local_8c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto switchD_14fbe270a_caseD_a9;
      uVar18 = puVar9[lVar12 + 1];
    }
    uVar22 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_abc = (int)lVar12;
    uVar18 = local_abc + -1 + uVar20;
    if ((int)local_8c0 < (int)uVar18) {
      uVar18 = local_8c0;
    }
  }
switchD_14fbe270a_caseD_a9:
  iVar15 = local_b50;
  iVar26 = -0x80000000;
  while( true ) {
    plVar3 = local_a48;
    if ((int)local_a48[1] - *(int *)((longlong)local_a48 + 0x34) != (int)uStack_a20) {
      local_b57 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b57);
    }
    uVar20 = local_910;
    if (((TStack_a40.CurrentBitIndex == uVar18) &&
        (TStack_a40.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_8e8 + 0x10))) &&
       (plVar3 == (longlong *)local_8e8)) break;
    iVar16 = *(int *)(*plVar3 + 4 + (longlong)TStack_a40.CurrentBitIndex * 0x10);
    iVar15 = iVar15 + -1 + iVar16;
    if (iVar16 < iVar26) {
      iVar16 = iVar26;
    }
    TStack_a40.UnvisitedBitMask = TStack_a40.UnvisitedBitMask & ~TStack_a40._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a40);
    iVar26 = iVar16;
  }
  iVar16 = 0;
  uStack_b38 = 0;
  local_b20 = 0;
  uStack_b24 = 0;
  if (local_910 != 0) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_938 + 0x10);
    if (local_918 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_918;
    }
    uVar18 = *(uint *)FVar23;
    while (uVar18 == 0) {
      lVar12 = (longlong)(int)uStack_b38;
      local_b20 = local_b20 + 0x20;
      uStack_b38 = uStack_b38 + 1;
      uStack_b24 = local_910;
      if ((int)((local_910 - 1) + ((int)(local_910 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b38)
      goto LAB_141a8a932;
      uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar12];
    }
    local_b00 = (ulonglong)(-uVar18 & uVar18);
    uVar22 = local_b00 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_ab8 = (int)lVar12;
    uStack_b24 = local_b20 + -1 + local_ab8;
    if ((int)local_910 < (int)uStack_b24) {
      uStack_b24 = local_910;
    }
  }
LAB_141a8a932:
  local_b40 = (longlong *)local_938;
  uVar18 = local_910 & 0xffffffe0;
  uStack_b34 = (uint)local_b00;
  uStack_b1c = local_95c;
  local_b30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_938 + 0x10);
  iStack_b18 = local_938._8_4_ - local_904;
  uStack_b28 = 0xffffffff;
  TStack_9e0.CurrentBitIndex = uStack_b24;
  TStack_9e0.UnvisitedBitMask = 0xffffffff;
  TStack_9e0._padding_ = CONCAT44(uStack_b34,uStack_b38);
  iVar17 = (int)local_910 >> 5;
  TStack_9e0._28_4_ = local_95c;
  TStack_9e0.BaseBitIndex = local_b20;
  uStack_9c0 = CONCAT44(uStack_b14,iStack_b18);
  bVar8 = (byte)local_910;
  local_b50 = iVar15;
  local_9e8 = local_b40;
  TStack_9e0.Array = local_b30;
  if (((int)local_910 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar20 != local_910) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_938 + 0x10);
    if (local_918 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_918;
    }
    uVar20 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = local_910;
      if ((int)((local_910 - 1) + ((int)(local_910 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_141a8aa4d;
      uVar20 = ((uint *)((longlong)FVar23 + 4))[lVar12];
    }
    uVar22 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar20 = (int)lVar12 + -1 + uVar18;
    if ((int)local_910 < (int)uVar20) {
      uVar20 = local_910;
    }
  }
LAB_141a8aa4d:
  iVar15 = -0x80000000;
  while( true ) {
    plVar3 = local_9e8;
    if ((int)local_9e8[1] - *(int *)((longlong)local_9e8 + 0x34) != (int)uStack_9c0) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b53);
    }
    SRWLock = local_a90;
    if (((TStack_9e0.CurrentBitIndex == uVar20) &&
        (TStack_9e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_938 + 0x10))) &&
       (plVar3 == (longlong *)local_938)) break;
    iVar17 = *(int *)(*plVar3 + 4 + (longlong)TStack_9e0.CurrentBitIndex * 0x10);
    iVar16 = iVar16 + -1 + iVar17;
    if (iVar17 < iVar15) {
      iVar17 = iVar15;
    }
    TStack_9e0.UnvisitedBitMask = TStack_9e0.UnvisitedBitMask & ~TStack_9e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9e0);
    iVar15 = iVar17;
  }
  local_bb8 = *(undefined4 *)&local_a90->field_0x28;
  local_bb0 = *(undefined4 *)&local_a90->field_0x8;
  local_ba8 = *(int *)&local_a90->field_0xc + 1;
  local_b70 = local_b0c;
  local_b80 = local_b50;
  local_b88 = local_b08;
  local_b90 = local_b4c;
  local_b98 = local_b48;
  local_ba0 = local_b04;
  local_b78 = iVar26;
  local_b68 = iVar16;
  local_b60 = iVar15;
  FOutputDevice::LogfImpl(local_a88,L",%u,%u,%u,%u,%u,%u,%d,%d,%u,%d,%d,%u,%d,%d");
  local_8f0 = 0;
  if ((ForElementType<FSetElementId>)local_8f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_8f8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_938);
  local_8a0 = 0;
  if (local_8a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_8a8);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_8e8);
  local_850 = 0;
  if (local_858 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_858);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_898);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// RehashAndInsert @ 141a8f6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNamePoolShard<1>::RehashAndInsert(FNamePoolShard<1> *this,FNameSlot param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar4;
  longlong lVar3;
  code *pcVar5;
  bool bVar6;
  FNameHash *pFVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ushort *puVar10;
  undefined1 auStack_868 [32];
  uint local_848;
  uint uStack_844;
  FNameHash local_840;
  FNameHash local_830;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_868;
  if ((param_1.IdAndHash == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldSlot.Used()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x6a0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_844 = param_1.IdAndHash & 0xffff;
  local_848 = (param_1.IdAndHash & 0x1fffffff) >> 0x10;
  puVar10 = (ushort *)
            (*(longlong *)(*(longlong *)&this->field_0x18 + 0x10 + (ulonglong)local_848 * 8) +
            (ulonglong)((param_1.IdAndHash & 0xffff) * 2));
  if ((*puVar10 < 0x40) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = *puVar10;
  pwVar9 = (wchar_t *)(puVar10 + 1);
  if ((*puVar10 & 1) == 0) {
    if (pwVar9 == (wchar_t *)0x0) {
      memcpy(local_818,(void *)0x0,(ulonglong)(uVar1 >> 6));
      pwVar9 = local_818;
    }
    pFVar7 = HashLowerCase<char>(&local_830,(char *)pwVar9,(uint)(uVar1 >> 6));
  }
  else {
    if (pwVar9 == (wchar_t *)0x0) {
      memcpy(local_818,(void *)0x0,(ulonglong)(uVar1 >> 6) * 2);
      pwVar9 = local_818;
    }
    pFVar7 = HashLowerCase<wchar_t>(&local_840,pwVar9,(uint)(uVar1 >> 6));
  }
  uVar4 = pFVar7->UnmaskedSlotIndex;
  lVar3 = *(longlong *)&this->field_0x10;
  uVar8 = (ulonglong)(uVar4 & *(uint *)&this->field_0xc);
  iVar2 = *(int *)(lVar3 + uVar8 * 4);
  while (iVar2 != 0) {
    uVar8 = (ulonglong)((int)uVar8 + 1U & *(uint *)&this->field_0xc);
    iVar2 = *(int *)(lVar3 + uVar8 * 4);
  }
  *(uint *)(lVar3 + uVar8 * 4) = param_1.IdAndHash;
  *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + 1;
  return;
}

