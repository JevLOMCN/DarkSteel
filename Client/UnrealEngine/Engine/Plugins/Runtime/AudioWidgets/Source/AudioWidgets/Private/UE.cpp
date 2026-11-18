// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 135

// Construct<FSpectrogramRackUnitSettings> @ 14d88de20

void __cdecl UE::CoreUObject::Private::Construct<FSpectrogramRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2070600;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// ConstructForTests<FSpectrogramRackUnitSettings> @ 14d88de40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSpectrogramRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2070600;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FSpectrogramRackUnitSettings> @ 14d88de60

void __cdecl UE::CoreUObject::Private::Destruct<FSpectrogramRackUnitSettings>(void *param_1)

{
  return;
}

// Copy<FSpectrogramRackUnitSettings> @ 14d88deb0

bool __cdecl
UE::CoreUObject::Private::Copy<FSpectrogramRackUnitSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAudioMeterStyle> @ 14d88e8d0

void __cdecl UE::CoreUObject::Private::Construct<FAudioMeterStyle>(void *param_1)

{
  memset(param_1,0,0x430);
  FAudioMeterStyle::FAudioMeterStyle(param_1);
  return;
}

// ConstructForTests<FAudioMeterStyle> @ 14d88e900

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMeterStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioMeterWidgetStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0x40400000;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0x406f400000000000;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0x4039000000000000;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0xc064000000000000;
  *(undefined2 *)((longlong)param_1 + 0x3b8) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x3c0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 10;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0x3d0),5);
  *(undefined ***)param_1 = &___7FAudioMeterStyle__6B_;
  return;
}

// Destruct<FAudioMeterStyle> @ 14d88e950

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMeterStyle>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x408));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioMeterStyle> @ 14d88e9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMeterStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x388);
    *(undefined8 *)((longlong)param_1 + 0x380) = *(undefined8 *)((longlong)param_2 + 0x380);
    *(undefined8 *)((longlong)param_1 + 0x388) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x398);
    *(undefined8 *)((longlong)param_1 + 0x390) = *(undefined8 *)((longlong)param_2 + 0x390);
    *(undefined8 *)((longlong)param_1 + 0x398) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x3a0) = *(undefined4 *)((longlong)param_2 + 0x3a0);
    *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)((longlong)param_2 + 0x3a4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x3b0);
    *(undefined8 *)((longlong)param_1 + 0x3a8) = *(undefined8 *)((longlong)param_2 + 0x3a8);
    *(undefined8 *)((longlong)param_1 + 0x3b0) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x3b8) = *(undefined1 *)((longlong)param_2 + 0x3b8);
    *(undefined1 *)((longlong)param_1 + 0x3b9) = *(undefined1 *)((longlong)param_2 + 0x3b9);
    *(undefined4 *)((longlong)param_1 + 0x3bc) = *(undefined4 *)((longlong)param_2 + 0x3bc);
    *(undefined4 *)((longlong)param_1 + 0x3c0) = *(undefined4 *)((longlong)param_2 + 0x3c0);
    *(undefined4 *)((longlong)param_1 + 0x3c4) = *(undefined4 *)((longlong)param_2 + 0x3c4);
    *(undefined4 *)((longlong)param_1 + 0x3c8) = *(undefined4 *)((longlong)param_2 + 0x3c8);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0x3d0),
               (FSlateFontInfo *)((longlong)param_2 + 0x3d0));
    param_2 = (void *)((longlong)param_2 + 0x430);
    param_1 = (void *)((longlong)param_1 + 0x430);
  }
  return true;
}

// Construct<FTriggerThresholdLineStyle> @ 14d88ed30

void __cdecl UE::CoreUObject::Private::Construct<FTriggerThresholdLineStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTriggerThresholdLineStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FTriggerThresholdLineStyle> @ 14d88ed60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTriggerThresholdLineStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTriggerThresholdLineStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FTriggerThresholdLineStyle> @ 14d88eda0

void __cdecl UE::CoreUObject::Private::Destruct<FTriggerThresholdLineStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FTriggerThresholdLineStyle> @ 14d88ee30

bool __cdecl
UE::CoreUObject::Private::Copy<FTriggerThresholdLineStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    pvVar3 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)pvVar3 + 8) = *puVar1;
      *(undefined8 *)((longlong)pvVar3 + 0x10) = uVar2;
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAudioMeterDefaultColorStyle> @ 14d88f260

void __cdecl UE::CoreUObject::Private::Construct<FAudioMeterDefaultColorStyle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FAudioMeterDefaultColorStyle::FAudioMeterDefaultColorStyle(param_1);
  return;
}

// ConstructForTests<FAudioMeterDefaultColorStyle> @ 14d88f290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAudioMeterDefaultColorStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0x3cfdf3b6;
  *(undefined ***)param_1 = &___7FAudioMeterDefaultColorStyle__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3cfdf3b6;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3cfdf3b6;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3cd2b0a7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3e55553f;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3d8f2b67;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3e795571;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f355550;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3eb6c8f7;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3de60f5e;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3c9085f5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3c9085f5;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3c9085f5;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3ee2aa9f;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ee2aa9f;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3ee2aa9f;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  return;
}

// Destruct<FAudioMeterDefaultColorStyle> @ 14d88f2a0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMeterDefaultColorStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FAudioMeterDefaultColorStyle> @ 14d88f330

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMeterDefaultColorStyle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar1 = (undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar3);
    uVar2 = puVar1[1];
    *(undefined8 *)((longlong)pvVar3 + 8) = *puVar1;
    *(undefined8 *)((longlong)pvVar3 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x48) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x58) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x60) = uVar2;
    pvVar3 = (void *)((longlong)pvVar3 + 0x68);
  }
  return true;
}

// Construct<FSampledSequenceVectorViewerStyle> @ 14d88f640

void __cdecl UE::CoreUObject::Private::Construct<FSampledSequenceVectorViewerStyle>(void *param_1)

{
  FLinearColor FVar1;
  TVector2<float>_u_0 aTStackX_10 [3];
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceVectorViewerStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  aTStackX_10[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,Image,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStackX_10[0]._s_0,&FLinearColor::White,(UObject *)0x0
             ,false);
  FStack_b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FVar1 = FLinearColor::White;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xd0))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ConstructForTests<FSampledSequenceVectorViewerStyle> @ 14d88f650

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSampledSequenceVectorViewerStyle>(void *param_1)

{
  FLinearColor FVar1;
  TVector2<float>_u_0 aTStackX_10 [3];
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceVectorViewerStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  aTStackX_10[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,Image,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStackX_10[0]._s_0,&FLinearColor::White,(UObject *)0x0
             ,false);
  FStack_b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FVar1 = FLinearColor::White;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xd0))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FSampledSequenceVectorViewerStyle> @ 14d88f660

void __cdecl UE::CoreUObject::Private::Destruct<FSampledSequenceVectorViewerStyle>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xc0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSampledSequenceVectorViewerStyle> @ 14d88f7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSampledSequenceVectorViewerStyle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x20),(FSlateBrush *)((longlong)param_2 + 0x20));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 0xe0);
    param_1 = (void *)((longlong)param_1 + 0xf0);
    param_2 = (void *)((longlong)param_2 + 0xf0);
  }
  return true;
}

// Construct<FLoudnessMeterRackUnitSettings> @ 14d88fa30

void __cdecl UE::CoreUObject::Private::Construct<FLoudnessMeterRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// ConstructForTests<FLoudnessMeterRackUnitSettings> @ 14d88fa50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLoudnessMeterRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// Destruct<FLoudnessMeterRackUnitSettings> @ 14d88fa70

void __cdecl UE::CoreUObject::Private::Destruct<FLoudnessMeterRackUnitSettings>(void *param_1)

{
  return;
}

// Copy<FLoudnessMeterRackUnitSettings> @ 14d88fb40

bool __cdecl
UE::CoreUObject::Private::Copy<FLoudnessMeterRackUnitSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAudioMaterialEnvelopeStyle> @ 14d88fe90

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialEnvelopeStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined ***)param_1 = &___7FAudioMaterialEnvelopeStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar1 = FLinearColor::Gray;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4380000043800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ConstructForTests<FAudioMaterialEnvelopeStyle> @ 14d88feb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialEnvelopeStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  *(undefined ***)param_1 = &___7FAudioMaterialEnvelopeStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar1 = FLinearColor::Gray;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4380000043800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FAudioMaterialEnvelopeStyle> @ 14d88ff00

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialEnvelopeStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FAudioMaterialEnvelopeStyle> @ 14d890010

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialEnvelopeStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x10) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    pvVar3 = (void *)((longlong)pvVar3 + 0x48);
  }
  return true;
}

