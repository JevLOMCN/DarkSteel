// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2440

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapTextOnlyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapTextOnlyInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapTextOnlyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapTextOnlyInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapTextOnlyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapTextOnlyInfo.OuterSingleton;
}

// FDS_ViewModelContext_WorldMapTextOnlyInfo @ 14b5f75b0

FDS_ViewModelContext_WorldMapTextOnlyInfo * __thiscall
FDS_ViewModelContext_WorldMapTextOnlyInfo::FDS_ViewModelContext_WorldMapTextOnlyInfo
          (FDS_ViewModelContext_WorldMapTextOnlyInfo *this)

{
  FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo
            ((FDS_ViewModelContext_WorldMapIconInfo *)this);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapTextOnlyInfo__6B_;
  (this->NameFText).StringTableID = 0;
  (this->NameFText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameFText).StringEnumTableNameID.Number = 0;
  (this->NameFText).DateTime.Ticks = 0;
  (this->NameFText).TimeSpan.Ticks = 0;
  (this->NameFText).TimeExpressionType = None;
  (this->NameFText).IsExpression = false;
  (this->NameFText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).UniqueString.Data.ArrayNum = 0;
  (this->NameFText).UniqueString.Data.ArrayMax = 0;
  (this->NameFText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).FormatArgs.ArrayNum = 0;
  (this->NameFText).FormatArgs.ArrayMax = 0;
  (this->NameFText).StringTableType = None;
  return this;
}

