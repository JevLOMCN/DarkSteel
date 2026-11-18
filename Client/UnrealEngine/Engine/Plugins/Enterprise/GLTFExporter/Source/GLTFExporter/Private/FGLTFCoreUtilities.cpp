// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 36

// ConvertAlphaMode @ 14e5ec8e0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EGLTFJsonAlphaMode __cdecl FGLTFCoreUtilities::ConvertAlphaMode(EBlendMode param_1)

{
  if (param_1 == BLEND_Opaque) {
    return Opaque;
  }
  if (param_1 != BLEND_Masked) {
    if (param_1 != BLEND_Translucent) {
      return None;
    }
    return Blend;
  }
  return Mask;
}

// ConvertCameraType @ 14e5ecaa0

EGLTFJsonCameraType __cdecl FGLTFCoreUtilities::ConvertCameraType(Type param_1)

{
  if (param_1 == Perspective) {
    return Perspective;
  }
  if (param_1 != Orthographic) {
    return None;
  }
  return Orthographic;
}

// ConvertColor3 @ 14e5ecac0

TGLTFColor3<float> * __cdecl
FGLTFCoreUtilities::ConvertColor3(TGLTFColor3<float> *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar2 = (param_1->field0_0x0)._s_0.R;
  fVar3 = (param_1->field0_0x0)._s_0.B;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.G;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
  return __return_storage_ptr__;
}

// ConvertColor @ 14e5ecb10

TGLTFColor4<unsigned_char> __cdecl FGLTFCoreUtilities::ConvertColor(FColor *param_1)

{
  uchar *in_RDX;
  
  (param_1->field0_0x0)._s_0.B = in_RDX[2];
  (param_1->field0_0x0)._s_0.G = in_RDX[1];
  (param_1->field0_0x0)._s_0.R = *in_RDX;
  (param_1->field0_0x0)._s_0.A = in_RDX[3];
  return (TGLTFColor4<unsigned_char>)SUB84(param_1,0);
}

// ConvertColor @ 14e5ecb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFColor4<float> * __cdecl
FGLTFCoreUtilities::ConvertColor(TGLTFColor4<float> *__return_storage_ptr__,FLinearColor *param_1)

