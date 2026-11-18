// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// operator= @ 14a2295d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
FModularRigResolveResult::operator=
          (FModularRigResolveResult *this,FModularRigResolveResult *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  undefined1 local_res8 [8];
  
  uVar3 = *(undefined3 *)&(param_1->Connector).field_0x1;
  FVar4.Value = (param_1->Connector).Name.ComparisonIndex.Value;
  (this->Connector).Type = (param_1->Connector).Type;
  *(undefined3 *)&(this->Connector).field_0x1 = uVar3;
  (this->Connector).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (this->Connector).Name.Number = (param_1->Connector).Name.Number;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
            (&this->Matches,&param_1->Matches);
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
            (&this->Excluded,&param_1->Excluded);
  this->State = param_1->State;
  pIVar1 = (param_1->Message).TextData.Reference;
  pIVar2 = (this->Message).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Message).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Message).Flags = (param_1->Message).Flags;
  return this;
}

// StaticStruct @ 14a2bd600

UScriptStruct * __cdecl FModularRigResolveResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularRigResolveResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigResolveResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigResolveResult,(UObject *)pUVar1,
                         L"ModularRigResolveResult");
  }
  return Z_Registration_Info_UScriptStruct_FModularRigResolveResult.OuterSingleton;
}

// FModularRigResolveResult @ 14a2d8e70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
FModularRigResolveResult::FModularRigResolveResult
          (FModularRigResolveResult *this,FModularRigResolveResult *param_1)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  
  uVar1 = *(undefined3 *)&(param_1->Connector).field_0x1;
  FVar2.Value = (param_1->Connector).Name.ComparisonIndex.Value;
  (this->Connector).Type = (param_1->Connector).Type;
  *(undefined3 *)&(this->Connector).field_0x1 = uVar1;
  (this->Connector).Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
  (this->Connector).Name.Number = (param_1->Connector).Name.Number;
  (this->Matches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Matches).AllocatorInstance.Data = (param_1->Matches).AllocatorInstance.Data;
  (param_1->Matches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Matches).ArrayNum = (param_1->Matches).ArrayNum;
  (this->Matches).ArrayMax = (param_1->Matches).ArrayMax;
  (param_1->Matches).ArrayNum = 0;
  (param_1->Matches).ArrayMax = 0;
  (this->Excluded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Excluded).AllocatorInstance.Data = (param_1->Excluded).AllocatorInstance.Data;
  (param_1->Excluded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Excluded).ArrayNum = (param_1->Excluded).ArrayNum;
  (this->Excluded).ArrayMax = (param_1->Excluded).ArrayMax;
  (param_1->Excluded).ArrayNum = 0;
  (param_1->Excluded).ArrayMax = 0;
  this->State = param_1->State;
  FText::FText(&this->Message,&param_1->Message);
  return this;
}

// FModularRigResolveResult @ 14a2d8ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
FModularRigResolveResult::FModularRigResolveResult
          (FModularRigResolveResult *this,FModularRigResolveResult *param_1)

{
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigElementResolveResult *pFVar4;
  ITextData *pIVar5;
  undefined3 uVar6;
  FNameEntryId FVar7;
  undefined1 local_res8 [8];
  
  uVar6 = *(undefined3 *)&(param_1->Connector).field_0x1;
  FVar7.Value = (param_1->Connector).Name.ComparisonIndex.Value;
  pTVar1 = &this->Matches;
  (this->Connector).Type = (param_1->Connector).Type;
  *(undefined3 *)&(this->Connector).field_0x1 = uVar6;
  (this->Connector).Name.ComparisonIndex = (FNameEntryId)FVar7.Value;
  (this->Connector).Name.Number = (param_1->Connector).Name.Number;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Matches).ArrayMax;
  iVar3 = (param_1->Matches).ArrayNum;
  pFVar4 = (FRigElementResolveResult *)(param_1->Matches).AllocatorInstance.Data;
  (this->Matches).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  pTVar1 = &this->Excluded;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Excluded).ArrayMax;
  iVar3 = (param_1->Excluded).ArrayNum;
  pFVar4 = (FRigElementResolveResult *)(param_1->Excluded).AllocatorInstance.Data;
  (this->Excluded).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->State = param_1->State;
  (this->Message).TextData.Reference = (ITextData *)0x0;
  pIVar5 = (param_1->Message).TextData.Reference;
  (this->Message).TextData.Reference = pIVar5;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
  }
  (this->Message).Flags = (param_1->Message).Flags;
  return this;
}

// operator= @ 14a2dfba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigResolveResult * __thiscall
FModularRigResolveResult::operator=
          (FModularRigResolveResult *this,FModularRigResolveResult *param_1)

