// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e3a50

UScriptStruct * __cdecl FDS_ViewModelContext_AccountInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_AccountInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_AccountInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_AccountInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_AccountInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_AccountInfo.OuterSingleton;
}

// FDS_ViewModelContext_AccountInfo @ 14b5e90a0

FDS_ViewModelContext_AccountInfo * __thiscall
FDS_ViewModelContext_AccountInfo::FDS_ViewModelContext_AccountInfo
          (FDS_ViewModelContext_AccountInfo *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_AccountInfo__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->AccountInfo).AccountID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountInfo).AccountID.Data.ArrayNum = 0;
  (this->AccountInfo).AccountID.Data.ArrayMax = 0;
  (this->AccountInfo).AccountPW.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountInfo).AccountPW.Data.ArrayNum = 0;
  (this->AccountInfo).AccountPW.Data.ArrayMax = 0;
  (this->AccountInfo).AccountMemo.TextData.Reference = (ITextData *)0x0;
  *(undefined8 *)&(this->AccountInfo).AccountMemo.Flags = 0;
  (this->AccountInfo).ServerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountInfo).ServerName.Data.ArrayNum = 0;
  (this->AccountInfo).ServerName.Data.ArrayMax = 0;
  (this->AccountInfo).RecentLoginTime.Ticks = 0;
  (this->AccountInfo).CharSlotIndex = 0;
  (this->AccountInfo).APIServerIndex = 0;
  (this->AccountInfo).ServerIndex = 0;
  (this->AccountInfo).CharID = 0;
  ::FString::FString(&(this->AccountInfo).AccountID,"");
  ::FString::FString(&(this->AccountInfo).AccountPW,"");
  FText::FromString(&(this->AccountInfo).AccountMemo,"Memo");
  ::FString::FString(&(this->AccountInfo).ServerName,"None");
  (this->AccountInfo).RecentLoginTime.Ticks = 0;
  (this->AccountInfo).CharSlotIndex = 0;
  (this->AccountInfo).CharID = 0;
  (this->AccountInfo).APIServerIndex = -1;
  (this->AccountInfo).ServerIndex = -1;
  return this;
}

