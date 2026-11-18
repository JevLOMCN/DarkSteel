// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 20

// Set<FAudioMaterialButtonStyle> @ 14d8a32b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMaterialButtonStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMaterialButtonStyle *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
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
  pTVar6 = ::operator_new(0x98);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMaterialButtonStyle___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
    pUVar1 = (UObject *)param_2->_padding_;
    *(UObject **)&pTVar6[1].SharedReferenceCount = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pTVar6[2]._padding_ = param_2->_padding_;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialButtonStyle__6B_;
    uVar3 = *(undefined8 *)&(param_2->ButtonMainColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonMainColor).field0_0x0 + 8);
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonMainColorTint_1).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonMainColorTint_1).field0_0x0 + 8);
    pTVar6[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[4]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonMainColorTint_2).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonMainColorTint_2).field0_0x0 + 8);
    pTVar6[4].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[5]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonAccentColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonAccentColor).field0_0x0 + 8);
    pTVar6[5].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[6]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonShadowColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonShadowColor).field0_0x0 + 8);
    pTVar6[6].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[7]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonUnpressedOutlineColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonUnpressedOutlineColor).field0_0x0 + 8);
    pTVar6[7].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[7].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[8]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->ButtonPressedOutlineColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->ButtonPressedOutlineColor).field0_0x0 + 8);
    pTVar6[8].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[8].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[9]._padding_ = lVar4;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_40 = pTVar6 + 1;
    pTStack_38 = pTVar6;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioMaterialButtonStyle::TypeName
            );
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMaterialEnvelopeStyle> @ 14d8a3490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMaterialEnvelopeStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMaterialEnvelopeStyle *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
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
  pTVar6 = ::operator_new(0x58);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMaterialEnvelopeStyle___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
    pUVar1 = (UObject *)param_2->_padding_;
    *(UObject **)&pTVar6[1].SharedReferenceCount = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pTVar6[2]._padding_ = param_2->_padding_;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialEnvelopeStyle__6B_;
    uVar3 = *(undefined8 *)&(param_2->CurveColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->CurveColor).field0_0x0 + 8);
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->BackgroundColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->BackgroundColor).field0_0x0 + 8);
    pTVar6[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[4]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->OutlineColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->OutlineColor).field0_0x0 + 8);
    pTVar6[4].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[5]._padding_ = lVar4;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_40 = pTVar6 + 1;
    pTStack_38 = pTVar6;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FAudioMaterialEnvelopeStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMaterialKnobStyle> @ 14d8a3650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMaterialKnobStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMaterialKnobStyle *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
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
  pTVar6 = ::operator_new(0x1d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMaterialKnobStyle___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
    pUVar1 = (UObject *)param_2->_padding_;
    *(UObject **)&pTVar6[1].SharedReferenceCount = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pTVar6[2]._padding_ = param_2->_padding_;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialKnobStyle__6B_;
    uVar3 = *(undefined8 *)&(param_2->KnobMainColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobMainColor).field0_0x0 + 8);
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobAccentColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobAccentColor).field0_0x0 + 8);
    pTVar6[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[4]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobShadowColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobShadowColor).field0_0x0 + 8);
    pTVar6[4].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[5]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobSmoothBevelColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobSmoothBevelColor).field0_0x0 + 8);
    pTVar6[5].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[6]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobIndicatorDotColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobIndicatorDotColor).field0_0x0 + 8);
    pTVar6[6].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[7]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobEdgeFillColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobEdgeFillColor).field0_0x0 + 8);
    pTVar6[7].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[7].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[8]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarColor).field0_0x0 + 8);
    pTVar6[8].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[8].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[9]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarShadowColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarShadowColor).field0_0x0 + 8);
    pTVar6[9].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[9].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[10]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarFillMinColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarFillMinColor).field0_0x0 + 8);
    pTVar6[10].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[10].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[0xb]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarFillMidColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarFillMidColor).field0_0x0 + 8);
    pTVar6[0xb].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[0xb].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[0xc]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarFillMaxColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarFillMaxColor).field0_0x0 + 8);
    pTVar6[0xc].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[0xc].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[0xd]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->KnobBarFillTintColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->KnobBarFillTintColor).field0_0x0 + 8);
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[0xd].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[0xe]._padding_ = lVar4;
    pTVar6[0xf]._padding_ = (longlong)&___7FAudioTextBoxStyle__6B_;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar6 + 0x10),&(param_2->TextBoxStyle).BackgroundImage);
    uVar3 = *(undefined8 *)
             ((longlong)&(param_2->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
    local_40 = pTVar6 + 1;
    pTVar6[0x1b]._padding_ =
         *(longlong *)&(param_2->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
    pTVar6[0x1b].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[0x1b].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    *(undefined4 *)&pTVar6[0x1c]._padding_ =
         *(undefined4 *)&(param_2->TextBoxStyle).BackgroundColor.ColorUseRule;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar6;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioMaterialKnobStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMaterialMeterStyle> @ 14d8a38b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMaterialMeterStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMaterialMeterStyle *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
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
  pTVar7 = ::operator_new(0x100);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMaterialMeterStyle___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
    pUVar1 = (UObject *)param_2->_padding_;
    *(UObject **)&pTVar7[1].SharedReferenceCount = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pTVar7[2]._padding_ = param_2->_padding_;
    pTVar7[1]._padding_ = (longlong)&___7FAudioMaterialMeterStyle__6B_;
    uVar3 = *(undefined8 *)&(param_2->MeterFillMinColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->MeterFillMinColor).field0_0x0 + 8);
    pTVar7[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar7[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar7[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->MeterFillMidColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->MeterFillMidColor).field0_0x0 + 8);
    pTVar7[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar7[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar7[4]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->MeterFillMaxColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->MeterFillMaxColor).field0_0x0 + 8);
    pTVar7[4].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar7[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar7[5]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->MeterFillBackgroundColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->MeterFillBackgroundColor).field0_0x0 + 8);
    pTVar7[5].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar7[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar7[6]._padding_ = lVar4;
    dVar5 = (param_2->MeterPadding).field0_0x0._s_0.Y;
    *(double *)&pTVar7[6].SharedReferenceCount = (param_2->MeterPadding).field0_0x0._s_0.X;
    pTVar7[7]._padding_ = (longlong)dVar5;
    dVar5 = (param_2->ValueRangeDb).field0_0x0._s_0.Y;
    *(double *)&pTVar7[7].SharedReferenceCount = (param_2->ValueRangeDb).field0_0x0._s_0.X;
    pTVar7[8]._padding_ = (longlong)dVar5;
    *(bool *)&pTVar7[8].SharedReferenceCount = param_2->bShowScale;
    pTVar7[8].SharedReferenceCount.field_0x1 = param_2->bScaleSide;
    pTVar7[8].WeakReferenceCount = (atomic<int>)param_2->ScaleHashOffset;
    *(float *)&pTVar7[9]._padding_ = param_2->ScaleHashWidth;
    *(float *)((longlong)&pTVar7[9]._padding_ + 4) = param_2->ScaleHashHeight;
    pTVar7[9].SharedReferenceCount = (atomic<int>)param_2->DecibelsPerHash;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(pTVar7 + 10),&param_2->Font);
    local_40 = pTVar7 + 1;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar7;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioMaterialMeterStyle::TypeName)
  ;
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMaterialSliderStyle> @ 14d8a3ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMaterialSliderStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMaterialSliderStyle *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
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
  pTVar6 = ::operator_new(0x160);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMaterialSliderStyle___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
    pUVar1 = (UObject *)param_2->_padding_;
    *(UObject **)&pTVar6[1].SharedReferenceCount = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pTVar6[2]._padding_ = param_2->_padding_;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMaterialSliderStyle__6B_;
    uVar3 = *(undefined8 *)&(param_2->SliderBackgroundColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->SliderBackgroundColor).field0_0x0 + 8);
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[3]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->SliderBackgroundAccentColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->SliderBackgroundAccentColor).field0_0x0 + 8);
    pTVar6[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[4]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->SliderValueMainColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->SliderValueMainColor).field0_0x0 + 8);
    pTVar6[4].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[5]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->SliderHandleMainColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->SliderHandleMainColor).field0_0x0 + 8);
    pTVar6[5].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[6]._padding_ = lVar4;
    uVar3 = *(undefined8 *)&(param_2->SliderHandleOutlineColor).field0_0x0;
    lVar4 = *(longlong *)((longlong)&(param_2->SliderHandleOutlineColor).field0_0x0 + 8);
    pTVar6[6].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    pTVar6[7]._padding_ = lVar4;
    pTVar6[8]._padding_ = (longlong)&___7FAudioTextBoxStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar6 + 9),&(param_2->TextBoxStyle).BackgroundImage);
    uVar3 = *(undefined8 *)
             ((longlong)&(param_2->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
    local_40 = pTVar6 + 1;
    pTVar6[0x14]._padding_ =
         *(longlong *)&(param_2->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
    pTVar6[0x14].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar6[0x14].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    *(undefined4 *)&pTVar6[0x15]._padding_ =
         *(undefined4 *)&(param_2->TextBoxStyle).BackgroundColor.ColorUseRule;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar6;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioMaterialSliderStyle::TypeName
            );
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMeterDefaultColorStyle> @ 14d8a3cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMeterDefaultColorStyle>
          (FSlateStyleSet *this,FName param_1,FAudioMeterDefaultColorStyle *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
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
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioMeterDefaultColorStyle___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMeterDefaultColorWidgetStyle__6B_;
    uVar3 = *(undefined4 *)&param_2->field_0xc;
    lVar2 = *(longlong *)&param_2->field_0x10;
    pTVar6[1].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x8;
    pTVar6[1].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[2]._padding_ = lVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x1c;
    lVar2 = *(longlong *)&param_2->field_0x20;
    pTVar6[2].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x18;
    pTVar6[2].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[3]._padding_ = lVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x2c;
    lVar2 = *(longlong *)&param_2->field_0x30;
    pTVar6[3].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x28;
    pTVar6[3].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[4]._padding_ = lVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x3c;
    lVar2 = *(longlong *)&param_2->field_0x40;
    pTVar6[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x38;
    pTVar6[4].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[5]._padding_ = lVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x4c;
    lVar2 = *(longlong *)&param_2->field_0x50;
    pTVar6[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x48;
    pTVar6[5].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[6]._padding_ = lVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x58;
    uVar4 = *(undefined4 *)&param_2->field_0x5c;
    lVar2 = *(longlong *)&param_2->field_0x60;
    pTVar6[1]._padding_ = (longlong)&___7FAudioMeterDefaultColorStyle__6B_;
    pTVar6[6].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[6].WeakReferenceCount = (atomic<int>)uVar4;
    pTVar6[7]._padding_ = lVar2;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_40 = pTVar6 + 1;
    pTStack_38 = pTVar6;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FAudioMeterDefaultColorStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioMeterStyle> @ 14d8a3e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioMeterStyle>(FSlateStyleSet *this,FName param_1,FAudioMeterStyle *param_2)

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
  pTVar3 = ::operator_new(0x440);
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
         &___7__TIntrusiveReferenceController_UFAudioMeterStyle___00_SharedPointerInternals__6B_;
    FAudioMeterWidgetStyle::FAudioMeterWidgetStyle
              ((FAudioMeterWidgetStyle *)(pTVar3 + 1),(FAudioMeterWidgetStyle *)param_2);
    local_40 = pTVar3 + 1;
    pTVar3[1]._padding_ = (longlong)&___7FAudioMeterStyle__6B_;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioMeterStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioOscilloscopePanelStyle> @ 14d8a4000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioOscilloscopePanelStyle>
          (FSlateStyleSet *this,FName param_1,FAudioOscilloscopePanelStyle *param_2)

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
  pTVar3 = ::operator_new(0x450);
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
         &
         ___7__TIntrusiveReferenceController_UFAudioOscilloscopePanelStyle___00_SharedPointerInternals__6B_
    ;
    FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
              ((FAudioOscilloscopePanelStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FAudioOscilloscopePanelStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioRadialSliderStyle> @ 14d8a4170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioRadialSliderStyle>
          (FSlateStyleSet *this,FName param_1,FAudioRadialSliderStyle *param_2)

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
  pTVar3 = ::operator_new(0x150);
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
         &
         ___7__TIntrusiveReferenceController_UFAudioRadialSliderStyle___00_SharedPointerInternals__6B_
    ;
    FAudioRadialSliderStyle::FAudioRadialSliderStyle
              ((FAudioRadialSliderStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioRadialSliderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioSliderStyle> @ 14d8a42e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioSliderStyle>
          (FSlateStyleSet *this,FName param_1,FAudioSliderStyle *param_2)

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
  pTVar3 = ::operator_new(0x660);
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
         &___7__TIntrusiveReferenceController_UFAudioSliderStyle___00_SharedPointerInternals__6B_;
    FAudioSliderStyle::FAudioSliderStyle((FAudioSliderStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioSliderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioSpectrumPlotStyle> @ 14d8a4450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioSpectrumPlotStyle>
          (FSlateStyleSet *this,FName param_1,FAudioSpectrumPlotStyle *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
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
  pTVar5 = ::operator_new(0x140);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAudioSpectrumPlotStyle___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FAudioSpectrumPlotStyle__6B_;
    uVar2 = *(undefined8 *)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0;
    lVar3 = *(longlong *)((longlong)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    pTVar5[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar5[2]._padding_ = lVar3;
    pTVar5[2].SharedReferenceCount = *(atomic<int> *)&(param_2->BackgroundColor).ColorUseRule;
    uVar2 = *(undefined8 *)((longlong)&(param_2->GridColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&pTVar5[2].WeakReferenceCount =
         *(undefined8 *)&(param_2->GridColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&pTVar5[3]._padding_ + 4) = uVar2;
    pTVar5[3].WeakReferenceCount = *(atomic<int> *)&(param_2->GridColor).ColorUseRule;
    uVar2 = *(undefined8 *)((longlong)&(param_2->AxisLabelColor).SpecifiedColor.field0_0x0 + 8);
    pTVar5[4]._padding_ = *(longlong *)&(param_2->AxisLabelColor).SpecifiedColor.field0_0x0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)&pTVar5[5]._padding_ = *(undefined4 *)&(param_2->AxisLabelColor).ColorUseRule;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)&pTVar5[5].SharedReferenceCount,&param_2->AxisLabelFont);
    uVar2 = *(undefined8 *)&(param_2->SpectrumColor).SpecifiedColor.field0_0x0;
    lVar3 = *(longlong *)((longlong)&(param_2->SpectrumColor).SpecifiedColor.field0_0x0 + 8);
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar5[0xc]._padding_ = lVar3;
    pTVar5[0xc].SharedReferenceCount = *(atomic<int> *)&(param_2->SpectrumColor).ColorUseRule;
    uVar2 = *(undefined8 *)((longlong)&(param_2->CrosshairColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&pTVar5[0xc].WeakReferenceCount =
         *(undefined8 *)&(param_2->CrosshairColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&pTVar5[0xd]._padding_ + 4) = uVar2;
    pTVar5[0xd].WeakReferenceCount = *(atomic<int> *)&(param_2->CrosshairColor).ColorUseRule;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(pTVar5 + 0xe),&param_2->CrosshairLabelFont);
    local_40 = pTVar5 + 1;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar5;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioSpectrumPlotStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioTextBoxStyle> @ 14d8a4640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioTextBoxStyle>
          (FSlateStyleSet *this,FName param_1,FAudioTextBoxStyle *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
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
  pTVar4 = ::operator_new(0xf0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFAudioTextBoxStyle___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)&___7FAudioTextBoxStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar4 + 2),&param_2->BackgroundImage);
    uVar2 = *(undefined8 *)((longlong)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_40 = pTVar4 + 1;
    pTVar4[0xd]._padding_ = *(longlong *)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0;
    pTVar4[0xd].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar4[0xd].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)&pTVar4[0xe]._padding_ = *(undefined4 *)&(param_2->BackgroundColor).ColorUseRule;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar4;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FAudioTextBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FAudioVectorscopePanelStyle> @ 14d8a47e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FAudioVectorscopePanelStyle>
          (FSlateStyleSet *this,FName param_1,FAudioVectorscopePanelStyle *param_2)

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
  pTVar3 = ::operator_new(0x1b0);
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
         &
         ___7__TIntrusiveReferenceController_UFAudioVectorscopePanelStyle___00_SharedPointerInternals__6B_
    ;
    FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
              ((FAudioVectorscopePanelStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FAudioVectorscopePanelStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FFixedSampleSequenceRulerStyle> @ 14d8a4950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FFixedSampleSequenceRulerStyle>
          (FSlateStyleSet *this,FName param_1,FFixedSampleSequenceRulerStyle *param_2)

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
  pTVar3 = ::operator_new(0x240);
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
         &
         ___7__TIntrusiveReferenceController_UFFixedSampleSequenceRulerStyle___00_SharedPointerInternals__6B_
    ;
    FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
              ((FFixedSampleSequenceRulerStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FFixedSampleSequenceRulerStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FPlayheadOverlayStyle> @ 14d8a4ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FPlayheadOverlayStyle>
          (FSlateStyleSet *this,FName param_1,FPlayheadOverlayStyle *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
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
  pTVar5 = ::operator_new(0x38);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPlayheadOverlayStyle___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FPlayheadOverlayStyle__6B_;
    uVar2 = *(undefined8 *)&(param_2->PlayheadColor).SpecifiedColor.field0_0x0;
    lVar3 = *(longlong *)((longlong)&(param_2->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
    pTVar5[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar5[2]._padding_ = lVar3;
    pTVar5[2].SharedReferenceCount = *(atomic<int> *)&(param_2->PlayheadColor).ColorUseRule;
    pTVar5[2].WeakReferenceCount = (atomic<int>)param_2->PlayheadWidth;
    *(float *)&pTVar5[3]._padding_ = param_2->DesiredWidth;
    *(float *)((longlong)&pTVar5[3]._padding_ + 4) = param_2->DesiredHeight;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_40 = pTVar5 + 1;
    pTStack_38 = pTVar5;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FPlayheadOverlayStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSampledSequenceValueGridOverlayStyle> @ 14d8a4c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSampledSequenceValueGridOverlayStyle>
          (FSlateStyleSet *this,FName param_1,FSampledSequenceValueGridOverlayStyle *param_2)

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
  pTVar3 = ::operator_new(0xb0);
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
         &
         ___7__TIntrusiveReferenceController_UFSampledSequenceValueGridOverlayStyle___00_SharedPointerInternals__6B_
    ;
    FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
              ((FSampledSequenceValueGridOverlayStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FSampledSequenceValueGridOverlayStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSampledSequenceVectorViewerStyle> @ 14d8a4dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSampledSequenceVectorViewerStyle>
          (FSlateStyleSet *this,FName param_1,FSampledSequenceVectorViewerStyle *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
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
  pTVar5 = ::operator_new(0x100);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSampledSequenceVectorViewerStyle___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FSampledSequenceVectorViewerStyle__6B_;
    uVar2 = *(undefined8 *)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0;
    lVar3 = *(longlong *)((longlong)&(param_2->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    pTVar5[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar5[2]._padding_ = lVar3;
    pTVar5[2].SharedReferenceCount = *(atomic<int> *)&(param_2->BackgroundColor).ColorUseRule;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 3),&param_2->BackgroundBrush);
    uVar2 = *(undefined8 *)((longlong)&(param_2->LineColor).field0_0x0 + 8);
    local_40 = pTVar5 + 1;
    pTVar5[0xe]._padding_ = *(longlong *)&(param_2->LineColor).field0_0x0;
    pTVar5[0xe].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[0xe].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    *(float *)&pTVar5[0xf]._padding_ = param_2->LineThickness;
    if (local_40 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_38 = pTVar5;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FSampledSequenceVectorViewerStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSampledSequenceViewerStyle> @ 14d8a4f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSampledSequenceViewerStyle>
          (FSlateStyleSet *this,FName param_1,FSampledSequenceViewerStyle *param_2)

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
  pTVar3 = ::operator_new(0x150);
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
         &
         ___7__TIntrusiveReferenceController_UFSampledSequenceViewerStyle___00_SharedPointerInternals__6B_
    ;
    FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
              ((FSampledSequenceViewerStyle *)(pTVar3 + 1),param_2);
    local_40 = pTVar3 + 1;
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
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FSampledSequenceViewerStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FTriggerThresholdLineStyle> @ 14d8a50e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FTriggerThresholdLineStyle>
          (FSlateStyleSet *this,FName param_1,FTriggerThresholdLineStyle *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
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
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTriggerThresholdLineStyle___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FTriggerThresholdLineStyle__6B_;
    uVar2 = *(undefined8 *)&(param_2->LineColor).field0_0x0;
    lVar3 = *(longlong *)((longlong)&(param_2->LineColor).field0_0x0 + 8);
    pTVar5[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar5[2]._padding_ = lVar3;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_40 = pTVar5 + 1;
    pTStack_38 = pTVar5;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->KnownWidgetStyles,(FName *)local_58,
             (bool *)&FTriggerThresholdLineStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 14d967d80

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,TVector2<double> *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  undefined1 local_res18 [8];
  float local_res20;
  float local_res24;
  FMemScope local_38;
  FName *local_30;
  float *local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18._0_4_ = LLMTagDeclaration_UI_Style.UniqueName.ComparisonIndex.Value;
  local_res18._4_4_ = LLMTagDeclaration_UI_Style.UniqueName.Number;
  FMemScope::FMemScope(&local_38,(FName *)local_res18,true);
  local_30 = &local_res10;
  local_res20 = (float)(param_2->field0_0x0)._s_0.X;
  local_28 = &local_res20;
  local_res24 = (float)(param_2->field0_0x0)._s_0.Y;
  TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UE::Math::TVector2<float>_&&>_>
            ((TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->Vector2DValues,
             (TPairInitializer<FName_const_&,UE::Math::TVector2<float>_&&> *)local_res18,
             (bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

