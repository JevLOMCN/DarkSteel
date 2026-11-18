// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 15

// StaticStruct @ 14d7e7220

UScriptStruct * __cdecl FAudioMeterWidgetStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgetsCore();
    Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterWidgetStyle,(UObject *)pUVar1,
                         L"AudioMeterWidgetStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.OuterSingleton;
}

// FAudioMeterWidgetStyle @ 14d7e7740

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::FAudioMeterWidgetStyle(FAudioMeterWidgetStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FAudioMeterWidgetStyle__6B_;
  FSlateBrush::FSlateBrush(&this->MeterValueImage);
  FSlateBrush::FSlateBrush(&this->BackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterBackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterValueBackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterPeakImage);
  this->MeterValuePadding = 3.0;
  (this->MeterPadding).field0_0x0._s_0.X = 10.0;
  (this->MeterSize).field0_0x0._s_0.X = 250.0;
  (this->ValueRangeDb).field0_0x0._s_0.Y = 10.0;
  (this->MeterSize).field0_0x0._s_0.Y = 25.0;
  this->PeakValueWidth = 2.0;
  (this->MeterPadding).field0_0x0._s_0.Y = 5.0;
  (this->ValueRangeDb).field0_0x0._s_0.X = -160.0;
  this->bShowScale = true;
  this->bScaleSide = true;
  this->ScaleHashOffset = 5.0;
  this->ScaleHashWidth = 1.0;
  this->ScaleHashHeight = 10.0;
  this->DecibelsPerHash = 10;
  FStyleDefaults::GetFontInfo(&this->Font,5);
  return this;
}

// ~FAudioMeterWidgetStyle @ 14d7e7860

void __thiscall FAudioMeterWidgetStyle::~FAudioMeterWidgetStyle(FAudioMeterWidgetStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->MeterPeakImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->MeterPeakImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->MeterValueBackgroundImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->MeterValueBackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->MeterBackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->MeterBackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->MeterValueImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->MeterValueImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14d7e8090

FAudioMeterWidgetStyle * __cdecl FAudioMeterWidgetStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterWidgetStyle(&::Default);
      atexit(`FAudioMeterWidgetStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d7e81c0

void __thiscall
FAudioMeterWidgetStyle::GetResources
          (FAudioMeterWidgetStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18 [2];
  
  local_28 = &this->MeterValueImage;
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
  local_20 = &this->MeterBackgroundImage;
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
  local_18[0] = &this->MeterPeakImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetTypeName @ 14d7e8560

FName __thiscall FAudioMeterWidgetStyle::GetTypeName(FAudioMeterWidgetStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetFont @ 14d7ea640

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFont(FAudioMeterWidgetStyle *this,FName *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d7ea690

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFont(FAudioMeterWidgetStyle *this,FString *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  wchar_t *pwVar2;
  FSlateFontInfo local_68;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,pwVar2,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d7ea700

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFont(FAudioMeterWidgetStyle *this,char *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d7ea750

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFont(FAudioMeterWidgetStyle *this,wchar_t *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d7ea7a0

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFontName(FAudioMeterWidgetStyle *this,FName *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d7ea800

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFontName(FAudioMeterWidgetStyle *this,FString *param_1)

{
  FSlateFontInfo *pFVar1;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default,&local_88);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d7ea890

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFontName(FAudioMeterWidgetStyle *this,char *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d7ea8f0

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::SetFontName(FAudioMeterWidgetStyle *this,wchar_t *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// UnlinkColors @ 14d7eaee0

void __thiscall FAudioMeterWidgetStyle::UnlinkColors(FAudioMeterWidgetStyle *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  
  if ((this->MeterValueImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->MeterValueImage).TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->MeterValueImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->MeterValueImage).TintColor.SpecifiedColor.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->MeterValueImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  if ((this->MeterBackgroundImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->MeterBackgroundImage).TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->MeterBackgroundImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->MeterBackgroundImage).TintColor.SpecifiedColor.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->MeterBackgroundImage).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar2;
  }
  if ((this->MeterPeakImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->MeterPeakImage).TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->MeterPeakImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->MeterPeakImage).TintColor.SpecifiedColor.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->MeterPeakImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  return;
}