// Construct<FLoudnessMetricDisplayOptions> @ 14d890530

void __cdecl UE::CoreUObject::Private::Construct<FLoudnessMetricDisplayOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FLoudnessMetricDisplayOptions> @ 14d890540

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLoudnessMetricDisplayOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FLoudnessMetricDisplayOptions> @ 14d890550

void __cdecl UE::CoreUObject::Private::Destruct<FLoudnessMetricDisplayOptions>(void *param_1)

{
  return;
}

// Copy<FLoudnessMetricDisplayOptions> @ 14d8905a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLoudnessMetricDisplayOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSampledSequenceValueGridOverlayStyle> @ 14d8906a0

void __cdecl
UE::CoreUObject::Private::Construct<FSampledSequenceValueGridOverlayStyle>(void *param_1)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FName FStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  FVar2 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  FVar2 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,(longlong)param_1 + 0x38,FVar1,0);
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x44340000;
  return;
}

// ConstructForTests<FSampledSequenceValueGridOverlayStyle> @ 14d890730

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSampledSequenceValueGridOverlayStyle>(void *param_1)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FName FStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  FVar2 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  FVar2 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,(longlong)param_1 + 0x38,FVar1,0);
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x44340000;
  return;
}

// Destruct<FSampledSequenceValueGridOverlayStyle> @ 14d890740

void __cdecl
UE::CoreUObject::Private::Destruct<FSampledSequenceValueGridOverlayStyle>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Construct<FAudioMaterialMeterStyle> @ 14d890770

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialMeterStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  TVector2<double> TVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::MeterFillMinColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillMidColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialMeterStyle__6B_;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillBackgroundColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (TVector2<double>_u_0_s_0)AudioWidgets::SlateTypesPrivate::MeterPadding.field0_0x0;
  TVar3 = AudioWidgets::SlateTypesPrivate::MeterValueRangeDb;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40a00000;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x68))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 5;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0x90),5);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4400000041c80000;
  return;
}

// Copy<FSampledSequenceValueGridOverlayStyle> @ 14d890780

bool __cdecl
UE::CoreUObject::Private::Copy<FSampledSequenceValueGridOverlayStyle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0x38),
               (FSlateFontInfo *)((longlong)param_2 + 0x38));
    *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_1 = (void *)((longlong)param_1 + 0xa0);
    param_2 = (void *)((longlong)param_2 + 0xa0);
  }
  return true;
}

// ConstructForTests<FAudioMaterialMeterStyle> @ 14d890860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialMeterStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  TVector2<double> TVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::MeterFillMinColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillMidColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialMeterStyle__6B_;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillBackgroundColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (TVector2<double>_u_0_s_0)AudioWidgets::SlateTypesPrivate::MeterPadding.field0_0x0;
  TVar3 = AudioWidgets::SlateTypesPrivate::MeterValueRangeDb;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40a00000;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x68))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 5;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0x90),5);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4400000041c80000;
  return;
}

// Destruct<FAudioMaterialMeterStyle> @ 14d890870

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialMeterStyle>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 200));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioMaterialMeterStyle> @ 14d8908a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialMeterStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x10) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x48) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x58) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x60) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x68) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x70) = uVar2;
    *(undefined1 *)((longlong)pvVar3 + 0x78) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x79) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x79 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x7c) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x7c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x80) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x84) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x84 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x88) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x88 - (longlong)param_1));
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)pvVar3 + 0x90),
               (FSlateFontInfo *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1))
              );
    pvVar3 = (void *)((longlong)pvVar3 + 0xf0);
  }
  return true;
}

// Construct<FAudioVectorscopePanelStyle> @ 14d890ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FAudioVectorscopePanelStyle>(void *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  uint uVar3;
  FName *pFVar4;
  ISlateStyle *pIVar5;
  FSampledSequenceVectorViewerStyle *pFVar6;
  FName FStackX_8;
  uint uStack_108;
  undefined1 auStack_f8 [40];
  FLinearColor_u_0 FStack_d0;
  FSlateFontInfo FStack_c0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioVectorscopePanelStyle__6B_;
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            ((FSampledSequenceValueGridOverlayStyle *)((longlong)param_1 + 8));
  FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
            ((FSampledSequenceVectorViewerStyle *)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  auStack_f8._24_4_ = auStack_f8._24_4_ & 0xffffff00;
  auStack_f8._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  auStack_f8._28_4_ = 0x3f800000;
  auStack_f8._8_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  FStack_d0._s_0.B = (float)((uint)FStack_d0._s_0.B & 0xffffff00);
  stack0xffffffffffffff28 = FLinearColor::White.field0_0x0;
  pFVar4 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar4;
  pIVar5 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5,&FStack_c0,FVar1,0);
  auStack_f8._16_8_ = _UNK_152c289e8;
  auStack_f8._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x18) = auStack_f8._16_8_;
  uVar3 = uStack_108 >> 8;
  uStack_108 = uVar3 << 8;
  auStack_f8._24_4_ = uStack_108;
  *(uint *)((longlong)param_1 + 0x20) = uStack_108;
  *(undefined8 *)((longlong)param_1 + 0x28) = auStack_f8._32_8_;
  *(undefined8 *)((longlong)param_1 + 0x30) = FStack_d0._0_8_;
  *(float *)((longlong)param_1 + 0x38) = FStack_d0._s_0.B;
  uStack_60._0_1_ = '\0';
  uStack_60._1_1_ = false;
  uStack_60._2_2_ = 0x44a0;
  uStack_5c = 0x44340000;
  auStack_f8._28_4_ = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  FSlateFontInfo::operator=((FSlateFontInfo *)((longlong)param_1 + 0x40),&FStack_c0);
  *(undefined4 *)((longlong)param_1 + 0xa0) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_5c;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  pFVar6 = FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
                     ((FSampledSequenceVectorViewerStyle *)auStack_f8);
  uVar2 = _UNK_152c28a08;
  uStack_108 = uVar3 << 8;
  *(undefined8 *)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003b712c283b9ca18c3b32e9cd;
  *(undefined8 *)((longlong)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (pFVar6->BackgroundColor).ColorUseRule = (undefined1)uStack_108;
  (pFVar6->BackgroundColor).ColorTableId = uStack_108._1_1_;
  *(undefined2 *)&(pFVar6->BackgroundColor).field_0x12 = uStack_108._2_2_;
  (pFVar6->LineColor).field0_0x0._s_0.R = 0.0075;
  (pFVar6->LineColor).field0_0x0._s_0.G = 0.57758;
  (pFVar6->LineColor).field0_0x0._s_0.B = 0.05448;
  (pFVar6->LineColor).field0_0x0._s_0.A = 1.0;
  pFVar6->LineThickness = 2.5;
  uVar2 = *(undefined8 *)((longlong)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0xb8) =
       *(undefined8 *)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)&(pFVar6->BackgroundColor).ColorUseRule;
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0xd0),&pFVar6->BackgroundBrush);
  uVar2 = *(undefined8 *)((longlong)&(pFVar6->LineColor).field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)&(pFVar6->LineColor).field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x188) = uVar2;
  *(float *)((longlong)param_1 + 400) = pFVar6->LineThickness;
  auStack_f8._32_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  return;
}