{
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  
  uVar4 = *(undefined3 *)&(param_1->Connector).field_0x1;
  FVar5.Value = (param_1->Connector).Name.ComparisonIndex.Value;
  pTVar1 = &param_1->Matches;
  (this->Connector).Type = (param_1->Connector).Type;
  *(undefined3 *)&(this->Connector).field_0x1 = uVar4;
  (this->Connector).Name.ComparisonIndex = (FNameEntryId)FVar5.Value;
  pTVar2 = &this->Matches;
  (this->Connector).Name.Number = (param_1->Connector).Name.Number;
  if (pTVar2 != pTVar1) {
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)(pTVar2->AllocatorInstance).Data,(this->Matches).ArrayNum
              );
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Matches).ArrayNum = (param_1->Matches).ArrayNum;
    (this->Matches).ArrayMax = (param_1->Matches).ArrayMax;
    (param_1->Matches).ArrayNum = 0;
    (param_1->Matches).ArrayMax = 0;
  }
  pTVar1 = &param_1->Excluded;
  pTVar2 = &this->Excluded;
  if (pTVar2 != pTVar1) {
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)(pTVar2->AllocatorInstance).Data,
               (this->Excluded).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Excluded).ArrayNum = (param_1->Excluded).ArrayNum;
    (this->Excluded).ArrayMax = (param_1->Excluded).ArrayMax;
    (param_1->Excluded).ArrayNum = 0;
    (param_1->Excluded).ArrayMax = 0;
  }
  this->State = param_1->State;
  FText::operator=(&this->Message,&param_1->Message);
  return this;
}

// ContainsMatch @ 14a2f70e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FModularRigResolveResult::ContainsMatch
          (FModularRigResolveResult *this,FRigElementKey *param_1,FString *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement local_18;
  undefined4 uStack_14;
  
  uVar1 = param_1->Type;
  uVar2 = (param_1->Name).ComparisonIndex;
  pFVar3 = (this->Matches).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)(this->Matches).ArrayNum * 0x20;
  if (pFVar3 != pFVar5) {
    do {
      if ((*(longlong *)(pFVar3 + 4) == CONCAT44((param_1->Name).Number,uVar2)) &&
         (*pFVar3 == (FScriptContainerElement)uVar1)) {
        return true;
      }
      pFVar3 = pFVar3 + 0x20;
    } while (pFVar3 != pFVar5);
  }
  if (param_2 != (FString *)0x0) {
    pFVar3 = (this->Excluded).AllocatorInstance.Data;
    pFVar5 = pFVar3 + (longlong)(this->Excluded).ArrayNum * 0x20;
    if (pFVar3 != pFVar5) {
      while ((*(longlong *)(pFVar3 + 4) != CONCAT44((param_1->Name).Number,uVar2) ||
             (*pFVar3 != (FScriptContainerElement)uVar1))) {
        pFVar3 = pFVar3 + 0x20;
        if (pFVar3 == pFVar5) {
          return false;
        }
      }
      pFVar4 = FText::ToString((FText *)(pFVar3 + 0x10));
      ::FString::operator=(param_2,pFVar4);
    }
  }
  return false;
}

// FindMatch @ 14a3052d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FModularRigResolveResult::FindMatch(FModularRigResolveResult *this,FRigElementKey *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FName FVar3;
  FRigElementResolveResult *pFVar4;
  FRigElementResolveResult *pFVar5;
  ERigElementType local_18;
  FNameEntryId FStack_14;
  
  uVar1 = param_1->Type;
  uVar2 = (param_1->Name).ComparisonIndex;
  pFVar4 = (FRigElementResolveResult *)(this->Matches).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (this->Matches).ArrayNum;
  if (pFVar4 != pFVar5) {
    FVar3.Number = (param_1->Name).Number;
    FVar3.ComparisonIndex.Value = uVar2;
    do {
      if (((pFVar4->Key).Name == FVar3) && ((pFVar4->Key).Type == uVar1)) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar5);
  }
  return (FRigElementResolveResult *)0x0;
}

// GetDefaultMatch @ 14a30df60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FModularRigResolveResult::GetDefaultMatch(FModularRigResolveResult *this)

{
  FRigElementResolveResult *pFVar1;
  FRigElementResolveResult *pFVar2;
  
  pFVar1 = (FRigElementResolveResult *)(this->Matches).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Matches).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FRigElementResolveResult *)0x0;
    }
    if (pFVar1->State == DefaultTarget) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// IsValid @ 14a328e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FModularRigResolveResult::IsValid(FModularRigResolveResult *this)

{
  if ((this->State == Success) && ((this->Matches).ArrayNum != 0)) {
    return true;
  }
  return false;
}

