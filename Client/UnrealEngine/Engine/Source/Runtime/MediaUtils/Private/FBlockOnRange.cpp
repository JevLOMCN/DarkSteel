// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 6

// GetRange @ 146bff980

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FMediaTimeStamp> * __thiscall
FMediaPlayerFacade::FBlockOnRange::GetRange(FBlockOnRange *this)

{
  TRange<FTimespan> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  long64 lVar6;
  long64 lVar7;
  code *pcVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  undefined7 uVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  undefined7 uVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  FTimespan *pFVar18;
  longlong *plVar19;
  FTimespan *pFVar20;
  int iVar21;
  TRange<FMediaTimeStamp> *pTVar22;
  float fVar23;
  int local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined7 uStack_187;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint7 uStack_137;
  uint7 uStack_11f;
  uint local_108;
  undefined4 uStack_104;
  uint local_f0;
  undefined4 uStack_ec;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined7 uStack_a7;
  uint7 uStack_8f;
  uint7 uStack_77;
  uint7 uStack_67;
  undefined1 local_58 [24];
  
  pTVar1 = (this->Facade->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Facade->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->RangeIsDirty == false) || (pIVar2 == (IMediaPlayer *)0x0)) {
    pTVar22 = &this->BlockOnRange;
    goto LAB_146bffe4e;
  }
  bVar13 = TRange<FTimespan>::IsEmpty(&this->CurrentTimeRange);
  if (bVar13) {
LAB_146bffdaf:
    *(ulonglong *)&(this->LastProcessedTimeRange).LowerBound = (ulonglong)uStack_77 << 8;
    (this->LastProcessedTimeRange).LowerBound.Value.Ticks = 0;
    *(ulonglong *)&(this->LastProcessedTimeRange).UpperBound = (ulonglong)uStack_67 << 8;
    (this->LastProcessedTimeRange).UpperBound.Value.Ticks = 0;
  }
  else {
    puVar17 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    cVar14 = (**(code **)*puVar17)(puVar17,0);
    if (cVar14 == '\0') goto LAB_146bffdaf;
    pFVar18 = TRange<FTimespan>::GetLowerBoundValue(&this->CurrentTimeRange);
    lVar3 = pFVar18->Ticks;
    pFVar18 = TRange<FTimespan>::GetUpperBoundValue(&this->CurrentTimeRange);
    if (pFVar18->Ticks < lVar3) goto LAB_146bffdaf;
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,local_res18);
    if (*plVar19 < 1) goto LAB_146bffdaf;
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar15 = (**(code **)(*plVar19 + 0x18))(plVar19);
    if (1 < iVar15 - 2U) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        EmptyRange.LowerBound._0_8_ = (ulonglong)uStack_137 << 8;
        EmptyRange.LowerBound.Value.Time.Ticks = -0x8000000000000000;
        EmptyRange.UpperBound._0_8_ = (ulonglong)uStack_11f << 8;
        EmptyRange.LowerBound.Value.SequenceIndex = 0;
        EmptyRange.LowerBound.Value.LoopIndex = 0;
        EmptyRange.UpperBound.Value.Time.Ticks = -0x8000000000000000;
        EmptyRange.UpperBound.Value.SequenceIndex = 0;
        EmptyRange.UpperBound.Value.LoopIndex = 0;
        _Init_thread_footer(&::_TSS0);
        pTVar22 = &EmptyRange;
      }
      else {
        pTVar22 = &EmptyRange;
      }
      goto LAB_146bffe4e;
    }
    pFVar18 = TRange<FTimespan>::GetLowerBoundValue(&this->CurrentTimeRange);
    lVar3 = pFVar18->Ticks;
    pFVar18 = TRange<FTimespan>::GetUpperBoundValue(&this->CurrentTimeRange);
    lVar4 = pFVar18->Ticks;
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,local_res20);
    lVar5 = *plVar19;
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    cVar14 = (**(code **)(*plVar19 + 0x38))(plVar19);
    if (cVar14 == '\0') {
      pFVar18 = TRange<FTimespan>::GetLowerBoundValue(&this->CurrentTimeRange);
      lVar6 = pFVar18->Ticks;
      pFVar18 = TRange<FTimespan>::GetUpperBoundValue(&this->CurrentTimeRange);
      lVar7 = pFVar18->Ticks;
      bVar13 = TRange<FTimespan>::IsEmpty(&this->LastProcessedTimeRange);
      if (bVar13) {
        iVar15 = 0;
      }
      else {
        pFVar18 = TRange<FTimespan>::GetLowerBoundValue(&this->LastProcessedTimeRange);
        iVar15 = (int)(pFVar18->Ticks / lVar5);
      }
      iVar21 = this->OnBlockSequenceIndex;
      iVar15 = this->OnBlockLoopIndexOffset + iVar15;
      *(ulonglong *)&(this->BlockOnRange).LowerBound = CONCAT71(uStack_a7,1);
      (this->BlockOnRange).LowerBound.Value.Time.Ticks = lVar6;
      (this->BlockOnRange).LowerBound.Value.SequenceIndex = iVar21;
      (this->BlockOnRange).LowerBound.Value.LoopIndex = iVar15;
      *(ulonglong *)&(this->BlockOnRange).UpperBound = (ulonglong)uStack_8f << 8;
      (this->BlockOnRange).UpperBound.Value.Time.Ticks = lVar7;
      (this->BlockOnRange).UpperBound.Value.SequenceIndex = iVar21;
      (this->BlockOnRange).UpperBound.Value.LoopIndex = iVar15;
LAB_146bffd36:
      pTVar22 = &this->BlockOnRange;
      plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      pcVar8 = *(code **)(*plVar19 + 0x60);
      bVar13 = TRange<FMediaTimeStamp>::IsEmpty(pTVar22);
      (*pcVar8)(plVar19,!bVar13);
      TVar9.Value = (this->CurrentTimeRange).LowerBound.Type.Value;
      uVar10 = *(undefined7 *)&(this->CurrentTimeRange).LowerBound.field_0x1;
      lVar6 = (this->CurrentTimeRange).LowerBound.Value.Ticks;
      this->RangeIsDirty = false;
      TVar11.Value = (this->CurrentTimeRange).UpperBound.Type.Value;
      uVar12 = *(undefined7 *)&(this->CurrentTimeRange).UpperBound.field_0x1;
      lVar7 = (this->CurrentTimeRange).UpperBound.Value.Ticks;
      (this->LastProcessedTimeRange).LowerBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)TVar9.Value;
      *(undefined7 *)&(this->LastProcessedTimeRange).LowerBound.field_0x1 = uVar10;
      (this->LastProcessedTimeRange).LowerBound.Value.Ticks = lVar6;
      (this->LastProcessedTimeRange).UpperBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)TVar11.Value;
      *(undefined7 *)&(this->LastProcessedTimeRange).UpperBound.field_0x1 = uVar12;
      (this->LastProcessedTimeRange).UpperBound.Value.Ticks = lVar7;
      goto LAB_146bffe4e;
    }
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,local_58);
    uStack_bc = uStack_ec;
    uStack_d4 = uStack_104;
    local_c0 = local_f0;
    local_d8 = local_108;
    if ((*plVar19 != 0) && (*plVar19 != 0x7fffffffffffffff)) {
      iVar15 = this->OnBlockSequenceIndex;
      fVar23 = this->Facade->CurrentRate;
      if (fVar23 == 0.0) {
        fVar23 = this->Facade->LastRate;
      }
      this_00 = &this->LastProcessedTimeRange;
      bVar13 = TRange<FTimespan>::IsEmpty(this_00);
      iVar21 = (int)(lVar3 / lVar5);
      local_res10 = (int)(lVar4 / lVar5);
      if (bVar13) {
        iVar16 = local_res10;
        if (fVar23 >= 0.0) {
          iVar16 = iVar21;
        }
        this->OnBlockLoopIndexOffset = -iVar16;
      }
      else {
        pFVar18 = TRange<FTimespan>::GetLowerBoundValue(this_00);
        if (fVar23 < 0.0) {
          pFVar20 = TRange<FTimespan>::GetLowerBoundValue(&this->CurrentTimeRange);
          if (pFVar18->Ticks < pFVar20->Ticks) {
            this->OnBlockLoopIndexOffset = this->OnBlockLoopIndexOffset + (-1 - iVar21);
          }
        }
        else {
          pFVar20 = TRange<FTimespan>::GetLowerBoundValue(&this->CurrentTimeRange);
          if (pFVar20->Ticks < pFVar18->Ticks) {
            pFVar18 = TRange<FTimespan>::GetLowerBoundValue(this_00);
            this->OnBlockLoopIndexOffset =
                 this->OnBlockLoopIndexOffset + (int)(pFVar18->Ticks / lVar5) + 1;
          }
        }
      }
      iVar16 = this->OnBlockLoopIndexOffset;
      *(ulonglong *)&(this->BlockOnRange).LowerBound = CONCAT71(uStack_187,1);
      (this->BlockOnRange).LowerBound.Value.Time.Ticks = lVar3 % lVar5;
      (this->BlockOnRange).LowerBound.Value.SequenceIndex = iVar15;
      (this->BlockOnRange).LowerBound.Value.LoopIndex = iVar21 + iVar16;
      *(ulonglong *)&(this->BlockOnRange).UpperBound =
           CONCAT44(uStack_16c,uStack_170) & 0xffffffffffffff00;
      (this->BlockOnRange).UpperBound.Value.Time.Ticks = lVar4 % lVar5;
      (this->BlockOnRange).UpperBound.Value.SequenceIndex = iVar15;
      (this->BlockOnRange).UpperBound.Value.LoopIndex = local_res10 + iVar16;
      bVar13 = TRange<FMediaTimeStamp>::IsEmpty(&this->BlockOnRange);
      if ((bVar13) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!BlockOnRange.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                              ,0x5e7,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar22 = (TRange<FMediaTimeStamp> *)(*pcVar8)();
        return pTVar22;
      }
      goto LAB_146bffd36;
    }
  }
  *(uint *)&(this->BlockOnRange).LowerBound = local_d8 & 0xffffff00;
  *(undefined4 *)&(this->BlockOnRange).LowerBound.field_0x4 = uStack_d4;
  *(undefined4 *)&(this->BlockOnRange).LowerBound.Value.Time.Ticks = 0;
  *(undefined4 *)((longlong)&(this->BlockOnRange).LowerBound.Value.Time.Ticks + 4) = 0x80000000;
  pTVar22 = &this->BlockOnRange;
  (this->BlockOnRange).LowerBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).LowerBound.Value.LoopIndex = 0;
  *(uint *)&(this->BlockOnRange).UpperBound = local_c0 & 0xffffff00;
  *(undefined4 *)&(this->BlockOnRange).UpperBound.field_0x4 = uStack_bc;
  *(undefined4 *)&(this->BlockOnRange).UpperBound.Value.Time.Ticks = 0;
  *(undefined4 *)((longlong)&(this->BlockOnRange).UpperBound.Value.Time.Ticks + 4) = 0x80000000;
  (this->BlockOnRange).UpperBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).UpperBound.Value.LoopIndex = 0;
  plVar19 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  (**(code **)(*plVar19 + 0x60))(plVar19,0);
