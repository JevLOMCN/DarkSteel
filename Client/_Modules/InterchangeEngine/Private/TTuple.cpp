// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_><TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_> @ 14e4cea10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_> *
__thiscall
TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>::
TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_><TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
          (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
           *this,TSharedRef<UE::Interchange::FImportResult,1> *param_1,
          TSharedRef<UE::Interchange::FImportResult,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(FImportResult **)this = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FImportResult **)&this->field_0x10 = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

