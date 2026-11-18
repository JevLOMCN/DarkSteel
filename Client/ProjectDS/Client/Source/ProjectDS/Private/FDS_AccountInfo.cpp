// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// StaticStruct @ 14b4013f0

UScriptStruct * __cdecl FDS_AccountInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_AccountInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_AccountInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_AccountInfo,(UObject *)pUVar1,
                         L"DS_AccountInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_AccountInfo.OuterSingleton;
}

// FDS_AccountInfo @ 14b406390

FDS_AccountInfo * __thiscall FDS_AccountInfo::FDS_AccountInfo(FDS_AccountInfo *this)

{
  ::FString::FString(&this->AccountID,"");
  ::FString::FString(&this->AccountPW,"");
  FText::FromString(&this->AccountMemo,"Memo");
  ::FString::FString(&this->ServerName,"None");
  this->APIServerIndex = -1;
  this->ServerIndex = -1;
  (this->RecentLoginTime).Ticks = 0;
  this->CharSlotIndex = 0;
  this->CharID = 0;
  return this;
}

// FDS_AccountInfo @ 14b999600

FDS_AccountInfo * __thiscall
FDS_AccountInfo::FDS_AccountInfo(FDS_AccountInfo *this,FDS_AccountInfo *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  ::FString::FString(&this->AccountID,&param_1->AccountID);
  ::FString::FString(&this->AccountPW,&param_1->AccountPW);
  (this->AccountMemo).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->AccountMemo).TextData.Reference;
  (this->AccountMemo).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->AccountMemo).Flags = (param_1->AccountMemo).Flags;
  ::FString::FString(&this->ServerName,&param_1->ServerName);
  (this->RecentLoginTime).Ticks = (param_1->RecentLoginTime).Ticks;
  this->CharSlotIndex = param_1->CharSlotIndex;
  this->APIServerIndex = param_1->APIServerIndex;
  this->ServerIndex = param_1->ServerIndex;
  this->CharID = param_1->CharID;
  return this;
}

// operator= @ 14bf993c0

FDS_AccountInfo * __thiscall
FDS_AccountInfo::operator=(FDS_AccountInfo *this,FDS_AccountInfo *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  ::FString::operator=(&this->AccountID,&param_1->AccountID);
  ::FString::operator=(&this->AccountPW,&param_1->AccountPW);
  pIVar1 = (param_1->AccountMemo).TextData.Reference;
  pIVar2 = (this->AccountMemo).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->AccountMemo).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->AccountMemo).Flags = (param_1->AccountMemo).Flags;
  ::FString::operator=(&this->ServerName,&param_1->ServerName);
  (this->RecentLoginTime).Ticks = (param_1->RecentLoginTime).Ticks;
  this->CharSlotIndex = param_1->CharSlotIndex;
  this->APIServerIndex = param_1->APIServerIndex;
  this->ServerIndex = param_1->ServerIndex;
  this->CharID = param_1->CharID;
  return this;
}