LAB_146bffe4e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar22;
}

// IsSet @ 146c02490

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FMediaPlayerFacade::FBlockOnRange::IsSet(FBlockOnRange *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  
  pTVar1 = (this->Facade->Player).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->Facade->Player).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->RangeIsDirty == false) {
    bVar3 = TRange<FMediaTimeStamp>::IsEmpty(&this->BlockOnRange);
    bVar3 = !bVar3;
  }
  else {
    bVar3 = TRange<FTimespan>::IsEmpty(&this->CurrentTimeRange);
    if ((!bVar3) && (pIVar2 != (IMediaPlayer *)0x0)) {
      puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      cVar4 = (**(code **)*puVar5)(puVar5,0);
      if (cVar4 != '\0') {
        bVar3 = true;
        goto LAB_146c024fe;
      }
    }
    bVar3 = false;
  }
LAB_146c024fe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// OnFlush @ 146c03720

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::FBlockOnRange::OnFlush(FBlockOnRange *this)

{
  uint7 uStack_27;
  uint7 uStack_17;
  
  this->OnBlockSequenceIndex = 0;
  this->OnBlockLoopIndexOffset = 0;
  *(ulonglong *)&(this->LastProcessedTimeRange).LowerBound = (ulonglong)uStack_27 << 8;
  (this->LastProcessedTimeRange).LowerBound.Value.Ticks = 0;
  this->RangeIsDirty = true;
  *(ulonglong *)&(this->LastProcessedTimeRange).UpperBound = (ulonglong)uStack_17 << 8;
  (this->LastProcessedTimeRange).UpperBound.Value.Ticks = 0;
  return;
}