// ConstructForTests<FAudioVectorscopePanelStyle> @ 14d890ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioVectorscopePanelStyle>(void *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  uint uVar3;
  FName *pFVar4;
  ISlateStyle *pIVar5;
  FSampledSequenceVectorViewerStyle *pFVar6;
  FName FStackX_8;
  uint uStack_108;
  undefined1 auStack_f8 [40];
  FLinearColor_u_0 FStack_d0;
  FSlateFontInfo FStack_c0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioVectorscopePanelStyle__6B_;
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            ((FSampledSequenceValueGridOverlayStyle *)((longlong)param_1 + 8));
  FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
            ((FSampledSequenceVectorViewerStyle *)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  auStack_f8._24_4_ = auStack_f8._24_4_ & 0xffffff00;
  auStack_f8._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  auStack_f8._28_4_ = 0x3f800000;
  auStack_f8._8_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  FStack_d0._s_0.B = (float)((uint)FStack_d0._s_0.B & 0xffffff00);
  stack0xffffffffffffff28 = FLinearColor::White.field0_0x0;
  pFVar4 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar4;
  pIVar5 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5,&FStack_c0,FVar1,0);
  auStack_f8._16_8_ = _UNK_152c289e8;
  auStack_f8._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x18) = auStack_f8._16_8_;
  uVar3 = uStack_108 >> 8;
  uStack_108 = uVar3 << 8;
  auStack_f8._24_4_ = uStack_108;
  *(uint *)((longlong)param_1 + 0x20) = uStack_108;
  *(undefined8 *)((longlong)param_1 + 0x28) = auStack_f8._32_8_;
  *(undefined8 *)((longlong)param_1 + 0x30) = FStack_d0._0_8_;
  *(float *)((longlong)param_1 + 0x38) = FStack_d0._s_0.B;
  uStack_60._0_1_ = '\0';
  uStack_60._1_1_ = false;
  uStack_60._2_2_ = 0x44a0;
  uStack_5c = 0x44340000;
  auStack_f8._28_4_ = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  FSlateFontInfo::operator=((FSlateFontInfo *)((longlong)param_1 + 0x40),&FStack_c0);
  *(undefined4 *)((longlong)param_1 + 0xa0) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_5c;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  pFVar6 = FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
                     ((FSampledSequenceVectorViewerStyle *)auStack_f8);
  uVar2 = _UNK_152c28a08;
  uStack_108 = uVar3 << 8;
  *(undefined8 *)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003b712c283b9ca18c3b32e9cd;
  *(undefined8 *)((longlong)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (pFVar6->BackgroundColor).ColorUseRule = (undefined1)uStack_108;
  (pFVar6->BackgroundColor).ColorTableId = uStack_108._1_1_;
  *(undefined2 *)&(pFVar6->BackgroundColor).field_0x12 = uStack_108._2_2_;
  (pFVar6->LineColor).field0_0x0._s_0.R = 0.0075;
  (pFVar6->LineColor).field0_0x0._s_0.G = 0.57758;
  (pFVar6->LineColor).field0_0x0._s_0.B = 0.05448;
  (pFVar6->LineColor).field0_0x0._s_0.A = 1.0;
  pFVar6->LineThickness = 2.5;
  uVar2 = *(undefined8 *)((longlong)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0xb8) =
       *(undefined8 *)&(pFVar6->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)&(pFVar6->BackgroundColor).ColorUseRule;
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0xd0),&pFVar6->BackgroundBrush);
  uVar2 = *(undefined8 *)((longlong)&(pFVar6->LineColor).field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)&(pFVar6->LineColor).field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x188) = uVar2;
  *(float *)((longlong)param_1 + 400) = pFVar6->LineThickness;
  auStack_f8._32_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_f8);
  return;
}

// Destruct<FAudioVectorscopePanelStyle> @ 14d890ad0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioVectorscopePanelStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioVectorscopePanelStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xd0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x170));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x78));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 8));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioVectorscopePanelStyle> @ 14d890c20

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioVectorscopePanelStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0x40),
               (FSlateFontInfo *)((longlong)param_2 + 0x40));
    *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xc0);
    *(undefined8 *)((longlong)param_1 + 0xb8) = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0xc0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)((longlong)param_2 + 200);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xd0),(FSlateBrush *)((longlong)param_2 + 0xd0));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x188);
    *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_2 + 0x180);
    *(undefined8 *)((longlong)param_1 + 0x188) = uVar1;
    *(undefined4 *)((longlong)param_1 + 400) = *(undefined4 *)((longlong)param_2 + 400);
    param_1 = (void *)((longlong)param_1 + 0x1a0);
    param_2 = (void *)((longlong)param_2 + 0x1a0);
  }
  return true;
}

// Construct<FAudioMaterialKnobStyle> @ 14d890d20

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialKnobStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobMainColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobAccentColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialKnobStyle__6B_;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobSmoothBevelColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobIndicatorDotColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobEdgeFillColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x68))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x78))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMinColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x88))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillMidColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x98))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMaxColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillTintColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FAudioTextBoxStyle::FAudioTextBoxStyle((FAudioTextBoxStyle *)((longlong)param_1 + 0xe0));
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4300000043000000;
  return;
}

// ConstructForTests<FAudioMaterialKnobStyle> @ 14d890d70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialKnobStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobMainColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobAccentColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialKnobStyle__6B_;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobSmoothBevelColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobIndicatorDotColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobEdgeFillColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x68))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x78))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMinColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x88))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillMidColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x98))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMaxColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillTintColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FAudioTextBoxStyle::FAudioTextBoxStyle((FAudioTextBoxStyle *)((longlong)param_1 + 0xe0));
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4300000043000000;
  return;
}

// Destruct<FAudioMaterialKnobStyle> @ 14d890dc0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialKnobStyle>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0xe0) = &___7FAudioTextBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xf0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 400));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0xe0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioMaterialKnobStyle> @ 14d890e20

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialKnobStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x10) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x48) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x58) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x60) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x68) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x78) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x80) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x88) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x90) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x98) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xa8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xb0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xb8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xc0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 200) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xd0) = uVar2;
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar3 + 0xf0),
               (FSlateBrush *)((longlong)pvVar3 + (longlong)param_2 + (0xf0 - (longlong)param_1)));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x1a8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x1a0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x1a0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x1a8) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x1b0) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x1b0 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x1c0);
  }
  return true;
}

// Construct<FAudioOscilloscopePanelStyle> @ 14d891120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FAudioOscilloscopePanelStyle>(void *param_1)

{
  FName FVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  FFixedSampleSequenceRulerStyle *pFVar7;
  FName *pFVar8;
  ISlateStyle *pIVar9;
  FSampledSequenceViewerStyle *pFVar10;
  FName FStackX_8;
  FSlateWidgetStyle FStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined4 uStack_230;
  float fStack_22c;
  FLinearColor_u_0 FStack_228;
  undefined4 uStack_218;
  undefined1 auStack_210 [96];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TVector4<double>_u_0 aTStack_188 [3];
  undefined8 uStack_128;
  FSharedReferencer<1> FStack_118;
  undefined **ppuStack_d8;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioOscilloscopePanelStyle__6B_;
  FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
            ((FFixedSampleSequenceRulerStyle *)((longlong)param_1 + 0x10));
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            ((FSampledSequenceValueGridOverlayStyle *)((longlong)param_1 + 0x240));
  FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
            ((FSampledSequenceViewerStyle *)((longlong)param_1 + 0x2e0));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x420) = &___7FTriggerThresholdLineStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x428))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pFVar7 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
                     ((FFixedSampleSequenceRulerStyle *)auStack_248);
  uVar4 = _UNK_15076b1f8;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  (pFVar7->TicksColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uStack_258 = uVar2 << 8;
  (pFVar7->TicksTextColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksTextColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksTextColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 + 8) = 0;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar7->HandleColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->HandleColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->HandleColor).field_0x12 = uStack_258._2_2_;
  (pFVar7->TicksTextFont).Size = 10.0;
  uStack_258 = uVar2;
  FFixedSampleSequenceRulerStyle::operator=
            ((FFixedSampleSequenceRulerStyle *)((longlong)param_1 + 0x10),pFVar7);
  ppuStack_d8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118.ReferenceController);
  FStack_228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)aTStack_188[0]._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  uStack_230 = uStack_230 & 0xffffff00;
  auStack_248._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  fStack_22c = 1.0;
  stack0xfffffffffffffdc0 = FLinearColor::Black.field0_0x0;
  uStack_218 = uStack_218 & 0xffffff00;
  FStack_228 = FLinearColor::White.field0_0x0;
  pFVar8 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar8;
  pIVar9 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,auStack_210,FVar1,0);
  uVar5 = _UNK_152c28a48;
  uVar4 = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  uVar3 = _UNK_152c289e8;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  fVar6 = (float)uStack_258;
  uStack_238 = _UNK_152c289e8;
  auStack_248._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  uStack_1b0._0_1_ = UseColor_Specified;
  uStack_1b0._1_1_ = Black;
  uStack_1b0._2_2_ = 0x44a0;
  FStack_228._8_8_ = _UNK_152c28a48;
  FStack_228._0_8_ = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  uStack_1ac._0_1_ = '\0';
  uStack_1ac._1_1_ = '\0';
  uStack_1ac._2_1_ = '4';
  uStack_1ac._3_1_ = 'D';
  uStack_230 = (float)uStack_258;
  fStack_22c = 1.0;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)((longlong)param_1 + 0x248) = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x250) = uVar3;
  *(float *)((longlong)param_1 + 600) = fVar6;
  *(undefined8 *)((longlong)param_1 + 0x260) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x268) = uVar5;
  uStack_218 = (float)uStack_258;
  auStack_210._72_4_ = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(float *)((longlong)param_1 + 0x270) = (float)uStack_258;
  FSlateFontInfo::operator=
            ((FSlateFontInfo *)((longlong)param_1 + 0x278),(FSlateFontInfo *)auStack_210);
  *(undefined4 *)((longlong)param_1 + 0x2d8) = uStack_1b0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_1ac;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_210._56_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  pFVar10 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
                      ((FSampledSequenceViewerStyle *)auStack_248);
  uVar3 = _UNK_152c28a58;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f0ccccd3f8000003dcccccd;
  *(undefined8 *)((longlong)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  (pFVar10->SequenceColor).ColorUseRule = (undefined1)uStack_258;
  uVar3 = _UNK_152c28a18;
  (pFVar10->SequenceColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003c23d70a3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar3;
  uVar4 = _UNK_1509252c8;
  uVar3 = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->SequenceBackgroundColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->SequenceBackgroundColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceBackgroundColor).field_0x12 = uStack_258._2_2_;
  pFVar10->SequenceLineThickness = 2.0;
  pFVar10->ZeroCrossingLineThickness = 1.0;
  pFVar10->SampleMarkersSize = 0.0;
  *(undefined8 *)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_152c28a28;
  uVar3 = ___xmm_3f8000003d4ccccd3d4ccccd3d4ccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->MajorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MajorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MajorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_150be3b28;
  uVar3 = ___xmm_3f8000003e99999a3e99999a3e99999a;
  uStack_258 = uVar2 << 8;
  (pFVar10->MinorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MinorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MinorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4
  ;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->ZeroCrossingLineColor).field_0x12 = uStack_258._2_2_;
  uStack_258 = uVar2;
  FSampledSequenceViewerStyle::operator=
            ((FSampledSequenceViewerStyle *)((longlong)param_1 + 0x2e0),pFVar10);
  auStack_210._72_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uStack_128);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  FSlateWidgetStyle::FSlateWidgetStyle(&FStack_268);
  uVar3 = _UNK_152c28a38;
  uStack_260 = ___xmm_3f8000003eae147b3f68f5c33f800000;
  uStack_258 = _UNK_152c28a38;
  FStack_268 = (FSlateWidgetStyle)&___7FTriggerThresholdLineStyle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x428) = ___xmm_3f8000003eae147b3f68f5c33f800000;
  *(undefined8 *)((longlong)param_1 + 0x430) = uVar3;
  FSlateWidgetStyle::~FSlateWidgetStyle(&FStack_268);
  return;
}

