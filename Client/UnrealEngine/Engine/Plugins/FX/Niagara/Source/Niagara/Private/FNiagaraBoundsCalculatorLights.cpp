// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraBoundsCalculatorLights @ 1492d3ed0

void __thiscall
FNiagaraBoundsCalculatorLights::~FNiagaraBoundsCalculatorLights
          (FNiagaraBoundsCalculatorLights *this)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  return;
}

// CalculateBounds @ 1492dd8f0

/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraBoundsCalculatorLights::CalculateBounds
          (FNiagaraBoundsCalculatorLights *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FNiagaraDataSet *param_2,int param_3)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  float fVar9;
  double dVar10;
  undefined1 local_e8 [8];
  float local_e0;
  undefined1 local_d8 [8];
  float local_d0;
  FNiagaraDataSetReaderFloat<float> local_c8;
  FNiagaraVariable local_b8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_98 [4];
  
  if ((param_3 == 0) ||
     (((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)this->PositionAccessor)->ComponentIndex ==
      -1)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    local_e8 = (undefined1  [8])0x0;
    local_e0 = 0.0;
    local_d8 = (undefined1  [8])0x0;
    local_d0 = 0.0;
    this_00 = FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                        ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)this->PositionAccessor,
                         local_98,param_2);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
              (this_00,(FNiagaraPosition *)local_e8,(FNiagaraPosition *)local_d8);
    iVar1 = *(int *)&this->RadiusAccessor->field_0x4;
    dVar3 = (double)(float)local_e8._0_4_;
    dVar4 = (double)(float)local_e8._4_4_;
    dVar5 = (double)local_e0;
    dVar6 = (double)(float)local_d8._0_4_;
    dVar7 = (double)(float)local_d8._4_4_;
    dVar8 = (double)local_d0;
    if (iVar1 == -1) {
      FNiagaraConstants::GetAttributeWithDefaultValue
                (&local_b8,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightRadius);
      fVar9 = FNiagaraVariable::GetValue<float>(&local_b8);
      dVar10 = (double)fVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar10;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar10;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5 - dVar10;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10 + dVar6;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10 + dVar7;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar10 + dVar8;
      __return_storage_ptr__->IsValid = '\x01';
      if (local_b8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.VarData.AllocatorInstance.Data);
      }
    }
    else {
      pFVar2 = param_2->CurrentData;
      local_c8.bIsFloat = *(bool *)this->RadiusAccessor;
      local_c8.bIsValid = false;
      local_c8.NumInstances = 0;
      local_c8.ComponentData[0] = (uchar *)0x0;
      if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
        local_c8.bIsValid = true;
        if (local_c8.bIsFloat == false) {
          local_c8.ComponentData[0] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
        }
        else {
          local_c8.ComponentData[0] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
        }
        local_c8.NumInstances = pFVar2->NumInstances;
      }
      fVar9 = FNiagaraDataSetReaderFloat<float>::GetMax(&local_c8);
      dVar10 = (double)fVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar10;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar10;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5 - dVar10;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10 + dVar6;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10 + dVar7;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar10 + dVar8;
      __return_storage_ptr__->IsValid = '\x01';
    }
  }
  return __return_storage_ptr__;
}

// InitAccessors @ 1492f75d0

void __thiscall
FNiagaraBoundsCalculatorLights::InitAccessors
          (FNiagaraBoundsCalculatorLights *this,FNiagaraDataSetCompiledData *param_1)

{
  return;
}

