// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 12

// Construct<FTrackingAlignmentSample> @ 14d374090

void __cdecl UE::CoreUObject::Private::Construct<FTrackingAlignmentSample>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(param_1,0,0xc0);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  return;
}

// ConstructForTests<FTrackingAlignmentSample> @ 14d374150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTrackingAlignmentSample>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  return;
}

// Destruct<FTrackingAlignmentSample> @ 14d374200

void __cdecl UE::CoreUObject::Private::Destruct<FTrackingAlignmentSample>(void *param_1)

{
  return;
}

// Copy<FTrackingAlignmentSample> @ 14d374210

bool __cdecl
UE::CoreUObject::Private::Copy<FTrackingAlignmentSample>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  
  if (param_3 != 0) {
    puVar25 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar25);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      *puVar25 = *puVar1;
      puVar25[1] = uVar2;
      puVar25[2] = uVar3;
      puVar25[3] = uVar4;
      puVar25[4] = uVar5;
      puVar25[5] = uVar6;
      puVar25[6] = uVar7;
      puVar25[7] = uVar8;
      puVar25[8] = uVar9;
      puVar25[9] = uVar10;
      puVar25[10] = uVar11;
      puVar25[0xb] = uVar12;
      puVar25[0xc] = uVar13;
      puVar25[0xd] = uVar14;
      puVar25[0xe] = uVar15;
      puVar25[0xf] = uVar16;
      puVar25[0x10] = uVar17;
      puVar25[0x11] = uVar18;
      puVar25[0x12] = uVar19;
      puVar25[0x13] = uVar20;
      puVar25[0x14] = uVar21;
      puVar25[0x15] = uVar22;
      puVar25[0x16] = uVar23;
      puVar25[0x17] = uVar24;
      param_3 = param_3 + -1;
      puVar25 = puVar25 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTrackingAlignmentActors> @ 14d374730

void __cdecl UE::CoreUObject::Private::Construct<FTrackingAlignmentActors>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  return;
}

// ConstructForTests<FTrackingAlignmentActors> @ 14d3747a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTrackingAlignmentActors>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  return;
}

// Destruct<FTrackingAlignmentActors> @ 14d374800

void __cdecl UE::CoreUObject::Private::Destruct<FTrackingAlignmentActors>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FTrackingAlignmentActors> @ 14d374840

