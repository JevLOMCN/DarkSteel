// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 15

// ConvertAbsoluteRatioToZoomed @ 14d8f08c0

float __thiscall
FSparseSampledSequenceTransportCoordinator::ConvertAbsoluteRatioToZoomed
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (float)(((double)param_1 - (this->DisplayRange).LowerBound.Value) / (double)this->ZoomRatio
                );
}

// ConvertZoomedRatioToAbsolute @ 14d8f0c20

float __thiscall
FSparseSampledSequenceTransportCoordinator::ConvertZoomedRatioToAbsolute
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (float)((double)(param_1 * this->ZoomRatio) + (this->DisplayRange).LowerBound.Value);
}

// GetDisplayRange @ 14d92d670

TRange<double> * __thiscall
FSparseSampledSequenceTransportCoordinator::GetDisplayRange
          (FSparseSampledSequenceTransportCoordinator *this,TRange<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined7 uVar3;
  TEnumAsByte<ERangeBoundTypes::Type> TVar4;
  undefined7 uVar5;
  
  uVar3 = *(undefined7 *)&(this->DisplayRange).LowerBound.field_0x1;
  dVar1 = (this->DisplayRange).LowerBound.Value;
  TVar4.Value = (this->DisplayRange).UpperBound.Type.Value;
  uVar5 = *(undefined7 *)&(this->DisplayRange).UpperBound.field_0x1;
  dVar2 = (this->DisplayRange).UpperBound.Value;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(this->DisplayRange).LowerBound.Type.Value;
  *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar3;
  (__return_storage_ptr__->LowerBound).Value = dVar1;
  (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar4.Value;
  *(undefined7 *)&(__return_storage_ptr__->UpperBound).field_0x1 = uVar5;
  (__return_storage_ptr__->UpperBound).Value = dVar2;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d92d6c0

float __thiscall
FSparseSampledSequenceTransportCoordinator::GetFocusPoint
          (FSparseSampledSequenceTransportCoordinator *this)

{
  return (float)this->FocusPoint;
}

// GetPlayBackRatioFromFocusPoint @ 14d933100

double __thiscall
FSparseSampledSequenceTransportCoordinator::GetPlayBackRatioFromFocusPoint
          (FSparseSampledSequenceTransportCoordinator *this,double param_1)

{
  TRangeBound<double> *pTVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  
  if ((param_1 < 0.0) || (__real_3ff0000000000000 < param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFocusPoint >= 0.f && InFocusPoint <= 1.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SparseSampledSequenceTransportCoordinator.cpp"
                       ,0xfb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
  }
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
  }
  dVar6 = (this->DisplayRange).LowerBound.Value;
  if ((this->ProgressRange).LowerBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
  }
  pTVar1 = &(this->ProgressRange).UpperBound;
  dVar2 = (this->ProgressRange).LowerBound.Value;
  if (((this->ProgressRange).LowerBound.Type.Value == '\x02') || ((pTVar1->Type).Value == '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
    if ((pTVar1->Type).Value == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        dVar6 = (double)(*pcVar4)();
        return dVar6;
      }
    }
  }
  dVar3 = (this->ProgressRange).UpperBound.Value;
  if ((this->ProgressRange).LowerBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
  }
  return (((double)this->ZoomRatio * param_1 + dVar6) - dVar2) /
         (double)(float)(dVar3 - (this->ProgressRange).LowerBound.Value);
}

// IsRatioWithinDisplayRange @ 14d93df20

bool __thiscall
FSparseSampledSequenceTransportCoordinator::IsRatioWithinDisplayRange
          (FSparseSampledSequenceTransportCoordinator *this,double param_1)

{
  double dVar1;
  uchar uVar2;
  TRangeBound<double> *pTVar3;
  TRange<double> *pTVar4;
  TRange<double> local_28;
  
  pTVar4 = &this->DisplayRange;
  local_28.LowerBound.Value = param_1;
  uVar2 = (pTVar4->LowerBound).Type.Value;
  if (uVar2 != '\x02') {
    dVar1 = (this->DisplayRange).LowerBound.Value;
    if (param_1 <= dVar1) {
      if (param_1 < dVar1) {
        pTVar4 = &local_28;
      }
      if (uVar2 != '\x01') {
        return false;
      }
    }
    if (dVar1 != (pTVar4->LowerBound).Value) {
      return false;
    }
  }
  uVar2 = (this->DisplayRange).UpperBound.Type.Value;
  pTVar3 = &(this->DisplayRange).UpperBound;
  local_28.UpperBound.Value = param_1;
  local_28.UpperBound.Type.Value = '\x01';
  if (uVar2 != '\x02') {
    dVar1 = (this->DisplayRange).UpperBound.Value;
    if (dVar1 <= param_1) {
      if (dVar1 < param_1) {
        pTVar3 = &local_28.UpperBound;
      }
      if (uVar2 != '\x01') {
        return false;
      }
    }
    if ((this->DisplayRange).UpperBound.Value != pTVar3->Value) {
      return false;
    }
  }
  return true;
}

// IsScrubbing @ 14d93f380

bool __thiscall
FSparseSampledSequenceTransportCoordinator::IsScrubbing
          (FSparseSampledSequenceTransportCoordinator *this)

{
  return this->bIsScrubbing;
}

// MoveWaveformView @ 14d948f40

void __thiscall
FSparseSampledSequenceTransportCoordinator::MoveWaveformView
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar2 = (double)(param_1 * this->ZoomRatio) + (this->DisplayRange).LowerBound.Value;
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar4 = (double)(param_1 * this->ZoomRatio) + (this->DisplayRange).UpperBound.Value;
  if (dVar2 < 0.0) {
    dVar4 = dVar4 + (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar2 = 0.0;
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
      dVar2 = 0.0;
    }
  }
  if (__real_3ff0000000000000 < dVar4) {
    dVar2 = dVar2 - (dVar4 - __real_3ff0000000000000);
    if (__real_3ff0000000000000 <= dVar2) {
      dVar2 = __real_3ff0000000000000;
    }
    dVar4 = __real_3ff0000000000000;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
  }
  UpdateDisplayRange(this,dVar2,dVar4);
  return;
}

// ScrubFocusPoint @ 14d9672d0

void __thiscall
FSparseSampledSequenceTransportCoordinator::ScrubFocusPoint
          (FSparseSampledSequenceTransportCoordinator *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  TRange<double> *this_00;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  FDestructionSentinel local_c8 [7];
  
  if (((this->ProgressRange).LowerBound.Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar15 = (this->ProgressRange).LowerBound.Value;
  this_00 = &this->DisplayRange;
  if (((this_00->LowerBound).Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar18 = (float)((dVar15 - (this->DisplayRange).LowerBound.Value) / (double)this->ZoomRatio);
  if (((this->ProgressRange).UpperBound.Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar15 = (this->ProgressRange).UpperBound.Value;
  if (((this_00->LowerBound).Type.Value == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar7 = __real_3f800000;
  dVar6 = __real_3ff0000000000000;
  fVar2 = this->ZoomRatio;
  dVar16 = this->FocusPointLockPosition;
  fVar17 = (float)((dVar15 - (this->DisplayRange).LowerBound.Value) / (double)fVar2);
  if (param_1 <= fVar17) {
    fVar17 = param_1;
  }
  if (fVar17 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = fVar17;
  if (__real_3f800000 <= fVar17) {
    fVar18 = __real_3f800000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (dVar16 < (double)fVar17) {
    if (((this->DisplayRange).UpperBound.Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar15 = (double)(float)(((double)fVar17 - dVar16) * (double)fVar2);
    dVar16 = dVar15 + (this->DisplayRange).UpperBound.Value;
    if (dVar6 <= dVar16) {
      dVar16 = dVar6;
    }
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    if ((float)dVar16 < fVar7) {
      if (((this_00->LowerBound).Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar15 = dVar15 + (this->DisplayRange).LowerBound.Value;
      if (dVar6 <= dVar15) {
        dVar15 = dVar6;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      UpdateDisplayRange(this,(double)(float)dVar15,(double)(float)dVar16);
      fVar18 = (float)this->FocusPointLockPosition;
    }
  }
  if (fVar17 < 0.0) {
    fVar2 = this->ZoomRatio;
    if (((this_00->LowerBound).Type.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar15 = (double)(fVar17 * fVar2);
    dVar16 = dVar15 + (this->DisplayRange).LowerBound.Value;
    if (dVar6 <= dVar16) {
      dVar16 = dVar6;
    }
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    if (0.0 < (float)dVar16) {
      dVar14 = TRange<double>::GetUpperBoundValue(this_00);
      dVar14 = dVar14 + dVar15;
      if (dVar6 <= dVar14) {
        dVar14 = dVar6;
      }
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      UpdateDisplayRange(this,(double)(float)dVar16,(double)(float)dVar14);
      fVar18 = 0.0;
    }
  }
  this->FocusPoint = (double)fVar18;
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnFocusPointMoved,fVar18);
  bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnFocusPointScrubUpdate);
  if (bVar8) {
    dVar15 = GetPlayBackRatioFromFocusPoint(this,(double)fVar18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnFocusPointScrubUpdate,(FWriteAccessScope *)local_c8);
    puVar1 = &(this->OnFocusPointScrubUpdate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar8 = false;
    uVar12 = *(int *)&(this->OnFocusPointScrubUpdate).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar8 = false;
      do {
        uVar11 = 0;
        if ((int)uVar12 < *(int *)&(this->OnFocusPointScrubUpdate).field_0x10) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnFocusPointScrubUpdate).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar13) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar13), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,(float)dVar15,param_2), cVar10 == '\0')) {
          bVar8 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnFocusPointScrubUpdate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnFocusPointScrubUpdate,false);
    }
    if (local_c8[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8[0].Accessor,local_c8);
    }
  }
  this->bIsScrubbing = param_2;
  return;
}

// SetProgressRatio @ 14d96bb10

void __thiscall
FSparseSampledSequenceTransportCoordinator::SetProgressRatio
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  TRangeBound<double> *pTVar1;
  double dVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  fVar4 = __real_3f800000;
  if (this->bIsScrubbing == false) {
    if (((param_1 < 0.0) || (__real_3f800000 < param_1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewRatio >= 0.f && NewRatio <= 1.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SparseSampledSequenceTransportCoordinator.cpp"
                           ,0xbc,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = &(this->ProgressRange).UpperBound;
    if (((this->ProgressRange).LowerBound.Type.Value == '\x02') || ((pTVar1->Type).Value == '\x02'))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                         ,0x1ad,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((pTVar1->Type).Value == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar6 = (this->ProgressRange).UpperBound.Value;
    if (((this->ProgressRange).LowerBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar7 = (this->ProgressRange).LowerBound.Value;
    if (((this->ProgressRange).LowerBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar6 = (double)param_1 * (dVar6 - dVar7) + (this->ProgressRange).LowerBound.Value;
    if (((this->DisplayRange).LowerBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar7 = (dVar6 - (this->DisplayRange).LowerBound.Value) / (double)this->ZoomRatio;
    this->FocusPoint = dVar7;
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFocusPointMoved,(float)dVar7);
    dVar7 = __real_3ff0000000000000;
    if (0.0 <= this->FocusPoint) {
      dVar2 = this->FocusPointLockPosition;
      if (this->FocusPoint < dVar2) {
        return;
      }
      dVar9 = (double)this->ZoomRatio;
      dVar8 = (__real_3ff0000000000000 - dVar2) * dVar9 + dVar6;
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      if (__real_3ff0000000000000 <= dVar8) {
        dVar6 = (double)(fVar4 - this->ZoomRatio);
        if (__real_3ff0000000000000 <= dVar6) {
          dVar6 = __real_3ff0000000000000;
        }
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
      }
      else {
        this->FocusPoint = dVar2;
        dVar6 = dVar6 - dVar9 * dVar2;
        if (dVar7 <= dVar6) {
          dVar6 = dVar7;
        }
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFocusPointMoved,(float)dVar2);
      }
    }
    else {
      this->FocusPoint = 0.0;
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFocusPointMoved,0.0);
      dVar6 = this->FocusPoint;
      dVar8 = (double)this->ZoomRatio;
    }
    UpdateDisplayRange(this,dVar6,dVar8);
  }
  return;
}

// SetZoomRatio @ 14d96fa10

void __thiscall
FSparseSampledSequenceTransportCoordinator::SetZoomRatio
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  fVar1 = this->ZoomRatio;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar2 = (this->DisplayRange).UpperBound.Value;
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar3 = this->FocusPoint;
  dVar2 = dVar2 - ((this->DisplayRange).UpperBound.Value - (double)(fVar1 - param_1));
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = dVar3 * dVar2 + (this->DisplayRange).LowerBound.Value;
  uVar10 = SUB84(dVar6,0);
  uVar7 = (ulonglong)dVar6 >> 0x20;
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar8 = __real_3ff0000000000000;
  dVar2 = (this->DisplayRange).UpperBound.Value - (__real_3ff0000000000000 - dVar3) * dVar2;
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar1 = this->ZoomRatio;
  dVar3 = this->FocusPoint;
  dVar4 = (this->DisplayRange).LowerBound.Value;
  if (0.0 <= dVar6) {
    if (dVar8 < dVar2) {
      dVar6 = dVar6 - (dVar2 - dVar8);
      dVar2 = dVar8;
    }
  }
  else {
    dVar6 = 0.0;
    dVar2 = dVar2 + (double)CONCAT44((uint)uVar7 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     uVar10 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  this->ZoomRatio = param_1;
  UpdateDisplayRange(this,dVar6,dVar2);
  dVar2 = (((double)fVar1 * dVar3 + dVar4) - dVar6) / (double)param_1;
  this->FocusPoint = dVar2;
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnFocusPointMoved,(float)dVar2);
  return;
}

// Stop @ 14d971e30

void __thiscall
FSparseSampledSequenceTransportCoordinator::Stop(FSparseSampledSequenceTransportCoordinator *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d971e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,0);
  return;
}

// UpdateDisplayRange @ 14d979240

void __thiscall
FSparseSampledSequenceTransportCoordinator::UpdateDisplayRange
          (FSparseSampledSequenceTransportCoordinator *this,double param_1,double param_2)

{
  TMulticastDelegate<void___cdecl(TRange<double>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FDestructionSentinel local_78;
  undefined8 local_58;
  double dStack_50;
  undefined8 local_48;
  double dStack_40;
  
  if ((param_2 <= param_1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MinValue < MaxValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SparseSampledSequenceTransportCoordinator.cpp"
                         ,0xe9,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar5 = param_1;
  if (param_2 <= param_1) {
    dVar5 = param_2;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (((this->DisplayRange).LowerBound.Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (__real_3ff0000000000000 <= param_2) {
    param_2 = __real_3ff0000000000000;
  }
  (this->DisplayRange).LowerBound.Value = dVar5;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (((this->DisplayRange).UpperBound.Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->OnDisplayRangeUpdated;
  (this->DisplayRange).UpperBound.Value = param_2;
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar9) {
    uVar6 = *(undefined8 *)&(this->DisplayRange).LowerBound;
    dVar5 = (this->DisplayRange).LowerBound.Value;
    uVar7 = *(undefined8 *)&(this->DisplayRange).UpperBound;
    dVar8 = (this->DisplayRange).UpperBound.Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_78);
    puVar1 = &(this->OnDisplayRangeUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar9 = false;
    uVar13 = *(int *)&(this->OnDisplayRangeUpdated).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar9 = false;
      do {
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&(this->OnDisplayRangeUpdated).field_0x10) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnDisplayRangeUpdated).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar14) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar14), plVar3 == (longlong *)0x0)) ||
           (local_58 = uVar6, dStack_50 = dVar5, local_48 = uVar7, dStack_40 = dVar8,
           cVar11 = (**(code **)(*plVar3 + 0x68))(), cVar11 == '\0')) {
          bVar9 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->OnDisplayRangeUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  return;
}

// UpdatePlaybackRange @ 14d979dc0

void __thiscall
FSparseSampledSequenceTransportCoordinator::UpdatePlaybackRange
          (FSparseSampledSequenceTransportCoordinator *this,TRange<double> *param_1)

{
  double dVar1;
  undefined7 uVar2;
  
  uVar2 = *(undefined7 *)&(param_1->LowerBound).field_0x1;
  dVar1 = (param_1->LowerBound).Value;
  (this->ProgressRange).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined7 *)&(this->ProgressRange).LowerBound.field_0x1 = uVar2;
  (this->ProgressRange).LowerBound.Value = dVar1;
  uVar2 = *(undefined7 *)&(param_1->UpperBound).field_0x1;
  dVar1 = (param_1->UpperBound).Value;
  (this->ProgressRange).UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->UpperBound).Type.Value;
  *(undefined7 *)&(this->ProgressRange).UpperBound.field_0x1 = uVar2;
  (this->ProgressRange).UpperBound.Value = dVar1;
  return;
}

// UpdateZoomRatioAndDisplayRange @ 14d97b740

void __thiscall
FSparseSampledSequenceTransportCoordinator::UpdateZoomRatioAndDisplayRange
          (FSparseSampledSequenceTransportCoordinator *this,float param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  fVar1 = this->ZoomRatio;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar2 = (this->DisplayRange).UpperBound.Value;
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar3 = this->FocusPoint;
  dVar2 = dVar2 - ((this->DisplayRange).UpperBound.Value - (double)(fVar1 - param_1));
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = dVar3 * dVar2 + (this->DisplayRange).LowerBound.Value;
  uVar10 = SUB84(dVar6,0);
  uVar7 = (ulonglong)dVar6 >> 0x20;
  if ((this->DisplayRange).UpperBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar8 = __real_3ff0000000000000;
  dVar2 = (this->DisplayRange).UpperBound.Value - (__real_3ff0000000000000 - dVar3) * dVar2;
  if ((this->DisplayRange).LowerBound.Type.Value == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar1 = this->ZoomRatio;
  dVar3 = this->FocusPoint;
  dVar4 = (this->DisplayRange).LowerBound.Value;
  if (0.0 <= dVar6) {
    if (dVar8 < dVar2) {
      dVar6 = dVar6 - (dVar2 - dVar8);
      dVar2 = dVar8;
    }
  }
  else {
    dVar6 = 0.0;
    dVar2 = dVar2 + (double)CONCAT44((uint)uVar7 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     uVar10 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  this->ZoomRatio = param_1;
  UpdateDisplayRange(this,dVar6,dVar2);
  dVar2 = (((double)fVar1 * dVar3 + dVar4) - dVar6) / (double)param_1;
  this->FocusPoint = dVar2;
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnFocusPointMoved,(float)dVar2);
  return;
}

