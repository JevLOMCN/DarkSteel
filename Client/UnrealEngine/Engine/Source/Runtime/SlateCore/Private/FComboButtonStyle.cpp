// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 14252e500

UScriptStruct * __cdecl FComboButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComboButtonStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FComboButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComboButtonStyle,(UObject *)pUVar1,
                         L"ComboButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FComboButtonStyle.OuterSingleton;
}

// FComboButtonStyle @ 1425428a0

FComboButtonStyle * __thiscall
FComboButtonStyle::FComboButtonStyle(FComboButtonStyle *this,FComboButtonStyle *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined ***)this = &___7FComboButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle,&param_1->ButtonStyle);
  FSlateBrush::FSlateBrush(&this->DownArrowImage,&param_1->DownArrowImage);
  this->ShadowOffset = param_1->ShadowOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 =
       *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = uVar1;
  FSlateBrush::FSlateBrush(&this->MenuBorderBrush,&param_1->MenuBorderBrush);
  fVar2 = (param_1->MenuBorderPadding).Top;
  fVar3 = (param_1->MenuBorderPadding).Right;
  fVar4 = (param_1->MenuBorderPadding).Bottom;
  (this->MenuBorderPadding).Left = (param_1->MenuBorderPadding).Left;
  (this->MenuBorderPadding).Top = fVar2;
  (this->MenuBorderPadding).Right = fVar3;
  (this->MenuBorderPadding).Bottom = fVar4;
  fVar2 = (param_1->ContentPadding).Top;
  fVar3 = (param_1->ContentPadding).Right;
  fVar4 = (param_1->ContentPadding).Bottom;
  (this->ContentPadding).Left = (param_1->ContentPadding).Left;
  (this->ContentPadding).Top = fVar2;
  (this->ContentPadding).Right = fVar3;
  (this->ContentPadding).Bottom = fVar4;
  fVar2 = (param_1->DownArrowPadding).Top;
  fVar3 = (param_1->DownArrowPadding).Right;
  fVar4 = (param_1->DownArrowPadding).Bottom;
  (this->DownArrowPadding).Left = (param_1->DownArrowPadding).Left;
  (this->DownArrowPadding).Top = fVar2;
  (this->DownArrowPadding).Right = fVar3;
  (this->DownArrowPadding).Bottom = fVar4;
  (this->DownArrowAlign).Value = (param_1->DownArrowAlign).Value;
  return this;
}

// FComboButtonStyle @ 142542960

FComboButtonStyle * __thiscall FComboButtonStyle::FComboButtonStyle(FComboButtonStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FComboButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  FSlateBrush::FSlateBrush(&this->DownArrowImage);
  this->ShadowOffset = (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->ShadowColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FSlateBrush::FSlateBrush(&this->MenuBorderBrush);
  (this->ContentPadding).Left = 5.0;
  (this->MenuBorderPadding).Left = 0.0;
  (this->MenuBorderPadding).Top = 0.0;
  (this->MenuBorderPadding).Right = 0.0;
  (this->MenuBorderPadding).Bottom = 0.0;
  (this->ContentPadding).Top = 5.0;
  (this->ContentPadding).Right = 5.0;
  (this->ContentPadding).Bottom = 5.0;
  (this->DownArrowPadding).Left = 2.0;
  (this->DownArrowPadding).Top = 2.0;
  (this->DownArrowPadding).Right = 2.0;
  (this->DownArrowPadding).Bottom = 2.0;
  (this->DownArrowAlign).Value = '\x02';
  return this;
}

// ~FComboButtonStyle @ 14254adf0

void __thiscall FComboButtonStyle::~FComboButtonStyle(FComboButtonStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FComboButtonStyle__6B_;
  (this->MenuBorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuBorderBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->DownArrowImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DownArrowImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254da50

FComboButtonStyle * __thiscall
FComboButtonStyle::operator=(FComboButtonStyle *this,FComboButtonStyle *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FButtonStyle::operator=(&this->ButtonStyle,&param_1->ButtonStyle);
  FSlateBrush::operator=(&this->DownArrowImage,&param_1->DownArrowImage);
  this->ShadowOffset = param_1->ShadowOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 =
       *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = uVar1;
  FSlateBrush::operator=(&this->MenuBorderBrush,&param_1->MenuBorderBrush);
  fVar2 = (param_1->MenuBorderPadding).Top;
  fVar3 = (param_1->MenuBorderPadding).Right;
  fVar4 = (param_1->MenuBorderPadding).Bottom;
  (this->MenuBorderPadding).Left = (param_1->MenuBorderPadding).Left;
  (this->MenuBorderPadding).Top = fVar2;
  (this->MenuBorderPadding).Right = fVar3;
  (this->MenuBorderPadding).Bottom = fVar4;
  fVar2 = (param_1->ContentPadding).Top;
  fVar3 = (param_1->ContentPadding).Right;
  fVar4 = (param_1->ContentPadding).Bottom;
  (this->ContentPadding).Left = (param_1->ContentPadding).Left;
  (this->ContentPadding).Top = fVar2;
  (this->ContentPadding).Right = fVar3;
  (this->ContentPadding).Bottom = fVar4;
  fVar2 = (param_1->DownArrowPadding).Top;
  fVar3 = (param_1->DownArrowPadding).Right;
  fVar4 = (param_1->DownArrowPadding).Bottom;
  (this->DownArrowPadding).Left = (param_1->DownArrowPadding).Left;
  (this->DownArrowPadding).Top = fVar2;
  (this->DownArrowPadding).Right = fVar3;
  (this->DownArrowPadding).Bottom = fVar4;
  (this->DownArrowAlign).Value = (param_1->DownArrowAlign).Value;
  return this;
}

// GetDefault @ 14257f580

FComboButtonStyle * __cdecl FComboButtonStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FComboButtonStyle(&::Default);
      atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142583c80

void __thiscall
FComboButtonStyle::GetResources
          (FComboButtonStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->MenuBorderBrush;
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
  local_10 = &this->DownArrowImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
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
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
                    /* WARNING: Could not recover jumptable at 0x000142583dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->ButtonStyle + 8))(&this->ButtonStyle,param_1);
  return;
}

// GetTypeName @ 142589b30

FName __thiscall FComboButtonStyle::GetTypeName(FComboButtonStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

