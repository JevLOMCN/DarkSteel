// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// StaticStruct @ 14429f830

UScriptStruct * __cdecl FNetObjectPrioritizerDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition,(UObject *)pUVar1
                         ,L"NetObjectPrioritizerDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.OuterSingleton;
}

// FNetObjectPrioritizerDefinition @ 1442ad950

FNetObjectPrioritizerDefinition * __thiscall
FNetObjectPrioritizerDefinition::FNetObjectPrioritizerDefinition
          (FNetObjectPrioritizerDefinition *this,FNetObjectPrioritizerDefinition *param_1)

{
  UClass *pUVar1;
  
  this->PrioritizerName = param_1->PrioritizerName;
  this->ClassName = param_1->ClassName;
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  (this->Class).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ConfigClassName = param_1->ConfigClassName;
  pUVar1 = (param_1->ConfigClass).field0_0x0.DebugPtr;
  (this->ConfigClass).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

