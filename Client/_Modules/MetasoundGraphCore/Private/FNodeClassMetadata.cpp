// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 7

// FNodeClassMetadata @ 14ad3b1d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
Metasound::FNodeClassMetadata::FNodeClassMetadata
          (FNodeClassMetadata *this,FNodeClassMetadata *param_1)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  FText *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  
  uVar6 = (param_1->ClassName).Namespace.Number;
  uVar7 = (param_1->ClassName).Name.ComparisonIndex.Value;
  uVar8 = (param_1->ClassName).Name.Number;
  (this->ClassName).Namespace.ComparisonIndex.Value =
       (param_1->ClassName).Namespace.ComparisonIndex.Value;
  (this->ClassName).Namespace.Number = uVar6;
  (this->ClassName).Name.ComparisonIndex.Value = uVar7;
  (this->ClassName).Name.Number = uVar8;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->MajorVersion = param_1->MajorVersion;
  this->MinorVersion = param_1->MinorVersion;
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->DisplayName).TextData.Reference;
  (this->DisplayName).TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  (this->Description).Flags = (param_1->Description).Flags;
  ::FString::FString(&this->Author,&param_1->Author);
  (this->PromptIfMissing).TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->PromptIfMissing).TextData.Reference;
  (this->PromptIfMissing).TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  (this->PromptIfMissing).Flags = (param_1->PromptIfMissing).Flags;
  FInputVertexInterface::FInputVertexInterface
            (&(this->DefaultInterface).InputInterface,&(param_1->DefaultInterface).InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->DefaultInterface).OutputInterface,&(param_1->DefaultInterface).OutputInterface)
  ;
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->DefaultInterface).EnvironmentInterface,
             &(param_1->DefaultInterface).EnvironmentInterface);
  pTVar2 = &this->CategoryHierarchy;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CategoryHierarchy).ArrayMax;
  iVar3 = (param_1->CategoryHierarchy).ArrayNum;
  pFVar5 = (FText *)(param_1->CategoryHierarchy).AllocatorInstance.Data;
  (this->CategoryHierarchy).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  pTVar2 = &this->Keywords;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Keywords).ArrayMax;
  iVar3 = (param_1->Keywords).ArrayNum;
  pFVar5 = (FText *)(param_1->Keywords).AllocatorInstance.Data;
  (this->Keywords).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  (this->DisplayStyle).ImageName = (param_1->DisplayStyle).ImageName;
  bVar9 = (param_1->DisplayStyle).bShowInputNames;
  bVar10 = (param_1->DisplayStyle).bShowOutputNames;
  bVar11 = (param_1->DisplayStyle).bShowLiterals;
  (this->DisplayStyle).bShowName = (param_1->DisplayStyle).bShowName;
  (this->DisplayStyle).bShowInputNames = bVar9;
  (this->DisplayStyle).bShowOutputNames = bVar10;
  (this->DisplayStyle).bShowLiterals = bVar11;
  this->AccessFlags = param_1->AccessFlags;
  return this;
}

// FNodeClassMetadata @ 14ad3b3b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
Metasound::FNodeClassMetadata::FNodeClassMetadata
          (FNodeClassMetadata *this,FNodeClassName *param_1,int param_2,int param_3,FText *param_4,
          FText *param_5,FString *param_6,FText *param_7,FVertexInterface *param_8,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_9,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_10,FNodeDisplayStyle *param_11)

