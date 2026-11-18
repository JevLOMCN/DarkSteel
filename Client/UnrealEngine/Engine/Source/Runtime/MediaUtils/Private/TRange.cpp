// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 11

// Size<FMediaTimeStamp> @ 146bf2150

FMediaTimeStamp * __thiscall
TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>
          (TRange<FMediaTimeStamp> *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FMediaTimeStamp *pFVar5;
  longlong lVar6;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMediaTimeStamp *)(*pcVar3)();
      return pFVar5;
    }
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMediaTimeStamp *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (((this->LowerBound).Type.Value == '\x02') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMediaTimeStamp *)(*pcVar3)();
    return pFVar5;
  }
  iVar1 = (this->UpperBound).Value.SequenceIndex;
  iVar2 = (this->LowerBound).Value.SequenceIndex;
  if ((iVar2 == iVar1) && ((this->LowerBound).Value.LoopIndex == (this->UpperBound).Value.LoopIndex)
     ) {
    lVar6 = (this->UpperBound).Value.Time.Ticks - (this->LowerBound).Value.Time.Ticks;
  }
  else if ((iVar2 <= iVar1) ||
          (lVar6 = -0x8000000000000000,
          (this->LowerBound).Value.LoopIndex <= (this->UpperBound).Value.LoopIndex)) {
    lVar6 = 0x7fffffffffffffff;
  }
  __return_storage_ptr__->SequenceIndex = 0x7fffffff;
  __return_storage_ptr__->LoopIndex = 0x7fffffff;
  (__return_storage_ptr__->Time).Ticks = lVar6;
  return __return_storage_ptr__;
}

// GetLowerBoundValue @ 146bfed00

FTimespan * __thiscall TRange<FTimespan>::GetLowerBoundValue(TRange<FTimespan> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan *pFVar3;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    return &(this->LowerBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTimespan *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->LowerBound).Value;
}

// GetLowerBoundValue @ 146bfed50

FMediaTimeStamp * __thiscall
TRange<FMediaTimeStamp>::GetLowerBoundValue(TRange<FMediaTimeStamp> *this)

{
  code *pcVar1;
  bool bVar2;
  FMediaTimeStamp *pFVar3;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    return &(this->LowerBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMediaTimeStamp *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->LowerBound).Value;
}

// GetUpperBoundValue @ 146c01400

FTimespan * __thiscall TRange<FTimespan>::GetUpperBoundValue(TRange<FTimespan> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan *pFVar3;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    return &(this->UpperBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTimespan *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->UpperBound).Value;
}

// GetUpperBoundValue @ 146c01450

FMediaTimeStamp * __thiscall
TRange<FMediaTimeStamp>::GetUpperBoundValue(TRange<FMediaTimeStamp> *this)

{
  code *pcVar1;
  bool bVar2;
  FMediaTimeStamp *pFVar3;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    return &(this->UpperBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMediaTimeStamp *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->UpperBound).Value;
}

// Intersection @ 146c01de0

TRange<FMediaTimeStamp> * __cdecl
TRange<FMediaTimeStamp>::Intersection
          (TRange<FMediaTimeStamp> *__return_storage_ptr__,TRange<FMediaTimeStamp> *param_1,
          TRange<FMediaTimeStamp> *param_2)

