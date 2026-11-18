// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e0a0

UScriptStruct * __cdecl FNiagaraGlobalBudgetScaling::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling,(UObject *)pUVar1,
                         L"NiagaraGlobalBudgetScaling");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.OuterSingleton;
}

// FNiagaraGlobalBudgetScaling @ 149276720

FNiagaraGlobalBudgetScaling * __thiscall
FNiagaraGlobalBudgetScaling::FNiagaraGlobalBudgetScaling(FNiagaraGlobalBudgetScaling *this)

{
  this->bCullByGlobalBudget = 0;
  this->bScaleSystemInstanceCountByGlobalBudgetUse = 0;
  this->bScaleMaxInstanceCountByGlobalBudgetUse = 0;
  this->bScaleMaxDistanceByGlobalBudgetUse = 0;
  (this->MaxDistanceScaleByGlobalBudgetUse).StartX = 0.0;
  (this->MaxDistanceScaleByGlobalBudgetUse).StartY = 0.0;
  (this->MaxInstanceCountScaleByGlobalBudgetUse).StartY = 0.0;
  (this->MaxSystemInstanceCountScaleByGlobalBudgetUse).StartY = 0.0;
  (this->MaxDistanceScaleByGlobalBudgetUse).EndX = 1.0;
  *(undefined8 *)&(this->MaxDistanceScaleByGlobalBudgetUse).EndY = 0x3f800000;
  (this->MaxInstanceCountScaleByGlobalBudgetUse).EndX = 1.0;
  *(undefined8 *)&(this->MaxInstanceCountScaleByGlobalBudgetUse).EndY = 0x3f800000;
  (this->MaxSystemInstanceCountScaleByGlobalBudgetUse).EndX = 1.0;
  (this->MaxSystemInstanceCountScaleByGlobalBudgetUse).EndY = 1.0;
  this->MaxGlobalBudgetUsage = 1.0;
  this->MaxDistanceScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  this->MaxInstanceCountScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  this->MaxSystemInstanceCountScaleByGlobalBudgetUse = DefaultBudgetScaleRamp;
  return this;
}

