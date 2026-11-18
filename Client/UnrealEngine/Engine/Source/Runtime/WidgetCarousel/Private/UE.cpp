// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 9

// Construct<FWidgetCarouselNavigationButtonStyle> @ 14a77a480

void __cdecl
UE::CoreUObject::Private::Construct<FWidgetCarouselNavigationButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  return;
}

// ConstructForTests<FWidgetCarouselNavigationButtonStyle> @ 14a77a4d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetCarouselNavigationButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  return;
}

// Destruct<FWidgetCarouselNavigationButtonStyle> @ 14a77a520

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetCarouselNavigationButtonStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationButtonStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4f0));
  *(undefined ***)((longlong)param_1 + 0x3a0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x440));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FWidgetCarouselNavigationButtonStyle> @ 14a77a590

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetCarouselNavigationButtonStyle>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x3a0),(FSlateBrush *)((longlong)param_2 + 0x3a0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x450),(FSlateBrush *)((longlong)param_2 + 0x450)
              );
    param_2 = (void *)((longlong)param_2 + 0x500);
    param_1 = (void *)((longlong)param_1 + 0x500);
  }
  return true;
}

// Construct<FWidgetCarouselNavigationBarStyle> @ 14a77a7c0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetCarouselNavigationBarStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationBarStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xc0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x450));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x7e0));
  return;
}

// ConstructForTests<FWidgetCarouselNavigationBarStyle> @ 14a77a810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetCarouselNavigationBarStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationBarStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xc0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x450));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x7e0));
  return;
}

// Destruct<FWidgetCarouselNavigationBarStyle> @ 14a77a860

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetCarouselNavigationBarStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x7e0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x450));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xc0));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FWidgetCarouselNavigationBarStyle> @ 14a77a8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetCarouselNavigationBarStyle>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0xc0),(FButtonStyle *)((longlong)param_2 + 0xc0)
              );
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x450),
               (FButtonStyle *)((longlong)param_2 + 0x450));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x7e0),
               (FButtonStyle *)((longlong)param_2 + 0x7e0));
    param_2 = (void *)((longlong)param_2 + 0xb70);
    param_1 = (void *)((longlong)param_1 + 0xb70);
  }
  return true;
}

// DereferenceIfNecessary<SCarouselNavigationBar,SCarouselNavigationBar_*_&> @ 14a77adb0

SCarouselNavigationBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCarouselNavigationBar,SCarouselNavigationBar_*_&>
          (SCarouselNavigationBar **param_1)

{
  return *param_1;
}

