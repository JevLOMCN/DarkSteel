// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 8

// StaticStruct @ 14f0a32c0

UScriptStruct * __cdecl FSynth2DSliderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSynth2DSliderStyle,(UObject *)pUVar1,
                         L"Synth2DSliderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSynth2DSliderStyle.OuterSingleton;
}

// FSynth2DSliderStyle @ 14f0b9030

FSynth2DSliderStyle * __thiscall FSynth2DSliderStyle::FSynth2DSliderStyle(FSynth2DSliderStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FSynth2DSliderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->NormalThumbImage);
  FSlateBrush::FSlateBrush(&this->DisabledThumbImage);
  FSlateBrush::FSlateBrush(&this->NormalBarImage);
  FSlateBrush::FSlateBrush(&this->DisabledBarImage);
  FSlateBrush::FSlateBrush(&this->BackgroundImage);
  this->BarThickness = 2.0;
  return this;
}

// ~FSynth2DSliderStyle @ 14f0bf810

void __thiscall FSynth2DSliderStyle::~FSynth2DSliderStyle(FSynth2DSliderStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FSynth2DSliderStyle__6B_;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->DisabledBarImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DisabledBarImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalBarImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalBarImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DisabledThumbImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DisabledThumbImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalThumbImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalThumbImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14f0c15c0

FSynth2DSliderStyle * __thiscall
FSynth2DSliderStyle::operator=(FSynth2DSliderStyle *this,FSynth2DSliderStyle *param_1)

{
  FSlateBrush::operator=(&this->NormalThumbImage,&param_1->NormalThumbImage);
  FSlateBrush::operator=(&this->DisabledThumbImage,&param_1->DisabledThumbImage);
  FSlateBrush::operator=(&this->NormalBarImage,&param_1->NormalBarImage);
  FSlateBrush::operator=(&this->DisabledBarImage,&param_1->DisabledBarImage);
  FSlateBrush::operator=(&this->BackgroundImage,&param_1->BackgroundImage);
  this->BarThickness = param_1->BarThickness;
  return this;
}

// GetDefault @ 14f0d9090

FSynth2DSliderStyle * __cdecl FSynth2DSliderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FSynth2DSliderStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.NormalThumbImage);
      FSlateBrush::FSlateBrush(&::Default.DisabledThumbImage);
      FSlateBrush::FSlateBrush(&::Default.NormalBarImage);
      FSlateBrush::FSlateBrush(&::Default.DisabledBarImage);
      FSlateBrush::FSlateBrush(&::Default.BackgroundImage);
      ::Default.BarThickness = 2.0;
      atexit(`FSynth2DSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14f0dd9b0

void __thiscall
FSynth2DSliderStyle::GetResources
          (FSynth2DSliderStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14f0df140

FName __thiscall FSynth2DSliderStyle::GetTypeName(FSynth2DSliderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// Initialize @ 14f0e71c0

void __cdecl FSynth2DSliderStyle::Initialize(void)

{
  code *pcVar1;
  FSlateStyleSet *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FSynth2DSliderStyle *pFVar4;
  
  FSynthSlateStyleSet::Initialize();
  FVar2 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
  this = FSynthSlateStyleSet::StyleInstance.Object;
  if (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FSlateStyleSet *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = GetDefault();
  FSlateStyleSet::Set<FSynth2DSliderStyle>(this,TypeName,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

