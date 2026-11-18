// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 1493c40b0

UScriptStruct * __cdecl FNiagaraSystemCompiledData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData,(UObject *)pUVar1,
                         L"NiagaraSystemCompiledData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton;
}

// FNiagaraSystemCompiledData @ 1493cc600

FNiagaraSystemCompiledData * __thiscall
FNiagaraSystemCompiledData::FNiagaraSystemCompiledData(FNiagaraSystemCompiledData *this)

{
  FNiagaraParameterStore::FNiagaraParameterStore(&this->InstanceParamStore);
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->DataSetCompiledData);
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
            (&this->SpawnInstanceParamsDataSetCompiledData);
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
            (&this->UpdateInstanceParamsDataSetCompiledData);
  (this->SpawnInstanceGlobalBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceGlobalBinding).FloatOffsets.ArrayNum = 0;
  (this->SpawnInstanceGlobalBinding).FloatOffsets.ArrayMax = 0;
  (this->SpawnInstanceGlobalBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceGlobalBinding).Int32Offsets.ArrayNum = 0;
  (this->SpawnInstanceGlobalBinding).Int32Offsets.ArrayMax = 0;
  (this->SpawnInstanceSystemBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceSystemBinding).FloatOffsets.ArrayNum = 0;
  (this->SpawnInstanceSystemBinding).FloatOffsets.ArrayMax = 0;
  (this->SpawnInstanceSystemBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceSystemBinding).Int32Offsets.ArrayNum = 0;
  (this->SpawnInstanceSystemBinding).Int32Offsets.ArrayMax = 0;
  (this->SpawnInstanceOwnerBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceOwnerBinding).FloatOffsets.ArrayNum = 0;
  (this->SpawnInstanceOwnerBinding).FloatOffsets.ArrayMax = 0;
  (this->SpawnInstanceOwnerBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceOwnerBinding).Int32Offsets.ArrayNum = 0;
  (this->SpawnInstanceOwnerBinding).Int32Offsets.ArrayMax = 0;
  (this->SpawnInstanceEmitterBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInstanceEmitterBindings).ArrayNum = 0;
  (this->SpawnInstanceEmitterBindings).ArrayMax = 0;
  (this->UpdateInstanceGlobalBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceGlobalBinding).FloatOffsets.ArrayNum = 0;
  (this->UpdateInstanceGlobalBinding).FloatOffsets.ArrayMax = 0;
  (this->UpdateInstanceGlobalBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceGlobalBinding).Int32Offsets.ArrayNum = 0;
  (this->UpdateInstanceGlobalBinding).Int32Offsets.ArrayMax = 0;
  (this->UpdateInstanceSystemBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceSystemBinding).FloatOffsets.ArrayNum = 0;
  (this->UpdateInstanceSystemBinding).FloatOffsets.ArrayMax = 0;
  (this->UpdateInstanceSystemBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceSystemBinding).Int32Offsets.ArrayNum = 0;
  (this->UpdateInstanceSystemBinding).Int32Offsets.ArrayMax = 0;
  (this->UpdateInstanceOwnerBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceOwnerBinding).FloatOffsets.ArrayNum = 0;
  (this->UpdateInstanceOwnerBinding).FloatOffsets.ArrayMax = 0;
  (this->UpdateInstanceOwnerBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceOwnerBinding).Int32Offsets.ArrayNum = 0;
  (this->UpdateInstanceOwnerBinding).Int32Offsets.ArrayMax = 0;
  (this->UpdateInstanceEmitterBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateInstanceEmitterBindings).ArrayNum = 0;
  (this->UpdateInstanceEmitterBindings).ArrayMax = 0;
  return this;
}

// ~FNiagaraSystemCompiledData @ 1493d0f70

void __thiscall
FNiagaraSystemCompiledData::~FNiagaraSystemCompiledData(FNiagaraSystemCompiledData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraParameterDataSetBindingCollection,int>
            ((FNiagaraParameterDataSetBindingCollection *)
             (this->UpdateInstanceEmitterBindings).AllocatorInstance.Data,
             (this->UpdateInstanceEmitterBindings).ArrayNum);
  pFVar1 = (this->UpdateInstanceEmitterBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceOwnerBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceOwnerBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceSystemBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceSystemBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceGlobalBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceGlobalBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraParameterDataSetBindingCollection,int>
            ((FNiagaraParameterDataSetBindingCollection *)
             (this->SpawnInstanceEmitterBindings).AllocatorInstance.Data,
             (this->SpawnInstanceEmitterBindings).ArrayNum);
  pFVar1 = (this->SpawnInstanceEmitterBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceOwnerBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceOwnerBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceSystemBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceSystemBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceGlobalBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceGlobalBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->UpdateInstanceParamsDataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->UpdateInstanceParamsDataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->UpdateInstanceParamsDataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateInstanceParamsDataSetCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->SpawnInstanceParamsDataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->SpawnInstanceParamsDataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->SpawnInstanceParamsDataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnInstanceParamsDataSetCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->DataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->DataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->DataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataSetCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->InstanceParamStore);
  return;
}

