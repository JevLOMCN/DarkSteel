// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 27

// EvaluateChannel<1,0> @ 14c86b6c0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateChannel<1,0>
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  
  pfVar1 = *param_2;
  *param_3 = *pfVar1;
  *param_2 = pfVar1 + 1;
  return;
}

// EvaluateChannel<2,1> @ 14c86b6e0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateChannel<2,1>
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3193436561148477209>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                     ,0xe7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = *param_2 + 1;
  *param_3 = 0.0;
  return;
}

// EvaluateChannel<2,0> @ 14c86b740

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateChannel<2,0>
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3193436561148477209>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                     ,0xe7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = *param_2 + 1;
  *param_3 = 0.0;
  return;
}

// EvaluateChannel<3,1> @ 14c86b7a0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateChannel<3,1>
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    fVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *param_3 = fVar1;
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3193436561148477209>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                     ,0xe7,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_2 = *param_2 + 1;
  *param_3 = 0.0;
  return;
}

// EvaluateChannel<3,0> @ 14c86b820

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateChannel<3,0>
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    fVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *param_3 = fVar1;
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3193436561148477209>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                     ,0xe7,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_2 = *param_2 + 1;
  *param_3 = 0.0;
  return;
}

// EvaluateColor<1,0> @ 14c86b8a0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateColor<1,0>
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float fVar1;
  
  fVar1 = **param_2;
  (param_3->field0_0x0)._s_0.X = fVar1;
  (param_3->field0_0x0)._s_0.Y = fVar1;
  (param_3->field0_0x0)._s_0.Z = fVar1;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 1;
  return;
}

// EvaluateColor<2,1> @ 14c86b8d0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateColor<2,1>
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *param_2;
  fVar2 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y + pfVar1[1]) * __real_3f000000;
  fVar3 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z + pfVar1[2]) * __real_3f000000;
  (param_3->field0_0x0)._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X + *pfVar1) * __real_3f000000;
  (param_3->field0_0x0)._s_0.Y = fVar2;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 3;
  return;
}

// EvaluateColor<2,0> @ 14c86b950

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateColor<2,0>
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *param_2;
  fVar2 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y + pfVar1[1]) * __real_3f000000;
  fVar3 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z + pfVar1[2]) * __real_3f000000;
  (param_3->field0_0x0)._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X + *pfVar1) * __real_3f000000;
  (param_3->field0_0x0)._s_0.Y = fVar2;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 3;
  return;
}

// EvaluateColor<3,1> @ 14c86b9d0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateColor<3,1>
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *param_2;
  if (param_1 == 0) {
    fVar2 = *pfVar1;
    (param_3->field0_0x0)._s_0.X = fVar2;
    (param_3->field0_0x0)._s_0.Y = fVar2;
    (param_3->field0_0x0)._s_0.Z = fVar2;
    (param_3->field0_0x0)._s_0.W = 1.0;
    *param_2 = *param_2 + 1;
    return;
  }
  fVar2 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y + pfVar1[1]) * __real_3f000000;
  fVar3 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z + pfVar1[2]) * __real_3f000000;
  (param_3->field0_0x0)._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X + *pfVar1) * __real_3f000000;
  (param_3->field0_0x0)._s_0.Y = fVar2;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 3;
  return;
}

// EvaluateColor<3,0> @ 14c86ba80

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateColor<3,0>
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *param_2;
  if (param_1 == 0) {
    fVar2 = *pfVar1;
    (param_3->field0_0x0)._s_0.X = fVar2;
    (param_3->field0_0x0)._s_0.Y = fVar2;
    (param_3->field0_0x0)._s_0.Z = fVar2;
    (param_3->field0_0x0)._s_0.W = 1.0;
    *param_2 = *param_2 + 1;
    return;
  }
  fVar2 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y + pfVar1[1]) * __real_3f000000;
  fVar3 = (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z + pfVar1[2]) * __real_3f000000;
  (param_3->field0_0x0)._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X + *pfVar1) * __real_3f000000;
  (param_3->field0_0x0)._s_0.Y = fVar2;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 3;
  return;
}

// EvaluateDefault<1,0> @ 14c86bb30

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateDefault<1,0>(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = 1.0;
  *param_1 = pfVar1 + 1;
  return;
}

// EvaluateDefault<2,1> @ 14c86bb50

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateDefault<2,1>(float **param_1,void *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = DefaultObjectNormal.field0_0x0._s_0.Z;
  pfVar1 = *param_1;
  fVar3 = (float)DefaultObjectNormal.field0_0x0._s_0.Y;
  *pfVar1 = (float)DefaultObjectNormal.field0_0x0._s_0.X;
  pfVar1[1] = fVar3;
  pfVar1[2] = (float)(double)uVar2;
  *param_1 = pfVar1 + 3;
  return;
}

// EvaluateDefault<2,0> @ 14c86bba0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateDefault<2,0>(float **param_1,void *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = DefaultTangentNormal.field0_0x0._s_0.Z;
  pfVar1 = *param_1;
  fVar3 = (float)DefaultTangentNormal.field0_0x0._s_0.Y;
  *pfVar1 = (float)DefaultTangentNormal.field0_0x0._s_0.X;
  pfVar1[1] = fVar3;
  pfVar1[2] = (float)(double)uVar2;
  *param_1 = pfVar1 + 3;
  return;
}

// EvaluateDefault<3,1> @ 14c86bbf0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateDefault<3,1>(float **param_1,void *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  
  pfVar1 = *param_1;
  *param_1 = pfVar1 + 1;
  *pfVar1 = 1.0;
  uVar2 = DefaultObjectNormal.field0_0x0._s_0.Z;
  fVar3 = (float)DefaultObjectNormal.field0_0x0._s_0.Y;
  pfVar1[1] = (float)DefaultObjectNormal.field0_0x0._s_0.X;
  *param_1 = pfVar1 + 4;
  pfVar1[2] = fVar3;
  pfVar1[3] = (float)(double)uVar2;
  return;
}

// EvaluateDefault<3,0> @ 14c86bc40

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateDefault<3,0>(float **param_1,void *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  
  pfVar1 = *param_1;
  *param_1 = pfVar1 + 1;
  *pfVar1 = 1.0;
  uVar2 = DefaultTangentNormal.field0_0x0._s_0.Z;
  fVar3 = (float)DefaultTangentNormal.field0_0x0._s_0.Y;
  pfVar1[1] = (float)DefaultTangentNormal.field0_0x0._s_0.X;
  *param_1 = pfVar1 + 4;
  pfVar1[2] = fVar3;
  pfVar1[3] = (float)(double)uVar2;
  return;
}

// EvaluateSample<1,0> @ 14c86c030

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateSample<1,0>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  TTuple<float,UE::Math::TVector<float>_> *pTVar2;
  float fVar3;
  float fVar4;
  TTuple<float,UE::Math::TVector<float>_> local_18;
  
  pTVar2 = SampleFunction<1,0>(param_3,&local_18,param_2,&DefaultTangentNormal);
  fVar4 = __real_3f800000 - *(float *)pTVar2;
  fVar3 = 0.0;
  if ((0.0 <= fVar4) && (fVar3 = fVar4, __real_3f800000 <= fVar4)) {
    fVar3 = __real_3f800000;
  }
  pfVar1 = *param_1;
  *pfVar1 = fVar3;
  *param_1 = pfVar1 + 1;
  return;
}