// OnSeek @ 146c03760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::FBlockOnRange::OnSeek(FBlockOnRange *this,int param_1)

{
  uint7 uStack_27;
  uint7 uStack_17;
  
  this->OnBlockSequenceIndex = param_1;
  *(ulonglong *)&(this->LastProcessedTimeRange).LowerBound = (ulonglong)uStack_27 << 8;
  (this->LastProcessedTimeRange).LowerBound.Value.Ticks = 0;
  this->OnBlockLoopIndexOffset = 0;
  *(ulonglong *)&(this->LastProcessedTimeRange).UpperBound = (ulonglong)uStack_17 << 8;
  (this->LastProcessedTimeRange).UpperBound.Value.Ticks = 0;
  this->RangeIsDirty = true;
  return;
}

// Reset @ 146c0b930

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaPlayerFacade::FBlockOnRange::Reset(FBlockOnRange *this)

{
  uint7 uStack_57;
  uint7 uStack_3f;
  int iStack_28;
  undefined4 uStack_24;
  
  iStack_28 = (int)uStack_57 << 8;
  *(ulonglong *)&(this->BlockOnRange).LowerBound = (ulonglong)uStack_3f << 8;
  (this->BlockOnRange).LowerBound.Value.Time.Ticks = -0x8000000000000000;
  uStack_24 = (undefined4)(uStack_57 >> 0x18);
  (this->BlockOnRange).LowerBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).LowerBound.Value.LoopIndex = 0;
  *(int *)&(this->BlockOnRange).UpperBound = iStack_28;
  *(undefined4 *)&(this->BlockOnRange).UpperBound.field_0x4 = uStack_24;
  this->RangeIsDirty = false;
  *(undefined4 *)&(this->BlockOnRange).UpperBound.Value.Time.Ticks = 0;
  *(undefined4 *)((longlong)&(this->BlockOnRange).UpperBound.Value.Time.Ticks + 4) = 0x80000000;
  (this->BlockOnRange).UpperBound.Value.SequenceIndex = 0;
  (this->BlockOnRange).UpperBound.Value.LoopIndex = 0;
  *(ulonglong *)&(this->CurrentTimeRange).LowerBound = (ulonglong)uStack_57 << 8;
  (this->CurrentTimeRange).LowerBound.Value.Ticks = 0;
  this->OnBlockSequenceIndex = 0;
  this->OnBlockLoopIndexOffset = 0;
  *(ulonglong *)&(this->CurrentTimeRange).UpperBound = (ulonglong)uStack_3f << 8;
  (this->CurrentTimeRange).UpperBound.Value.Ticks = 0;
  *(ulonglong *)&(this->LastProcessedTimeRange).LowerBound = (ulonglong)uStack_3f << 8;
  (this->LastProcessedTimeRange).LowerBound.Value.Ticks = 0;
  *(ulonglong *)&(this->LastProcessedTimeRange).UpperBound = (ulonglong)uStack_57 << 8;
  (this->LastProcessedTimeRange).UpperBound.Value.Ticks = 0;
  return;
}

