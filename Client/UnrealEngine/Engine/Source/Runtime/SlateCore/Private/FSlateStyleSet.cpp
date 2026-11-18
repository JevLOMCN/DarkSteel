// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 86

// Set<FButtonStyle> @ 14253cdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FButtonStyle>(FSlateStyleSet *this,FName param_1,FButtonStyle *param_2)

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
         &___7__TIntrusiveReferenceController_UFButtonStyle___00_SharedPointerInternals__6B_;
    FButtonStyle::FButtonStyle((FButtonStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FButtonStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FCheckBoxStyle> @ 14253cf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FCheckBoxStyle>(FSlateStyleSet *this,FName param_1,FCheckBoxStyle *param_2)

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
  pTVar3 = ::operator_new(0x960);
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
         &___7__TIntrusiveReferenceController_UFCheckBoxStyle___00_SharedPointerInternals__6B_;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FCheckBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FComboBoxStyle> @ 14253d0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FComboBoxStyle>(FSlateStyleSet *this,FName param_1,FComboBoxStyle *param_2)

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
  pTVar3 = ::operator_new(0x5d0);
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
         &___7__TIntrusiveReferenceController_UFComboBoxStyle___00_SharedPointerInternals__6B_;
    FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FComboBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FComboButtonStyle> @ 14253d210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FComboButtonStyle>
          (FSlateStyleSet *this,FName param_1,FComboButtonStyle *param_2)

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
  pTVar3 = ::operator_new(0x570);
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
         &___7__TIntrusiveReferenceController_UFComboButtonStyle___00_SharedPointerInternals__6B_;
    FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FComboButtonStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FDockTabStyle> @ 14253d380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FDockTabStyle>(FSlateStyleSet *this,FName param_1,FDockTabStyle *param_2)

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
  pTVar3 = ::operator_new(0xbf0);
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
         &___7__TIntrusiveReferenceController_UFDockTabStyle___00_SharedPointerInternals__6B_;
    FDockTabStyle::FDockTabStyle((FDockTabStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FDockTabStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FEditableTextBoxStyle> @ 14253d4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FEditableTextBoxStyle>
          (FSlateStyleSet *this,FName param_1,FEditableTextBoxStyle *param_2)

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
  pTVar3 = ::operator_new(0xc90);
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
         ___7__TIntrusiveReferenceController_UFEditableTextBoxStyle___00_SharedPointerInternals__6B_
    ;
    FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FEditableTextBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FEditableTextStyle> @ 14253d660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FEditableTextStyle>
          (FSlateStyleSet *this,FName param_1,FEditableTextStyle *param_2)

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
  pTVar3 = ::operator_new(0x2a0);
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
         &___7__TIntrusiveReferenceController_UFEditableTextStyle___00_SharedPointerInternals__6B_;
    FEditableTextStyle::FEditableTextStyle((FEditableTextStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FEditableTextStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FExpandableAreaStyle> @ 14253d7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FExpandableAreaStyle>
          (FSlateStyleSet *this,FName param_1,FExpandableAreaStyle *param_2)

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
  pTVar3 = ::operator_new(400);
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
         &___7__TIntrusiveReferenceController_UFExpandableAreaStyle___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FExpandableAreaStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->CollapsedImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->ExpandedImage);
    local_40 = pTVar3 + 1;
    *(float *)&pTVar3[0x18]._padding_ = param_2->RolloutAnimationSeconds;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FExpandableAreaStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FHeaderRowStyle> @ 14253d970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FHeaderRowStyle>(FSlateStyleSet *this,FName param_1,FHeaderRowStyle *param_2)

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
  pTVar4 = ::operator_new(0xfb0);
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
         &___7__TIntrusiveReferenceController_UFHeaderRowStyle___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)&___7FHeaderRowStyle__6B_;
    FTableColumnHeaderStyle::FTableColumnHeaderStyle
              ((FTableColumnHeaderStyle *)(pTVar4 + 2),&param_2->ColumnStyle);
    FTableColumnHeaderStyle::FTableColumnHeaderStyle
              ((FTableColumnHeaderStyle *)(pTVar4 + 0x66),&param_2->LastColumnStyle);
    pTVar4[0xca]._padding_ = (longlong)&___7FSplitterStyle__6B_;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar4 + 0xcb),&(param_2->ColumnSplitterStyle).HandleNormalBrush);
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar4 + 0xd6),&(param_2->ColumnSplitterStyle).HandleHighlightBrush);
    *(float *)&pTVar4[0xe1]._padding_ = param_2->SplitterHandleSize;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar4 + 0xe2),&param_2->BackgroundBrush);
    uVar2 = *(undefined8 *)((longlong)&(param_2->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
    pTVar4[0xed]._padding_ = *(longlong *)&(param_2->ForegroundColor).SpecifiedColor.field0_0x0;
    pTVar4[0xed].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar4[0xed].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)&pTVar4[0xee]._padding_ = *(undefined4 *)&(param_2->ForegroundColor).ColorUseRule
    ;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar4 + 0xef),&param_2->HorizontalSeparatorBrush);
    local_40 = pTVar4 + 1;
    *(float *)&pTVar4[0xfa]._padding_ = param_2->HorizontalSeparatorThickness;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FHeaderRowStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FHyperlinkStyle> @ 14253db90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FHyperlinkStyle>(FSlateStyleSet *this,FName param_1,FHyperlinkStyle *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
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
  pTVar5 = ::operator_new(0x6a0);
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
         &___7__TIntrusiveReferenceController_UFHyperlinkStyle___00_SharedPointerInternals__6B_;
    pTVar5[1]._padding_ = (longlong)&___7FHyperlinkStyle__6B_;
    FButtonStyle::FButtonStyle((FButtonStyle *)(pTVar5 + 2),&param_2->UnderlineStyle);
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar5 + 0x3b),&param_2->TextStyle);
    fVar2 = (param_2->Padding).Right;
    fVar3 = (param_2->Padding).Bottom;
    local_40 = pTVar5 + 1;
    pTVar5[0x69]._padding_ = *(longlong *)&param_2->Padding;
    pTVar5[0x69].SharedReferenceCount = (atomic<int>)fVar2;
    pTVar5[0x69].WeakReferenceCount = (atomic<int>)fVar3;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FHyperlinkStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FInlineEditableTextBlockStyle> @ 14253dd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FInlineEditableTextBlockStyle>
          (FSlateStyleSet *this,FName param_1,FInlineEditableTextBlockStyle *param_2)

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
  pTVar3 = ::operator_new(0xf80);
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
         ___7__TIntrusiveReferenceController_UFInlineEditableTextBlockStyle___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
    FEditableTextBoxStyle::FEditableTextBoxStyle
              ((FEditableTextBoxStyle *)(pTVar3 + 2),&param_2->EditableTextBoxStyle);
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar3 + 0xca),&param_2->TextStyle);
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
             (bool *)&FInlineEditableTextBlockStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FProgressBarStyle> @ 14253dec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FProgressBarStyle>
          (FSlateStyleSet *this,FName param_1,FProgressBarStyle *param_2)

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
         &___7__TIntrusiveReferenceController_UFProgressBarStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FProgressBarStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->BackgroundImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->FillImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x18),&param_2->MarqueeImage);
    local_40 = pTVar3 + 1;
    *(bool *)&pTVar3[0x23]._padding_ = param_2->EnableFillAnimation;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FProgressBarStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FScrollBarStyle> @ 14253e070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FScrollBarStyle>(FSlateStyleSet *this,FName param_1,FScrollBarStyle *param_2)

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
         &___7__TIntrusiveReferenceController_UFScrollBarStyle___00_SharedPointerInternals__6B_;
    FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FScrollBarStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FScrollBorderStyle> @ 14253e1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FScrollBorderStyle>
          (FSlateStyleSet *this,FName param_1,FScrollBorderStyle *param_2)

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
  pTVar3 = ::operator_new(0x180);
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
         &___7__TIntrusiveReferenceController_UFScrollBorderStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FScrollBorderStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->TopShadowBrush);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->BottomShadowBrush);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FScrollBorderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FScrollBoxStyle> @ 14253e370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FScrollBoxStyle>(FSlateStyleSet *this,FName param_1,FScrollBoxStyle *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
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
  pTVar5 = ::operator_new(0x300);
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
         &___7__TIntrusiveReferenceController_UFScrollBoxStyle___00_SharedPointerInternals__6B_;
    pTVar5[1]._padding_ = (longlong)&___7FScrollBoxStyle__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)param_2->BarThickness;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 2),&param_2->TopShadowBrush);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 0xd),&param_2->BottomShadowBrush);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 0x18),&param_2->LeftShadowBrush);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 0x23),&param_2->RightShadowBrush);
    fVar2 = (param_2->HorizontalScrolledContentPadding).Right;
    fVar3 = (param_2->HorizontalScrolledContentPadding).Bottom;
    local_40 = pTVar5 + 1;
    pTVar5[0x2e]._padding_ = *(longlong *)&param_2->HorizontalScrolledContentPadding;
    pTVar5[0x2e].SharedReferenceCount = (atomic<int>)fVar2;
    pTVar5[0x2e].WeakReferenceCount = (atomic<int>)fVar3;
    fVar2 = (param_2->VerticalScrolledContentPadding).Right;
    fVar3 = (param_2->VerticalScrolledContentPadding).Bottom;
    pTVar5[0x2f]._padding_ = *(longlong *)&param_2->VerticalScrolledContentPadding;
    pTVar5[0x2f].SharedReferenceCount = (atomic<int>)fVar2;
    pTVar5[0x2f].WeakReferenceCount = (atomic<int>)fVar3;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FScrollBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSearchBoxStyle> @ 14253e550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSearchBoxStyle>(FSlateStyleSet *this,FName param_1,FSearchBoxStyle *param_2)

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
  pTVar3 = ::operator_new(0xff0);
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
         &___7__TIntrusiveReferenceController_UFSearchBoxStyle___00_SharedPointerInternals__6B_;
    FSearchBoxStyle::FSearchBoxStyle((FSearchBoxStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSearchBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSegmentedControlStyle> @ 14253e6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSegmentedControlStyle>
          (FSlateStyleSet *this,FName param_1,FSegmentedControlStyle *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
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
  pTVar5 = ::operator_new(0x1cd0);
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
         ___7__TIntrusiveReferenceController_UFSegmentedControlStyle___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FSegmentedControlStyle__6B_;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(pTVar5 + 2),&param_2->ControlStyle);
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(pTVar5 + 0x97),&param_2->FirstControlStyle);
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)(pTVar5 + 300),&param_2->LastControlStyle);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar5 + 0x1c1),&param_2->BackgroundBrush);
    fVar2 = (param_2->UniformPadding).Right;
    fVar3 = (param_2->UniformPadding).Bottom;
    local_40 = pTVar5 + 1;
    pTVar5[0x1cc]._padding_ = *(longlong *)&param_2->UniformPadding;
    pTVar5[0x1cc].SharedReferenceCount = (atomic<int>)fVar2;
    pTVar5[0x1cc].WeakReferenceCount = (atomic<int>)fVar3;
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSegmentedControlStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateBorderBrush> @ 14253e890