// ConstructForTests<FAudioOscilloscopePanelStyle> @ 14d891130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAudioOscilloscopePanelStyle>(void *param_1)

{
  FName FVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  FFixedSampleSequenceRulerStyle *pFVar7;
  FName *pFVar8;
  ISlateStyle *pIVar9;
  FSampledSequenceViewerStyle *pFVar10;
  FName FStackX_8;
  FSlateWidgetStyle FStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined4 uStack_230;
  float fStack_22c;
  FLinearColor_u_0 FStack_228;
  undefined4 uStack_218;
  undefined1 auStack_210 [96];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TVector4<double>_u_0 aTStack_188 [3];
  undefined8 uStack_128;
  FSharedReferencer<1> FStack_118;
  undefined **ppuStack_d8;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioOscilloscopePanelStyle__6B_;
  FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
            ((FFixedSampleSequenceRulerStyle *)((longlong)param_1 + 0x10));
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            ((FSampledSequenceValueGridOverlayStyle *)((longlong)param_1 + 0x240));
  FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
            ((FSampledSequenceViewerStyle *)((longlong)param_1 + 0x2e0));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x420) = &___7FTriggerThresholdLineStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x428))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pFVar7 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
                     ((FFixedSampleSequenceRulerStyle *)auStack_248);
  uVar4 = _UNK_15076b1f8;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  (pFVar7->TicksColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uStack_258 = uVar2 << 8;
  (pFVar7->TicksTextColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksTextColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksTextColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 + 8) = 0;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar7->HandleColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->HandleColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->HandleColor).field_0x12 = uStack_258._2_2_;
  (pFVar7->TicksTextFont).Size = 10.0;
  uStack_258 = uVar2;
  FFixedSampleSequenceRulerStyle::operator=
            ((FFixedSampleSequenceRulerStyle *)((longlong)param_1 + 0x10),pFVar7);
  ppuStack_d8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118.ReferenceController);
  FStack_228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)aTStack_188[0]._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  uStack_230 = uStack_230 & 0xffffff00;
  auStack_248._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  fStack_22c = 1.0;
  stack0xfffffffffffffdc0 = FLinearColor::Black.field0_0x0;
  uStack_218 = uStack_218 & 0xffffff00;
  FStack_228 = FLinearColor::White.field0_0x0;
  pFVar8 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar8;
  pIVar9 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,auStack_210,FVar1,0);
  uVar5 = _UNK_152c28a48;
  uVar4 = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  uVar3 = _UNK_152c289e8;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  fVar6 = (float)uStack_258;
  uStack_238 = _UNK_152c289e8;
  auStack_248._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  uStack_1b0._0_1_ = UseColor_Specified;
  uStack_1b0._1_1_ = Black;
  uStack_1b0._2_2_ = 0x44a0;
  FStack_228._8_8_ = _UNK_152c28a48;
  FStack_228._0_8_ = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  uStack_1ac._0_1_ = '\0';
  uStack_1ac._1_1_ = '\0';
  uStack_1ac._2_1_ = '4';
  uStack_1ac._3_1_ = 'D';
  uStack_230 = (float)uStack_258;
  fStack_22c = 1.0;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)((longlong)param_1 + 0x248) = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x250) = uVar3;
  *(float *)((longlong)param_1 + 600) = fVar6;
  *(undefined8 *)((longlong)param_1 + 0x260) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x268) = uVar5;
  uStack_218 = (float)uStack_258;
  auStack_210._72_4_ = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(float *)((longlong)param_1 + 0x270) = (float)uStack_258;
  FSlateFontInfo::operator=
            ((FSlateFontInfo *)((longlong)param_1 + 0x278),(FSlateFontInfo *)auStack_210);
  *(undefined4 *)((longlong)param_1 + 0x2d8) = uStack_1b0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_1ac;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_210._56_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  pFVar10 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
                      ((FSampledSequenceViewerStyle *)auStack_248);
  uVar3 = _UNK_152c28a58;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f0ccccd3f8000003dcccccd;
  *(undefined8 *)((longlong)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  (pFVar10->SequenceColor).ColorUseRule = (undefined1)uStack_258;
  uVar3 = _UNK_152c28a18;
  (pFVar10->SequenceColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003c23d70a3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar3;
  uVar4 = _UNK_1509252c8;
  uVar3 = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->SequenceBackgroundColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->SequenceBackgroundColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceBackgroundColor).field_0x12 = uStack_258._2_2_;
  pFVar10->SequenceLineThickness = 2.0;
  pFVar10->ZeroCrossingLineThickness = 1.0;
  pFVar10->SampleMarkersSize = 0.0;
  *(undefined8 *)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_152c28a28;
  uVar3 = ___xmm_3f8000003d4ccccd3d4ccccd3d4ccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->MajorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MajorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MajorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_150be3b28;
  uVar3 = ___xmm_3f8000003e99999a3e99999a3e99999a;
  uStack_258 = uVar2 << 8;
  (pFVar10->MinorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MinorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MinorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4
  ;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->ZeroCrossingLineColor).field_0x12 = uStack_258._2_2_;
  uStack_258 = uVar2;
  FSampledSequenceViewerStyle::operator=
            ((FSampledSequenceViewerStyle *)((longlong)param_1 + 0x2e0),pFVar10);
  auStack_210._72_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uStack_128);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)auStack_248);
  FSlateWidgetStyle::FSlateWidgetStyle(&FStack_268);
  uVar3 = _UNK_152c28a38;
  uStack_260 = ___xmm_3f8000003eae147b3f68f5c33f800000;
  uStack_258 = _UNK_152c28a38;
  FStack_268 = (FSlateWidgetStyle)&___7FTriggerThresholdLineStyle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x428) = ___xmm_3f8000003eae147b3f68f5c33f800000;
  *(undefined8 *)((longlong)param_1 + 0x430) = uVar3;
  FSlateWidgetStyle::~FSlateWidgetStyle(&FStack_268);
  return;
}

// Destruct<FAudioOscilloscopePanelStyle> @ 14d891140

