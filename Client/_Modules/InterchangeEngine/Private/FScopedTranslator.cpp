// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FScopedTranslator @ 14e4d7c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedTranslator * __thiscall
UE::Interchange::FScopedTranslator::FScopedTranslator
          (FScopedTranslator *this,UInterchangeSourceData *param_1)

{
  UObject *pUVar1;
  UInterchangeManager *this_00;
  UInterchangeTranslatorBase *this_01;
  UInterchangeTranslatorBase *pUVar2;
  FScopedTranslator local_18 [2];
  
  (this->ScopedTranslatorPtr).Object = (UObject *)0x0;
  this_00 = UInterchangeManager::GetInterchangeManager();
  this_01 = UInterchangeManager::GetTranslatorForSourceData(this_00,param_1);
  pUVar2 = (UInterchangeTranslatorBase *)0x0;
  if (this_01 != (UInterchangeTranslatorBase *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_01);
    pUVar2 = this_01;
  }
  if (this != local_18) {
    pUVar1 = (this->ScopedTranslatorPtr).Object;
    if (pUVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    }
    (this->ScopedTranslatorPtr).Object = (UObject *)pUVar2;
    return this;
  }
  if (pUVar2 != (UInterchangeTranslatorBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
  }
  return this;
}

// ~FScopedTranslator @ 14e4dab60

void __thiscall UE::Interchange::FScopedTranslator::~FScopedTranslator(FScopedTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = (this->ScopedTranslatorPtr).Object;
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2e0))();
  }
  pUVar1 = (this->ScopedTranslatorPtr).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->ScopedTranslatorPtr).Object = (UObject *)0x0;
  }
  return;
}

// GetTranslator @ 14e4f9960

UInterchangeTranslatorBase * __thiscall
UE::Interchange::FScopedTranslator::GetTranslator(FScopedTranslator *this)

{
  return (UInterchangeTranslatorBase *)(this->ScopedTranslatorPtr).Object;
}