void __thiscall
FSlateStyleSet::Set<FSlateBorderBrush>
          (FSlateStyleSet *this,FName param_1,FSlateBorderBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateBoxBrush> @ 14253e950

void __thiscall
FSlateStyleSet::Set<FSlateBoxBrush>(FSlateStyleSet *this,FName param_1,FSlateBoxBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateBrush> @ 14253ea10

void __thiscall
FSlateStyleSet::Set<FSlateBrush>(FSlateStyleSet *this,FName param_1,FSlateBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FSlateBrush *local_res18;
  FName local_res20;
  FMemScope local_28;
  FName *local_20;
  FSlateBrush **local_18;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_28,&local_res20,true);
  local_20 = &local_res10;
  local_18 = &local_res18;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_const_&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,
             (TPairInitializer<FName_const_&,FSlateBrush_*_const_&> *)&local_res20,(bool *)&local_20
            );
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateColorBrush> @ 14253eab0

void __thiscall
FSlateStyleSet::Set<FSlateColorBrush>(FSlateStyleSet *this,FName param_1,FSlateColorBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateImageBrush> @ 14253eb70

void __thiscall
FSlateStyleSet::Set<FSlateImageBrush>(FSlateStyleSet *this,FName param_1,FSlateImageBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateNoResource> @ 14253ec30

void __thiscall
FSlateStyleSet::Set<FSlateNoResource>(FSlateStyleSet *this,FName param_1,FSlateNoResource *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateRoundedBoxBrush> @ 14253ecf0

void __thiscall
FSlateStyleSet::Set<FSlateRoundedBoxBrush>
          (FSlateStyleSet *this,FName param_1,FSlateRoundedBoxBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSlateVectorImageBrush> @ 14253edb0

void __thiscall
FSlateStyleSet::Set<FSlateVectorImageBrush>
          (FSlateStyleSet *this,FName param_1,FSlateVectorImageBrush *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateBrush_*_&&> local_res18;
  FMemScope local_38;
  FName *local_30;
  FSlateBrush ***local_28;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_res18,true);
  local_30 = &local_res10;
  local_28 = &local_res18.Value;
  local_res18.Value = (FSlateBrush **)param_2;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateBrush_*_&&>_>
            ((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)&this->BrushResources,&local_res18,(bool *)&local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSliderStyle> @ 14253ee70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSliderStyle>(FSlateStyleSet *this,FName param_1,FSliderStyle *param_2)

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
         &___7__TIntrusiveReferenceController_UFSliderStyle___00_SharedPointerInternals__6B_;
    FSliderStyle::FSliderStyle((FSliderStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSliderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSpinBoxStyle> @ 14253efe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSpinBoxStyle>(FSlateStyleSet *this,FName param_1,FSpinBoxStyle *param_2)

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
  pTVar3 = ::operator_new(0x530);
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
         &___7__TIntrusiveReferenceController_UFSpinBoxStyle___00_SharedPointerInternals__6B_;
    FSpinBoxStyle::FSpinBoxStyle((FSpinBoxStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSpinBoxStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FSplitterStyle> @ 14253f150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FSplitterStyle>(FSlateStyleSet *this,FName param_1,FSplitterStyle *param_2)

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
  pTVar3 = ::operator_new(0x180);
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
         &___7__TIntrusiveReferenceController_UFSplitterStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FSplitterStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->HandleNormalBrush);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0xd),&param_2->HandleHighlightBrush);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FSplitterStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FTableColumnHeaderStyle> @ 14253f2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FTableColumnHeaderStyle>
          (FSlateStyleSet *this,FName param_1,FTableColumnHeaderStyle *param_2)

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
  pTVar3 = ::operator_new(0x650);
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
         ___7__TIntrusiveReferenceController_UFTableColumnHeaderStyle___00_SharedPointerInternals__6B_
    ;
    FTableColumnHeaderStyle::FTableColumnHeaderStyle
              ((FTableColumnHeaderStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FTableColumnHeaderStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FTableRowStyle> @ 14253f450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FTableRowStyle>(FSlateStyleSet *this,FName param_1,FTableRowStyle *param_2)

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
  pTVar3 = ::operator_new(0xb60);
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
         &___7__TIntrusiveReferenceController_UFTableRowStyle___00_SharedPointerInternals__6B_;
    FTableRowStyle::FTableRowStyle((FTableRowStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FTableRowStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FTableViewStyle> @ 14253f5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FTableViewStyle>(FSlateStyleSet *this,FName param_1,FTableViewStyle *param_2)

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
  pTVar3 = ::operator_new(0xd0);
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
         &___7__TIntrusiveReferenceController_UFTableViewStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FTableViewStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 2),&param_2->BackgroundBrush);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FTableViewStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FTextBlockStyle> @ 14253f740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FTextBlockStyle>(FSlateStyleSet *this,FName param_1,FTextBlockStyle *param_2)

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
         &___7__TIntrusiveReferenceController_UFTextBlockStyle___00_SharedPointerInternals__6B_;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FTextBlockStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FToolBarStyle> @ 14253f8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FToolBarStyle>(FSlateStyleSet *this,FName param_1,FToolBarStyle *param_2)

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
  pTVar3 = ::operator_new(0x3f10);
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
         &___7__TIntrusiveReferenceController_UFToolBarStyle___00_SharedPointerInternals__6B_;
    FToolBarStyle::FToolBarStyle((FToolBarStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FToolBarStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FVolumeControlStyle> @ 14253fa20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FVolumeControlStyle>
          (FSlateStyleSet *this,FName param_1,FVolumeControlStyle *param_2)

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
  pTVar3 = ::operator_new(2000);
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
         &___7__TIntrusiveReferenceController_UFVolumeControlStyle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FVolumeControlStyle__6B_;
    FSliderStyle::FSliderStyle((FSliderStyle *)(pTVar3 + 2),&param_2->SliderStyle);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x46),&param_2->HighVolumeImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x51),&param_2->MidVolumeImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x5c),&param_2->LowVolumeImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x67),&param_2->NoVolumeImage);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar3 + 0x72),&param_2->MutedImage);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FVolumeControlStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set<FWindowStyle> @ 14253fc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateStyleSet::Set<FWindowStyle>(FSlateStyleSet *this,FName param_1,FWindowStyle *param_2)

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
  pTVar3 = ::operator_new(0x1db0);
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
         &___7__TIntrusiveReferenceController_UFWindowStyle___00_SharedPointerInternals__6B_;
    FWindowStyle::FWindowStyle((FWindowStyle *)(pTVar3 + 1),param_2);
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
            (&this->KnownWidgetStyles,(FName *)local_58,(bool *)&FWindowStyle::TypeName);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FSlateStyleSet @ 142546150

FSlateStyleSet * __thiscall
FSlateStyleSet::FSlateStyleSet(FSlateStyleSet *this,FSlateStyleSet *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar3;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar4;
  TMap<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
  *pTVar5;
  TMap<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
  *pTVar6;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *pTVar7;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *pTVar8;
  TMap<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
  *pTVar9;
  TMap<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
  *pTVar10;
  TMap<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_> *pTVar11;
  TMap<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_> *pTVar12;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *pTVar13;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *pTVar14;
  TMap<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
  *pTVar15;
  TMap<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
  *pTVar16;
  void *pvVar17;
  
  this->_padding_ = (longlong)&___7FSlateStyleSet__6B_;
  this->StyleSetName = param_1->StyleSetName;
  (this->ContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentRootDir).Data.AllocatorInstance.Data =
       (param_1->ContentRootDir).Data.AllocatorInstance.Data;
  (param_1->ContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentRootDir).Data.ArrayNum = (param_1->ContentRootDir).Data.ArrayNum;
  (this->ContentRootDir).Data.ArrayMax = (param_1->ContentRootDir).Data.ArrayMax;
  (param_1->ContentRootDir).Data.ArrayNum = 0;
  (param_1->ContentRootDir).Data.ArrayMax = 0;
  (this->CoreContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoreContentRootDir).Data.AllocatorInstance.Data =
       (param_1->CoreContentRootDir).Data.AllocatorInstance.Data;
  (param_1->CoreContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoreContentRootDir).Data.ArrayNum = (param_1->CoreContentRootDir).Data.ArrayNum;
  (this->CoreContentRootDir).Data.ArrayMax = (param_1->CoreContentRootDir).Data.ArrayMax;
  (param_1->CoreContentRootDir).Data.ArrayNum = 0;
  (param_1->CoreContentRootDir).Data.ArrayMax = 0;
  TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
              *)&this->WidgetStyleValues,
             (TSet<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>,FDefaultSetAllocator>
              *)&param_1->WidgetStyleValues);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            (&this->KnownWidgetStyles,&param_1->KnownWidgetStyles);
  pTVar3 = &this->FloatValues;
  *(undefined8 *)pTVar3 = 0;
  pTVar4 = &param_1->FloatValues;
  *(undefined8 *)&(this->FloatValues).field_0x8 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x20 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x28 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FloatValues).field_0x34 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x40 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x48 = 0;
  if (pTVar3 != pTVar4) {
    puVar1 = &(param_1->FloatValues).field_0x10;
    *(undefined8 *)pTVar3 = *(undefined8 *)pTVar4;
    puVar2 = &(this->FloatValues).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->FloatValues).field_0x8 = *(undefined4 *)&(param_1->FloatValues).field_0x8
    ;
    *(undefined4 *)&(this->FloatValues).field_0xc = *(undefined4 *)&(param_1->FloatValues).field_0xc
    ;
    *(undefined8 *)&(param_1->FloatValues).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->FloatValues).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->FloatValues).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->FloatValues).field_0x20 =
           *(undefined8 *)&(param_1->FloatValues).field_0x20;
      *(undefined8 *)&(param_1->FloatValues).field_0x20 = 0;
      *(undefined4 *)&(this->FloatValues).field_0x28 =
           *(undefined4 *)&(param_1->FloatValues).field_0x28;
      *(undefined4 *)&(this->FloatValues).field_0x2c =
           *(undefined4 *)&(param_1->FloatValues).field_0x2c;
      *(undefined8 *)&(param_1->FloatValues).field_0x28 = 0;
    }
    *(undefined4 *)&(this->FloatValues).field_0x30 =
         *(undefined4 *)&(param_1->FloatValues).field_0x30;
    *(undefined4 *)&(this->FloatValues).field_0x34 =
         *(undefined4 *)&(param_1->FloatValues).field_0x34;
    *(undefined4 *)&(param_1->FloatValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->FloatValues).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->FloatValues).field_0x40 == 0) {
    *(undefined4 *)&(this->FloatValues).field_0x38 =
         *(undefined4 *)&(param_1->FloatValues).field_0x38;
  }
  pvVar17 = *(void **)&(this->FloatValues).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->FloatValues).field_0x40 = *(undefined8 *)&(param_1->FloatValues).field_0x40
  ;
  *(undefined8 *)&(param_1->FloatValues).field_0x40 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x48 = *(undefined4 *)&(param_1->FloatValues).field_0x48
  ;
  pTVar5 = &param_1->Vector2DValues;
  *(undefined4 *)&(param_1->FloatValues).field_0x48 = 0;
  pTVar6 = &this->Vector2DValues;
  *(undefined8 *)pTVar6 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x8 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x20 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x28 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->Vector2DValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vector2DValues).field_0x34 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x40 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x48 = 0;
  if (pTVar6 != pTVar5) {
    puVar1 = &(param_1->Vector2DValues).field_0x10;
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    puVar2 = &(this->Vector2DValues).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->Vector2DValues).field_0x8 =
         *(undefined4 *)&(param_1->Vector2DValues).field_0x8;
    *(undefined4 *)&(this->Vector2DValues).field_0xc =
         *(undefined4 *)&(param_1->Vector2DValues).field_0xc;
    *(undefined8 *)&(param_1->Vector2DValues).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Vector2DValues).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->Vector2DValues).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->Vector2DValues).field_0x20 =
           *(undefined8 *)&(param_1->Vector2DValues).field_0x20;
      *(undefined8 *)&(param_1->Vector2DValues).field_0x20 = 0;
      *(undefined4 *)&(this->Vector2DValues).field_0x28 =
           *(undefined4 *)&(param_1->Vector2DValues).field_0x28;
      *(undefined4 *)&(this->Vector2DValues).field_0x2c =
           *(undefined4 *)&(param_1->Vector2DValues).field_0x2c;
      *(undefined8 *)&(param_1->Vector2DValues).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Vector2DValues).field_0x30 =
         *(undefined4 *)&(param_1->Vector2DValues).field_0x30;
    *(undefined4 *)&(this->Vector2DValues).field_0x34 =
         *(undefined4 *)&(param_1->Vector2DValues).field_0x34;
    *(undefined4 *)&(param_1->Vector2DValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Vector2DValues).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Vector2DValues).field_0x40 == 0) {
    *(undefined4 *)&(this->Vector2DValues).field_0x38 =
         *(undefined4 *)&(param_1->Vector2DValues).field_0x38;
  }
  pvVar17 = *(void **)&(this->Vector2DValues).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->Vector2DValues).field_0x40 =
       *(undefined8 *)&(param_1->Vector2DValues).field_0x40;
  *(undefined8 *)&(param_1->Vector2DValues).field_0x40 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x48 =
       *(undefined4 *)&(param_1->Vector2DValues).field_0x48;
  pTVar7 = &this->ColorValues;
  *(undefined4 *)&(param_1->Vector2DValues).field_0x48 = 0;
  pTVar8 = &param_1->ColorValues;
  *(undefined8 *)pTVar7 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x48 = 0;
  if (pTVar7 != pTVar8) {
    puVar1 = &(param_1->ColorValues).field_0x10;
    *(undefined8 *)pTVar7 = *(undefined8 *)pTVar8;
    puVar2 = &(this->ColorValues).field_0x10;
    *(undefined8 *)pTVar8 = 0;
    *(undefined4 *)&(this->ColorValues).field_0x8 = *(undefined4 *)&(param_1->ColorValues).field_0x8
    ;
    *(undefined4 *)&(this->ColorValues).field_0xc = *(undefined4 *)&(param_1->ColorValues).field_0xc
    ;
    *(undefined8 *)&(param_1->ColorValues).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->ColorValues).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->ColorValues).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->ColorValues).field_0x20 =
           *(undefined8 *)&(param_1->ColorValues).field_0x20;
      *(undefined8 *)&(param_1->ColorValues).field_0x20 = 0;
      *(undefined4 *)&(this->ColorValues).field_0x28 =
           *(undefined4 *)&(param_1->ColorValues).field_0x28;
      *(undefined4 *)&(this->ColorValues).field_0x2c =
           *(undefined4 *)&(param_1->ColorValues).field_0x2c;
      *(undefined8 *)&(param_1->ColorValues).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ColorValues).field_0x30 =
         *(undefined4 *)&(param_1->ColorValues).field_0x30;
    *(undefined4 *)&(this->ColorValues).field_0x34 =
         *(undefined4 *)&(param_1->ColorValues).field_0x34;
    *(undefined4 *)&(param_1->ColorValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ColorValues).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->ColorValues).field_0x40 == 0) {
    *(undefined4 *)&(this->ColorValues).field_0x38 =
         *(undefined4 *)&(param_1->ColorValues).field_0x38;
  }
  pvVar17 = *(void **)&(this->ColorValues).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->ColorValues).field_0x40 = *(undefined8 *)&(param_1->ColorValues).field_0x40
  ;
  *(undefined8 *)&(param_1->ColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x48 = *(undefined4 *)&(param_1->ColorValues).field_0x48
  ;
  pTVar9 = &this->SlateColorValues;
  *(undefined4 *)&(param_1->ColorValues).field_0x48 = 0;
  pTVar10 = &param_1->SlateColorValues;
  *(undefined8 *)pTVar9 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlateColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlateColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x48 = 0;
  if (pTVar9 != pTVar10) {
    puVar1 = &(param_1->SlateColorValues).field_0x10;
    *(undefined8 *)pTVar9 = *(undefined8 *)pTVar10;
    puVar2 = &(this->SlateColorValues).field_0x10;
    *(undefined8 *)pTVar10 = 0;
    *(undefined4 *)&(this->SlateColorValues).field_0x8 =
         *(undefined4 *)&(param_1->SlateColorValues).field_0x8;
    *(undefined4 *)&(this->SlateColorValues).field_0xc =
         *(undefined4 *)&(param_1->SlateColorValues).field_0xc;
    *(undefined8 *)&(param_1->SlateColorValues).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->SlateColorValues).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->SlateColorValues).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->SlateColorValues).field_0x20 =
           *(undefined8 *)&(param_1->SlateColorValues).field_0x20;
      *(undefined8 *)&(param_1->SlateColorValues).field_0x20 = 0;
      *(undefined4 *)&(this->SlateColorValues).field_0x28 =
           *(undefined4 *)&(param_1->SlateColorValues).field_0x28;
      *(undefined4 *)&(this->SlateColorValues).field_0x2c =
           *(undefined4 *)&(param_1->SlateColorValues).field_0x2c;
      *(undefined8 *)&(param_1->SlateColorValues).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SlateColorValues).field_0x30 =
         *(undefined4 *)&(param_1->SlateColorValues).field_0x30;
    *(undefined4 *)&(this->SlateColorValues).field_0x34 =
         *(undefined4 *)&(param_1->SlateColorValues).field_0x34;
    *(undefined4 *)&(param_1->SlateColorValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SlateColorValues).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->SlateColorValues).field_0x40 == 0) {
    *(undefined4 *)&(this->SlateColorValues).field_0x38 =
         *(undefined4 *)&(param_1->SlateColorValues).field_0x38;
  }
  pvVar17 = *(void **)&(this->SlateColorValues).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->SlateColorValues).field_0x40 =
       *(undefined8 *)&(param_1->SlateColorValues).field_0x40;
  *(undefined8 *)&(param_1->SlateColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x48 =
       *(undefined4 *)&(param_1->SlateColorValues).field_0x48;
  pTVar11 = &this->MarginValues;
  *(undefined4 *)&(param_1->SlateColorValues).field_0x48 = 0;
  pTVar12 = &param_1->MarginValues;
  *(undefined8 *)pTVar11 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x8 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x20 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x28 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->MarginValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarginValues).field_0x34 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x40 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x48 = 0;
  if (pTVar11 != pTVar12) {
    puVar1 = &(param_1->MarginValues).field_0x10;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar12;
    puVar2 = &(this->MarginValues).field_0x10;
    *(undefined8 *)pTVar12 = 0;
    *(undefined4 *)&(this->MarginValues).field_0x8 =
         *(undefined4 *)&(param_1->MarginValues).field_0x8;
    *(undefined4 *)&(this->MarginValues).field_0xc =
         *(undefined4 *)&(param_1->MarginValues).field_0xc;
    *(undefined8 *)&(param_1->MarginValues).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->MarginValues).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->MarginValues).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->MarginValues).field_0x20 =
           *(undefined8 *)&(param_1->MarginValues).field_0x20;
      *(undefined8 *)&(param_1->MarginValues).field_0x20 = 0;
      *(undefined4 *)&(this->MarginValues).field_0x28 =
           *(undefined4 *)&(param_1->MarginValues).field_0x28;
      *(undefined4 *)&(this->MarginValues).field_0x2c =
           *(undefined4 *)&(param_1->MarginValues).field_0x2c;
      *(undefined8 *)&(param_1->MarginValues).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MarginValues).field_0x30 =
         *(undefined4 *)&(param_1->MarginValues).field_0x30;
    *(undefined4 *)&(this->MarginValues).field_0x34 =
         *(undefined4 *)&(param_1->MarginValues).field_0x34;
    *(undefined4 *)&(param_1->MarginValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->MarginValues).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->MarginValues).field_0x40 == 0) {
    *(undefined4 *)&(this->MarginValues).field_0x38 =
         *(undefined4 *)&(param_1->MarginValues).field_0x38;
  }
  pvVar17 = *(void **)&(this->MarginValues).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->MarginValues).field_0x40 =
       *(undefined8 *)&(param_1->MarginValues).field_0x40;
  *(undefined8 *)&(param_1->MarginValues).field_0x40 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x48 =
       *(undefined4 *)&(param_1->MarginValues).field_0x48;
  pTVar13 = &this->BrushResources;
  *(undefined4 *)&(param_1->MarginValues).field_0x48 = 0;
  pTVar14 = &param_1->BrushResources;
  this->DefaultBrush = param_1->DefaultBrush;
  *(undefined8 *)pTVar13 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x8 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x20 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x28 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushResources).field_0x34 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x48 = 0;
  if (pTVar13 != pTVar14) {
    puVar1 = &(param_1->BrushResources).field_0x10;
    *(undefined8 *)pTVar13 = *(undefined8 *)pTVar14;
    puVar2 = &(this->BrushResources).field_0x10;
    *(undefined8 *)pTVar14 = 0;
    *(undefined4 *)&(this->BrushResources).field_0x8 =
         *(undefined4 *)&(param_1->BrushResources).field_0x8;
    *(undefined4 *)&(this->BrushResources).field_0xc =
         *(undefined4 *)&(param_1->BrushResources).field_0xc;
    *(undefined8 *)&(param_1->BrushResources).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->BrushResources).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->BrushResources).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->BrushResources).field_0x20 =
           *(undefined8 *)&(param_1->BrushResources).field_0x20;
      *(undefined8 *)&(param_1->BrushResources).field_0x20 = 0;
      *(undefined4 *)&(this->BrushResources).field_0x28 =
           *(undefined4 *)&(param_1->BrushResources).field_0x28;
      *(undefined4 *)&(this->BrushResources).field_0x2c =
           *(undefined4 *)&(param_1->BrushResources).field_0x2c;
      *(undefined8 *)&(param_1->BrushResources).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BrushResources).field_0x30 =
         *(undefined4 *)&(param_1->BrushResources).field_0x30;
    *(undefined4 *)&(this->BrushResources).field_0x34 =
         *(undefined4 *)&(param_1->BrushResources).field_0x34;
    *(undefined4 *)&(param_1->BrushResources).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BrushResources).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->BrushResources).field_0x40 == 0) {
    *(undefined4 *)&(this->BrushResources).field_0x38 =
         *(undefined4 *)&(param_1->BrushResources).field_0x38;
  }
  pvVar17 = *(void **)&(this->BrushResources).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->BrushResources).field_0x40 =
       *(undefined8 *)&(param_1->BrushResources).field_0x40;
  *(undefined8 *)&(param_1->BrushResources).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x48 =
       *(undefined4 *)&(param_1->BrushResources).field_0x48;
  pTVar15 = &this->Sounds;
  *(undefined4 *)&(param_1->BrushResources).field_0x48 = 0;
  pTVar16 = &param_1->Sounds;
  *(undefined8 *)pTVar15 = 0;
  *(undefined8 *)&(this->Sounds).field_0x8 = 0;
  *(undefined8 *)&(this->Sounds).field_0x20 = 0;
  *(undefined4 *)&(this->Sounds).field_0x28 = 0;
  *(undefined4 *)&(this->Sounds).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sounds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sounds).field_0x34 = 0;
  *(undefined8 *)&(this->Sounds).field_0x40 = 0;
  *(undefined4 *)&(this->Sounds).field_0x48 = 0;
  if (pTVar15 != pTVar16) {
    puVar1 = &(param_1->Sounds).field_0x10;
    *(undefined8 *)pTVar15 = *(undefined8 *)pTVar16;
    puVar2 = &(this->Sounds).field_0x10;
    *(undefined8 *)pTVar16 = 0;
    *(undefined4 *)&(this->Sounds).field_0x8 = *(undefined4 *)&(param_1->Sounds).field_0x8;
    *(undefined4 *)&(this->Sounds).field_0xc = *(undefined4 *)&(param_1->Sounds).field_0xc;
    *(undefined8 *)&(param_1->Sounds).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Sounds).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar17 = *(void **)&(this->Sounds).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->Sounds).field_0x20 = *(undefined8 *)&(param_1->Sounds).field_0x20;
      *(undefined8 *)&(param_1->Sounds).field_0x20 = 0;
      *(undefined4 *)&(this->Sounds).field_0x28 = *(undefined4 *)&(param_1->Sounds).field_0x28;
      *(undefined4 *)&(this->Sounds).field_0x2c = *(undefined4 *)&(param_1->Sounds).field_0x2c;
      *(undefined8 *)&(param_1->Sounds).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Sounds).field_0x30 = *(undefined4 *)&(param_1->Sounds).field_0x30;
    *(undefined4 *)&(this->Sounds).field_0x34 = *(undefined4 *)&(param_1->Sounds).field_0x34;
    *(undefined4 *)&(param_1->Sounds).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Sounds).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Sounds).field_0x40 == 0) {
    *(undefined4 *)&(this->Sounds).field_0x38 = *(undefined4 *)&(param_1->Sounds).field_0x38;
  }
  pvVar17 = *(void **)&(this->Sounds).field_0x40;
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  *(undefined8 *)&(this->Sounds).field_0x40 = *(undefined8 *)&(param_1->Sounds).field_0x40;
  *(undefined8 *)&(param_1->Sounds).field_0x40 = 0;
  *(undefined4 *)&(this->Sounds).field_0x48 = *(undefined4 *)&(param_1->Sounds).field_0x48;
  *(undefined4 *)&(param_1->Sounds).field_0x48 = 0;
  TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
              *)&this->FontInfoResources,
             (TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
              *)&param_1->FontInfoResources);
  TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
              *)&this->DynamicBrushes,
             (TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
              *)&param_1->DynamicBrushes);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            (&this->MissingResources,&param_1->MissingResources);
  this->ParentStyleName = param_1->ParentStyleName;
  return this;
}

