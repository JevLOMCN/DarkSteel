// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 6

// FNormalCoderSmith @ 14ca06f60

FNormalCoderSmith * __thiscall FNormalCoderSmith::FNormalCoderSmith(FNormalCoderSmith *this)

{
  float fVar1;
  
  fVar1 = __real_3c9d466e;
  this->NPhiValue = 0x78;
  (this->NThetaTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NThetaTable).ArrayNum = 0;
  (this->NThetaTable).ArrayMax = 0;
  GenerateNThetaTable(this,0x78,fVar1,&this->NThetaTable);
  (this->MoveFrameEncoded).M[0][1] = 0.0;
  (this->MoveFrameEncoded).M[0][0] = 1.0;
  (this->MoveFrameEncoded).M[1][1] = 1.0;
  (this->MoveFrameEncoded).M[0][2] = 0.0;
  (this->MoveFrameEncoded).M[0][3] = 0.0;
  (this->MoveFrameEncoded).M[1][0] = 0.0;
  (this->MoveFrameEncoded).M[1][2] = 0.0;
  (this->MoveFrameEncoded).M[1][3] = 0.0;
  (this->MoveFrameEncoded).M[2][0] = 0.0;
  (this->MoveFrameEncoded).M[2][1] = 0.0;
  (this->MoveFrameEncoded).M[2][2] = 1.0;
  (this->MoveFrameEncoded).M[3][3] = 1.0;
  (this->MoveFrameDecoded).M[0][0] = 1.0;
  (this->MoveFrameDecoded).M[1][1] = 1.0;
  (this->MoveFrameEncoded).M[2][3] = 0.0;
  (this->MoveFrameEncoded).M[3][0] = 0.0;
  (this->MoveFrameEncoded).M[3][1] = 0.0;
  (this->MoveFrameEncoded).M[3][2] = 0.0;
  (this->MoveFrameDecoded).M[0][1] = 0.0;
  (this->MoveFrameDecoded).M[0][2] = 0.0;
  (this->MoveFrameDecoded).M[0][3] = 0.0;
  (this->MoveFrameDecoded).M[1][0] = 0.0;
  (this->MoveFrameDecoded).M[1][2] = 0.0;
  (this->MoveFrameDecoded).M[1][3] = 0.0;
  (this->MoveFrameDecoded).M[2][0] = 0.0;
  (this->MoveFrameDecoded).M[2][1] = 0.0;
  (this->MoveFrameDecoded).M[2][2] = 1.0;
  (this->MoveFrameDecoded).M[3][3] = 1.0;
  (this->MoveFrameDecoded).M[2][3] = 0.0;
  (this->MoveFrameDecoded).M[3][0] = 0.0;
  (this->MoveFrameDecoded).M[3][1] = 0.0;
  (this->MoveFrameDecoded).M[3][2] = 0.0;
  return this;
}

// CalcNTheta @ 14ca0f8d0

int __thiscall FNormalCoderSmith::CalcNTheta(FNormalCoderSmith *this,int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = ((float)param_1 * __real_40490fdb) / (float)(this->NPhiValue + -1);
  fVar6 = __real_40490fdb / (float)(this->NPhiValue * 2 + -2) + fVar5;
  fVar2 = sinf(fVar6);
  fVar3 = sinf(fVar5);
  if (fVar2 * fVar3 == 0.0) {
    iVar1 = 1;
  }
  else {
    fVar4 = cosf(param_2);
    fVar5 = cosf(fVar5);
    fVar6 = cosf(fVar6);
    fVar3 = (fVar4 - fVar5 * fVar6) / (fVar2 * fVar3);
    fVar2 = __real_bf800000;
    if ((__real_bf800000 <= fVar3) && (fVar2 = fVar3, __real_3f800000 <= fVar3)) {
      fVar2 = __real_3f800000;
    }
    fVar2 = acosf(fVar2);
    iVar1 = -((int)ROUND(__real_bf000000 - __real_40c90fdb / fVar2) >> 1);
  }
  return iVar1;
}

// Decode @ 14ca11c00