void __cdecl UE::CoreUObject::Private::Destruct<FAudioOscilloscopePanelStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioOscilloscopePanelStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x360) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x400));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x2e0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2b0));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x240));
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x220));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x140));
  *(undefined ***)((longlong)param_1 + 0x30) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xd0));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioOscilloscopePanelStyle> @ 14d891390

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioOscilloscopePanelStyle>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FFixedSampleSequenceRulerStyle::operator=
              ((FFixedSampleSequenceRulerStyle *)((longlong)pvVar3 + 0x10),
               (FFixedSampleSequenceRulerStyle *)((longlong)pvVar1 + 0x10));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x250 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x248) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x248 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x250) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 600) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (600 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x25c) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x25c - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x268 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x260) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x260 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x268) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x270) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x270 - (longlong)param_1));
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)pvVar3 + 0x278),
               (FSlateFontInfo *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x278 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar3 + 0x2d8) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x2d8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x2dc) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x2dc - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2f0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2e8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x2e8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x2f0) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x2f8) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x2f8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x2fc) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x2fc - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x308 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x300) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x300 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x308) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x310) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x310 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x31c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x314) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x314 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x31c) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x324) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x324 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x330 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x328) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x328 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x330) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x338) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x338 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x33c) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x33c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x340) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x340 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x34c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x344) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x344 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x34c) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x354) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x354 - (longlong)param_1));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar3 + 0x360),
               (FSlateBrush *)((longlong)pvVar3 + (longlong)param_2 + (0x360 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x440);
    *(undefined4 *)((longlong)pvVar3 + 0x410) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x410 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x414) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x414 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x430 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x428) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x428 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x430) = uVar2;
    pvVar3 = (void *)((longlong)pvVar3 + 0x440);
  }
  return true;
}

// Construct<FFixedSampleSequenceRulerStyle> @ 14d8916a0

void __cdecl UE::CoreUObject::Private::Construct<FFixedSampleSequenceRulerStyle>(void *param_1)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FSlateBrush *pFVar5;
  FName FStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0x41700000;
  *(undefined ***)param_1 = &___7FFixedSampleSequenceRulerStyle__6B_;
  FVar2 = AudioWidgetStylesSharedParams::PlayheadColor;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  *(undefined1 *)((longlong)param_1 + 0xe0) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xd0))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xe4))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,(longlong)param_1 + 0xf8,FVar1,0);
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x40a00000;
  FVar2 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x15c))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar4 = FAppStyle::Get();
  pFVar5 = (FSlateBrush *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FStackX_8,0,0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar5);
  *(undefined4 *)((longlong)param_1 + 0x220) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x41f00000;
  return;
}

// ConstructForTests<FFixedSampleSequenceRulerStyle> @ 14d8916b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFixedSampleSequenceRulerStyle>(void *param_1)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FSlateBrush *pFVar5;
  FName FStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0x41700000;
  *(undefined ***)param_1 = &___7FFixedSampleSequenceRulerStyle__6B_;
  FVar2 = AudioWidgetStylesSharedParams::PlayheadColor;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  *(undefined1 *)((longlong)param_1 + 0xe0) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xd0))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xe4))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&FStackX_8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,(longlong)param_1 + 0xf8,FVar1,0);
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x40a00000;
  FVar2 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x15c))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar4 = FAppStyle::Get();
  pFVar5 = (FSlateBrush *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FStackX_8,0,0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar5);
  *(undefined4 *)((longlong)param_1 + 0x220) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x41f00000;
  return;
}

// Destruct<FFixedSampleSequenceRulerStyle> @ 14d8916c0

void __cdecl UE::CoreUObject::Private::Destruct<FFixedSampleSequenceRulerStyle>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x130));
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xc0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FFixedSampleSequenceRulerStyle> @ 14d891720

bool __cdecl
UE::CoreUObject::Private::Copy<FFixedSampleSequenceRulerStyle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x20),(FSlateBrush *)((longlong)param_2 + 0x20));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 0xe0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xec);
    *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
    *(undefined8 *)((longlong)param_1 + 0xec) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0xf8),
               (FSlateFontInfo *)((longlong)param_2 + 0xf8));
    *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)((longlong)param_2 + 0x158);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x164);
    *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x15c);
    *(undefined8 *)((longlong)param_1 + 0x164) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    *(undefined4 *)((longlong)param_1 + 0x220) = *(undefined4 *)((longlong)param_2 + 0x220);
    *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
    param_1 = (void *)((longlong)param_1 + 0x230);
    param_2 = (void *)((longlong)param_2 + 0x230);
  }
  return true;
}

// Construct<FAudioMaterialSliderStyle> @ 14d891850

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  FLinearColor FVar4;
  FAudioTextBoxStyle *pFVar5;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar2 = AudioWidgets::SlateTypesPrivate::SliderBackgroundColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar3 = AudioWidgets::SlateTypesPrivate::SliderBackgroundAccentColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialSliderStyle__6B_;
  FVar4 = AudioWidgets::SlateTypesPrivate::SliderValueMainColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::SliderHandleMainColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  FVar3 = AudioWidgets::SlateTypesPrivate::SliderHandleOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  pFVar5 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x70) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80),&pFVar5->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x130) =
       *(undefined8 *)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x140) =
       *(undefined4 *)&(pFVar5->BackgroundColor).ColorUseRule;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x437a000041c80000;
  return;
}

// ConstructForTests<FAudioMaterialSliderStyle> @ 14d891860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  FLinearColor FVar4;
  FAudioTextBoxStyle *pFVar5;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar2 = AudioWidgets::SlateTypesPrivate::SliderBackgroundColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar3 = AudioWidgets::SlateTypesPrivate::SliderBackgroundAccentColor;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined ***)param_1 = &___7FAudioMaterialSliderStyle__6B_;
  FVar4 = AudioWidgets::SlateTypesPrivate::SliderValueMainColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::SliderHandleMainColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  FVar3 = AudioWidgets::SlateTypesPrivate::SliderHandleOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  pFVar5 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x70) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80),&pFVar5->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x130) =
       *(undefined8 *)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x140) =
       *(undefined4 *)&(pFVar5->BackgroundColor).ColorUseRule;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x437a000041c80000;
  return;
}

// Destruct<FAudioMaterialSliderStyle> @ 14d891870

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialSliderStyle>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x70) = &___7FAudioTextBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x120));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x70));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioMaterialSliderStyle> @ 14d891910

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialSliderStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x10) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x48) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x58) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x60) = uVar2;
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar3 + 0x80),
               (FSlateBrush *)((longlong)pvVar3 + (longlong)param_2 + (0x80 - (longlong)param_1)));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x138 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x130) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x130 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x138) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x140) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x140 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x150);
  }
  return true;
}

// Construct<FMeterChannelInfo> @ 14d891c00

void __cdecl UE::CoreUObject::Private::Construct<FMeterChannelInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMeterChannelInfo> @ 14d891c10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMeterChannelInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMeterChannelInfo> @ 14d891c20

void __cdecl UE::CoreUObject::Private::Destruct<FMeterChannelInfo>(void *param_1)

{
  return;
}

// Copy<FMeterChannelInfo> @ 14d891c30

bool __cdecl
UE::CoreUObject::Private::Copy<FMeterChannelInfo>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlayheadOverlayStyle> @ 14d891c70

void __cdecl UE::CoreUObject::Private::Construct<FPlayheadOverlayStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FPlayheadOverlayStyle__6B_;
  FVar1 = AudioWidgetStylesSharedParams::PlayheadColor;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x44340000;
  return;
}

// ConstructForTests<FPlayheadOverlayStyle> @ 14d891d00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlayheadOverlayStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FPlayheadOverlayStyle__6B_;
  FVar1 = AudioWidgetStylesSharedParams::PlayheadColor;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x44340000;
  return;
}

// Destruct<FPlayheadOverlayStyle> @ 14d891d50

void __cdecl UE::CoreUObject::Private::Destruct<FPlayheadOverlayStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FPlayheadOverlayStyle> @ 14d891d60

bool __cdecl
UE::CoreUObject::Private::Copy<FPlayheadOverlayStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar1 = (undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar3);
    uVar2 = puVar1[1];
    *(undefined8 *)((longlong)pvVar3 + 8) = *puVar1;
    *(undefined8 *)((longlong)pvVar3 + 0x10) = uVar2;
    *(undefined4 *)((longlong)pvVar3 + 0x18) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x1c) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x20) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x24) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x24 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x28);
  }
  return true;
}

