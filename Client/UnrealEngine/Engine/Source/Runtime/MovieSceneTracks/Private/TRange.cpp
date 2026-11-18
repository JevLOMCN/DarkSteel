// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Size<FFrameTime> @ 14660af90

FFrameTime __thiscall TRange<FFrameTime>::Size<FFrameTime>(TRange<FFrameTime> *this)

{
  FFrameTime FVar1;
  code *pcVar2;
  bool bVar3;
  FFrameTime FVar4;
  FFrameTime in_RDX;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fStackX_c;
  float fStackX_14;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FFrameTime)(*pcVar2)();
      return FVar4;
    }
  }
  if ((this->LowerBound).Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FFrameTime)(*pcVar2)();
      return FVar4;
    }
  }
  FVar4 = (this->LowerBound).Value;
  if ((this->UpperBound).Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FFrameTime)(*pcVar2)();
      return FVar4;
    }
  }
  FVar1 = (this->UpperBound).Value;
  fStackX_c = FVar1.SubFrame;
  fStackX_14 = FVar4.SubFrame;
  auVar5 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - fStackX_14)),1);
  fVar6 = (fStackX_c - fStackX_14) - auVar5._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar6) {
    fVar6 = ::FFrameTime::MaxSubframe;
  }
  *(int *)in_RDX = (int)auVar5._0_4_ + (FVar1.FrameNumber.Value.Value - FVar4.FrameNumber.Value);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)((longlong)in_RDX + 4) = fVar6;
  return in_RDX;
}

// Hull @ 14679cda0

TRange<FFrameNumber> * __cdecl
TRange<FFrameNumber>::Hull
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
  TRangeBound<FFrameNumber> *pTVar8;
  TRange<FFrameNumber> *pTVar9;
  
  bVar7 = IsEmpty(param_1);
  if (bVar7) {
    TVar6 = param_2->UpperBound;
    __return_storage_ptr__->LowerBound = param_2->LowerBound;
    __return_storage_ptr__->UpperBound = TVar6;
    return __return_storage_ptr__;
  }
  bVar7 = IsEmpty(param_2);
  if (!bVar7) {
    uVar3 = (param_1->UpperBound).Type.Value;
    pTVar1 = &param_1->UpperBound;
    pTVar2 = &param_2->UpperBound;
    pTVar8 = pTVar1;
    if ((uVar3 != '\x02') && (pTVar8 = pTVar2, (pTVar2->Type).Value != '\x02')) {
      iVar4 = (param_2->UpperBound).Value.Value;
      iVar5 = (param_1->UpperBound).Value.Value;
      pTVar8 = pTVar1;
      if ((iVar5 <= iVar4) && ((pTVar8 = pTVar2, iVar4 <= iVar5 && (uVar3 == '\x01')))) {
        pTVar8 = pTVar1;
      }
    }
    uVar3 = (param_1->LowerBound).Type.Value;
    pTVar9 = param_1;
    if ((uVar3 != '\x02') && (pTVar9 = param_2, (param_2->LowerBound).Type.Value != '\x02')) {
      iVar4 = (param_2->LowerBound).Value.Value;
      iVar5 = (param_1->LowerBound).Value.Value;
      pTVar9 = param_1;
      if ((iVar4 <= iVar5) &&
         ((pTVar9 = param_2, iVar5 <= iVar4 && (pTVar9 = param_2, uVar3 == '\x01')))) {
        pTVar9 = param_1;
      }
    }
    __return_storage_ptr__->LowerBound = pTVar9->LowerBound;
    __return_storage_ptr__->UpperBound = *pTVar8;
    return __return_storage_ptr__;
  }
  TVar6 = param_1->UpperBound;
  __return_storage_ptr__->LowerBound = param_1->LowerBound;
  __return_storage_ptr__->UpperBound = TVar6;
  return __return_storage_ptr__;
}