{
  TRangeBound<FMediaTimeStamp> *pTVar1;
  TRangeBound<FMediaTimeStamp> *pTVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  long64 lVar9;
  undefined7 uVar10;
  bool bVar11;
  TRangeBound<FMediaTimeStamp> *pTVar12;
  TRange<FMediaTimeStamp> *pTVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  bVar11 = IsEmpty(param_1);
  if (bVar11) {
    local_20 = local_20 & 0xffffff00;
    *(ulonglong *)&__return_storage_ptr__->LowerBound =
         CONCAT44(uStack_34,local_38) & 0xffffffffffffff00;
    (__return_storage_ptr__->LowerBound).Value.Time.Ticks = -0x8000000000000000;
    uStack_18 = 0;
    uStack_14 = 0x80000000;
    (__return_storage_ptr__->LowerBound).Value.SequenceIndex = 0;
    (__return_storage_ptr__->LowerBound).Value.LoopIndex = 0;
    uVar15 = 0;
    goto LAB_146c01f84;
  }
  bVar11 = IsEmpty(param_2);
  if (bVar11) {
    local_38 = local_38 & 0xffffff00;
    *(ulonglong *)&__return_storage_ptr__->LowerBound =
         CONCAT44(uStack_1c,local_20) & 0xffffffffffffff00;
    (__return_storage_ptr__->LowerBound).Value.Time.Ticks = -0x8000000000000000;
    uStack_30 = 0;
    uStack_2c = 0x80000000;
    (__return_storage_ptr__->LowerBound).Value.SequenceIndex = 0;
    (__return_storage_ptr__->LowerBound).Value.LoopIndex = 0;
    uVar15 = 0;
    local_20 = local_38;
    uStack_1c = uStack_34;
    uStack_18 = uStack_30;
    uStack_14 = uStack_2c;
    goto LAB_146c01f84;
  }
  pTVar1 = &param_1->UpperBound;
  pTVar2 = &param_2->UpperBound;
  pTVar12 = pTVar2;
  if (((param_1->UpperBound).Type.Value != '\x02') &&
     (pTVar12 = pTVar1, (pTVar2->Type).Value != '\x02')) {
    iVar4 = (param_2->UpperBound).Value.SequenceIndex;
    iVar5 = (param_1->UpperBound).Value.SequenceIndex;
    if (((iVar4 <= iVar5) &&
        (((iVar5 != iVar4 ||
          ((iVar6 = (param_1->UpperBound).Value.LoopIndex,
           iVar3 = (param_2->UpperBound).Value.LoopIndex, iVar3 <= iVar6 &&
           ((iVar6 != iVar3 ||
            ((param_2->UpperBound).Value.Time.Ticks <= (param_1->UpperBound).Value.Time.Ticks))))))
         && (pTVar12 = pTVar2, iVar5 <= iVar4)))) &&
       (((iVar4 != iVar5 ||
         ((iVar4 = (param_1->UpperBound).Value.LoopIndex,
          iVar5 = (param_2->UpperBound).Value.LoopIndex, iVar4 <= iVar5 &&
          ((iVar5 != iVar4 ||
           ((param_1->UpperBound).Value.Time.Ticks <= (param_2->UpperBound).Value.Time.Ticks))))))
        && ((pTVar1->Type).Value == '\0')))) {
      pTVar12 = pTVar1;
    }
  }
  pTVar13 = param_2;
  if (((param_1->LowerBound).Type.Value != '\x02') &&
     (pTVar13 = param_1, (param_2->LowerBound).Type.Value != '\x02')) {
    iVar4 = (param_2->LowerBound).Value.SequenceIndex;
    iVar5 = (param_1->LowerBound).Value.SequenceIndex;
    bVar14 = SBORROW4(iVar5,iVar4);
    bVar11 = iVar5 - iVar4 < 0;
    if (iVar5 == iVar4) {
      if ((((param_1->LowerBound).Value.LoopIndex != (param_2->LowerBound).Value.LoopIndex) ||
          ((param_1->LowerBound).Value.Time.Ticks != (param_2->LowerBound).Value.Time.Ticks)) &&
         (iVar6 = (param_1->LowerBound).Value.LoopIndex,
         iVar3 = (param_2->LowerBound).Value.LoopIndex, iVar3 <= iVar6)) {
        if (iVar6 != iVar3) goto LAB_146c01f6c;
        lVar7 = (param_2->LowerBound).Value.Time.Ticks;
        lVar8 = (param_1->LowerBound).Value.Time.Ticks;
        bVar14 = SBORROW8(lVar8,lVar7);
        bVar11 = lVar8 - lVar7 < 0;
        goto LAB_146c01f38;
      }
    }
    else {
LAB_146c01f38:
      if (bVar14 == bVar11) goto LAB_146c01f6c;
    }
    bVar14 = SBORROW4(iVar4,iVar5);
    bVar11 = iVar4 - iVar5 < 0;
    if (iVar4 == iVar5) {
      if ((((param_2->LowerBound).Value.LoopIndex != (param_1->LowerBound).Value.LoopIndex) ||
          ((param_2->LowerBound).Value.Time.Ticks != (param_1->LowerBound).Value.Time.Ticks)) &&
         (iVar5 = (param_2->LowerBound).Value.LoopIndex,
         iVar4 = (param_1->LowerBound).Value.LoopIndex, iVar4 <= iVar5)) {
        pTVar13 = param_2;
        if (iVar5 != iVar4) goto LAB_146c01f6c;
        lVar7 = (param_1->LowerBound).Value.Time.Ticks;
        lVar8 = (param_2->LowerBound).Value.Time.Ticks;
        bVar14 = SBORROW8(lVar8,lVar7);
        bVar11 = lVar8 - lVar7 < 0;
        goto LAB_146c01f63;
      }
    }
    else {
LAB_146c01f63:
      pTVar13 = param_2;
      if (bVar14 == bVar11) goto LAB_146c01f6c;
    }
    pTVar13 = param_2;
    if ((param_1->LowerBound).Type.Value == '\0') {
      pTVar13 = param_1;
    }
  }
LAB_146c01f6c:
  uVar10 = *(undefined7 *)&(pTVar13->LowerBound).field_0x1;
  lVar9 = (pTVar13->LowerBound).Value.Time.Ticks;
  iVar4 = (pTVar13->LowerBound).Value.SequenceIndex;
  iVar5 = (pTVar13->LowerBound).Value.LoopIndex;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar13->LowerBound).Type.Value;
  *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar10;
  (__return_storage_ptr__->LowerBound).Value.Time.Ticks = lVar9;
  local_20 = *(uint *)pTVar12;
  uStack_1c = *(undefined4 *)&pTVar12->field_0x4;
  uStack_18 = (undefined4)(pTVar12->Value).Time.Ticks;
  uStack_14 = *(undefined4 *)((longlong)&(pTVar12->Value).Time.Ticks + 4);
  (__return_storage_ptr__->LowerBound).Value.SequenceIndex = iVar4;
  (__return_storage_ptr__->LowerBound).Value.LoopIndex = iVar5;
  uVar15._0_4_ = (pTVar12->Value).SequenceIndex;
  uVar15._4_4_ = (pTVar12->Value).LoopIndex;