{
  FName FVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  FVar4 = param_1->Name;
  FVar1 = param_1->Variant;
  (this->ClassName).Namespace = param_1->Namespace;
  (this->ClassName).Name = FVar4;
  this->MajorVersion = param_2;
  (this->ClassName).Variant = FVar1;
  this->MinorVersion = param_3;
  FText::FText(&this->DisplayName,param_4);
  FText::FText(&this->Description,param_5);
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.AllocatorInstance.Data = (param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = (param_6->Data).ArrayNum;
  (this->Author).Data.ArrayMax = (param_6->Data).ArrayMax;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  FText::FText(&this->PromptIfMissing,param_7);
  FInputVertexInterface::FInputVertexInterface
            (&(this->DefaultInterface).InputInterface,&param_8->InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->DefaultInterface).OutputInterface,&param_8->OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->DefaultInterface).EnvironmentInterface,&param_8->EnvironmentInterface);
  (this->CategoryHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryHierarchy).AllocatorInstance.Data = (param_9->AllocatorInstance).Data;
  (param_9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CategoryHierarchy).ArrayNum = param_9->ArrayNum;
  (this->CategoryHierarchy).ArrayMax = param_9->ArrayMax;
  param_9->ArrayNum = 0;
  param_9->ArrayMax = 0;
  (this->Keywords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keywords).AllocatorInstance.Data = (param_10->AllocatorInstance).Data;
  (param_10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Keywords).ArrayNum = param_10->ArrayNum;
  (this->Keywords).ArrayMax = param_10->ArrayMax;
  param_10->ArrayNum = 0;
  param_10->ArrayMax = 0;
  this->AccessFlags = Default;
  bVar5 = param_11->bShowName;
  bVar6 = param_11->bShowInputNames;
  bVar7 = param_11->bShowOutputNames;
  bVar8 = param_11->bShowLiterals;
  (this->DisplayStyle).ImageName = param_11->ImageName;
  (this->DisplayStyle).bShowName = bVar5;
  (this->DisplayStyle).bShowInputNames = bVar6;
  (this->DisplayStyle).bShowOutputNames = bVar7;
  (this->DisplayStyle).bShowLiterals = bVar8;
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (param_5->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar3 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar2 = (param_7->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FVertexInterface::~FVertexInterface(param_8);
  DestructItems<FText,int>((FText *)(param_9->AllocatorInstance).Data,param_9->ArrayNum);
  pFVar3 = (param_9->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FText,int>((FText *)(param_10->AllocatorInstance).Data,param_10->ArrayNum);
  pFVar3 = (param_10->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FNodeClassMetadata @ 14ad3b5b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
Metasound::FNodeClassMetadata::FNodeClassMetadata(FNodeClassMetadata *this)

{
  this->MajorVersion = -1;
  this->MinorVersion = -1;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Description);
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  FText::FText(&this->PromptIfMissing);
  (this->DefaultInterface).InputInterface._padding_ = 0;
  (this->DefaultInterface).InputInterface._padding_ = 0;
  (this->DefaultInterface).InputInterface.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultInterface).InputInterface.SubInterfaces.ArrayNum = 0;
  (this->DefaultInterface).InputInterface.SubInterfaces.ArrayMax = 0;
  (this->DefaultInterface).OutputInterface._padding_ = 0;
  (this->DefaultInterface).OutputInterface._padding_ = 0;
  (this->DefaultInterface).OutputInterface.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultInterface).OutputInterface.SubInterfaces.ArrayNum = 0;
  (this->DefaultInterface).OutputInterface.SubInterfaces.ArrayMax = 0;
  *(undefined8 *)&(this->DefaultInterface).EnvironmentInterface = 0;
  *(undefined8 *)&(this->DefaultInterface).EnvironmentInterface.field_0x8 = 0;
  (this->CategoryHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryHierarchy).ArrayNum = 0;
  (this->CategoryHierarchy).ArrayMax = 0;
  (this->Keywords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keywords).ArrayNum = 0;
  (this->Keywords).ArrayMax = 0;
  (this->DisplayStyle).ImageName.ComparisonIndex = 0;
  (this->DisplayStyle).ImageName.Number = 0;
  (this->DisplayStyle).bShowName = true;
  (this->DisplayStyle).bShowInputNames = true;
  *(undefined4 *)&(this->DisplayStyle).bShowOutputNames = 0x20101;
  return this;
}

// ~FNodeClassMetadata @ 14ad3deb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FNodeClassMetadata::~FNodeClassMetadata(FNodeClassMetadata *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  DestructItems<FText,int>
            ((FText *)(this->Keywords).AllocatorInstance.Data,(this->Keywords).ArrayNum);
  pFVar1 = (this->Keywords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->CategoryHierarchy).AllocatorInstance.Data,
             (this->CategoryHierarchy).ArrayNum);
  pFVar1 = (this->CategoryHierarchy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVertexInterface::~FVertexInterface(&this->DefaultInterface);
  pIVar2 = (this->PromptIfMissing).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3df45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// operator= @ 14ad3ea80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
Metasound::FNodeClassMetadata::operator=(FNodeClassMetadata *this,FNodeClassMetadata *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  FVar6 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar6;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->MajorVersion = param_1->MajorVersion;
  this->MinorVersion = param_1->MinorVersion;
  FText::operator=(&this->DisplayName,&param_1->DisplayName);
  FText::operator=(&this->Description,&param_1->Description);
  pFVar1 = &param_1->Author;
  pFVar2 = &this->Author;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Author).Data.ArrayNum = (param_1->Author).Data.ArrayNum;
    (this->Author).Data.ArrayMax = (param_1->Author).Data.ArrayMax;
    (param_1->Author).Data.ArrayNum = 0;
    (param_1->Author).Data.ArrayMax = 0;
  }
  FText::operator=(&this->PromptIfMissing,&param_1->PromptIfMissing);
  FVertexInterface::operator=(&this->DefaultInterface,&param_1->DefaultInterface);
  pTVar3 = &param_1->CategoryHierarchy;
  pTVar4 = &this->CategoryHierarchy;
  if (pTVar4 != pTVar3) {
    DestructItems<FText,int>
              ((FText *)(pTVar4->AllocatorInstance).Data,(this->CategoryHierarchy).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CategoryHierarchy).ArrayNum = (param_1->CategoryHierarchy).ArrayNum;
    (this->CategoryHierarchy).ArrayMax = (param_1->CategoryHierarchy).ArrayMax;
    (param_1->CategoryHierarchy).ArrayNum = 0;
    (param_1->CategoryHierarchy).ArrayMax = 0;
  }
  pTVar3 = &param_1->Keywords;
  pTVar4 = &this->Keywords;
  if (pTVar4 != pTVar3) {
    DestructItems<FText,int>((FText *)(pTVar4->AllocatorInstance).Data,(this->Keywords).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Keywords).ArrayNum = (param_1->Keywords).ArrayNum;
    (this->Keywords).ArrayMax = (param_1->Keywords).ArrayMax;
    (param_1->Keywords).ArrayNum = 0;
    (param_1->Keywords).ArrayMax = 0;
  }
  (this->DisplayStyle).ImageName = (param_1->DisplayStyle).ImageName;
  bVar7 = (param_1->DisplayStyle).bShowInputNames;
  bVar8 = (param_1->DisplayStyle).bShowOutputNames;
  bVar9 = (param_1->DisplayStyle).bShowLiterals;
  (this->DisplayStyle).bShowName = (param_1->DisplayStyle).bShowName;
  (this->DisplayStyle).bShowInputNames = bVar7;
  (this->DisplayStyle).bShowOutputNames = bVar8;
  (this->DisplayStyle).bShowLiterals = bVar9;
  this->AccessFlags = param_1->AccessFlags;
  return this;
}