bool __cdecl
UE::CoreUObject::Private::Copy<FTrackingAlignmentActors>(void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this,pTVar1);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ExtractOpenCVTranslationAndRotation @ 14d3759e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::TrackingAlignmentFunctionLibrary::ExtractOpenCVTranslationAndRotation
          (TTransform<double> *param_1,Mat *param_2,Mat *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  Mat *pMVar17;
  double *pdVar18;
  double dVar19;
  undefined1 auStack_198 [32];
  TTransform<double> local_178;
  Mat local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_178.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_178.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_178.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_178.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_178.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_178.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  FOpenCVHelper::ConvertUnrealToOpenCV(&local_178);
  dVar15 = local_178.Translation.ZW.m128d_f64[0];
  dVar14 = local_178.Translation.XY.m128d_f64[1];
  dVar13 = local_178.Translation.XY.m128d_f64[0];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatOne.m128_f32[2];
  dVar12 = local_178.Rotation.XY.m128d_f64[1] + local_178.Rotation.XY.m128d_f64[1];
  dVar19 = local_178.Rotation.ZW.m128d_f64[0] + local_178.Rotation.ZW.m128d_f64[0];
  dVar8 = (local_178.Rotation.XY.m128d_f64[0] + local_178.Rotation.XY.m128d_f64[0]) *
          local_178.Rotation.XY.m128d_f64[0];
  dVar9 = dVar12 * local_178.Rotation.XY.m128d_f64[1];
  dVar5 = dVar19 * local_178.Rotation.ZW.m128d_f64[0];
  dVar10 = dVar12 * local_178.Rotation.XY.m128d_f64[0];
  dVar11 = dVar19 * local_178.Rotation.XY.m128d_f64[1];
  dVar12 = dVar12 * local_178.Rotation.ZW.m128d_f64[1];
  dVar6 = local_178.Rotation.ZW.m128d_f64[1] * dVar19;
  dVar7 = local_178.Rotation.ZW.m128d_f64[1] *
          (local_178.Rotation.XY.m128d_f64[0] + local_178.Rotation.XY.m128d_f64[0]);
  dVar19 = local_178.Rotation.XY.m128d_f64[0] * dVar19;
  pMVar17 = (Mat *)cv::Mat::Mat(&local_118,3,1,6);
  cv::Mat::operator=(param_3,pMVar17);
  cv::Mat::~Mat(&local_118);
  *(double *)param_3->data = dVar13;
  if (((param_3->flags & 0x4000U) == 0) && (piVar1 = (param_3->size).p, *piVar1 != 1)) {
    if (piVar1[1] == 1) {
      pdVar18 = (double *)(param_3->data + *(param_3->step).p);
    }
    else {
      iVar16 = (int)(1 / (longlong)param_3->cols);
      pdVar18 = (double *)
                (param_3->data +
                (longlong)iVar16 * *(param_3->step).p + (longlong)(1 - param_3->cols * iVar16) * 8);
    }
  }
  else {
    pdVar18 = (double *)(param_3->data + 8);
  }
  *pdVar18 = dVar14;
  if (((param_3->flags & 0x4000U) == 0) && (piVar1 = (param_3->size).p, *piVar1 != 1)) {
    if (piVar1[1] == 1) {
      pdVar18 = (double *)(param_3->data + *(param_3->step).p * 2);
    }
    else {
      iVar16 = (int)(2 / (longlong)param_3->cols);
      pdVar18 = (double *)
                (param_3->data +
                (longlong)iVar16 * *(param_3->step).p + (longlong)(2 - param_3->cols * iVar16) * 8);
    }
  }
  else {
    pdVar18 = (double *)(param_3->data + 0x10);
  }
  *pdVar18 = dVar15;
  pMVar17 = (Mat *)cv::Mat::Mat(&local_118,3,3,6);
  cv::Mat::operator=(param_2,pMVar17);
  cv::Mat::~Mat(&local_118);
  *(double *)param_2->data = (double)fVar2 - (dVar5 + dVar9);
  *(double *)(param_2->data + 8) = dVar10 - dVar6;
  *(double *)(param_2->data + 0x10) = dVar12 + dVar19;
  *(double *)(param_2->data + *(param_2->step).p) = dVar6 + dVar10;
  *(double *)(param_2->data + *(param_2->step).p + 8) = (double)fVar3 - (dVar5 + dVar8);
  *(double *)(param_2->data + *(param_2->step).p + 0x10) = dVar11 - dVar7;
  *(double *)(param_2->data + *(param_2->step).p * 2) = dVar19 - dVar12;
  *(double *)(param_2->data + *(param_2->step).p * 2 + 8) = dVar7 + dVar11;
  *(double *)(param_2->data + *(param_2->step).p * 2 + 0x10) = (double)fVar4 - (dVar8 + dVar9);
  return;
}

// ExtractUnrealTransform @ 14d375db0

void __cdecl
UE::TrackingAlignmentFunctionLibrary::ExtractUnrealTransform
          (Mat *param_1,Mat *param_2,TTransform<double> *param_3)

{
  ulong64 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double *pdVar6;
  TMatrix<double> local_98;
  
  pdVar6 = (double *)param_1->data;
  uVar1 = *(param_1->step).p;
  local_98.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_98.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_98.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_98.M[0][0] = *pdVar6;
  local_98.M[2][0] = pdVar6[2];
  local_98.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_98.M[1][0] = pdVar6[1];
  local_98.M[1][1] = *(double *)(uVar1 + 8 + (longlong)pdVar6);
  local_98.M[0][1] = *(double *)(uVar1 + (longlong)pdVar6);
  local_98.M[0][2] = *(double *)((longlong)pdVar6 + uVar1 * 2);
  local_98.M[2][1] = *(double *)(uVar1 + 0x10 + (longlong)pdVar6);
  local_98.M[2][2] = *(double *)((longlong)pdVar6 + uVar1 * 2 + 0x10);
  local_98.M[1][2] = *(double *)((longlong)pdVar6 + uVar1 * 2 + 8);
  uVar4 = param_2->flags & 0x4000;
  if ((uVar4 == 0) && (*(param_2->size).p != 1)) {
    pdVar6 = (double *)param_2->data;
    local_98.M[3][0] = *pdVar6;
LAB_14d375ecc:
    piVar2 = (param_2->size).p;
    if (*piVar2 == 1) goto LAB_14d375f2e;
    if (piVar2[1] == 1) {
      local_98.M[3][1] = *(double *)((longlong)pdVar6 + *(param_2->step).p);
    }
    else {
      iVar3 = (int)(1 / (longlong)param_2->cols);
      local_98.M[3][1] =
           *(double *)
            ((longlong)pdVar6 +
            (longlong)(1 - iVar3 * param_2->cols) * 8 + (longlong)iVar3 * *(param_2->step).p);
    }
LAB_14d375f41:
    piVar2 = (param_2->size).p;
    if (*piVar2 != 1) {
      if (piVar2[1] == 1) {
        lVar5 = *(param_2->step).p * 2;
      }
      else {
        iVar3 = (int)(2 / (longlong)param_2->cols);
        lVar5 = (longlong)iVar3 * *(param_2->step).p + (longlong)(2 - iVar3 * param_2->cols) * 8;
      }
      goto LAB_14d375f8a;
    }
  }
  else {
    pdVar6 = (double *)param_2->data;
    local_98.M[3][0] = *pdVar6;
    if (uVar4 == 0) goto LAB_14d375ecc;
LAB_14d375f2e:
    local_98.M[3][1] = pdVar6[1];
    if (uVar4 == 0) goto LAB_14d375f41;
  }
  lVar5 = 0x10;
LAB_14d375f8a:
  local_98.M[3][2] = *(double *)((longlong)pdVar6 + lVar5);
  UE::Math::TTransform<double>::SetFromMatrix(param_3,&local_98);
  FOpenCVHelper::ConvertOpenCVToUnreal(param_3);
  return;
}

