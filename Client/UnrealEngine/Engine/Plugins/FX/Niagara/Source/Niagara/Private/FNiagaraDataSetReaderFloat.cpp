// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// Get @ 148e67210

TVector4<float> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
          (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *this,
          TVector4<float> *__return_storage_ptr__,int param_1)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  TVector4<float> *pTVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector4<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  fVar5 = __real_b8800000;
  if (this->bIsFloat == false) {
    uVar1 = *(ushort *)(this->ComponentData[0] + lVar10 * 2);
    uVar8 = (uVar1 & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + __real_b8800000;
    }
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar3 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar2 = this->ComponentData[3];
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)((*(ushort *)(puVar3 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    fVar9 = (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
  }
  else {
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)(this->ComponentData[0] + lVar10 * 4);
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(float *)(puVar2 + lVar10 * 4);
    puVar2 = this->ComponentData[3];
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(float *)(puVar3 + lVar10 * 4);
    fVar9 = *(float *)(puVar2 + lVar10 * 4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar9;
  return __return_storage_ptr__;
}

// Get @ 148e67450

TVector<float> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
          (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *this,
          TVector<float> *__return_storage_ptr__,int param_1)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  TVector<float> *pTVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  fVar5 = __real_b8800000;
  if (this->bIsFloat == false) {
    uVar1 = *(ushort *)(this->ComponentData[0] + lVar10 * 2);
    uVar8 = (uVar1 & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + __real_b8800000;
    }
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar3 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    fVar9 = (float)((*(ushort *)(puVar3 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
  }
  else {
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)(this->ComponentData[0] + lVar10 * 4);
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(float *)(puVar2 + lVar10 * 4);
    fVar9 = *(float *)(puVar3 + lVar10 * 4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar9;
  return __return_storage_ptr__;
}

// Get @ 1491c44a0

TQuat<float> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get
          (FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *this,
          TQuat<float> *__return_storage_ptr__,int param_1)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  TQuat<float> *pTVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TQuat<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  fVar5 = __real_b8800000;
  if (this->bIsFloat == false) {
    uVar1 = *(ushort *)(this->ComponentData[0] + lVar10 * 2);
    uVar8 = (uVar1 & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + __real_b8800000;
    }
    puVar2 = this->ComponentData[1];
    __return_storage_ptr__->X = (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar3 = this->ComponentData[2];
    __return_storage_ptr__->Y =
         (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar3 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar2 = this->ComponentData[3];
    __return_storage_ptr__->Z =
         (float)((*(ushort *)(puVar3 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    fVar9 = (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
  }
  else {
    puVar2 = this->ComponentData[1];
    __return_storage_ptr__->X = *(float *)(this->ComponentData[0] + lVar10 * 4);
    puVar3 = this->ComponentData[2];
    __return_storage_ptr__->Y = *(float *)(puVar2 + lVar10 * 4);
    puVar2 = this->ComponentData[3];
    __return_storage_ptr__->Z = *(float *)(puVar3 + lVar10 * 4);
    fVar9 = *(float *)(puVar2 + lVar10 * 4);
  }
  __return_storage_ptr__->W = fVar9;
  return __return_storage_ptr__;
}

// Get @ 1491c46e0

FLinearColor * __thiscall
FNiagaraDataSetReaderFloat<FLinearColor>::Get
          (FNiagaraDataSetReaderFloat<FLinearColor> *this,FLinearColor *__return_storage_ptr__,
          int param_1)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  FLinearColor *pFVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar4)();
      return pFVar7;
    }
  }
  fVar5 = __real_b8800000;
  if (this->bIsFloat == false) {
    uVar1 = *(ushort *)(this->ComponentData[0] + lVar10 * 2);
    uVar8 = (uVar1 & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + __real_b8800000;
    }
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.R = (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar3 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    puVar2 = this->ComponentData[3];
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         (float)((*(ushort *)(puVar3 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
    uVar8 = (*(ushort *)(puVar2 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar8 + 0x38000000);
    if ((uVar8 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar8 + 0x70000000);
    }
    else if ((uVar8 & 0xf800000) == 0) {
      fVar9 = (float)(uVar8 + 0x38800000) + fVar5;
    }
    fVar9 = (float)((*(ushort *)(puVar2 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar9);
  }
  else {
    puVar2 = this->ComponentData[1];
    (__return_storage_ptr__->field0_0x0)._s_0.R = *(float *)(this->ComponentData[0] + lVar10 * 4);
    puVar3 = this->ComponentData[2];
    (__return_storage_ptr__->field0_0x0)._s_0.G = *(float *)(puVar2 + lVar10 * 4);
    puVar2 = this->ComponentData[3];
    (__return_storage_ptr__->field0_0x0)._s_0.B = *(float *)(puVar3 + lVar10 * 4);
    fVar9 = *(float *)(puVar2 + lVar10 * 4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar9;
  return __return_storage_ptr__;
}

// Get @ 1491c4920

FNiagaraPosition * __thiscall
FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
          (FNiagaraDataSetReaderFloat<FNiagaraPosition> *this,
          FNiagaraPosition *__return_storage_ptr__,int param_1)

{
  uchar *puVar1;
  ushort uVar2;
  uchar *puVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  float fVar8;
  bool bVar9;
  FNiagaraPosition *pFVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  
  lVar12 = (longlong)param_1;
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FNiagaraPosition *)(*pcVar4)();
      return pFVar10;
    }
  }
  fVar8 = __real_b8800000;
  if (this->bIsFloat == false) {
    uVar2 = *(ushort *)(this->ComponentData[0] + lVar12 * 2);
    uVar11 = (uVar2 & 0x7fff) * 0x2000;
    fVar13 = (float)(uVar11 + 0x38000000);
    if ((uVar11 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar11 + 0x70000000);
    }
    else if ((uVar11 & 0xf800000) == 0) {
      fVar13 = (float)(uVar11 + 0x38800000) + __real_b8800000;
    }
    puVar1 = this->ComponentData[1];
    *(uint *)__return_storage_ptr__ = (uVar2 & 0x8000) << 0x10 | (uint)fVar13;
    uVar11 = (*(ushort *)(puVar1 + lVar12 * 2) & 0x7fff) * 0x2000;
    fVar13 = (float)(uVar11 + 0x38000000);
    if ((uVar11 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar11 + 0x70000000);
    }
    else if ((uVar11 & 0xf800000) == 0) {
      fVar13 = (float)(uVar11 + 0x38800000) + fVar8;
    }
    puVar3 = this->ComponentData[2];
    *(uint *)&__return_storage_ptr__->field_0x4 =
         (*(ushort *)(puVar1 + lVar12 * 2) & 0x8000) << 0x10 | (uint)fVar13;
    uVar11 = (*(ushort *)(puVar3 + lVar12 * 2) & 0x7fff) * 0x2000;
    fVar13 = (float)(uVar11 + 0x38000000);
    if ((uVar11 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar11 + 0x70000000);
    }
    else if ((uVar11 & 0xf800000) == 0) {
      fVar13 = (float)(uVar11 + 0x38800000) + fVar8;
    }
    uVar11 = (*(ushort *)(puVar3 + lVar12 * 2) & 0x8000) << 0x10 | (uint)fVar13;
  }
  else {
    puVar1 = this->ComponentData[0] + lVar12 * 4;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar3 = this->ComponentData[1];
    __return_storage_ptr__->field_0x0 = puVar1[0];
    __return_storage_ptr__->field_0x1 = uVar5;
    __return_storage_ptr__->field_0x2 = uVar6;
    __return_storage_ptr__->field_0x3 = uVar7;
    puVar3 = puVar3 + lVar12 * 4;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar1 = this->ComponentData[2];
    __return_storage_ptr__->field_0x4 = puVar3[0];
    __return_storage_ptr__->field_0x5 = uVar5;
    __return_storage_ptr__->field_0x6 = uVar6;
    __return_storage_ptr__->field_0x7 = uVar7;
    uVar11 = *(uint *)(puVar1 + lVar12 * 4);
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar11;
  return __return_storage_ptr__;
}

// GetSafe @ 1491cacb0

TVector2<float> __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_>::GetSafe
          (FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  ushort uVar1;
  uchar *puVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  float fVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  undefined8 *in_R9;
  float fVar10;
  
  fVar7 = __real_b8800000;
  if ((this->bIsValid == false) || (this->NumInstances <= (int)param_2)) {
    *(undefined8 *)CONCAT44(in_register_00000014,param_1) = *in_R9;
    TVar6._4_4_ = in_register_00000014;
    TVar6._s_0.X = (float)param_1;
    return (TVector2<float>)TVar6;
  }
  lVar9 = (longlong)(int)param_2;
  if (this->bIsFloat != false) {
    puVar2 = this->ComponentData[1];
    *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
         *(undefined4 *)(this->ComponentData[0] + lVar9 * 4);
    TVar3._4_4_ = in_register_00000014;
    TVar3._s_0.X = (float)param_1;
    *(undefined4 *)(CONCAT44(in_register_00000014,param_1) + 4) =
         *(undefined4 *)(puVar2 + lVar9 * 4);
    return (TVector2<float>)TVar3;
  }
  uVar1 = *(ushort *)(this->ComponentData[0] + lVar9 * 2);
  uVar8 = (uVar1 & 0x7fff) * 0x2000;
  fVar10 = (float)(uVar8 + 0x38000000);
  if ((uVar8 & 0xf800000) == 0xf800000) {
    fVar10 = (float)(uVar8 + 0x70000000);
  }
  else if ((uVar8 & 0xf800000) == 0) {
    fVar10 = (float)(uVar8 + 0x38800000) + __real_b8800000;
  }
  puVar2 = this->ComponentData[1];
  *(uint *)CONCAT44(in_register_00000014,param_1) = (uVar1 & 0x8000) << 0x10 | (uint)fVar10;
  uVar1 = *(ushort *)(puVar2 + lVar9 * 2);
  uVar8 = (uVar1 & 0x7fff) * 0x2000;
  fVar10 = (float)(uVar8 + 0x38000000);
  if ((uVar8 & 0xf800000) == 0xf800000) {
    TVar4._4_4_ = in_register_00000014;
    TVar4._s_0.X = (float)param_1;
    *(uint *)(CONCAT44(in_register_00000014,param_1) + 4) =
         (uVar1 & 0x8000) << 0x10 | uVar8 + 0x70000000;
    return (TVector2<float>)TVar4;
  }
  if ((uVar8 & 0xf800000) == 0) {
    fVar10 = (float)(uVar8 + 0x38800000) + fVar7;
  }
  TVar5._4_4_ = in_register_00000014;
  TVar5._s_0.X = (float)param_1;
  *(uint *)(CONCAT44(in_register_00000014,param_1) + 4) = (uVar1 & 0x8000) << 0x10 | (uint)fVar10;
  return (TVector2<float>)TVar5;
}

// GetMax @ 1492a49f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::GetMax
          (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *this,
          TVector<float> *__return_storage_ptr__)

{
  short *psVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  bool bVar21;
  TVector<float> *pTVar22;
  float *pfVar23;
  float fVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ushort uVar32;
  float fVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  
  uVar20 = _UNK_151dce44e;
  uVar19 = _UNK_151dce44c;
  uVar18 = _UNK_151dce44a;
  uVar17 = _UNK_151dce448;
  uVar16 = _UNK_151dce446;
  uVar15 = _UNK_151dce444;
  uVar14 = _UNK_151dce442;
  uVar13 = ___xmm_fc00fc00fc00fc00fc00fc00fc00fc00;
  fVar12 = __real_b8800000;
  fVar11 = __real_ff7fffff;
  lVar29 = 0;
  pTVar22 = __return_storage_ptr__;
  do {
    if ((this->bIsValid == false) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                            ,0x6a,L""), bVar21)) {
      pcVar2 = (code *)swi(3);
      pTVar22 = (TVector<float> *)(*pcVar2)();
      return pTVar22;
    }
    uVar27 = this->NumInstances;
    lVar30 = (longlong)(int)uVar27;
    if (this->bIsFloat == false) {
      lVar25 = 0;
      uVar26 = 0xfc00;
      if ((0 < (int)uVar27) && (0xf < uVar27)) {
        lVar31 = *(longlong *)((longlong)this->ComponentData + lVar29);
        uVar26 = uVar27 & 0x8000000f;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
        }
        uVar32 = uVar13;
        uVar34 = uVar14;
        uVar35 = uVar15;
        uVar36 = uVar16;
        uVar37 = uVar17;
        uVar38 = uVar18;
        uVar39 = uVar19;
        uVar40 = uVar20;
        uVar41 = uVar13;
        uVar42 = uVar14;
        uVar43 = uVar15;
        uVar44 = uVar16;
        uVar45 = uVar17;
        uVar46 = uVar18;
        uVar47 = uVar19;
        uVar48 = uVar20;
        do {
          psVar1 = (short *)(lVar31 + lVar25 * 2);
          sVar3 = *psVar1;
          sVar4 = psVar1[1];
          sVar5 = psVar1[2];
          sVar6 = psVar1[3];
          sVar7 = psVar1[4];
          sVar8 = psVar1[5];
          sVar9 = psVar1[6];
          sVar10 = psVar1[7];
          uVar32 = (ushort)((short)uVar32 < sVar3) * sVar3 | ((short)uVar32 >= sVar3) * uVar32;
          uVar34 = (ushort)((short)uVar34 < sVar4) * sVar4 | ((short)uVar34 >= sVar4) * uVar34;
          uVar35 = (ushort)((short)uVar35 < sVar5) * sVar5 | ((short)uVar35 >= sVar5) * uVar35;
          uVar36 = (ushort)((short)uVar36 < sVar6) * sVar6 | ((short)uVar36 >= sVar6) * uVar36;
          uVar37 = (ushort)((short)uVar37 < sVar7) * sVar7 | ((short)uVar37 >= sVar7) * uVar37;
          uVar38 = (ushort)((short)uVar38 < sVar8) * sVar8 | ((short)uVar38 >= sVar8) * uVar38;
          uVar39 = (ushort)((short)uVar39 < sVar9) * sVar9 | ((short)uVar39 >= sVar9) * uVar39;
          uVar40 = (ushort)((short)uVar40 < sVar10) * sVar10 | ((short)uVar40 >= sVar10) * uVar40;
          psVar1 = (short *)(lVar31 + 0x10 + lVar25 * 2);
          sVar3 = *psVar1;
          sVar4 = psVar1[1];
          sVar5 = psVar1[2];
          sVar6 = psVar1[3];
          sVar7 = psVar1[4];
          sVar8 = psVar1[5];
          sVar9 = psVar1[6];
          sVar10 = psVar1[7];
          lVar25 = lVar25 + 0x10;
          uVar41 = (ushort)((short)uVar41 < sVar3) * sVar3 | ((short)uVar41 >= sVar3) * uVar41;
          uVar42 = (ushort)((short)uVar42 < sVar4) * sVar4 | ((short)uVar42 >= sVar4) * uVar42;
          uVar43 = (ushort)((short)uVar43 < sVar5) * sVar5 | ((short)uVar43 >= sVar5) * uVar43;
          uVar44 = (ushort)((short)uVar44 < sVar6) * sVar6 | ((short)uVar44 >= sVar6) * uVar44;
          uVar45 = (ushort)((short)uVar45 < sVar7) * sVar7 | ((short)uVar45 >= sVar7) * uVar45;
          uVar46 = (ushort)((short)uVar46 < sVar8) * sVar8 | ((short)uVar46 >= sVar8) * uVar46;
          uVar47 = (ushort)((short)uVar47 < sVar9) * sVar9 | ((short)uVar47 >= sVar9) * uVar47;
          uVar48 = (ushort)((short)uVar48 < sVar10) * sVar10 | ((short)uVar48 >= sVar10) * uVar48;
        } while (lVar25 < (int)(uVar27 - uVar26));
        uVar32 = ((short)uVar32 < (short)uVar41) * uVar41 |
                 ((short)uVar32 >= (short)uVar41) * uVar32;
        uVar34 = ((short)uVar34 < (short)uVar42) * uVar42 |
                 ((short)uVar34 >= (short)uVar42) * uVar34;
        uVar35 = ((short)uVar35 < (short)uVar43) * uVar43 |
                 ((short)uVar35 >= (short)uVar43) * uVar35;
        uVar36 = ((short)uVar36 < (short)uVar44) * uVar44 |
                 ((short)uVar36 >= (short)uVar44) * uVar36;
        uVar37 = ((short)uVar37 < (short)uVar45) * uVar45 |
                 ((short)uVar37 >= (short)uVar45) * uVar37;
        uVar38 = ((short)uVar38 < (short)uVar46) * uVar46 |
                 ((short)uVar38 >= (short)uVar46) * uVar38;
        uVar39 = ((short)uVar39 < (short)uVar47) * uVar47 |
                 ((short)uVar39 >= (short)uVar47) * uVar39;
        uVar40 = ((short)uVar40 < (short)uVar48) * uVar48 |
                 ((short)uVar40 >= (short)uVar48) * uVar40;
        uVar32 = ((short)uVar32 < (short)uVar37) * uVar37 |
                 ((short)uVar32 >= (short)uVar37) * uVar32;
        uVar34 = ((short)uVar34 < (short)uVar38) * uVar38 |
                 ((short)uVar34 >= (short)uVar38) * uVar34;
        uVar35 = ((short)uVar35 < (short)uVar39) * uVar39 |
                 ((short)uVar35 >= (short)uVar39) * uVar35;
        uVar36 = ((short)uVar36 < (short)uVar40) * uVar40 |
                 ((short)uVar36 >= (short)uVar40) * uVar36;
        uVar32 = ((short)uVar32 < (short)uVar35) * uVar35 |
                 ((short)uVar32 >= (short)uVar35) * uVar32;
        uVar34 = ((short)uVar34 < (short)uVar36) * uVar36 |
                 ((short)uVar34 >= (short)uVar36) * uVar34;
        uVar26 = (uint)(ushort)(((short)uVar32 < (short)uVar34) * uVar34 |
                               ((short)uVar32 >= (short)uVar34) * uVar32);
      }
      if (lVar25 < lVar30) {
        do {
          uVar32 = *(ushort *)(*(longlong *)((longlong)this->ComponentData + lVar29) + lVar25 * 2);
          if ((short)uVar32 < (short)(ushort)uVar26) {
            uVar32 = (ushort)uVar26;
          }
          lVar25 = lVar25 + 1;
          uVar26 = (uint)uVar32;
        } while (lVar25 < lVar30);
      }
      uVar27 = (uVar26 & 0x7fff) * 0x2000;
      fVar24 = (float)(uVar27 + 0x38000000);
      if ((uVar27 & 0xf800000) == 0xf800000) {
        fVar24 = (float)(uVar27 + 0x70000000);
      }
      else if ((uVar27 & 0xf800000) == 0) {
        fVar24 = (float)(uVar27 + 0x38800000) + fVar12;
      }
      fVar24 = (float)((uVar26 & 0x8000) << 0x10 | (uint)fVar24);
    }
    else {
      lVar25 = 0;
      fVar24 = fVar11;
      if (lVar30 < 4) {
        if (0 < (int)uVar27) {
          lVar31 = *(longlong *)((longlong)this->ComponentData + lVar29);
          goto LAB_1492a4aed;
        }
      }
      else {
        lVar31 = *(longlong *)((longlong)this->ComponentData + lVar29);
        lVar28 = (lVar30 - 4U >> 2) + 1;
        lVar25 = lVar28 * 4;
        pfVar23 = (float *)(lVar31 + 8);
        do {
          fVar33 = pfVar23[-2];
          if (pfVar23[-2] <= fVar24) {
            fVar33 = fVar24;
          }
          if (fVar33 <= pfVar23[-1]) {
            fVar33 = pfVar23[-1];
          }
          if (fVar33 <= *pfVar23) {
            fVar33 = *pfVar23;
          }
          fVar24 = fVar33;
          if (fVar33 <= pfVar23[1]) {
            fVar24 = pfVar23[1];
          }
          lVar28 = lVar28 + -1;
          pfVar23 = pfVar23 + 4;
        } while (lVar28 != 0);
        if (lVar25 < lVar30) {
LAB_1492a4aed:
          pfVar23 = (float *)(lVar31 + lVar25 * 4);
          lVar30 = lVar30 - lVar25;
          fVar33 = fVar24;
          do {
            fVar24 = *pfVar23;
            pfVar23 = pfVar23 + 1;
            if (fVar24 <= fVar33) {
              fVar24 = fVar33;
            }
            lVar30 = lVar30 + -1;
            fVar33 = fVar24;
          } while (lVar30 != 0);
        }
      }
    }
    (pTVar22->field0_0x0)._s_0.X = fVar24;
    lVar29 = lVar29 + 8;
    pTVar22 = (TVector<float> *)((longlong)&pTVar22->field0_0x0 + 4);
    if (0x17 < lVar29) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetMinMax @ 1492a5010

void __thiscall
FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
          (FNiagaraDataSetReaderFloat<FNiagaraPosition> *this,FNiagaraPosition *param_1,
          FNiagaraPosition *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar4 = __real_7f7fffff;
  fVar3 = __real_b8800000;
  fVar2 = __real_ff7fffff;
  lVar13 = 0;
  lVar18 = (longlong)param_2 - (longlong)param_1;
  do {
    if (this->bIsValid == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                         ,0x82,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar11 = this->NumInstances;
    uVar14 = (ulonglong)uVar11;
    if (this->bIsFloat == false) {
      uVar12 = 0x7c00;
      uVar7 = 0xfc00;
      if (0 < (int)uVar11) {
        puVar15 = *(ushort **)((longlong)this->ComponentData + lVar13);
        do {
          uVar10 = *puVar15;
          puVar15 = puVar15 + 1;
          uVar5 = uVar10;
          if ((short)uVar12 < (short)uVar10) {
            uVar5 = uVar12;
          }
          uVar12 = uVar5;
          if ((short)uVar10 < (short)(ushort)uVar7) {
            uVar10 = (ushort)uVar7;
          }
          uVar7 = (uint)uVar10;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      uVar11 = (uVar12 & 0x7fff) * 0x2000;
      fVar20 = (float)(uVar11 + 0x38000000);
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar20 = (float)(uVar11 + 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar20 = (float)(uVar11 + 0x38800000) + fVar3;
      }
      *(uint *)param_1 = (uVar12 & 0x8000) << 0x10 | (uint)fVar20;
      uVar11 = (uVar7 & 0x7fff) * 0x2000;
      fVar20 = (float)(uVar11 + 0x38000000);
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar20 = (float)(uVar11 + 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar20 = (float)(uVar11 + 0x38800000) + fVar3;
      }
      *(uint *)(lVar18 + (longlong)param_1) = (uVar7 & 0x8000) << 0x10 | (uint)fVar20;
    }
    else {
      iVar16 = 0;
      lVar8 = 0;
      fVar20 = fVar4;
      fVar22 = fVar2;
      if ((int)uVar11 < 4) {
        fVar19 = fVar4;
        fVar21 = fVar2;
        if (0 < (int)uVar11) {
          lVar17 = *(longlong *)((longlong)this->ComponentData + lVar13);
          goto LAB_1492a513b;
        }
      }
      else {
        lVar17 = *(longlong *)((longlong)this->ComponentData + lVar13);
        uVar7 = (uVar11 - 4 >> 2) + 1;
        uVar14 = (ulonglong)uVar7;
        iVar16 = uVar7 * 4;
        lVar8 = (ulonglong)uVar7 * 4;
        pfVar9 = (float *)(lVar17 + 8);
        do {
          fVar19 = pfVar9[-2];
          fVar21 = fVar19;
          if (fVar19 <= fVar22) {
            fVar21 = fVar22;
          }
          if (fVar20 <= fVar19) {
            fVar19 = fVar20;
          }
          if (pfVar9[-1] <= fVar19) {
            fVar19 = pfVar9[-1];
          }
          if (fVar21 <= pfVar9[-1]) {
            fVar21 = pfVar9[-1];
          }
          if (*pfVar9 <= fVar19) {
            fVar19 = *pfVar9;
          }
          if (fVar21 <= *pfVar9) {
            fVar21 = *pfVar9;
          }
          fVar20 = fVar19;
          if (pfVar9[1] <= fVar19) {
            fVar20 = pfVar9[1];
          }
          fVar22 = fVar21;
          if (fVar21 <= pfVar9[1]) {
            fVar22 = pfVar9[1];
          }
          uVar14 = uVar14 - 1;
          pfVar9 = pfVar9 + 4;
        } while (uVar14 != 0);
        if ((int)uVar11 <= iVar16) {
          *(float *)param_1 = fVar20;
          *(float *)(lVar18 + (longlong)param_1) = fVar22;
          goto LAB_1492a5293;
        }
LAB_1492a513b:
        pfVar9 = (float *)(lVar17 + lVar8 * 4);
        uVar14 = (ulonglong)(uVar11 - iVar16);
        do {
          fVar19 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar21 = fVar19;
          if (fVar19 <= fVar22) {
            fVar21 = fVar22;
          }
          if (fVar20 <= fVar19) {
            fVar19 = fVar20;
          }
          uVar14 = uVar14 - 1;
          fVar20 = fVar19;
          fVar22 = fVar21;
        } while (uVar14 != 0);
      }
      *(float *)param_1 = fVar19;
      *(float *)(lVar18 + (longlong)param_1) = fVar21;
    }
LAB_1492a5293:
    param_1 = (FNiagaraPosition *)&param_1->field_0x4;
    lVar13 = lVar13 + 8;
    if (0x17 < lVar13) {
      return;
    }
  } while( true );
}

// GetMax @ 1492f0350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FNiagaraDataSetReaderFloat<float>::GetMax(FNiagaraDataSetReaderFloat<float> *this)

{
  short *psVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  bool bVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uchar *puVar19;
  float fVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  
  if ((this->bIsValid == false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                          ,0x6a,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    fVar20 = (float)(*pcVar3)();
    return fVar20;
  }
  uVar16 = this->NumInstances;
  lVar17 = (longlong)(int)uVar16;
  lVar14 = 0;
  if (this->bIsFloat == false) {
    uVar15 = 0xfffffc00;
    if ((0 < (int)uVar16) && (0xf < uVar16)) {
      uVar15 = uVar16 & 0x8000000f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
      }
      uVar21 = ___xmm_fc00fc00fc00fc00fc00fc00fc00fc00;
      uVar22 = _UNK_151dce442;
      uVar23 = _UNK_151dce444;
      uVar24 = _UNK_151dce446;
      uVar25 = _UNK_151dce448;
      uVar26 = _UNK_151dce44a;
      uVar27 = _UNK_151dce44c;
      uVar28 = _UNK_151dce44e;
      uVar29 = ___xmm_fc00fc00fc00fc00fc00fc00fc00fc00;
      uVar30 = _UNK_151dce442;
      uVar31 = _UNK_151dce444;
      uVar32 = _UNK_151dce446;
      uVar33 = _UNK_151dce448;
      uVar34 = _UNK_151dce44a;
      uVar35 = _UNK_151dce44c;
      uVar36 = _UNK_151dce44e;
      do {
        psVar1 = (short *)(this->ComponentData[0] + lVar14 * 2);
        sVar4 = *psVar1;
        sVar5 = psVar1[1];
        sVar6 = psVar1[2];
        sVar7 = psVar1[3];
        sVar8 = psVar1[4];
        sVar9 = psVar1[5];
        sVar10 = psVar1[6];
        sVar11 = psVar1[7];
        uVar21 = (ushort)((short)uVar21 < sVar4) * sVar4 | ((short)uVar21 >= sVar4) * uVar21;
        uVar22 = (ushort)((short)uVar22 < sVar5) * sVar5 | ((short)uVar22 >= sVar5) * uVar22;
        uVar23 = (ushort)((short)uVar23 < sVar6) * sVar6 | ((short)uVar23 >= sVar6) * uVar23;
        uVar24 = (ushort)((short)uVar24 < sVar7) * sVar7 | ((short)uVar24 >= sVar7) * uVar24;
        uVar25 = (ushort)((short)uVar25 < sVar8) * sVar8 | ((short)uVar25 >= sVar8) * uVar25;
        uVar26 = (ushort)((short)uVar26 < sVar9) * sVar9 | ((short)uVar26 >= sVar9) * uVar26;
        uVar27 = (ushort)((short)uVar27 < sVar10) * sVar10 | ((short)uVar27 >= sVar10) * uVar27;
        uVar28 = (ushort)((short)uVar28 < sVar11) * sVar11 | ((short)uVar28 >= sVar11) * uVar28;
        psVar1 = (short *)(this->ComponentData[0] + lVar14 * 2 + 0x10);
        sVar4 = *psVar1;
        sVar5 = psVar1[1];
        sVar6 = psVar1[2];
        sVar7 = psVar1[3];
        sVar8 = psVar1[4];
        sVar9 = psVar1[5];
        sVar10 = psVar1[6];
        sVar11 = psVar1[7];
        lVar14 = lVar14 + 0x10;
        uVar29 = (ushort)((short)uVar29 < sVar4) * sVar4 | ((short)uVar29 >= sVar4) * uVar29;
        uVar30 = (ushort)((short)uVar30 < sVar5) * sVar5 | ((short)uVar30 >= sVar5) * uVar30;
        uVar31 = (ushort)((short)uVar31 < sVar6) * sVar6 | ((short)uVar31 >= sVar6) * uVar31;
        uVar32 = (ushort)((short)uVar32 < sVar7) * sVar7 | ((short)uVar32 >= sVar7) * uVar32;
        uVar33 = (ushort)((short)uVar33 < sVar8) * sVar8 | ((short)uVar33 >= sVar8) * uVar33;
        uVar34 = (ushort)((short)uVar34 < sVar9) * sVar9 | ((short)uVar34 >= sVar9) * uVar34;
        uVar35 = (ushort)((short)uVar35 < sVar10) * sVar10 | ((short)uVar35 >= sVar10) * uVar35;
        uVar36 = (ushort)((short)uVar36 < sVar11) * sVar11 | ((short)uVar36 >= sVar11) * uVar36;
      } while (lVar14 < (int)(uVar16 - uVar15));
      uVar21 = ((short)uVar21 < (short)uVar29) * uVar29 | ((short)uVar21 >= (short)uVar29) * uVar21;
      uVar22 = ((short)uVar22 < (short)uVar30) * uVar30 | ((short)uVar22 >= (short)uVar30) * uVar22;
      uVar23 = ((short)uVar23 < (short)uVar31) * uVar31 | ((short)uVar23 >= (short)uVar31) * uVar23;
      uVar24 = ((short)uVar24 < (short)uVar32) * uVar32 | ((short)uVar24 >= (short)uVar32) * uVar24;
      uVar25 = ((short)uVar25 < (short)uVar33) * uVar33 | ((short)uVar25 >= (short)uVar33) * uVar25;
      uVar26 = ((short)uVar26 < (short)uVar34) * uVar34 | ((short)uVar26 >= (short)uVar34) * uVar26;
      uVar27 = ((short)uVar27 < (short)uVar35) * uVar35 | ((short)uVar27 >= (short)uVar35) * uVar27;
      uVar28 = ((short)uVar28 < (short)uVar36) * uVar36 | ((short)uVar28 >= (short)uVar36) * uVar28;
      uVar21 = ((short)uVar21 < (short)uVar25) * uVar25 | ((short)uVar21 >= (short)uVar25) * uVar21;
      uVar22 = ((short)uVar22 < (short)uVar26) * uVar26 | ((short)uVar22 >= (short)uVar26) * uVar22;
      uVar23 = ((short)uVar23 < (short)uVar27) * uVar27 | ((short)uVar23 >= (short)uVar27) * uVar23;
      uVar24 = ((short)uVar24 < (short)uVar28) * uVar28 | ((short)uVar24 >= (short)uVar28) * uVar24;
      uVar21 = ((short)uVar21 < (short)uVar23) * uVar23 | ((short)uVar21 >= (short)uVar23) * uVar21;
      uVar22 = ((short)uVar22 < (short)uVar24) * uVar24 | ((short)uVar22 >= (short)uVar24) * uVar22;
      uVar15 = (uint)(ushort)(((short)uVar21 < (short)uVar22) * uVar22 |
                             ((short)uVar21 >= (short)uVar22) * uVar21);
    }
    if (lVar14 < lVar17) {
      do {
        uVar21 = *(ushort *)(this->ComponentData[0] + lVar14 * 2);
        if ((short)*(ushort *)(this->ComponentData[0] + lVar14 * 2) < (short)(ushort)uVar15) {
          uVar21 = (ushort)uVar15;
        }
        lVar14 = lVar14 + 1;
        uVar15 = (uint)uVar21;
      } while (lVar14 < lVar17);
    }
    uVar16 = (uVar15 & 0x7fff) * 0x2000;
    fVar20 = (float)(uVar16 + 0x38000000);
    if ((uVar16 & 0xf800000) == 0xf800000) {
      fVar20 = (float)(uVar16 + 0x70000000);
    }
    else if ((uVar16 & 0xf800000) == 0) {
      fVar20 = (float)(uVar16 + 0x38800000) + __real_b8800000;
    }
    return (float)((uVar15 & 0x8000) << 0x10 | (uint)fVar20);
  }
  fVar20 = __real_ff7fffff;
  if (lVar17 < 4) {
    if ((int)uVar16 < 1) {
      return __real_ff7fffff;
    }
    puVar19 = this->ComponentData[0];
  }
  else {
    puVar19 = this->ComponentData[0];
    lVar18 = (lVar17 - 4U >> 2) + 1;
    lVar14 = lVar18 * 4;
    pfVar13 = (float *)(puVar19 + 8);
    do {
      fVar2 = pfVar13[-2];
      if (pfVar13[-2] <= fVar20) {
        fVar2 = fVar20;
      }
      if (fVar2 <= pfVar13[-1]) {
        fVar2 = pfVar13[-1];
      }
      if (fVar2 <= *pfVar13) {
        fVar2 = *pfVar13;
      }
      fVar20 = fVar2;
      if (fVar2 <= pfVar13[1]) {
        fVar20 = pfVar13[1];
      }
      lVar18 = lVar18 + -1;
      pfVar13 = pfVar13 + 4;
    } while (lVar18 != 0);
    if (lVar17 <= lVar14) {
      return fVar20;
    }
  }
  pfVar13 = (float *)(puVar19 + lVar14 * 4);
  lVar17 = lVar17 - lVar14;
  do {
    fVar2 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    if (fVar2 <= fVar20) {
      fVar2 = fVar20;
    }
    lVar17 = lVar17 + -1;
    fVar20 = fVar2;
  } while (lVar17 != 0);
  return fVar2;
}

// FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> @ 149331cb0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> * __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
          (FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *this,FNiagaraDataBuffer *param_1,
          bool param_2,int param_3)

{
  this->bIsValid = false;
  this->bIsFloat = param_2;
  this->NumInstances = 0;
  this->ComponentData[0] = (uchar *)0x0;
  this->ComponentData[1] = (uchar *)0x0;
  this->ComponentData[2] = (uchar *)0x0;
  this->ComponentData[3] = (uchar *)0x0;
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
      this->ComponentData[3] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 3) * param_1->FloatStride);
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
    this->ComponentData[3] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 3) * param_1->HalfStride)
    ;
    this->NumInstances = param_1->NumInstances;
  }
  return this;
}

// FNiagaraDataSetReaderFloat<FLinearColor> @ 149331da0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<FLinearColor> * __thiscall
FNiagaraDataSetReaderFloat<FLinearColor>::FNiagaraDataSetReaderFloat<FLinearColor>
          (FNiagaraDataSetReaderFloat<FLinearColor> *this,FNiagaraDataBuffer *param_1,bool param_2,
          int param_3)

{
  this->bIsValid = false;
  this->bIsFloat = param_2;
  this->NumInstances = 0;
  this->ComponentData[0] = (uchar *)0x0;
  this->ComponentData[1] = (uchar *)0x0;
  this->ComponentData[2] = (uchar *)0x0;
  this->ComponentData[3] = (uchar *)0x0;
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
      this->ComponentData[3] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (param_3 + 3) * param_1->FloatStride);
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
    this->ComponentData[3] =
         (uchar *)((param_1->HalfData).AllocatorInstance.Data + (param_3 + 3) * param_1->HalfStride)
    ;
    this->NumInstances = param_1->NumInstances;
  }
  return this;
}

// Get @ 14934e560

float __thiscall
FNiagaraDataSetReaderFloat<float>::Get(FNiagaraDataSetReaderFloat<float> *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  if ((this->bIsValid == false) || (this->NumInstances < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  if (this->bIsFloat != false) {
    return *(float *)(this->ComponentData[0] + (longlong)param_1 * 4);
  }
  uVar1 = *(ushort *)(this->ComponentData[0] + (longlong)param_1 * 2);
  uVar4 = (uVar1 & 0x7fff) * 0x2000;
  fVar5 = (float)(uVar4 + 0x38000000);
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar5 = (float)(uVar4 + 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar5 = (float)(uVar4 + 0x38800000) + __real_b8800000;
  }
  return (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar5);
}

// GetMax @ 1493e80c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<float> __thiscall
FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_>::GetMax
          (FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> *this)

{
  short *psVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  bool bVar21;
  TVector2<float> TVar22;
  float *pfVar23;
  float fVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  TVector2<float>_u_0 in_RDX;
  longlong lVar28;
  TVector2<float>_u_0 TVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ushort uVar33;
  float fVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  
  uVar20 = _UNK_151dce44e;
  uVar19 = _UNK_151dce44c;
  uVar18 = _UNK_151dce44a;
  uVar17 = _UNK_151dce448;
  uVar16 = _UNK_151dce446;
  uVar15 = _UNK_151dce444;
  uVar14 = _UNK_151dce442;
  uVar13 = ___xmm_fc00fc00fc00fc00fc00fc00fc00fc00;
  fVar12 = __real_b8800000;
  fVar11 = __real_ff7fffff;
  lVar30 = 0;
  TVar29 = in_RDX;
  do {
    if ((this->bIsValid == false) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                            ,0x6a,L""), bVar21)) {
      pcVar2 = (code *)swi(3);
      TVar22.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar22.field0_0x0;
    }
    uVar27 = this->NumInstances;
    lVar31 = (longlong)(int)uVar27;
    if (this->bIsFloat == false) {
      lVar25 = 0;
      uVar26 = 0xfc00;
      if ((0 < (int)uVar27) && (0xf < uVar27)) {
        lVar32 = *(longlong *)((longlong)this->ComponentData + lVar30);
        uVar26 = uVar27 & 0x8000000f;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
        }
        uVar33 = uVar13;
        uVar35 = uVar14;
        uVar36 = uVar15;
        uVar37 = uVar16;
        uVar38 = uVar17;
        uVar39 = uVar18;
        uVar40 = uVar19;
        uVar41 = uVar20;
        uVar42 = uVar13;
        uVar43 = uVar14;
        uVar44 = uVar15;
        uVar45 = uVar16;
        uVar46 = uVar17;
        uVar47 = uVar18;
        uVar48 = uVar19;
        uVar49 = uVar20;
        do {
          psVar1 = (short *)(lVar32 + lVar25 * 2);
          sVar3 = *psVar1;
          sVar4 = psVar1[1];
          sVar5 = psVar1[2];
          sVar6 = psVar1[3];
          sVar7 = psVar1[4];
          sVar8 = psVar1[5];
          sVar9 = psVar1[6];
          sVar10 = psVar1[7];
          uVar33 = (ushort)((short)uVar33 < sVar3) * sVar3 | ((short)uVar33 >= sVar3) * uVar33;
          uVar35 = (ushort)((short)uVar35 < sVar4) * sVar4 | ((short)uVar35 >= sVar4) * uVar35;
          uVar36 = (ushort)((short)uVar36 < sVar5) * sVar5 | ((short)uVar36 >= sVar5) * uVar36;
          uVar37 = (ushort)((short)uVar37 < sVar6) * sVar6 | ((short)uVar37 >= sVar6) * uVar37;
          uVar38 = (ushort)((short)uVar38 < sVar7) * sVar7 | ((short)uVar38 >= sVar7) * uVar38;
          uVar39 = (ushort)((short)uVar39 < sVar8) * sVar8 | ((short)uVar39 >= sVar8) * uVar39;
          uVar40 = (ushort)((short)uVar40 < sVar9) * sVar9 | ((short)uVar40 >= sVar9) * uVar40;
          uVar41 = (ushort)((short)uVar41 < sVar10) * sVar10 | ((short)uVar41 >= sVar10) * uVar41;
          psVar1 = (short *)(lVar32 + 0x10 + lVar25 * 2);
          sVar3 = *psVar1;
          sVar4 = psVar1[1];
          sVar5 = psVar1[2];
          sVar6 = psVar1[3];
          sVar7 = psVar1[4];
          sVar8 = psVar1[5];
          sVar9 = psVar1[6];
          sVar10 = psVar1[7];
          lVar25 = lVar25 + 0x10;
          uVar42 = (ushort)((short)uVar42 < sVar3) * sVar3 | ((short)uVar42 >= sVar3) * uVar42;
          uVar43 = (ushort)((short)uVar43 < sVar4) * sVar4 | ((short)uVar43 >= sVar4) * uVar43;
          uVar44 = (ushort)((short)uVar44 < sVar5) * sVar5 | ((short)uVar44 >= sVar5) * uVar44;
          uVar45 = (ushort)((short)uVar45 < sVar6) * sVar6 | ((short)uVar45 >= sVar6) * uVar45;
          uVar46 = (ushort)((short)uVar46 < sVar7) * sVar7 | ((short)uVar46 >= sVar7) * uVar46;
          uVar47 = (ushort)((short)uVar47 < sVar8) * sVar8 | ((short)uVar47 >= sVar8) * uVar47;
          uVar48 = (ushort)((short)uVar48 < sVar9) * sVar9 | ((short)uVar48 >= sVar9) * uVar48;
          uVar49 = (ushort)((short)uVar49 < sVar10) * sVar10 | ((short)uVar49 >= sVar10) * uVar49;
        } while (lVar25 < (int)(uVar27 - uVar26));
        uVar33 = ((short)uVar33 < (short)uVar42) * uVar42 |
                 ((short)uVar33 >= (short)uVar42) * uVar33;
        uVar35 = ((short)uVar35 < (short)uVar43) * uVar43 |
                 ((short)uVar35 >= (short)uVar43) * uVar35;
        uVar36 = ((short)uVar36 < (short)uVar44) * uVar44 |
                 ((short)uVar36 >= (short)uVar44) * uVar36;
        uVar37 = ((short)uVar37 < (short)uVar45) * uVar45 |
                 ((short)uVar37 >= (short)uVar45) * uVar37;
        uVar38 = ((short)uVar38 < (short)uVar46) * uVar46 |
                 ((short)uVar38 >= (short)uVar46) * uVar38;
        uVar39 = ((short)uVar39 < (short)uVar47) * uVar47 |
                 ((short)uVar39 >= (short)uVar47) * uVar39;
        uVar40 = ((short)uVar40 < (short)uVar48) * uVar48 |
                 ((short)uVar40 >= (short)uVar48) * uVar40;
        uVar41 = ((short)uVar41 < (short)uVar49) * uVar49 |
                 ((short)uVar41 >= (short)uVar49) * uVar41;
        uVar33 = ((short)uVar33 < (short)uVar38) * uVar38 |
                 ((short)uVar33 >= (short)uVar38) * uVar33;
        uVar35 = ((short)uVar35 < (short)uVar39) * uVar39 |
                 ((short)uVar35 >= (short)uVar39) * uVar35;
        uVar36 = ((short)uVar36 < (short)uVar40) * uVar40 |
                 ((short)uVar36 >= (short)uVar40) * uVar36;
        uVar37 = ((short)uVar37 < (short)uVar41) * uVar41 |
                 ((short)uVar37 >= (short)uVar41) * uVar37;
        uVar33 = ((short)uVar33 < (short)uVar36) * uVar36 |
                 ((short)uVar33 >= (short)uVar36) * uVar33;
        uVar35 = ((short)uVar35 < (short)uVar37) * uVar37 |
                 ((short)uVar35 >= (short)uVar37) * uVar35;
        uVar26 = (uint)(ushort)(((short)uVar33 < (short)uVar35) * uVar35 |
                               ((short)uVar33 >= (short)uVar35) * uVar33);
      }
      if (lVar25 < lVar31) {
        do {
          uVar33 = *(ushort *)(*(longlong *)((longlong)this->ComponentData + lVar30) + lVar25 * 2);
          if ((short)uVar33 < (short)(ushort)uVar26) {
            uVar33 = (ushort)uVar26;
          }
          lVar25 = lVar25 + 1;
          uVar26 = (uint)uVar33;
        } while (lVar25 < lVar31);
      }
      uVar27 = (uVar26 & 0x7fff) * 0x2000;
      fVar24 = (float)(uVar27 + 0x38000000);
      if ((uVar27 & 0xf800000) == 0xf800000) {
        fVar24 = (float)(uVar27 + 0x70000000);
      }
      else if ((uVar27 & 0xf800000) == 0) {
        fVar24 = (float)(uVar27 + 0x38800000) + fVar12;
      }
      fVar24 = (float)((uVar26 & 0x8000) << 0x10 | (uint)fVar24);
    }
    else {
      lVar25 = 0;
      fVar24 = fVar11;
      if (lVar31 < 4) {
        if (0 < (int)uVar27) {
          lVar32 = *(longlong *)((longlong)this->ComponentData + lVar30);
          goto LAB_1493e81bd;
        }
      }
      else {
        lVar32 = *(longlong *)((longlong)this->ComponentData + lVar30);
        lVar28 = (lVar31 - 4U >> 2) + 1;
        lVar25 = lVar28 * 4;
        pfVar23 = (float *)(lVar32 + 8);
        do {
          fVar34 = pfVar23[-2];
          if (pfVar23[-2] <= fVar24) {
            fVar34 = fVar24;
          }
          if (fVar34 <= pfVar23[-1]) {
            fVar34 = pfVar23[-1];
          }
          if (fVar34 <= *pfVar23) {
            fVar34 = *pfVar23;
          }
          fVar24 = fVar34;
          if (fVar34 <= pfVar23[1]) {
            fVar24 = pfVar23[1];
          }
          lVar28 = lVar28 + -1;
          pfVar23 = pfVar23 + 4;
        } while (lVar28 != 0);
        if (lVar25 < lVar31) {
LAB_1493e81bd:
          pfVar23 = (float *)(lVar32 + lVar25 * 4);
          lVar31 = lVar31 - lVar25;
          fVar34 = fVar24;
          do {
            fVar24 = *pfVar23;
            pfVar23 = pfVar23 + 1;
            if (fVar24 <= fVar34) {
              fVar24 = fVar34;
            }
            lVar31 = lVar31 + -1;
            fVar34 = fVar24;
          } while (lVar31 != 0);
        }
      }
    }
    *(float *)TVar29 = fVar24;
    lVar30 = lVar30 + 8;
    TVar29._s_0 = TVar29._s_0 + 4;
    if (0xf < lVar30) {
      return (TVector2<float>)in_RDX;
    }
  } while( true );
}