{
  undefined1 auVar1 [16];
  TGLTFColor4<float>_u_0 TVar2;
  
  auVar1 = minps((undefined1  [16])param_1->field0_0x0,___xmm_3f8000003f8000003f8000003f800000);
  TVar2 = (TGLTFColor4<float>_u_0)maxps(auVar1,ZEXT816(0));
  __return_storage_ptr__->field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// ConvertFieldOfView @ 14e5ee510

float __cdecl FGLTFCoreUtilities::ConvertFieldOfView(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = tanf(param_1 * __real_3c0efa35);
  fVar1 = atanf(fVar1 / param_2);
  return fVar1 + fVar1;
}

// ConvertInterpolation @ 14e5ee550

EGLTFJsonInterpolation __cdecl
FGLTFCoreUtilities::ConvertInterpolation(EAnimInterpolationType param_1)

{
  if (param_1 == Linear) {
    return Linear;
  }
  if (param_1 != Step) {
    return None;
  }
  return Step;
}

// ConvertLength @ 14e5ee580

float __cdecl FGLTFCoreUtilities::ConvertLength(float param_1,float param_2)

{
  return param_1 * param_2;
}

// ConvertLightAngle @ 14e5ee590

float __cdecl FGLTFCoreUtilities::ConvertLightAngle(float param_1)

{
  return param_1 * __real_3c8efa35;
}

// ConvertLightType @ 14e5ee5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

EGLTFJsonLightType __cdecl FGLTFCoreUtilities::ConvertLightType(ELightComponentType param_1)

{
  if (param_1 == LightType_Directional) {
    return Directional;
  }
  if (param_1 != LightType_Point) {
    if (param_1 != LightType_NumBits) {
      return None;
    }
    return Spot;
  }
  return Point;
}

// ConvertMagFilter @ 14e5ee5d0

EGLTFJsonTextureFilter __cdecl FGLTFCoreUtilities::ConvertMagFilter(TextureFilter param_1)

{
  if (param_1 == TF_Nearest) {
    return Nearest;
  }
  if ((param_1 != TF_Bilinear) && (param_1 != TF_Trilinear)) {
    return None;
  }
  return Linear;
}

// ConvertMatrix @ 14e5ee600

TGLTFMatrix<float,4> * __cdecl
FGLTFCoreUtilities::ConvertMatrix
          (TGLTFMatrix<float,4> *__return_storage_ptr__,TMatrix<float> *param_1)

{
  __return_storage_ptr__->Elements[0] = param_1->M[0][0];
  __return_storage_ptr__->Elements[1] = param_1->M[0][1];
  __return_storage_ptr__->Elements[2] = param_1->M[0][2];
  __return_storage_ptr__->Elements[3] = param_1->M[0][3];
  __return_storage_ptr__->Elements[4] = param_1->M[1][0];
  __return_storage_ptr__->Elements[5] = param_1->M[1][1];
  __return_storage_ptr__->Elements[6] = param_1->M[1][2];
  __return_storage_ptr__->Elements[7] = param_1->M[1][3];
  __return_storage_ptr__->Elements[8] = param_1->M[2][0];
  __return_storage_ptr__->Elements[9] = param_1->M[2][1];
  __return_storage_ptr__->Elements[10] = param_1->M[2][2];
  __return_storage_ptr__->Elements[0xb] = param_1->M[2][3];
  __return_storage_ptr__->Elements[0xc] = param_1->M[3][0];
  __return_storage_ptr__->Elements[0xd] = param_1->M[3][1];
  __return_storage_ptr__->Elements[0xe] = param_1->M[3][2];
  __return_storage_ptr__->Elements[0xf] = param_1->M[3][3];
  return __return_storage_ptr__;
}

// ConvertMinFilter @ 14e5ee670

EGLTFJsonTextureFilter __cdecl FGLTFCoreUtilities::ConvertMinFilter(TextureFilter param_1)

{
  if (param_1 == TF_Nearest) {
    return NearestMipmapNearest;
  }
  if (param_1 != TF_Bilinear) {
    if (param_1 != TF_Trilinear) {
      return None;
    }
    return LinearMipmapLinear;
  }
  return LinearMipmapNearest;
}

// ConvertNormal @ 14e5ee6a0

TGLTFVector3<float> * __cdecl
FGLTFCoreUtilities::ConvertNormal
          (TGLTFVector3<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float local_18;
  
  local_18 = (param_1->field0_0x0)._s_0.X;
  uVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = fVar1 * fVar1 + local_18 * local_18 + (float)uVar3 * (float)uVar3;
  if (fVar1 == __real_3f800000) {
    fVar1 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_18 = (float)*(undefined8 *)&param_1->field0_0x0;
  }
  else if (__real_322bcc77 <= fVar1) {
    fVar2 = __real_3f800000 / SQRT(fVar1);
    fVar1 = fVar2 * (param_1->field0_0x0)._s_0.Y;
    local_18 = fVar2 * local_18;
    uVar3 = fVar2 * (float)uVar3;
  }
  else {
    fVar1 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_18 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// ConvertNormal @ 14e5ee770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFVector4<signed_char> __cdecl FGLTFCoreUtilities::ConvertNormal(FPackedNormal *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  schar sVar6;
  undefined4 *in_RDX;
  int iVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  fVar2 = __real_437e0000;
  fVar1 = __real_3f000000;
  auVar8 = pmovsxbd(in_XMM1,*in_RDX);
  fVar10 = (float)auVar8._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
  fVar12 = (float)auVar8._4_4_ * _UNK_151040074;
  fVar13 = (float)auVar8._8_4_ * _UNK_151040078;
  fVar9 = fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13;
  uVar14 = fVar12;
  uVar15 = fVar10;
  uVar11 = fVar13;
  if ((fVar9 != __real_3f800000) &&
     (uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar9)) {
    fVar9 = __real_3f800000 / SQRT(fVar9);
    uVar14 = fVar9 * fVar12;
    uVar15 = fVar9 * fVar10;
    uVar11 = fVar9 * fVar13;
  }
  fVar10 = (float)uVar15 * __real_437e0000;
  fVar9 = (float)uVar14 * __real_437e0000;
  (param_1->Vector)._s_0.W = '\0';
  iVar3 = (int)ROUND(fVar10 + fVar1) >> 1;
  iVar7 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar7 = iVar3;
  }
  iVar4 = (int)ROUND(fVar9 + fVar1) >> 1;
  iVar3 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar3 = iVar4;
  }
  iVar5 = (int)ROUND((float)uVar11 * fVar2 + fVar1) >> 1;
  iVar4 = 0x7f;
  if (iVar5 < 0x7f) {
    iVar4 = iVar5;
  }
  sVar6 = -0x80;
  if (-0x80 < iVar7) {
    sVar6 = (schar)iVar7;
  }
  (param_1->Vector)._s_0.X = sVar6;
  sVar6 = -0x80;
  if (-0x80 < iVar4) {
    sVar6 = (schar)iVar4;
  }
  (param_1->Vector)._s_0.Y = sVar6;
  sVar6 = -0x80;
  if (-0x80 < iVar3) {
    sVar6 = (schar)iVar3;
  }
  (param_1->Vector)._s_0.Z = sVar6;
  return (TGLTFVector4<signed_char>)SUB84(param_1,0);
}

