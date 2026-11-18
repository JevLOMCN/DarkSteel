// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 1493c3db0

UScriptStruct * __cdecl FNiagaraEmitterCompiledData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData,(UObject *)pUVar1,
                         L"NiagaraEmitterCompiledData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton;
}

// FNiagaraEmitterCompiledData @ 1493cc0e0

FNiagaraEmitterCompiledData * __thiscall
FNiagaraEmitterCompiledData::FNiagaraEmitterCompiledData(FNiagaraEmitterCompiledData *this)

{
  int iVar1;
  
  (this->SpawnAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnAttributes).ArrayNum = 0;
  (this->SpawnAttributes).ArrayMax = 0;
  (this->EmitterSpawnIntervalVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterSpawnIntervalVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterSpawnIntervalVar)._padding_ = iVar1;
  (this->EmitterSpawnIntervalVar).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterSpawnIntervalVar).VarData.ArrayNum = 0;
  (this->EmitterSpawnIntervalVar).VarData.ArrayMax = 0;
  (this->EmitterInterpSpawnStartDTVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterInterpSpawnStartDTVar)._padding_
                     ,&FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterInterpSpawnStartDTVar)._padding_ = iVar1;
  (this->EmitterInterpSpawnStartDTVar).VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EmitterInterpSpawnStartDTVar).VarData.ArrayNum = 0;
  (this->EmitterInterpSpawnStartDTVar).VarData.ArrayMax = 0;
  (this->EmitterSpawnGroupVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterSpawnGroupVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterSpawnGroupVar)._padding_ = iVar1;
  (this->EmitterSpawnGroupVar).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterSpawnGroupVar).VarData.ArrayNum = 0;
  (this->EmitterSpawnGroupVar).VarData.ArrayMax = 0;
  (this->EmitterAgeVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterAgeVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterAgeVar)._padding_ = iVar1;
  (this->EmitterAgeVar).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterAgeVar).VarData.ArrayNum = 0;
  (this->EmitterAgeVar).VarData.ArrayMax = 0;
  (this->EmitterRandomSeedVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterRandomSeedVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterRandomSeedVar)._padding_ = iVar1;
  (this->EmitterRandomSeedVar).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterRandomSeedVar).VarData.ArrayNum = 0;
  (this->EmitterRandomSeedVar).VarData.ArrayMax = 0;
  (this->EmitterInstanceSeedVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->EmitterInstanceSeedVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterInstanceSeedVar)._padding_ = iVar1;
  (this->EmitterInstanceSeedVar).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterInstanceSeedVar).VarData.ArrayNum = 0;
  (this->EmitterInstanceSeedVar).VarData.ArrayMax = 0;
  (this->EmitterTotalSpawnedParticlesVar)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->EmitterTotalSpawnedParticlesVar)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->EmitterTotalSpawnedParticlesVar)._padding_ = iVar1;
  (this->EmitterTotalSpawnedParticlesVar).VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EmitterTotalSpawnedParticlesVar).VarData.ArrayNum = 0;
  (this->EmitterTotalSpawnedParticlesVar).VarData.ArrayMax = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->DataSetCompiledData);
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->GPUCaptureDataSetCompiledData);
  FNiagaraVariable::operator=(&this->EmitterSpawnIntervalVar,&INiagaraModule::Emitter_SpawnInterval)
  ;
  FNiagaraVariable::operator=
            (&this->EmitterInterpSpawnStartDTVar,&INiagaraModule::Emitter_InterpSpawnStartDt);
  FNiagaraVariable::operator=(&this->EmitterAgeVar,&INiagaraModule::Emitter_Age);
  FNiagaraVariable::operator=(&this->EmitterSpawnGroupVar,&INiagaraModule::Emitter_SpawnGroup);
  FNiagaraVariable::operator=(&this->EmitterRandomSeedVar,&INiagaraModule::Emitter_RandomSeed);
  FNiagaraVariable::operator=
            (&this->EmitterInstanceSeedVar,&INiagaraModule::Engine_Emitter_InstanceSeed);
  FNiagaraVariable::operator=
            (&this->EmitterTotalSpawnedParticlesVar,
             &INiagaraModule::Engine_Emitter_TotalSpawnedParticles);
  return this;
}

// ~FNiagaraEmitterCompiledData @ 1493d0e70

void __thiscall
FNiagaraEmitterCompiledData::~FNiagaraEmitterCompiledData(FNiagaraEmitterCompiledData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->GPUCaptureDataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->GPUCaptureDataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->GPUCaptureDataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GPUCaptureDataSetCompiledData).Variables.AllocatorInstance.Data;
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
  pFVar1 = (this->EmitterTotalSpawnedParticlesVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterInstanceSeedVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterRandomSeedVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterAgeVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterSpawnGroupVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterInterpSpawnStartDTVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterSpawnIntervalVar).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetGPUCaptureDataSetCompiledData @ 1493e78b0

FNiagaraDataSetCompiledData * __thiscall
FNiagaraEmitterCompiledData::GetGPUCaptureDataSetCompiledData(FNiagaraEmitterCompiledData *this)

{
  uint local_10;
  
  if ((this->GPUCaptureDataSetCompiledData).Variables.ArrayNum == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&GPUCaptureDataSetName,L"GPU Capture Dataset");
        _Init_thread_footer(&::_TSS0);
      }
    }
    (this->GPUCaptureDataSetCompiledData).ID.Name = GPUCaptureDataSetName;
    local_10 = local_10 & 0xffffff00;
    *(uint *)&(this->GPUCaptureDataSetCompiledData).ID.Type = local_10;
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              (&(this->GPUCaptureDataSetCompiledData).Variables,
               &(this->DataSetCompiledData).Variables);
    (this->GPUCaptureDataSetCompiledData).SimTarget = CPUSim;
    FNiagaraDataSetCompiledData::BuildLayout(&this->GPUCaptureDataSetCompiledData);
    return &this->GPUCaptureDataSetCompiledData;
  }
  return &this->GPUCaptureDataSetCompiledData;
}

