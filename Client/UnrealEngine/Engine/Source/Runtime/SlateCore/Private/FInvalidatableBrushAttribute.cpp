// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// SetImage @ 1425913b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FInvalidatableBrushAttribute::SetImage
          (FInvalidatableBrushAttribute *this,SWidget *param_1,
          TAttribute<FSlateBrush_const_*> *param_2)

{
  ESlateColorStylingMode EVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  FSlateBrush *pFVar5;
  longlong *plVar6;
  FReadAccessScope local_248;
  undefined1 local_228 [36];
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  TObjectPtr<UObject>_u_0 local_1f0;
  TVector4<double>_u_0 local_1e8;
  FLinearColor_u_0 local_1c8;
  ESlateColorStylingMode local_1b8;
  EStyleColor local_1b7;
  float local_1b4;
  TEnumAsByte<ESlateBrushRoundingType::Type> local_1b0;
  bool local_1af;
  TBox2<float> local_1a8;
  byte local_194;
  FSharedReferencer<1> local_188;
  FName local_180;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  plVar6 = (longlong *)0x0;
  bVar3 = SetWidgetAttribute<FSlateBrush_const_*,FSlateBrush_const_*>
                    (param_1,&this->Image,param_2,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Image).Getter,
             &local_248);
  if ((*(int *)&(this->Image).Getter.field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->Image).Getter.field_0x8, plVar2 == (longlong *)0x0)) {
LAB_14259144f:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_248);
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 == '\0') goto LAB_14259144f;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Image).Getter,
               &local_248);
    if (*(int *)&(this->Image).Getter.field_0x10 != 0) {
      plVar6 = *(longlong **)&(this->Image).Getter.field_0x8;
    }
    pFVar5 = (FSlateBrush *)(**(code **)(*plVar6 + 0x60))(plVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_248);
    (this->Image).Value = pFVar5;
  }
  pFVar5 = (this->Image).Value;
  if (pFVar5 == (FSlateBrush *)0x0) {
    pFVar5 = FSlateBrush::FSlateBrush(&local_c8);
    FSlateBrush::FSlateBrush((FSlateBrush *)local_228,pFVar5);
    local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
    local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
         local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar5 = FSlateBrush::FSlateBrush(&local_178,pFVar5);
    FSlateBrush::FSlateBrush((FSlateBrush *)local_228,pFVar5);
    local_178._padding_ = (longlong)&___7FSlateBrush__6B_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (!bVar3) {
    if (((((((float)local_228._32_4_ == *(float *)&(this->ImageCache).ImageSize) &&
           (local_204 == *(float *)&(this->ImageCache).ImageSize.field_0x4)) &&
          ((this->ImageCache).DrawAs.Value == local_228[0x1c])) &&
         ((local_200 == (this->ImageCache).Margin.Left &&
          (local_1f8 == (this->ImageCache).Margin.Right)))) &&
        (local_1fc == (this->ImageCache).Margin.Top)) &&
       (local_1f4 == (this->ImageCache).Margin.Bottom)) {
      bVar3 = FSlateColor::operator==(&(this->ImageCache).TintColor,(FSlateColor *)(local_228 + 8));
      if (((bVar3) && ((this->ImageCache).Tiling.Value == local_228[0x1d])) &&
         (((this->ImageCache).Mirroring.Value == local_228[0x1e] &&
          ((((this->ImageCache).ResourceObject.field0_0x0.DebugPtr == local_1f0.DebugPtr &&
            ((this->ImageCache).ResourceName == local_180)) &&
           (((local_194 ^ (this->ImageCache).bIsDynamicallyLoaded) & 1) == 0)))))) {
        bVar3 = UE::Math::TBox2<float>::operator==(&(this->ImageCache).UVRegion,&local_1a8);
        if ((bVar3) &&
           (((this->ImageCache).DrawAs.Value != '\x04' ||
            ((((local_1e8._s_0.X == (this->ImageCache).OutlineSettings.CornerRadii.field0_0x0._s_0.X
               && (local_1e8._s_0.Y ==
                   (this->ImageCache).OutlineSettings.CornerRadii.field0_0x0._s_0.Y)) &&
              ((local_1e8._s_0.Z == (this->ImageCache).OutlineSettings.CornerRadii.field0_0x0._s_0.Z
               && ((local_1e8._s_0.W ==
                    (this->ImageCache).OutlineSettings.CornerRadii.field0_0x0._s_0.W &&
                   (local_1c8._s_0.R ==
                    (this->ImageCache).OutlineSettings.Color.SpecifiedColor.field0_0x0._s_0.R))))))
             && (((local_1c8._s_0.G ==
                   (this->ImageCache).OutlineSettings.Color.SpecifiedColor.field0_0x0._s_0.G &&
                  (((local_1c8._s_0.B ==
                     (this->ImageCache).OutlineSettings.Color.SpecifiedColor.field0_0x0._s_0.B &&
                    (local_1c8._s_0.A ==
                     (this->ImageCache).OutlineSettings.Color.SpecifiedColor.field0_0x0._s_0.A)) &&
                   (EVar1 = (this->ImageCache).OutlineSettings.Color.ColorUseRule,
                   EVar1 == local_1b8)))) &&
                 (((EVar1 != UseColor_ColorTable ||
                   ((this->ImageCache).OutlineSettings.Color.ColorTableId == local_1b7)) &&
                  ((local_1b4 == (this->ImageCache).OutlineSettings.Width &&
                   (((this->ImageCache).OutlineSettings.RoundingType.Value == local_1b0.Value &&
                    ((this->ImageCache).OutlineSettings.bUseBrushTransparency == local_1af))))))))))
            )))) goto LAB_142591681;
      }
    }
    SWidget::Invalidate(param_1,Layout);
  }
LAB_142591681:
  FSlateBrush::operator=(&this->ImageCache,(FSlateBrush *)local_228);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ReferenceController);
  return;
}

