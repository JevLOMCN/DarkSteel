// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FCanSkipEditorReferencedPackagesWhenCooking @ 1421fdd80

/* WARNING: Enum "Type": Some values do not have unique names */

FCanSkipEditorReferencedPackagesWhenCooking * __thiscall
FCanSkipEditorReferencedPackagesWhenCooking::FCanSkipEditorReferencedPackagesWhenCooking
          (FCanSkipEditorReferencedPackagesWhenCooking *this)

{
  bool local_res8 [32];
  
  if (!bWarned) {
    bWarned = true;
    local_res8[0] = true;
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"CanSkipEditorReferencedPackagesWhenCooking",local_res8,
               &GEngineIni);
    if ((local_res8[0] != false) && (2 < (byte)LogSavePackage._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
    }
  }
  return this;
}

