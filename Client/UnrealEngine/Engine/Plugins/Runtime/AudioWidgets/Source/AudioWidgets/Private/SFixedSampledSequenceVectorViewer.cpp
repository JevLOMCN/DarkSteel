// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// ComputeDesiredSize @ 14d8e60b0

TVector2<double> * __thiscall
SFixedSampledSequenceVectorViewer::ComputeDesiredSize
          (SFixedSampledSequenceVectorViewer *this,TVector2<double> *__return_storage_ptr__,
          float param_1)

{
  float fVar1;
  
  fVar1 = this->DesiredHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->DesiredWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 14d8ee590

void __thiscall
SFixedSampledSequenceVectorViewer::Construct
          (SFixedSampledSequenceVectorViewer *this,FArguments *param_1,
          TArrayView<float_const_,int> *param_2,uchar param_3)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ESampledSequenceDrawOrientation EVar8;
  bool bVar9;
  
  pfVar2 = param_2->DataPtr;
  iVar4 = param_2->ArrayNum;
  uVar5 = *(undefined4 *)&param_2->field_0xc;
  this->NumChannels = param_3;
  this->bForceRedraw = true;
  (this->SampleData).DataPtr = pfVar2;
  (this->SampleData).ArrayNum = iVar4;
  *(undefined4 *)&(this->SampleData).field_0xc = uVar5;
  if (param_1->_Style == (FSampledSequenceVectorViewerStyle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceVectorViewer.cpp"
                       ,0xd,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar7 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (this->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (this->DrawingParams).DimensionSlotMargin = fVar6;
  (this->DrawingParams).MaxSequenceHeightRatio = fVar7;
  fVar6 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar7 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar8 = (param_1->_SequenceDrawingParams).Orientation;
  (this->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (this->DrawingParams).MinScaledBinValue = fVar6;
  (this->DrawingParams).VerticalZoomFactor = fVar7;
  (this->DrawingParams).Orientation = EVar8;
  uVar3 = *(undefined8 *)((longlong)&(param_1->_Style->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->LineColor).field0_0x0 =
       *(undefined8 *)&(param_1->_Style->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LineColor).field0_0x0 + 8) = uVar3;
  this->LineThickness = param_1->_Style->LineThickness;
  this->ScaleFactor = param_1->_ScaleFactor;
  return;
}

// OnPaint @ 14d9555f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SFixedSampledSequenceVectorViewer::OnPaint
          (SFixedSampledSequenceVectorViewer *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  byte bVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_158 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_108;
  undefined8 local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  FDeprecateSlateVector2D local_d0;
  FDeprecateSlateVector2D local_c8;
  TVector2<float>_u_0 local_c0;
  float local_b8;
  undefined8 local_b4;
  FDeprecateSlateVector2D local_ac;
  float local_a4 [2];
  float afStack_9c [2];
  TVector2<float>_u_0 local_94;
  byte local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->NumChannels == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceVectorViewer.cpp"
                         ,0x2b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar9 = 0;
  uVar12 = (longlong)(this->SampleData).ArrayNum / (longlong)(int)(uint)this->NumChannels;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  iVar6 = (int)uVar12;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12 & 0xffffffff);
  }
  uVar13 = 0;
  if (0 < iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
  }
  local_f8 = param_2->Size;
  iVar6 = (this->SampleData).ArrayNum;
  fVar17 = (float)local_f8 * __real_3f000000;
  fVar14 = (this->DrawingParams).MaxSequenceHeightRatio * __real_3f000000 * this->ScaleFactor;
  fVar15 = local_f8._4_4_ * __real_3f000000;
  fVar16 = (float)local_f8 * fVar14;
  fVar14 = (float)((uint)(local_f8._4_4_ * fVar14) ^ __xmm_80000000800000008000000080000000);
  local_d0 = local_f8;
  local_c8 = local_f8;
  if (this->NumChannels == 1) {
    if (0 < iVar6) {
      dVar4 = (double)fVar15;
      uVar12 = uVar9;
      do {
        uVar10 = (uint)uVar12;
        uVar8 = uVar13;
        if ((int)uVar10 < (this->SampleData).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        local_f0 = (double)(fVar16 * *(float *)(uVar9 + (longlong)(this->SampleData).DataPtr) +
                           fVar17);
        dStack_e8 = dVar4;
        if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 <
             local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (local_108.ArrayNum == local_108.ArrayMax) {
          local_108.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        lVar7 = (longlong)local_108.ArrayNum;
        uVar12 = (ulonglong)(uVar10 + 1);
        uVar9 = uVar9 + 4;
        local_108.ArrayNum = local_108.ArrayNum + 1;
        *(double *)(local_108.AllocatorInstance.Data + lVar7 * 0x10) = local_f0;
        *(double *)(local_108.AllocatorInstance.Data + lVar7 * 0x10 + 8) = dStack_e8;
      } while ((int)(uVar10 + 1) < (this->SampleData).ArrayNum);
    }
  }
  else if (0 < (int)((iVar6 - (uint)this->NumChannels) + 1)) {
    uVar8 = 1;
    do {
      uVar10 = uVar13;
      if ((int)uVar8 < (this->SampleData).ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      fVar1 = (this->SampleData).DataPtr[(int)uVar8];
      uVar11 = (uint)uVar9;
      uVar10 = uVar13;
      if ((int)uVar11 < (this->SampleData).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      local_e0 = (double)(fVar16 * (this->SampleData).DataPtr[(int)uVar11] + fVar17);
      dStack_d8 = (double)(fVar1 * fVar14 + fVar15);
      if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 <
           local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      lVar7 = (longlong)local_108.ArrayNum;
      local_108.ArrayNum = local_108.ArrayNum + 1;
      *(double *)(local_108.AllocatorInstance.Data + lVar7 * 0x10) = local_e0;
      *(double *)(local_108.AllocatorInstance.Data + lVar7 * 0x10 + 8) = dStack_d8;
      bVar2 = this->NumChannels;
      uVar11 = uVar11 + bVar2;
      uVar9 = (ulonglong)uVar11;
      uVar8 = uVar8 + bVar2;
    } while ((int)uVar11 < (int)(((this->SampleData).ArrayNum - (uint)bVar2) + 1));
  }
  local_c0 = (param_2->AbsolutePosition).field0_0x0;
  local_b8 = param_2->Scale;
  local_94 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_ac = param_2->Size;
  local_a4 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_9c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_8c = param_2->bHasRenderTransform * '\x02' | local_8c & 0xfc;
  local_b4 = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_c0._s_0,&local_108,None,&this->LineColor,true,
             this->LineThickness);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return param_5 + 1;
}

// OnStyleUpdated @ 14d958390

void __thiscall
SFixedSampledSequenceVectorViewer::OnStyleUpdated
          (SFixedSampledSequenceVectorViewer *this,FSampledSequenceVectorViewerStyle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->LineColor).field0_0x0 = *(undefined8 *)&(param_1->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LineColor).field0_0x0 + 8) = uVar2;
  this->LineThickness = param_1->LineThickness;
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetScaleFactor @ 14d96c0f0

void __thiscall
SFixedSampledSequenceVectorViewer::SetScaleFactor
          (SFixedSampledSequenceVectorViewer *this,float param_1)

{
  this->ScaleFactor = param_1;
  return;
}

// UpdateView @ 14d97b6d0

void __thiscall
SFixedSampledSequenceVectorViewer::UpdateView
          (SFixedSampledSequenceVectorViewer *this,TArrayView<float_const_,int> *param_1,
          uchar param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  pfVar1 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->NumChannels = param_2;
  this->bForceRedraw = true;
  (this->SampleData).DataPtr = pfVar1;
  (this->SampleData).ArrayNum = iVar2;
  *(undefined4 *)&(this->SampleData).field_0xc = uVar3;
  return;
}