// FSlateStyleSet @ 1425468d0

FSlateStyleSet * __thiscall
FSlateStyleSet::FSlateStyleSet(FSlateStyleSet *this,FSlateStyleSet *param_1)

{
  TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  TMap<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
  *this_01;
  TMap<FName,TWeakPtr<FSlateDynamicImageBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>_>
  *this_02;
  
  this->_padding_ = (longlong)&___7FSlateStyleSet__6B_;
  this->StyleSetName = param_1->StyleSetName;
  ::FString::FString(&this->ContentRootDir,&param_1->ContentRootDir);
  ::FString::FString(&this->CoreContentRootDir,&param_1->CoreContentRootDir);
  this_00 = &this->WidgetStyleValues;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x20 = 0;
  puVar1 = &(this->WidgetStyleValues).field_0x48;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->WidgetStyleValues) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->WidgetStyleValues).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->WidgetStyleValues).field_0x38,
               *(int *)&(param_1->WidgetStyleValues).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->WidgetStyleValues);
  }
  *(undefined8 *)&(this->KnownWidgetStyles).Elements = 0;
  *(undefined8 *)&(this->KnownWidgetStyles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KnownWidgetStyles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x34 = 0;
  (this->KnownWidgetStyles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->KnownWidgetStyles).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->KnownWidgetStyles,&param_1->KnownWidgetStyles);
  *(undefined8 *)&(this->FloatValues).field_0x0 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x8 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x20 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x28 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FloatValues).field_0x34 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x40 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)&this->FloatValues,
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)&param_1->FloatValues);
  *(undefined8 *)&(this->Vector2DValues).field_0x0 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x8 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x20 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x28 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->Vector2DValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vector2DValues).field_0x34 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x40 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x48 = 0;
  TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
               *)&this->Vector2DValues,
              (TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
               *)&param_1->Vector2DValues);
  *(undefined8 *)&(this->ColorValues).field_0x0 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x48 = 0;
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
               *)&this->ColorValues,
              (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
               *)&param_1->ColorValues);
  *(undefined8 *)&(this->SlateColorValues).field_0x0 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlateColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlateColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x48 = 0;
  TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
               *)&this->SlateColorValues,
              (TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
               *)&param_1->SlateColorValues);
  *(undefined8 *)&(this->MarginValues).field_0x0 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x8 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x20 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x28 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->MarginValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarginValues).field_0x34 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x40 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x48 = 0;
  TSet<TTuple<FName,FMargin>,TDefaultMapHashableKeyFuncs<FName,FMargin,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FMargin>,TDefaultMapHashableKeyFuncs<FName,FMargin,0>,FDefaultSetAllocator>
             *)&this->MarginValues,
            (TSet<TTuple<FName,FMargin>,TDefaultMapHashableKeyFuncs<FName,FMargin,0>,FDefaultSetAllocator>
             *)&param_1->MarginValues);
  this->DefaultBrush = param_1->DefaultBrush;
  *(undefined8 *)&(this->BrushResources).field_0x0 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x8 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x20 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x28 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushResources).field_0x34 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x48 = 0;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
               *)&this->BrushResources,
              (TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
               *)&param_1->BrushResources);
  this_01 = &this->Sounds;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->Sounds).field_0x8 = 0;
  *(undefined8 *)&(this->Sounds).field_0x20 = 0;
  puVar1 = &(this->Sounds).field_0x48;
  *(undefined4 *)&(this->Sounds).field_0x28 = 0;
  *(undefined4 *)&(this->Sounds).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sounds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sounds).field_0x34 = 0;
  *(undefined8 *)&(this->Sounds).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_01 != &param_1->Sounds) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Sounds).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->Sounds).field_0x38,
               *(int *)&(param_1->Sounds).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->Sounds);
  }
  *(undefined8 *)&(this->FontInfoResources).field_0x0 = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x8 = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x20 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x28 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->FontInfoResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontInfoResources).field_0x34 = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x40 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x48 = 0;
  TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
               *)&this->FontInfoResources,
              (TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
               *)&param_1->FontInfoResources);
  this_02 = &this->DynamicBrushes;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x20 = 0;
  puVar1 = &(this->DynamicBrushes).field_0x48;
  *(undefined4 *)&(this->DynamicBrushes).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicBrushes).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicBrushes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicBrushes).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_02 != &param_1->DynamicBrushes) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->DynamicBrushes).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->DynamicBrushes).field_0x38,
               *(int *)&(param_1->DynamicBrushes).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_02,
                (TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->DynamicBrushes);
  }
  *(undefined8 *)&(this->MissingResources).Elements = 0;
  *(undefined8 *)&(this->MissingResources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MissingResources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x34 = 0;
  (this->MissingResources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MissingResources).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->MissingResources,&param_1->MissingResources);
  this->ParentStyleName = param_1->ParentStyleName;
  return this;
}

// FSlateStyleSet @ 142546c90

FSlateStyleSet * __thiscall FSlateStyleSet::FSlateStyleSet(FSlateStyleSet *this,FName *param_1)

{
  FSlateImageBrush *this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FSlateBrush *pFVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pFVar2 = (FSlateBrush *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FSlateStyleSet__6B_;
  this->StyleSetName = *param_1;
  (this->ContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentRootDir).Data.ArrayNum = 0;
  (this->ContentRootDir).Data.ArrayMax = 0;
  (this->CoreContentRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoreContentRootDir).Data.ArrayNum = 0;
  (this->CoreContentRootDir).Data.ArrayMax = 0;
  *(undefined8 *)&this->WidgetStyleValues = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetStyleValues).field_0x40 = 0;
  *(undefined4 *)&(this->WidgetStyleValues).field_0x48 = 0;
  *(undefined8 *)&(this->KnownWidgetStyles).Elements = 0;
  *(undefined8 *)&(this->KnownWidgetStyles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KnownWidgetStyles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KnownWidgetStyles).Elements.field_0x34 = 0;
  (this->KnownWidgetStyles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->KnownWidgetStyles).HashSize = 0;
  *(undefined8 *)&this->FloatValues = 0;
  *(undefined8 *)&(this->FloatValues).field_0x8 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x20 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x28 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FloatValues).field_0x34 = 0;
  *(undefined8 *)&(this->FloatValues).field_0x40 = 0;
  *(undefined4 *)&(this->FloatValues).field_0x48 = 0;
  *(undefined8 *)&this->Vector2DValues = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x8 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x20 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x28 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->Vector2DValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vector2DValues).field_0x34 = 0;
  *(undefined8 *)&(this->Vector2DValues).field_0x40 = 0;
  *(undefined4 *)&(this->Vector2DValues).field_0x48 = 0;
  *(undefined8 *)&this->ColorValues = 0;
  *(undefined8 *)&(this->ColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->ColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->ColorValues).field_0x48 = 0;
  *(undefined8 *)&this->SlateColorValues = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x8 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x20 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x28 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlateColorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlateColorValues).field_0x34 = 0;
  *(undefined8 *)&(this->SlateColorValues).field_0x40 = 0;
  *(undefined4 *)&(this->SlateColorValues).field_0x48 = 0;
  *(undefined8 *)&this->MarginValues = 0;
  *(undefined8 *)&(this->MarginValues).field_0x8 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x20 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x28 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->MarginValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarginValues).field_0x34 = 0;
  *(undefined8 *)&(this->MarginValues).field_0x40 = 0;
  *(undefined4 *)&(this->MarginValues).field_0x48 = 0;
  this_00 = ::operator_new(0xb0);
  pFVar4 = pFVar2;
  if (this_00 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = 0x41800000;
    local_res8.Number = 0x41800000;
    pTVar1 = &FPaths::EngineContentDir(&local_18)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28,pTVar1,0x18 - (uint)(pTVar1->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28,L"Slate/Checkerboard.png",0x16);
    pFVar2 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       (this_00,(FString *)&local_28,(FDeprecateVector2DParameter *)&local_res8,
                        &FLinearColor::White,Both,FullColor);
    pFVar4 = (FSlateBrush *)&DAT_00000003;
  }
  this->DefaultBrush = pFVar2;
  if ((((ulonglong)pFVar4 & 2) != 0) &&
     (pFVar4 = (FSlateBrush *)(ulonglong)((uint)pFVar4 & 0xfffffffd),
     local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar4 & 1) != 0) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&this->BrushResources = 0;
  *(undefined8 *)&(this->BrushResources).field_0x8 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x20 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x28 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushResources).field_0x34 = 0;
  *(undefined8 *)&(this->BrushResources).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResources).field_0x48 = 0;
  *(undefined8 *)&this->Sounds = 0;
  *(undefined8 *)&(this->Sounds).field_0x8 = 0;
  *(undefined8 *)&(this->Sounds).field_0x20 = 0;
  *(undefined4 *)&(this->Sounds).field_0x28 = 0;
  *(undefined4 *)&(this->Sounds).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sounds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sounds).field_0x34 = 0;
  *(undefined8 *)&(this->Sounds).field_0x40 = 0;
  *(undefined4 *)&(this->Sounds).field_0x48 = 0;
  *(undefined8 *)&this->FontInfoResources = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x8 = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x20 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x28 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->FontInfoResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontInfoResources).field_0x34 = 0;
  *(undefined8 *)&(this->FontInfoResources).field_0x40 = 0;
  *(undefined4 *)&(this->FontInfoResources).field_0x48 = 0;
  *(undefined8 *)&this->DynamicBrushes = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicBrushes).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicBrushes).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicBrushes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicBrushes).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicBrushes).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicBrushes).field_0x48 = 0;
  *(undefined8 *)&(this->MissingResources).Elements = 0;
  *(undefined8 *)&(this->MissingResources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MissingResources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MissingResources).Elements.field_0x34 = 0;
  (this->MissingResources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MissingResources).HashSize = 0;
  pFVar4 = this->DefaultBrush;
  (this->ParentStyleName).ComparisonIndex = 0;
  (this->ParentStyleName).Number = 0;
  pFVar3 = ::FName::FName(&local_res8,L"Default");
  Set<FSlateBrush>(this,*pFVar3,pFVar4);
  return this;
}

// ~FSlateStyleSet @ 14254b9f0

void __thiscall FSlateStyleSet::~FSlateStyleSet(FSlateStyleSet *this)

