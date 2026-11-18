// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticStruct @ 14252dab0

UScriptStruct * __cdecl FSegmentedControlStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSegmentedControlStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSegmentedControlStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSegmentedControlStyle,(UObject *)pUVar1,
                         L"SegmentedControlStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSegmentedControlStyle.OuterSingleton;
}

// FSegmentedControlStyle @ 142544b30

FSegmentedControlStyle * __thiscall
FSegmentedControlStyle::FSegmentedControlStyle(FSegmentedControlStyle *this)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8 [4];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FSegmentedControlStyle__6B_;
  FCheckBoxStyle::FCheckBoxStyle(&this->ControlStyle);
  FCheckBoxStyle::FCheckBoxStyle(&this->FirstControlStyle);
  FCheckBoxStyle::FCheckBoxStyle(&this->LastControlStyle);
  local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,
                      (FDeprecateVector2DParameter *)&local_res8[0]._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  (this->UniformPadding).Left = 0.0;
  (this->UniformPadding).Top = 0.0;
  (this->UniformPadding).Right = 0.0;
  (this->UniformPadding).Bottom = 0.0;
  return this;
}

// ~FSegmentedControlStyle @ 14254b7d0

void __thiscall FSegmentedControlStyle::~FSegmentedControlStyle(FSegmentedControlStyle *this)

{
  this->_padding_ = (longlong)&___7FSegmentedControlStyle__6B_;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FCheckBoxStyle::~FCheckBoxStyle(&this->LastControlStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&this->FirstControlStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&this->ControlStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257ff80

FSegmentedControlStyle * __cdecl FSegmentedControlStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSegmentedControlStyle(&::Default);
      atexit(`FSegmentedControlStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142585a50

void __thiscall
FSegmentedControlStyle::GetResources
          (FSegmentedControlStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->BackgroundBrush;
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
  (**(code **)(*(longlong *)&this->ControlStyle + 8))(&this->ControlStyle,param_1);
  (**(code **)(*(longlong *)&this->FirstControlStyle + 8))(&this->FirstControlStyle,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142585b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->LastControlStyle + 8))(&this->LastControlStyle,param_1);
  return;
}

// GetTypeName @ 142589cf0

FName __thiscall FSegmentedControlStyle::GetTypeName(FSegmentedControlStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