// SetRange @ 146c0d180

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::FBlockOnRange::SetRange(FBlockOnRange *this,TRange<FTimespan> *param_1)

{
  uchar uVar1;
  uchar uVar2;
  longlong lVar3;
  long64 lVar4;
  undefined7 uVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  bool bVar7;
  FTimespan *pFVar8;
  
  bVar7 = TRange<FTimespan>::IsEmpty(&this->CurrentTimeRange);
  if ((bVar7) && (bVar7 = TRange<FTimespan>::IsEmpty(param_1), bVar7)) {
    return;
  }
  uVar1 = (this->CurrentTimeRange).LowerBound.Type.Value;
  uVar2 = (param_1->LowerBound).Type.Value;
  if (((uVar1 != uVar2) ||
      (((uVar1 != '\x02' &&
        ((this->CurrentTimeRange).LowerBound.Value.Ticks != (param_1->LowerBound).Value.Ticks)) ||
       (uVar1 = (this->CurrentTimeRange).UpperBound.Type.Value,
       uVar1 != (param_1->UpperBound).Type.Value)))) ||
     ((uVar1 != '\x02' &&
      ((this->CurrentTimeRange).UpperBound.Value.Ticks != (param_1->UpperBound).Value.Ticks)))) {
    if ((uVar2 != '\x02') && ((param_1->UpperBound).Type.Value != '\x02')) {
      pFVar8 = TRange<FTimespan>::GetLowerBoundValue(param_1);
      lVar3 = pFVar8->Ticks;
      pFVar8 = TRange<FTimespan>::GetUpperBoundValue(param_1);
      if (lVar3 <= pFVar8->Ticks) {
        uVar5 = *(undefined7 *)&(param_1->LowerBound).field_0x1;
        lVar4 = (param_1->LowerBound).Value.Ticks;
        (this->CurrentTimeRange).LowerBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
        *(undefined7 *)&(this->CurrentTimeRange).LowerBound.field_0x1 = uVar5;
        (this->CurrentTimeRange).LowerBound.Value.Ticks = lVar4;
        TVar6.Value = (param_1->UpperBound).Type.Value;
        uVar5 = *(undefined7 *)&(param_1->UpperBound).field_0x1;
        lVar4 = (param_1->UpperBound).Value.Ticks;
        this->RangeIsDirty = true;
        (this->CurrentTimeRange).UpperBound.Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar6.Value;
        *(undefined7 *)&(this->CurrentTimeRange).UpperBound.field_0x1 = uVar5;
        (this->CurrentTimeRange).UpperBound.Value.Ticks = lVar4;
        return;
      }
    }
    Reset(this);
  }
  return;
}

