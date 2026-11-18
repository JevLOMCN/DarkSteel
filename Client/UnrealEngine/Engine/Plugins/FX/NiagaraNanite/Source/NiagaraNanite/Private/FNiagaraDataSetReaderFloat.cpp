// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 2

// FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> @ 14da3f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::
FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>
          (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *this,FNiagaraDataBuffer *param_1,
          bool param_2,int param_3)

{
  this->bIsValid = false;
  this->bIsFloat = param_2;
  this->NumInstances = 0;
  this->ComponentData[0] = (uchar *)0x0;
  this->ComponentData[1] = (uchar *)0x0;
  this->ComponentData[2] = (uchar *)0x0;
  if ((param_1 != (FNiagaraDataBuffer *)0x0) && (param_3 != -1)) {
    this->bIsValid = true;
    if (param_2) {
      this->ComponentData[0] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data + param_3 * param_1->FloatStride);
      this->ComponentData[1] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 1) * param_1->FloatStride);
      this->ComponentData[2] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 2) * param_1->FloatStride);
      this->NumInstances = param_1->NumInstances;
      return this;
    }
    this->ComponentData[0] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + param_3 * param_1->HalfStride);
    this->ComponentData[1] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 1) * param_1->HalfStride)
    ;
    this->ComponentData[2] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 2) * param_1->HalfStride)
    ;
    this->NumInstances = param_1->NumInstances;
  }
  return this;
}

// FNiagaraDataSetReaderFloat<FNiagaraPosition> @ 14da3f9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<FNiagaraPosition> * __thiscall
FNiagaraDataSetReaderFloat<FNiagaraPosition>::FNiagaraDataSetReaderFloat<FNiagaraPosition>
          (FNiagaraDataSetReaderFloat<FNiagaraPosition> *this,FNiagaraDataBuffer *param_1,
          bool param_2,int param_3)

{
  this->bIsValid = false;
  this->bIsFloat = param_2;
  this->NumInstances = 0;
  this->ComponentData[0] = (uchar *)0x0;
  this->ComponentData[1] = (uchar *)0x0;
  this->ComponentData[2] = (uchar *)0x0;
  if ((param_1 != (FNiagaraDataBuffer *)0x0) && (param_3 != -1)) {
    this->bIsValid = true;
    if (param_2) {
      this->ComponentData[0] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data + param_3 * param_1->FloatStride);
      this->ComponentData[1] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 1) * param_1->FloatStride);
      this->ComponentData[2] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 2) * param_1->FloatStride);
      this->NumInstances = param_1->NumInstances;
      return this;
    }
    this->ComponentData[0] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + param_3 * param_1->HalfStride);
    this->ComponentData[1] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 1) * param_1->HalfStride)
    ;
    this->ComponentData[2] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 2) * param_1->HalfStride)
    ;
    this->NumInstances = param_1->NumInstances;
  }
  return this;
}

