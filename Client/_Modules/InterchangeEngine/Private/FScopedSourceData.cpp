// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FScopedSourceData @ 14e4d7b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedSourceData * __thiscall
UE::Interchange::FScopedSourceData::FScopedSourceData(FScopedSourceData *this,FString *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeSourceData *this_00;
  FScopedSourceData *pFVar4;
  UInterchangeSourceData *pUVar5;
  FScopedSourceData local_18 [2];
  
  (this->SourceDataPtr).Object = (UObject *)0x0;
  UInterchangeManager::GetInterchangeManager();
  this_00 = UInterchangeManager::CreateSourceData(param_1);
  pUVar5 = (UInterchangeSourceData *)0x0;
  if (this_00 != (UInterchangeSourceData *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar5 = this_00;
  }
  if (this == local_18) {
    if (pUVar5 != (UInterchangeSourceData *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar5);
    }
  }
  else {
    pUVar1 = (this->SourceDataPtr).Object;
    if (pUVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    }
    (this->SourceDataPtr).Object = (UObject *)pUVar5;
  }
  if ((this->SourceDataPtr).Object == (UObject *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857649892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0x11c,"SourceDataPtr.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedSourceData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// ~FScopedSourceData @ 14e4dab30

void __thiscall UE::Interchange::FScopedSourceData::~FScopedSourceData(FScopedSourceData *this)

{
  UObject *pUVar1;
  
  pUVar1 = (this->SourceDataPtr).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->SourceDataPtr).Object = (UObject *)0x0;
  }
  return;
}

// GetSourceData @ 14e4f8af0

UInterchangeSourceData * __thiscall
UE::Interchange::FScopedSourceData::GetSourceData(FScopedSourceData *this)

{
  return (UInterchangeSourceData *)(this->SourceDataPtr).Object;
}