// EvaluateSample<2,1> @ 14c86c130

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateSample<2,1>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  TTuple<float,UE::Math::TVector<float>_> *pTVar4;
  TTuple<float,UE::Math::TVector<float>_> local_18;
  
  pTVar4 = SampleFunction<2,1>(param_3,&local_18,param_2,&param_2->BaseNormal);
  uVar1 = *(undefined8 *)&pTVar4->field_0x4;
  fVar2 = *(float *)&pTVar4->field_0xc;
  pfVar3 = *param_1;
  *pfVar3 = (float)uVar1;
  pfVar3[1] = (float)((ulonglong)uVar1 >> 0x20);
  pfVar3[2] = fVar2;
  *param_1 = pfVar3 + 3;
  return;
}

// EvaluateSample<2,0> @ 14c86c190

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateSample<2,0>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  TTuple<float,UE::Math::TVector<float>_> *pTVar4;
  TTuple<float,UE::Math::TVector<float>_> local_18;
  
  pTVar4 = SampleFunction<2,0>(param_3,&local_18,param_2,&DefaultTangentNormal);
  uVar1 = *(undefined8 *)&pTVar4->field_0x4;
  fVar2 = *(float *)&pTVar4->field_0xc;
  pfVar3 = *param_1;
  *pfVar3 = (float)uVar1;
  pfVar3[1] = (float)((ulonglong)uVar1 >> 0x20);
  pfVar3[2] = fVar2;
  *param_1 = pfVar3 + 3;
  return;
}

// EvaluateSample<3,1> @ 14c86c1f0

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateSample<3,1>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  TTuple<float,UE::Math::TVector<float>_> *pTVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float fStack_24;
  TTuple<float,UE::Math::TVector<float>_> local_18;
  
  pTVar4 = SampleFunction<3,1>(param_3,&local_18,param_2,&param_2->BaseNormal);
  uVar1 = *(undefined8 *)&pTVar4->field_0x4;
  fVar6 = __real_3f800000 - *(float *)pTVar4;
  fVar2 = *(float *)&pTVar4->field_0xc;
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = fVar6, __real_3f800000 <= fVar6)) {
    fVar5 = __real_3f800000;
  }
  pfVar3 = *param_1;
  fStack_24 = (float)((ulonglong)uVar1 >> 0x20);
  *pfVar3 = fVar5;
  local_28 = (float)uVar1;
  pfVar3[1] = local_28;
  pfVar3[2] = fStack_24;
  pfVar3[3] = fVar2;
  *param_1 = pfVar3 + 4;
  return;
}

// EvaluateSample<3,0> @ 14c86c280

void __cdecl
UE::Geometry::FMeshOcclusionMapEvaluator::EvaluateSample<3,0>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  TTuple<float,UE::Math::TVector<float>_> *pTVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float fStack_24;
  TTuple<float,UE::Math::TVector<float>_> local_18;
  
  pTVar4 = SampleFunction<3,0>(param_3,&local_18,param_2,&DefaultTangentNormal);
  uVar1 = *(undefined8 *)&pTVar4->field_0x4;
  fVar6 = __real_3f800000 - *(float *)pTVar4;
  fVar2 = *(float *)&pTVar4->field_0xc;
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = fVar6, __real_3f800000 <= fVar6)) {
    fVar5 = __real_3f800000;
  }
  pfVar3 = *param_1;
  fStack_24 = (float)((ulonglong)uVar1 >> 0x20);
  *pfVar3 = fVar5;
  local_28 = (float)uVar1;
  pfVar3[1] = local_28;
  pfVar3[2] = fStack_24;
  pfVar3[3] = fVar2;
  *param_1 = pfVar3 + 4;
  return;
}