LAB_146c01f84:
  *(uint *)&__return_storage_ptr__->UpperBound = local_20;
  *(undefined4 *)&(__return_storage_ptr__->UpperBound).field_0x4 = uStack_1c;
  *(undefined4 *)&(__return_storage_ptr__->UpperBound).Value.Time.Ticks = uStack_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->UpperBound).Value.Time.Ticks + 4) = uStack_14;
  (__return_storage_ptr__->UpperBound).Value.SequenceIndex = (int)uVar15;
  (__return_storage_ptr__->UpperBound).Value.LoopIndex = (int)((ulonglong)uVar15 >> 0x20);
  return __return_storage_ptr__;
}

// IsEmpty @ 146c02140

bool __thiscall TRange<FMediaTimeStamp>::IsEmpty(TRange<FMediaTimeStamp> *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FMediaTimeStamp *pFVar5;
  FMediaTimeStamp *pFVar6;
  bool bVar7;
  bool bVar8;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  iVar1 = (this->UpperBound).Value.SequenceIndex;
  iVar2 = (this->LowerBound).Value.SequenceIndex;
  bVar8 = SBORROW4(iVar2,iVar1);
  bVar7 = iVar2 - iVar1 < 0;
  if (iVar2 == iVar1) {
    if ((((this->LowerBound).Value.LoopIndex == (this->UpperBound).Value.LoopIndex) &&
        ((this->LowerBound).Value.Time.Ticks == (this->UpperBound).Value.Time.Ticks)) ||
       (iVar2 = (this->LowerBound).Value.LoopIndex, iVar1 = (this->UpperBound).Value.LoopIndex,
       iVar2 < iVar1)) goto LAB_146c0219b;
    if (iVar2 != iVar1) {
      return true;
    }
    lVar3 = (this->UpperBound).Value.Time.Ticks;
    lVar4 = (this->LowerBound).Value.Time.Ticks;
    bVar8 = SBORROW8(lVar4,lVar3);
    bVar7 = lVar4 - lVar3 < 0;
  }
  if (bVar8 == bVar7) {
    return true;
  }
LAB_146c0219b:
  pFVar5 = TRangeBound<FMediaTimeStamp>::GetValue(&this->LowerBound);
  pFVar6 = TRangeBound<FMediaTimeStamp>::GetValue(&this->UpperBound);
  if (((pFVar5->SequenceIndex == pFVar6->SequenceIndex) && (pFVar5->LoopIndex == pFVar6->LoopIndex))
     && (((pFVar5->Time).Ticks == (pFVar6->Time).Ticks &&
         (((this->LowerBound).Type.Value == '\0' || ((this->UpperBound).Type.Value == '\0')))))) {
    return true;
  }
  return false;
}