{
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *this_00;
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->BrushResources;
  this->_padding_ = (longlong)&___7FSlateStyleSet__6B_;
  TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    iVar7 = 1;
    do {
      puVar1 = *(undefined8 **)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18);
      if (((puVar1[7] == 0) && ((*(byte *)((longlong)puVar1 + 0x94) & 2) == 0)) &&
         (puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (3 < uVar8) {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
        local_18->HashSize = iVar7;
        TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  (this->MissingResources).HashSize = 0;
  FVar2 = (this->MissingResources).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MissingResources).Elements);
  *(undefined4 *)&(this->DynamicBrushes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DynamicBrushes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicBrushes);
  *(undefined4 *)&(this->FontInfoResources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FontInfoResources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateFontInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateFontInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateFontInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FontInfoResources);
  *(undefined4 *)&(this->Sounds).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Sounds).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateSound>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Sounds);
  *(undefined4 *)&(this->BrushResources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->BrushResources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->MarginValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MarginValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMargin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMargin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMargin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MarginValues);
  *(undefined4 *)&(this->SlateColorValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SlateColorValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlateColorValues);
  *(undefined4 *)&(this->ColorValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ColorValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorValues);
  *(undefined4 *)&(this->Vector2DValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Vector2DValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Vector2DValues);
  *(undefined4 *)&(this->FloatValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FloatValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatValues);
  (this->KnownWidgetStyles).HashSize = 0;
  FVar2 = (this->KnownWidgetStyles).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KnownWidgetStyles).Elements);
  *(undefined4 *)&(this->WidgetStyleValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->WidgetStyleValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetStyleValues);
  pFVar4 = (this->CoreContentRootDir).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ContentRootDir).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ISlateStyle__6B_;
  return;
}

// GetBrush @ 14257eae0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateBrush * __thiscall
FSlateStyleSet::GetBrush(FSlateStyleSet *this,FName param_1,char *param_2,ISlateStyle *param_3)

{
  float *pfVar1;
  float fVar2;
  FSlateBrush *pFVar3;
  code *pcVar4;
  FName FVar5;
  float fVar6;
  FString *pFVar7;
  TTuple<FName,FSlateBrush_*> *pTVar8;
  TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *pTVar9;
  ISlateStyle *pIVar10;
  FSlateBrush *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  TRefCountPtr<ITextData> TVar15;
  FSlateBrush *pFVar16;
  FSlateStyleSet *pFVar17;
  FSlateBrush *pFVar18;
  bool bVar19;
  FName local_res8;
  FName local_res10;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  FVar5 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_58,param_2);
    pFVar7 = ::FName::ToString(&local_res10,(FString *)&local_48);
    ::FString::ConcatFF((FString *)&local_68,pFVar7,(FString *)&local_58);
    TVar15.Reference = (ITextData *)L"";
    if (local_68.Flags != 0) {
      TVar15.Reference = local_68.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar15.Reference);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    FVar5 = local_res8;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
      FVar5 = local_res8;
    }
  }
  local_res8 = FVar5;
  pTVar8 = TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
                   *)&this->BrushResources,local_res8);
  pFVar16 = (FSlateBrush *)0x0;
  pFVar11 = pFVar16;
  if ((pTVar8 == (TTuple<FName,FSlateBrush_*> *)0x0) ||
     (pFVar11 = *(FSlateBrush **)&pTVar8->field_0x8, pFVar11 == (FSlateBrush *)0x0)) {
    pTVar9 = TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
                     *)&this->DynamicBrushes,local_res8);
    if (pTVar9 == (TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pFVar3 = *(FSlateBrush **)&pTVar9->field_0x10;
      pFVar18 = *(FSlateBrush **)&pTVar9->field_0x8;
      if (pFVar3 != (FSlateBrush *)0x0) {
        LOCK();
        pfVar1 = &(pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G;
        *pfVar1 = (float)((int)*pfVar1 + 1);
        UNLOCK();
        fVar2 = (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R;
        do {
          if (fVar2 == 0.0) goto LAB_14257ec21;
          LOCK();
          fVar6 = (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R;
          bVar19 = fVar2 == fVar6;
          if (bVar19) {
            (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
            fVar6 = fVar2;
          }
          UNLOCK();
          fVar2 = fVar6;
        } while (!bVar19);
      }
      if (pFVar3 == (FSlateBrush *)0x0) {
        pFVar18 = pFVar16;
      }
      pFVar16 = pFVar3;
      if (pFVar18 != (FSlateBrush *)0x0) {
        pFVar11 = pFVar18;
      }
LAB_14257ec21:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      if (pFVar3 != (FSlateBrush *)0x0) {
        LOCK();
        pfVar1 = &(pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G;
        fVar2 = *pfVar1;
        *pfVar1 = (float)((int)*pfVar1 + -1);
        UNLOCK();
        if (fVar2 == 1.4013e-45) {
          (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
        }
      }
    }
    if (pFVar11 == (FSlateBrush *)0x0) {
      if ((this->ParentStyleName == (FName)0x0) ||
         (pIVar10 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
         pIVar10 == (ISlateStyle *)0x0)) {
        pFVar17 = this;
        if (param_3 != (ISlateStyle *)0x0) {
          pFVar17 = (FSlateStyleSet *)param_3;
        }
        pcVar4 = *(code **)(pFVar17->_padding_ + 0xb0);
        pFVar12 = FText::FromName(&local_68,&local_res8);
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"SlateStyleSet",L"UnknownBrush",
                             L"Unable to find Brush \'{0}\'.");
        pFVar14 = FTextFormat::FTextFormat(&local_38,pFVar13,Default);
        pFVar12 = FText::Format<FText>(&local_48,pFVar14,pFVar12);
        (*pcVar4)(pFVar17,3,pFVar12,&local_res8);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        pFVar11 = (FSlateBrush *)(**(code **)(this->_padding_ + 0x78))(this);
      }
      else {
        pFVar11 = (FSlateBrush *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,param_1,param_2,0)
        ;
      }
    }
  }
  return pFVar11;
}

// GetColor @ 14257efe0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLinearColor * __thiscall
FSlateStyleSet::GetColor
          (FSlateStyleSet *this,FName param_1,char *param_2,FLinearColor *param_3,
          ISlateStyle *param_4)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FLinearColor *pFVar4;
  ISlateStyle *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res8;
  FName local_res10;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_48,param_2);
    pFVar3 = ::FName::ToString(&local_res10,(FString *)&local_38);
    ::FString::ConcatFF((FString *)&local_58,pFVar3,(FString *)&local_48);
    TVar9.Reference = (ITextData *)L"";
    if (local_58.Flags != 0) {
      TVar9.Reference = local_58.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar9.Reference);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    FVar2 = local_res8;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
           ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                   *)&this->ColorValues,local_res8);
  if (pFVar4 == (FLinearColor *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar5 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar5 != (ISlateStyle *)0x0)) {
      pFVar4 = (FLinearColor *)
               (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,param_1,param_2,param_3,0);
      return pFVar4;
    }
    if ((((FStyleDefaults::DefaultColor.field0_0x0._s_0.R == (param_3->field0_0x0)._s_0.R) &&
         (FStyleDefaults::DefaultColor.field0_0x0._s_0.G == (param_3->field0_0x0)._s_0.G)) &&
        (FStyleDefaults::DefaultColor.field0_0x0._s_0.B == (param_3->field0_0x0)._s_0.B)) &&
       (FStyleDefaults::DefaultColor.field0_0x0._s_0.A == (param_3->field0_0x0)._s_0.A)) {
      if (param_4 != (ISlateStyle *)0x0) {
        this = (FSlateStyleSet *)param_4;
      }
      pcVar1 = *(code **)(this->_padding_ + 0xb0);
      pFVar6 = FText::FromName(&local_58,&local_res8);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"SlateStyleSet",L"UnknownColor",
                          L"Unable to find Color \'{0}\'.");
      pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_38,pFVar8,pFVar6);
      (*pcVar1)(this,3,pFVar6,&local_res8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  if (pFVar4 != (FLinearColor *)0x0) {
    param_3 = pFVar4;
  }
  return param_3;
}

// GetContentRootDir @ 14257f3a0

FString * __thiscall
FSlateStyleSet::GetContentRootDir(FSlateStyleSet *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ContentRootDir);
  return __return_storage_ptr__;
}

// GetDefaultBrush @ 1425807f0

FSlateBrush * __thiscall FSlateStyleSet::GetDefaultBrush(FSlateStyleSet *this)

{
  return this->DefaultBrush;
}

// GetDynamicImageBrush @ 142580e60

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
FSlateStyleSet::GetDynamicImageBrush
          (FSlateStyleSet *this,TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,
          FName param_1,FName param_2,char *param_3,ISlateStyle *param_4)

{
  (**(code **)(this->_padding_ + 0x68))(this,__return_storage_ptr__,param_1,param_3,0,param_2,0);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142580ea0

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
FSlateStyleSet::GetDynamicImageBrush
          (FSlateStyleSet *this,TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,
          FName param_1,UTexture2D *param_2,FName param_3,ISlateStyle *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *pTVar7;
  ISlateStyle *pIVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auVar11 [8];
  TReferenceControllerBase<1> *pTVar12;
  FSlateDynamicImageBrush *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  FName local_res8;
  FName local_res18;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *pTStack_50;
  FString local_48;
  undefined1 local_38 [16];
  
  local_res8.ComparisonIndex.Value = 0;
  pFVar13 = (FSlateDynamicImageBrush *)0x0;
  local_res18 = param_1;
  if (param_3 != (FName)0x0) {
    pFVar4 = ::FName::ToString(&param_3,(FString *)local_38);
    pFVar5 = ::FName::ToString(&local_res18,&local_48);
    ::FString::ConcatFF((FString *)local_58,pFVar5,pFVar4);
    auVar11 = (undefined1  [8])L"";
    if ((int)pTStack_50 != 0) {
      auVar11 = local_58;
    }
    pFVar6 = ::FName::FName(&local_res8,(wchar_t *)auVar11);
    pFVar13 = (FSlateDynamicImageBrush *)&DAT_00000003;
    param_1 = *pFVar6;
    if (local_58 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_58);
    }
  }
  if ((((ulonglong)pFVar13 & 2) != 0) &&
     (pFVar13 = (FSlateDynamicImageBrush *)(ulonglong)((uint)pFVar13 & 0xfffffffd),
     local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar13 & 1) != 0) &&
     ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pTVar7 = TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
                   *)&this->DynamicBrushes,param_1);
  if (pTVar7 == (TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *)0x0) {
    pFVar13 = (FSlateDynamicImageBrush *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
LAB_142580fc9:
    pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    pFVar13 = *(FSlateDynamicImageBrush **)&pTVar7->field_0x8;
    pTStack_50 = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar12->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) goto LAB_142580fc9;
        LOCK();
        aVar3 = pTVar12->SharedReferenceCount;
        bVar15 = aVar2 == aVar3;
        if (bVar15) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar15);
    }
  }
  pTVar10 = pTStack_50;
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    pFVar13 = (FSlateDynamicImageBrush *)0x0;
  }
  if (pFVar13 == (FSlateDynamicImageBrush *)0x0) {
    if (this->ParentStyleName != (FName)0x0) {
      local_58 = (undefined1  [8])pFVar13;
      pIVar8 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName);
      if (pIVar8 != (ISlateStyle *)0x0) {
        (**(code **)((longlong)*pIVar8 + 0x60))
                  (pIVar8,__return_storage_ptr__,local_res18,param_2,param_3,0);
        goto LAB_1425810b2;
      }
      goto LAB_142581035;
    }
LAB_14258103f:
    if (param_4 != (ISlateStyle *)0x0) {
      this = (FSlateStyleSet *)param_4;
    }
    local_58 = (undefined1  [8])pFVar13;
    puVar9 = (undefined8 *)
             (**(code **)(this->_padding_ + 0xb8))(this,local_38,local_res18,param_2,param_3);
    pTVar14 = (TReferenceControllerBase<1> *)puVar9[1];
    pFVar13 = (FSlateDynamicImageBrush *)*puVar9;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
  }
  else {
LAB_142581035:
    pTVar14 = pTVar10;
    local_58 = (undefined1  [8])pFVar13;
    if (pFVar13 == (FSlateDynamicImageBrush *)0x0) goto LAB_14258103f;
  }
  __return_storage_ptr__->Object = pFVar13;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
LAB_1425810b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar12->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
    }
  }
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142581100

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
FSlateStyleSet::GetDynamicImageBrush
          (FSlateStyleSet *this,TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,
          FName param_1,char *param_2,UTexture2D *param_3,FName param_4,ISlateStyle *param_5)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x60);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar4.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  (*pcVar1)(this,__return_storage_ptr__,local_res8,param_3,param_4,0);
  return __return_storage_ptr__;
}

// GetEntriesUsingBrush @ 1425813d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FSlateStyleSet::GetEntriesUsingBrush
          (FSlateStyleSet *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint *puVar15;
  ForAnyElementType FVar16;
  undefined1 local_res10 [8];
  ForAnyElementType local_128;
  undefined8 local_120;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  ulonglong local_e8;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  int local_b8;
  TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_64;
  undefined4 local_44;
  
  local_e8 = 1;
  local_118 = &this->BrushResources;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BrushResources).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->BrushResources).field_0x28;
  iVar14 = 0;
  uVar8 = 1;
  TStack_110.BaseBitIndex = iVar14;
  TStack_d8.CurrentBitIndex = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->BrushResources).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_110.Array;
    }
    uVar8 = *puVar15;
    TStack_110.BaseBitIndex = 0;
    iVar14 = 0;
    while (uVar8 == 0) {
      lVar12 = (longlong)iVar14;
      TStack_110.BaseBitIndex = TStack_110.BaseBitIndex + 0x20;
      iVar14 = iVar14 + 1;
      uVar8 = 1;
      TStack_d8.CurrentBitIndex = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142581493;
      uVar8 = puVar15[lVar12 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_d8.CurrentBitIndex = TStack_110.BaseBitIndex + -1 + (int)lVar12;
    if (iVar9 < TStack_d8.CurrentBitIndex) {
      TStack_d8.CurrentBitIndex = iVar9;
    }
  }
LAB_142581493:
  TStack_110._padding_ = CONCAT44(uVar8,iVar14);
  TStack_110.UnvisitedBitMask = 0xffffffff;
  uVar8 = TStack_110.UnvisitedBitMask;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._28_4_ = local_64;
  TStack_d8._padding_ = TStack_110._padding_;
  TStack_d8.BaseBitIndex = TStack_110.BaseBitIndex;
  TStack_d8._28_4_ = local_64;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  local_e0 = local_118;
  TStack_d8.Array = TStack_110.Array;
  TStack_110.CurrentBitIndex = TStack_d8.CurrentBitIndex;
  if (TStack_d8.CurrentBitIndex < iVar9) {
    do {
      lVar12 = *(longlong *)(*(longlong *)local_e0 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18)
      ;
      FVar11 = *(FName *)(lVar12 + 0xa8);
      if ((FVar11 == (FName)0x0) && (lVar12 = *(longlong *)(lVar12 + 0x38), lVar12 != 0)) {
        FVar11 = *(FName *)(lVar12 + 0x18);
      }
      if (FVar11 == param_1) {
        pFVar1 = (FScriptContainerElement *)
                 (*(longlong *)local_e0 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar1) &&
            (pFVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             *(undefined8 *)pFVar1;
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      uVar8 = TStack_110.UnvisitedBitMask;
    } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
  }
  TStack_110.UnvisitedBitMask = uVar8;
  iVar14 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x14,&local_128,0,(int *)((longlong)&local_120 + 4));
  local_118 = (TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
               *)&this->WidgetStyleValues;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetStyleValues).field_0x10;
  local_90 = 0;
  iVar9 = *(int *)&(this->WidgetStyleValues).field_0x28;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->WidgetStyleValues).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_110.Array;
    }
    uVar8 = *puVar15;
    local_90 = 0;
    iVar14 = 0;
    while (uVar8 == 0) {
      lVar12 = (longlong)iVar14;
      local_90 = local_90 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1425816a1;
      uVar8 = puVar15[lVar12 + 1];
    }
    local_e8 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = local_e8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b8 = (int)lVar12;
    iStack_94 = local_90 + -1 + local_b8;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_1425816a1:
  uStack_a4 = (undefined4)local_e8;
  uStack_98 = 0xffffffff;
  uStack_8c = local_44;
  TStack_110._padding_ = CONCAT44(uStack_a4,iVar14);
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._28_4_ = local_44;
  TStack_110.BaseBitIndex = local_90;
  local_b0 = (TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
              *)local_118;
  iStack_a8 = iVar14;
  local_a0 = (undefined1 *)TStack_110.Array;
  TStack_110.CurrentBitIndex = iStack_94;
  if (iStack_94 < iVar9) {
    do {
      pTVar6 = local_118;
      plVar4 = *(longlong **)
                ((longlong)TStack_110.CurrentBitIndex * 0x20 + 8 + *(longlong *)local_118);
      (**(code **)(*plVar4 + 8))(plVar4,&local_128);
      iVar9 = (int)local_120;
      pFVar1 = local_128.Data + (longlong)(int)local_120 * 8;
      FVar16.Data = local_128.Data;
      while( true ) {
        if ((int)local_120 != iVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FSlateBrush_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar16.Data == pFVar1) break;
        FVar11 = *(FName *)(*(longlong *)FVar16.Data + 0xa8);
        if ((FVar11 == (FName)0x0) &&
           (lVar12 = *(longlong *)(*(longlong *)FVar16.Data + 0x38), lVar12 != 0)) {
          FVar11 = *(FName *)(lVar12 + 0x18);
        }
        if (FVar11 == param_1) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          pFVar13 = (FScriptContainerElement *)
                    ((longlong)TStack_110.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
          if (((pFVar3 <= pFVar13) &&
              (pFVar13 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          iVar14 = __return_storage_ptr__->ArrayNum;
          if (iVar14 == __return_storage_ptr__->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar14 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar14 * 8) =
               *(undefined8 *)pFVar13;
        }
        FVar16.Data = FVar16.Data + 8;
      }
      uVar8 = local_120._4_4_;
      if (local_120 < 0) {
        local_120 = (ulonglong)local_120._4_4_ << 0x20;
        if (uVar8 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_128,0,(int *)((longlong)&local_120 + 4));
        }
      }
      else {
        local_120 = (ulonglong)local_120._4_4_ << 0x20;
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    } while (TStack_110.CurrentBitIndex < (TStack_110.Array)->NumBits);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return __return_storage_ptr__;
}

// GetFloat @ 1425818b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
FSlateStyleSet::GetFloat
          (FSlateStyleSet *this,FName param_1,char *param_2,float param_3,ISlateStyle *param_4)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  float *pfVar4;
  ISlateStyle *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  float fVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38 [2];
  
  FVar2 = param_1;
  local_res10 = param_1;
  local_res18 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_58,param_2);
    pFVar3 = ::FName::ToString(&local_res18,(FString *)&local_48);
    ::FString::ConcatFF((FString *)&local_68,pFVar3,(FString *)&local_58);
    TVar9.Reference = (ITextData *)L"";
    if (local_68.Flags != 0) {
      TVar9.Reference = local_68.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar9.Reference);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    FVar2 = local_res8;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pfVar4 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)&this->FloatValues,local_res8);
  if (pfVar4 == (float *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar5 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar5 != (ISlateStyle *)0x0)) {
      if (param_4 != (ISlateStyle *)0x0) {
        this = (FSlateStyleSet *)param_4;
      }
      fVar10 = (float)(**(code **)((longlong)*pIVar5 + 0x28))
                                (pIVar5,local_res10,param_2,param_3,this);
      return fVar10;
    }
    if (param_3 == FStyleDefaults::DefaultFloat) {
      if (param_4 != (ISlateStyle *)0x0) {
        this = (FSlateStyleSet *)param_4;
      }
      pcVar1 = *(code **)(this->_padding_ + 0xb0);
      pFVar6 = FText::FromName(&local_68,&local_res10);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"SlateStyleSet",L"UnknownSlateFloat",
                          L"Unable to find float property \'{0}\' in style.");
      pFVar8 = FTextFormat::FTextFormat(local_38,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_48,pFVar8,pFVar6);
      (*pcVar1)(this,3,pFVar6,&local_res10);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    param_3 = *pfVar4;
  }
  return param_3;
}

