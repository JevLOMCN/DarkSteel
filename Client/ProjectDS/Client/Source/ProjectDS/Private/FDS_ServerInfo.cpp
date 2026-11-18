// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// StaticStruct @ 14b462d50

UScriptStruct * __cdecl FDS_ServerInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ServerInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ServerInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ServerInfo,(UObject *)pUVar1,L"DS_ServerInfo"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FDS_ServerInfo.OuterSingleton;
}

// FDS_ServerInfo @ 14b465640

FDS_ServerInfo * __thiscall FDS_ServerInfo::FDS_ServerInfo(FDS_ServerInfo *this)

{
  this->ID = 0;
  this->RegionIndex = 0;
  ::FString::FString(&this->Urls,"");
  ::FString::FString(&this->ServerAddr,"");
  ::FString::FString(&this->AiAddr,"");
  ::FString::FString(&this->ServerName,"");
  (this->FrontEndServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontEndServerIndex).ArrayNum = 0;
  (this->FrontEndServerIndex).ArrayMax = 0;
  (this->GameServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameServerIndex).ArrayNum = 0;
  (this->GameServerIndex).ArrayMax = 0;
  return this;
}

// ~FDS_ServerInfo @ 14b466450

void __thiscall FDS_ServerInfo::~FDS_ServerInfo(FDS_ServerInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GameServerIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontEndServerIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AiAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Urls).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FDS_ServerInfo @ 14bba8a90

FDS_ServerInfo * __thiscall
FDS_ServerInfo::FDS_ServerInfo(FDS_ServerInfo *this,FDS_ServerInfo *param_1)

{
  this->ID = param_1->ID;
  this->RegionIndex = param_1->RegionIndex;
  (this->Urls).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Urls).Data.AllocatorInstance.Data = (param_1->Urls).Data.AllocatorInstance.Data;
  (param_1->Urls).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Urls).Data.ArrayNum = (param_1->Urls).Data.ArrayNum;
  (this->Urls).Data.ArrayMax = (param_1->Urls).Data.ArrayMax;
  (param_1->Urls).Data.ArrayNum = 0;
  (param_1->Urls).Data.ArrayMax = 0;
  (this->ServerAddr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerAddr).Data.AllocatorInstance.Data = (param_1->ServerAddr).Data.AllocatorInstance.Data
  ;
  (param_1->ServerAddr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerAddr).Data.ArrayNum = (param_1->ServerAddr).Data.ArrayNum;
  (this->ServerAddr).Data.ArrayMax = (param_1->ServerAddr).Data.ArrayMax;
  (param_1->ServerAddr).Data.ArrayNum = 0;
  (param_1->ServerAddr).Data.ArrayMax = 0;
  (this->AiAddr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AiAddr).Data.AllocatorInstance.Data = (param_1->AiAddr).Data.AllocatorInstance.Data;
  (param_1->AiAddr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AiAddr).Data.ArrayNum = (param_1->AiAddr).Data.ArrayNum;
  (this->AiAddr).Data.ArrayMax = (param_1->AiAddr).Data.ArrayMax;
  (param_1->AiAddr).Data.ArrayNum = 0;
  (param_1->AiAddr).Data.ArrayMax = 0;
  (this->ServerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerName).Data.AllocatorInstance.Data = (param_1->ServerName).Data.AllocatorInstance.Data
  ;
  (param_1->ServerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerName).Data.ArrayNum = (param_1->ServerName).Data.ArrayNum;
  (this->ServerName).Data.ArrayMax = (param_1->ServerName).Data.ArrayMax;
  (param_1->ServerName).Data.ArrayNum = 0;
  (param_1->ServerName).Data.ArrayMax = 0;
  (this->FrontEndServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontEndServerIndex).AllocatorInstance.Data =
       (param_1->FrontEndServerIndex).AllocatorInstance.Data;
  (param_1->FrontEndServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontEndServerIndex).ArrayNum = (param_1->FrontEndServerIndex).ArrayNum;
  (this->FrontEndServerIndex).ArrayMax = (param_1->FrontEndServerIndex).ArrayMax;
  (param_1->FrontEndServerIndex).ArrayNum = 0;
  (param_1->FrontEndServerIndex).ArrayMax = 0;
  (this->GameServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameServerIndex).AllocatorInstance.Data = (param_1->GameServerIndex).AllocatorInstance.Data
  ;
  (param_1->GameServerIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameServerIndex).ArrayNum = (param_1->GameServerIndex).ArrayNum;
  (this->GameServerIndex).ArrayMax = (param_1->GameServerIndex).ArrayMax;
  (param_1->GameServerIndex).ArrayNum = 0;
  (param_1->GameServerIndex).ArrayMax = 0;
  return this;
}

// FDS_ServerInfo @ 14bba8b70

FDS_ServerInfo * __thiscall
FDS_ServerInfo::FDS_ServerInfo(FDS_ServerInfo *this,FDS_ServerInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->ID = param_1->ID;
  this->RegionIndex = param_1->RegionIndex;
  ::FString::FString(&this->Urls,&param_1->Urls);
  ::FString::FString(&this->ServerAddr,&param_1->ServerAddr);
  ::FString::FString(&this->AiAddr,&param_1->AiAddr);
  ::FString::FString(&this->ServerName,&param_1->ServerName);
  pTVar1 = &this->FrontEndServerIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->FrontEndServerIndex).ArrayMax;
  iVar3 = (param_1->FrontEndServerIndex).ArrayNum;
  pFVar4 = (param_1->FrontEndServerIndex).AllocatorInstance.Data;
  (this->FrontEndServerIndex).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->GameServerIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GameServerIndex).ArrayMax;
  iVar3 = (param_1->GameServerIndex).ArrayNum;
  pFVar4 = (param_1->GameServerIndex).AllocatorInstance.Data;
  (this->GameServerIndex).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