// ConvertNormal @ 14e5ee8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFVector4<short> __cdecl FGLTFCoreUtilities::ConvertNormal(FPackedRGBA16N *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined8 *in_RDX;
  int iVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  auVar7 = pmovsxwd(in_XMM1,*in_RDX);
  fVar9 = (float)auVar7._0_4_ * ___xmm_38000100380001003800010038000100;
  fVar11 = (float)auVar7._4_4_ * _UNK_150d565e4;
  fVar12 = (float)auVar7._8_4_ * _UNK_150d565e8;
  fVar8 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
  uVar13 = fVar11;
  uVar14 = fVar9;
  uVar10 = fVar12;
  if ((fVar8 != __real_3f800000) &&
     (uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar8)) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    uVar13 = fVar8 * fVar11;
    uVar14 = fVar8 * fVar9;
    uVar10 = fVar8 * fVar12;
  }
  sVar5 = -0x8000;
  iVar2 = (int)ROUND((float)uVar14 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar6 = 0x7fff;
  if (iVar2 < 0x7fff) {
    iVar6 = iVar2;
  }
  iVar3 = (int)ROUND((float)uVar13 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar2 = 0x7fff;
  if (iVar3 < 0x7fff) {
    iVar2 = iVar3;
  }
  iVar4 = (int)ROUND((float)uVar10 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar3 = 0x7fff;
  if (iVar4 < 0x7fff) {
    iVar3 = iVar4;
  }
  sVar1 = -0x8000;
  if (-0x8000 < iVar6) {
    sVar1 = (short)iVar6;
  }
  param_1->X = sVar1;
  sVar1 = -0x8000;
  if (-0x8000 < iVar3) {
    sVar1 = (short)iVar3;
  }
  param_1->Y = sVar1;
  if (-0x8000 < iVar2) {
    sVar5 = (short)iVar2;
  }
  param_1->W = 0;
  param_1->Z = sVar5;
  return (TGLTFVector4<short>)(TGLTFVector4<short>_u_0)param_1;
}

// ConvertNormalDelta @ 14e5eea00

TGLTFVector3<float> * __cdecl
FGLTFCoreUtilities::ConvertNormalDelta
          (TGLTFVector3<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// ConvertNormalDelta @ 14e5eea20

TGLTFVector4<signed_char> __cdecl FGLTFCoreUtilities::ConvertNormalDelta(FPackedNormal *param_1)

{
  schar *in_RDX;
  
  (param_1->Vector)._s_0.X = *in_RDX;
  (param_1->Vector)._s_0.Y = in_RDX[2];
  (param_1->Vector)._s_0.Z = in_RDX[1];
  (param_1->Vector)._s_0.W = '\0';
  return (TGLTFVector4<signed_char>)SUB84(param_1,0);
}

// ConvertNormalDelta @ 14e5eea50

TGLTFVector4<short> __cdecl FGLTFCoreUtilities::ConvertNormalDelta(FPackedRGBA16N *param_1)

{
  short *in_RDX;
  
  param_1->X = *in_RDX;
  param_1->Y = in_RDX[2];
  param_1->Z = in_RDX[1];
  param_1->W = 0;
  return (TGLTFVector4<short>)(TGLTFVector4<short>_u_0)param_1;
}

// ConvertPosition @ 14e5eea80

TGLTFVector3<float> * __cdecl
FGLTFCoreUtilities::ConvertPosition
          (TGLTFVector3<float> *__return_storage_ptr__,TVector<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = param_2 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = param_2 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_2 * fVar2;
  return __return_storage_ptr__;
}

// ConvertRotation @ 14e5eeab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFQuaternion<float> * __cdecl
FGLTFCoreUtilities::ConvertRotation
          (TGLTFQuaternion<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar7 = param_1->X;
  fVar8 = param_1->Y;
  fVar9 = param_1->Z;
  fVar10 = param_1->W;
  fVar14 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar15 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar16 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar17 = fVar9 * fVar9 + fVar10 * fVar10;
  auVar12._0_4_ = fVar16 + fVar14;
  auVar12._4_4_ = fVar17 + fVar15;
  auVar12._8_4_ = fVar14 + fVar16;
  auVar12._12_4_ = fVar15 + fVar17;
  bVar4 = _UNK_1506895d4 <= auVar12._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
  bVar6 = _UNK_1506895dc <= auVar12._12_4_;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)(((uint)(auVar13._0_4_ * fVar7) &
                -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
               ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
               GlobalVectorConstants::Float0001.m128_u32[0]) ^
              __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)(((uint)(auVar13._8_4_ * fVar9) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2) ^ uVar11);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)(((uint)(auVar13._4_4_ * fVar8) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1) ^ uVar11);
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       (float)((uint)(auVar13._12_4_ * fVar10) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// ConvertRotation @ 14e5eeb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFQuaternion<float> * __cdecl
FGLTFCoreUtilities::ConvertRotation
          (TGLTFQuaternion<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  TQuat<float> *pTVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TQuat<float> local_18;
  
  pTVar12 = UE::Math::TRotator<float>::Quaternion(param_1,&local_18);
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar7 = pTVar12->X;
  fVar8 = pTVar12->Y;
  fVar9 = pTVar12->Z;
  fVar10 = pTVar12->W;
  fVar15 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar16 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar17 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar18 = fVar9 * fVar9 + fVar10 * fVar10;
  auVar13._0_4_ = fVar17 + fVar15;
  auVar13._4_4_ = fVar18 + fVar16;
  auVar13._8_4_ = fVar15 + fVar17;
  auVar13._12_4_ = fVar16 + fVar18;
  bVar4 = _UNK_1506895d4 <= auVar13._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar13._8_4_;
  bVar6 = _UNK_1506895dc <= auVar13._12_4_;
  auVar14 = sqrtps(auVar13,auVar13);
  auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)(((uint)(auVar14._0_4_ * fVar7) &
                -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar13._0_4_) |
               ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar13._0_4_) &
               GlobalVectorConstants::Float0001.m128_u32[0]) ^
              __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)(((uint)(auVar14._8_4_ * fVar9) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2) ^ uVar11);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)(((uint)(auVar14._4_4_ * fVar8) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1) ^ uVar11);
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       (float)((uint)(auVar14._12_4_ * fVar10) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// ConvertScale @ 14e5eec60

TGLTFVector3<float> * __cdecl
FGLTFCoreUtilities::ConvertScale
          (TGLTFVector3<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// ConvertShadingModel @ 14e5eec80

EGLTFJsonShadingModel __cdecl FGLTFCoreUtilities::ConvertShadingModel(EMaterialShadingModel param_1)

{
  if (param_1 == MSM_Unlit) {
    return Unlit;
  }
  if (param_1 == MSM_DefaultLit) {
    return Default;
  }
  if (param_1 == MSM_ClearCoat) {
    return ClearCoat;
  }
  if (param_1 != MSM_Cloth) {
    if (param_1 != MSM_ThinTranslucent) {
      return None;
    }
    return Transmission;
  }
  return Sheen;
}

// ConvertTangent @ 14e5eed80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFVector4<signed_char> __cdecl
FGLTFCoreUtilities::ConvertTangent(FPackedNormal *param_1,FPackedNormal *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  schar sVar5;
  longlong in_R8;
  int iVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  auVar7 = pmovsxbd(in_XMM1,(param_2->Vector).Packed);
  fVar9 = (float)auVar7._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
  fVar11 = (float)auVar7._4_4_ * _UNK_151040074;
  fVar12 = (float)auVar7._8_4_ * _UNK_151040078;
  fVar8 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
  uVar13 = fVar11;
  uVar14 = fVar9;
  uVar10 = fVar12;
  if ((fVar8 != __real_3f800000) &&
     (uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar8)) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    uVar13 = fVar8 * fVar11;
    uVar14 = fVar8 * fVar9;
    uVar10 = fVar8 * fVar12;
  }
  iVar2 = (int)ROUND((float)uVar14 * __real_437e0000 + __real_3f000000) >> 1;
  iVar6 = 0x7f;
  if (iVar2 < 0x7f) {
    iVar6 = iVar2;
  }
  iVar3 = (int)ROUND((float)uVar13 * __real_437e0000 + __real_3f000000) >> 1;
  iVar2 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar2 = iVar3;
  }
  iVar4 = (int)ROUND((float)uVar10 * __real_437e0000 + __real_3f000000) >> 1;
  iVar3 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar3 = iVar4;
  }
  sVar5 = -0x80;
  if (-0x80 < iVar6) {
    sVar5 = (schar)iVar6;
  }
  (param_1->Vector)._s_0.X = sVar5;
  sVar5 = -0x80;
  if (-0x80 < iVar3) {
    sVar5 = (schar)iVar3;
  }
  (param_1->Vector)._s_0.Y = sVar5;
  sVar5 = -0x80;
  if (-0x80 < iVar2) {
    sVar5 = (schar)iVar2;
  }
  cVar1 = *(char *)(in_R8 + 3);
  (param_1->Vector)._s_0.Z = sVar5;
  (param_1->Vector)._s_0.W = (cVar1 >> 7 & 1U) + 0x7f;
  return (TGLTFVector4<signed_char>)SUB84(param_1,0);
}

