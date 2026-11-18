// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Draw @ 147ad0e60

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

void __thiscall
FDebugRenderSceneProxy::FArrowLine::Draw(FArrowLine *this,FPrimitiveDrawInterface *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  float local_160;
  float fStack_15c;
  undefined8 local_158;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  dVar7 = __real_3ff0000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  dVar1 = (this->Start).field0_0x0._s_0.X;
  dVar2 = (this->Start).field0_0x0._s_0.Y;
  dVar6 = (this->End).field0_0x0._s_0.X - dVar1;
  dVar3 = (this->Start).field0_0x0._s_0.Z;
  dVar5 = (this->End).field0_0x0._s_0.Y - dVar2;
  dVar4 = (this->End).field0_0x0._s_0.Z - dVar3;
  auVar9._0_8_ = dVar6 * dVar6;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar5 * dVar5 + auVar9._0_8_ + dVar4 * dVar4;
  auVar10 = sqrtpd(auVar9,auVar10);
  dVar8 = __real_3ff0000000000000 / (double)(float)auVar10._0_8_;
  local_168 = (undefined1  [8])(dVar6 * dVar8);
  _local_160 = dVar5 * dVar8;
  local_158 = dVar4 * dVar8;
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)local_168,(TVector<double> *)&local_150._s_0,
             (TVector<double> *)&local_138._s_0);
  local_118.M[1][0] = local_150._s_0.X;
  local_118.M[1][1] = local_150._s_0.Y;
  local_118.M[1][2] = local_150._s_0.Z;
  local_118.M[2][0] = local_138._s_0.X;
  local_118.M[2][1] = local_138._s_0.Y;
  local_168._4_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_168._0_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_118.M[2][2] = local_138._s_0.Z;
  local_118.M[0][3] = 0.0;
  fStack_15c = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
  local_160 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_118.M[1][3] = 0.0;
  local_118.M[2][3] = 0.0;
  local_118.M[3][3] = dVar7;
  local_118.M[0][0] = dVar6 * dVar8;
  local_118.M[0][1] = dVar5 * dVar8;
  local_118.M[0][2] = dVar4 * dVar8;
  local_118.M[3][0] = dVar1;
  local_118.M[3][1] = dVar2;
  local_118.M[3][2] = dVar3;
  DrawDirectionalArrow
            (param_1,&local_118,(FLinearColor *)local_168,(float)auVar10._0_8_,this->Mag,'\0',0.0);
  return;
}

// Draw @ 147ad1090

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

void __thiscall
FDebugRenderSceneProxy::FArrowLine::Draw
          (FArrowLine *this,FPrimitiveDrawInterface *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  float local_160;
  float fStack_15c;
  undefined8 local_158;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  dVar7 = __real_3ff0000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  dVar1 = (this->Start).field0_0x0._s_0.X;
  dVar2 = (this->Start).field0_0x0._s_0.Y;
  dVar6 = (this->End).field0_0x0._s_0.X - dVar1;
  dVar3 = (this->Start).field0_0x0._s_0.Z;
  dVar5 = (this->End).field0_0x0._s_0.Y - dVar2;
  dVar4 = (this->End).field0_0x0._s_0.Z - dVar3;
  auVar9._0_8_ = dVar6 * dVar6;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar5 * dVar5 + auVar9._0_8_ + dVar4 * dVar4;
  auVar10 = sqrtpd(auVar9,auVar10);
  dVar8 = __real_3ff0000000000000 / (double)(float)auVar10._0_8_;
  local_168 = (undefined1  [8])(dVar6 * dVar8);
  _local_160 = dVar5 * dVar8;
  local_158 = dVar4 * dVar8;
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)local_168,(TVector<double> *)&local_150._s_0,
             (TVector<double> *)&local_138._s_0);
  local_118.M[1][0] = local_150._s_0.X;
  local_118.M[1][1] = local_150._s_0.Y;
  local_118.M[1][2] = local_150._s_0.Z;
  local_118.M[2][0] = local_138._s_0.X;
  local_118.M[2][1] = local_138._s_0.Y;
  local_168._4_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_168._0_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_118.M[2][2] = local_138._s_0.Z;
  local_118.M[0][3] = 0.0;
  fStack_15c = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
  local_160 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_118.M[1][3] = 0.0;
  local_118.M[2][3] = 0.0;
  local_118.M[3][3] = dVar7;
  local_118.M[0][0] = dVar6 * dVar8;
  local_118.M[0][1] = dVar5 * dVar8;
  local_118.M[0][2] = dVar4 * dVar8;
  local_118.M[3][0] = dVar1;
  local_118.M[3][1] = dVar2;
  local_118.M[3][2] = dVar3;
  DrawDirectionalArrow
            (param_1,&local_118,(FLinearColor *)local_168,(float)auVar10._0_8_,this->Mag,'\0',0.0);
  return;
}