// GetFontStyle @ 142581b40

FSlateFontInfo * __thiscall
FSlateStyleSet::GetFontStyle
          (FSlateStyleSet *this,FSlateFontInfo *__return_storage_ptr__,FName param_1,char *param_2)

{
  FName FVar1;
  FString *pFVar2;
  FSlateFontInfo *pFVar3;
  ISlateStyle *pIVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res18 [2];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FVar1 = param_1;
  local_res18[0] = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_f8,param_2);
    pFVar2 = ::FName::ToString(local_res18,&local_e8);
    ::FString::ConcatFF(&local_108,pFVar2,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    FVar1 = local_res8;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      FVar1 = local_res8;
    }
  }
  local_res8 = FVar1;
  pFVar3 = TMapBase<FName,FSlateFontInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>_>
           ::Find((TMapBase<FName,FSlateFontInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>_>
                   *)&this->FontInfoResources,local_res8);
  if (pFVar3 == (FSlateFontInfo *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar4 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar4 != (ISlateStyle *)0x0)) {
      (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    pFVar3 = FStyleDefaults::GetFontInfo(&local_d8,10);
    FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,pFVar3);
  }
  else {
    pFVar3 = FSlateFontInfo::FSlateFontInfo(&local_78,pFVar3);
    FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,pFVar3);
    local_d8.CompositeFont.SharedReferenceCount.ReferenceController =
         local_78.CompositeFont.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMargin @ 142581d80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FMargin * __thiscall
FSlateStyleSet::GetMargin
          (FSlateStyleSet *this,FName param_1,char *param_2,FMargin *param_3,ISlateStyle *param_4)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FMargin *pFVar4;
  ISlateStyle *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res8;
  FName local_res10;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_48,param_2);
    pFVar3 = ::FName::ToString(&local_res10,(FString *)&local_38);
    ::FString::ConcatFF((FString *)&local_58,pFVar3,(FString *)&local_48);
    TVar9.Reference = (ITextData *)L"";
    if (local_58.Flags != 0) {
      TVar9.Reference = local_58.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar9.Reference);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    FVar2 = local_res8;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = TMapBase<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_>
           ::Find((TMapBase<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_>
                   *)&this->MarginValues,local_res8);
  if (pFVar4 == (FMargin *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar5 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar5 != (ISlateStyle *)0x0)) {
      pFVar4 = (FMargin *)(**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,param_1,param_2,param_3,0);
      return pFVar4;
    }
    if ((((FStyleDefaults::DefaultMargin.Left == param_3->Left) &&
         (FStyleDefaults::DefaultMargin.Right == param_3->Right)) &&
        (FStyleDefaults::DefaultMargin.Top == param_3->Top)) &&
       (FStyleDefaults::DefaultMargin.Bottom == param_3->Bottom)) {
      if (param_4 != (ISlateStyle *)0x0) {
        this = (FSlateStyleSet *)param_4;
      }
      pcVar1 = *(code **)(this->_padding_ + 0xb0);
      pFVar6 = FText::FromName(&local_58,&local_res8);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"SlateStyleSet",L"UnknownMargin",
                          L"Unable to find Margin \'{0}\'.");
      pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_38,pFVar8,pFVar6);
      (*pcVar1)(this,3,pFVar6,&local_res8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  if (pFVar4 != (FMargin *)0x0) {
    param_3 = pFVar4;
  }
  return param_3;
}

// GetOptionalBrush @ 142582230

FSlateBrush * __thiscall
FSlateStyleSet::GetOptionalBrush
          (FSlateStyleSet *this,FName param_1,char *param_2,FSlateBrush *param_3)