// operator= @ 14ad3ec10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
Metasound::FNodeClassMetadata::operator=(FNodeClassMetadata *this,FNodeClassMetadata *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  FScriptContainerElement *_Src;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  uVar7 = (param_1->ClassName).Namespace.Number;
  uVar8 = (param_1->ClassName).Name.ComparisonIndex.Value;
  uVar9 = (param_1->ClassName).Name.Number;
  (this->ClassName).Namespace.ComparisonIndex.Value =
       (param_1->ClassName).Namespace.ComparisonIndex.Value;
  (this->ClassName).Namespace.Number = uVar7;
  (this->ClassName).Name.ComparisonIndex.Value = uVar8;
  (this->ClassName).Name.Number = uVar9;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->MajorVersion = param_1->MajorVersion;
  this->MinorVersion = param_1->MinorVersion;
  pIVar5 = (param_1->DisplayName).TextData.Reference;
  pIVar6 = (this->DisplayName).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->DisplayName).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  pIVar5 = (param_1->Description).TextData.Reference;
  pIVar6 = (this->Description).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->Description).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  pFVar1 = &this->Author;
  (this->Description).Flags = (param_1->Description).Flags;
  if (pFVar1 != &param_1->Author) {
    iVar3 = (param_1->Author).Data.ArrayNum;
    piVar2 = &(this->Author).Data.ArrayMax;
    iVar4 = *piVar2;
    _Src = (param_1->Author).Data.AllocatorInstance.Data;
    (this->Author).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  pIVar5 = (param_1->PromptIfMissing).TextData.Reference;
  pIVar6 = (this->PromptIfMissing).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->PromptIfMissing).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->PromptIfMissing).Flags = (param_1->PromptIfMissing).Flags;
  FVertexInterface::operator=(&this->DefaultInterface,&param_1->DefaultInterface);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=
            (&this->CategoryHierarchy,&param_1->CategoryHierarchy);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&this->Keywords,&param_1->Keywords);
  (this->DisplayStyle).ImageName = (param_1->DisplayStyle).ImageName;
  bVar10 = (param_1->DisplayStyle).bShowInputNames;
  bVar11 = (param_1->DisplayStyle).bShowOutputNames;
  bVar12 = (param_1->DisplayStyle).bShowLiterals;
  (this->DisplayStyle).bShowName = (param_1->DisplayStyle).bShowName;
  (this->DisplayStyle).bShowInputNames = bVar10;
  (this->DisplayStyle).bShowOutputNames = bVar11;
  (this->DisplayStyle).bShowLiterals = bVar12;
  this->AccessFlags = param_1->AccessFlags;
  return this;
}