// Overlaps @ 146c03c20

bool __thiscall TRange<FTimespan>::Overlaps(TRange<FTimespan> *this,TRange<FTimespan> *param_1)

{
  uchar uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  FTimespan *pFVar10;
  FTimespan *pFVar11;
  
  bVar8 = IsEmpty(this);
  if (!bVar8) {
    bVar8 = IsEmpty(param_1);
    if (!bVar8) {
      uVar1 = (this->UpperBound).Type.Value;
      if ((uVar1 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
        bVar8 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar5 = true;
      bVar7 = true;
      if (bVar8 == false) {
        if (uVar1 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        lVar2 = (param_1->LowerBound).Value.Ticks;
        lVar3 = (this->UpperBound).Value.Ticks;
        pFVar10 = TRangeBound<FTimespan>::GetValue(&this->UpperBound);
        pFVar11 = TRangeBound<FTimespan>::GetValue(&param_1->LowerBound);
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar7 = lVar2 < lVar3;
        if (bVar8) {
          bVar7 = pFVar11->Ticks <= pFVar10->Ticks;
        }
      }
      bVar8 = true;
      if (!bVar6) {
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        lVar2 = (param_1->UpperBound).Value.Ticks;
        lVar3 = (this->LowerBound).Value.Ticks;
        pFVar10 = TRangeBound<FTimespan>::GetValue(&this->LowerBound);
        pFVar11 = TRangeBound<FTimespan>::GetValue(&param_1->UpperBound);
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar5 = false;
        }
        bVar8 = lVar3 < lVar2;
        if (bVar5) {
          bVar8 = pFVar10->Ticks <= pFVar11->Ticks;
        }
      }
      if ((bVar7) && (bVar8)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// Overlaps @ 146c03e30

bool __thiscall
TRange<FMediaTimeStamp>::Overlaps(TRange<FMediaTimeStamp> *this,TRange<FMediaTimeStamp> *param_1)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  FMediaTimeStamp *pFVar11;
  FMediaTimeStamp *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  bVar9 = IsEmpty(this);
  if ((bVar9) || (bVar9 = IsEmpty(param_1), bVar9)) {
    return false;
  }
  uVar1 = (this->UpperBound).Type.Value;
  if ((uVar1 == '\x02') || (bVar9 = false, (param_1->LowerBound).Type.Value == '\x02')) {
    bVar9 = true;
  }
  if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02')) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  bVar8 = true;
  bVar15 = true;
  bVar7 = true;
  bVar14 = true;
  if (!bVar9) {
    if ((uVar1 == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    iVar2 = (param_1->LowerBound).Value.SequenceIndex;
    iVar3 = (this->UpperBound).Value.SequenceIndex;
    bVar14 = SBORROW4(iVar3,iVar2);
    bVar9 = iVar3 - iVar2 < 0;
    if (iVar3 == iVar2) {
      if ((((this->UpperBound).Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex) &&
          ((this->UpperBound).Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
         (iVar3 = (this->UpperBound).Value.LoopIndex, iVar2 = (param_1->LowerBound).Value.LoopIndex,
         iVar3 < iVar2)) goto LAB_146c03f2f;
      if (iVar3 == iVar2) {
        lVar4 = (param_1->LowerBound).Value.Time.Ticks;
        lVar5 = (this->UpperBound).Value.Time.Ticks;
        bVar14 = SBORROW8(lVar5,lVar4);
        bVar9 = lVar5 - lVar4 < 0;
        goto LAB_146c03f2d;
      }
    }
    else {
LAB_146c03f2d:
      if (bVar14 != bVar9) {
LAB_146c03f2f:
        bVar8 = false;
      }
    }
    pFVar11 = TRangeBound<FMediaTimeStamp>::GetValue(&this->UpperBound);
    pFVar12 = TRangeBound<FMediaTimeStamp>::GetValue(&param_1->LowerBound);
    if ((pFVar11->SequenceIndex < pFVar12->SequenceIndex) ||
       ((pFVar11->SequenceIndex == pFVar12->SequenceIndex &&
        ((pFVar11->LoopIndex < pFVar12->LoopIndex ||
         ((pFVar11->LoopIndex == pFVar12->LoopIndex &&
          ((pFVar11->Time).Ticks < (pFVar12->Time).Ticks)))))))) {
      bVar15 = false;
    }
    if (((this->UpperBound).Type.Value == '\x01') && ((param_1->LowerBound).Type.Value == '\x01')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    bVar14 = bVar8;
    if (bVar9) {
      bVar14 = bVar15;
    }
  }
  bVar9 = true;
  if (bVar13) goto LAB_146c04077;
  if (((this->LowerBound).Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (((param_1->UpperBound).Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  iVar2 = (param_1->UpperBound).Value.SequenceIndex;
  iVar3 = (this->LowerBound).Value.SequenceIndex;
  if ((iVar3 < iVar2) ||
     ((iVar3 == iVar2 &&
      ((iVar3 = (this->LowerBound).Value.LoopIndex, iVar2 = (param_1->UpperBound).Value.LoopIndex,
       iVar3 < iVar2 ||
       ((iVar3 == iVar2 &&
        ((this->LowerBound).Value.Time.Ticks < (param_1->UpperBound).Value.Time.Ticks)))))))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  pFVar11 = TRangeBound<FMediaTimeStamp>::GetValue(&this->LowerBound);
  pFVar12 = TRangeBound<FMediaTimeStamp>::GetValue(&param_1->UpperBound);
  iVar2 = pFVar12->SequenceIndex;
  iVar3 = pFVar11->SequenceIndex;
  bVar15 = SBORROW4(iVar3,iVar2);
  bVar13 = iVar3 - iVar2 < 0;
  if (iVar3 == iVar2) {
    if (((pFVar11->LoopIndex == pFVar12->LoopIndex) &&
        ((pFVar11->Time).Ticks == (pFVar12->Time).Ticks)) ||
       (pFVar11->LoopIndex < pFVar12->LoopIndex)) goto LAB_146c04058;
    if (pFVar11->LoopIndex == pFVar12->LoopIndex) {
      lVar4 = (pFVar12->Time).Ticks;
      lVar5 = (pFVar11->Time).Ticks;
      bVar15 = SBORROW8(lVar5,lVar4);
      bVar13 = lVar5 - lVar4 < 0;
      goto LAB_146c04052;
    }
LAB_146c04054:
    bVar13 = false;
  }
  else {
LAB_146c04052:
    if (bVar15 == bVar13) goto LAB_146c04054;
LAB_146c04058:
    bVar13 = true;
  }
  if (((this->LowerBound).Type.Value != '\x01') || ((param_1->UpperBound).Type.Value != '\x01')) {
    bVar7 = false;
  }
  if (bVar7) {
    bVar9 = bVar13;
  }
LAB_146c04077:
  if ((bVar14) && (bVar9)) {
    return true;
  }
  return false;
}

// SetLowerBoundValue @ 146c0cf10

void __thiscall
TRange<FMediaTimeStamp>::SetLowerBoundValue(TRange<FMediaTimeStamp> *this,FMediaTimeStamp *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((this->LowerBound).Type.Value == '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,0x73,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = param_1->SequenceIndex;
  iVar3 = param_1->LoopIndex;
  (this->LowerBound).Value.Time.Ticks = (param_1->Time).Ticks;
  (this->LowerBound).Value.SequenceIndex = iVar2;
  (this->LowerBound).Value.LoopIndex = iVar3;
  return;
}

// SetUpperBoundValue @ 146c0d550

void __thiscall
TRange<FMediaTimeStamp>::SetUpperBoundValue(TRange<FMediaTimeStamp> *this,FMediaTimeStamp *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((this->UpperBound).Type.Value == '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,0x73,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = param_1->SequenceIndex;
  iVar3 = param_1->LoopIndex;
  (this->UpperBound).Value.Time.Ticks = (param_1->Time).Ticks;
  (this->UpperBound).Value.SequenceIndex = iVar2;
  (this->UpperBound).Value.LoopIndex = iVar3;
  return;
}

