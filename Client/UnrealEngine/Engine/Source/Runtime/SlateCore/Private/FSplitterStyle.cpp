// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 14252ef50

UScriptStruct * __cdecl FSplitterStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitterStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSplitterStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitterStyle,(UObject *)pUVar1,L"SplitterStyle"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FSplitterStyle.OuterSingleton;
}

// FSplitterStyle @ 1425477e0

FSplitterStyle * __thiscall FSplitterStyle::FSplitterStyle(FSplitterStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush(&this->HandleNormalBrush);
  FSlateBrush::FSlateBrush(&this->HandleHighlightBrush);
  return this;
}

// ~FSplitterStyle @ 14254bf80

void __thiscall FSplitterStyle::~FSplitterStyle(FSplitterStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FSplitterStyle__6B_;
  (this->HandleHighlightBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HandleHighlightBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->HandleNormalBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HandleNormalBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 142580190

FSplitterStyle * __cdecl FSplitterStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FSplitterStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.HandleNormalBrush);
      FSlateBrush::FSlateBrush(&::Default.HandleHighlightBrush);
      atexit(`FSplitterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142586780

void __thiscall
FSplitterStyle::GetResources
          (FSplitterStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->HandleNormalBrush;
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
  local_10 = &this->HandleHighlightBrush;
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

// GetTypeName @ 142589d50

FName __thiscall FSplitterStyle::GetTypeName(FSplitterStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetHandleHighlightBrush @ 142591320

FSplitterStyle * __thiscall
FSplitterStyle::SetHandleHighlightBrush(FSplitterStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->HandleHighlightBrush,param_1);
  return this;
}

// SetHandleNormalBrush @ 142591350

FSplitterStyle * __thiscall
FSplitterStyle::SetHandleNormalBrush(FSplitterStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->HandleNormalBrush,param_1);
  return this;
}

