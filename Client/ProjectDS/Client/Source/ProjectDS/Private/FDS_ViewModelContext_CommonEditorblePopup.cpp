// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5e5140

UScriptStruct * __cdecl FDS_ViewModelContext_CommonEditorblePopup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditorblePopup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditorblePopup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CommonEditorblePopup,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CommonEditorblePopup");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditorblePopup.OuterSingleton;
}

// FDS_ViewModelContext_CommonEditorblePopup @ 14b5e9160

FDS_ViewModelContext_CommonEditorblePopup * __thiscall
FDS_ViewModelContext_CommonEditorblePopup::FDS_ViewModelContext_CommonEditorblePopup
          (FDS_ViewModelContext_CommonEditorblePopup *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->ContextText).StringTableType = None;
  (this->ContextText).StringTableID = 0;
  (this->ContextText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContextText).StringEnumTableNameID.Number = 0;
  (this->ContextText).DateTime.Ticks = 0;
  (this->ContextText).TimeSpan.Ticks = 0;
  (this->ContextText).TimeExpressionType = None;
  (this->ContextText).IsExpression = false;
  (this->ContextText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).UniqueString.Data.ArrayNum = 0;
  (this->ContextText).UniqueString.Data.ArrayMax = 0;
  (this->ContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).FormatArgs.ArrayNum = 0;
  (this->ContextText).FormatArgs.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonEditorblePopup__6B_;
  (this->HintText).StringTableType = None;
  (this->HintText).StringTableID = 0;
  (this->HintText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HintText).StringEnumTableNameID.Number = 0;
  (this->HintText).DateTime.Ticks = 0;
  (this->HintText).TimeSpan.Ticks = 0;
  (this->HintText).TimeExpressionType = None;
  (this->HintText).IsExpression = false;
  (this->HintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintText).UniqueString.Data.ArrayNum = 0;
  (this->HintText).UniqueString.Data.ArrayMax = 0;
  (this->HintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintText).FormatArgs.ArrayNum = 0;
  (this->HintText).FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&this->HintText,StringUi,0x55756);
  return this;
}

// ~FDS_ViewModelContext_CommonEditorblePopup @ 14b5e9700

void __thiscall
FDS_ViewModelContext_CommonEditorblePopup::~FDS_ViewModelContext_CommonEditorblePopup
          (FDS_ViewModelContext_CommonEditorblePopup *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->HintText).FormatArgs.AllocatorInstance.Data,
             (this->HintText).FormatArgs.ArrayNum);
  pFVar1 = (this->HintText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HintText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ContextText).FormatArgs.AllocatorInstance.Data,
             (this->ContextText).FormatArgs.ArrayNum);
  pFVar1 = (this->ContextText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContextText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