TVector<double> * __thiscall
FNormalCoderSmith::Decode
          (FNormalCoderSmith *this,TVector<double> *__return_storage_ptr__,FEncodedNormal *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  TVector<double> *pTVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar7;
  double dVar8;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  uint uVar16;
  
  uVar16 = 0;
  if (param_1->JIndex < (this->NThetaTable).ArrayNum) {
    uVar16 = (uint)~param_1->JIndex >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  dVar9 = __real_3ff0000000000000;
  dVar3 = (this->MoveFrameDecoded).M[1][2];
  dVar10 = 0.0;
  dVar7 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
  dVar11 = extraout_XMM0_Qb_00 * extraout_XMM0_Qa;
  dVar14 = (this->MoveFrameDecoded).M[0][2];
  dVar8 = dVar11 * (this->MoveFrameDecoded).M[0][0] + (this->MoveFrameDecoded).M[1][0] * dVar7 +
          (this->MoveFrameDecoded).M[2][0] * extraout_XMM0_Qb +
          (this->MoveFrameDecoded).M[3][0] * 0.0;
  uVar16 = (uint)((ulonglong)dVar8 >> 0x20);
  dVar12 = dVar11 * (this->MoveFrameDecoded).M[0][1] + (this->MoveFrameDecoded).M[1][1] * dVar7 +
           (this->MoveFrameDecoded).M[2][1] * extraout_XMM0_Qb +
           (this->MoveFrameDecoded).M[3][1] * 0.0;
  dVar1 = (this->MoveFrameDecoded).M[3][2];
  dVar13 = (this->MoveFrameDecoded).M[2][2];
  auVar4._4_8_ = extraout_XMM0_Qa;
  auVar4._0_4_ = uVar16;
  auVar15._0_8_ = auVar4._0_8_ << 0x20;
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8;
  dVar3 = dVar3 * dVar7 + dVar11 * dVar14 + dVar13 * extraout_XMM0_Qb + dVar1 * 0.0;
  dVar14 = auVar15._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14;
  if (((dVar8 == 0.0) && (dVar14 == 0.0)) && (dVar3 == dVar9)) {
    dVar13 = 0.0;
    dVar7 = 0.0;
    dVar3 = 0.0;
    dVar14 = 0.0;
    dVar8 = 0.0;
    dVar12 = dVar9;
    dVar1 = dVar9;
  }
  else {
    dVar13 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar7 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar10 = (double)(float)(dVar9 / (dVar8 * dVar8 + dVar12 * dVar14));
    dVar12 = (double)(float)(dVar10 * dVar12 * dVar14 * (dVar9 - dVar3) + dVar3);
    dVar10 = (double)(float)(dVar14 * dVar8 * dVar10 * (dVar3 - dVar9));
    dVar3 = (double)(float)(double)CONCAT44(uVar16 ^ __xmm_80000000000000008000000000000000._4_4_,
                                            SUB84(dVar8,0) ^
                                            (uint)__xmm_80000000000000008000000000000000);
    dVar14 = dVar3 * dVar7 - dVar10 * dVar1;
    dVar9 = dVar12 * dVar1 - dVar3 * dVar13;
    dVar8 = dVar10 * dVar13 - dVar12 * dVar7;
  }
  (this->MoveFrameDecoded).M[0][0] = dVar12;
  (this->MoveFrameDecoded).M[0][1] = dVar10;
  (this->MoveFrameDecoded).M[0][2] = dVar3;
  (this->MoveFrameDecoded).M[1][0] = dVar14;
  (this->MoveFrameDecoded).M[2][2] = dVar1;
  (this->MoveFrameDecoded).M[1][1] = dVar9;
  (this->MoveFrameDecoded).M[1][2] = dVar8;
  (this->MoveFrameDecoded).M[2][0] = dVar13;
  (this->MoveFrameDecoded).M[2][1] = dVar7;
  return __return_storage_ptr__;
}

// Encode @ 14ca150e0

FEncodedNormal __thiscall
FNormalCoderSmith::Encode(FNormalCoderSmith *this,TVector<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FEncodedNormal FVar7;
  uint uVar8;
  double *in_R8;
  double dVar9;
  double dVar10;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar14 = __real_3ff0000000000000;
  dVar9 = in_R8[2];
  dVar13 = 0.0;
  dVar12 = *in_R8;
  dVar17 = in_R8[1];
  dVar10 = dVar17 * (this->MoveFrameEncoded).M[0][1] + dVar12 * (this->MoveFrameEncoded).M[0][0] +
           dVar9 * (this->MoveFrameEncoded).M[0][2] + (this->MoveFrameEncoded).M[0][3] * 0.0;
  dVar16 = dVar17 * (this->MoveFrameEncoded).M[1][1] + dVar12 * (this->MoveFrameEncoded).M[1][0] +
           dVar9 * (this->MoveFrameEncoded).M[1][2] + (this->MoveFrameEncoded).M[1][3] * 0.0;
  dVar9 = dVar17 * (this->MoveFrameEncoded).M[2][1] + dVar12 * (this->MoveFrameEncoded).M[2][0] +
          dVar9 * (this->MoveFrameEncoded).M[2][2] + (this->MoveFrameEncoded).M[2][3] * 0.0;
  dVar12 = dVar16 * dVar16 + dVar10 * dVar10 + dVar9 * dVar9;
  if (__real_3e45798ee0000000 < dVar12) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    dVar10 = dVar10 * dVar12;
    dVar16 = dVar16 * dVar12;
    dVar9 = dVar9 * dVar12;
  }
  dVar9 = dVar9 / SQRT(dVar10 * dVar10 + dVar16 * dVar16 + dVar9 * dVar9);
  dVar12 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar9) && (dVar12 = dVar9, __real_3ff0000000000000 <= dVar9)) {
    dVar12 = __real_3ff0000000000000;
  }
  dVar9 = FGenericPlatformMath::Atan2(dVar16,dVar10);
  dVar10 = acos(dVar12);
  fVar3 = __real_3f000000;
  uVar8 = (int)ROUND((float)dVar10 * (float)(this->NPhiValue + -1) * __real_3f22f983 +
                     __real_3f000000) >> 1;
  uVar5 = 0;
  if ((int)uVar8 < (this->NThetaTable).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    FVar7 = (FEncodedNormal)(*pcVar2)();
    return FVar7;
  }
  iVar1 = *(int *)((this->NThetaTable).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  iVar6 = (int)ROUND((float)dVar9 * (float)iVar1 * __real_3ea2f983 + fVar3);
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  dVar9 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
  dVar12 = extraout_XMM0_Qb_00 * extraout_XMM0_Qa;
  dVar10 = (this->MoveFrameEncoded).M[1][0] * dVar9 + (this->MoveFrameEncoded).M[0][0] * dVar12 +
           (this->MoveFrameEncoded).M[2][0] * extraout_XMM0_Qb +
           (this->MoveFrameEncoded).M[3][0] * 0.0;
  dVar16 = (this->MoveFrameEncoded).M[1][1] * dVar9 + (this->MoveFrameEncoded).M[0][1] * dVar12 +
           (this->MoveFrameEncoded).M[2][1] * extraout_XMM0_Qb +
           (this->MoveFrameEncoded).M[3][1] * 0.0;
  dVar9 = (this->MoveFrameEncoded).M[1][2] * dVar9 + (this->MoveFrameEncoded).M[0][2] * dVar12 +
          (this->MoveFrameEncoded).M[2][2] * extraout_XMM0_Qb +
          (this->MoveFrameEncoded).M[3][2] * 0.0;
  if (((dVar10 == 0.0) && (dVar16 == 0.0)) && (dVar9 == dVar14)) {
    dVar12 = 0.0;
    dVar11 = 0.0;
    dVar15 = 0.0;
    dVar10 = 0.0;
    dVar16 = 0.0;
    dVar9 = dVar14;
    dVar17 = dVar14;
  }
  else {
    dVar13 = (double)(float)(dVar14 / (dVar10 * dVar10 + dVar16 * dVar16));
    dVar17 = (double)(float)(dVar16 * dVar16 * dVar13 * (dVar14 - dVar9) + dVar9);
    dVar13 = (double)(float)((dVar9 - dVar14) * dVar13 * dVar16 * dVar10);
    dVar12 = (double)(float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^
                                             __xmm_80000000000000008000000000000000._4_4_,
                                             SUB84(dVar10,0) ^
                                             (uint)__xmm_80000000000000008000000000000000);
    dVar11 = dVar16 * dVar12 - dVar9 * dVar13;
    dVar14 = dVar9 * dVar17 - dVar10 * dVar12;
    dVar15 = dVar10 * dVar13 - dVar16 * dVar17;
  }
  (this->MoveFrameEncoded).M[0][0] = dVar17;
  (this->MoveFrameEncoded).M[0][1] = dVar13;
  (this->MoveFrameEncoded).M[0][2] = dVar12;
  (this->MoveFrameEncoded).M[2][0] = dVar10;
  (this->MoveFrameEncoded).M[2][2] = dVar9;
  (this->MoveFrameEncoded).M[1][0] = dVar11;
  (this->MoveFrameEncoded).M[1][1] = dVar14;
  (this->MoveFrameEncoded).M[1][2] = dVar15;
  (this->MoveFrameEncoded).M[2][1] = dVar16;
  *(uint *)&param_1->field0_0x0 = uVar8;
  *(int *)((longlong)&param_1->field0_0x0 + 4) =
       (iVar1 + (int)(CONCAT44(iVar6 >> 0x1f,iVar6 >> 1) % (longlong)iVar1)) % iVar1;
  return (FEncodedNormal)param_1;
}

