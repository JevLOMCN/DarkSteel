// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraGenerationInputDataCPUAccessors @ 149332d80

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraGenerationInputDataCPUAccessors * __thiscall
FNiagaraGenerationInputDataCPUAccessors::FNiagaraGenerationInputDataCPUAccessors
          (FNiagaraGenerationInputDataCPUAccessors *this,UNiagaraRibbonRendererProperties *param_1,
          FNiagaraDataSet *param_2)

{
  FNiagaraDataSetAccessor<int> FVar1;
  int iVar2;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraGenerationInputDataCPUAccessors *pFVar6;
  
  if (param_2->CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FNiagaraGenerationInputDataCPUAccessors *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->TotalNumParticles = param_2->CurrentData->NumInstances;
  FNiagaraDataSetAccessorFloat<float>::GetReader
            ((FNiagaraDataSetAccessorFloat<float> *)&param_1->RibbonLinkOrderFloatAccessor,
             &this->RibbonLinkOrderFloatData,param_2);
  pFVar3 = param_2->CurrentData;
  FVar1 = param_1->RibbonLinkOrderInt32Accessor;
  (this->RibbonLinkOrderInt32Data).NumInstances = 0;
  (this->RibbonLinkOrderInt32Data).bIsValid = false;
  (this->RibbonLinkOrderInt32Data).ComponentData[0] = (uchar *)0x0;
  if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (FVar1 != (FNiagaraDataSetAccessor<int>)0xffffffff))
  {
    (this->RibbonLinkOrderInt32Data).bIsValid = true;
    (this->RibbonLinkOrderInt32Data).ComponentData[0] =
         (uchar *)((pFVar3->Int32Data).AllocatorInstance.Data + (int)FVar1 * pFVar3->Int32Stride);
    (this->RibbonLinkOrderInt32Data).NumInstances = pFVar3->NumInstances;
  }
  pFVar3 = param_2->CurrentData;
  FVar1 = param_1->RibbonIdDataSetAccessor;
  (this->SimpleRibbonIDData).bIsValid = false;
  (this->SimpleRibbonIDData).NumInstances = 0;
  (this->SimpleRibbonIDData).ComponentData[0] = (uchar *)0x0;
  if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (FVar1 != (FNiagaraDataSetAccessor<int>)0xffffffff))
  {
    (this->SimpleRibbonIDData).bIsValid = true;
    (this->SimpleRibbonIDData).ComponentData[0] =
         (uchar *)((pFVar3->Int32Data).AllocatorInstance.Data + (int)FVar1 * pFVar3->Int32Stride);
    (this->SimpleRibbonIDData).NumInstances = pFVar3->NumInstances;
  }
  iVar2 = *(int *)&(param_1->RibbonFullIDDataSetAccessor).field_0x8;
  pFVar3 = param_2->CurrentData;
  (this->FullRibbonIDData).NumInstances = 0;
  (this->FullRibbonIDData).ComponentStride = 0;
  (this->FullRibbonIDData).FloatComponents = (float *)0x0;
  (this->FullRibbonIDData).Int32Components = (int *)0x0;
  (this->FullRibbonIDData).bIsValid = iVar2 != -1 && pFVar3 != (FNiagaraDataBuffer *)0x0;
  if (iVar2 != -1 && pFVar3 != (FNiagaraDataBuffer *)0x0) {
    (this->FullRibbonIDData).Int32Components =
         (int *)((pFVar3->Int32Data).AllocatorInstance.Data + iVar2 * pFVar3->Int32Stride);
    (this->FullRibbonIDData).NumInstances = pFVar3->NumInstances;
    (this->FullRibbonIDData).ComponentStride = pFVar3->FloatStride >> 2;
  }
  FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
            ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&param_1->PositionDataSetAccessor,
             &this->PosData,param_2);
  FNiagaraDataSetAccessorFloat<float>::GetReader
            ((FNiagaraDataSetAccessorFloat<float> *)&param_1->NormalizedAgeAccessor,&this->AgeData,
             param_2);
  FNiagaraDataSetAccessorFloat<float>::GetReader
            ((FNiagaraDataSetAccessorFloat<float> *)&param_1->SizeDataSetAccessor,&this->SizeData,
             param_2);
  FNiagaraDataSetAccessorFloat<float>::GetReader
            ((FNiagaraDataSetAccessorFloat<float> *)&param_1->TwistDataSetAccessor,&this->TwistData,
             param_2);
  return this;
}

// operator() @ 149339350

bool __thiscall
`FNiagaraGenerationInputDataCPUAccessors::
RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>::operator()
          (void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  lVar3 = *(longlong *)this;
  uVar1 = *param_1;
  if ((*(char *)(lVar3 + 0x18) == '\0') || (*(int *)(lVar3 + 0x1c) < (int)uVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x17f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *(longlong *)this;
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar1 * 4);
  uVar1 = *param_2;
  if ((*(char *)(lVar4 + 0x18) == '\0') || (*(int *)(lVar4 + 0x1c) < (int)uVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x17f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  return *(int *)(*(longlong *)(lVar4 + 0x20) + (longlong)(int)uVar1 * 4) < iVar2;
}

