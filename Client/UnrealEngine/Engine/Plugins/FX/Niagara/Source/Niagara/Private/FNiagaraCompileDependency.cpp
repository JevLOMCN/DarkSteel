// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148fe45c0

UScriptStruct * __cdecl FNiagaraCompileDependency::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompileDependency.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraCompileDependency.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileDependency,(UObject *)pUVar1,
                         L"NiagaraCompileDependency");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraCompileDependency.OuterSingleton;
}

// FNiagaraCompileDependency @ 1490222a0

FNiagaraCompileDependency * __thiscall
FNiagaraCompileDependency::FNiagaraCompileDependency(FNiagaraCompileDependency *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  piVar1 = &(this->StackGuids).ArrayMax;
  (this->LinkerErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkerErrorMessage).Data.ArrayNum = 0;
  (this->LinkerErrorMessage).Data.ArrayMax = 0;
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  (this->PinGuid).A = 0;
  (this->PinGuid).B = 0;
  (this->PinGuid).C = 0;
  (this->PinGuid).D = 0;
  (this->StackGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StackGuids).ArrayNum = 0;
  *piVar1 = 0;
  (this->DependentVariable).Name.ComparisonIndex = 0;
  (this->DependentVariable).Name.Number = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DependentVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->DependentVariable).TypeDefHandle.RegisteredTypeIndex = iVar3;
  if (this != (FNiagaraCompileDependency *)&stack0xffffffffffffffe8) {
    pFVar2 = (this->LinkerErrorMessage).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->LinkerErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LinkerErrorMessage).Data.ArrayNum = 0;
    (this->LinkerErrorMessage).Data.ArrayMax = 0;
  }
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  (this->PinGuid).A = 0;
  (this->PinGuid).B = 0;
  (this->PinGuid).C = 0;
  (this->PinGuid).D = 0;
  (this->StackGuids).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->StackGuids).AllocatorInstance,0,piVar1);
  }
  this->bDependentVariableFromCustomIterationNamespace = false;
  return this;
}

