// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator== @ 1429c0ab0

bool __thiscall FSlateBrush::operator==(FSlateBrush *this,FSlateBrush *param_1)

{
  uchar uVar1;
  ESlateColorStylingMode EVar2;
  bool bVar3;
  
  if ((((((*(float *)&param_1->ImageSize == *(float *)&this->ImageSize) &&
         (*(float *)&(param_1->ImageSize).field_0x4 == *(float *)&(this->ImageSize).field_0x4)) &&
        (uVar1 = (this->DrawAs).Value, uVar1 == (param_1->DrawAs).Value)) &&
       (((param_1->Margin).Left == (this->Margin).Left &&
        ((param_1->Margin).Right == (this->Margin).Right)))) &&
      ((param_1->Margin).Top == (this->Margin).Top)) &&
     ((param_1->Margin).Bottom == (this->Margin).Bottom)) {
    bVar3 = FSlateColor::operator==(&this->TintColor,&param_1->TintColor);
    if (((bVar3) && ((this->Tiling).Value == (param_1->Tiling).Value)) &&
       (((this->Mirroring).Value == (param_1->Mirroring).Value &&
        ((((this->ResourceObject).field0_0x0.DebugPtr ==
           (param_1->ResourceObject).field0_0x0.DebugPtr &&
          (this->ResourceName == param_1->ResourceName)) &&
         (((param_1->bIsDynamicallyLoaded ^ this->bIsDynamicallyLoaded) & 1) == 0)))))) {
      bVar3 = UE::Math::TBox2<float>::operator==(&this->UVRegion,&param_1->UVRegion);
      if ((bVar3) &&
         ((uVar1 != '\x04' ||
          (((((param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X ==
              (this->OutlineSettings).CornerRadii.field0_0x0._s_0.X &&
             ((param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y ==
              (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Y)) &&
            (((param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z ==
              (this->OutlineSettings).CornerRadii.field0_0x0._s_0.Z &&
             (((param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W ==
               (this->OutlineSettings).CornerRadii.field0_0x0._s_0.W &&
              ((param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R ==
               (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R)))))) &&
           ((((param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G ==
              (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G &&
             ((((param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B ==
                (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B &&
               ((param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A ==
                (this->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A)) &&
              (EVar2 = (this->OutlineSettings).Color.ColorUseRule,
              EVar2 == (param_1->OutlineSettings).Color.ColorUseRule)))) &&
            (((EVar2 != UseColor_ColorTable ||
              ((this->OutlineSettings).Color.ColorTableId ==
               (param_1->OutlineSettings).Color.ColorTableId)) &&
             (((param_1->OutlineSettings).Width == (this->OutlineSettings).Width &&
              (((this->OutlineSettings).RoundingType.Value ==
                (param_1->OutlineSettings).RoundingType.Value &&
               ((this->OutlineSettings).bUseBrushTransparency ==
                (param_1->OutlineSettings).bUseBrushTransparency)))))))))))))) {
        return true;
      }
    }
  }
  return false;
}