// GetCam2Base @ 14d376570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UE::TrackingAlignmentFunctionLibrary::GetCam2Base
          (TTransform<double> *__return_storage_ptr__,UTrackingAlignmentCalibrationProfile *param_1)

{
  longlong lVar1;
  Mat *pMVar2;
  int iVar3;
  bool bVar4;
  MatExpr *pMVar5;
  ulong64 uVar6;
  Mat *pMVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_638 [32];
  vector<cv::Mat,std::allocator<cv::Mat>_> local_5f8;
  vector<cv::Mat,std::allocator<cv::Mat>_> local_5e0;
  vector<cv::Mat,std::allocator<cv::Mat>_> local_5c8;
  vector<cv::Mat,std::allocator<cv::Mat>_> local_5b0;
  undefined1 local_598 [16];
  undefined8 local_588;
  _InputArray local_580;
  vector<cv::Mat,std::allocator<cv::Mat>_> local_568;
  vector<cv::Mat,std::allocator<cv::Mat>_> local_550;
  _InputArray local_538;
  _InputArray local_520;
  _InputArray local_508;
  _InputArray local_4f0;
  TTransform<double> local_4d8;
  Mat local_478;
  Mat local_418;
  Mat local_3b8;
  Mat local_358;
  MatExpr local_2f8;
  MatExpr local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_4d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  uVar8 = 0;
  local_4d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_4d8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_4d8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_4d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_4d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_5f8._Mypair._Myval2._Myfirst = (Mat *)0x0;
  local_5f8._Mypair._Myval2._Mylast = (Mat *)0x0;
  local_5f8._Mypair._Myval2._Myend = (Mat *)0x0;
  local_5b0._Mypair._Myval2._Myfirst = (Mat *)0x0;
  local_5b0._Mypair._Myval2._Mylast = (Mat *)0x0;
  local_5b0._Mypair._Myval2._Myend = (Mat *)0x0;
  local_5c8._Mypair._Myval2._Myfirst = (Mat *)0x0;
  local_5c8._Mypair._Myval2._Mylast = (Mat *)0x0;
  local_5c8._Mypair._Myval2._Myend = (Mat *)0x0;
  local_5e0._Mypair._Myval2._Myfirst = (Mat *)0x0;
  local_5e0._Mypair._Myval2._Mylast = (Mat *)0x0;
  local_5e0._Mypair._Myval2._Myend = (Mat *)0x0;
  bVar4 = GetSamplesAsEyeInHandMats(param_1,&local_5f8,&local_5b0,&local_5c8,&local_5e0);
  pMVar7 = local_5e0._Mypair._Myval2._Mylast;
  if (bVar4) {
    pMVar5 = cv::Mat::eye(&local_2f8,3,3,6);
    cv::Mat::Mat(&local_358);
    (**(code **)((longlong)*pMVar5->op + 0x10))(pMVar5->op,pMVar5,&local_358,0xffffffff);
    cv::Mat::~Mat(&local_2f8.c);
    cv::Mat::~Mat(&local_2f8.b);
    cv::Mat::~Mat(&local_2f8.a);
    pMVar5 = cv::Mat::zeros(&local_2f8,3,1,6);
    cv::Mat::Mat(&local_3b8);
    (**(code **)((longlong)*pMVar5->op + 0x10))(pMVar5->op,pMVar5,&local_3b8,0xffffffff);
    cv::Mat::~Mat(&local_2f8.c);
    cv::Mat::~Mat(&local_2f8.b);
    cv::Mat::~Mat(&local_2f8.a);
    iVar3 = HandEyeCalibrationSolveMethod;
    local_550._Mypair._Myval2._Myfirst = (Mat *)0x0;
    local_550._Mypair._Myval2._Mylast = (Mat *)0x0;
    local_568._Mypair._Myval2._Myfirst = (Mat *)0x0;
    local_568._Mypair._Myval2._Mylast = (Mat *)0x0;
    local_550._Mypair._Myval2._Myend = (Mat *)0x0;
    lVar1 = (longlong)local_5f8._Mypair._Myval2._Mylast -
            (longlong)local_5f8._Mypair._Myval2._Myfirst >> 0x3f;
    local_568._Mypair._Myval2._Myend = (Mat *)0x0;
    uVar10 = uVar8;
    if (((longlong)local_5f8._Mypair._Myval2._Mylast - (longlong)local_5f8._Mypair._Myval2._Myfirst)
        / 0x60 + lVar1 != lVar1) {
      do {
        cv::Mat::Mat(&local_478);
        cv::Mat::Mat(&local_418);
        local_598._8_8_ = &local_478;
        local_588 = 0;
        local_580.obj = local_5f8._Mypair._Myval2._Myfirst + uVar8;
        local_598._0_4_ = 0x2010000;
        local_580.sz.width = 0;
        local_580.sz.height = 0;
        local_580.flags = 0x1010000;
        cv::transpose(&local_580,(_OutputArray *)local_598);
        pMVar7 = local_5b0._Mypair._Myval2._Myfirst + uVar8;
        pMVar5 = cv::operator-(&local_198,&local_478);
        pMVar5 = cv::operator*(&local_2f8,pMVar5,pMVar7);
        (**(code **)((longlong)*pMVar5->op + 0x10))(pMVar5->op,pMVar5,&local_418,0xffffffff);
        cv::Mat::~Mat(&local_2f8.c);
        cv::Mat::~Mat(&local_2f8.b);
        cv::Mat::~Mat(&local_2f8.a);
        cv::Mat::~Mat(&local_198.c);
        cv::Mat::~Mat(&local_198.b);
        cv::Mat::~Mat(&local_198.a);
        if (local_550._Mypair._Myval2._Mylast == local_550._Mypair._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (&local_550,local_550._Mypair._Myval2._Mylast,&local_478);
        }
        else {
          cv::Mat::Mat(local_550._Mypair._Myval2._Mylast,&local_478);
          local_550._Mypair._Myval2._Mylast = local_550._Mypair._Myval2._Mylast + 1;
        }
        if (local_568._Mypair._Myval2._Mylast == local_568._Mypair._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (&local_568,local_568._Mypair._Myval2._Mylast,&local_418);
        }
        else {
          cv::Mat::Mat(local_568._Mypair._Myval2._Mylast,&local_418);
          local_568._Mypair._Myval2._Mylast = local_568._Mypair._Myval2._Mylast + 1;
        }
        cv::Mat::~Mat(&local_418);
        cv::Mat::~Mat(&local_478);
        uVar9 = (int)uVar10 + 1;
        uVar8 = (ulonglong)(int)uVar9;
        uVar10 = (ulonglong)uVar9;
      } while (uVar8 < (ulonglong)
                       (((longlong)local_5f8._Mypair._Myval2._Mylast -
                        (longlong)local_5f8._Mypair._Myval2._Myfirst) / 0x60));
    }
    local_580.obj = &local_3b8;
    local_598._8_8_ = &local_358;
    local_580.sz.width = 0;
    local_580.sz.height = 0;
    local_538.obj = &local_5e0;
    local_580.flags = 0x2010000;
    local_520.obj = &local_5c8;
    local_588 = 0;
    local_508.obj = &local_568;
    local_598._0_4_ = 0x2010000;
    local_4f0.obj = &local_550;
    local_538.sz.width = 0;
    local_538.sz.height = 0;
    local_538.flags = 0x1050000;
    local_520.sz.width = 0;
    local_520.sz.height = 0;
    local_520.flags = 0x1050000;
    local_508.sz.width = 0;
    local_508.sz.height = 0;
    local_508.flags = 0x1050000;
    local_4f0.sz.width = 0;
    local_4f0.sz.height = 0;
    local_4f0.flags = 0x1050000;
    cv::calibrateHandEye
              (&local_4f0,&local_508,&local_520,&local_538,(_OutputArray *)local_598,
               (_OutputArray *)&local_580,iVar3);
    ExtractUnrealTransform(&local_358,&local_3b8,&local_4d8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_4d8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_4d8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_4d8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_4d8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_4d8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_4d8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_4d8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_4d8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_4d8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_4d8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_4d8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_4d8.Scale3D.ZW.m128d_f64[1];
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_568);
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_550);
    cv::Mat::~Mat(&local_3b8);
    cv::Mat::~Mat(&local_358);
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_5e0);
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_5c8);
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_5b0);
    std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
              (&local_5f8);
  }
  else {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pMVar2 = local_5e0._Mypair._Myval2._Myfirst;
    if (local_5e0._Mypair._Myval2._Myfirst != (Mat *)0x0) {
      for (; pMVar2 != pMVar7; pMVar2 = pMVar2 + 1) {
        cv::Mat::~Mat(pMVar2);
      }
      uVar6 = (((longlong)local_5e0._Mypair._Myval2._Myend -
               (longlong)local_5e0._Mypair._Myval2._Myfirst) / 0x60) * 0x60;
      pMVar7 = local_5e0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar6) {
        pMVar7 = (Mat *)local_5e0._Mypair._Myval2._Myfirst[-1].step.buf[1];
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_5e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar7)))
        goto LAB_14d3768ab;
      }
      ::operator_delete(pMVar7,uVar6);
      local_5e0._Mypair._Myval2._Myend = (Mat *)0x0;
      local_5e0._Mypair._Myval2._Myfirst = (Mat *)0x0;
      local_5e0._Mypair._Myval2._Mylast = (Mat *)0x0;
    }
    pMVar2 = local_5c8._Mypair._Myval2._Mylast;
    pMVar7 = local_5c8._Mypair._Myval2._Myfirst;
    if (local_5c8._Mypair._Myval2._Myfirst != (Mat *)0x0) {
      for (; pMVar7 != pMVar2; pMVar7 = pMVar7 + 1) {
        cv::Mat::~Mat(pMVar7);
      }
      uVar6 = (((longlong)local_5c8._Mypair._Myval2._Myend -
               (longlong)local_5c8._Mypair._Myval2._Myfirst) / 0x60) * 0x60;
      pMVar7 = local_5c8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar6) {
        pMVar7 = (Mat *)local_5c8._Mypair._Myval2._Myfirst[-1].step.buf[1];
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_5c8._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar7)))
        goto LAB_14d3768ab;
      }
      ::operator_delete(pMVar7,uVar6);
      local_5c8._Mypair._Myval2._Myend = (Mat *)0x0;
      local_5c8._Mypair._Myval2._Myfirst = (Mat *)0x0;
      local_5c8._Mypair._Myval2._Mylast = (Mat *)0x0;
    }
    pMVar2 = local_5b0._Mypair._Myval2._Mylast;
    pMVar7 = local_5b0._Mypair._Myval2._Myfirst;
    if (local_5b0._Mypair._Myval2._Myfirst != (Mat *)0x0) {
      for (; pMVar7 != pMVar2; pMVar7 = pMVar7 + 1) {
        cv::Mat::~Mat(pMVar7);
      }
      uVar6 = (((longlong)local_5b0._Mypair._Myval2._Myend -
               (longlong)local_5b0._Mypair._Myval2._Myfirst) / 0x60) * 0x60;
      pMVar7 = local_5b0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar6) {
        pMVar7 = (Mat *)local_5b0._Mypair._Myval2._Myfirst[-1].step.buf[1];
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_5b0._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar7)))
        goto LAB_14d3768ab;
      }
      ::operator_delete(pMVar7,uVar6);
      local_5b0._Mypair._Myval2._Myend = (Mat *)0x0;
      local_5b0._Mypair._Myval2._Myfirst = (Mat *)0x0;
      local_5b0._Mypair._Myval2._Mylast = (Mat *)0x0;
    }
    pMVar2 = local_5f8._Mypair._Myval2._Mylast;
    pMVar7 = local_5f8._Mypair._Myval2._Myfirst;
    if (local_5f8._Mypair._Myval2._Myfirst != (Mat *)0x0) {
      for (; pMVar7 != pMVar2; pMVar7 = pMVar7 + 1) {
        cv::Mat::~Mat(pMVar7);
      }
      uVar6 = (((longlong)local_5f8._Mypair._Myval2._Myend -
               (longlong)local_5f8._Mypair._Myval2._Myfirst) / 0x60) * 0x60;
      pMVar7 = local_5f8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar6) {
        pMVar7 = (Mat *)local_5f8._Mypair._Myval2._Myfirst[-1].step.buf[1];
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_5f8._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar7))) {
LAB_14d3768ab:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pMVar7,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// GetSamplesAsEyeInHandMats @ 14d376eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::TrackingAlignmentFunctionLibrary::GetSamplesAsEyeInHandMats
          (UTrackingAlignmentCalibrationProfile *param_1,
          vector<cv::Mat,std::allocator<cv::Mat>_> *param_2,
          vector<cv::Mat,std::allocator<cv::Mat>_> *param_3,
          vector<cv::Mat,std::allocator<cv::Mat>_> *param_4,
          vector<cv::Mat,std::allocator<cv::Mat>_> *param_5)

{
  Mat **ppMVar1;
  int iVar2;
  Mat *pMVar3;
  TTransform<double> *pTVar4;
  TTransform<double> *pTVar5;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [16];
  Mat local_1c8;
  Mat local_168;
  Mat local_108;
  Mat local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (param_1 != (UTrackingAlignmentCalibrationProfile *)0x0) {
    iVar2 = (param_1->Samples).ArrayNum;
    if (4 < iVar2) {
      pTVar4 = (TTransform<double> *)(param_1->Samples).AllocatorInstance.Data;
      pTVar5 = pTVar4 + (longlong)iVar2 * 2;
      while( true ) {
        if ((param_1->Samples).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FTrackingAlignmentSample,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1d8);
        }
        if (pTVar4 == pTVar5) break;
        cv::Mat::Mat(&local_a8,3,3,6);
        cv::Mat::Mat(&local_108,3,1,6);
        cv::Mat::Mat(&local_168,3,3,6);
        cv::Mat::Mat(&local_1c8,3,1,6);
        ExtractOpenCVTranslationAndRotation(pTVar4,&local_a8,&local_108);
        ExtractOpenCVTranslationAndRotation(pTVar4 + 1,&local_168,&local_1c8);
        pMVar3 = (param_2->_Mypair)._Myval2._Mylast;
        if (pMVar3 == (param_2->_Mypair)._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (param_2,pMVar3,&local_168);
        }
        else {
          cv::Mat::Mat(pMVar3,&local_168);
          ppMVar1 = &(param_2->_Mypair)._Myval2._Mylast;
          *ppMVar1 = *ppMVar1 + 1;
        }
        pMVar3 = (param_3->_Mypair)._Myval2._Mylast;
        if (pMVar3 == (param_3->_Mypair)._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (param_3,pMVar3,&local_1c8);
        }
        else {
          cv::Mat::Mat(pMVar3,&local_1c8);
          ppMVar1 = &(param_3->_Mypair)._Myval2._Mylast;
          *ppMVar1 = *ppMVar1 + 1;
        }
        pMVar3 = (param_4->_Mypair)._Myval2._Mylast;
        if (pMVar3 == (param_4->_Mypair)._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (param_4,pMVar3,&local_a8);
        }
        else {
          cv::Mat::Mat(pMVar3,&local_a8);
          ppMVar1 = &(param_4->_Mypair)._Myval2._Mylast;
          *ppMVar1 = *ppMVar1 + 1;
        }
        pMVar3 = (param_5->_Mypair)._Myval2._Mylast;
        if (pMVar3 == (param_5->_Mypair)._Myval2._Myend) {
          std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
                    (param_5,pMVar3,&local_108);
        }
        else {
          cv::Mat::Mat(pMVar3,&local_108);
          ppMVar1 = &(param_5->_Mypair)._Myval2._Mylast;
          *ppMVar1 = *ppMVar1 + 1;
        }
        cv::Mat::~Mat(&local_1c8);
        cv::Mat::~Mat(&local_168);
        cv::Mat::~Mat(&local_108);
        cv::Mat::~Mat(&local_a8);
        pTVar4 = pTVar4 + 2;
      }
      return true;
    }
  }
  return false;
}