// SampleFunction<1,0> @ 14c875190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<float,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::SampleFunction<1,0>
          (FMeshOcclusionMapEvaluator *this,
          TTuple<float,UE::Math::TVector<float>_> *__return_storage_ptr__,
          FCorrespondenceSample *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  TTuple<float,UE::Math::TVector<float>_> *pTVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  double extraout_XMM0_Qa;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  float local_240;
  float local_23c;
  float local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TQuaternion<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b0;
  TQuaternion<double>_u_0 local_198;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  double local_118 [2];
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pvVar3 = param_1->DetailMesh;
  iVar2 = param_1->DetailTriID;
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar3,iVar2,&param_1->DetailBaryCoords);
  fVar17 = local_23c * local_23c + local_240 * local_240 + local_238 * local_238;
  if (fVar17 <= __real_322bcc77) {
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar7 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar5;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar6;
    *(float *)&__return_storage_ptr__->field_0xc = (float)dVar7;
  }
  else {
    fVar17 = __real_3f800000 / SQRT(fVar17);
    local_168 = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
    local_240 = local_240 * fVar17;
    local_23c = local_23c * fVar17;
    local_238 = local_238 * fVar17;
    local_178 = (param_1->DetailBaryCoords).field0_0x0._s_0.X;
    dStack_170 = (param_1->DetailBaryCoords).field0_0x0._s_0.Y;
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_230,pvVar3,iVar2);
    dVar8 = __real_3ff0000000000000;
    local_1b0._s_0.X = (double)local_240;
    local_1b0._s_0.Y = (double)local_23c;
    local_1b0._s_0.Z = (double)local_238;
    local_230 = local_230 + local_1b0._s_0.X * __real_3ee4f8b580000000;
    dStack_228 = dStack_228 + local_1b0._s_0.Y * __real_3ee4f8b580000000;
    local_1d0._s_0.X = 0.0;
    local_1d0._s_0.W = __real_3ff0000000000000;
    local_220 = local_220 + local_1b0._s_0.Z * __real_3ee4f8b580000000;
    local_1d0._s_0.Y = 0.0;
    local_1d0._s_0.Z = 0.0;
    local_160._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_160._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_160._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1e8._s_0.X = local_230;
    local_1e8._s_0.Y = dStack_228;
    local_1e8._s_0.Z = local_220;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_1d0._s_0,(TVector<double> *)&local_160._s_0,
               (TVector<double> *)&local_1b0._s_0);
    rand();
    uVar10 = local_1d0._s_0.Y;
    uVar9 = local_1d0._s_0.X;
    dVar7 = local_1d0._s_0.X + local_1d0._s_0.X;
    dVar6 = local_1d0._s_0.Y + local_1d0._s_0.Y;
    dVar5 = local_1d0._s_0.Z + local_1d0._s_0.Z;
    __libm_sse2_sincos_();
    local_198._s_0.Y = ((double)uVar10 * dVar5 - local_1d0._s_0.W * dVar7) * extraout_XMM0_Qa;
    local_198._s_0.X = ((double)uVar9 * dVar5 + local_1d0._s_0.W * dVar6) * extraout_XMM0_Qa;
    local_198._s_0.Z = (dVar8 - ((double)uVar10 * dVar6 + (double)uVar9 * dVar7)) * extraout_XMM0_Qa
    ;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_1e8._s_0,(TQuaternion<double> *)&local_198._s_0);
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar7 = __real_3e45798ee0000000;
    iVar2 = (this->RayDirections).ArrayNum;
    pFVar16 = (this->RayDirections).AllocatorInstance.Data;
    local_118[0] = this->MaxDistance;
    dVar5 = 0.0;
    dVar6 = 0.0;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    local_108 = 0;
    local_e0 = (longlong *)0x0;
    local_d8 = 0;
    while( true ) {
      if ((this->RayDirections).ArrayNum != iVar2) {
        local_248[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_248);
      }
      if (pFVar16 == pFVar1) break;
      local_148._s_0.X = (double)*(undefined8 *)pFVar16;
      local_148._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
      local_148._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
      operator*<double>((TVector<double> *)&local_130._s_0,(TQuaternion<double> *)&local_1d0._s_0,
                        (TVector<double> *)&local_148._s_0);
      local_208 = local_220;
      local_218 = local_230;
      dStack_210 = dStack_228;
      local_200._s_0.Z = local_130._s_0.Z;
      local_200._s_0.X = local_130._s_0.X;
      local_200._s_0.Y = local_130._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_200._s_0,dVar7);
      if ((double)local_23c * local_200._s_0.Y + (double)local_240 * local_200._s_0.X +
          (double)local_238 * local_200._s_0.Z <= 0.0) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3193436561148477145>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                            ,0x127,"OcclusionRay.Direction.Dot(FVector3d(DetailTriNormal)) > 0");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          pTVar14 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
          return pTVar14;
        }
      }
      cVar13 = (**(code **)((longlong)*this->DetailSampler + 0x80))
                         (this->DetailSampler,&local_218,local_118);
      dVar19 = (double)local_23c * local_200._s_0.Y + (double)local_240 * local_200._s_0.X +
               (double)local_238 * local_200._s_0.Z;
      dVar18 = dVar8;
      if (dVar19 < this->BiasDotThreshold) {
        dVar19 = dVar19 / this->BiasDotThreshold;
        if (0.0 <= dVar19) {
          if (dVar8 <= dVar19) {
            dVar19 = dVar8;
          }
          if (0.0 <= dVar19) goto LAB_14c875621;
          dVar19 = 0.0;
        }
        else {
          dVar19 = 0.0;
LAB_14c875621:
          if (dVar8 <= dVar19) {
            dVar19 = dVar8;
          }
        }
        dVar18 = dVar19 * dVar19;
      }
      dVar6 = dVar6 + dVar18;
      if (cVar13 != '\0') {
        dVar5 = dVar5 + dVar18;
      }
      pFVar16 = pFVar16 + 0x18;
    }
    if (dVar6 <= __real_3f1a36e2eb1c432d) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = dVar5 / dVar6;
    }
    *(float *)__return_storage_ptr__ = (float)dVar5;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)(double)uVar9;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)(double)uVar10;
    *(float *)&__return_storage_ptr__->field_0xc = (float)(double)uVar11;
    if (local_108 != 0) {
      plVar15 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar15 = local_e0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// SampleFunction<2,1> @ 14c8762b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<float,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::SampleFunction<2,1>
          (FMeshOcclusionMapEvaluator *this,
          TTuple<float,UE::Math::TVector<float>_> *__return_storage_ptr__,
          FCorrespondenceSample *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  TTuple<float,UE::Math::TVector<float>_> *pTVar13;
  double *pdVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  double extraout_XMM0_Qa;
  double dVar17;
  float fVar18;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [8];
  float local_280;
  float local_27c;
  float local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  TTuple<float,UE::Math::TVector<float>_> *local_240;
  double local_238;
  double dStack_230;
  double local_228;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TQuaternion<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TQuaternion<double>_u_0 local_1a0;
  double local_180;
  double dStack_178;
  double local_170;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108 [2];
  longlong local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8;
  ulonglong local_b8;
  
  pdVar14 = &local_1b8;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pvVar3 = param_1->DetailMesh;
  iVar2 = param_1->DetailTriID;
  local_240 = __return_storage_ptr__;
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar3,iVar2,&param_1->DetailBaryCoords);
  fVar18 = local_27c * local_27c + local_280 * local_280 + local_278 * local_278;
  if (fVar18 <= __real_322bcc77) {
    dVar17 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar8 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar17;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar6;
    *(float *)&__return_storage_ptr__->field_0xc = (float)dVar8;
  }
  else {
    fVar18 = __real_3f800000 / SQRT(fVar18);
    local_170 = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
    local_280 = local_280 * fVar18;
    local_27c = local_27c * fVar18;
    local_278 = local_278 * fVar18;
    local_180 = (param_1->DetailBaryCoords).field0_0x0._s_0.X;
    dStack_178 = (param_1->DetailBaryCoords).field0_0x0._s_0.Y;
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_270,pvVar3,iVar2);
    dVar10 = __real_3ff0000000000000;
    local_1d0._s_0.X = (double)local_280;
    local_1d0._s_0.Y = (double)local_27c;
    local_1d0._s_0.Z = (double)local_278;
    local_270 = local_270 + local_1d0._s_0.X * __real_3ee4f8b580000000;
    dStack_268 = dStack_268 + local_1d0._s_0.Y * __real_3ee4f8b580000000;
    local_1f0._s_0.X = 0.0;
    local_1f0._s_0.W = __real_3ff0000000000000;
    local_260 = local_260 + local_1d0._s_0.Z * __real_3ee4f8b580000000;
    local_1f0._s_0.Y = 0.0;
    local_1f0._s_0.Z = 0.0;
    local_168._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_168._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_168._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_208._s_0.X = local_270;
    local_208._s_0.Y = dStack_268;
    local_208._s_0.Z = local_260;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_1f0._s_0,(TVector<double> *)&local_168._s_0,
               (TVector<double> *)&local_1d0._s_0);
    rand();
    uVar7 = local_1f0._s_0.Y;
    uVar5 = local_1f0._s_0.X;
    dVar8 = local_1f0._s_0.X + local_1f0._s_0.X;
    dVar6 = local_1f0._s_0.Y + local_1f0._s_0.Y;
    dVar17 = local_1f0._s_0.Z + local_1f0._s_0.Z;
    __libm_sse2_sincos_();
    local_1a0._s_0.Y = ((double)uVar7 * dVar17 - local_1f0._s_0.W * dVar8) * extraout_XMM0_Qa;
    local_1a0._s_0.X = ((double)uVar5 * dVar17 + local_1f0._s_0.W * dVar6) * extraout_XMM0_Qa;
    local_1a0._s_0.Z = (dVar10 - ((double)uVar7 * dVar6 + (double)uVar5 * dVar8)) * extraout_XMM0_Qa
    ;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_208._s_0,(TQuaternion<double> *)&local_1a0._s_0);
    dVar17 = __real_3e45798ee0000000;
    local_108[0] = this->MaxDistance;
    iVar2 = (this->RayDirections).ArrayNum;
    pFVar16 = (this->RayDirections).AllocatorInstance.Data;
    local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    local_f8 = 0;
    local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d0 = (longlong *)0x0;
    local_c8 = 0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    while( true ) {
      if ((this->RayDirections).ArrayNum != iVar2) {
        local_288[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_288);
      }
      __return_storage_ptr__ = local_240;
      if (pFVar16 == pFVar1) break;
      local_150._s_0.X = (double)*(undefined8 *)pFVar16;
      local_150._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
      local_150._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
      operator*<double>((TVector<double> *)&local_138._s_0,(TQuaternion<double> *)&local_1f0._s_0,
                        (TVector<double> *)&local_150._s_0);
      local_228 = local_260;
      local_238 = local_270;
      dStack_230 = dStack_268;
      local_220._s_0.Z = local_138._s_0.Z;
      local_220._s_0.X = local_138._s_0.X;
      local_220._s_0.Y = local_138._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_220._s_0,dVar17);
      if ((double)local_27c * local_220._s_0.Y + (double)local_280 * local_220._s_0.X +
          (double)local_278 * local_220._s_0.Z <= 0.0) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3193436561148477145>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                            ,0x127,"OcclusionRay.Direction.Dot(FVector3d(DetailTriNormal)) > 0");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
          return pTVar13;
        }
      }
      cVar12 = (**(code **)((longlong)*this->DetailSampler + 0x80))
                         (this->DetailSampler,&local_238,local_108);
      if (cVar12 == '\0') {
        uVar9 = (double)uVar9 + local_220._s_0.X;
        uVar7 = (double)uVar7 + local_220._s_0.Y;
        uVar5 = (double)uVar5 + local_220._s_0.Z;
      }
      pFVar16 = pFVar16 + 0x18;
    }
    dVar17 = SQRT((double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
                  (double)uVar5 * (double)uVar5);
    if (dVar17 <= 0.0) {
      pdVar14 = &local_120;
      local_120 = (param_2->field0_0x0)._s_0.X;
      dStack_118 = (param_2->field0_0x0)._s_0.Y;
      local_110 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      dVar10 = dVar10 / dVar17;
      local_1b8 = (double)uVar9 * dVar10;
      dStack_1b0 = (double)uVar7 * dVar10;
      local_1a8 = (double)uVar5 * dVar10;
    }
    local_248 = pdVar14[2];
    dVar17 = *pdVar14;
    dVar6 = pdVar14[1];
    *(undefined4 *)local_240 = 0;
    *(float *)&local_240->field_0x4 = (float)dVar17;
    *(float *)&local_240->field_0x8 = (float)dVar6;
    *(float *)&local_240->field_0xc = (float)local_248;
    if (local_f8 != 0) {
      plVar15 = local_e8;
      if (local_d0 != (longlong *)0x0) {
        plVar15 = local_d0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// SampleFunction<2,0> @ 14c8768b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<float,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::SampleFunction<2,0>
          (FMeshOcclusionMapEvaluator *this,
          TTuple<float,UE::Math::TVector<float>_> *__return_storage_ptr__,
          FCorrespondenceSample *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  TTuple<float,UE::Math::TVector<float>_> *pTVar13;
  double *pdVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  double extraout_XMM0_Qa;
  double dVar17;
  float fVar18;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  float local_2b0;
  float local_2ac;
  float local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  TTuple<float,UE::Math::TVector<float>_> *local_270;
  double local_268;
  double dStack_260;
  double local_258;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TQuaternion<double>_u_0 local_220;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TQuaternion<double>_u_0 local_1a0;
  double local_180;
  double dStack_178;
  double local_170;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108 [2];
  longlong local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pvVar3 = param_1->DetailMesh;
  iVar2 = param_1->DetailTriID;
  local_270 = __return_storage_ptr__;
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar3,iVar2,&param_1->DetailBaryCoords);
  fVar18 = local_2ac * local_2ac + local_2b0 * local_2b0 + local_2a8 * local_2a8;
  if (fVar18 <= __real_322bcc77) {
    dVar17 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar8 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar17;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar6;
    *(float *)&__return_storage_ptr__->field_0xc = (float)dVar8;
  }
  else {
    fVar18 = __real_3f800000 / SQRT(fVar18);
    local_2b0 = local_2b0 * fVar18;
    local_2ac = local_2ac * fVar18;
    local_2a8 = local_2a8 * fVar18;
    if (this->BaseMeshTangents == (TMeshTangents<double> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BaseMeshTangents",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                          ,0x10c,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
        return pTVar13;
      }
    }
    TMeshTangents<double>::GetInterpolatedTriangleTangent
              (this->BaseMeshTangents,(param_1->BaseSample).TriangleIndex,
               &(param_1->BaseSample).BaryCoords,(TVector<double> *)&local_1e8._s_0,
               (TVector<double> *)&local_1d0._s_0);
    local_180 = (param_1->DetailBaryCoords).field0_0x0._s_0.X;
    dStack_178 = (param_1->DetailBaryCoords).field0_0x0._s_0.Y;
    local_170 = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_2a0,pvVar3,iVar2);
    dVar10 = __real_3ff0000000000000;
    local_200._s_0.X = (double)local_2b0;
    local_200._s_0.Y = (double)local_2ac;
    local_200._s_0.Z = (double)local_2a8;
    local_2a0 = local_2a0 + local_200._s_0.X * __real_3ee4f8b580000000;
    dStack_298 = dStack_298 + local_200._s_0.Y * __real_3ee4f8b580000000;
    local_220._s_0.X = 0.0;
    local_220._s_0.W = __real_3ff0000000000000;
    local_290 = local_290 + local_200._s_0.Z * __real_3ee4f8b580000000;
    local_220._s_0.Y = 0.0;
    local_220._s_0.Z = 0.0;
    local_168._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_168._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_168._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_238._s_0.X = local_2a0;
    local_238._s_0.Y = dStack_298;
    local_238._s_0.Z = local_290;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_220._s_0,(TVector<double> *)&local_168._s_0,
               (TVector<double> *)&local_200._s_0);
    rand();
    uVar7 = local_220._s_0.Y;
    uVar5 = local_220._s_0.X;
    dVar8 = local_220._s_0.X + local_220._s_0.X;
    dVar17 = local_220._s_0.Z + local_220._s_0.Z;
    dVar6 = local_220._s_0.Y + local_220._s_0.Y;
    __libm_sse2_sincos_();
    local_1a0._s_0.Y = ((double)uVar7 * dVar17 - local_220._s_0.W * dVar8) * extraout_XMM0_Qa;
    local_1a0._s_0.X = ((double)uVar5 * dVar17 + local_220._s_0.W * dVar6) * extraout_XMM0_Qa;
    local_1a0._s_0.Z = (dVar10 - ((double)uVar7 * dVar6 + (double)uVar5 * dVar8)) * extraout_XMM0_Qa
    ;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_238._s_0,(TQuaternion<double> *)&local_1a0._s_0);
    dVar17 = __real_3e45798ee0000000;
    local_108[0] = this->MaxDistance;
    iVar2 = (this->RayDirections).ArrayNum;
    pFVar16 = (this->RayDirections).AllocatorInstance.Data;
    local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    local_f8 = 0;
    local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d0 = (longlong *)0x0;
    local_c8 = 0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    while( true ) {
      if ((this->RayDirections).ArrayNum != iVar2) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2b8);
      }
      __return_storage_ptr__ = local_270;
      if (pFVar16 == pFVar1) break;
      local_150._s_0.X = (double)*(undefined8 *)pFVar16;
      local_150._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
      local_150._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
      operator*<double>((TVector<double> *)&local_138._s_0,(TQuaternion<double> *)&local_220._s_0,
                        (TVector<double> *)&local_150._s_0);
      local_258 = local_290;
      local_268 = local_2a0;
      dStack_260 = dStack_298;
      local_250._s_0.Z = local_138._s_0.Z;
      local_250._s_0.X = local_138._s_0.X;
      local_250._s_0.Y = local_138._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_250._s_0,dVar17);
      if ((double)local_2ac * local_250._s_0.Y + (double)local_2b0 * local_250._s_0.X +
          (double)local_2a8 * local_250._s_0.Z <= 0.0) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3193436561148477145>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                            ,0x127,"OcclusionRay.Direction.Dot(FVector3d(DetailTriNormal)) > 0");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
          return pTVar13;
        }
      }
      cVar12 = (**(code **)((longlong)*this->DetailSampler + 0x80))
                         (this->DetailSampler,&local_268,local_108);
      if (cVar12 == '\0') {
        uVar9 = (double)uVar9 +
                local_1e8._s_0.Y * local_250._s_0.Y + local_1e8._s_0.X * local_250._s_0.X +
                local_1e8._s_0.Z * local_250._s_0.Z;
        uVar7 = (double)uVar7 +
                local_1d0._s_0.Y * local_250._s_0.Y + local_1d0._s_0.X * local_250._s_0.X +
                local_1d0._s_0.Z * local_250._s_0.Z;
        uVar5 = (double)uVar5 +
                local_250._s_0.Y * (param_1->BaseNormal).field0_0x0._s_0.Y +
                local_250._s_0.X * (param_1->BaseNormal).field0_0x0._s_0.X +
                local_250._s_0.Z * (param_1->BaseNormal).field0_0x0._s_0.Z;
      }
      pFVar16 = pFVar16 + 0x18;
    }
    dVar17 = SQRT((double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
                  (double)uVar5 * (double)uVar5);
    if (dVar17 <= 0.0) {
      pdVar14 = &local_120;
      local_120 = (param_2->field0_0x0)._s_0.X;
      dStack_118 = (param_2->field0_0x0)._s_0.Y;
      local_110 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      dVar10 = dVar10 / dVar17;
      pdVar14 = &local_1b8;
      local_1b8 = (double)uVar9 * dVar10;
      dStack_1b0 = (double)uVar7 * dVar10;
      local_1a8 = (double)uVar5 * dVar10;
    }
    local_278 = pdVar14[2];
    dVar17 = *pdVar14;
    dVar6 = pdVar14[1];
    *(undefined4 *)local_270 = 0;
    *(float *)&local_270->field_0x4 = (float)dVar17;
    *(float *)&local_270->field_0x8 = (float)dVar6;
    *(float *)&local_270->field_0xc = (float)local_278;
    if (local_f8 != 0) {
      plVar15 = local_e8;
      if (local_d0 != (longlong *)0x0) {
        plVar15 = local_d0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// SampleFunction<3,1> @ 14c876f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<float,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::SampleFunction<3,1>
          (FMeshOcclusionMapEvaluator *this,
          TTuple<float,UE::Math::TVector<float>_> *__return_storage_ptr__,
          FCorrespondenceSample *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  TTuple<float,UE::Math::TVector<float>_> *pTVar13;
  double *pdVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  double extraout_XMM0_Qa;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8 [8];
  float local_2a0;
  float local_29c;
  float local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TQuaternion<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  TQuaternion<double>_u_0 local_1c8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pvVar3 = param_1->DetailMesh;
  iVar2 = param_1->DetailTriID;
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar3,iVar2,&param_1->DetailBaryCoords);
  fVar18 = local_29c * local_29c + local_2a0 * local_2a0 + local_298 * local_298;
  if (fVar18 <= __real_322bcc77) {
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar17 = (param_2->field0_0x0)._s_0.Y;
    dVar8 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar5;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar17;
    *(float *)&__return_storage_ptr__->field_0xc = (float)dVar8;
  }
  else {
    fVar18 = __real_3f800000 / SQRT(fVar18);
    local_198 = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
    local_2a0 = local_2a0 * fVar18;
    local_29c = local_29c * fVar18;
    local_298 = local_298 * fVar18;
    local_1a8 = (param_1->DetailBaryCoords).field0_0x0._s_0.X;
    dStack_1a0 = (param_1->DetailBaryCoords).field0_0x0._s_0.Y;
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_290,pvVar3,iVar2);
    dVar10 = __real_3ff0000000000000;
    local_1f8._s_0.X = (double)local_2a0;
    local_1f8._s_0.Y = (double)local_29c;
    local_1f8._s_0.Z = (double)local_298;
    local_290 = local_290 + local_1f8._s_0.X * __real_3ee4f8b580000000;
    dStack_288 = dStack_288 + local_1f8._s_0.Y * __real_3ee4f8b580000000;
    local_218._s_0.X = 0.0;
    local_218._s_0.W = __real_3ff0000000000000;
    local_280 = local_280 + local_1f8._s_0.Z * __real_3ee4f8b580000000;
    local_218._s_0.Y = 0.0;
    local_218._s_0.Z = 0.0;
    local_190._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_190._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_190._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_230._s_0.X = local_290;
    local_230._s_0.Y = dStack_288;
    local_230._s_0.Z = local_280;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_218._s_0,(TVector<double> *)&local_190._s_0,
               (TVector<double> *)&local_1f8._s_0);
    rand();
    uVar7 = local_218._s_0.Y;
    uVar6 = local_218._s_0.X;
    dVar8 = local_218._s_0.X + local_218._s_0.X;
    dVar17 = local_218._s_0.Y + local_218._s_0.Y;
    dVar5 = local_218._s_0.Z + local_218._s_0.Z;
    __libm_sse2_sincos_();
    local_1c8._s_0.Y = ((double)uVar7 * dVar5 - local_218._s_0.W * dVar8) * extraout_XMM0_Qa;
    local_1c8._s_0.X = ((double)uVar6 * dVar5 + local_218._s_0.W * dVar17) * extraout_XMM0_Qa;
    local_1c8._s_0.Z =
         (dVar10 - ((double)uVar7 * dVar17 + (double)uVar6 * dVar8)) * extraout_XMM0_Qa;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_230._s_0,(TQuaternion<double> *)&local_1c8._s_0);
    dVar8 = __real_3e45798ee0000000;
    local_128[0] = this->MaxDistance;
    iVar2 = (this->RayDirections).ArrayNum;
    pFVar16 = (this->RayDirections).AllocatorInstance.Data;
    dVar5 = 0.0;
    local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = 0;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    dVar17 = 0.0;
    local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    while( true ) {
      if ((this->RayDirections).ArrayNum != iVar2) {
        local_2a8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2a8);
      }
      if (pFVar16 == pFVar1) break;
      local_178._s_0.X = (double)*(undefined8 *)pFVar16;
      local_178._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
      local_178._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
      operator*<double>((TVector<double> *)&local_160._s_0,(TQuaternion<double> *)&local_218._s_0,
                        (TVector<double> *)&local_178._s_0);
      local_250 = local_280;
      local_260 = local_290;
      dStack_258 = dStack_288;
      local_248._s_0.Z = local_160._s_0.Z;
      local_248._s_0.X = local_160._s_0.X;
      local_248._s_0.Y = local_160._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_248._s_0,dVar8);
      if ((double)local_29c * local_248._s_0.Y + (double)local_2a0 * local_248._s_0.X +
          (double)local_298 * local_248._s_0.Z <= 0.0) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3193436561148477145>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                            ,0x127,"OcclusionRay.Direction.Dot(FVector3d(DetailTriNormal)) > 0");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
          return pTVar13;
        }
      }
      cVar12 = (**(code **)((longlong)*this->DetailSampler + 0x80))
                         (this->DetailSampler,&local_260,local_128);
      dVar20 = (double)local_29c * local_248._s_0.Y + (double)local_2a0 * local_248._s_0.X +
               (double)local_298 * local_248._s_0.Z;
      dVar19 = dVar10;
      if (dVar20 < this->BiasDotThreshold) {
        dVar20 = dVar20 / this->BiasDotThreshold;
        if (0.0 <= dVar20) {
          if (dVar10 <= dVar20) {
            dVar20 = dVar10;
          }
          if (0.0 <= dVar20) goto LAB_14c877448;
          dVar20 = 0.0;
        }
        else {
          dVar20 = 0.0;
LAB_14c877448:
          if (dVar10 <= dVar20) {
            dVar20 = dVar10;
          }
        }
        dVar19 = dVar20 * dVar20;
      }
      dVar17 = dVar17 + dVar19;
      if (cVar12 == '\0') {
        uVar9 = (double)uVar9 + local_248._s_0.X;
        pFVar16 = pFVar16 + 0x18;
        uVar7 = (double)uVar7 + local_248._s_0.Y;
        uVar6 = (double)uVar6 + local_248._s_0.Z;
      }
      else {
        dVar5 = dVar5 + dVar19;
        pFVar16 = pFVar16 + 0x18;
      }
    }
    if (dVar17 <= __real_3f1a36e2eb1c432d) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = dVar5 / dVar17;
    }
    dVar17 = SQRT((double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
                  (double)uVar6 * (double)uVar6);
    if (dVar17 <= 0.0) {
      pdVar14 = &local_148;
      local_148 = (param_2->field0_0x0)._s_0.X;
      dStack_140 = (param_2->field0_0x0)._s_0.Y;
      local_138 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      dVar10 = dVar10 / dVar17;
      pdVar14 = &local_1e0;
      local_1e0 = (double)uVar9 * dVar10;
      dStack_1d8 = (double)uVar7 * dVar10;
      local_1d0 = (double)uVar6 * dVar10;
    }
    local_268 = pdVar14[2];
    dVar17 = *pdVar14;
    dVar8 = pdVar14[1];
    *(float *)__return_storage_ptr__ = (float)dVar5;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar17;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar8;
    *(float *)&__return_storage_ptr__->field_0xc = (float)local_268;
    if (local_118 != 0) {
      plVar15 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar15 = local_f0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// SampleFunction<3,0> @ 14c877640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<float,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::SampleFunction<3,0>
          (FMeshOcclusionMapEvaluator *this,
          TTuple<float,UE::Math::TVector<float>_> *__return_storage_ptr__,
          FCorrespondenceSample *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  TTuple<float,UE::Math::TVector<float>_> *pTVar13;
  double *pdVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  double extraout_XMM0_Qa;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [8];
  float local_2d0;
  float local_2cc;
  float local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TTuple<float,UE::Math::TVector<float>_> *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TQuaternion<double>_u_0 local_240;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TQuaternion<double>_u_0 local_1c0;
  double local_1a0;
  double dStack_198;
  double local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pvVar3 = param_1->DetailMesh;
  iVar2 = param_1->DetailTriID;
  local_290 = __return_storage_ptr__;
  (**(code **)((longlong)*this->DetailSampler + 0xe8))
            (this->DetailSampler,pvVar3,iVar2,&param_1->DetailBaryCoords);
  fVar18 = local_2cc * local_2cc + local_2d0 * local_2d0 + local_2c8 * local_2c8;
  if (fVar18 <= __real_322bcc77) {
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar17 = (param_2->field0_0x0)._s_0.Y;
    dVar8 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(float *)&__return_storage_ptr__->field_0x4 = (float)dVar5;
    *(float *)&__return_storage_ptr__->field_0x8 = (float)dVar17;
    *(float *)&__return_storage_ptr__->field_0xc = (float)dVar8;
  }
  else {
    fVar18 = __real_3f800000 / SQRT(fVar18);
    local_2d0 = local_2d0 * fVar18;
    local_2cc = local_2cc * fVar18;
    local_2c8 = local_2c8 * fVar18;
    if (this->BaseMeshTangents == (TMeshTangents<double> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BaseMeshTangents",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                          ,0x10c,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
        return pTVar13;
      }
    }
    TMeshTangents<double>::GetInterpolatedTriangleTangent
              (this->BaseMeshTangents,(param_1->BaseSample).TriangleIndex,
               &(param_1->BaseSample).BaryCoords,(TVector<double> *)&local_208._s_0,
               (TVector<double> *)&local_1f0._s_0);
    local_1a0 = (param_1->DetailBaryCoords).field0_0x0._s_0.X;
    dStack_198 = (param_1->DetailBaryCoords).field0_0x0._s_0.Y;
    local_190 = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_2c0,pvVar3,iVar2);
    dVar10 = __real_3ff0000000000000;
    local_220._s_0.X = (double)local_2d0;
    local_220._s_0.Y = (double)local_2cc;
    local_220._s_0.Z = (double)local_2c8;
    local_2c0 = local_2c0 + local_220._s_0.X * __real_3ee4f8b580000000;
    dStack_2b8 = dStack_2b8 + local_220._s_0.Y * __real_3ee4f8b580000000;
    local_240._s_0.X = 0.0;
    local_240._s_0.W = __real_3ff0000000000000;
    local_2b0 = local_2b0 + local_220._s_0.Z * __real_3ee4f8b580000000;
    local_240._s_0.Y = 0.0;
    local_240._s_0.Z = 0.0;
    local_188._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_258._s_0.X = local_2c0;
    local_258._s_0.Y = dStack_2b8;
    local_258._s_0.Z = local_2b0;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_240._s_0,(TVector<double> *)&local_188._s_0,
               (TVector<double> *)&local_220._s_0);
    rand();
    uVar7 = local_240._s_0.Y;
    uVar6 = local_240._s_0.X;
    dVar8 = local_240._s_0.X + local_240._s_0.X;
    dVar5 = local_240._s_0.Z + local_240._s_0.Z;
    dVar17 = local_240._s_0.Y + local_240._s_0.Y;
    __libm_sse2_sincos_();
    local_1c0._s_0.Y = (dVar5 * (double)uVar7 - dVar8 * local_240._s_0.W) * extraout_XMM0_Qa;
    local_1c0._s_0.X = (dVar5 * (double)uVar6 + dVar17 * local_240._s_0.W) * extraout_XMM0_Qa;
    local_1c0._s_0.Z =
         (dVar10 - (dVar17 * (double)uVar7 + dVar8 * (double)uVar6)) * extraout_XMM0_Qa;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_258._s_0,(TQuaternion<double> *)&local_1c0._s_0);
    dVar8 = __real_3e45798ee0000000;
    local_128[0] = this->MaxDistance;
    iVar2 = (this->RayDirections).ArrayNum;
    pFVar16 = (this->RayDirections).AllocatorInstance.Data;
    dVar5 = 0.0;
    local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = 0;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    dVar17 = 0.0;
    local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    while( true ) {
      if ((this->RayDirections).ArrayNum != iVar2) {
        local_2d8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2d8);
      }
      __return_storage_ptr__ = local_290;
      if (pFVar16 == pFVar1) break;
      local_170._s_0.X = (double)*(undefined8 *)pFVar16;
      local_170._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
      local_170._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
      operator*<double>((TVector<double> *)&local_158._s_0,(TQuaternion<double> *)&local_240._s_0,
                        (TVector<double> *)&local_170._s_0);
      local_278 = local_2b0;
      local_288 = local_2c0;
      dStack_280 = dStack_2b8;
      local_270._s_0.Z = local_158._s_0.Z;
      local_270._s_0.X = local_158._s_0.X;
      local_270._s_0.Y = local_158._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_270._s_0,dVar8);
      if ((double)local_2cc * local_270._s_0.Y + (double)local_2d0 * local_270._s_0.X +
          (double)local_2c8 * local_270._s_0.Z <= 0.0) {
        bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3193436561148477145>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapEvaluator.cpp"
                            ,0x127,"OcclusionRay.Direction.Dot(FVector3d(DetailTriNormal)) > 0");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TTuple<float,UE::Math::TVector<float>_> *)(*pcVar4)();
          return pTVar13;
        }
      }
      cVar12 = (**(code **)((longlong)*this->DetailSampler + 0x80))
                         (this->DetailSampler,&local_288,local_128);
      dVar20 = (double)local_2cc * local_270._s_0.Y + (double)local_2d0 * local_270._s_0.X +
               (double)local_2c8 * local_270._s_0.Z;
      dVar19 = dVar10;
      if (dVar20 < this->BiasDotThreshold) {
        dVar20 = dVar20 / this->BiasDotThreshold;
        if (0.0 <= dVar20) {
          if (dVar10 <= dVar20) {
            dVar20 = dVar10;
          }
          if (0.0 <= dVar20) goto LAB_14c877b6e;
          dVar20 = 0.0;
        }
        else {
          dVar20 = 0.0;
LAB_14c877b6e:
          if (dVar10 <= dVar20) {
            dVar20 = dVar10;
          }
        }
        dVar19 = dVar20 * dVar20;
      }
      dVar17 = dVar17 + dVar19;
      if (cVar12 == '\0') {
        pFVar16 = pFVar16 + 0x18;
        uVar9 = (double)uVar9 +
                local_208._s_0.Y * local_270._s_0.Y + local_208._s_0.X * local_270._s_0.X +
                local_208._s_0.Z * local_270._s_0.Z;
        uVar7 = (double)uVar7 +
                local_1f0._s_0.Y * local_270._s_0.Y + local_1f0._s_0.X * local_270._s_0.X +
                local_1f0._s_0.Z * local_270._s_0.Z;
        uVar6 = (double)uVar6 +
                local_270._s_0.Y * (param_1->BaseNormal).field0_0x0._s_0.Y +
                local_270._s_0.X * (param_1->BaseNormal).field0_0x0._s_0.X +
                local_270._s_0.Z * (param_1->BaseNormal).field0_0x0._s_0.Z;
      }
      else {
        dVar5 = dVar5 + dVar19;
        pFVar16 = pFVar16 + 0x18;
      }
    }
    if (dVar17 <= __real_3f1a36e2eb1c432d) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = dVar5 / dVar17;
    }
    dVar17 = SQRT((double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
                  (double)uVar6 * (double)uVar6);
    if (dVar17 <= 0.0) {
      pdVar14 = &local_140;
      local_140 = (param_2->field0_0x0)._s_0.X;
      dStack_138 = (param_2->field0_0x0)._s_0.Y;
      local_130 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      dVar10 = dVar10 / dVar17;
      pdVar14 = &local_1d8;
      local_1d8 = (double)uVar9 * dVar10;
      dStack_1d0 = (double)uVar7 * dVar10;
      local_1c8 = (double)uVar6 * dVar10;
    }
    local_298 = pdVar14[2];
    dVar17 = *pdVar14;
    dVar8 = pdVar14[1];
    *(float *)local_290 = (float)dVar5;
    *(float *)&local_290->field_0x4 = (float)dVar17;
    *(float *)&local_290->field_0x8 = (float)dVar8;
    *(float *)&local_290->field_0xc = (float)local_298;
    if (local_118 != 0) {
      plVar15 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar15 = local_f0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// DataLayout @ 14c8d6d00

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::DataLayout(FMeshOcclusionMapEvaluator *this)

{
  EMeshOcclusionMapType EVar1;
  int iVar2;
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar3;
  
  EVar1 = this->OcclusionType;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((EVar1 & All) == All) {
    pTVar3 = &::Layout;
    if (iVar2 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Layout.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Layout.ArrayNum = 2;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,2,0,&::Layout.AllocatorInstance,2,&::Layout.ArrayMax);
        *(undefined8 *)::Layout.AllocatorInstance.Data = 0x300000001;
        atexit(`UE::Geometry::FMeshOcclusionMapEvaluator::DataLayout'::__l5::
               _dynamic_atexit_destructor_for__Layout__);
        _Init_thread_footer(&::_TSS0);
        return &::Layout;
      }
    }
  }
  else if ((EVar1 & AmbientOcclusion) == None) {
    if ((EVar1 & BentNormal) == None) {
      pTVar3 = &::Layout;
      if (iVar2 < ::_TSS3) {
        _Init_thread_header(&::_TSS3);
        if (::_TSS3 == -1) {
          ::Layout.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ::Layout.ArrayNum = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
          *(undefined4 *)::Layout.AllocatorInstance.Data = 1;
          atexit(`UE::Geometry::FMeshOcclusionMapEvaluator::DataLayout'::__l2::
                 _dynamic_atexit_destructor_for__Layout__);
          _Init_thread_footer(&::_TSS3);
        }
      }
    }
    else {
      pTVar3 = &::Layout;
      if (iVar2 < ::_TSS2) {
        _Init_thread_header(&::_TSS2);
        if (::_TSS2 == -1) {
          ::Layout.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ::Layout.ArrayNum = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
          *(undefined4 *)::Layout.AllocatorInstance.Data = 3;
          atexit(`UE::Geometry::FMeshOcclusionMapEvaluator::DataLayout'::__l11::
                 _dynamic_atexit_destructor_for__Layout__);
          _Init_thread_footer(&::_TSS2);
          return &::Layout;
        }
      }
    }
  }
  else {
    pTVar3 = &::Layout;
    if (iVar2 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::Layout.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Layout.ArrayNum = 1;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
        *(undefined4 *)::Layout.AllocatorInstance.Data = 1;
        atexit(`UE::Geometry::FMeshOcclusionMapEvaluator::DataLayout'::__l8::
               _dynamic_atexit_destructor_for__Layout__);
        _Init_thread_footer(&::_TSS1);
        return &::Layout;
      }
    }
  }
  return pTVar3;
}