{
  float *pfVar1;
  float fVar2;
  FSlateBrush *pFVar3;
  FName FVar4;
  float fVar5;
  FString *pFVar6;
  TTuple<FName,FSlateBrush_*> *pTVar7;
  TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *pTVar8;
  ISlateStyle *pIVar9;
  FSlateBrush *pFVar10;
  ForAnyElementType FVar11;
  FSlateBrush *pFVar12;
  FSlateBrush *pFVar13;
  bool bVar14;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar4 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_48,param_2);
    pFVar6 = ::FName::ToString(&local_res10,&local_38);
    ::FString::ConcatFF(&local_58,pFVar6,&local_48);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar4 = local_res8;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar4 = local_res8;
    }
  }
  local_res8 = FVar4;
  pTVar7 = TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FSlateBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>,FDefaultSetAllocator>
                   *)&this->BrushResources,local_res8);
  pFVar12 = (FSlateBrush *)0x0;
  pFVar10 = pFVar12;
  if (pTVar7 != (TTuple<FName,FSlateBrush_*> *)0x0) {
    pFVar10 = *(FSlateBrush **)&pTVar7->field_0x8;
    bVar14 = false;
    if (pFVar10 != (FSlateBrush *)0x0) goto LAB_1425823e2;
  }
  pTVar8 = TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
                   *)&this->DynamicBrushes,local_res8);
  if (pTVar8 == (TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar3 = *(FSlateBrush **)&pTVar8->field_0x10;
    pFVar13 = *(FSlateBrush **)&pTVar8->field_0x8;
    if (pFVar3 != (FSlateBrush *)0x0) {
      LOCK();
      pfVar1 = &(pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G;
      *pfVar1 = (float)((int)*pfVar1 + 1);
      UNLOCK();
      fVar2 = (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R;
      do {
        if (fVar2 == 0.0) goto LAB_142582371;
        LOCK();
        fVar5 = (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R;
        bVar14 = fVar2 == fVar5;
        if (bVar14) {
          (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
          fVar5 = fVar2;
        }
        UNLOCK();
        fVar2 = fVar5;
      } while (!bVar14);
    }
    if (pFVar3 == (FSlateBrush *)0x0) {
      pFVar13 = pFVar12;
    }
    pFVar12 = pFVar3;
    if (pFVar13 != (FSlateBrush *)0x0) {
      pFVar10 = pFVar13;
    }
LAB_142582371:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (pFVar3 != (FSlateBrush *)0x0) {
      LOCK();
      pfVar1 = &(pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G;
      fVar2 = *pfVar1;
      *pfVar1 = (float)((int)*pfVar1 + -1);
      UNLOCK();
      if (fVar2 == 1.4013e-45) {
        (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
      }
    }
  }
  bVar14 = false;
  if (pFVar10 == (FSlateBrush *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar9 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar9 != (ISlateStyle *)0x0)) {
      pFVar10 = (FSlateBrush *)
                (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9,param_1,param_2,param_3);
      return pFVar10;
    }
    bVar14 = true;
  }
LAB_1425823e2:
  if (!bVar14) {
    param_3 = pFVar10;
  }
  return param_3;
}

// GetParentStyle @ 142582450

ISlateStyle * __thiscall FSlateStyleSet::GetParentStyle(FSlateStyleSet *this)

{
  ISlateStyle *pIVar1;
  
  if (this->ParentStyleName == (FName)0x0) {
    return (ISlateStyle *)0x0;
  }
  pIVar1 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName);
  return pIVar1;
}

// GetResources @ 142585b40

void __thiscall
FSlateStyleSet::GetResources
          (FSlateStyleSet *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint local_res18;
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_118;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_64;
  undefined4 local_44;
  
  iVar9 = 0;
  local_108 = &this->BrushResources;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BrushResources).field_0x10;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  iVar7 = *(int *)&(this->BrushResources).field_0x28;
  local_res18 = 1;
  iVar10 = 0;
  iVar12 = 0;
  uVar6 = 1;
  iVar11 = iVar10;
  TStack_100.BaseBitIndex = iVar12;
  TStack_d0.CurrentBitIndex = 0;
  if (iVar7 != 0) {
    puVar13 = *(uint **)&(this->BrushResources).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_100.Array;
    }
    uVar6 = *puVar13;
    TStack_100.BaseBitIndex = iVar9;
    iVar11 = iVar9;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      TStack_100.BaseBitIndex = TStack_100.BaseBitIndex + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = 1;
      TStack_d0.CurrentBitIndex = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142585bfe;
      uVar6 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_d0.CurrentBitIndex = TStack_100.BaseBitIndex + -1 + (int)lVar8;
    if (iVar7 < TStack_d0.CurrentBitIndex) {
      TStack_d0.CurrentBitIndex = iVar7;
    }
  }
LAB_142585bfe:
  TStack_100._padding_ = CONCAT44(uVar6,iVar11);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = local_64;
  TStack_d0._padding_ = TStack_100._padding_;
  TStack_d0.BaseBitIndex = TStack_100.BaseBitIndex;
  TStack_d0._28_4_ = local_64;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  local_d8 = local_108;
  TStack_d0.Array = TStack_100.Array;
  TStack_100.CurrentBitIndex = TStack_d0.CurrentBitIndex;
  if (TStack_d0.CurrentBitIndex < iVar7) {
    do {
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)local_d8 + ((longlong)TStack_d0.CurrentBitIndex * 3 + 1) * 8);
      if (((local_118.AllocatorInstance.Data <= pFVar1) &&
          (pFVar1 < local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_118.ArrayNum == local_118.ArrayMax) {
        local_118.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
      }
      lVar8 = (longlong)local_118.ArrayNum;
      local_118.ArrayNum = local_118.ArrayNum + 1;
      *(undefined8 *)(local_118.AllocatorInstance.Data + lVar8 * 8) = *(undefined8 *)pFVar1;
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  local_108 = (TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
               *)&this->WidgetStyleValues;
  iVar7 = *(int *)&(this->WidgetStyleValues).field_0x28;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetStyleValues).field_0x10;
  iStack_94 = 0;
  if (iVar7 != 0) {
    puVar13 = *(uint **)&(this->WidgetStyleValues).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_100.Array;
    }
    uVar6 = *puVar13;
    iVar12 = iVar9;
    iVar10 = iVar9;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_94 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142585da0;
      uVar6 = puVar13[lVar8 + 1];
    }
    local_res18 = -uVar6 & uVar6;
    uVar2 = (ulonglong)local_res18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_94 = iVar12 + -1 + (int)lVar8;
    if (iVar7 < iStack_94) {
      iStack_94 = iVar7;
    }
  }
LAB_142585da0:
  uStack_a4 = local_res18;
  uStack_98 = 0xffffffff;
  uStack_8c = local_44;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = local_44;
  TStack_100.BaseBitIndex = iVar12;
  local_b0 = (TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
              *)local_108;
  iStack_a8 = iVar10;
  local_a0 = (undefined1 *)TStack_100.Array;
  local_90 = iVar12;
  TStack_100._padding_._0_4_ = iVar10;
  TStack_100._padding_._4_4_ = uStack_a4;
  TStack_100.CurrentBitIndex = iStack_94;
  if (iStack_94 < iVar7) {
    do {
      plVar3 = *(longlong **)
                ((longlong)TStack_100.CurrentBitIndex * 0x20 + 8 + *(longlong *)local_108);
      (**(code **)(*plVar3 + 8))(plVar3,&local_118);
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
  }
  if ((param_1 == &local_118) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = (longlong)local_118.ArrayNum;
  if (local_118.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_118.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,local_118.AllocatorInstance.Data,
           lVar8 << 3);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// GetSlateColor @ 142588750

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateColor * __thiscall
FSlateStyleSet::GetSlateColor
          (FSlateStyleSet *this,FSlateColor *__return_storage_ptr__,FName param_1,char *param_2,
          FSlateColor *param_3,ISlateStyle *param_4)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FSlateColor *pFVar4;
  FLinearColor *pFVar5;
  ISlateStyle *pIVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TRefCountPtr<ITextData> TVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FName local_res8;
  FName local_res18 [2];
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  uint local_38;
  
  FVar2 = param_1;
  local_res18[0] = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_68,param_2);
    pFVar3 = ::FName::ToString(local_res18,(FString *)&local_58);
    ::FString::ConcatFF((FString *)&local_78,pFVar3,(FString *)&local_68);
    TVar10.Reference = (ITextData *)L"";
    if (local_78.Flags != 0) {
      TVar10.Reference = local_78.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar10.Reference);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_78.TextData.Reference);
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    FVar2 = local_res8;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = TMapBase<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
           ::Find((TMapBase<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
                   *)&this->SlateColorValues,local_res8);
  if (pFVar4 == (FSlateColor *)0x0) {
    pFVar5 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
             ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                     *)&this->ColorValues,local_res8);
    if (pFVar5 == (FLinearColor *)0x0) {
      if ((this->ParentStyleName != (FName)0x0) &&
         (pIVar6 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
         pIVar6 != (ISlateStyle *)0x0)) {
        (**(code **)((longlong)*pIVar6 + 0x40))
                  (pIVar6,__return_storage_ptr__,param_1,param_2,param_3,0);
        return __return_storage_ptr__;
      }
      if ((((FStyleDefaults::DefaultSlateColor.SpecifiedColor.field0_0x0._s_0.R ==
             (param_3->SpecifiedColor).field0_0x0._s_0.R) &&
           (FStyleDefaults::DefaultSlateColor.SpecifiedColor.field0_0x0._s_0.G ==
            (param_3->SpecifiedColor).field0_0x0._s_0.G)) &&
          (FStyleDefaults::DefaultSlateColor.SpecifiedColor.field0_0x0._s_0.B ==
           (param_3->SpecifiedColor).field0_0x0._s_0.B)) &&
         (((FStyleDefaults::DefaultSlateColor.SpecifiedColor.field0_0x0._s_0.A ==
            (param_3->SpecifiedColor).field0_0x0._s_0.A &&
           (param_3->ColorUseRule == FStyleDefaults::DefaultSlateColor.ColorUseRule)) &&
          ((param_3->ColorUseRule != UseColor_ColorTable ||
           (param_3->ColorTableId == FStyleDefaults::DefaultSlateColor.ColorTableId)))))) {
        if (param_4 != (ISlateStyle *)0x0) {
          this = (FSlateStyleSet *)param_4;
        }
        pcVar1 = *(code **)(this->_padding_ + 0xb0);
        pFVar7 = FText::FromName(&local_78,&local_res8);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_68,L"SlateStyleSet",L"UnknownSlateColor",
                            L"Unable to find SlateColor \'{0}\'.");
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_58,pFVar9,pFVar7);
        (*pcVar1)(this,3,pFVar7,&local_res8);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
      }
      fVar11 = (param_3->SpecifiedColor).field0_0x0._s_0.R;
      fVar12 = (param_3->SpecifiedColor).field0_0x0._s_0.G;
      fVar13 = (param_3->SpecifiedColor).field0_0x0._s_0.B;
      fVar14 = (param_3->SpecifiedColor).field0_0x0._s_0.A;
      local_38._0_1_ = param_3->ColorUseRule;
      local_38._1_1_ = param_3->ColorTableId;
      local_38._2_2_ = *(undefined2 *)&param_3->field_0x12;
    }
    else {
      fVar11 = (pFVar5->field0_0x0)._s_0.R;
      fVar12 = (pFVar5->field0_0x0)._s_0.G;
      fVar13 = (pFVar5->field0_0x0)._s_0.B;
      fVar14 = (pFVar5->field0_0x0)._s_0.A;
      local_38 = local_38 & 0xffffff00;
    }
  }
  else {
    fVar11 = (pFVar4->SpecifiedColor).field0_0x0._s_0.R;
    fVar12 = (pFVar4->SpecifiedColor).field0_0x0._s_0.G;
    fVar13 = (pFVar4->SpecifiedColor).field0_0x0._s_0.B;
    fVar14 = (pFVar4->SpecifiedColor).field0_0x0._s_0.A;
    local_38._0_1_ = pFVar4->ColorUseRule;
    local_38._1_1_ = pFVar4->ColorTableId;
    local_38._2_2_ = *(undefined2 *)&pFVar4->field_0x12;
  }
  *(ulonglong *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = CONCAT44(fVar12,fVar11);
  *(ulonglong *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
       CONCAT44(fVar14,fVar13);
  __return_storage_ptr__->ColorUseRule = (char)local_38;
  __return_storage_ptr__->ColorTableId = (char)(local_38 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)(local_38 >> 0x10);
  return __return_storage_ptr__;
}

// GetSound @ 142588a40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateSound * __thiscall
FSlateStyleSet::GetSound(FSlateStyleSet *this,FName param_1,char *param_2,ISlateStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FSlateSound *pFVar4;
  ISlateStyle *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res8;
  FName local_res10;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString((FString *)&local_48,param_2);
    pFVar3 = ::FName::ToString(&local_res10,(FString *)&local_38);
    ::FString::ConcatFF((FString *)&local_58,pFVar3,(FString *)&local_48);
    TVar9.Reference = (ITextData *)L"";
    if (local_58.Flags != 0) {
      TVar9.Reference = local_58.TextData.Reference;
    }
    ::FName::FName(&local_res8,(wchar_t *)TVar9.Reference);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    FVar2 = local_res8;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = TMapBase<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
           ::Find((TMapBase<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
                   *)&this->Sounds,local_res8);
  if (pFVar4 == (FSlateSound *)0x0) {
    if ((this->ParentStyleName != (FName)0x0) &&
       (pIVar5 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
       pIVar5 != (ISlateStyle *)0x0)) {
      pFVar4 = (FSlateSound *)(**(code **)((longlong)*pIVar5 + 0x80))(pIVar5,param_1,param_2,0);
      return pFVar4;
    }
    if (param_3 != (ISlateStyle *)0x0) {
      this = (FSlateStyleSet *)param_3;
    }
    pcVar1 = *(code **)(this->_padding_ + 0xb0);
    pFVar6 = FText::FromName(&local_58,&local_res8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"SlateStyleSet",L"UnknownSound",L"Unable to find Sound \'{0}\'.")
    ;
    pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_38,pFVar8,pFVar6);
    (*pcVar1)(this,3,pFVar6,&local_res8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pFVar4 = &FStyleDefaults::DefaultSound;
  }
  return pFVar4;
}

// GetStyleKeys @ 142588ca0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FSlateStyleSet::GetStyleKeys
          (FSlateStyleSet *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  ulonglong uVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  ForElementType<FSetElementId> *pFVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FName local_res20;
  uint local_288;
  uint uStack_284;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  uint local_268;
  uint uStack_264;
  uint uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  int local_248;
  uint uStack_244;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_228;
  TArray<FName,TSizedDefaultAllocator<32>_> local_218;
  TArray<FName,TSizedDefaultAllocator<32>_> local_208;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1a8;
  FName local_198;
  int local_190;
  undefined1 local_18c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  undefined4 local_160;
  int local_15c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FName *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FName *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FName *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FName *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FName_const_,int> local_a8;
  TArrayView<FName_const_,int> local_98;
  TArrayView<FName_const_,int> local_88;
  TArrayView<FName_const_,int> local_78;
  TArrayView<FName_const_,int> local_68;
  TArrayView<FName_const_,int> local_58;
  
  uVar12 = 0;
  pFVar16 = &(__return_storage_ptr__->Hash).SecondaryData;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  *pFVar16 = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  TMapBase<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
              *)&this->WidgetStyleValues,&local_1d8);
  FVar20.Data = local_1d8.AllocatorInstance.Data;
  iVar9 = local_1d8.ArrayNum;
  lVar19 = (longlong)local_1d8.ArrayNum;
  if ((local_1d8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  uVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
          *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  uVar14 = uVar6 + iVar9;
  if (uVar6 < uVar14) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)__return_storage_ptr__,uVar14);
    if (uVar14 < 4) {
      uVar6 = 1;
    }
    else {
      uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar6 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((__return_storage_ptr__->HashSize == 0) || (__return_storage_ptr__->HashSize < (int)uVar6))
    {
      __return_storage_ptr__->HashSize = uVar6;
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)pFVar16,0,0,4);
      }
      if (uVar6 != 0) {
        uVar14 = uVar6;
        if (uVar6 < 2) {
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar14 = 0;
            goto LAB_142588dcd;
          }
        }
        else {
LAB_142588dcd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)pFVar16,0,uVar14,4);
        }
        if (0 < (int)uVar6) {
          uVar17 = (ulonglong)uVar6;
          uVar11 = uVar12;
          do {
            FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar2 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar2;
            }
            uVar8 = (longlong)(int)uVar6 - 1U & uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (__return_storage_ptr__->HashSize != 0) {
        uVar6 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
        local_150.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
        uStack_284 = 1;
        local_288 = 0;
        uStack_274 = 0;
        uStack_270 = 0;
        if (uVar6 != 0) {
          puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)local_150.Array;
          }
          uVar14 = *puVar18;
          uVar11 = uVar12;
          while (uVar14 == 0) {
            uStack_270 = (int)uVar11 + 0x20;
            uVar11 = (ulonglong)uStack_270;
            iVar9 = (int)uVar12;
            local_288 = iVar9 + 1;
            uVar12 = (ulonglong)local_288;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_288)
            goto LAB_142588ec5;
            uVar14 = puVar18[(longlong)iVar9 + 1];
          }
          uStack_284 = -uVar14 & uVar14;
          uVar12 = (ulonglong)uStack_284 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uStack_274 = (uStack_270 - 1) + (int)lVar13;
          uVar12 = (ulonglong)uStack_274;
          if ((int)uVar6 < (int)uStack_274) {
LAB_142588ec5:
            uVar12 = (ulonglong)uVar6;
            uStack_274 = uVar6;
          }
        }
        local_150._padding_ = CONCAT44(uStack_284,local_288);
        local_150.CurrentBitIndex = uStack_274;
        local_150.UnvisitedBitMask = 0xffffffff;
        local_150._28_4_ = uStack_26c;
        local_150.BaseBitIndex = uStack_270;
        local_158 = __return_storage_ptr__;
        if ((int)uVar12 < (int)uVar6) {
          do {
            puVar15 = (undefined8 *)
                      ((longlong)(int)uVar12 * 0x10 + *(longlong *)&local_158->Elements);
            uVar3 = *puVar15;
            uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar6 = __return_storage_ptr__->HashSize - 1U & uVar6 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)((longlong)puVar15 + 0xc) = uVar6;
            FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar2 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar2;
            }
            uVar11 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar6;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10 + uVar11 * 4);
            *(int *)((longlong)FVar10 + uVar11 * 4) = (int)uVar12;
            local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
            uVar12 = (ulonglong)(uint)local_150.CurrentBitIndex;
          } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
        }
      }
    }
  }
  pFVar16 = &(__return_storage_ptr__->Hash).SecondaryData;
  uVar12 = 0;
  pFVar1 = FVar20.Data + lVar19 * 8;
  for (; FVar20.Data != pFVar1; FVar20.Data = FVar20.Data + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (__return_storage_ptr__,&local_res20,(bool *)FVar20.Data);
  }
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)&this->FloatValues,&local_1c8);
  FVar20.Data = local_1c8.AllocatorInstance.Data;
  iVar9 = local_1c8.ArrayNum;
  lVar19 = (longlong)local_1c8.ArrayNum;
  if ((local_1c8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  uVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
          *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  uVar14 = uVar6 + iVar9;
  if (uVar6 < uVar14) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)__return_storage_ptr__,uVar14);
    if (uVar14 < 4) {
      uVar6 = 1;
    }
    else {
      uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_160 = (undefined4)lVar13;
      uVar6 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((__return_storage_ptr__->HashSize == 0) || (__return_storage_ptr__->HashSize < (int)uVar6))
    {
      __return_storage_ptr__->HashSize = uVar6;
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)pFVar16,0,0,4);
      }
      if (uVar6 != 0) {
        uVar14 = uVar6;
        if (uVar6 < 2) {
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar14 = 0;
            goto LAB_14258908a;
          }
        }
        else {
LAB_14258908a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)pFVar16,0,uVar14,4);
        }
        if (0 < (int)uVar6) {
          uVar17 = (ulonglong)uVar6;
          uVar11 = uVar12;
          do {
            FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar2 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar2;
            }
            uVar8 = (longlong)(int)uVar6 - 1U & uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (__return_storage_ptr__->HashSize != 0) {
        uVar6 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
        local_128.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
        uStack_264 = 1;
        local_268 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        if (uVar6 != 0) {
          puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)local_128.Array;
          }
          uVar14 = *puVar18;
          uVar11 = uVar12;
          while (uVar14 == 0) {
            uStack_250 = (int)uVar11 + 0x20;
            uVar11 = (ulonglong)uStack_250;
            iVar9 = (int)uVar12;
            local_268 = iVar9 + 1;
            uVar12 = (ulonglong)local_268;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_268)
            goto LAB_142589192;
            uVar14 = puVar18[(longlong)iVar9 + 1];
          }
          uStack_264 = -uVar14 & uVar14;
          uVar12 = (ulonglong)uStack_264 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_15c = (int)lVar13;
          uStack_254 = (int)uVar11 + -1 + local_15c;
          uVar12 = (ulonglong)uStack_254;
          if ((int)uVar6 < (int)uStack_254) {
LAB_142589192:
            uVar12 = (ulonglong)uVar6;
            uStack_254 = uVar6;
          }
        }
        local_128._padding_ = CONCAT44(uStack_264,local_268);
        local_128.CurrentBitIndex = uStack_254;
        local_128.UnvisitedBitMask = 0xffffffff;
        local_128._28_4_ = uStack_24c;
        local_128.BaseBitIndex = uStack_250;
        local_130 = __return_storage_ptr__;
        if ((int)uVar12 < (int)uVar6) {
          do {
            puVar15 = (undefined8 *)
                      ((longlong)(int)uVar12 * 0x10 + *(longlong *)&local_130->Elements);
            uVar3 = *puVar15;
            uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar6 = __return_storage_ptr__->HashSize - 1U & uVar6 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)((longlong)puVar15 + 0xc) = uVar6;
            FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar2 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar2;
            }
            uVar11 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar6;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10 + uVar11 * 4);
            *(int *)((longlong)FVar10 + uVar11 * 4) = (int)uVar12;
            local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
            uVar12 = (ulonglong)(uint)local_128.CurrentBitIndex;
          } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
        }
      }
    }
  }
  pFVar1 = FVar20.Data + lVar19 * 8;
  for (; FVar20.Data != pFVar1; FVar20.Data = FVar20.Data + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (__return_storage_ptr__,&local_198,(bool *)FVar20.Data);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
              *)&this->Vector2DValues,&local_1b8);
  FVar20.Data = local_1b8.AllocatorInstance.Data;
  iVar9 = local_1b8.ArrayNum;
  lVar19 = (longlong)local_1b8.ArrayNum;
  if ((local_1b8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  uVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
          *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  uVar14 = uVar6 + iVar9;
  if (uVar14 <= uVar6) goto LAB_14258952b;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  if (uVar14 < 4) {
    uVar6 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198.Number = (uint)lVar13;
    uVar6 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar6 <= __return_storage_ptr__->HashSize))
  goto LAB_14258952b;
  __return_storage_ptr__->HashSize = uVar6;
  pFVar16 = &(__return_storage_ptr__->Hash).SecondaryData;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)pFVar16,0,0,4);
  }
  if (uVar6 != 0) {
    uVar14 = uVar6;
    if (uVar6 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_14258937b;
      }
    }
    else {
LAB_14258937b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)pFVar16,0,uVar14,4);
    }
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar11 = (ulonglong)uVar6;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        uVar17 = (longlong)(int)uVar6 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)FVar10 + uVar17 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    local_180.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    uStack_244 = 1;
    local_248 = 0;
    iStack_234 = 0;
    iStack_230 = 0;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_180.Array;
      }
      uVar6 = *puVar18;
      iStack_230 = 0;
      local_248 = 0;
      while (uVar6 == 0) {
        iStack_230 = iStack_230 + 0x20;
        lVar13 = (longlong)local_248;
        local_248 = local_248 + 1;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_248) goto LAB_142589482;
        uVar6 = puVar18[lVar13 + 1];
      }
      uStack_244 = -uVar6 & uVar6;
      uVar12 = (ulonglong)uStack_244 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_190 = (int)lVar13;
      iStack_234 = local_190 + -1 + iStack_230;
      if (iVar9 < iStack_234) {
LAB_142589482:
        iStack_234 = iVar9;
      }
    }
    local_180._padding_ = CONCAT44(uStack_244,local_248);
    local_180.CurrentBitIndex = iStack_234;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180._28_4_ = uStack_22c;
    local_180.BaseBitIndex = iStack_230;
    local_18c._4_8_ = __return_storage_ptr__;
    if (iStack_234 < iVar9) {
      do {
        puVar15 = (undefined8 *)
                  ((longlong)iStack_234 * 0x10 +
                  *(longlong *)
                   (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_18c._4_8_);
        uVar3 = *puVar15;
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar6 = __return_storage_ptr__->HashSize - 1U & uVar6 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar6;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        uVar12 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10 + uVar12 * 4);
        *(int *)((longlong)FVar10 + uVar12 * 4) = iStack_234;
        local_180.UnvisitedBitMask = local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
        iStack_234 = local_180.CurrentBitIndex;
      } while (local_180.CurrentBitIndex < (local_180.Array)->NumBits);
    }
  }
