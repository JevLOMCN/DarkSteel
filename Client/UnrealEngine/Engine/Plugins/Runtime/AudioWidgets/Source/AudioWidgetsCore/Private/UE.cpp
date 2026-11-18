// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 12

// Construct<FAudioMeterDefaultColorWidgetStyle> @ 14d7e6ee0

void __cdecl UE::CoreUObject::Private::Construct<FAudioMeterDefaultColorWidgetStyle>(void *param_1)

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
  FAudioMeterDefaultColorWidgetStyle::FAudioMeterDefaultColorWidgetStyle(param_1);
  return;
}

// ConstructForTests<FAudioMeterDefaultColorWidgetStyle> @ 14d7e6f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAudioMeterDefaultColorWidgetStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FAudioMeterDefaultColorWidgetStyle__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3cfdf3b6;
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

// Destruct<FAudioMeterDefaultColorWidgetStyle> @ 14d7e6f20

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMeterDefaultColorWidgetStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FAudioMeterDefaultColorWidgetStyle> @ 14d7e6f30

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMeterDefaultColorWidgetStyle>
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

// Construct<FAudioMeterWidgetStyle> @ 14d7e7060

void __cdecl UE::CoreUObject::Private::Construct<FAudioMeterWidgetStyle>(void *param_1)

{
  memset(param_1,0,0x430);
  FAudioMeterWidgetStyle::FAudioMeterWidgetStyle(param_1);
  return;
}

// ConstructForTests<FAudioMeterWidgetStyle> @ 14d7e7090

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMeterWidgetStyle>(void *param_1)

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
  return;
}

// Destruct<FAudioMeterWidgetStyle> @ 14d7e70a0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMeterWidgetStyle>(void *param_1)

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

// Copy<FAudioMeterWidgetStyle> @ 14d7e70b0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMeterWidgetStyle>(void *param_1,void *param_2,int param_3)

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

// Construct<FAudioMeterChannelInfo> @ 14d7e7300

void __cdecl UE::CoreUObject::Private::Construct<FAudioMeterChannelInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAudioMeterChannelInfo> @ 14d7e7310

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioMeterChannelInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAudioMeterChannelInfo> @ 14d7e7320

void __cdecl UE::CoreUObject::Private::Destruct<FAudioMeterChannelInfo>(void *param_1)

{
  return;
}

// Copy<FAudioMeterChannelInfo> @ 14d7e7330

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioMeterChannelInfo>(void *param_1,void *param_2,int param_3)

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

