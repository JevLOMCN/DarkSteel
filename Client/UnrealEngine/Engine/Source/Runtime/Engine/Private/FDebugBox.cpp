// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad1ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::FDebugBox::Draw
          (FDebugBox *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  TMatrix<double> *pTVar5;
  FMaterialRenderProxy *pFVar6;
  TMatrix<double> *pTVar7;
  float fVar8;
  undefined1 auStackY_2c8 [32];
  FLinearColor_u_0 local_288;
  TVector<double>_u_0 local_278;
  TTransform<double> local_258;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  fVar4 = __real_3b808081;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  fVar8 = __real_40000000;
  if (param_2 == SolidAndWireMeshes) {
LAB_147ad1b66:
    local_288._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    local_288._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_288._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    local_288._s_0.A = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
    pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_1f8);
    DrawWireBox(param_1,pTVar5,&this->Box,(FLinearColor *)&local_288._s_0,'\0',fVar8,0.0,true);
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad1bf1;
  }
  else if (param_2 == WireMesh) {
    fVar8 = this->Thickness;
    goto LAB_147ad1b66;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad1bf1:
  local_288._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_288._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_288._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_288._s_0.A = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * fVar4;
  pFVar6 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_288._s_0);
  dVar1 = (this->Box).Max.field0_0x0._s_0.X;
  dVar2 = (this->Box).Max.field0_0x0._s_0.Y;
  dVar3 = (this->Box).Max.field0_0x0._s_0.Z;
  local_278._s_0.X = (dVar1 - (this->Box).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_278._s_0.Z = (dVar3 - (this->Box).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_258.Translation.XY.m128d_f64[0] =
       (dVar1 + (this->Box).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_258.Translation.ZW.m128d_f64[0] =
       (dVar3 + (this->Box).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_278._s_0.Y = (dVar2 - (this->Box).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_258.Translation.XY.m128d_f64[1] =
       (dVar2 + (this->Box).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_258.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_258.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_258.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_258.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_258.Translation.ZW.m128d_f64[1] = 0.0;
  pTVar5 = UE::Math::TTransform<double>::ToMatrixNoScale(&local_258,&local_178);
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_f8);
  VectorMatrixMultiply(&local_1f8,pTVar5,pTVar7);
  GetBoxMesh(&local_1f8,(TVector<double> *)&local_278._s_0,pFVar6,'\0',param_5,param_6,
             (HHitProxy *)0x0);
  return;
}