// Setup @ 14c917e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMeshOcclusionMapEvaluator::Setup
          (FMeshOcclusionMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  EMeshOcclusionMapType EVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar13;
  code *pcVar14;
  TVector<double> *pTVar15;
  code *pcVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  double extraout_XMM0_Qa;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  THemisphericalFibonacci<double> local_res8;
  double local_128;
  double dStack_120;
  double local_118;
  TVector<double>_u_0 local_110;
  TVector<double> local_f8;
  TQuaternion<double>_u_0 local_e0 [6];
  
  pTVar13 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar13);
  EVar5 = this->OcclusionType;
  uVar20 = 0;
  if ((EVar5 & All) == All) {
    bVar22 = this->NormalSpace == Tangent;
    pcVar14 = EvaluateSample<3,0>;
    if (!bVar22) {
      pcVar14 = EvaluateSample<3,1>;
    }
    param_2->Evaluate = pcVar14;
    pcVar14 = EvaluateDefault<3,0>;
    if (!bVar22) {
      pcVar14 = EvaluateDefault<3,1>;
    }
    param_2->EvaluateDefault = pcVar14;
    pcVar14 = EvaluateColor<3,0>;
    if (!bVar22) {
      pcVar14 = EvaluateColor<3,1>;
    }
    pcVar16 = EvaluateChannel<3,1>;
    param_2->EvaluateColor = pcVar14;
    pcVar14 = EvaluateChannel<3,0>;
LAB_14c917f75:
    if (!bVar22) {
      pcVar14 = pcVar16;
    }
  }
  else {
    if ((EVar5 & AmbientOcclusion) == None) {
      if ((EVar5 & BentNormal) == None) goto LAB_14c917f85;
      bVar22 = this->NormalSpace == Tangent;
      pcVar14 = EvaluateSample<2,0>;
      if (!bVar22) {
        pcVar14 = EvaluateSample<2,1>;
      }
      param_2->Evaluate = pcVar14;
      pcVar14 = EvaluateDefault<2,0>;
      if (!bVar22) {
        pcVar14 = EvaluateDefault<2,1>;
      }
      param_2->EvaluateDefault = pcVar14;
      pcVar14 = EvaluateColor<2,0>;
      if (!bVar22) {
        pcVar14 = EvaluateColor<2,1>;
      }
      pcVar16 = EvaluateChannel<2,1>;
      param_2->EvaluateColor = pcVar14;
      pcVar14 = EvaluateChannel<2,0>;
      goto LAB_14c917f75;
    }
    param_2->Evaluate = EvaluateSample<1,0>;
    param_2->EvaluateDefault = EvaluateDefault<1,0>;
    param_2->EvaluateColor = EvaluateColor<1,0>;
    pcVar14 = EvaluateChannel<1,0>;
  }
  param_2->EvaluateChannel = pcVar14;
  param_2->EvalData = this;
  param_2->AccumulateMode = Add;
