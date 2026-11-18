// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 5

// StaticStruct @ 14e9bcea0

UScriptStruct * __cdecl FLocalizableMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessage.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessage,(UObject *)pUVar1,
                         L"LocalizableMessage");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizableMessage.OuterSingleton;
}

// FLocalizableMessage @ 14e9be9a0

FLocalizableMessage * __thiscall FLocalizableMessage::FLocalizableMessage(FLocalizableMessage *this)

{
  (this->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Key).Data.ArrayNum = 0;
  (this->Key).Data.ArrayMax = 0;
  (this->DefaultText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultText).Data.ArrayNum = 0;
  (this->DefaultText).Data.ArrayMax = 0;
  (this->Substitutions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Substitutions).ArrayNum = 0;
  (this->Substitutions).ArrayMax = 0;
  return this;
}

// ~FLocalizableMessage @ 14e9bec70

void __thiscall FLocalizableMessage::~FLocalizableMessage(FLocalizableMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FLocalizableMessageParameterEntry,int>
            ((FLocalizableMessageParameterEntry *)(this->Substitutions).AllocatorInstance.Data,
             (this->Substitutions).ArrayNum);
  pFVar1 = (this->Substitutions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e9bed60

FLocalizableMessage * __thiscall
FLocalizableMessage::operator=(FLocalizableMessage *this,FLocalizableMessage *param_1)

{
  TArray<FLocalizableMessageParameterEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FLocalizableMessageParameterEntry *pFVar4;
  
  ::FString::operator=(&this->Key,&param_1->Key);
  ::FString::operator=(&this->DefaultText,&param_1->DefaultText);
  pTVar1 = &this->Substitutions;
  if (pTVar1 != &param_1->Substitutions) {
    DestructItems<FLocalizableMessageParameterEntry,int>
              ((FLocalizableMessageParameterEntry *)(pTVar1->AllocatorInstance).Data,
               (this->Substitutions).ArrayNum);
    iVar3 = (param_1->Substitutions).ArrayNum;
    piVar2 = &(this->Substitutions).ArrayMax;
    pFVar4 = (FLocalizableMessageParameterEntry *)(param_1->Substitutions).AllocatorInstance.Data;
    (this->Substitutions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FLocalizableMessageParameterEntry,FLocalizableMessageParameterEntry,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// operator== @ 14e9bee20

bool __thiscall
FLocalizableMessage::operator==(FLocalizableMessage *this,FLocalizableMessage *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->Key).Data.ArrayNum;
  iVar1 = (param_1->Key).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Key).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14e9bee53;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14e9bee53:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->DefaultText).Data.ArrayNum;
  iVar1 = (param_1->DefaultText).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14e9bee86;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->DefaultText).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->DefaultText).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14e9bee86:
  iVar2 = (this->Substitutions).ArrayNum;
  if ((iVar2 == (param_1->Substitutions).ArrayNum) &&
     (bVar3 = CompareItems<FLocalizableMessageParameterEntry,int>
                        ((FLocalizableMessageParameterEntry *)
                         (this->Substitutions).AllocatorInstance.Data,
                         (FLocalizableMessageParameterEntry *)
                         (param_1->Substitutions).AllocatorInstance.Data,iVar2), bVar3)) {
    return true;
  }
  return false;
}

