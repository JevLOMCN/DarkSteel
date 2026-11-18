// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// Set<FSynth2DSliderStyle> @ 14f0b3c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSynth2DSliderStyle>
          (FSlateStyleSet *this,FName param_1,FSynth2DSliderStyle *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  undefined1 local_58 [4];
  FName local_54;
  FMemScope local_48;
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FName *local_30;
  TReferenceControllerBase<1> **local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_54 = LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_48,&local_54,true);
  pTVar3 = ::operator_new(0x3a0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFSynth2DSliderStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FSynth2DSliderStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->NormalThumbImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->DisabledThumbImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x18),&param_2->NormalBarImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x23),&param_2->DisabledBarImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x2e),&param_2->BackgroundImage);
    local_40 = pTVar3 + 1;
    *(float *)&pTVar3[0x39]._padding_ = param_2->BarThickness;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar3;
  }
  local_30 = &local_res10;
  local_28 = &local_40;
  TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FSlateWidgetStyle,1>_&&>_>
            ((TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
              *)&this->WidgetStyleValues,
             (TPairInitializer<FName_const_&,TSharedRef<FSlateWidgetStyle,1>_&&> *)&stack0x00000020,
             (bool *)&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSynth2DSliderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSynthKnobStyle> @ 14f0b3df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSynthKnobStyle>(FSlateStyleSet *this,FName param_1,FSynthKnobStyle *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  undefined1 local_58 [4];
  FName local_54;
  FMemScope local_48;
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FName *local_30;
  TReferenceControllerBase<1> **local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_54 = LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_48,&local_54,true);
  pTVar3 = ::operator_new(0x2f0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFSynthKnobStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FSynthKnobStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->LargeKnob);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->LargeKnobOverlay);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x18),&param_2->MediumKnob);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x23),&param_2->MediumKnobOverlay);
    local_40 = pTVar3 + 1;
    *(float *)&pTVar3[0x2e]._padding_ = param_2->MinValueAngle;
    *(float *)((longlong)&pTVar3[0x2e]._padding_ + 4) = param_2->MaxValueAngle;
    *(ESynthKnobSize *)&pTVar3[0x2e].SharedReferenceCount = param_2->KnobSize;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar3;
  }
  local_30 = &local_res10;
  local_28 = &local_40;
  TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FSlateWidgetStyle,1>_&&>_>
            ((TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
              *)&this->WidgetStyleValues,
             (TPairInitializer<FName_const_&,TSharedRef<FSlateWidgetStyle,1>_&&> *)&stack0x00000020,
             (bool *)&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSynthKnobStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

