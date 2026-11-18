// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e3ce0

UScriptStruct * __cdecl FDS_ViewModelContext_ServerInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ServerInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ServerInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_ServerInfo,(UObject *)pUVar1
                         ,L"DS_ViewModelContext_ServerInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ServerInfo.OuterSingleton;
}

// FDS_ViewModelContext_ServerInfo @ 14b5e94e0

FDS_ViewModelContext_ServerInfo * __thiscall
FDS_ViewModelContext_ServerInfo::FDS_ViewModelContext_ServerInfo
          (FDS_ViewModelContext_ServerInfo *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_ServerInfo__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ServerInfo).Urls.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).Urls.Data.ArrayNum = 0;
  (this->ServerInfo).Urls.Data.ArrayMax = 0;
  (this->ServerInfo).ServerAddr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).ServerAddr.Data.ArrayNum = 0;
  (this->ServerInfo).ServerAddr.Data.ArrayMax = 0;
  (this->ServerInfo).AiAddr.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).AiAddr.Data.ArrayNum = 0;
  (this->ServerInfo).AiAddr.Data.ArrayMax = 0;
  (this->ServerInfo).ServerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).ServerName.Data.ArrayNum = 0;
  (this->ServerInfo).ServerName.Data.ArrayMax = 0;
  (this->ServerInfo).FrontEndServerIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).FrontEndServerIndex.ArrayNum = 0;
  (this->ServerInfo).FrontEndServerIndex.ArrayMax = 0;
  (this->ServerInfo).GameServerIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).GameServerIndex.ArrayNum = 0;
  (this->ServerInfo).GameServerIndex.ArrayMax = 0;
  (this->ServerInfo).ID = 0;
  (this->ServerInfo).RegionIndex = 0;
  ::FString::FString(&(this->ServerInfo).Urls,"");
  ::FString::FString(&(this->ServerInfo).ServerAddr,"");
  ::FString::FString(&(this->ServerInfo).AiAddr,"");
  ::FString::FString(&(this->ServerInfo).ServerName,"");
  (this->ServerInfo).FrontEndServerIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).FrontEndServerIndex.ArrayNum = 0;
  (this->ServerInfo).FrontEndServerIndex.ArrayMax = 0;
  (this->ServerInfo).GameServerIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfo).GameServerIndex.ArrayNum = 0;
  (this->ServerInfo).GameServerIndex.ArrayMax = 0;
  return this;
}

