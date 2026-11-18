// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2a30

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo
                         ,(UObject *)pUVar1,L"DS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo.
         OuterSingleton;
}

// FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo @ 14b5f7170

FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo * __thiscall
FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo::
FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo
          (FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_IconInfo__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo__6B_;
  this->_padding_ = 0;
  *(TVector2<double>_u_0 *)&this->_padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MapIndexNameText).StringTableType = None;
  (this->MapIndexNameText).StringTableID = 0;
  (this->MapIndexNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexNameText).StringEnumTableNameID.Number = 0;
  (this->MapIndexNameText).DateTime.Ticks = 0;
  (this->MapIndexNameText).TimeSpan.Ticks = 0;
  (this->MapIndexNameText).TimeExpressionType = None;
  (this->MapIndexNameText).IsExpression = false;
  (this->MapIndexNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MapIndexNameText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexNameText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexNameText).FormatArgs.ArrayNum = 0;
  (this->MapIndexNameText).FormatArgs.ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->SelectedIndex = 0;
  this->ListViewIndex = 0;
  this->MapIndexGroupID = 0;
  this->IconID = 0;
  return this;
}

