// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 14252f060

UScriptStruct * __cdecl FTableColumnHeaderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTableColumnHeaderStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FTableColumnHeaderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTableColumnHeaderStyle,(UObject *)pUVar1,
                         L"TableColumnHeaderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FTableColumnHeaderStyle.OuterSingleton;
}

// FTableColumnHeaderStyle @ 142548040

FTableColumnHeaderStyle * __thiscall
FTableColumnHeaderStyle::FTableColumnHeaderStyle
          (FTableColumnHeaderStyle *this,FTableColumnHeaderStyle *param_1)

{
  this->_padding_ = (longlong)&___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SortPrimaryAscendingImage,&param_1->SortPrimaryAscendingImage);
  FSlateBrush::FSlateBrush(&this->SortPrimaryDescendingImage,&param_1->SortPrimaryDescendingImage);
  FSlateBrush::FSlateBrush(&this->SortSecondaryAscendingImage,&param_1->SortSecondaryAscendingImage)
  ;
  FSlateBrush::FSlateBrush
            (&this->SortSecondaryDescendingImage,&param_1->SortSecondaryDescendingImage);
  FSlateBrush::FSlateBrush(&this->NormalBrush,&param_1->NormalBrush);
  FSlateBrush::FSlateBrush(&this->HoveredBrush,&param_1->HoveredBrush);
  FSlateBrush::FSlateBrush(&this->MenuDropdownImage,&param_1->MenuDropdownImage);
  FSlateBrush::FSlateBrush
            (&this->MenuDropdownNormalBorderBrush,&param_1->MenuDropdownNormalBorderBrush);
  FSlateBrush::FSlateBrush
            (&this->MenuDropdownHoveredBorderBrush,&param_1->MenuDropdownHoveredBorderBrush);
  return this;
}

// FTableColumnHeaderStyle @ 142548120

FTableColumnHeaderStyle * __thiscall
FTableColumnHeaderStyle::FTableColumnHeaderStyle(FTableColumnHeaderStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SortPrimaryAscendingImage);
  FSlateBrush::FSlateBrush(&this->SortPrimaryDescendingImage);
  FSlateBrush::FSlateBrush(&this->SortSecondaryAscendingImage);
  FSlateBrush::FSlateBrush(&this->SortSecondaryDescendingImage);
  FSlateBrush::FSlateBrush(&this->NormalBrush);
  FSlateBrush::FSlateBrush(&this->HoveredBrush);
  FSlateBrush::FSlateBrush(&this->MenuDropdownImage);
  FSlateBrush::FSlateBrush(&this->MenuDropdownNormalBorderBrush);
  FSlateBrush::FSlateBrush(&this->MenuDropdownHoveredBorderBrush);
  return this;
}

// ~FTableColumnHeaderStyle @ 14254c240

void __thiscall FTableColumnHeaderStyle::~FTableColumnHeaderStyle(FTableColumnHeaderStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FTableColumnHeaderStyle__6B_;
  (this->MenuDropdownHoveredBorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuDropdownHoveredBorderBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->MenuDropdownNormalBorderBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->MenuDropdownNormalBorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->MenuDropdownImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->MenuDropdownImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HoveredBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SortSecondaryDescendingImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SortSecondaryDescendingImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SortSecondaryAscendingImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SortSecondaryAscendingImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SortPrimaryDescendingImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SortPrimaryDescendingImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SortPrimaryAscendingImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SortPrimaryAscendingImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254e5a0

FTableColumnHeaderStyle * __thiscall
FTableColumnHeaderStyle::operator=(FTableColumnHeaderStyle *this,FTableColumnHeaderStyle *param_1)

{
  FSlateBrush::operator=(&this->SortPrimaryAscendingImage,&param_1->SortPrimaryAscendingImage);
  FSlateBrush::operator=(&this->SortPrimaryDescendingImage,&param_1->SortPrimaryDescendingImage);
  FSlateBrush::operator=(&this->SortSecondaryAscendingImage,&param_1->SortSecondaryAscendingImage);
  FSlateBrush::operator=(&this->SortSecondaryDescendingImage,&param_1->SortSecondaryDescendingImage)
  ;
  FSlateBrush::operator=(&this->NormalBrush,&param_1->NormalBrush);
  FSlateBrush::operator=(&this->HoveredBrush,&param_1->HoveredBrush);
  FSlateBrush::operator=(&this->MenuDropdownImage,&param_1->MenuDropdownImage);
  FSlateBrush::operator=
            (&this->MenuDropdownNormalBorderBrush,&param_1->MenuDropdownNormalBorderBrush);
  FSlateBrush::operator=
            (&this->MenuDropdownHoveredBorderBrush,&param_1->MenuDropdownHoveredBorderBrush);
  return this;
}

// GetDefault @ 142580240

FTableColumnHeaderStyle * __cdecl FTableColumnHeaderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FTableColumnHeaderStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.SortPrimaryAscendingImage);
      FSlateBrush::FSlateBrush(&::Default.SortPrimaryDescendingImage);
      FSlateBrush::FSlateBrush(&::Default.SortSecondaryAscendingImage);
      FSlateBrush::FSlateBrush(&::Default.SortSecondaryDescendingImage);
      FSlateBrush::FSlateBrush(&::Default.NormalBrush);
      FSlateBrush::FSlateBrush(&::Default.HoveredBrush);
      FSlateBrush::FSlateBrush(&::Default.MenuDropdownImage);
      FSlateBrush::FSlateBrush(&::Default.MenuDropdownNormalBorderBrush);
      FSlateBrush::FSlateBrush(&::Default.MenuDropdownHoveredBorderBrush);
      atexit(`FTableColumnHeaderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425868f0

void __thiscall
FTableColumnHeaderStyle::GetResources
          (FTableColumnHeaderStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_58;
  FSlateBrush *local_50;
  FSlateBrush *local_48;
  FSlateBrush *local_40;
  FSlateBrush *local_38;
  FSlateBrush *local_30;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18 [2];
  
  local_58 = &this->SortPrimaryAscendingImage;
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
  local_50 = &this->SortPrimaryDescendingImage;
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
  local_48 = &this->SortSecondaryAscendingImage;
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
  local_40 = &this->SortSecondaryDescendingImage;
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
  local_38 = &this->NormalBrush;
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
  local_30 = &this->HoveredBrush;
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
  local_28 = &this->MenuDropdownImage;
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
  local_20 = &this->MenuDropdownNormalBorderBrush;
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
  local_18[0] = &this->MenuDropdownHoveredBorderBrush;
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

// GetTypeName @ 142589d70

FName __thiscall FTableColumnHeaderStyle::GetTypeName(FTableColumnHeaderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