// ConvertTangent @ 14e5eeee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFVector4<short> __cdecl
FGLTFCoreUtilities::ConvertTangent(FPackedRGBA16N *param_1,FPackedRGBA16N *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  longlong in_R8;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  auVar7 = pmovsxwd(in_XMM1,*param_2);
  fVar9 = (float)auVar7._0_4_ * ___xmm_38000100380001003800010038000100;
  fVar11 = (float)auVar7._4_4_ * _UNK_150d565e4;
  fVar12 = (float)auVar7._8_4_ * _UNK_150d565e8;
  fVar8 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
  uVar13 = fVar11;
  uVar14 = fVar9;
  uVar10 = fVar12;
  if ((fVar8 != __real_3f800000) &&
     (uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar8)) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    uVar13 = fVar8 * fVar11;
    uVar14 = fVar8 * fVar9;
    uVar10 = fVar8 * fVar12;
  }
  sVar6 = -0x8000;
  iVar3 = (int)ROUND((float)uVar14 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar1 = 0x7fff;
  if (iVar3 < 0x7fff) {
    iVar1 = iVar3;
  }
  iVar4 = (int)ROUND((float)uVar13 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar3 = 0x7fff;
  if (iVar4 < 0x7fff) {
    iVar3 = iVar4;
  }
  iVar5 = (int)ROUND((float)uVar10 * __real_477ffe00 + __real_3f000000) >> 1;
  iVar4 = 0x7fff;
  if (iVar5 < 0x7fff) {
    iVar4 = iVar5;
  }
  sVar2 = -0x8000;
  if (-0x8000 < iVar1) {
    sVar2 = (short)iVar1;
  }
  param_1->X = sVar2;
  sVar2 = -0x8000;
  if (-0x8000 < iVar4) {
    sVar2 = (short)iVar4;
  }
  param_1->Y = sVar2;
  sVar2 = *(short *)(in_R8 + 6);
  if (-0x8000 < iVar3) {
    sVar6 = (short)iVar3;
  }
  param_1->Z = sVar6;
  param_1->W = (sVar2 >> 0xf & 1U) + 0x7fff;
  return (TGLTFVector4<short>)(TGLTFVector4<short>_u_0)param_1;
}

// ConvertTangent @ 14e5ef030

TGLTFVector4<float> * __cdecl
FGLTFCoreUtilities::ConvertTangent
          (TGLTFVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_48;
  
  local_48 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = fVar2 * fVar2 + local_48 * local_48 + (float)uVar4 * (float)uVar4;
  if (fVar3 == __real_3f800000) {
    local_48 = (float)*(undefined8 *)&param_1->field0_0x0;
  }
  else if (__real_322bcc77 <= fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    fVar2 = fVar3 * fVar2;
    local_48 = fVar3 * local_48;
    uVar4 = fVar3 * (float)uVar4;
  }
  else {
    fVar2 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_48 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  pfVar1 = &(param_1->field0_0x0)._s_0.W;
  fVar3 = __real_3f800000;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    fVar3 = __real_bf800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_48;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3;
  return __return_storage_ptr__;
}

// ConvertTangent @ 14e5ef140

TGLTFVector4<float> * __cdecl
FGLTFCoreUtilities::ConvertTangent
          (TGLTFVector4<float> *__return_storage_ptr__,TVector<float> *param_1,
          TVector4<float> *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_18;
  
  uVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + (float)uVar4 * (float)uVar4;
  if (fVar2 == __real_3f800000) {
    fVar2 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_18 = (float)*(undefined8 *)&param_1->field0_0x0;
  }
  else if (__real_322bcc77 <= fVar2) {
    fVar3 = __real_3f800000 / SQRT(fVar2);
    fVar2 = fVar3 * (param_1->field0_0x0)._s_0.Y;
    local_18 = fVar3 * (param_1->field0_0x0)._s_0.X;
    uVar4 = fVar3 * (float)uVar4;
  }
  else {
    fVar2 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_18 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  pfVar1 = &(param_2->field0_0x0)._s_0.W;
  fVar3 = __real_3f800000;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    fVar3 = __real_bf800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3;
  return __return_storage_ptr__;
}

// ConvertTransform @ 14e5ef220

TGLTFMatrix<float,4> * __cdecl
FGLTFCoreUtilities::ConvertTransform
          (TGLTFMatrix<float,4> *__return_storage_ptr__,TTransform<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = (param_1->Rotation).m128_f32[3];
  fVar12 = (float)((param_1->Rotation).m128_u32[0] ^ __xmm_80000000800000008000000080000000);
  fVar8 = (float)((param_1->Rotation).m128_u32[2] ^ __xmm_80000000800000008000000080000000);
  fVar11 = (float)((param_1->Rotation).m128_u32[1] ^ __xmm_80000000800000008000000080000000);
  fVar2 = (param_1->Scale3D).m128_f32[0];
  fVar3 = (param_1->Scale3D).m128_f32[1];
  fVar4 = (param_1->Scale3D).m128_f32[2];
  fVar6 = fVar8 + fVar8;
  fVar7 = fVar11 + fVar11;
  fVar9 = (fVar12 + fVar12) * fVar12;
  fVar13 = fVar1 * (fVar12 + fVar12);
  auVar10._0_4_ = (param_1->Translation).m128_f32[0] * param_2;
  auVar10._4_4_ = (param_1->Translation).m128_f32[2] * param_2;
  auVar5._0_4_ = (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar7 * fVar11 + fVar6 * fVar8)) *
                 fVar2;
  auVar5._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar7 * fVar11 + fVar9)) * fVar4;
  auVar5._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar6 * fVar8 + fVar9)) * fVar3;
  auVar5._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar9 + fVar9)) * 0.0;
  auVar5 = insertps(auVar5,auVar5,8);
  fVar9 = auVar5._12_4_;
  auVar10._8_4_ = (param_1->Translation).m128_f32[1] * param_2;
  auVar10._12_4_ = 0;
  auVar10 = blendps(auVar10,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
  __return_storage_ptr__->Elements[0] = auVar5._0_4_;
  __return_storage_ptr__->Elements[1] = (fVar1 * fVar7 + fVar12 * fVar6) * fVar2;
  __return_storage_ptr__->Elements[2] = fVar2 * (fVar12 * fVar7 - fVar1 * fVar6);
  __return_storage_ptr__->Elements[3] = fVar9;
  __return_storage_ptr__->Elements[4] = fVar4 * (fVar12 * fVar6 - fVar1 * fVar7);
  __return_storage_ptr__->Elements[5] = auVar5._4_4_;
  __return_storage_ptr__->Elements[6] = (fVar13 + fVar8 * fVar7) * fVar4;
  __return_storage_ptr__->Elements[7] = fVar9;
  __return_storage_ptr__->Elements[8] = (fVar1 * fVar6 + fVar12 * fVar7) * fVar3;
  __return_storage_ptr__->Elements[9] = fVar3 * (fVar8 * fVar7 - fVar13);
  __return_storage_ptr__->Elements[10] = auVar5._8_4_;
  __return_storage_ptr__->Elements[0xb] = fVar9;
  __return_storage_ptr__->Elements[0xc] = auVar10._0_4_;
  __return_storage_ptr__->Elements[0xd] = auVar10._4_4_;
  __return_storage_ptr__->Elements[0xe] = auVar10._8_4_;
  __return_storage_ptr__->Elements[0xf] = auVar10._12_4_;
  return __return_storage_ptr__;
}

