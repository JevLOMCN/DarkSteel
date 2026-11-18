// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14798de20

UScriptStruct * __cdecl FSplineCurves::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineCurves.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineCurves.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineCurves,(UObject *)pUVar1,L"SplineCurves");
  }
  return Z_Registration_Info_UScriptStruct_FSplineCurves.OuterSingleton;
}

// FSplineCurves @ 1479a4440

FSplineCurves * __thiscall FSplineCurves::FSplineCurves(FSplineCurves *this,FSplineCurves *param_1)

{
  FInterpCurveQuat *pFVar1;
  undefined1 *puVar2;
  FInterpCurveFloat *pFVar3;
  int iVar4;
  void *pvVar5;
  
  FInterpCurveVector::FInterpCurveVector(&this->Position,&param_1->Position);
  pFVar1 = &this->Rotation;
  *(undefined8 *)pFVar1 = 0;
  puVar2 = &(this->Rotation).field_0xc;
  iVar4 = *(int *)&(param_1->Rotation).field_0x8;
  pvVar5 = *(void **)&param_1->Rotation;
  *(int *)&(this->Rotation).field_0x8 = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,(int *)puVar2);
    memcpy(*(void **)pFVar1,pvVar5,(longlong)iVar4 << 7);
  }
  (this->Rotation).field_0x10 = (param_1->Rotation).field_0x10;
  *(undefined4 *)&(this->Rotation).field_0x14 = *(undefined4 *)&(param_1->Rotation).field_0x14;
  FInterpCurveVector::FInterpCurveVector(&this->Scale,&param_1->Scale);
  pFVar3 = &this->ReparamTable;
  *(undefined8 *)pFVar3 = 0;
  puVar2 = &(this->ReparamTable).field_0xc;
  iVar4 = *(int *)&(param_1->ReparamTable).field_0x8;
  pvVar5 = *(void **)&param_1->ReparamTable;
  *(int *)&(this->ReparamTable).field_0x8 = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,(int *)puVar2);
    memcpy(*(void **)pFVar3,pvVar5,(longlong)iVar4 * 0x14);
  }
  (this->ReparamTable).field_0x10 = (param_1->ReparamTable).field_0x10;
  *(undefined4 *)&(this->ReparamTable).field_0x14 =
       *(undefined4 *)&(param_1->ReparamTable).field_0x14;
  this->Version = param_1->Version;
  return this;
}

// operator= @ 1479aa1a0

FSplineCurves * __thiscall FSplineCurves::operator=(FSplineCurves *this,FSplineCurves *param_1)

{
  FInterpCurveQuat *pFVar1;
  FInterpCurveQuat *pFVar2;
  FInterpCurveVector *pFVar3;
  FInterpCurveVector *pFVar4;
  FInterpCurveFloat *pFVar5;
  FInterpCurveFloat *pFVar6;
  
  if (this != param_1) {
    if (*(void **)&this->Position != (void *)0x0) {
      FMemory::Free(*(void **)&this->Position);
    }
    *(undefined8 *)&this->Position = *(undefined8 *)&param_1->Position;
    *(undefined8 *)&param_1->Position = 0;
    *(undefined4 *)&(this->Position).field_0x8 = *(undefined4 *)&(param_1->Position).field_0x8;
    *(undefined4 *)&(this->Position).field_0xc = *(undefined4 *)&(param_1->Position).field_0xc;
    *(undefined8 *)&(param_1->Position).field_0x8 = 0;
  }
  pFVar1 = &param_1->Rotation;
  pFVar2 = &this->Rotation;
  (this->Position).field_0x10 = (param_1->Position).field_0x10;
  *(undefined4 *)&(this->Position).field_0x14 = *(undefined4 *)&(param_1->Position).field_0x14;
  if (pFVar2 != pFVar1) {
    if (*(void **)pFVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar2);
    }
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
    *(undefined8 *)pFVar1 = 0;
    *(undefined4 *)&(this->Rotation).field_0x8 = *(undefined4 *)&(param_1->Rotation).field_0x8;
    *(undefined4 *)&(this->Rotation).field_0xc = *(undefined4 *)&(param_1->Rotation).field_0xc;
    *(undefined8 *)&(param_1->Rotation).field_0x8 = 0;
  }
  (this->Rotation).field_0x10 = (param_1->Rotation).field_0x10;
  pFVar3 = &param_1->Scale;
  *(undefined4 *)&(this->Rotation).field_0x14 = *(undefined4 *)&(param_1->Rotation).field_0x14;
  pFVar4 = &this->Scale;
  if (pFVar4 != pFVar3) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(undefined4 *)&(this->Scale).field_0x8 = *(undefined4 *)&(param_1->Scale).field_0x8;
    *(undefined4 *)&(this->Scale).field_0xc = *(undefined4 *)&(param_1->Scale).field_0xc;
    *(undefined8 *)&(param_1->Scale).field_0x8 = 0;
  }
  (this->Scale).field_0x10 = (param_1->Scale).field_0x10;
  pFVar5 = &param_1->ReparamTable;
  *(undefined4 *)&(this->Scale).field_0x14 = *(undefined4 *)&(param_1->Scale).field_0x14;
  pFVar6 = &this->ReparamTable;
  if (pFVar6 != pFVar5) {
    if (*(void **)pFVar6 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar6);
    }
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar5;
    *(undefined8 *)pFVar5 = 0;
    *(undefined4 *)&(this->ReparamTable).field_0x8 =
         *(undefined4 *)&(param_1->ReparamTable).field_0x8;
    *(undefined4 *)&(this->ReparamTable).field_0xc =
         *(undefined4 *)&(param_1->ReparamTable).field_0xc;
    *(undefined8 *)&(param_1->ReparamTable).field_0x8 = 0;
  }
  (this->ReparamTable).field_0x10 = (param_1->ReparamTable).field_0x10;
  *(undefined4 *)&(this->ReparamTable).field_0x14 =
       *(undefined4 *)&(param_1->ReparamTable).field_0x14;
  this->Version = param_1->Version;
  return this;
}

