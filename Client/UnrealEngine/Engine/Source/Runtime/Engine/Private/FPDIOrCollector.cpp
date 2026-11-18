// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// DrawArrow @ 1482f4e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FConstraintInstance::FPDIOrCollector::DrawArrow
          (FPDIOrCollector *this,TMatrix<double> *param_1,float param_2,float param_3,uint param_4,
          FColor *param_5,FMaterialRenderProxy *param_6,ESceneDepthPriorityGroup param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStackY_288 [32];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_238._s_0.X = param_1->M[3][0];
  dVar1 = param_1->M[0][0];
  local_238._s_0.Z = param_1->M[3][2];
  local_238._s_0.Y = param_1->M[3][1];
  dVar2 = param_1->M[0][1];
  dVar3 = param_1->M[0][2];
  dVar4 = (double)param_2;
  local_220._s_0.X = dVar4 * dVar1 + local_238._s_0.X;
  local_220._s_0.Y = dVar4 * dVar2 + local_238._s_0.Y;
  local_220._s_0.Z = dVar4 * dVar3 + local_238._s_0.Z;
  if (this->Collector == (FMeshElementCollector *)0x0) {
    ::DrawCylinder(this->PDI,(TVector<double> *)&local_238._s_0,(TVector<double> *)&local_220._s_0,
                   (double)param_3,4,param_6,(uchar)param_7);
  }
  else {
    GetCylinderMesh((TVector<double> *)&local_238._s_0,(TVector<double> *)&local_220._s_0,
                    (double)param_3,4,param_6,(uchar)param_7,this->ViewIndex,this->Collector,
                    (HHitProxy *)0x0);
  }
  dVar4 = dVar4 * ___real_3ff0cccccccccccd;
  local_208.M[0][2] = param_1->M[0][2];
  local_208.M[0][3] = param_1->M[0][3];
  local_208.M[0][0] = param_1->M[0][0];
  local_208.M[0][1] = param_1->M[0][1];
  local_208.M[1][2] = param_1->M[1][2];
  local_208.M[1][3] = param_1->M[1][3];
  local_208.M[2][2] = param_1->M[2][2];
  local_208.M[2][3] = param_1->M[2][3];
  local_208.M[1][0] = param_1->M[1][0];
  local_208.M[1][1] = param_1->M[1][1];
  local_208.M[3][3] = param_1->M[3][3];
  local_208.M[2][0] = param_1->M[2][0];
  local_208.M[2][1] = param_1->M[2][1];
  local_188.M[0][0] = (double)(param_2 * __real_bdcccccd);
  local_208.M[3][1] = dVar4 * dVar2 + local_238._s_0.Y;
  local_208.M[3][0] = dVar4 * dVar1 + local_238._s_0.X;
  local_188.M[2][0] = 0.0;
  local_188.M[2][1] = 0.0;
  local_208.M[3][2] = dVar4 * dVar3 + local_238._s_0.Z;
  local_188.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_188.M[3][3] = _UNK_15061cbc8;
  local_188.M[0][1] = 0.0;
  local_188.M[1][0] = 0.0;
  local_188.M[2][3] = 0.0;
  local_188.M[0][2] = 0.0;
  local_188.M[0][3] = 0.0;
  local_188.M[1][2] = 0.0;
  local_188.M[1][3] = 0.0;
  local_188.M[3][0] = 0.0;
  local_188.M[3][1] = 0.0;
  local_188.M[1][1] = local_188.M[0][0];
  local_188.M[2][2] = local_188.M[0][0];
  VectorMatrixMultiply(&local_108,&local_188,&local_208);
  DrawCone(this,&local_108,__real_3f490fdb,__real_3f490fdb,param_4,param_5,param_6,param_7);
  return;
}

// DrawCone @ 1482f5130

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
FConstraintInstance::FPDIOrCollector::DrawCone
          (FPDIOrCollector *this,TMatrix<double> *param_1,float param_2,float param_3,uint param_4,
          FColor *param_5,FMaterialRenderProxy *param_6,ESceneDepthPriorityGroup param_7)

{
  FPrimitiveDrawInterface *pFVar1;
  FLinearColor_u_0 local_38 [3];
  
  if (this->Collector != (FMeshElementCollector *)0x0) {
    GetConeMesh(param_1,param_2 * __real_42652ee0,param_3 * __real_42652ee0,param_4,param_6,
                (undefined1)param_7,this->ViewIndex,this->Collector,(HHitProxy *)0x0);
    return;
  }
  local_38[0]._0_4_ = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.R];
  local_38[0]._4_4_ = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.G];
  local_38[0]._8_4_ = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.B];
  pFVar1 = this->PDI;
  local_38[0]._12_4_ = (float)(param_5->field0_0x0)._s_0.A * __real_3b808081;
  if (pFVar1 == (FPrimitiveDrawInterface *)0x0) {
    pFVar1 = FMeshElementCollector::GetPDI((FMeshElementCollector *)0x0,this->ViewIndex);
  }
  ::DrawCone(pFVar1,param_1,param_2,param_3,param_4,false,(FLinearColor *)&local_38[0]._s_0,param_6,
             (undefined1)param_7);
  return;
}

// DrawCylinder @ 1482f6f00

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
FConstraintInstance::FPDIOrCollector::DrawCylinder
          (FPDIOrCollector *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FMaterialRenderProxy *param_4,ESceneDepthPriorityGroup param_5)

{
  if (this->Collector != (FMeshElementCollector *)0x0) {
    GetCylinderMesh(param_1,param_2,(double)param_3,4,param_4,(undefined1)param_5,this->ViewIndex,
                    this->Collector,(HHitProxy *)0x0);
    return;
  }
  ::DrawCylinder(this->PDI,param_1,param_2,(double)param_3,4,param_4,(undefined1)param_5);
  return;
}

// GetPDI @ 14830b530

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

FPrimitiveDrawInterface * __thiscall
FConstraintInstance::FPDIOrCollector::GetPDI(FPDIOrCollector *this)

{
  FPrimitiveDrawInterface *pFVar1;
  
  if (this->PDI == (FPrimitiveDrawInterface *)0x0) {
    pFVar1 = FMeshElementCollector::GetPDI(this->Collector,this->ViewIndex);
    return pFVar1;
  }
  return this->PDI;
}

