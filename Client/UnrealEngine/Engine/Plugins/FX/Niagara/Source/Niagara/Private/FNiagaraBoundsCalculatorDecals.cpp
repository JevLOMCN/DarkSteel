// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraBoundsCalculatorDecals @ 149279ec0

void __thiscall
FNiagaraBoundsCalculatorDecals::~FNiagaraBoundsCalculatorDecals
          (FNiagaraBoundsCalculatorDecals *this)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  return;
}

// CalculateBounds @ 149286f70

/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraBoundsCalculatorDecals::CalculateBounds
          (FNiagaraBoundsCalculatorDecals *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FNiagaraDataSet *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  FNiagaraDataBuffer *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  TVector<float> *pTVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  TVector<float>_u_0 local_d8;
  undefined1 local_c8 [8];
  float local_c0;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_b8;
  double local_98;
  double dStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  
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
    local_c8 = (undefined1  [8])0x0;
    local_c0 = 0.0;
    local_d8._0_8_ = 0;
    local_d8._s_0.Z = 0.0;
    this_00 = FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                        ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)this->PositionAccessor,
                         &local_b8,param_2);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
              (this_00,(FNiagaraPosition *)local_c8,(FNiagaraPosition *)&local_d8._s_0);
    dVar7 = (double)(float)local_c8._0_4_;
    local_88 = 1;
    iVar2 = *(int *)&this->DecalSizeAccessor->field_0x4;
    dVar8 = (double)(float)local_c8._4_4_;
    dVar9 = (double)local_c0;
    dVar10 = (double)local_d8._s_0.X;
    dVar14 = (double)local_d8._s_0.Y;
    dVar16 = (double)local_d8._s_0.Z;
    if (iVar2 != -1) {
      pFVar3 = param_2->CurrentData;
      cVar1 = *(char *)this->DecalSizeAccessor;
      uVar11 = (ulonglong)CONCAT61((int6)((ulonglong)dVar7 >> 0x10),cVar1) & 0xffffff;
      local_b8._0_8_ = uVar11 << 8;
      local_b8.ComponentData[2] = (uchar *)0x0;
      local_b8.ComponentData[0] = (uchar *)0x0;
      local_b8.ComponentData[1] = (uchar *)0x0;
      if (pFVar3 != (FNiagaraDataBuffer *)0x0) {
        local_b8._1_7_ = SUB87(uVar11,0);
        local_b8.bIsValid = true;
        if (cVar1 == '\0') {
          local_b8.ComponentData[0] =
               (uchar *)((pFVar3->HalfData).AllocatorInstance.Data + iVar2 * pFVar3->HalfStride);
          local_b8.ComponentData[1] =
               (uchar *)((pFVar3->HalfData).AllocatorInstance.Data +
                        (iVar2 + 1) * pFVar3->HalfStride);
          local_b8.ComponentData[2] =
               (uchar *)((pFVar3->HalfData).AllocatorInstance.Data +
                        (iVar2 + 2) * pFVar3->HalfStride);
        }
        else {
          local_b8.ComponentData[0] =
               (uchar *)((pFVar3->FloatData).AllocatorInstance.Data + iVar2 * pFVar3->FloatStride);
          local_b8.ComponentData[1] =
               (uchar *)((pFVar3->FloatData).AllocatorInstance.Data +
                        (iVar2 + 1) * pFVar3->FloatStride);
          local_b8.ComponentData[2] =
               (uchar *)((pFVar3->FloatData).AllocatorInstance.Data +
                        (iVar2 + 2) * pFVar3->FloatStride);
        }
        local_b8.NumInstances = pFVar3->NumInstances;
      }
      local_98 = dVar14;
      dStack_90 = dVar16;
      pTVar12 = FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::GetMax
                          ((FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *)&local_b8,
                           (TVector<float> *)&local_d8._s_0);
      fVar17 = (float)((uint)(pTVar12->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar13 = (float)((uint)(pTVar12->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar17 <= fVar13) {
        fVar17 = fVar13;
      }
      fVar13 = (float)((uint)(pTVar12->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar17 <= fVar13) {
        fVar17 = fVar13;
      }
      dVar15 = (double)fVar17;
      dVar9 = dVar9 - dVar15;
      dVar10 = dVar15 + dVar10;
      dVar7 = dVar7 - dVar15;
      dVar8 = dVar8 - dVar15;
      dVar14 = dVar15 + dVar14;
      dVar16 = dVar15 + dVar16;
    }
    auVar5._8_4_ = SUB84(dVar8,0);
    auVar5._0_8_ = dVar7;
    auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar5;
    auVar6._8_4_ = SUB84(dVar10,0);
    auVar6._0_8_ = dVar9;
    auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = auVar6;
    auVar4._8_4_ = SUB84(dVar16,0);
    auVar4._0_8_ = dVar14;
    auVar4._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar4;
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_87;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_87 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_87 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_87 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_87 >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_87 >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_87 >> 0x30);
  }
  return __return_storage_ptr__;
}

// InitAccessors @ 1492abe30

void __thiscall
FNiagaraBoundsCalculatorDecals::InitAccessors
          (FNiagaraBoundsCalculatorDecals *this,FNiagaraDataSetCompiledData *param_1)

{
  return;
}

