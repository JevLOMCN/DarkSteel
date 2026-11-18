// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_> @ 14ca033e0

void __thiscall
UNiagaraRendererProperties::
InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_>
          (UNiagaraRendererProperties *this,
          FNiagaraDataSetAccessor<UE::Math::TVector<float>_> *param_1,
          FNiagaraDataSetCompiledData *param_2,FNiagaraVariableAttributeBinding *param_3)

{
  FName FVar1;
  FNiagaraTypeDefinition *pFVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&(param_3->ParamMapVariable).TypeDefHandle);
  FVar1 = param_3->DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  pFVar3 = (FNiagaraDataSetCompiledData *)0x0;
  if (param_3->bIsCachedParticleValue != '\0') {
    pFVar3 = param_2;
  }
  if (pFVar3 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)param_1,pFVar3,FVar1);
    return;
  }
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)&param_1->field_0x4 = 0xffffffff;
  return;
}