// ConvertUV @ 14e5ef440

TGLTFVector2<float> __cdecl FGLTFCoreUtilities::ConvertUV(TVector2<float> *param_1)

{
  float *in_RDX;
  
  (param_1->field0_0x0)._s_0.X = *in_RDX;
  (param_1->field0_0x0)._s_0.Y = in_RDX[1];
  return (TGLTFVector2<float>)(TGLTFVector2<float>_u_0)param_1;
}

// ConvertUV @ 14e5ef460

TGLTFVector2<float> __cdecl FGLTFCoreUtilities::ConvertUV(FVector2DHalf *param_1)

{
  ushort *in_RDX;
  FVector2DHalf FVar1;
  FVector2DHalf FVar2;
  
  FVar1 = (FVector2DHalf)FGenericPlatformMath::LoadHalf(in_RDX + 1);
  FVar2 = (FVector2DHalf)FGenericPlatformMath::LoadHalf(in_RDX);
  param_1[1] = FVar1;
  *param_1 = FVar2;
  return (TGLTFVector2<float>)(TGLTFVector2<float>_u_0)param_1;
}

// ConvertVector @ 14e5ef4b0

TGLTFVector3<float> * __cdecl
FGLTFCoreUtilities::ConvertVector
          (TGLTFVector3<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// ConvertWrap @ 14e5ef4d0

EGLTFJsonTextureWrap __cdecl FGLTFCoreUtilities::ConvertWrap(TextureAddress param_1)

{
  if (param_1 == TA_Wrap) {
    return Repeat;
  }
  if (param_1 != TA_Clamp) {
    if (param_1 != TA_Mirror) {
      return None;
    }
    return MirroredRepeat;
  }
  return ClampToEdge;
}

// GetLocalCameraRotation @ 14e5f6ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFQuaternion<float> * __cdecl
FGLTFCoreUtilities::GetLocalCameraRotation(TGLTFQuaternion<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TGLTFQuaternion<float>_u_0 TVar5;
  TQuat<float> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TRotator<float> local_28;
  TQuat<float> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Pitch = 0.0;
      local_28.Yaw = 90.0;
      local_28.Roll = 0.0;
      pTVar6 = UE::Math::TRotator<float>::Quaternion(&local_28,&local_18);
      fVar1 = pTVar6->X;
      fVar2 = pTVar6->Y;
      fVar3 = pTVar6->Z;
      fVar4 = pTVar6->W;
      fVar9 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar10 = fVar1 * fVar1 + fVar2 * fVar2;
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar12 = fVar3 * fVar3 + fVar4 * fVar4;
      auVar7._0_4_ = fVar11 + fVar9;
      auVar7._4_4_ = fVar12 + fVar10;
      auVar7._8_4_ = fVar9 + fVar11;
      auVar7._12_4_ = fVar10 + fVar12;
      auVar8 = sqrtps(auVar7,auVar7);
      auVar8 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar8);
      Rotation.field0_0x0._s_0.W =
           (float)((uint)(auVar8._12_4_ * fVar4) & -(uint)(_UNK_1506895dc <= auVar7._12_4_) |
                  ~-(uint)(_UNK_1506895dc <= auVar7._12_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[3]);
      Rotation.field0_0x0._s_0.X =
           (float)(((uint)(auVar8._0_4_ * fVar1) &
                    -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar7._0_4_) |
                   ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar7._0_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[0]) ^
                  __xmm_80000000800000008000000080000000);
      Rotation.field0_0x0._s_0.Y =
           (float)(((uint)(auVar8._8_4_ * fVar3) & -(uint)(_UNK_1506895d8 <= auVar7._8_4_) |
                   ~-(uint)(_UNK_1506895d8 <= auVar7._8_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[2]) ^
                  __xmm_80000000800000008000000080000000);
      Rotation.field0_0x0._s_0.Z =
           (float)(((uint)(auVar8._4_4_ * fVar2) & -(uint)(_UNK_1506895d4 <= auVar7._4_4_) |
                   ~-(uint)(_UNK_1506895d4 <= auVar7._4_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[1]) ^
                  __xmm_80000000800000008000000080000000);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar5._s_0.Y = Rotation.field0_0x0._s_0.Y;
  TVar5._s_0.X = Rotation.field0_0x0._s_0.X;
  TVar5._s_0.Z = Rotation.field0_0x0._s_0.Z;
  TVar5._s_0.W = Rotation.field0_0x0._s_0.W;
  __return_storage_ptr__->field0_0x0 = TVar5;
  return __return_storage_ptr__;
}

// GetLocalLightRotation @ 14e5f6c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TGLTFQuaternion<float> * __cdecl
FGLTFCoreUtilities::GetLocalLightRotation(TGLTFQuaternion<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TGLTFQuaternion<float>_u_0 TVar5;
  TQuat<float> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TRotator<float> local_28;
  TQuat<float> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Pitch = 0.0;
      local_28.Yaw = 90.0;
      local_28.Roll = 0.0;
      pTVar6 = UE::Math::TRotator<float>::Quaternion(&local_28,&local_18);
      fVar1 = pTVar6->X;
      fVar2 = pTVar6->Y;
      fVar3 = pTVar6->Z;
      fVar4 = pTVar6->W;
      fVar9 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar10 = fVar1 * fVar1 + fVar2 * fVar2;
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar12 = fVar3 * fVar3 + fVar4 * fVar4;
      auVar7._0_4_ = fVar11 + fVar9;
      auVar7._4_4_ = fVar12 + fVar10;
      auVar7._8_4_ = fVar9 + fVar11;
      auVar7._12_4_ = fVar10 + fVar12;
      auVar8 = sqrtps(auVar7,auVar7);
      auVar8 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar8);
      Rotation.field0_0x0._s_0.W =
           (float)((uint)(auVar8._12_4_ * fVar4) & -(uint)(_UNK_1506895dc <= auVar7._12_4_) |
                  ~-(uint)(_UNK_1506895dc <= auVar7._12_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[3]);
      Rotation.field0_0x0._s_0.X =
           (float)(((uint)(auVar8._0_4_ * fVar1) &
                    -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar7._0_4_) |
                   ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar7._0_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[0]) ^
                  __xmm_80000000800000008000000080000000);
      Rotation.field0_0x0._s_0.Y =
           (float)(((uint)(auVar8._8_4_ * fVar3) & -(uint)(_UNK_1506895d8 <= auVar7._8_4_) |
                   ~-(uint)(_UNK_1506895d8 <= auVar7._8_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[2]) ^
                  __xmm_80000000800000008000000080000000);
      Rotation.field0_0x0._s_0.Z =
           (float)(((uint)(auVar8._4_4_ * fVar2) & -(uint)(_UNK_1506895d4 <= auVar7._4_4_) |
                   ~-(uint)(_UNK_1506895d4 <= auVar7._4_4_) &
                   GlobalVectorConstants::Float0001.m128_u32[1]) ^
                  __xmm_80000000800000008000000080000000);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar5._s_0.Y = Rotation.field0_0x0._s_0.Y;
  TVar5._s_0.X = Rotation.field0_0x0._s_0.X;
  TVar5._s_0.Z = Rotation.field0_0x0._s_0.Z;
  TVar5._s_0.W = Rotation.field0_0x0._s_0.W;
  __return_storage_ptr__->field0_0x0 = TVar5;
  return __return_storage_ptr__;
}

// GetShadingModelString @ 14e5fe480

FString * __cdecl
FGLTFCoreUtilities::GetShadingModelString
          (FString *__return_storage_ptr__,EGLTFJsonShadingModel param_1)

{
  switch(param_1) {
  case Default:
    ::FString::FString(__return_storage_ptr__,L"Default");
    return __return_storage_ptr__;
  case Unlit:
    ::FString::FString(__return_storage_ptr__,L"Unlit");
    return __return_storage_ptr__;
  case ClearCoat:
    ::FString::FString(__return_storage_ptr__,L"ClearCoat");
    return __return_storage_ptr__;
  case Sheen:
    ::FString::FString(__return_storage_ptr__,L"Cloth");
    return __return_storage_ptr__;
  case Transmission:
    ::FString::FString(__return_storage_ptr__,L"ThinTranslucent");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
}

