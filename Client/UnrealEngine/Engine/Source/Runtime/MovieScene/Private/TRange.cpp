// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 18

// IsEmpty @ 14605c250

bool __thiscall TRange<FFrameNumber>::IsEmpty(TRange<FFrameNumber> *this)

{
  int iVar1;
  FFrameNumber *pFVar2;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  if ((this->LowerBound).Value.Value <= (this->UpperBound).Value.Value) {
    pFVar2 = TRangeBound<FFrameNumber>::GetValue(&this->UpperBound);
    iVar1 = pFVar2->Value;
    pFVar2 = TRangeBound<FFrameNumber>::GetValue(&this->LowerBound);
    if (pFVar2->Value != iVar1) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// Intersection @ 1460d72b0

TRange<FFrameNumber> * __cdecl
TRange<FFrameNumber>::Intersection
          (TRange<FFrameNumber> *__return_storage_ptr__,TRange<FFrameNumber> *param_1,
          TRange<FFrameNumber> *param_2)

{
  TRangeBound<FFrameNumber> *pTVar1;
  TRangeBound<FFrameNumber> *pTVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  TRangeBound<FFrameNumber> TVar6;
  bool bVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> *pTVar9;
  TRange<FFrameNumber> *pTVar10;
  uint local_res20;
  uint local_18;
  
  bVar7 = IsEmpty(param_1);
  if ((bVar7) || (bVar7 = IsEmpty(param_2), bVar7)) {
    local_18 = local_18 & 0xffffff00;
    local_res20 = local_res20 & 0xffffff00;
    TVar6.Value.Value = 0;
    TVar6._0_4_ = local_res20;
    __return_storage_ptr__->LowerBound = TVar6;
    TVar8.Value.Value = 0;
    TVar8._0_4_ = local_18;
  }
  else {
    uVar3 = (param_1->UpperBound).Type.Value;
    pTVar1 = &param_1->UpperBound;
    pTVar2 = &param_2->UpperBound;
    pTVar9 = pTVar2;
    if ((uVar3 != '\x02') && (pTVar9 = pTVar1, (pTVar2->Type).Value != '\x02')) {
      iVar4 = (param_2->UpperBound).Value.Value;
      iVar5 = (param_1->UpperBound).Value.Value;
      if (((iVar4 <= iVar5) && (pTVar9 = pTVar2, iVar5 <= iVar4)) && (uVar3 == '\0')) {
        pTVar9 = pTVar1;
      }
    }
    uVar3 = (param_1->LowerBound).Type.Value;
    pTVar10 = param_2;
    if ((uVar3 != '\x02') && (pTVar10 = param_1, (param_2->LowerBound).Type.Value != '\x02')) {
      iVar4 = (param_2->LowerBound).Value.Value;
      iVar5 = (param_1->LowerBound).Value.Value;
      if ((iVar5 <= iVar4) && ((pTVar10 = param_2, iVar4 <= iVar5 && (uVar3 == '\0')))) {
        pTVar10 = param_1;
      }
    }
    __return_storage_ptr__->LowerBound = pTVar10->LowerBound;
    TVar8 = *pTVar9;
  }
  __return_storage_ptr__->UpperBound = TVar8;
  return __return_storage_ptr__;
}

// Intersection @ 1460d7380

TRange<FFrameTime> * __cdecl
TRange<FFrameTime>::Intersection
          (TRange<FFrameTime> *__return_storage_ptr__,TRange<FFrameTime> *param_1,
          TRange<FFrameTime> *param_2)

{
  TRangeBound<FFrameTime> *pTVar1;
  TRangeBound<FFrameTime> *pTVar2;
  uchar uVar3;
  float fVar4;
  FFrameTime FVar5;
  FFrameTime FVar6;
  undefined3 uVar7;
  bool bVar8;
  FFrameNumber FVar9;
  TRangeBound<FFrameTime> *pTVar10;
  FFrameNumber FVar11;
  TRange<FFrameTime> *pTVar12;
  ulonglong uVar13;
  float fStackX_24;
  uint local_28;
  float fStack_24;
  uint local_18;
  float fStack_10;
  
  bVar8 = IsEmpty(param_1);
  if (bVar8) {
    fStack_10 = 0.0;
    local_28 = local_28 & 0xffffff00;
    uVar13 = (ulonglong)local_28;
    (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar13;
    *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)(uVar13 >> 8);
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)(int)(uVar13 >> 0x20);
    (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
    local_18 = local_18 & 0xffffff00;
    uVar13 = (ulonglong)local_18;
  }
  else {
    bVar8 = IsEmpty(param_2);
    if (bVar8) {
      local_18 = local_18 & 0xffffff00;
      uVar13 = (ulonglong)local_18;
      (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar13;
      *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)(uVar13 >> 8);
      (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)(int)(uVar13 >> 0x20);
      (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
      fStack_10 = 0.0;
      local_28 = local_28 & 0xffffff00;
      uVar13 = (ulonglong)local_28;
    }
    else {
      uVar3 = (param_1->UpperBound).Type.Value;
      pTVar1 = &param_1->UpperBound;
      pTVar2 = &param_2->UpperBound;
      pTVar10 = pTVar2;
      if ((uVar3 != '\x02') && (pTVar10 = pTVar1, (pTVar2->Type).Value != '\x02')) {
        FVar5 = (param_2->UpperBound).Value;
        FVar6 = (param_1->UpperBound).Value;
        fStack_24 = FVar5.SubFrame;
        FVar9 = FVar5.FrameNumber.Value;
        FVar11 = FVar6.FrameNumber.Value;
        if (((FVar9.Value <= FVar11.Value) &&
            (((fStackX_24 = FVar6.SubFrame, FVar11.Value != FVar9.Value || (fStack_24 <= fStackX_24)
              ) && (pTVar10 = pTVar2, FVar11.Value <= FVar9.Value)))) &&
           (((FVar9.Value != FVar11.Value || (fStackX_24 <= fStack_24)) && (uVar3 == '\0')))) {
          pTVar10 = pTVar1;
        }
      }
      uVar3 = (param_1->LowerBound).Type.Value;
      pTVar12 = param_2;
      if ((uVar3 != '\x02') && (pTVar12 = param_1, (param_2->LowerBound).Type.Value != '\x02')) {
        FVar5 = (param_2->LowerBound).Value;
        FVar6 = (param_1->LowerBound).Value;
        fStack_24 = FVar5.SubFrame;
        FVar9 = FVar5.FrameNumber.Value;
        FVar11 = FVar6.FrameNumber.Value;
        if (((FVar11.Value <= FVar9.Value) &&
            ((((fStackX_24 = FVar6.SubFrame, FVar11.Value != FVar9.Value ||
               (fStackX_24 <= fStack_24)) && (pTVar12 = param_2, FVar9.Value <= FVar11.Value)) &&
             ((FVar9.Value != FVar11.Value || (fStack_24 <= fStackX_24)))))) && (uVar3 == '\0')) {
          pTVar12 = param_1;
        }
      }
      uVar7 = *(undefined3 *)&(pTVar12->LowerBound).field_0x1;
      FVar9.Value = (pTVar12->LowerBound).Value.FrameNumber.Value;
      fVar4 = (pTVar12->LowerBound).Value.SubFrame;
      (__return_storage_ptr__->LowerBound).Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar12->LowerBound).Type.Value;
      *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar7;
      (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar9.Value;
      uVar13._0_1_ = pTVar10->Type;
      uVar13._1_3_ = *(undefined3 *)&pTVar10->field_0x1;
      uVar13._4_4_ = (pTVar10->Value).FrameNumber;
      (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar4;
      fStack_10 = (pTVar10->Value).SubFrame;
    }
  }
  (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar13;
  *(int3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = (int3)(uVar13 >> 8);
  (__return_storage_ptr__->UpperBound).Value.FrameNumber = (FFrameNumber)(int)(uVar13 >> 0x20);
  (__return_storage_ptr__->UpperBound).Value.SubFrame = fStack_10;
  return __return_storage_ptr__;
}

// IsEmpty @ 1460d8f70

bool __thiscall TRange<FFrameTime>::IsEmpty(TRange<FFrameTime> *this)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  FFrameNumber FVar3;
  FFrameTime *pFVar4;
  FFrameNumber FVar5;
  float fStackX_c;
  float fStackX_14;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  FVar1 = (this->UpperBound).Value;
  FVar2 = (this->LowerBound).Value;
  FVar3 = FVar1.FrameNumber.Value;
  FVar5 = FVar2.FrameNumber.Value;
  if (FVar5.Value <= FVar3.Value) {
    if (FVar5.Value == FVar3.Value) {
      fStackX_c = FVar2.SubFrame;
      fStackX_14 = FVar1.SubFrame;
      if (fStackX_14 < fStackX_c) {
        return true;
      }
    }
    pFVar4 = TRangeBound<FFrameTime>::GetValue(&this->UpperBound);
    FVar1 = *pFVar4;
    pFVar4 = TRangeBound<FFrameTime>::GetValue(&this->LowerBound);
    if ((*pFVar4).FrameNumber.Value != FVar1.FrameNumber.Value.Value) {
      return false;
    }
    fStackX_c = (*pFVar4).SubFrame;
    fStackX_14 = FVar1.SubFrame;
    if (fStackX_c != fStackX_14) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// Overlaps @ 1460dde90

bool __thiscall
TRange<FFrameNumber>::Overlaps(TRange<FFrameNumber> *this,TRange<FFrameNumber> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  FFrameNumber *pFVar10;
  TRangeBound<FFrameNumber> *this_00;
  
  bVar8 = IsEmpty(this);
  if (!bVar8) {
    bVar8 = IsEmpty(param_1);
    if (!bVar8) {
      if (((this->UpperBound).Type.Value == '\x02') || ((param_1->LowerBound).Type.Value == '\x02'))
      {
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
        iVar1 = (param_1->LowerBound).Value.Value;
        if ((this->UpperBound).Type.Value == '\x02') {
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
        iVar2 = (this->UpperBound).Value.Value;
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(&param_1->LowerBound);
        iVar3 = pFVar10->Value;
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(&this->UpperBound);
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar7 = iVar1 < iVar2;
        if (bVar8) {
          bVar7 = iVar3 <= pFVar10->Value;
        }
      }
      this_00 = &param_1->UpperBound;
      bVar8 = true;
      if (!bVar6) {
        if ((this_00->Type).Value == '\x02') {
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
        iVar1 = (param_1->UpperBound).Value.Value;
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
        iVar2 = (this->LowerBound).Value.Value;
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(this_00);
        iVar3 = pFVar10->Value;
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(&this->LowerBound);
        if (((this->LowerBound).Type.Value != '\x01') || ((this_00->Type).Value != '\x01')) {
          bVar5 = false;
        }
        bVar8 = iVar2 < iVar1;
        if (bVar5) {
          bVar8 = pFVar10->Value <= iVar3;
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

// GetLowerBoundValue @ 14613b960

FFrameNumber * __thiscall TRange<FFrameNumber>::GetLowerBoundValue(TRange<FFrameNumber> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber *pFVar3;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    return &(this->LowerBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameNumber *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->LowerBound).Value;
}

// GetLowerBoundValue @ 14613b9b0

FFrameTime * __thiscall TRange<FFrameTime>::GetLowerBoundValue(TRange<FFrameTime> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameTime *pFVar3;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    return &(this->LowerBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameTime *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->LowerBound).Value;
}

// GetUpperBoundValue @ 14613d050

FFrameTime * __thiscall TRange<FFrameTime>::GetUpperBoundValue(TRange<FFrameTime> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameTime *pFVar3;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    return &(this->UpperBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameTime *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->UpperBound).Value;
}

// Size<int> @ 14617d700

int __thiscall TRange<int>::Size<int>(TRange<int> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((this->UpperBound).Type.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  iVar3 = (this->UpperBound).Value;
  if ((this->LowerBound).Type.Value == '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3 - (this->LowerBound).Value;
}

// Contains @ 1461990e0

bool __thiscall TRange<FFrameTime>::Contains(TRange<FFrameTime> *this,FFrameTime *param_1)

{
  TRangeBound<FFrameTime> *pTVar1;
  uchar uVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  float fVar5;
  FFrameNumber FVar6;
  TRange<FFrameTime> *pTVar7;
  FFrameNumber FVar8;
  float fStackX_c;
  float fStackX_14;
  TRange<FFrameTime> local_18;
  
  local_18.LowerBound.Value = *param_1;
  uVar2 = (this->LowerBound).Type.Value;
  FVar8 = local_18.LowerBound.Value.FrameNumber.Value;
  fStackX_14 = local_18.LowerBound.Value.SubFrame;
  fVar5 = fStackX_14;
  if (uVar2 != '\x02') {
    FVar3 = (this->LowerBound).Value;
    FVar6 = FVar3.FrameNumber.Value;
    pTVar7 = this;
    if ((FVar8.Value <= FVar6.Value) &&
       ((fStackX_c = FVar3.SubFrame, FVar6.Value != FVar8.Value || (fStackX_14 <= fStackX_c)))) {
      pTVar7 = &local_18;
      if ((FVar6.Value <= FVar8.Value) &&
         ((FVar8.Value != FVar6.Value || (fStackX_c <= fStackX_14)))) {
        pTVar7 = this;
      }
      if (uVar2 != '\x01') {
        return false;
      }
    }
    FVar3 = (this->LowerBound).Value;
    FVar4 = (pTVar7->LowerBound).Value;
    if (FVar4.FrameNumber.Value.Value != FVar3.FrameNumber.Value.Value) {
      return false;
    }
    fStackX_c = FVar4.SubFrame;
    fStackX_14 = FVar3.SubFrame;
    if (fStackX_c != fStackX_14) {
      return false;
    }
  }
  uVar2 = (this->UpperBound).Type.Value;
  pTVar1 = &this->UpperBound;
  if (uVar2 == '\x02') {
    return true;
  }
  FVar3 = (this->UpperBound).Value;
  FVar6 = FVar3.FrameNumber.Value;
  pTVar7 = (TRange<FFrameTime> *)pTVar1;
  if (((FVar8.Value < FVar6.Value) ||
      ((fStackX_c = FVar3.SubFrame, FVar6.Value == FVar8.Value && (fVar5 < fStackX_c)))) ||
     (((pTVar7 = &local_18, FVar6.Value < FVar8.Value ||
       (((FVar8.Value == FVar6.Value && (pTVar7 = &local_18, fStackX_c < fVar5)) ||
        (pTVar7 = (TRange<FFrameTime> *)pTVar1, uVar2 == '\x01')))) && (uVar2 == '\x01')))) {
    FVar3 = (this->UpperBound).Value;
    if ((pTVar7->LowerBound).Value.FrameNumber.Value == FVar3.FrameNumber.Value.Value) {
      fStackX_c = (pTVar7->LowerBound).Value.SubFrame;
      fStackX_14 = FVar3.SubFrame;
      if (fStackX_c == fStackX_14) {
        return true;
      }
    }
  }
  return false;
}

// SetLowerBoundValue @ 1461d2430

void __thiscall TRange<FFrameTime>::SetLowerBoundValue(TRange<FFrameTime> *this,FFrameTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    (this->LowerBound).Value = *param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->LowerBound).Value = *param_1;
  return;
}

// SetUpperBoundValue @ 1461d2f40

void __thiscall TRange<FFrameTime>::SetUpperBoundValue(TRange<FFrameTime> *this,FFrameTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    (this->UpperBound).Value = *param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->UpperBound).Value = *param_1;
  return;
}

// Size<FFrameNumber> @ 1461fbe30

FFrameNumber __thiscall TRange<FFrameNumber>::Size<FFrameNumber>(TRange<FFrameNumber> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *in_RDX;
  
  if ((((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                         ,0x1ad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return (FFrameNumber)iVar3;
  }
  if (((this->LowerBound).Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return (FFrameNumber)iVar3;
  }
  iVar3 = (this->LowerBound).Value.Value;
  if (((this->UpperBound).Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return (FFrameNumber)iVar3;
  }
  *in_RDX = (this->UpperBound).Value.Value - iVar3;
  return (FFrameNumber)(int)in_RDX;
}

// Adjoins @ 146206e60

bool __thiscall
TRange<FFrameNumber>::Adjoins(TRange<FFrameNumber> *this,TRange<FFrameNumber> *param_1)

{
  uchar uVar1;
  int iVar2;
  bool bVar3;
  FFrameNumber *pFVar4;
  
  bVar3 = IsEmpty(this);
  if (!bVar3) {
    bVar3 = IsEmpty(param_1);
    if (bVar3) {
      return false;
    }
    if ((((this->UpperBound).Type.Value == '\x02') || ((param_1->LowerBound).Type.Value == '\x02'))
       || ((this->UpperBound).Value.Value != (param_1->LowerBound).Value.Value)) {
      if ((param_1->UpperBound).Type.Value == '\x02') {
        return false;
      }
      if ((this->LowerBound).Type.Value == '\x02') {
        return false;
      }
      pFVar4 = TRangeBound<FFrameNumber>::GetValue(&this->LowerBound);
      iVar2 = pFVar4->Value;
      pFVar4 = TRangeBound<FFrameNumber>::GetValue(&param_1->UpperBound);
      if (pFVar4->Value != iVar2) {
        return false;
      }
      uVar1 = (param_1->UpperBound).Type.Value;
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return false;
        }
        if ((this->LowerBound).Type.Value == '\x01') {
          return true;
        }
        return false;
      }
      uVar1 = (this->LowerBound).Type.Value;
    }
    else {
      uVar1 = (this->UpperBound).Type.Value;
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return false;
        }
        if ((param_1->LowerBound).Type.Value != '\x01') {
          return false;
        }
        return true;
      }
      uVar1 = (param_1->LowerBound).Type.Value;
    }
    if (uVar1 == '\0') {
      return true;
    }
  }
  return false;
}

// Contains @ 14620c020

bool __thiscall TRange<FFrameNumber>::Contains(TRange<FFrameNumber> *this,FFrameNumber *param_1)

{
  uchar uVar1;
  int iVar2;
  TRangeBound<FFrameNumber> *pTVar3;
  TRange<FFrameNumber> *pTVar4;
  TRange<FFrameNumber> local_18;
  
  uVar1 = (this->LowerBound).Type.Value;
  local_18.LowerBound.Value = (FFrameNumber)param_1->Value;
  if (uVar1 != '\x02') {
    iVar2 = (this->LowerBound).Value.Value;
    pTVar4 = this;
    if (local_18.LowerBound.Value.Value <= iVar2) {
      if (local_18.LowerBound.Value.Value < iVar2) {
        pTVar4 = &local_18;
      }
      if (uVar1 != '\x01') {
        return false;
      }
    }
    if ((pTVar4->LowerBound).Value.Value != (this->LowerBound).Value.Value) {
      return false;
    }
  }
  uVar1 = (this->UpperBound).Type.Value;
  pTVar3 = &this->UpperBound;
  local_18.UpperBound.Type.Value = '\x01';
  local_18.UpperBound.Value.Value = local_18.LowerBound.Value.Value;
  if (uVar1 != '\x02') {
    iVar2 = (this->UpperBound).Value.Value;
    if (iVar2 <= local_18.LowerBound.Value.Value) {
      if (iVar2 < local_18.LowerBound.Value.Value) {
        pTVar3 = &local_18.UpperBound;
      }
      if (uVar1 != '\x01') {
        return false;
      }
    }
    if ((pTVar3->Value).Value != (this->UpperBound).Value.Value) {
      return false;
    }
  }
  return true;
}

// GetUpperBound @ 14621dc90

TRangeBound<FFrameNumber> __thiscall TRange<FFrameNumber>::GetUpperBound(TRange<FFrameNumber> *this)

{
  TRangeBound<FFrameNumber> in_RDX;
  
  *(TRangeBound<FFrameNumber> *)in_RDX = this->UpperBound;
  return in_RDX;
}

// GetUpperBoundValue @ 14621dcb0

FFrameNumber * __thiscall TRange<FFrameNumber>::GetUpperBoundValue(TRange<FFrameNumber> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber *pFVar3;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    return &(this->UpperBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameNumber *)(*pcVar1)();
    return pFVar3;
  }
  return &(this->UpperBound).Value;
}

// Difference @ 1462abde0

TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> * __cdecl
TRange<FFrameNumber>::Difference
          (TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TRange<FFrameNumber> *param_1,TRange<FFrameNumber> *param_2)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  TRangeBound<FFrameNumber> *pTVar3;
  TRange<FFrameNumber> *pTVar4;
  code *pcVar5;
  FFrameNumber FVar6;
  bool bVar7;
  int iVar8;
  FFrameNumber *pFVar9;
  TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined4 local_res8;
  undefined4 local_res20;
  FFrameNumber FStack_44;
  TRangeBound<FFrameNumber> local_40;
  TRangeBound<FFrameNumber> TStack_38;
  TRangeBound<FFrameNumber> local_30;
  TRangeBound<FFrameNumber> aTStack_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar7 = Overlaps(param_1,param_2);
  if (!bVar7) {
    pTVar4 = (TRange<FFrameNumber> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pTVar4 <= param_1) && (param_1 < pTVar4 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    local_40.Type.Value = (param_1->LowerBound).Type.Value;
    local_40._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_40.Value.Value = (param_1->LowerBound).Value.Value;
    TStack_38.Type.Value = (param_1->UpperBound).Type.Value;
    TStack_38._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
    TStack_38.Value.Value = (param_1->UpperBound).Value.Value;
    goto LAB_1462ac104;
  }
  uVar2 = (param_2->LowerBound).Type.Value;
  if (uVar2 == '\0') {
    local_res8 = CONCAT31(local_res8._1_3_,1);
    aTStack_28[0].Value.Value = (param_2->LowerBound).Value.Value;
    aTStack_28[0]._0_4_ = local_res8;
  }
  else if (uVar2 == '\x01') {
    aTStack_28[0] =
         (TRangeBound<FFrameNumber>)
         ((ulonglong)CONCAT43((param_2->LowerBound).Value.Value,local_res8._1_3_) << 8);
  }
  else {
    aTStack_28[0] = param_2->LowerBound;
  }
  uVar2 = (param_2->UpperBound).Type.Value;
  local_30 = param_1->LowerBound;
  if (uVar2 == '\0') {
    local_res20 = CONCAT31(local_res20._1_3_,1);
    local_40.Value.Value = (param_2->UpperBound).Value.Value;
    local_40._0_4_ = local_res20;
  }
  else if (uVar2 == '\x01') {
    local_40 = (TRangeBound<FFrameNumber>)
               ((ulonglong)CONCAT43((param_2->UpperBound).Value.Value,local_res20._1_3_) << 8);
  }
  else {
    local_40 = param_2->UpperBound;
  }
  TStack_38 = param_1->UpperBound;
  if ((local_30.Type.Value.Value == '\x02') || (aTStack_28[0].Type.Value.Value == '\x02')) {
LAB_1462abed9:
    pTVar3 = (TRangeBound<FFrameNumber> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pTVar3 <= &local_30) &&
       ((&local_30 < pTVar3 + (longlong)__return_storage_ptr__->ArrayMax * 2 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)))) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pTVar3 = (TRangeBound<FFrameNumber> *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
    *pTVar3 = local_30;
    pTVar3[1] = aTStack_28[0];
  }
  else {
    FStack_44 = aTStack_28[0].Value.Value;
    if (local_30.Value.Value <= FStack_44.Value) {
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(aTStack_28);
      iVar8 = pFVar9->Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_30);
      if ((pFVar9->Value != iVar8) ||
         ((local_30.Type.Value != '\0' && (aTStack_28[0].Type.Value != '\0')))) goto LAB_1462abed9;
    }
  }
  if ((local_40.Type.Value.Value != '\x02') && (TStack_38.Type.Value != '\x02')) {
    FVar6.Value = TStack_38.Value.Value;
    if ((local_40.Type.Value.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    if (FVar6.Value < local_40.Value.Value) {
      return __return_storage_ptr__;
    }
    pFVar9 = TRangeBound<FFrameNumber>::GetValue(&TStack_38);
    iVar8 = pFVar9->Value;
    pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_40);
    if (pFVar9->Value == iVar8) {
      if (local_40.Type.Value == '\0') {
        return __return_storage_ptr__;
      }
      if (TStack_38.Type.Value == '\0') {
        return __return_storage_ptr__;
      }
    }
  }
  pTVar3 = (TRangeBound<FFrameNumber> *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pTVar3 <= &local_40) &&
      (&local_40 < pTVar3 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
LAB_1462ac104:
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined4 *)pFVar1 = local_40._0_4_;
  *(int *)(pFVar1 + 4) = local_40.Value.Value;
  *(undefined4 *)(pFVar1 + 8) = TStack_38._0_4_;
  *(int *)(pFVar1 + 0xc) = TStack_38.Value.Value;
  return __return_storage_ptr__;
}

