// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5df7c0

UScriptStruct * __cdecl FDS_ViewModelContext_CommonIconTextButton::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonIconTextButton.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonIconTextButton.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CommonIconTextButton,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CommonIconTextButton");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonIconTextButton.OuterSingleton;
}

// FDS_ViewModelContext_CommonIconTextButton @ 14b5e9240

FDS_ViewModelContext_CommonIconTextButton * __thiscall
FDS_ViewModelContext_CommonIconTextButton::FDS_ViewModelContext_CommonIconTextButton
          (FDS_ViewModelContext_CommonIconTextButton *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonIconTextButton__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->DSTooltipText).StringTableType = None;
  (this->DSTooltipText).StringTableID = 0;
  (this->DSTooltipText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSTooltipText).StringEnumTableNameID.Number = 0;
  (this->DSTooltipText).DateTime.Ticks = 0;
  (this->DSTooltipText).TimeSpan.Ticks = 0;
  (this->DSTooltipText).TimeExpressionType = None;
  (this->DSTooltipText).IsExpression = false;
  (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).UniqueString.Data.ArrayNum = 0;
  (this->DSTooltipText).UniqueString.Data.ArrayMax = 0;
  (this->DSTooltipText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).FormatArgs.ArrayNum = 0;
  (this->DSTooltipText).FormatArgs.ArrayMax = 0;
  this->ButtonDataID = 0;
  this->IsSelected = false;
  this->IsRedDot = false;
  this->IsDisabled = false;
  this->KeyActionType = None;
  this->ParentWindowWidget = None;
  *(undefined8 *)&this->OnClickDelegate = 0;
  *(undefined8 *)&(this->OnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickDelegate).field_0x10 = 0;
  return this;
}

// ~FDS_ViewModelContext_CommonIconTextButton @ 14b5e97b0

void __thiscall
FDS_ViewModelContext_CommonIconTextButton::~FDS_ViewModelContext_CommonIconTextButton
          (FDS_ViewModelContext_CommonIconTextButton *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate);
  pvVar1 = *(void **)&(this->OnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickDelegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSTooltipText).FormatArgs.AllocatorInstance.Data,
             (this->DSTooltipText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSTooltipText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

