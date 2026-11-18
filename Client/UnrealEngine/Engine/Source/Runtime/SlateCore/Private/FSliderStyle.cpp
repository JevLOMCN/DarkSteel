// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// StaticStruct @ 14252ec20

UScriptStruct * __cdecl FSliderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSliderStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSliderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSliderStyle,(UObject *)pUVar1,L"SliderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSliderStyle.OuterSingleton;
}

// FSliderStyle @ 142547170

FSliderStyle * __thiscall FSliderStyle::FSliderStyle(FSliderStyle *this,FSliderStyle *param_1)

{
  *(undefined ***)this = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->NormalBarImage,&param_1->NormalBarImage);
  FSlateBrush::FSlateBrush(&this->HoveredBarImage,&param_1->HoveredBarImage);
  FSlateBrush::FSlateBrush(&this->DisabledBarImage,&param_1->DisabledBarImage);
  FSlateBrush::FSlateBrush(&this->NormalThumbImage,&param_1->NormalThumbImage);
  FSlateBrush::FSlateBrush(&this->HoveredThumbImage,&param_1->HoveredThumbImage);
  FSlateBrush::FSlateBrush(&this->DisabledThumbImage,&param_1->DisabledThumbImage);
  this->BarThickness = param_1->BarThickness;
  return this;
}

// FSliderStyle @ 142547220

FSliderStyle * __thiscall FSliderStyle::FSliderStyle(FSliderStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->NormalBarImage);
  FSlateBrush::FSlateBrush(&this->HoveredBarImage);
  FSlateBrush::FSlateBrush(&this->DisabledBarImage);
  FSlateBrush::FSlateBrush(&this->NormalThumbImage);
  FSlateBrush::FSlateBrush(&this->HoveredThumbImage);
  FSlateBrush::FSlateBrush(&this->DisabledThumbImage);
  this->BarThickness = 2.0;
  return this;
}

// ~FSliderStyle @ 14254bd10

void __thiscall FSliderStyle::~FSliderStyle(FSliderStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FSliderStyle__6B_;
  (this->DisabledThumbImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DisabledThumbImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  pTVar1 = (this->HoveredThumbImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HoveredThumbImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalThumbImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalThumbImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DisabledBarImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DisabledBarImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HoveredBarImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HoveredBarImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalBarImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalBarImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254e070

FSliderStyle * __thiscall FSliderStyle::operator=(FSliderStyle *this,FSliderStyle *param_1)

{
  FSlateBrush::operator=(&this->NormalBarImage,&param_1->NormalBarImage);
  FSlateBrush::operator=(&this->HoveredBarImage,&param_1->HoveredBarImage);
  FSlateBrush::operator=(&this->DisabledBarImage,&param_1->DisabledBarImage);
  FSlateBrush::operator=(&this->NormalThumbImage,&param_1->NormalThumbImage);
  FSlateBrush::operator=(&this->HoveredThumbImage,&param_1->HoveredThumbImage);
  FSlateBrush::operator=(&this->DisabledThumbImage,&param_1->DisabledThumbImage);
  this->BarThickness = param_1->BarThickness;
  return this;
}

// GetDefault @ 142580010

FSliderStyle * __cdecl FSliderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FSliderStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.NormalBarImage);
      FSlateBrush::FSlateBrush(&::Default.HoveredBarImage);
      FSlateBrush::FSlateBrush(&::Default.DisabledBarImage);
      FSlateBrush::FSlateBrush(&::Default.NormalThumbImage);
      FSlateBrush::FSlateBrush(&::Default.HoveredThumbImage);
      FSlateBrush::FSlateBrush(&::Default.DisabledThumbImage);
      ::Default.BarThickness = 2.0;
      atexit(`FSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142585ee0

void __thiscall
FSliderStyle::GetResources
          (FSliderStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_38;
  FSlateBrush *local_30;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_38 = &this->NormalBarImage;
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
  local_30 = &this->HoveredBarImage;
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
  local_28 = &this->DisabledBarImage;
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
  local_20 = &this->NormalThumbImage;
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
  local_18 = &this->HoveredThumbImage;
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
  local_10 = &this->DisabledThumbImage;
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

// GetTypeName @ 142589d10

FName __thiscall FSliderStyle::GetTypeName(FSliderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// UnlinkColors @ 1425aa7e0

void __thiscall FSliderStyle::UnlinkColors(FSliderStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->NormalBarImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->NormalBarImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->NormalBarImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->NormalBarImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->NormalBarImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->HoveredBarImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->HoveredBarImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->HoveredBarImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->HoveredBarImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->HoveredBarImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->DisabledBarImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->DisabledBarImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->DisabledBarImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->DisabledBarImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->DisabledBarImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->NormalThumbImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->NormalThumbImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->NormalThumbImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->NormalThumbImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->NormalThumbImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->HoveredThumbImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->HoveredThumbImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->HoveredThumbImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->HoveredThumbImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->HoveredThumbImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->DisabledThumbImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->DisabledThumbImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->DisabledThumbImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->DisabledThumbImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->DisabledThumbImage).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  return;
}

