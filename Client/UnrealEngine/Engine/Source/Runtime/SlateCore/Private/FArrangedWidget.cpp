// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// GetNullWidget @ 14250e510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArrangedWidget * __cdecl FArrangedWidget::GetNullWidget(void)

{
  FDeprecateSlateVector2D FVar1;
  undefined8 uVar2;
  SWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    pSVar3 = SNullWidget::NullWidget.Object;
    uVar2 = _UNK_150689538;
    FVar1 = ___xmm_000000003f8000000000000000000000;
    if (::_TSS0 == -1) {
      NullArrangedWidget.Widget.SharedReferenceCount =
           (FSharedReferencer<1>)SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      NullArrangedWidget.Geometry.Size = ___xmm_000000003f8000000000000000000000;
      NullArrangedWidget.Geometry._8_8_ = _UNK_150689538;
      uStack_30 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      NullArrangedWidget.Widget.Object = SNullWidget::NullWidget.Object;
      fStack_2c = (float)___xmm_3f80000000000000000000003f800000;
      fStack_28 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
      fStack_24 = (float)_UNK_15076b188;
      uStack_20 = (uint)((ulonglong)_UNK_15076b188 >> 0x20);
      NullArrangedWidget.Geometry._16_8_ =
           (longlong)UE::Math::TVector2<float>::ZeroVector.field0_0x0 << 0x20;
      NullArrangedWidget.Geometry.AccumulatedRenderTransform.M.M[0][0] = fStack_2c;
      NullArrangedWidget.Geometry.Position.field0_0x0._s_0.Y = (float)uStack_30;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        NullArrangedWidget.Geometry.AccumulatedRenderTransform.M.M[1][0] = fStack_24;
        NullArrangedWidget.Geometry.AccumulatedRenderTransform.M.M[0][1] = fStack_28;
        NullArrangedWidget.Geometry.AccumulatedRenderTransform._12_8_ = ZEXT48(uStack_20);
        NullArrangedWidget.Geometry._48_8_ = ((ulonglong)local_14 & 0xfffffffe) << 0x20;
      }
      else {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        NullArrangedWidget.Geometry.Size = FVar1;
        NullArrangedWidget.Geometry._8_8_ = uVar2;
        NullArrangedWidget.Geometry.AccumulatedRenderTransform.M.M[1][0] = fStack_24;
        NullArrangedWidget.Geometry.AccumulatedRenderTransform.M.M[0][1] = fStack_28;
        NullArrangedWidget.Geometry.AccumulatedRenderTransform._12_8_ = ZEXT48(uStack_20);
        NullArrangedWidget.Widget.Object = pSVar3;
        NullArrangedWidget.Geometry._48_8_ = ((ulonglong)local_14 & 0xfffffffe) << 0x20;
        NullArrangedWidget.Widget.SharedReferenceCount = FVar4;
        LOCK();
        (FVar4.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      atexit(`FArrangedWidget::GetNullWidget'::__l2::
             _dynamic_atexit_destructor_for__NullArrangedWidget__);
      _Init_thread_footer(&::_TSS0);
      return &NullArrangedWidget;
    }
  }
  return &NullArrangedWidget;
}

// ToString @ 142520910

FString * __thiscall
FArrangedWidget::ToString(FArrangedWidget *this,FString *__return_storage_ptr__)

{
  SWidget *pSVar1;
  void *local_28 [2];
  FString local_18;
  
  FGeometry::ToString(&this->Geometry,&local_18);
  pSVar1 = (this->Widget).Object;
  (**(code **)(pSVar1->_padding_ + 0x1e0))(pSVar1,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s @ %s");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

