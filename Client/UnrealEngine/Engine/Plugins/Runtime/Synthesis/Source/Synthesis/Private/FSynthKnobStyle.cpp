// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 10

// StaticStruct @ 14f0a6400

UScriptStruct * __cdecl FSynthKnobStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSynthKnobStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSynthKnobStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSynthKnobStyle,(UObject *)pUVar1,
                         L"SynthKnobStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSynthKnobStyle.OuterSingleton;
}

// FSynthKnobStyle @ 14f0b90a0

FSynthKnobStyle * __thiscall FSynthKnobStyle::FSynthKnobStyle(FSynthKnobStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FSynthKnobStyle__6B_;
  FSlateBrush::FSlateBrush(&this->LargeKnob);
  FSlateBrush::FSlateBrush(&this->LargeKnobOverlay);
  FSlateBrush::FSlateBrush(&this->MediumKnob);
  FSlateBrush::FSlateBrush(&this->MediumKnobOverlay);
  this->KnobSize = Medium;
  this->MinValueAngle = -0.4;
  this->MaxValueAngle = 0.4;
  FSynthKnobResources::LoadImages(&Resources);
  FSlateBrush::operator=(&this->MediumKnob,(FSlateBrush *)Resources.DefaultMediumKnob.Object);
  FSlateBrush::operator=
            (&this->MediumKnobOverlay,(FSlateBrush *)Resources.DefaultMediumKnobOverlay.Object);
  FSlateBrush::operator=(&this->LargeKnob,(FSlateBrush *)Resources.DefaultLargeKnob.Object);
  FSlateBrush::operator=
            (&this->LargeKnobOverlay,(FSlateBrush *)Resources.DefaultLargeKnobOverlay.Object);
  return this;
}

// ~FSynthKnobStyle @ 14f0bf8b0

void __thiscall FSynthKnobStyle::~FSynthKnobStyle(FSynthKnobStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FSynthKnobStyle__6B_;
  (this->MediumKnobOverlay)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediumKnobOverlay).ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  pTVar1 = (this->MediumKnob).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->MediumKnob)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->LargeKnobOverlay).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->LargeKnobOverlay)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->LargeKnob).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->LargeKnob)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14f0c1650

FSynthKnobStyle * __thiscall
FSynthKnobStyle::operator=(FSynthKnobStyle *this,FSynthKnobStyle *param_1)

{
  FSlateBrush::operator=(&this->LargeKnob,&param_1->LargeKnob);
  FSlateBrush::operator=(&this->LargeKnobOverlay,&param_1->LargeKnobOverlay);
  FSlateBrush::operator=(&this->MediumKnob,&param_1->MediumKnob);
  FSlateBrush::operator=(&this->MediumKnobOverlay,&param_1->MediumKnobOverlay);
  this->MinValueAngle = param_1->MinValueAngle;
  this->MaxValueAngle = param_1->MaxValueAngle;
  this->KnobSize = param_1->KnobSize;
  return this;
}

// GetBaseBrush @ 14f0d8df0

FSlateBrush * __thiscall FSynthKnobStyle::GetBaseBrush(FSynthKnobStyle *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = &this->LargeKnob;
  if (this->KnobSize == Medium) {
    pFVar1 = &this->MediumKnob;
  }
  return pFVar1;
}

// GetDefault @ 14f0d9170

FSynthKnobStyle * __cdecl FSynthKnobStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSynthKnobStyle(&::Default);
      atexit(`FSynthKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetOverlayBrush @ 14f0da5b0

FSlateBrush * __thiscall FSynthKnobStyle::GetOverlayBrush(FSynthKnobStyle *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = &this->LargeKnobOverlay;
  if (this->KnobSize == Medium) {
    pFVar1 = &this->MediumKnobOverlay;
  }
  return pFVar1;
}

// GetResources @ 14f0dd9c0

void __thiscall
FSynthKnobStyle::GetResources
          (FSynthKnobStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_28 = &this->LargeKnob;
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
  local_20 = &this->LargeKnobOverlay;
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
  local_18 = &this->MediumKnob;
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
  local_10 = &this->MediumKnobOverlay;
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

// GetTypeName @ 14f0df160

FName __thiscall FSynthKnobStyle::GetTypeName(FSynthKnobStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// Initialize @ 14f0e7240

void __cdecl FSynthKnobStyle::Initialize(void)

{
  code *pcVar1;
  FSlateStyleSet *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FSynthKnobStyle *pFVar4;
  
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
  FSlateStyleSet::Set<FSynthKnobStyle>(this,TypeName,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

