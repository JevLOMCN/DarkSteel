// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 2

// StaticStruct @ 14ac837d0

UScriptStruct * __cdecl FCCS_LoginRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCCS_LoginRequest,(UObject *)pUVar1,
                         L"CCS_LoginRequest");
  }
  return Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.OuterSingleton;
}

// operator= @ 14ac85f10

FCCS_LoginRequest * __thiscall
FCCS_LoginRequest::operator=(FCCS_LoginRequest *this,FCCS_LoginRequest *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->messageType = param_1->messageType;
  this->selectedCharId = param_1->selectedCharId;
  pTVar1 = &this->deckCharId;
  if (pTVar1 != &param_1->deckCharId) {
    iVar3 = (this->deckCharId).ArrayMax;
    piVar2 = &(this->deckCharId).ArrayMax;
    _Src = (param_1->deckCharId).AllocatorInstance.Data;
    iVar4 = (param_1->deckCharId).ArrayNum;
    (this->deckCharId).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  this->isLeader = param_1->isLeader;
  return this;
}

