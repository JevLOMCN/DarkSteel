// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2780

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapIconAndTextInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconAndTextInfo.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconAndTextInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapIconAndTextInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapIconAndTextInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconAndTextInfo.
         OuterSingleton;
}

// FDS_ViewModelContext_WorldMapIconAndTextInfo @ 14b5f7020

FDS_ViewModelContext_WorldMapIconAndTextInfo * __thiscall
FDS_ViewModelContext_WorldMapIconAndTextInfo::FDS_ViewModelContext_WorldMapIconAndTextInfo
          (FDS_ViewModelContext_WorldMapIconAndTextInfo *this)

{
  FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo
            ((FDS_ViewModelContext_WorldMapIconInfo *)this);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapIconAndTextInfo__6B_;
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
  this->MapIndexSpawnTableID = 0;
  (this->NameFText).StringTableType = None;
  return this;
}

