// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FGrid3DCollectionAttributeHlslWriter @ 1491687c0

FGrid3DCollectionAttributeHlslWriter * __thiscall
FGrid3DCollectionAttributeHlslWriter::FGrid3DCollectionAttributeHlslWriter
          (FGrid3DCollectionAttributeHlslWriter *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_2)

{
  this->ParamInfo = param_1;
  FNiagaraDataInterfaceRWAttributeHelper::FNiagaraDataInterfaceRWAttributeHelper
            (&this->AttributeHelper,param_1);
  FNiagaraDataInterfaceRWAttributeHelper::Init<UNiagaraDataInterfaceGrid3DCollection>
            (&this->AttributeHelper,param_2);
  return this;
}

// ShouldUseRGBAGrid @ 14918e9e0

bool __cdecl FGrid3DCollectionAttributeHlslWriter::ShouldUseRGBAGrid(int param_1,int param_2)

{
  if (((param_2 == 1) && (param_1 < 5)) && (GNiagaraGrid3DUseRGBAGrid != 0)) {
    return true;
  }
  return false;
}

// SupportsRGBAGrid @ 14918f340

bool __cdecl FGrid3DCollectionAttributeHlslWriter::SupportsRGBAGrid(void)

{
  return GNiagaraGrid3DUseRGBAGrid == 1;
}

// UseRGBAGrid @ 149190b90

bool __thiscall
FGrid3DCollectionAttributeHlslWriter::UseRGBAGrid(FGrid3DCollectionAttributeHlslWriter *this)

{
  if ((((this->AttributeHelper).AttributeInfos.ArrayNum == 1) &&
      ((this->AttributeHelper).TotalChannels < 5)) && (GNiagaraGrid3DUseRGBAGrid != 0)) {
    return true;
  }
  return false;
}