// GetEmpty @ 14ad55a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FNodeClassMetadata::GetEmpty(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FText(&EmptyInfo.DisplayName);
      FText::FText(&EmptyInfo.Description);
      EmptyInfo.Author.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
      FText::FText(&EmptyInfo.PromptIfMissing);
      EmptyInfo.DefaultInterface.InputInterface._padding_ = 0;
      EmptyInfo.DisplayStyle.ImageName.Number = 0;
      EmptyInfo.DisplayStyle.bShowName = true;
      EmptyInfo.DisplayStyle.bShowInputNames = true;
      EmptyInfo.DisplayStyle.bShowOutputNames = true;
      EmptyInfo.DisplayStyle.bShowLiterals = true;
      EmptyInfo.AccessFlags = Default;
      EmptyInfo.DefaultInterface.InputInterface._padding_ = 0;
      EmptyInfo.DefaultInterface.InputInterface.SubInterfaces.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      EmptyInfo.DefaultInterface.InputInterface.SubInterfaces.ArrayNum = 0;
      EmptyInfo.DefaultInterface.InputInterface.SubInterfaces.ArrayMax = 0;
      EmptyInfo.DefaultInterface.OutputInterface._padding_ = 0;
      EmptyInfo.DefaultInterface.OutputInterface._padding_ = 0;
      EmptyInfo.DefaultInterface.OutputInterface.SubInterfaces.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      EmptyInfo.DefaultInterface.OutputInterface.SubInterfaces.ArrayNum = 0;
      EmptyInfo.DefaultInterface.OutputInterface.SubInterfaces.ArrayMax = 0;
      EmptyInfo.DefaultInterface.EnvironmentInterface._0_8_ = 0;
      EmptyInfo.DefaultInterface.EnvironmentInterface._8_8_ = 0;
      EmptyInfo.CategoryHierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      EmptyInfo.CategoryHierarchy.ArrayNum = 0;
      EmptyInfo.CategoryHierarchy.ArrayMax = 0;
      EmptyInfo.Keywords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      EmptyInfo.Keywords.ArrayNum = 0;
      EmptyInfo.Keywords.ArrayMax = 0;
      EmptyInfo.DisplayStyle.ImageName.ComparisonIndex.Value = 0;
      atexit(`Metasound::FNodeClassMetadata::GetEmpty'::__l2::
             _dynamic_atexit_destructor_for__EmptyInfo__);
      _Init_thread_footer(&::_TSS0);
      return &EmptyInfo;
    }
  }
  return &EmptyInfo;
}