// FromSplineInterface @ 1479c2090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSplineCurves * __cdecl
FSplineCurves::FromSplineInterface(FSplineCurves *__return_storage_ptr__,FSpline *param_1)

{
  FInterpCurveVector *pFVar1;
  FInterpCurveQuat *pFVar2;
  TVector<double>_u_0 local_28;
  
  __return_storage_ptr__->Version = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->Position = 0;
  *(undefined8 *)&(__return_storage_ptr__->Position).field_0x8 = 0;
  (__return_storage_ptr__->Position).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Position).field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->Rotation = 0;
  *(undefined8 *)&(__return_storage_ptr__->Rotation).field_0x8 = 0;
  (__return_storage_ptr__->Rotation).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Rotation).field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->Scale = 0;
  *(undefined8 *)&(__return_storage_ptr__->Scale).field_0x8 = 0;
  (__return_storage_ptr__->Scale).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Scale).field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->ReparamTable = 0;
  *(undefined8 *)&(__return_storage_ptr__->ReparamTable).field_0x8 = 0;
  (__return_storage_ptr__->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ReparamTable).field_0x14 = 0;
  pFVar1 = FSpline::GetSplinePointsPosition(param_1);
  FInterpCurveVector::operator=(&__return_storage_ptr__->Position,pFVar1);
  pFVar2 = FSpline::GetSplinePointsRotation(param_1);
  FInterpCurveQuat::operator=(&__return_storage_ptr__->Rotation,pFVar2);
  pFVar1 = FSpline::GetSplinePointsScale(param_1);
  FInterpCurveVector::operator=(&__return_storage_ptr__->Scale,pFVar1);
  local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689688;
  local_28._s_0.Z = __real_3ff0000000000000;
  UpdateSpline(__return_storage_ptr__,(bool)(__return_storage_ptr__->Position).field_0x10,false,10,
               false,0.0,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetSegmentLength @ 1479d00a0

float __thiscall
FSplineCurves::GetSegmentLength
          (FSplineCurves *this,int param_1,float param_2,bool param_3,TVector<double> *param_4)

{
  int iVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  FLegendreGaussCoefficient *pFVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  
  iVar8 = *(int *)&(this->Position).field_0x8;
  iVar1 = iVar8 + -1;
  if (-1 < param_1) {
    iVar15 = iVar1;
    if (param_3) {
      iVar15 = iVar8;
    }
    if (param_1 < iVar15) goto LAB_1479d011d;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((bClosedLoop && Index < NumPoints) || (!bClosedLoop && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                      ,0x2a2,L"");
  if (bVar16) {
    pcVar11 = (code *)swi(3);
    fVar22 = (float)(*pcVar11)();
    return fVar22;
  }
LAB_1479d011d:
  fVar22 = __real_3f800000;
  if (((param_2 < 0.0) || (__real_3f800000 < param_2)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Param >= 0.0f && Param <= 1.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                          ,0x2a3,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    fVar22 = (float)(*pcVar11)();
    return fVar22;
  }
  uVar17 = 0;
  if (param_1 < *(int *)&(this->Position).field_0x8) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    fVar22 = (float)(*pcVar11)();
    return fVar22;
  }
  lVar9 = *(longlong *)&this->Position;
  lVar20 = (longlong)param_1 * 0x58;
  uVar17 = 0;
  if (param_1 != iVar1) {
    uVar17 = param_1 + 1;
  }
  uVar21 = 0;
  if ((int)uVar17 < *(int *)&(this->Position).field_0x8) {
    uVar21 = ~uVar17 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    fVar22 = (float)(*pcVar11)();
    return fVar22;
  }
  lVar10 = *(longlong *)&this->Position;
  lVar18 = (longlong)(int)uVar17 * 0x58;
  cVar7 = *(char *)(lVar20 + 0x50 + lVar9);
  if (cVar7 == '\0') {
    dVar24 = (*(double *)(lVar18 + 0x10 + lVar10) - *(double *)(lVar20 + 0x10 + lVar9)) *
             (param_4->field0_0x0)._s_0.Y;
    dVar12 = (*(double *)(lVar18 + 0x18 + lVar10) - *(double *)(lVar20 + 0x18 + lVar9)) *
             (param_4->field0_0x0)._s_0.Z;
    dVar29 = (*(double *)(lVar18 + 8 + lVar10) - *(double *)(lVar20 + 8 + lVar9)) *
             (param_4->field0_0x0)._s_0.X;
    auVar27._0_8_ = dVar24 * dVar24 + dVar29 * dVar29 + dVar12 * dVar12;
    auVar27._8_8_ = 0;
    auVar28 = sqrtpd(auVar27,auVar27);
    fVar23 = (float)(auVar28._0_8_ * (double)param_2);
  }
  else if (cVar7 == '\x02') {
    if (param_2 == fVar22) {
      dVar29 = (*(double *)(lVar18 + 8 + lVar10) - *(double *)(lVar20 + 8 + lVar9)) *
               (param_4->field0_0x0)._s_0.X;
      dVar24 = (*(double *)(lVar18 + 0x10 + lVar10) - *(double *)(lVar20 + 0x10 + lVar9)) *
               (param_4->field0_0x0)._s_0.Y;
      dVar12 = (*(double *)(lVar18 + 0x18 + lVar10) - *(double *)(lVar20 + 0x18 + lVar9)) *
               (param_4->field0_0x0)._s_0.Z;
      auVar30._0_8_ = dVar29 * dVar29;
      auVar30._8_8_ = 0;
      auVar28._0_8_ = dVar24 * dVar24 + auVar30._0_8_ + dVar12 * dVar12;
      auVar28._8_8_ = 0;
      auVar28 = sqrtpd(auVar30,auVar28);
      fVar23 = (float)auVar28._0_8_;
    }
    else {
      fVar23 = 0.0;
    }
  }
  else {
    dVar12 = *(double *)(lVar18 + 0x20 + lVar10);
    dVar13 = *(double *)(lVar20 + 8 + lVar9) - *(double *)(lVar18 + 8 + lVar10);
    dVar24 = *(double *)(lVar20 + 0x38 + lVar9);
    dVar25 = *(double *)(lVar20 + 0x10 + lVar9) - *(double *)(lVar18 + 0x10 + lVar10);
    dVar31 = *(double *)(lVar20 + 0x18 + lVar9) - *(double *)(lVar18 + 0x18 + lVar10);
    dVar29 = *(double *)(lVar20 + 0x40 + lVar9);
    dVar4 = *(double *)(lVar18 + 0x28 + lVar10);
    dVar5 = *(double *)(lVar20 + 0x48 + lVar9);
    dVar6 = *(double *)(lVar18 + 0x30 + lVar10);
    pdVar3 = (double *)(lVar20 + 0x38 + lVar9);
    pFVar19 = LegendreGaussCoefficients;
    fVar23 = 0.0;
    do {
      dVar26 = (double)((pFVar19->Abscissa + fVar22) * param_2 * __real_3f000000);
      dVar14 = (((dVar31 * __real_4008000000000000 + dVar31 * __real_4008000000000000 +
                 (dVar6 + dVar5) * __real_4008000000000000) * dVar26 +
                (((*(double *)(lVar18 + 0x18 + lVar10) - *(double *)(lVar20 + 0x18 + lVar9)) *
                  __real_4018000000000000 - dVar5 * __real_4010000000000000) - (dVar6 + dVar6))) *
                dVar26 + *(double *)(lVar20 + 0x48 + lVar9)) * (param_4->field0_0x0)._s_0.Z;
      dVar32 = (((dVar13 * __real_4008000000000000 + dVar13 * __real_4008000000000000 +
                 (dVar12 + dVar24) * __real_4008000000000000) * dVar26 +
                (((*(double *)(lVar18 + 8 + lVar10) - *(double *)(lVar20 + 8 + lVar9)) *
                  __real_4018000000000000 - dVar24 * __real_4010000000000000) - (dVar12 + dVar12)))
                * dVar26 + *pdVar3) * (param_4->field0_0x0)._s_0.X;
      dVar26 = (((dVar25 * __real_4008000000000000 + dVar25 * __real_4008000000000000 +
                 (dVar4 + dVar29) * __real_4008000000000000) * dVar26 +
                (((*(double *)(lVar18 + 0x10 + lVar10) - *(double *)(lVar20 + 0x10 + lVar9)) *
                  __real_4018000000000000 - dVar29 * __real_4010000000000000) - (dVar4 + dVar4))) *
                dVar26 + pdVar3[1]) * (param_4->field0_0x0)._s_0.Y;
      pfVar2 = &pFVar19->Weight;
      pFVar19 = pFVar19 + 1;
      fVar23 = (float)(SQRT(dVar26 * dVar26 + dVar32 * dVar32 + dVar14 * dVar14) * (double)*pfVar2 +
                      (double)fVar23);
    } while (pFVar19 != (FLegendreGaussCoefficient *)&DAT_151815e88);
    fVar23 = fVar23 * param_2 * __real_3f000000;
  }
  return fVar23;
}

// GetSplineLength @ 1479d14f0

float __thiscall FSplineCurves::GetSplineLength(FSplineCurves *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = *(int *)&(this->ReparamTable).field_0x8;
  if (iVar1 < 1) {
    return 0.0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)(*(longlong *)&this->ReparamTable + -0x14 +
                   (longlong)*(int *)&(this->ReparamTable).field_0x8 * 0x14);
}

// UpdateSpline @ 1479f3620

void __thiscall
FSplineCurves::UpdateSpline
          (FSplineCurves *this,bool param_1,bool param_2,int param_3,bool param_4,float param_5,
          TVector<double> *param_6)

{
  undefined1 *puVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res8;
  
  local_res8 = *(int *)&(this->Position).field_0x8;
  if (((*(int *)&(this->Rotation).field_0x8 != local_res8) ||
      (*(int *)&(this->Scale).field_0x8 != local_res8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Rotation.Points.Num() == NumPoints && Scale.Points.Num() == NumPoints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                         ,0x243,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = 1;
  if (1 < (longlong)local_res8) {
    lVar12 = 0x58;
    lVar13 = (longlong)local_res8 + -1;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&(this->Position).field_0x8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&this->Position;
      uVar7 = 0;
      if ((int)(uVar9 - 1) < *(int *)&(this->Position).field_0x8) {
        uVar7 = -uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar3 = *(float *)(lVar12 + lVar4);
      pfVar2 = (float *)(lVar12 + -0x58 + *(longlong *)&this->Position);
      if ((fVar3 < *pfVar2 || fVar3 == *pfVar2) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3237453185589181879>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                             ,0x249,
                             "Position.Points[Index - 1].InVal < Position.Points[Index].InVal"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x58;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  fVar3 = __real_3f800000;
  if (!param_1) {
    (this->Position).field_0x10 = 0;
    (this->Scale).field_0x10 = 0;
    (this->Rotation).field_0x10 = 0;
    goto LAB_1479f3992;
  }
  iVar11 = *(int *)&(this->Position).field_0x8;
  if (iVar11 < 1) {
    fVar16 = 0.0;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = *(int *)&(this->Position).field_0x8;
    fVar16 = *(float *)((longlong)iVar11 * 0x58 + -0x58 + *(longlong *)&this->Position);
  }
  if (!param_4) {
    param_5 = fVar16 + fVar3;
  }
  if (iVar11 == 0) {
LAB_1479f38d5:
    (this->Position).field_0x10 = 0;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar16 = *(float *)((longlong)*(int *)&(this->Position).field_0x8 * 0x58 + -0x58 +
                       *(longlong *)&this->Position);
    if (param_5 <= fVar16) goto LAB_1479f38d5;
    (this->Position).field_0x10 = 1;
    *(float *)&(this->Position).field_0x14 = param_5 - fVar16;
  }
  iVar11 = *(int *)&(this->Rotation).field_0x8;
  if (iVar11 != 0) {
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar16 = *(float *)((longlong)*(int *)&(this->Rotation).field_0x8 * 0x80 + -0x80 +
                       *(longlong *)&(this->Rotation).field_0x0);
    if (fVar16 < param_5) {
      (this->Rotation).field_0x10 = 1;
      *(float *)&(this->Rotation).field_0x14 = param_5 - fVar16;
      FInterpCurve<UE::Math::TVector<double>_>::SetLoopKey
                ((FInterpCurve<UE::Math::TVector<double>_> *)&this->Scale,param_5);
      goto LAB_1479f3992;
    }
  }
  (this->Rotation).field_0x10 = 0;
  FInterpCurve<UE::Math::TVector<double>_>::SetLoopKey
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->Scale,param_5);
LAB_1479f3992:
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)this,0.0,param_2);
  FInterpCurve<UE::Math::TQuat<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TQuat<double>_> *)&this->Rotation,0.0,param_2);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->Scale,0.0,param_2);
  if (!param_1) {
    local_res8 = local_res8 + -1;
    if (local_res8 < 0) {
      local_res8 = 0;
    }
  }
  uVar9 = local_res8 * param_3 + 1;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  puVar1 = &(this->ReparamTable).field_0xc;
  *(undefined4 *)&(this->ReparamTable).field_0x8 = 0;
  if (*(int *)&(this->ReparamTable).field_0xc < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar9,(ForAnyElementType *)&this->ReparamTable,0,(int *)puVar1);
  }
  fVar16 = 0.0;
  iVar11 = 0;
  if (0 < local_res8) {
    do {
      iVar10 = 0;
      if (0 < param_3) {
        do {
          fVar14 = (float)iVar10 * (fVar3 / (float)param_3);
          if (iVar10 == 0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = GetSegmentLength(this,iVar11,fVar14,param_1,param_6);
          }
          iVar8 = *(int *)&(this->ReparamTable).field_0x8;
          if (iVar8 == *(int *)puVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x414,(ForAnyElementType *)&this->ReparamTable,(int *)puVar1);
          }
          iVar10 = iVar10 + 1;
          *(int *)&(this->ReparamTable).field_0x8 = iVar8 + 1;
          lVar12 = (longlong)iVar8;
          lVar13 = *(longlong *)&this->ReparamTable;
          *(float *)(lVar13 + lVar12 * 0x14) = fVar15 + fVar16;
          *(float *)(lVar13 + 4 + lVar12 * 0x14) = (float)iVar11 + fVar14;
          *(undefined8 *)(lVar13 + 8 + lVar12 * 0x14) = 0;
          *(undefined1 *)(lVar13 + 0x10 + lVar12 * 0x14) = 0;
        } while (iVar10 < param_3);
      }
      fVar14 = GetSegmentLength(this,iVar11,fVar3,param_1,param_6);
      fVar16 = fVar16 + fVar14;
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_res8);
  }
  iVar11 = *(int *)&(this->ReparamTable).field_0x8;
  if (iVar11 == *(int *)puVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x414,(ForAnyElementType *)&this->ReparamTable,(int *)puVar1);
  }
  *(int *)&(this->ReparamTable).field_0x8 = iVar11 + 1;
  lVar12 = (longlong)iVar11;
  lVar13 = *(longlong *)&this->ReparamTable;
  *(float *)(lVar13 + lVar12 * 0x14) = fVar16;
  *(float *)(lVar13 + 4 + lVar12 * 0x14) = (float)local_res8;
  *(undefined8 *)(lVar13 + 8 + lVar12 * 0x14) = 0;
  *(undefined1 *)(lVar13 + 0x10 + lVar12 * 0x14) = 0;
  this->Version = this->Version + 1;
  return;
}

