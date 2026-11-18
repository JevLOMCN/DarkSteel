// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FStaticSelfRegisteringExec @ 141855b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStaticSelfRegisteringExec * __thiscall
FStaticSelfRegisteringExec::FStaticSelfRegisteringExec
          (FStaticSelfRegisteringExec *this,
          _func___cdecl_bool_UWorld_ptr_wchar_t_ptr_FOutputDevice_ptr *param_1)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->StaticExecFunc = param_1;
  this->_padding_ = (longlong)&___7FStaticSelfRegisteringExec__6B_;
  return this;
}

// Exec @ 14186c7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FStaticSelfRegisteringExec::Exec
          (FStaticSelfRegisteringExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014186c7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticExecFunc)(param_1,param_2,param_3);
  return bVar1;
}

