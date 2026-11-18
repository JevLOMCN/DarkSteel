// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// StaticStruct @ 14252e7f0

UScriptStruct * __cdecl FEditableTextStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEditableTextStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FEditableTextStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextStyle,(UObject *)pUVar1,
                         L"EditableTextStyle");
  }
  return Z_Registration_Info_UScriptStruct_FEditableTextStyle.OuterSingleton;
}

// FEditableTextStyle @ 1425440d0

FEditableTextStyle * __thiscall
FEditableTextStyle::FEditableTextStyle(FEditableTextStyle *this,FEditableTextStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  this->_padding_ = (longlong)&___7FEditableTextStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&this->Font,&param_1->Font);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  (this->ColorAndOpacity).ColorUseRule = (param_1->ColorAndOpacity).ColorUseRule;
  (this->ColorAndOpacity).ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->BackgroundImageSelected,&param_1->BackgroundImageSelected);
  FSlateBrush::FSlateBrush(&this->BackgroundImageComposing,&param_1->BackgroundImageComposing);
  FSlateBrush::FSlateBrush(&this->CaretImage,&param_1->CaretImage);
  return this;
}

// FEditableTextStyle @ 142544160

FEditableTextStyle * __thiscall FEditableTextStyle::FEditableTextStyle(FEditableTextStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FEditableTextStyle__6B_;
  FStyleDefaults::GetFontInfo(&this->Font,9);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ColorAndOpacity).ColorUseRule = UseColor_Foreground;
  (this->ColorAndOpacity).ColorTableId = Black;
  FSlateBrush::FSlateBrush(&this->BackgroundImageSelected);
  FSlateBrush::FSlateBrush(&this->BackgroundImageComposing);
  FSlateBrush::FSlateBrush(&this->CaretImage);
  return this;
}

// ~FEditableTextStyle @ 14254afd0

void __thiscall FEditableTextStyle::~FEditableTextStyle(FEditableTextStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FEditableTextStyle__6B_;
  (this->CaretImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CaretImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->BackgroundImageComposing).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageComposing)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImageSelected).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageSelected)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254dc30

FEditableTextStyle * __thiscall
FEditableTextStyle::operator=(FEditableTextStyle *this,FEditableTextStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FSlateFontInfo::operator=(&this->Font,&param_1->Font);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  (this->ColorAndOpacity).ColorUseRule = (param_1->ColorAndOpacity).ColorUseRule;
  (this->ColorAndOpacity).ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->BackgroundImageSelected,&param_1->BackgroundImageSelected);
  FSlateBrush::operator=(&this->BackgroundImageComposing,&param_1->BackgroundImageComposing);
  FSlateBrush::operator=(&this->CaretImage,&param_1->CaretImage);
  return this;
}

// GetDefault @ 14257f730

FEditableTextStyle * __cdecl FEditableTextStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FEditableTextStyle__6B_;
      FStyleDefaults::GetFontInfo(&::Default.Font,9);
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ = 0x3f800000;
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B = 1.0;
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A = 1.0;
      ::Default.ColorAndOpacity.ColorUseRule = UseColor_Foreground;
      ::Default.ColorAndOpacity.ColorTableId = Black;
      FSlateBrush::FSlateBrush(&::Default.BackgroundImageSelected);
      FSlateBrush::FSlateBrush(&::Default.BackgroundImageComposing);
      FSlateBrush::FSlateBrush(&::Default.CaretImage);
      atexit(`FEditableTextStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425845a0

void __thiscall
FEditableTextStyle::GetResources
          (FEditableTextStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->BackgroundImageSelected;
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
  local_10 = &this->CaretImage;
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

// GetTypeName @ 142589b90

FName __thiscall FEditableTextStyle::GetTypeName(FEditableTextStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetFont @ 142590f60

FEditableTextStyle * __thiscall
FEditableTextStyle::SetFont(FEditableTextStyle *this,FName *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