// GenerateNThetaTable @ 14ca19a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNormalCoderSmith::GenerateNThetaTable
          (FNormalCoderSmith *this,int param_1,float param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->NThetaTable,this->NPhiValue,Default);
  fVar6 = __real_40c90fdb;
  fVar5 = __real_bf800000;
  fVar4 = __real_40490fdb;
  fVar3 = __real_bf000000;
  fVar2 = __real_3f800000;
  iVar11 = 0;
  uVar10 = 0;
  if (0 < param_1) {
    lVar12 = 0;
    do {
      fVar16 = ((float)(int)uVar10 * fVar4) / (float)(this->NPhiValue + -1);
      fVar17 = fVar4 / (float)(this->NPhiValue * 2 + -2) + fVar16;
      fVar13 = sinf(fVar17);
      fVar14 = sinf(fVar16);
      if (fVar13 * fVar14 == 0.0) {
        iVar9 = 1;
      }
      else {
        fVar15 = cosf(param_2);
        fVar16 = cosf(fVar16);
        fVar17 = cosf(fVar17);
        fVar14 = (fVar15 - fVar16 * fVar17) / (fVar13 * fVar14);
        fVar13 = fVar5;
        if ((fVar5 <= fVar14) && (fVar13 = fVar14, fVar2 <= fVar14)) {
          fVar13 = fVar2;
        }
        fVar13 = acosf(fVar13);
        iVar9 = -((int)ROUND(fVar3 - fVar6 / fVar13) >> 1);
      }
      uVar8 = 0;
      if ((int)uVar10 < param_3->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)((param_3->AllocatorInstance).Data + lVar12) = iVar9;
      uVar8 = 0;
      if ((int)uVar10 < param_3->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + *(int *)((param_3->AllocatorInstance).Data + lVar12);
      lVar12 = lVar12 + 4;
    } while ((int)uVar10 < param_1);
  }
  if ((iVar11 == param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bEveryEntryIsOne",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\NormalCompression.cpp"
                         ,0x23,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetTotalBinCount @ 14ca1fb30

int __thiscall FNormalCoderSmith::GetTotalBinCount(FNormalCoderSmith *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (0 < this->NPhiValue) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->NThetaTable).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + *(int *)((this->NThetaTable).AllocatorInstance.Data + lVar6);
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < this->NPhiValue);
  }
  return iVar4;
}

