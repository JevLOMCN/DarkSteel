// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// StaticStruct @ 14d363910

UScriptStruct * __cdecl FCustomizableObjectPopulationConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint,
                         (UObject *)pUVar1,L"CustomizableObjectPopulationConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.OuterSingleton;
}

// FCustomizableObjectPopulationConstraint @ 14d367690

FCustomizableObjectPopulationConstraint * __thiscall
FCustomizableObjectPopulationConstraint::FCustomizableObjectPopulationConstraint
          (FCustomizableObjectPopulationConstraint *this)

{
  this->Type = NONE;
  this->ConstraintWeight = 1;
  this->TrueWeight = 1;
  this->FalseWeight = 1;
  ::FString::FString(&this->DiscreteValue,"");
  *(undefined8 *)&(this->DiscreteColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->DiscreteColor).field0_0x0 + 8) = 0;
  (this->Allowlist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allowlist).ArrayNum = 0;
  (this->Allowlist).ArrayMax = 0;
  (this->Blocklist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocklist).ArrayNum = 0;
  (this->Blocklist).ArrayMax = 0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  (this->Curve).field0_0x0.DebugPtr = (UCurveBase *)0x0;
  this->CurveColor = RED;
  return this;
}

// ~FCustomizableObjectPopulationConstraint @ 14d367c20

void __thiscall
FCustomizableObjectPopulationConstraint::~FCustomizableObjectPopulationConstraint
          (FCustomizableObjectPopulationConstraint *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Blocklist).AllocatorInstance.Data,(this->Blocklist).ArrayNum);
  pFVar1 = (this->Blocklist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Allowlist).AllocatorInstance.Data,(this->Allowlist).ArrayNum);
  pFVar1 = (this->Allowlist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DiscreteValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

