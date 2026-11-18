// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FSavePackageContext @ 1421b6d10

void __thiscall FSavePackageContext::~FSavePackageContext(FSavePackageContext *this)

{
  IPackageWriter *pIVar1;
  FScriptContainerElement *pFVar2;
  ISavePackageValidator *pIVar3;
  
  pIVar1 = this->PackageWriter;
  if (pIVar1 != (IPackageWriter *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  DestructItems<TFunction<enum_ESavePackageResult___cdecl(FExportsValidationContext_const_&)>,int>
            ((TFunction<ESavePackageResult___cdecl(FExportsValidationContext_const_&)> *)
             (this->SavePackageSettings).ExternalExportValidations.AllocatorInstance.Data,
             (this->SavePackageSettings).ExternalExportValidations.ArrayNum);
  pFVar2 = (this->SavePackageSettings).ExternalExportValidations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<enum_ESavePackageResult___cdecl(FImportsValidationContext_const_&)>,int>
            ((TFunction<ESavePackageResult___cdecl(FImportsValidationContext_const_&)> *)
             (this->SavePackageSettings).ExternalImportValidations.AllocatorInstance.Data,
             (this->SavePackageSettings).ExternalImportValidations.ArrayNum);
  pFVar2 = (this->SavePackageSettings).ExternalImportValidations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Validator).Ptr;
  if (pIVar3 != (ISavePackageValidator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421b6d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar3)(pIVar3,1);
    return;
  }
  return;
}

