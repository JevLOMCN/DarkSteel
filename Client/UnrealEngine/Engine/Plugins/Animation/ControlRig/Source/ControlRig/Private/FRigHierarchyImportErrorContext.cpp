// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Serialize @ 14a349470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigHierarchyImportErrorContext::Serialize
          (FRigHierarchyImportErrorContext *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  if (1 < (byte)LogControlRig._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_FRigHierarchyImportErrorContext::Serialize(wchar_t_const*___ptr64,ELogVerbosity::Type,FName_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    this->NumErrors = this->NumErrors + 1;
    return;
  }
  this->NumErrors = this->NumErrors + 1;
  return;
}

