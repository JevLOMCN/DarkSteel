// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// ~FRigUnitContext @ 14a2dee50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnitContext::~FRigUnitContext(FRigUnitContext *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->ConnectionResolve).Message.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)(this->ConnectionResolve).Excluded.AllocatorInstance.Data,
             (this->ConnectionResolve).Excluded.ArrayNum);
  pFVar2 = (this->ConnectionResolve).Excluded.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigElementResolveResult,int>
            ((FRigElementResolveResult *)(this->ConnectionResolve).Matches.AllocatorInstance.Data,
             (this->ConnectionResolve).Matches.ArrayNum);
  pFVar2 = (this->ConnectionResolve).Matches.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ElementsBeingInteracted).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// FRigUnitContext @ 14a50b050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnitContext * __thiscall
FRigUnitContext::FRigUnitContext(FRigUnitContext *this,FRigUnitContext *param_1)

{
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FRigElementResolveResult *pFVar5;
  ITextData *pIVar6;
  undefined3 uVar7;
  FNameEntryId FVar8;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->ElementsBeingInteracted;
  this->AnimAttributeContainer = param_1->AnimAttributeContainer;
  this->DataSourceRegistry = param_1->DataSourceRegistry;
  this->HierarchySettings = param_1->HierarchySettings;
  this->InteractionType = param_1->InteractionType;
  piVar2 = &(this->ElementsBeingInteracted).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ElementsBeingInteracted).ArrayNum;
  _Src = (param_1->ElementsBeingInteracted).AllocatorInstance.Data;
  (this->ElementsBeingInteracted).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
  }
  uVar7 = *(undefined3 *)&(param_1->ConnectionResolve).Connector.field_0x1;
  FVar8.Value = (param_1->ConnectionResolve).Connector.Name.ComparisonIndex.Value;
  pTVar3 = &(this->ConnectionResolve).Matches;
  (this->ConnectionResolve).Connector.Type = (param_1->ConnectionResolve).Connector.Type;
  *(undefined3 *)&(this->ConnectionResolve).Connector.field_0x1 = uVar7;
  (this->ConnectionResolve).Connector.Name.ComparisonIndex = (FNameEntryId)FVar8.Value;
  (this->ConnectionResolve).Connector.Name.Number =
       (param_1->ConnectionResolve).Connector.Name.Number;
  piVar2 = &(this->ConnectionResolve).Matches.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ConnectionResolve).Matches.ArrayNum;
  pFVar5 = (FRigElementResolveResult *)(param_1->ConnectionResolve).Matches.AllocatorInstance.Data;
  (this->ConnectionResolve).Matches.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &(this->ConnectionResolve).Excluded;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConnectionResolve).Excluded.ArrayMax;
  iVar4 = (param_1->ConnectionResolve).Excluded.ArrayNum;
  pFVar5 = (FRigElementResolveResult *)(param_1->ConnectionResolve).Excluded.AllocatorInstance.Data;
  (this->ConnectionResolve).Excluded.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
  }
  (this->ConnectionResolve).State = (param_1->ConnectionResolve).State;
  (this->ConnectionResolve).Message.TextData.Reference = (ITextData *)0x0;
  pIVar6 = (param_1->ConnectionResolve).Message.TextData.Reference;
  (this->ConnectionResolve).Message.TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res8);
  }
  (this->ConnectionResolve).Message.Flags = (param_1->ConnectionResolve).Message.Flags;
  return this;
}