LAB_14c917f85:
  this->DetailSampler = param_1->DetailSampler;
  if (((this->OcclusionType & BentNormal) != None) && (this->NormalSpace == Tangent)) {
    this->BaseMeshTangents = (param_1->TargetMeshTangents).Object;
  }
  dVar23 = __real_4056800000000000 - this->BiasAngleDeg;
  if (0.0 <= dVar23) {
    if (__real_4056800000000000 <= dVar23) {
      dVar23 = __real_4056800000000000;
    }
  }
  else {
    dVar23 = 0.0;
  }
  dVar23 = cos(dVar23 * __real_3f91df46a2529d39);
  uVar18 = this->NumOcclusionRays;
  this->BiasDotThreshold = dVar23;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = &(this->RayDirections).ArrayMax;
  (this->RayDirections).ArrayNum = 0;
  if (*piVar1 != uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&(this->RayDirections).AllocatorInstance,0,piVar1);
  }
  dVar23 = __real_3ff0000000000000;
  local_res8.Distribution = (EDistribution)(this->Distribution != Uniform);
  iVar6 = this->NumOcclusionRays;
  uVar26 = SUB84(__real_3ff0000000000000,0);
  uVar27 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar21 = uVar20;
  local_res8.N = iVar6;
  if (0 < iVar6) {
    do {
      THemisphericalFibonacci<double>::Point
                (&local_res8,(TVector<double> *)&local_110._s_0,(int)uVar21);
      if (0.0 < local_110._s_0.Z) {
        auVar24._0_8_ = local_110._s_0.Y * local_110._s_0.Y;
        auVar24._8_8_ = 0;
        auVar25._8_8_ = 0;
        auVar25._0_8_ =
             local_110._s_0.X * local_110._s_0.X + auVar24._0_8_ +
             local_110._s_0.Z * local_110._s_0.Z;
        auVar25 = sqrtpd(auVar24,auVar25);
        if (auVar25._0_8_ <= 0.0) {
          local_118 = 0.0;
          local_128 = 0.0;
          dStack_120 = 0.0;
        }
        else {
          local_118 = dVar23 / auVar25._0_8_;
          local_128 = local_118 * local_110._s_0.X;
          dStack_120 = local_118 * local_110._s_0.Y;
          local_118 = local_118 * local_110._s_0.Z;
        }
        pFVar17 = (this->RayDirections).AllocatorInstance.Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar17 + (longlong)*piVar1 * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar12 = (this->RayDirections).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(this->RayDirections).AllocatorInstance,piVar1);
        }
        (this->RayDirections).ArrayNum = iVar12 + 1;
        pFVar7 = (this->RayDirections).AllocatorInstance.Data;
        pFVar17 = pFVar7 + (longlong)iVar12 * 0x18;
        *(double *)pFVar17 = local_128;
        *(double *)(pFVar17 + 8) = dStack_120;
        *(double *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = local_118;
      }
      uVar18 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar18;
    } while ((int)uVar18 < iVar6);
  }
  if (0 < (this->RayDirections).ArrayNum) {
    uVar28 = (undefined4)__real_bff0000000000000;
    uVar29 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    uVar21 = uVar20;
    do {
      dVar23 = (double)CONCAT44(uVar29,uVar28);
      uVar19 = (uint)uVar20;
      uVar18 = 0;
      if ((int)uVar19 < (this->RayDirections).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar11 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      uVar9 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      pFVar17 = (this->RayDirections).AllocatorInstance.Data + uVar21;
      dVar2 = *(double *)&pFVar17->field_0x0;
      dVar3 = *(double *)(pFVar17 + 8);
      dVar4 = *(double *)(pFVar17 + 0x10);
      dVar8 = dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
              dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
              dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      if (((double)CONCAT44(uVar29,uVar28) <= dVar8) &&
         (dVar23 = dVar8, (double)CONCAT44(uVar27,uVar26) <= dVar8)) {
        dVar23 = (double)CONCAT44(uVar27,uVar26);
      }
      acos(dVar23);
      __libm_sse2_sincos_();
      local_e0[0]._0_8_ = ((double)uVar11 * dVar3 - (double)uVar10 * dVar4) * extraout_XMM0_Qa;
      local_e0[0]._8_8_ = ((double)uVar9 * dVar4 - (double)uVar11 * dVar2) * extraout_XMM0_Qa;
      local_e0[0]._16_8_ = ((double)uVar10 * dVar2 - (double)uVar9 * dVar3) * extraout_XMM0_Qa;
      pTVar15 = operator*<double>(&local_f8,(TQuaternion<double> *)&local_e0[0]._s_0,
                                  (TVector<double> *)pFVar17);
      uVar26 = SUB84(__real_3ff0000000000000,0);
      uVar27 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar28 = (undefined4)__real_bff0000000000000;
      uVar29 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      uVar21 = uVar21 + 0x18;
      dVar23 = (pTVar15->field0_0x0)._s_0.Y;
      *(double *)&pFVar17->field_0x0 = (pTVar15->field0_0x0)._s_0.X;
      *(double *)(pFVar17 + 8) = dVar23;
      *(double *)(pFVar17 + 0x10) = (pTVar15->field0_0x0)._s_0.Z;
    } while ((int)(uVar19 + 1) < (this->RayDirections).ArrayNum);
  }
  return;
}

