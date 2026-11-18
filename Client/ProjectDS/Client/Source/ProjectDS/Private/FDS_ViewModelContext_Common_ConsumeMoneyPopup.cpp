// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b627500

UScriptStruct * __cdecl FDS_ViewModelContext_Common_ConsumeMoneyPopup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_Common_ConsumeMoneyPopup.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_Common_ConsumeMoneyPopup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_Common_ConsumeMoneyPopup,
                         (UObject *)pUVar1,L"DS_ViewModelContext_Common_ConsumeMoneyPopup");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_Common_ConsumeMoneyPopup.
         OuterSingleton;
}

// FDS_ViewModelContext_Common_ConsumeMoneyPopup @ 14b62c020

FDS_ViewModelContext_Common_ConsumeMoneyPopup * __thiscall
FDS_ViewModelContext_Common_ConsumeMoneyPopup::FDS_ViewModelContext_Common_ConsumeMoneyPopup
          (FDS_ViewModelContext_Common_ConsumeMoneyPopup *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_Common_ConsumeMoneyPopup__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Txt_Title).StringTableType = None;
  (this->Txt_Title).StringTableID = 0;
  (this->Txt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Title).StringEnumTableNameID.Number = 0;
  (this->Txt_Title).DateTime.Ticks = 0;
  (this->Txt_Title).TimeSpan.Ticks = 0;
  (this->Txt_Title).TimeExpressionType = None;
  (this->Txt_Title).IsExpression = false;
  (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Title).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).FormatArgs.ArrayNum = 0;
  (this->Txt_Title).FormatArgs.ArrayMax = 0;
  (this->Txt_Content).StringTableType = None;
  (this->Txt_Content).StringTableID = 0;
  (this->Txt_Content).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Content).StringEnumTableNameID.Number = 0;
  (this->Txt_Content).DateTime.Ticks = 0;
  (this->Txt_Content).TimeSpan.Ticks = 0;
  (this->Txt_Content).TimeExpressionType = None;
  (this->Txt_Content).IsExpression = false;
  (this->Txt_Content).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Content).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Content).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).FormatArgs.ArrayNum = 0;
  (this->Txt_Content).FormatArgs.ArrayMax = 0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  *(undefined8 *)&this->OnConsumeConfirm = 0;
  *(undefined8 *)&(this->OnConsumeConfirm).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeConfirm).field_0x10 = 0;
  *(undefined8 *)&this->OnConsumeCancel = 0;
  *(undefined8 *)&(this->OnConsumeCancel).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeCancel).field_0x10 = 0;
  return this;
}

// ~FDS_ViewModelContext_Common_ConsumeMoneyPopup @ 14b62e8b0

void __thiscall
FDS_ViewModelContext_Common_ConsumeMoneyPopup::~FDS_ViewModelContext_Common_ConsumeMoneyPopup
          (FDS_ViewModelContext_Common_ConsumeMoneyPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeCancel);
  pvVar1 = *(void **)&(this->OnConsumeCancel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConsumeCancel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeConfirm);
  pvVar1 = *(void **)&(this->OnConsumeConfirm).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConsumeConfirm);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Content).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Content).FormatArgs.ArrayNum);
  pFVar2 = (this->Txt_Content).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Txt_Content).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Title).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Title).FormatArgs.ArrayNum);
  pFVar2 = (this->Txt_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