LAB_14258952b:
  pFVar1 = FVar20.Data + lVar19 * 8;
  for (; FVar20.Data != pFVar1; FVar20.Data = FVar20.Data + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (__return_storage_ptr__,(FName *)local_18c,(bool *)FVar20.Data);
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
              *)&this->ColorValues,&local_1a8);
  iStack_100 = local_1a8.ArrayNum;
  local_108 = (FName *)local_1a8.AllocatorInstance.Data;
  if ((local_1a8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_a8._12_4_ = uStack_fc;
  local_a8.ArrayNum = iStack_100;
  local_a8.DataPtr = local_108;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_a8);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  TMapBase<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSlateColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>_>
              *)&this->SlateColorValues,&local_228);
  iStack_b0 = local_228.ArrayNum;
  local_b8 = (FName *)local_228.AllocatorInstance.Data;
  if ((local_228.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_98._12_4_ = uStack_ac;
  local_98.ArrayNum = iStack_b0;
  local_98.DataPtr = local_b8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_98);
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  TMapBase<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_>::
  GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FMargin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMargin,0>_>
              *)&this->MarginValues,&local_218);
  iStack_f0 = local_218.ArrayNum;
  local_f8 = (FName *)local_218.AllocatorInstance.Data;
  if ((local_218.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_88._12_4_ = uStack_ec;
  local_88.ArrayNum = iStack_f0;
  local_88.DataPtr = local_f8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_88);
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  TMapBase<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
              *)&this->BrushResources,&local_208);
  iStack_e0 = local_208.ArrayNum;
  local_e8 = (FName *)local_208.AllocatorInstance.Data;
  if ((local_208.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_78._12_4_ = uStack_dc;
  local_78.ArrayNum = iStack_e0;
  local_78.DataPtr = local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_78);
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  TMapBase<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSlateSound,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateSound,0>_>
              *)&this->Sounds,&local_1f8);
  iStack_d0 = local_1f8.ArrayNum;
  local_d8 = (FName *)local_1f8.AllocatorInstance.Data;
  if ((local_1f8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_68._12_4_ = uStack_cc;
  local_68.ArrayNum = iStack_d0;
  local_68.DataPtr = local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_68);
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  TMapBase<FName,FSlateFontInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FSlateFontInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>_>
              *)&this->FontInfoResources,&local_1e8);
  iStack_c0 = local_1e8.ArrayNum;
  local_c8 = (FName *)local_1e8.AllocatorInstance.Data;
  if ((local_1e8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar7;
  }
  local_58._12_4_ = uStack_bc;
  local_58.ArrayNum = iStack_c0;
  local_58.DataPtr = local_c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (__return_storage_ptr__,&local_58);
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStyleSetName @ 1425898b0

FName * __thiscall FSlateStyleSet::GetStyleSetName(FSlateStyleSet *this)

{
  return &this->StyleSetName;
}

// GetVector @ 14258a000

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateStyleSet::GetVector
          (FSlateStyleSet *this,FName param_1,char *param_2,FDeprecateVector2DParameter param_3,
          ISlateStyle *param_4)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  FName FVar3;
  FString *pFVar4;
  TVector2<float>_u_0 *pTVar5;
  ISlateStyle *pIVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TRefCountPtr<ITextData> TVar10;
  undefined8 local_res8;
  FName local_res18;
  FName local_res20;
  FSlateStyleSet *in_stack_00000030;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  FVar3 = (FName)param_2;
  local_res18 = (FName)param_2;
  local_res20 = (FName)param_2;
  if (param_3 != (FDeprecateVector2DParameter)0x0) {
    ::FString::FString((FString *)&local_58,(char *)param_3);
    pFVar4 = ::FName::ToString(&local_res20,(FString *)&local_48);
    ::FString::ConcatFF((FString *)&local_68,pFVar4,(FString *)&local_58);
    TVar10.Reference = (ITextData *)L"";
    if (local_68.Flags != 0) {
      TVar10.Reference = local_68.TextData.Reference;
    }
    ::FName::FName((FName *)&local_res8,(wchar_t *)TVar10.Reference);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    FVar3 = (FName)local_res8;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
      FVar3 = (FName)local_res8;
    }
  }
  local_res8 = (TVector2<float>_u_0)FVar3;
  pTVar5 = &TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
            ::Find((TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
                    *)&this->Vector2DValues,(FName)local_res8)->field0_0x0;
  if (pTVar5 != (TVector2<float>_u_0 *)0x0) {
    *(TVector2<float>_u_0 *)param_1 = *pTVar5;
    return (FDeprecateSlateVector2D)param_1;
  }
  if ((this->ParentStyleName != (FName)0x0) &&
     (pIVar6 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
     pIVar6 != (ISlateStyle *)0x0)) {
    (**(code **)((longlong)*pIVar6 + 0x30))(pIVar6,param_1,local_res18,param_3,param_4,0);
    return (FDeprecateSlateVector2D)param_1;
  }
  local_res8 = FStyleDefaults::DefaultFVector2D.field0_0x0;
  TVar2._s_0 = local_res8;
  local_res8._0_4_ = FStyleDefaults::DefaultFVector2D.field0_0x0._0_4_;
  if ((param_4._0_4_ == (float)local_res8._0_4_) &&
     (local_res8._4_4_ = FStyleDefaults::DefaultFVector2D.field0_0x0._4_4_,
     param_4._4_4_ == local_res8._4_4_)) {
    if (in_stack_00000030 != (FSlateStyleSet *)0x0) {
      this = in_stack_00000030;
    }
    pcVar1 = *(code **)(this->_padding_ + 0xb0);
    local_res8 = TVar2._s_0;
    pFVar7 = FText::FromName(&local_68,&local_res18);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"SlateStyleSet",L"UnknownSlateVector",
                        L"Unable to find vector property \'{0}\' in style.");
    pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_48,pFVar9,pFVar7);
    (*pcVar1)(this,3,pFVar7,&local_res18);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  *(ISlateStyle **)param_1 = param_4;
  return (FDeprecateSlateVector2D)param_1;
}

// GetWidgetStyleInternal @ 14258a250

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateWidgetStyle * __thiscall
FSlateStyleSet::GetWidgetStyleInternal
          (FSlateStyleSet *this,FName param_1,FName param_2,FSlateWidgetStyle *param_3,bool param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FSlateWidgetStyle,1> *pTVar3;
  ISlateStyle *pIVar4;
  FSlateWidgetStyle *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName *pFVar10;
  FText *pFVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pTVar3 = TMapBase<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
                   *)&this->WidgetStyleValues,param_2);
  if (pTVar3 != (TSharedRef<FSlateWidgetStyle,1> *)0x0) {
    pFVar5 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = (FName *)(**(code **)((longlong)*pFVar5 + 0x10))(pFVar5,local_res8);
    if (*pFVar10 != local_res10) {
      if (param_4) {
        pcVar1 = *(code **)(this->_padding_ + 0xa8);
        pFVar10 = (FName *)(**(code **)((longlong)*pFVar5 + 0x10))(pFVar5,local_res8);
        pFVar6 = FText::FromName(&local_58,pFVar10);
        pFVar7 = FText::FromName(&local_68,&local_res10);
        pFVar8 = FText::FromName(&local_78,local_res18);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"SlateStyleSet",L"WrongWidgetStyleType",
                             L"The Slate Widget Style \'{0}\' is not of the desired type. Desired: \'{1}\', Actual: \'{2}\'"
                            );
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar11,Default);
        pFVar6 = FText::Format<FText,FText,FText>(&local_88,pFVar9,pFVar8,pFVar7,pFVar6);
        (*pcVar1)(this,1,pFVar6);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      pFVar5 = (FSlateWidgetStyle *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return pFVar5;
  }
  if (((this->ParentStyleName != (FName)0x0) &&
      (pIVar4 = FSlateStyleRegistry::FindSlateStyle(&this->ParentStyleName),
      pIVar4 != (ISlateStyle *)0x0)) &&
     (pFVar5 = (FSlateWidgetStyle *)
               (**(code **)((longlong)*pIVar4 + 0xa0))
                         (pIVar4,local_res10,local_res18[0],param_3,param_4),
     pFVar5 != (FSlateWidgetStyle *)0x0)) {
    return pFVar5;
  }
  if (param_4) {
    pcVar1 = *(code **)(this->_padding_ + 0xa8);
    pFVar6 = FText::FromName(&local_78,&local_res10);
    pFVar7 = FText::FromName(&local_68,local_res18);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"SlateStyleSet",L"UnknownWidgetStyle",
                        L"Unable to find Slate Widget Style \'{0}\'. Using {1} defaults instead.");
    pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar8,Default);
    pFVar6 = FText::Format<FText,FText>(&local_98,pFVar9,pFVar7,pFVar6);
    (*pcVar1)(this,3,pFVar6);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  return param_3;
}

// GetWidgetStyleNames @ 14258a4a0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FSlateStyleSet::GetWidgetStyleNames(FSlateStyleSet *this)

{
  return &this->KnownWidgetStyles;
}

// IsBrushFromFile @ 14258bc60

bool __thiscall
FSlateStyleSet::IsBrushFromFile(FSlateStyleSet *this,FString *param_1,FSlateBrush *param_2)

{
  UObject *pUVar1;
  int iVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_2->ResourceName;
  if ((local_res10[0] == (FName)0x0) &&
     (pUVar1 = (param_2->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res10[0].Number = *(uint *)&pUVar1->field_0x1c;
  }
  ::FName::ToString(local_res10,&local_38);
  FPaths::MakeStandardFilename(&local_38);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,pwVar4);
  if (iVar2 == 0) {
    bVar5 = true;
  }
  else {
    FPaths::ConvertRelativePathToFull(&local_18,param_1);
    FPaths::ConvertRelativePathToFull(&local_28,&local_38);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar3.Data);
    if (iVar2 == 0) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Log @ 14258c1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateStyleSet::Log(FSlateStyleSet *this,EStyleMessageSeverity param_1,FText *param_2)

{
  if (param_1 == Error) {
    if (1 < (byte)LogSlateStyle._0_1_) {
      FText::ToString(param_2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      return;
    }
  }
  else if (param_1 == PerformanceWarning) {
    if (2 < (byte)LogSlateStyle._0_1_) {
      FText::ToString(param_2);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      return;
    }
  }
  else if (param_1 == Warning) {
    if (2 < (byte)LogSlateStyle._0_1_) {
      FText::ToString(param_2);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      return;
    }
  }
  else {
    if (param_1 != Info) {
      FText::ToString(param_2);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      return;
    }
    if (4 < (byte)LogSlateStyle._0_1_) {
      FText::ToString(param_2);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      return;
    }
  }
  return;
}

// LogMissingResource @ 14258c2f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FSlateStyleSet::LogMissingResource
          (FSlateStyleSet *this,EStyleMessageSeverity param_1,FText *param_2,FName *param_3)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  ForElementType<FSetElementId> FVar9;
  FName local_res8;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  FVar1 = *param_3;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->MissingResources).Elements.field_0x8 !=
      *(int *)&(this->MissingResources).Elements.field_0x34) {
    FVar9 = (this->MissingResources).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->MissingResources).Hash;
    }
    iVar4 = *(int *)((longlong)FVar9 +
                    (ulonglong)((this->MissingResources).HashSize - 1U & FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->MissingResources).Elements;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x10) == FVar1) {
          return;
        }
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  local_68.TextData.Reference = (param_2->TextData).Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,&local_res8);
  }
  local_68.Flags = param_2->Flags;
  pFVar5 = (FName *)(**(code **)(this->_padding_ + 8))(this);
  pFVar6 = FText::FromName(&local_38,pFVar5);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"SlateStyleSet",L"SlateSetResourceMissing",
                      L"Missing Resource from \'{0}\' Style: \'{1}\'");
  pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
  FText::Format<FText,FText>(&local_58,pFVar8,pFVar6,&local_68);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->MissingResources,&local_res8,(bool *)param_3);
  (**(code **)(this->_padding_ + 0xa8))(this,param_1,&local_58);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// LogUnusedBrushResources @ 14258c470

void __thiscall FSlateStyleSet::LogUnusedBrushResources(FSlateStyleSet *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  FString *pFVar9;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *pTVar10;
  TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  *pTVar11;
  bool bVar12;
  IFileManager *pIVar13;
  FString *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  wchar_t *pwVar21;
  undefined1 *puVar22;
  wchar_t *pwVar23;
  uint *puVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString *local_178;
  undefined8 local_170;
  undefined8 *local_168;
  ulonglong local_160;
  uint local_158;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  FString *local_110;
  TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FText local_98 [2];
  undefined4 local_6c;
  undefined4 local_4c;
  
  local_178 = (FString *)0x0;
  local_170 = 0;
  pIVar13 = IFileManager::Get();
  pcVar5 = *(code **)((longlong)*pIVar13 + 0x88);
  pFVar14 = ::FString::FString(&local_a8,"*.png");
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  if ((this->ContentRootDir).Data.ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(this->ContentRootDir).Data.AllocatorInstance.Data;
  }
  (*pcVar5)(pIVar13,&local_178,pwVar21,pwVar23,1,0,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  uVar15 = (ulonglong)(int)(uint)local_170;
  local_110 = local_178 + uVar15;
  local_158 = (uint)local_170;
  pFVar14 = local_178;
LAB_14258c530:
  pFVar9 = local_110;
  if ((uint)local_170 != (int)uVar15) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar14 == pFVar9) {
    DestructItems<FString,int>(local_178,(uint)local_170);
    if (local_178 != (FString *)0x0) {
      FMemory::Free(local_178);
    }
    return;
  }
  puVar1 = &(this->BrushResources).field_0x10;
  iStack_148 = 0;
  iVar3 = *(int *)&(this->BrushResources).field_0x28;
  local_150 = &this->BrushResources;
  local_130 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)&(this->BrushResources).field_0x20;
    puVar24 = (uint *)puVar1;
    if (puVar6 != (uint *)0x0) {
      puVar24 = puVar6;
    }
    uVar20 = *puVar24;
    while (uVar20 == 0) {
      lVar16 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14258c5dd;
      uVar20 = puVar24[lVar16 + 1];
    }
    uStack_144 = -uVar20 & uVar20;
    uVar15 = (ulonglong)uStack_144 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_120 = (int)lVar16;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar3 < iStack_134) {
      iStack_134 = iVar3;
    }
  }
