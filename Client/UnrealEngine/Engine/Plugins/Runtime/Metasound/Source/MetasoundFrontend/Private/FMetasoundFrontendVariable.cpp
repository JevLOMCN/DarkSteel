// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StaticStruct @ 14ad75c80

UScriptStruct * __cdecl FMetasoundFrontendVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVariable,(UObject *)pUVar1,
                         L"MetasoundFrontendVariable");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendVariable.OuterSingleton;
}

// FMetasoundFrontendVariable @ 14addcdf0

FMetasoundFrontendVariable * __thiscall
FMetasoundFrontendVariable::FMetasoundFrontendVariable
          (FMetasoundFrontendVariable *this,FMetasoundFrontendVariable *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Name = param_1->Name;
  this->TypeName = param_1->TypeName;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&this->Literal,&param_1->Literal);
  uVar1 = (param_1->ID).B;
  uVar2 = (param_1->ID).C;
  uVar3 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar1;
  (this->ID).C = uVar2;
  (this->ID).D = uVar3;
  uVar1 = (param_1->VariableNodeID).B;
  uVar2 = (param_1->VariableNodeID).C;
  uVar3 = (param_1->VariableNodeID).D;
  (this->VariableNodeID).A = (param_1->VariableNodeID).A;
  (this->VariableNodeID).B = uVar1;
  (this->VariableNodeID).C = uVar2;
  (this->VariableNodeID).D = uVar3;
  uVar1 = (param_1->MutatorNodeID).B;
  uVar2 = (param_1->MutatorNodeID).C;
  uVar3 = (param_1->MutatorNodeID).D;
  (this->MutatorNodeID).A = (param_1->MutatorNodeID).A;
  (this->MutatorNodeID).B = uVar1;
  (this->MutatorNodeID).C = uVar2;
  (this->MutatorNodeID).D = uVar3;
  (this->AccessorNodeIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccessorNodeIDs).AllocatorInstance.Data = (param_1->AccessorNodeIDs).AllocatorInstance.Data
  ;
  (param_1->AccessorNodeIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccessorNodeIDs).ArrayNum = (param_1->AccessorNodeIDs).ArrayNum;
  (this->AccessorNodeIDs).ArrayMax = (param_1->AccessorNodeIDs).ArrayMax;
  (param_1->AccessorNodeIDs).ArrayNum = 0;
  (param_1->AccessorNodeIDs).ArrayMax = 0;
  (this->DeferredAccessorNodeIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredAccessorNodeIDs).AllocatorInstance.Data =
       (param_1->DeferredAccessorNodeIDs).AllocatorInstance.Data;
  (param_1->DeferredAccessorNodeIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredAccessorNodeIDs).ArrayNum = (param_1->DeferredAccessorNodeIDs).ArrayNum;
  (this->DeferredAccessorNodeIDs).ArrayMax = (param_1->DeferredAccessorNodeIDs).ArrayMax;
  (param_1->DeferredAccessorNodeIDs).ArrayNum = 0;
  (param_1->DeferredAccessorNodeIDs).ArrayMax = 0;
  return this;
}