// Construct<FAudioMaterialButtonStyle> @ 14d891ec0

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialButtonStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonMainColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar3 = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1;
  *(undefined ***)param_1 = &___7FAudioMaterialButtonStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 =
       (FLinearColor_u_0_s_0)AudioWidgets::SlateTypesPrivate::ButtonMainColorTint2.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4300000043000000;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonAccentColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonPressedOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonUnpressedOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x78))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x68))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ConstructForTests<FAudioMaterialButtonStyle> @ 14d891ed0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialButtonStyle>(void *param_1)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonMainColor;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FVar3 = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1;
  *(undefined ***)param_1 = &___7FAudioMaterialButtonStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 =
       (FLinearColor_u_0_s_0)AudioWidgets::SlateTypesPrivate::ButtonMainColorTint2.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4300000043000000;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonShadowColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonAccentColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonPressedOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonUnpressedOutlineColor;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x78))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x68))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FAudioMaterialButtonStyle> @ 14d891ee0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialButtonStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FAudioMaterialButtonStyle> @ 14d891f70

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialButtonStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x10) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x48) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x58) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x60) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x68) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x78) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x80) = uVar2;
    pvVar3 = (void *)((longlong)pvVar3 + 0x88);
  }
  return true;
}

// Construct<FAudioMaterialEnvelopeSettings> @ 14d892200

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialEnvelopeSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// ConstructForTests<FAudioMaterialEnvelopeSettings> @ 14d892250

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAudioMaterialEnvelopeSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// Destruct<FAudioMaterialEnvelopeSettings> @ 14d892360

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialEnvelopeSettings>(void *param_1)

{
  return;
}

// Copy<FAudioMaterialEnvelopeSettings> @ 14d8924b0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialEnvelopeSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSampledSequenceViewerStyle> @ 14d892530

void __cdecl UE::CoreUObject::Private::Construct<FSampledSequenceViewerStyle>(void *param_1)

{
  FLinearColor FVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  undefined8 uStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceViewerStyle__6B_;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar2 = FAppStyle::Get();
  pFVar3 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,uStackX_8,0,0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80),pFVar3);
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x44340000;
  return;
}

// ConstructForTests<FSampledSequenceViewerStyle> @ 14d892540

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSampledSequenceViewerStyle>(void *param_1)

{
  FLinearColor FVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  undefined8 uStackX_8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSampledSequenceViewerStyle__6B_;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x48))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar2 = FAppStyle::Get();
  pFVar3 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,uStackX_8,0,0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80),pFVar3);
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x44a00000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x44340000;
  return;
}

// Destruct<FSampledSequenceViewerStyle> @ 14d892550

void __cdecl UE::CoreUObject::Private::Destruct<FSampledSequenceViewerStyle>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x120));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSampledSequenceViewerStyle> @ 14d892590

bool __cdecl
UE::CoreUObject::Private::Copy<FSampledSequenceViewerStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x3c);
    *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x3c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x6c);
    *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
    *(undefined8 *)((longlong)param_1 + 0x6c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x80),(FSlateBrush *)((longlong)param_2 + 0x80));
    *(undefined4 *)((longlong)param_1 + 0x130) = *(undefined4 *)((longlong)param_2 + 0x130);
    *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
    param_1 = (void *)((longlong)param_1 + 0x140);
    param_2 = (void *)((longlong)param_2 + 0x140);
  }
  return true;
}

// Construct<FAudioMaterialWidgetStyle> @ 14d892880

void __cdecl UE::CoreUObject::Private::Construct<FAudioMaterialWidgetStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioMaterialWidgetStyle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  return;
}

// ConstructForTests<FAudioMaterialWidgetStyle> @ 14d8928c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMaterialWidgetStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioMaterialWidgetStyle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42000000;
  return;
}

// Destruct<FAudioMaterialWidgetStyle> @ 14d892900

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMaterialWidgetStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FAudioMaterialWidgetStyle> @ 14d892910

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMaterialWidgetStyle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FAudioRadialSliderStyle> @ 14d892d40

void __cdecl UE::CoreUObject::Private::Construct<FAudioRadialSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FAudioTextBoxStyle *pFVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioRadialSliderStyle__6B_;
  pFVar2 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20),&pFVar2->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0xd0) =
       *(undefined8 *)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)&(pFVar2->BackgroundColor).ColorUseRule
  ;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xf0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x100) = FStyleColors::Recessed._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x104))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x114) = FStyleColors::AccentGray._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x118))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x128) = FStyleColors::White._16_4_;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x42480000;
  return;
}

// ConstructForTests<FAudioRadialSliderStyle> @ 14d892d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioRadialSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FAudioTextBoxStyle *pFVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioRadialSliderStyle__6B_;
  pFVar2 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20),&pFVar2->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0xd0) =
       *(undefined8 *)&(pFVar2->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)&(pFVar2->BackgroundColor).ColorUseRule
  ;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xf0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x100) = FStyleColors::Recessed._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x104))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x114) = FStyleColors::AccentGray._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x118))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x128) = FStyleColors::White._16_4_;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x42480000;
  return;
}

// Destruct<FAudioRadialSliderStyle> @ 14d892d60

void __cdecl UE::CoreUObject::Private::Destruct<FAudioRadialSliderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioRadialSliderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FAudioTextBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xc0));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioRadialSliderStyle> @ 14d892e10

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioRadialSliderStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = param_1;
  pvVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x20),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd8) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0xe0) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0xe0 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0xf8);
    *(undefined8 *)((longlong)pvVar2 + 0xf0) = *(undefined8 *)((longlong)pvVar3 + 0xf0);
    *(undefined8 *)((longlong)pvVar2 + 0xf8) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x100) = *(undefined4 *)((longlong)pvVar3 + 0x100);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x10c);
    *(undefined8 *)((longlong)pvVar2 + 0x104) = *(undefined8 *)((longlong)pvVar3 + 0x104);
    *(undefined8 *)((longlong)pvVar2 + 0x10c) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x114) = *(undefined4 *)((longlong)pvVar3 + 0x114);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x120);
    *(undefined8 *)((longlong)pvVar2 + 0x118) = *(undefined8 *)((longlong)pvVar3 + 0x118);
    *(undefined8 *)((longlong)pvVar2 + 0x120) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x128) = *(undefined4 *)((longlong)pvVar3 + 0x128);
    *(undefined4 *)((longlong)pvVar2 + 300) = *(undefined4 *)((longlong)pvVar3 + 300);
    *(undefined4 *)((longlong)pvVar2 + 0x130) = *(undefined4 *)((longlong)pvVar3 + 0x130);
    pvVar2 = (void *)((longlong)pvVar2 + 0x140);
    pvVar3 = (void *)((longlong)pvVar3 + 0x140);
  }
  return true;
}

// Construct<FAudioSliderStyle> @ 14d893380

void __cdecl UE::CoreUObject::Private::Construct<FAudioSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FSliderStyle *pFVar2;
  FAudioTextBoxStyle *pFVar3;
  TVector2<float>_u_0 TStackX_8;
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioSliderStyle__6B_;
  pFVar2 = FSliderStyle::GetDefault();
  FSliderStyle::FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10),pFVar2);
  pFVar3 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x460),&pFVar3->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar3->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x510) =
       *(undefined8 *)&(pFVar3->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x518) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x520) =
       *(undefined4 *)&(pFVar3->BackgroundColor).ColorUseRule;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,NoDrawType,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_b8.bIsSet = '\0';
  FStack_b8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x530),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x5e0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x5f0) = FStyleColors::AccentGray._16_4_;
  *(undefined8 *)((longlong)param_1 + 0x5f8) = 0x403c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x600) = 0x407c200000000000;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60c))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = FStyleColors::Black._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x620))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x630) = FStyleColors::White._16_4_;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x640) = 0x3f800000;
  return;
}

// ConstructForTests<FAudioSliderStyle> @ 14d893390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioSliderStyle>(void *param_1)

{
  undefined8 uVar1;
  FSliderStyle *pFVar2;
  FAudioTextBoxStyle *pFVar3;
  TVector2<float>_u_0 TStackX_8;
  FMargin FStack_c8;
  FSlateBrush FStack_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioSliderStyle__6B_;
  pFVar2 = FSliderStyle::GetDefault();
  FSliderStyle::FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10),pFVar2);
  pFVar3 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x460),&pFVar3->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar3->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)((longlong)param_1 + 0x510) =
       *(undefined8 *)&(pFVar3->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x518) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x520) =
       *(undefined4 *)&(pFVar3->BackgroundColor).ColorUseRule;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_c8.Left = 0.0;
  FStack_c8.Top = 0.0;
  FStack_c8.Right = 0.0;
  FStack_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_b8,NoDrawType,(FName)0x0,&FStack_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_b8.bIsSet = '\0';
  FStack_b8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x530),&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x5e0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x5f0) = FStyleColors::AccentGray._16_4_;
  *(undefined8 *)((longlong)param_1 + 0x5f8) = 0x403c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x600) = 0x407c200000000000;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60c))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = FStyleColors::Black._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x620))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x630) = FStyleColors::White._16_4_;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x640) = 0x3f800000;
  return;
}

