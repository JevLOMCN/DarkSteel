// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 18

// StaticStruct @ 14252ddc0

UScriptStruct * __cdecl FCheckBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCheckBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FCheckBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCheckBoxStyle,(UObject *)pUVar1,L"CheckBoxStyle"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FCheckBoxStyle.OuterSingleton;
}

// FCheckBoxStyle @ 142542140

FCheckBoxStyle * __thiscall
FCheckBoxStyle::FCheckBoxStyle(FCheckBoxStyle *this,FCheckBoxStyle *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  
  *(undefined ***)this = &___7FCheckBoxStyle__6B_;
  (this->CheckBoxType).Value = (param_1->CheckBoxType).Value;
  FSlateBrush::FSlateBrush(&this->UncheckedImage,&param_1->UncheckedImage);
  FSlateBrush::FSlateBrush(&this->UncheckedHoveredImage,&param_1->UncheckedHoveredImage);
  FSlateBrush::FSlateBrush(&this->UncheckedPressedImage,&param_1->UncheckedPressedImage);
  FSlateBrush::FSlateBrush(&this->CheckedImage,&param_1->CheckedImage);
  FSlateBrush::FSlateBrush(&this->CheckedHoveredImage,&param_1->CheckedHoveredImage);
  FSlateBrush::FSlateBrush(&this->CheckedPressedImage,&param_1->CheckedPressedImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedImage,&param_1->UndeterminedImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedHoveredImage,&param_1->UndeterminedHoveredImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedPressedImage,&param_1->UndeterminedPressedImage);
  fVar3 = (param_1->Padding).Top;
  fVar4 = (param_1->Padding).Right;
  fVar5 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  FSlateBrush::FSlateBrush(&this->BackgroundImage,&param_1->BackgroundImage);
  FSlateBrush::FSlateBrush(&this->BackgroundHoveredImage,&param_1->BackgroundHoveredImage);
  FSlateBrush::FSlateBrush(&this->BackgroundPressedImage,&param_1->BackgroundPressedImage);
  uVar2 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->ForegroundColor).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar6;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->HoveredForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->HoveredForeground).field_0x12;
  (this->HoveredForeground).ColorUseRule = (param_1->HoveredForeground).ColorUseRule;
  (this->HoveredForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->HoveredForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->PressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->PressedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->PressedForeground).field_0x12;
  (this->PressedForeground).ColorUseRule = (param_1->PressedForeground).ColorUseRule;
  (this->PressedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->PressedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->CheckedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->CheckedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedForeground).field_0x12;
  (this->CheckedForeground).ColorUseRule = (param_1->CheckedForeground).ColorUseRule;
  (this->CheckedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedHoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2
  ;
  EVar6 = (param_1->CheckedHoveredForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedHoveredForeground).field_0x12;
  (this->CheckedHoveredForeground).ColorUseRule = (param_1->CheckedHoveredForeground).ColorUseRule;
  (this->CheckedHoveredForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedHoveredForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CheckedPressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedPressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2
  ;
  EVar6 = (param_1->CheckedPressedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedPressedForeground).field_0x12;
  (this->CheckedPressedForeground).ColorUseRule = (param_1->CheckedPressedForeground).ColorUseRule;
  (this->CheckedPressedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedPressedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->UndeterminedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->UndeterminedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->UndeterminedForeground).field_0x12;
  (this->UndeterminedForeground).ColorUseRule = (param_1->UndeterminedForeground).ColorUseRule;
  (this->UndeterminedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->UndeterminedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BorderBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->BorderBackgroundColor).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->BorderBackgroundColor).field_0x12;
  (this->BorderBackgroundColor).ColorUseRule = (param_1->BorderBackgroundColor).ColorUseRule;
  (this->BorderBackgroundColor).ColorTableId = EVar6;
  *(undefined2 *)&(this->BorderBackgroundColor).field_0x12 = uVar7;
  pUVar1 = (param_1->CheckedSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->CheckedSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->CheckedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->CheckedSlateSound).LegacyResourceName_DEPRECATED;
  (this->CheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->CheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  pUVar1 = (param_1->UncheckedSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->UncheckedSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->UncheckedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->UncheckedSlateSound).LegacyResourceName_DEPRECATED;
  (this->UncheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->UncheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  pUVar1 = (param_1->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->HoveredSlateSound).LegacyResourceName_DEPRECATED;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  return this;
}

// FCheckBoxStyle @ 1425423f0

FCheckBoxStyle * __thiscall FCheckBoxStyle::FCheckBoxStyle(FCheckBoxStyle *this)

{
  FLinearColor FVar1;
  FSlateBrush *pFVar2;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FCheckBoxStyle__6B_;
  (this->CheckBoxType).Value = '\0';
  FSlateBrush::FSlateBrush(&this->UncheckedImage);
  FSlateBrush::FSlateBrush(&this->UncheckedHoveredImage);
  FSlateBrush::FSlateBrush(&this->UncheckedPressedImage);
  FSlateBrush::FSlateBrush(&this->CheckedImage);
  FSlateBrush::FSlateBrush(&this->CheckedHoveredImage);
  FSlateBrush::FSlateBrush(&this->CheckedPressedImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedHoveredImage);
  FSlateBrush::FSlateBrush(&this->UndeterminedPressedImage);
  (this->Padding).Left = 2.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundImage,pFVar2);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundHoveredImage,pFVar2);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundPressedImage,pFVar2);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->ForegroundColor).ColorTableId = Black;
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->HoveredForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->HoveredForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->HoveredForeground).ColorUseRule = UseColor_Foreground;
  (this->HoveredForeground).ColorTableId = Black;
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->PressedForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->PressedForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->PressedForeground).ColorUseRule = UseColor_Foreground;
  (this->PressedForeground).ColorTableId = Black;
  *(undefined8 *)&(this->CheckedForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CheckedForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CheckedForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->CheckedForeground).ColorUseRule = UseColor_Foreground;
  (this->CheckedForeground).ColorTableId = Black;
  *(undefined8 *)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->CheckedHoveredForeground).ColorUseRule = UseColor_Foreground;
  (this->CheckedHoveredForeground).ColorTableId = Black;
  *(undefined8 *)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CheckedPressedForeground).ColorUseRule = UseColor_Foreground;
  (this->CheckedPressedForeground).ColorTableId = Black;
  (this->UndeterminedForeground).ColorUseRule = UseColor_Foreground;
  (this->UndeterminedForeground).ColorTableId = Black;
  (this->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  FVar1 = FLinearColor::White;
  (this->BorderBackgroundColor).ColorUseRule = UseColor_Specified;
  (this->BorderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->CheckedSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->CheckedSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->CheckedSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->CheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->UncheckedSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->UncheckedSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->UncheckedSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->UncheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FCheckBoxStyle @ 14254ab70

void __thiscall FCheckBoxStyle::~FCheckBoxStyle(FCheckBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FCheckBoxStyle__6B_;
  (this->BackgroundPressedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundPressedImage).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->BackgroundHoveredImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundHoveredImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UndeterminedPressedImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->UndeterminedPressedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UndeterminedHoveredImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->UndeterminedHoveredImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UndeterminedImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->UndeterminedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->CheckedPressedImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->CheckedPressedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->CheckedHoveredImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->CheckedHoveredImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->CheckedImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->CheckedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UncheckedPressedImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->UncheckedPressedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UncheckedHoveredImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->UncheckedHoveredImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UncheckedImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->UncheckedImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254d6b0

FCheckBoxStyle * __thiscall FCheckBoxStyle::operator=(FCheckBoxStyle *this,FCheckBoxStyle *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  
  (this->CheckBoxType).Value = (param_1->CheckBoxType).Value;
  FSlateBrush::operator=(&this->UncheckedImage,&param_1->UncheckedImage);
  FSlateBrush::operator=(&this->UncheckedHoveredImage,&param_1->UncheckedHoveredImage);
  FSlateBrush::operator=(&this->UncheckedPressedImage,&param_1->UncheckedPressedImage);
  FSlateBrush::operator=(&this->CheckedImage,&param_1->CheckedImage);
  FSlateBrush::operator=(&this->CheckedHoveredImage,&param_1->CheckedHoveredImage);
  FSlateBrush::operator=(&this->CheckedPressedImage,&param_1->CheckedPressedImage);
  FSlateBrush::operator=(&this->UndeterminedImage,&param_1->UndeterminedImage);
  FSlateBrush::operator=(&this->UndeterminedHoveredImage,&param_1->UndeterminedHoveredImage);
  FSlateBrush::operator=(&this->UndeterminedPressedImage,&param_1->UndeterminedPressedImage);
  fVar3 = (param_1->Padding).Top;
  fVar4 = (param_1->Padding).Right;
  fVar5 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  FSlateBrush::operator=(&this->BackgroundImage,&param_1->BackgroundImage);
  FSlateBrush::operator=(&this->BackgroundHoveredImage,&param_1->BackgroundHoveredImage);
  FSlateBrush::operator=(&this->BackgroundPressedImage,&param_1->BackgroundPressedImage);
  uVar2 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->ForegroundColor).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar6;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->HoveredForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->HoveredForeground).field_0x12;
  (this->HoveredForeground).ColorUseRule = (param_1->HoveredForeground).ColorUseRule;
  (this->HoveredForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->HoveredForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->PressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->PressedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->PressedForeground).field_0x12;
  (this->PressedForeground).ColorUseRule = (param_1->PressedForeground).ColorUseRule;
  (this->PressedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->PressedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->CheckedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->CheckedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedForeground).field_0x12;
  (this->CheckedForeground).ColorUseRule = (param_1->CheckedForeground).ColorUseRule;
  (this->CheckedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedHoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2
  ;
  EVar6 = (param_1->CheckedHoveredForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedHoveredForeground).field_0x12;
  (this->CheckedHoveredForeground).ColorUseRule = (param_1->CheckedHoveredForeground).ColorUseRule;
  (this->CheckedHoveredForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedHoveredForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CheckedPressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CheckedPressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2
  ;
  EVar6 = (param_1->CheckedPressedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->CheckedPressedForeground).field_0x12;
  (this->CheckedPressedForeground).ColorUseRule = (param_1->CheckedPressedForeground).ColorUseRule;
  (this->CheckedPressedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->CheckedPressedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->UndeterminedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->UndeterminedForeground).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->UndeterminedForeground).field_0x12;
  (this->UndeterminedForeground).ColorUseRule = (param_1->UndeterminedForeground).ColorUseRule;
  (this->UndeterminedForeground).ColorTableId = EVar6;
  *(undefined2 *)&(this->UndeterminedForeground).field_0x12 = uVar7;
  uVar2 = *(undefined8 *)((longlong)&(param_1->BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BorderBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar6 = (param_1->BorderBackgroundColor).ColorTableId;
  uVar7 = *(undefined2 *)&(param_1->BorderBackgroundColor).field_0x12;
  (this->BorderBackgroundColor).ColorUseRule = (param_1->BorderBackgroundColor).ColorUseRule;
  (this->BorderBackgroundColor).ColorTableId = EVar6;
  *(undefined2 *)&(this->BorderBackgroundColor).field_0x12 = uVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->CheckedSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->CheckedSlateSound).ResourceObject.field0_0x0 =
       (param_1->CheckedSlateSound).ResourceObject.field0_0x0;
  (this->CheckedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->CheckedSlateSound).LegacyResourceName_DEPRECATED;
  (this->CheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->CheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->UncheckedSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->UncheckedSlateSound).ResourceObject.field0_0x0 =
       (param_1->UncheckedSlateSound).ResourceObject.field0_0x0;
  (this->UncheckedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->UncheckedSlateSound).LegacyResourceName_DEPRECATED;
  (this->UncheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->UncheckedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->HoveredSlateSound).ResourceObject.field0_0x0 =
       (param_1->HoveredSlateSound).ResourceObject.field0_0x0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->HoveredSlateSound).LegacyResourceName_DEPRECATED;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  return this;
}

// GetDefault @ 14257f460

FCheckBoxStyle * __cdecl FCheckBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FCheckBoxStyle(&::Default);
      atexit(`FCheckBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425834a0

void __thiscall
FCheckBoxStyle::GetResources
          (FCheckBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_68;
  FSlateBrush *local_60;
  FSlateBrush *local_58;
  FSlateBrush *local_50;
  FSlateBrush *local_48;
  FSlateBrush *local_40;
  FSlateBrush *local_38;
  FSlateBrush *local_30;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_68 = &this->UncheckedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_68;
  local_60 = &this->UncheckedHoveredImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_60) &&
     ((FScriptContainerElement *)&local_60 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_60;
  local_58 = &this->UncheckedPressedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_58;
  local_50 = &this->CheckedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_50) &&
     ((FScriptContainerElement *)&local_50 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_50;
  local_48 = &this->CheckedHoveredImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_48;
  local_40 = &this->CheckedPressedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_40;
  local_38 = &this->UndeterminedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38;
  local_30 = &this->UndeterminedHoveredImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_30;
  local_28 = &this->UndeterminedPressedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28;
  local_20 = &this->BackgroundImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_20;
  local_18 = &this->BackgroundHoveredImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  local_10 = &this->BackgroundPressedImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// GetTypeName @ 142589af0

FName __thiscall FCheckBoxStyle::GetTypeName(FCheckBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetCheckedHoveredImage @ 142590aa0

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetCheckedHoveredImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->CheckedHoveredImage,param_1);
  return this;
}

// SetCheckedImage @ 142590ad0

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetCheckedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->CheckedImage,param_1);
  return this;
}

// SetCheckedPressedImage @ 142590b00

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetCheckedPressedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->CheckedPressedImage,param_1);
  return this;
}

// SetUncheckedHoveredImage @ 1425926c0

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUncheckedHoveredImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UncheckedHoveredImage,param_1);
  return this;
}

// SetUncheckedImage @ 1425926f0

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUncheckedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UncheckedImage,param_1);
  return this;
}

// SetUncheckedPressedImage @ 142592720

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUncheckedPressedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UncheckedPressedImage,param_1);
  return this;
}

// SetUndeterminedHoveredImage @ 142592750

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUndeterminedHoveredImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UndeterminedHoveredImage,param_1);
  return this;
}

// SetUndeterminedImage @ 142592780

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUndeterminedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UndeterminedImage,param_1);
  return this;
}

// SetUndeterminedPressedImage @ 1425927b0

FCheckBoxStyle * __thiscall
FCheckBoxStyle::SetUndeterminedPressedImage(FCheckBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->UndeterminedPressedImage,param_1);
  return this;
}

// UnlinkColors @ 1425a9ce0

void __thiscall FCheckBoxStyle::UnlinkColors(FCheckBoxStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->UncheckedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UncheckedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UncheckedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UncheckedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->UncheckedImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->UncheckedHoveredImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UncheckedHoveredImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UncheckedHoveredImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UncheckedHoveredImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->UncheckedHoveredImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->UncheckedPressedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UncheckedPressedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UncheckedPressedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UncheckedPressedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->UncheckedPressedImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->CheckedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3
    ;
  }
  if ((this->CheckedHoveredImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedHoveredImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedHoveredImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedHoveredImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedHoveredImage).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->CheckedPressedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedPressedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedPressedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedPressedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedPressedImage).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->UndeterminedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UndeterminedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UndeterminedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UndeterminedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->UndeterminedImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->UndeterminedHoveredImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UndeterminedHoveredImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UndeterminedHoveredImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UndeterminedHoveredImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->UndeterminedHoveredImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->UndeterminedPressedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UndeterminedPressedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UndeterminedPressedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UndeterminedPressedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->UndeterminedPressedImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->BackgroundImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->BackgroundHoveredImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundHoveredImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundHoveredImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundHoveredImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundHoveredImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundPressedImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundPressedImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundPressedImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundPressedImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundPressedImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ForegroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ForegroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ForegroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->HoveredForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->HoveredForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->HoveredForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->PressedForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->PressedForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->PressedForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->CheckedForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedForeground).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->CheckedHoveredForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedHoveredForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedHoveredForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->CheckedPressedForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->CheckedPressedForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->CheckedPressedForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->CheckedPressedForeground).SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->UndeterminedForeground).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->UndeterminedForeground).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->UndeterminedForeground).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8) = uVar3
    ;
  }
  if ((this->BorderBackgroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BorderBackgroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BorderBackgroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  return;
}

