// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149316ee0

UScriptStruct * __cdecl FNiagaraPlatformSetRedirect::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect,(UObject *)pUVar1,
                         L"NiagaraPlatformSetRedirect");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.OuterSingleton;
}

// FNiagaraPlatformSetRedirect @ 1493336e0

FNiagaraPlatformSetRedirect * __thiscall
FNiagaraPlatformSetRedirect::FNiagaraPlatformSetRedirect(FNiagaraPlatformSetRedirect *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (this->ProfileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileNames).ArrayNum = 0;
  (this->ProfileNames).ArrayMax = 0;
  this->Mode = CVar;
  (this->RedirectProfileName).ComparisonIndex = 0;
  (this->RedirectProfileName).Number = 0;
  (this->CVarConditionEnabled).CVarName.ComparisonIndex = 0;
  (this->CVarConditionEnabled).CVarName.Number = 0;
  (this->CVarConditionEnabled).PassResponse = None;
  (this->CVarConditionEnabled).FailResponse = Disable;
  (this->CVarConditionEnabled).Value = true;
  puVar2 = &(this->CVarConditionEnabled).field_0x1c;
  (this->CVarConditionEnabled).bUseMinInt = 1;
  (this->CVarConditionEnabled).bUseMaxFloat = 0;
  (this->CVarConditionEnabled).bUseMinFloat = 1;
  (this->CVarConditionEnabled).bUseMaxInt = 0;
  (this->CVarConditionEnabled).MinInt = 1;
  (this->CVarConditionEnabled).MaxInt = 1;
  (this->CVarConditionEnabled).MinFloat = 1.0;
  (this->CVarConditionEnabled).MaxFloat = 1.0;
  (this->CVarConditionEnabled).CachedCVar = (IConsoleVariable *)0x0;
  (this->CVarConditionEnabled).LastCachedFrame = 0xffffffff;
  (this->CVarConditionDisabled).CVarName.ComparisonIndex = 0;
  (this->CVarConditionDisabled).CVarName.Number = 0;
  (this->CVarConditionDisabled).PassResponse = None;
  (this->CVarConditionDisabled).FailResponse = Disable;
  (this->CVarConditionDisabled).Value = true;
  puVar2 = &(this->CVarConditionDisabled).field_0x1c;
  (this->CVarConditionDisabled).bUseMinInt = 1;
  (this->CVarConditionDisabled).bUseMaxFloat = 0;
  (this->CVarConditionDisabled).bUseMinFloat = 1;
  (this->CVarConditionDisabled).bUseMaxInt = 0;
  (this->CVarConditionDisabled).MinInt = 1;
  (this->CVarConditionDisabled).MaxInt = 1;
  (this->CVarConditionDisabled).MinFloat = 1.0;
  (this->CVarConditionDisabled).MaxFloat = 1.0;
  (this->CVarConditionDisabled).CachedCVar = (IConsoleVariable *)0x0;
  (this->CVarConditionDisabled).LastCachedFrame = 0xffffffff;
  return this;
}