// Destruct<FAudioSliderStyle> @ 14d8933a0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioSliderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioSliderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x530) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x5d0));
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FAudioTextBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x460) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x500));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x450));
  FSliderStyle::~FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioSliderStyle> @ 14d893400

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioSliderStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = param_1;
  pvVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x20),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0xd0),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x180),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x180 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x230),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x230 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x2e0),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x2e0 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x390),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x390 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x440) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x440 - (longlong)param_1));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x460),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x460 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x518 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x510) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x510 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x518) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x520) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x520 - (longlong)param_1));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x530),(FSlateBrush *)((longlong)pvVar3 + 0x530));
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x5e8);
    *(undefined8 *)((longlong)pvVar2 + 0x5e0) = *(undefined8 *)((longlong)pvVar3 + 0x5e0);
    *(undefined8 *)((longlong)pvVar2 + 0x5e8) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x5f0) = *(undefined4 *)((longlong)pvVar3 + 0x5f0);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x600);
    *(undefined8 *)((longlong)pvVar2 + 0x5f8) = *(undefined8 *)((longlong)pvVar3 + 0x5f8);
    *(undefined8 *)((longlong)pvVar2 + 0x600) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x608) = *(undefined4 *)((longlong)pvVar3 + 0x608);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x614);
    *(undefined8 *)((longlong)pvVar2 + 0x60c) = *(undefined8 *)((longlong)pvVar3 + 0x60c);
    *(undefined8 *)((longlong)pvVar2 + 0x614) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x61c) = *(undefined4 *)((longlong)pvVar3 + 0x61c);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x628);
    *(undefined8 *)((longlong)pvVar2 + 0x620) = *(undefined8 *)((longlong)pvVar3 + 0x620);
    *(undefined8 *)((longlong)pvVar2 + 0x628) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x630) = *(undefined4 *)((longlong)pvVar3 + 0x630);
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x63c);
    *(undefined8 *)((longlong)pvVar2 + 0x634) = *(undefined8 *)((longlong)pvVar3 + 0x634);
    *(undefined8 *)((longlong)pvVar2 + 0x63c) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x644) = *(undefined4 *)((longlong)pvVar3 + 0x644);
    pvVar2 = (void *)((longlong)pvVar2 + 0x650);
    pvVar3 = (void *)((longlong)pvVar3 + 0x650);
  }
  return true;
}

// Construct<FAudioTextBoxStyle> @ 14d893b10

void __cdecl UE::CoreUObject::Private::Construct<FAudioTextBoxStyle>(void *param_1)

{
  float fVar1;
  FSlateBrush *pFVar2;
  FDeprecateVector2DParameter aFStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  fVar1 = __real_40800000;
  *(undefined ***)param_1 = &___7FAudioTextBoxStyle__6B_;
  aFStackX_8[0]._0_4_ = 0x42600000;
  aFStackX_8[0]._4_4_ = 0x41e00000;
  pFVar2 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)appuStack_b8,&FStyleColors::White,fVar1,aFStackX_8);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = FStyleColors::Recessed._16_4_;
  return;
}

// ConstructForTests<FAudioTextBoxStyle> @ 14d893b20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioTextBoxStyle>(void *param_1)

{
  float fVar1;
  FSlateBrush *pFVar2;
  FDeprecateVector2DParameter aFStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  fVar1 = __real_40800000;
  *(undefined ***)param_1 = &___7FAudioTextBoxStyle__6B_;
  aFStackX_8[0]._0_4_ = 0x42600000;
  aFStackX_8[0]._4_4_ = 0x41e00000;
  pFVar2 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)appuStack_b8,&FStyleColors::White,fVar1,aFStackX_8);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xc0))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = FStyleColors::Recessed._16_4_;
  return;
}

// Destruct<FAudioTextBoxStyle> @ 14d893b30

void __cdecl UE::CoreUObject::Private::Destruct<FAudioTextBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioTextBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioTextBoxStyle> @ 14d893bb0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioTextBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x10),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xc0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 200) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0xd0) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0xe0);
  }
  return true;
}

// Construct<FAudioSpectrumPlotStyle> @ 14d893f70

void __cdecl UE::CoreUObject::Private::Construct<FAudioSpectrumPlotStyle>(void *param_1)

{
  float fVar1;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioSpectrumPlotStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Background.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStyleColors::Background._16_4_;
  if (FStyleColors::Foreground.ColorUseRule == UseColor_ColorTable) {
    pFVar2 = FSlateColor::GetColorFromTable(&FStyleColors::Foreground);
    fVar10 = (pFVar2->field0_0x0)._s_0.R;
    fVar7 = (pFVar2->field0_0x0)._s_0.G;
    fVar8 = (pFVar2->field0_0x0)._s_0.B;
    fVar9 = (pFVar2->field0_0x0)._s_0.A;
  }
  else {
    fVar10 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._0_4_;
    fVar7 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._4_4_;
    fVar8 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._8_4_;
    fVar9 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._12_4_;
  }
  if (FStyleColors::Background.ColorUseRule == UseColor_ColorTable) {
    pFVar2 = FSlateColor::GetColorFromTable(&FStyleColors::Background);
    fVar3 = (pFVar2->field0_0x0)._s_0.R;
    fVar4 = (pFVar2->field0_0x0)._s_0.G;
    fVar5 = (pFVar2->field0_0x0)._s_0.B;
    fVar6 = (pFVar2->field0_0x0)._s_0.A;
  }
  else {
    fVar3 = FStyleColors::Background.SpecifiedColor.field0_0x0._0_4_;
    fVar4 = FStyleColors::Background.SpecifiedColor.field0_0x0._4_4_;
    fVar5 = FStyleColors::Background.SpecifiedColor.field0_0x0._8_4_;
    fVar6 = FStyleColors::Background.SpecifiedColor.field0_0x0._12_4_;
  }
  fVar1 = __real_3dcccccd;
  *(float *)((longlong)param_1 + 0x1c) = (fVar10 - fVar3) * __real_3dcccccd + fVar3;
  *(float *)((longlong)param_1 + 0x20) = (fVar7 - fVar4) * fVar1 + fVar4;
  *(float *)((longlong)param_1 + 0x24) = (fVar8 - fVar5) * fVar1 + fVar5;
  *(float *)((longlong)param_1 + 0x28) = (fVar9 - fVar6) * fVar1 + fVar6;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x40) = FStyleColors::Foreground._16_4_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0x48),5);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = FStyleColors::Foreground._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xbc))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = FStyleColors::Foreground._16_4_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0xd0),8);
  return;
}

// ConstructForTests<FAudioSpectrumPlotStyle> @ 14d893f80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioSpectrumPlotStyle>(void *param_1)

{
  float fVar1;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioSpectrumPlotStyle__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Background.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStyleColors::Background._16_4_;
  if (FStyleColors::Foreground.ColorUseRule == UseColor_ColorTable) {
    pFVar2 = FSlateColor::GetColorFromTable(&FStyleColors::Foreground);
    fVar10 = (pFVar2->field0_0x0)._s_0.R;
    fVar7 = (pFVar2->field0_0x0)._s_0.G;
    fVar8 = (pFVar2->field0_0x0)._s_0.B;
    fVar9 = (pFVar2->field0_0x0)._s_0.A;
  }
  else {
    fVar10 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._0_4_;
    fVar7 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._4_4_;
    fVar8 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._8_4_;
    fVar9 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._12_4_;
  }
  if (FStyleColors::Background.ColorUseRule == UseColor_ColorTable) {
    pFVar2 = FSlateColor::GetColorFromTable(&FStyleColors::Background);
    fVar3 = (pFVar2->field0_0x0)._s_0.R;
    fVar4 = (pFVar2->field0_0x0)._s_0.G;
    fVar5 = (pFVar2->field0_0x0)._s_0.B;
    fVar6 = (pFVar2->field0_0x0)._s_0.A;
  }
  else {
    fVar3 = FStyleColors::Background.SpecifiedColor.field0_0x0._0_4_;
    fVar4 = FStyleColors::Background.SpecifiedColor.field0_0x0._4_4_;
    fVar5 = FStyleColors::Background.SpecifiedColor.field0_0x0._8_4_;
    fVar6 = FStyleColors::Background.SpecifiedColor.field0_0x0._12_4_;
  }
  fVar1 = __real_3dcccccd;
  *(float *)((longlong)param_1 + 0x1c) = (fVar10 - fVar3) * __real_3dcccccd + fVar3;
  *(float *)((longlong)param_1 + 0x20) = (fVar7 - fVar4) * fVar1 + fVar4;
  *(float *)((longlong)param_1 + 0x24) = (fVar8 - fVar5) * fVar1 + fVar5;
  *(float *)((longlong)param_1 + 0x28) = (fVar9 - fVar6) * fVar1 + fVar6;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x40) = FStyleColors::Foreground._16_4_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0x48),5);
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = FStyleColors::Foreground._16_4_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xbc))->_s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = FStyleColors::Foreground._16_4_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 0xd0),8);
  return;
}

