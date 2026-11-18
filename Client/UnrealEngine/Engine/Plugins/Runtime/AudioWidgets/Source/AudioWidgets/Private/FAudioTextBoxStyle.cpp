// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// StaticStruct @ 14d88edb0

UScriptStruct * __cdecl FAudioTextBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioTextBoxStyle,(UObject *)pUVar1,
                         L"AudioTextBoxStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.OuterSingleton;
}

// FAudioTextBoxStyle @ 14d8b42d0

FAudioTextBoxStyle * __thiscall FAudioTextBoxStyle::FAudioTextBoxStyle(FAudioTextBoxStyle *this)

{
  float fVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FSlateBrush *pFVar4;
  FDeprecateVector2DParameter local_res8 [4];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  fVar1 = __real_40800000;
  *(undefined ***)this = &___7FAudioTextBoxStyle__6B_;
  local_res8[0]._0_4_ = 0x42600000;
  local_res8[0]._4_4_ = 0x41e00000;
  pFVar4 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_b8,&FStyleColors::White,fVar1,local_res8);
  FSlateBrush::FSlateBrush(&this->BackgroundImage,pFVar4);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Recessed.ColorTableId;
  uVar3 = FStyleColors::Recessed._18_2_;
  (this->BackgroundColor).ColorUseRule = FStyleColors::Recessed.ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar3;
  return this;
}

// ~FAudioTextBoxStyle @ 14d8bf080

void __thiscall FAudioTextBoxStyle::~FAudioTextBoxStyle(FAudioTextBoxStyle *this)

{
  *(undefined ***)this = &___7FAudioTextBoxStyle__6B_;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14d92ce60

FAudioTextBoxStyle * __cdecl FAudioTextBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioTextBoxStyle(&::Default);
      atexit(`FAudioTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934350

void __thiscall
FAudioTextBoxStyle::GetResources
          (FAudioTextBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->BackgroundImage;
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

// GetTypeName @ 14d9374f0

FName __thiscall FAudioTextBoxStyle::GetTypeName(FAudioTextBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