LAB_14258c5dd:
  uVar20 = *(uint *)&(this->BrushResources).field_0x28;
  uStack_12c = local_6c;
  iStack_128 = *(int *)&(this->BrushResources).field_0x8 -
               *(int *)&(this->BrushResources).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_144,iStack_148);
  uStack_138 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_134;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_100._28_4_ = local_6c;
  TStack_100.BaseBitIndex = local_130;
  uStack_e0 = CONCAT44(uStack_124,iStack_128);
  local_140 = puVar1;
  local_108 = local_150;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->BrushResources).field_0x28;
  if (uVar20 != uVar4) {
    puVar7 = *(undefined1 **)&(this->BrushResources).field_0x20;
    puVar22 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar22 = puVar7;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14258c6ed;
      uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_11c = (int)lVar16;
    uVar20 = local_11c + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_14258c6ed:
  while( true ) {
    pTVar10 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FSlateBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_100.CurrentBitIndex == uVar20) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar10 == &this->BrushResources)) {
      iVar3 = *(int *)&(this->WidgetStyleValues).field_0x28;
      puVar1 = &(this->WidgetStyleValues).field_0x10;
      iStack_148 = 0;
      local_150 = (TMap<FName,FSlateBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateBrush_*,0>_>
                   *)&this->WidgetStyleValues;
      local_130 = 0;
      uStack_144 = 1;
      iStack_134 = 0;
      if (iVar3 == 0) goto LAB_14258c7ed;
      puVar6 = *(uint **)&(this->WidgetStyleValues).field_0x20;
      puVar24 = (uint *)puVar1;
      if (puVar6 != (uint *)0x0) {
        puVar24 = puVar6;
      }
      uVar20 = *puVar24;
      if (uVar20 != 0) goto LAB_14258c7c8;
      goto LAB_14258c7b0;
    }
    bVar12 = IsBrushFromFile(this,pFVar14,
                             *(FSlateBrush **)
                              (*(longlong *)pTVar10 + 8 +
                              (longlong)TStack_100.CurrentBitIndex * 0x18));
    if (bVar12) break;
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  goto LAB_14258ca11;
  while (uVar20 = puVar24[lVar16 + 1], uVar20 == 0) {
LAB_14258c7b0:
    lVar16 = (longlong)iStack_148;
    local_130 = local_130 + 0x20;
    iStack_148 = iStack_148 + 1;
    iStack_134 = iVar3;
    if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14258c7ed;
  }
LAB_14258c7c8:
  uStack_144 = -uVar20 & uVar20;
  uVar15 = (ulonglong)uStack_144 * 2 + 1;
  lVar16 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  local_118 = (int)lVar16;
  iStack_134 = local_130 + -1 + local_118;
  if (iVar3 < iStack_134) {
    iStack_134 = iVar3;
  }
LAB_14258c7ed:
  uVar20 = *(uint *)&(this->WidgetStyleValues).field_0x28;
  uStack_12c = local_4c;
  iStack_128 = *(int *)&(this->WidgetStyleValues).field_0x8 -
               *(int *)&(this->WidgetStyleValues).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_144,iStack_148);
  uStack_138 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_134;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_130;
  uStack_b0 = CONCAT44(uStack_124,iStack_128);
  local_140 = puVar1;
  local_d8 = (TMap<FName,TSharedRef<FSlateWidgetStyle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FSlateWidgetStyle,1>,0>_>
              *)local_150;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->WidgetStyleValues).field_0x28;
  if (uVar20 != uVar4) {
    puVar7 = *(undefined1 **)&(this->WidgetStyleValues).field_0x20;
    puVar22 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar22 = puVar7;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14258c8f0;
      uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_114 = (int)lVar16;
    uVar20 = local_114 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_14258c8f0:
  while( true ) {
    pTVar11 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FSlateWidgetStyle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar11 == &this->WidgetStyleValues)) break;
    local_168 = (undefined8 *)0x0;
    local_160 = 0;
    plVar8 = *(longlong **)((longlong)TStack_d0.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar11);
    (**(code **)(*plVar8 + 8))(plVar8,&local_168);
    iVar3 = (int)local_160;
    uVar15 = (ulonglong)(int)local_160;
    puVar2 = local_168 + uVar15;
    puVar18 = local_168;
    while( true ) {
      if ((int)uVar15 != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FSlateBrush_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar18 == puVar2) break;
      bVar12 = IsBrushFromFile(this,pFVar14,(FSlateBrush *)*puVar18);
      if (bVar12) {
        if (local_168 != (undefined8 *)0x0) {
          FMemory::Free(local_168);
        }
        goto LAB_14258ca11;
      }
      uVar15 = local_160 & 0xffffffff;
      puVar18 = puVar18 + 1;
    }
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free(local_168);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pcVar5 = *(code **)(this->_padding_ + 0xa8);
  FText::FromString(local_98,pFVar14);
  (*pcVar5)(this,3);
  if (local_98[0].TextData.Reference == (ITextData *)0x0) {
LAB_14258ca11:
    pFVar14 = pFVar14 + 1;
    uVar15 = (ulonglong)local_158;
  }
  else {
    (**(code **)((longlong)*local_98[0].TextData.Reference + 0x10))();
    uVar15 = (ulonglong)local_158;
    pFVar14 = pFVar14 + 1;
  }
  goto LAB_14258c530;
}

// MakeDynamicImageBrush @ 14258ca60

/* WARNING: Removing unreachable block (ram,0x00014258cbaf) */
/* WARNING: Removing unreachable block (ram,0x00014258ccfa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
FSlateStyleSet::MakeDynamicImageBrush
          (FSlateStyleSet *this,TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,
          FName param_1,UTexture2D *param_2,FName param_3)

{
  FSharedReferencer<1> *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *pTVar9;
  undefined8 uVar10;
  longlong lVar11;
  FSlateDynamicImageBrush *pFVar12;
  FSlateDynamicImageBrush *pFVar13;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar14;
  ForAnyElementType FVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  TPairInitializer<FName_const_&,TWeakPtr<FSlateDynamicImageBrush,1>_&&> local_res8;
  FName local_res18;
  FDeprecateVector2DParameter local_b8;
  TRawPtrProxy<FSlateDynamicImageBrush> local_b0;
  FString local_a8;
  FSlateDynamicImageBrush *local_98;
  TReferenceControllerBase<1> *local_90;
  TWeakPtr<FSlateDynamicImageBrush,1> **local_88;
  FSlateDynamicImageBrush **local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FLinearColor_u_0 local_50;
  
  pFVar13 = (FSlateDynamicImageBrush *)0x0;
  local_res8.Key._0_4_ = 0;
  pFVar12 = pFVar13;
  local_res8.Value = (TWeakPtr<FSlateDynamicImageBrush,1> *)param_1;
  local_res18 = param_1;
  if (param_3 != (FName)0x0) {
    pFVar6 = ::FName::ToString(&param_3,&local_60);
    pFVar7 = ::FName::ToString(&local_res18,&local_70);
    ::FString::ConcatFF(&local_a8,pFVar7,pFVar6);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar15.Data = local_a8.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_78,(wchar_t *)FVar15.Data);
    local_res8.Value = *(TWeakPtr<FSlateDynamicImageBrush,1> **)pFVar8;
    pFVar12 = (FSlateDynamicImageBrush *)&DAT_00000003;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((((ulonglong)pFVar12 & 2) != 0) &&
     (pFVar12 = (FSlateDynamicImageBrush *)(ulonglong)((uint)pFVar12 & 0xfffffffd),
     local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar12 & 1) != 0) &&
     (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  pTVar9 = TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
                   *)&this->DynamicBrushes,(FName)local_res8.Value);
  pFVar1 = &__return_storage_ptr__->SharedReferenceCount;
  if (pTVar9 == (TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FSlateDynamicImageBrush *)0x0;
    pFVar12 = (FSlateDynamicImageBrush *)0x0;
    pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar16 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
    pFVar12 = *(FSlateDynamicImageBrush **)&pTVar9->field_0x8;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (FSlateDynamicImageBrush *)0x0;
      pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = (FSlateDynamicImageBrush *)0x0;
      pFVar1->ReferenceController = pTVar16;
      aVar3 = pTVar16->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar16->SharedReferenceCount;
        bVar17 = aVar3 == aVar5;
        if (bVar17) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar17);
    }
  }
  if (pFVar1->ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pFVar12;
  }
  if (__return_storage_ptr__->Object == (FSlateDynamicImageBrush *)0x0) {
    lVar11 = this->_padding_;
    uVar10 = (**(code **)(lVar11 + 0x78))(this);
    lVar11 = (**(code **)(lVar11 + 0x58))(this,local_res18,0,uVar10);
    pFVar12 = ::operator_new(0xd0);
    if (pFVar12 != (FSlateDynamicImageBrush *)0x0) {
      local_b8 = *(FDeprecateVector2DParameter *)(lVar11 + 0x20);
      local_50._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_50._8_8_ = _UNK_15076b1f8;
      pFVar13 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                          (pFVar12,param_2,&local_b8,(FName)local_res8.Value,
                           (FLinearColor *)&local_50._s_0,NoTile,FullColor);
      if ((((pFVar13 != (FSlateDynamicImageBrush *)0x0) && (*(longlong *)&pFVar13->field_0xb0 != 0))
          && (*(longlong *)&pFVar13->field_0xb8 != 0)) &&
         ((0 < *(int *)(*(longlong *)&pFVar13->field_0xb8 + 8) &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar17)))) {
        pcVar4 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar4)();
        return pTVar14;
      }
    }
    local_b0.Object = pFVar13;
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
              (__return_storage_ptr__,&local_b0);
    local_98 = __return_storage_ptr__->Object;
    local_90 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->WeakReferenceCount = (atomic<int>)((int)local_90->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88 = &local_res8.Value;
    local_80 = &local_98;
    TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TWeakPtr<FSlateDynamicImageBrush,1>_&&>_>
              ((TSet<TTuple<FName,TWeakPtr<FSlateDynamicImageBrush,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<FSlateDynamicImageBrush,1>,0>,FDefaultSetAllocator>
                *)&this->DynamicBrushes,&local_res8,(bool *)&local_88);
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &local_90->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(local_90->_padding_ + 8))(local_90,1);
      }
    }
  }
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar16->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
    }
  }
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258f8f0

FString * __thiscall
FSlateStyleSet::RootToContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::operator/(__return_storage_ptr__,&this->ContentRootDir,param_1);
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258f920

FString * __thiscall
FSlateStyleSet::RootToContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,&this->ContentRootDir,param_1);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258f970

FString * __thiscall
FSlateStyleSet::RootToContentDir(FSlateStyleSet *this,FString *__return_storage_ptr__,char *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  ::operator/(__return_storage_ptr__,&this->ContentRootDir,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258f9d0

FString * __thiscall
FSlateStyleSet::RootToContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,char *param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  uint uVar4;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  iVar1 = (this->ContentRootDir).Data.ArrayNum;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  local_28.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar3 != -1)) {
    _Src = (this->ContentRootDir).Data.AllocatorInstance.Data;
    iVar2 = iVar3 + 2;
LAB_14258fa44:
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar2 == 0) {
      local_28.Data.ArrayMax = 0;
      goto LAB_14258fa99;
    }
  }
  else {
    _Src = (this->ContentRootDir).Data.AllocatorInstance.Data;
    iVar2 = iVar3 + 1;
    if (iVar1 == 0) goto LAB_14258fa44;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar4 = iVar1 + iVar2;
  if ((int)uVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar4,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_14258fa99:
  ::FString::PathAppend(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  ::FString::ConcatFC(__return_storage_ptr__,&local_28,param_2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258fb10

FString * __thiscall
FSlateStyleSet::RootToContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,&this->ContentRootDir,param_1);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToContentDir @ 14258fb60

FString * __thiscall
FSlateStyleSet::RootToContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::operator/(__return_storage_ptr__,&this->ContentRootDir,param_1);
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fb90

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::operator/(__return_storage_ptr__,&this->CoreContentRootDir,param_1);
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fbc0

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,&this->CoreContentRootDir,param_1);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fc10

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,char *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  ::operator/(__return_storage_ptr__,&this->CoreContentRootDir,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fc70

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,char *param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  uint uVar4;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  iVar1 = (this->CoreContentRootDir).Data.ArrayNum;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  local_28.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar3 != -1)) {
    _Src = (this->CoreContentRootDir).Data.AllocatorInstance.Data;
    iVar2 = iVar3 + 2;
LAB_14258fce4:
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar2 == 0) {
      local_28.Data.ArrayMax = 0;
      goto LAB_14258fd39;
    }
  }
  else {
    _Src = (this->CoreContentRootDir).Data.AllocatorInstance.Data;
    iVar2 = iVar3 + 1;
    if (iVar1 == 0) goto LAB_14258fce4;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar4 = iVar1 + iVar2;
  if ((int)uVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar4,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_14258fd39:
  ::FString::PathAppend(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  ::FString::ConcatFC(__return_storage_ptr__,&local_28,param_2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fdb0

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,&this->CoreContentRootDir,param_1);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RootToCoreContentDir @ 14258fe00

FString * __thiscall
FSlateStyleSet::RootToCoreContentDir
          (FSlateStyleSet *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::operator/(__return_storage_ptr__,&this->CoreContentRootDir,param_1);
  return __return_storage_ptr__;
}

// Set @ 142590360

void __thiscall
FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,FDeprecateSlateVector2D *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res20;
  FMemScope local_18 [2];
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
  ::Emplace<FName_const_&,UE::Math::TVector2<float>_const_&>
            ((TMapBase<FName,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>_>
              *)&this->Vector2DValues,&local_res10,(TVector2<float> *)param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 1425903f0

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,FLinearColor *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FLinearColor_const_&> local_res18;
  FName *local_28;
  FLinearColor *local_20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,(FName *)&local_res18,true);
  local_28 = &local_res10;
  local_20 = param_2;
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->ColorValues,&local_res18,(bool *)&local_28);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 142590490

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,FMargin *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FMargin_const_&> local_res18;
  FName *local_28;
  FMargin *local_20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,(FName *)&local_res18,true);
  local_28 = &local_res10;
  local_20 = param_2;
  TSet<TTuple<FName,FMargin>,TDefaultMapHashableKeyFuncs<FName,FMargin,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FMargin_const_&>_>
            ((TSet<TTuple<FName,FMargin>,TDefaultMapHashableKeyFuncs<FName,FMargin,0>,FDefaultSetAllocator>
              *)&this->MarginValues,&local_res18,(bool *)&local_28);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 142590530

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,FSlateColor *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateColor_const_&> local_res18;
  FName *local_28;
  FSlateColor *local_20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,(FName *)&local_res18,true);
  local_28 = &local_res10;
  local_20 = param_2;
  TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateColor_const_&>_>
            ((TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
              *)&this->SlateColorValues,&local_res18,(bool *)&local_28);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 1425905d0

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,FSlateFontInfo *param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,FSlateFontInfo_const_&> local_res18;
  FName *local_28;
  FSlateFontInfo *local_20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res18.Key = (FName *)LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,(FName *)&local_res18,true);
  local_28 = &local_res10;
  local_20 = param_2;
  TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSlateFontInfo_const_&>_>
            ((TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
              *)&this->FontInfoResources,&local_res18,(bool *)&local_28);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Set @ 142590670

void __thiscall FSlateStyleSet::Set(FSlateStyleSet *this,FName param_1,float param_2)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  float local_res18 [2];
  FName local_res20;
  FMemScope local_28;
  FName *local_20;
  float *local_18;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Style.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Style.UniqueName;
  FMemScope::FMemScope(&local_28,&local_res20,true);
  local_20 = &local_res10;
  local_18 = local_res18;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,float_const_&>_>
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->FloatValues,(TPairInitializer<FName_const_&,float_const_&> *)&local_res20,
             (bool *)&local_20);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetContentRoot @ 142590b90

void __thiscall FSlateStyleSet::SetContentRoot(FSlateStyleSet *this,FString *param_1)

{
  ::FString::operator=(&this->ContentRootDir,param_1);
  return;
}

// SetCoreContentRoot @ 142590ba0

void __thiscall FSlateStyleSet::SetCoreContentRoot(FSlateStyleSet *this,FString *param_1)

{
  ::FString::operator=(&this->CoreContentRootDir,param_1);
  return;
}

// SetParentStyleName @ 142591ac0

void __thiscall FSlateStyleSet::SetParentStyleName(FSlateStyleSet *this,FName *param_1)

{
  this->ParentStyleName = *param_1;
  return;
}