// Destruct<FAudioSpectrumPlotStyle> @ 14d893f90

void __cdecl UE::CoreUObject::Private::Destruct<FAudioSpectrumPlotStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAudioSpectrumPlotStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x108));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x80));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FAudioSpectrumPlotStyle> @ 14d893fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioSpectrumPlotStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0x48),
               (FSlateFontInfo *)((longlong)param_2 + 0x48));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xb8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xc4);
    *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
    *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0xd0),
               (FSlateFontInfo *)((longlong)param_2 + 0xd0));
    param_2 = (void *)((longlong)param_2 + 0x130);
    param_1 = (void *)((longlong)param_1 + 0x130);
  }
  return true;
}

// Construct<FSpectrumAnalyzerRackUnitSettings> @ 14d894720

void __cdecl UE::CoreUObject::Private::Construct<FSpectrumAnalyzerRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x7060101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x10200;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSpectrumAnalyzerRackUnitSettings> @ 14d894740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSpectrumAnalyzerRackUnitSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x7060101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x10200;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSpectrumAnalyzerRackUnitSettings> @ 14d894760

void __cdecl UE::CoreUObject::Private::Destruct<FSpectrumAnalyzerRackUnitSettings>(void *param_1)

{
  return;
}

// Copy<FSpectrumAnalyzerRackUnitSettings> @ 14d894770

bool __cdecl
UE::CoreUObject::Private::Copy<FSpectrumAnalyzerRackUnitSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 9);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&> @ 14d89ac50

FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&> @ 14d89ac70

FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                    (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&> @ 14d89ac90

FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&> @ 14d89acb0

FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                    (FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&> @ 14d89acd0

SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
          (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&> @ 14d89acf0

STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
          (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&> @ 14d89ad10

STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
          (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AudioWidgets::FAudioLoudnessMeter,AudioWidgets::FAudioLoudnessMeter_*_&> @ 14d89ad30

FAudioLoudnessMeter * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AudioWidgets::FAudioLoudnessMeter,AudioWidgets::FAudioLoudnessMeter_*_&>
          (FAudioLoudnessMeter **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AudioWidgets::FAudioMeter,AudioWidgets::FAudioMeter_*_&> @ 14d89ad50

FAudioMeter * __cdecl
UE::Core::Private::DereferenceIfNecessary<AudioWidgets::FAudioMeter,AudioWidgets::FAudioMeter_*_&>
          (FAudioMeter **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&> @ 14d89ad70

FAudioSpectrogram * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
          (FAudioSpectrogram **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&> @ 14d89ad90

FAudioSpectrumAnalyzer * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
          (FAudioSpectrumAnalyzer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AudioWidgets::FWaveformAudioSamplesDataProvider,AudioWidgets::FWaveformAudioSamplesDataProvider_*_&> @ 14d89adb0

/* WARNING: Enum "Type": Some values do not have unique names */

FWaveformAudioSamplesDataProvider * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AudioWidgets::FWaveformAudioSamplesDataProvider,AudioWidgets::FWaveformAudioSamplesDataProvider_*_&>
          (FWaveformAudioSamplesDataProvider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SAudioOscilloscopePanelWidget,SAudioOscilloscopePanelWidget_*_&> @ 14d89add0

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioOscilloscopePanelWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SAudioOscilloscopePanelWidget,SAudioOscilloscopePanelWidget_*_&>
          (SAudioOscilloscopePanelWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SAudioSpectrogram,SAudioSpectrogram_*_&> @ 14d89adf0

SAudioSpectrogram * __cdecl
UE::Core::Private::DereferenceIfNecessary<SAudioSpectrogram,SAudioSpectrogram_*_&>
          (SAudioSpectrogram **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SAudioSpectrumPlot,SAudioSpectrumPlot_*_&> @ 14d89ae10

SAudioSpectrumPlot * __cdecl
UE::Core::Private::DereferenceIfNecessary<SAudioSpectrumPlot,SAudioSpectrumPlot_*_&>
          (SAudioSpectrumPlot **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SAudioVectorscopePanelWidget,SAudioVectorscopePanelWidget_*_&> @ 14d89ae30

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioVectorscopePanelWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SAudioVectorscopePanelWidget,SAudioVectorscopePanelWidget_*_&>
          (SAudioVectorscopePanelWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SFixedSampledSequenceRuler,SFixedSampledSequenceRuler_*_&> @ 14d89ae50

SFixedSampledSequenceRuler * __cdecl
UE::Core::Private::DereferenceIfNecessary<SFixedSampledSequenceRuler,SFixedSampledSequenceRuler_*_&>
          (SFixedSampledSequenceRuler **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SFixedSampledSequenceViewer,SFixedSampledSequenceViewer_*_&> @ 14d89ae70

SFixedSampledSequenceViewer * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SFixedSampledSequenceViewer,SFixedSampledSequenceViewer_*_&>
          (SFixedSampledSequenceViewer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SFixedSampledSequenceViewerPanel,SFixedSampledSequenceViewerPanel_*_&> @ 14d89ae90

SFixedSampledSequenceViewerPanel * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SFixedSampledSequenceViewerPanel,SFixedSampledSequenceViewerPanel_*_&>
          (SFixedSampledSequenceViewerPanel **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioFrequencyRadialSlider,UAudioFrequencyRadialSlider_*_&> @ 14d89aeb0

UAudioFrequencyRadialSlider * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UAudioFrequencyRadialSlider,UAudioFrequencyRadialSlider_*_&>
          (UAudioFrequencyRadialSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioFrequencySlider,UAudioFrequencySlider_*_&> @ 14d89aed0

UAudioFrequencySlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioFrequencySlider,UAudioFrequencySlider_*_&>
          (UAudioFrequencySlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioMaterialButton,UAudioMaterialButton_*_&> @ 14d89aef0

UAudioMaterialButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioMaterialButton,UAudioMaterialButton_*_&>
          (UAudioMaterialButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioMaterialKnob,UAudioMaterialKnob_*_&> @ 14d89af10

UAudioMaterialKnob * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioMaterialKnob,UAudioMaterialKnob_*_&>
          (UAudioMaterialKnob **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioMaterialSlider,UAudioMaterialSlider_*_&> @ 14d89af30

UAudioMaterialSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioMaterialSlider,UAudioMaterialSlider_*_&>
          (UAudioMaterialSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioRadialSlider,UAudioRadialSlider_*_&> @ 14d89af50

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioRadialSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioRadialSlider,UAudioRadialSlider_*_&>
          (UAudioRadialSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioSlider,UAudioSlider_*_&> @ 14d89af70

UAudioSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioSlider,UAudioSlider_*_&>(UAudioSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioSliderBase,UAudioSliderBase_*_&> @ 14d89af90

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioSliderBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioSliderBase,UAudioSliderBase_*_&>
          (UAudioSliderBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioVolumeRadialSlider,UAudioVolumeRadialSlider_*_&> @ 14d89afb0

UAudioVolumeRadialSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioVolumeRadialSlider,UAudioVolumeRadialSlider_*_&>
          (UAudioVolumeRadialSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAudioVolumeSlider,UAudioVolumeSlider_*_&> @ 14d89afd0

UAudioVolumeSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAudioVolumeSlider,UAudioVolumeSlider_*_&>
          (UAudioVolumeSlider **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_> @ 14d8a2510

/* WARNING: Removing unreachable block (ram,0x00014d8a2557) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
          (ushort param_1,
          ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::
    ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_> @ 14d8a25a0

void __cdecl
UE::Core::Private::
ReallocTo<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::
    ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

