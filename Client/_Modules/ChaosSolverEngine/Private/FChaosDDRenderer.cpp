// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 12

// GetDrawRegion @ 146312390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSphere<double> * __thiscall
FChaosDDRenderer::GetDrawRegion(FChaosDDRenderer *this,TSphere<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->DrawRegion).Center.field0_0x0._s_0.Y;
  dVar2 = (this->DrawRegion).Center.field0_0x0._s_0.Z;
  dVar3 = (this->DrawRegion).W;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (this->DrawRegion).Center.field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// IsServer @ 146318920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FChaosDDRenderer::IsServer(FChaosDDRenderer *this)

{
  return this->bIsServer;
}

// RenderArrow @ 14631c5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderArrow
          (FChaosDDRenderer *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FColor *param_4,float param_5,float param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  undefined1 local_48;
  
  local_60._s_0.X = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  local_78._s_0.X = local_60._s_0.X;
  if (dVar1 <= local_60._s_0.X) {
    local_78._s_0.X = dVar1;
  }
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  uVar5 = SUB84(local_78._s_0.Y,0);
  uVar6 = (undefined4)((ulonglong)local_78._s_0.Y >> 0x20);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (local_60._s_0.X <= dVar1) {
    local_60._s_0.X = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar4 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (local_78._s_0.Y <= dVar4) {
    uVar5 = SUB84(dVar4,0);
    uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  if (dVar4 <= local_78._s_0.Y) {
    local_78._s_0.Y = dVar4;
  }
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  local_78._s_0.Z = dVar1;
  if (dVar4 <= dVar1) {
    local_78._s_0.Z = dVar4;
  }
  dVar4 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar1 <= dVar4) {
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  local_60._s_0.Y = (double)CONCAT44(uVar6,uVar5);
  dVar1 = (this->DrawRegion).W;
  local_60._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  local_48 = 1;
  dVar4 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,
                     &(this->DrawRegion).Center);
  if (dVar4 <= dVar1 * dVar1) {
    iVar2 = this->RenderCost;
    iVar3 = iVar2 + 3;
    this->RenderCost = iVar3;
    if ((iVar3 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar2 + 6;
      if (param_6 <= 0.0) {
        param_6 = __real_322bcc77;
      }
      DrawDebugDirectionalArrow
                (this->World,param_1,param_2,param_3,param_4,false,param_6,this->DepthPriority,
                 param_5);
    }
  }
  return;
}

// RenderBox @ 14631c730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderBox
          (FChaosDDRenderer *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,FColor *param_4,float param_5,float param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  TMatrix<double> *pTVar4;
  double dVar5;
  undefined1 auStackY_1e8 [32];
  TTransform<double> local_198;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108;
  TBox<double> local_100;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_120 = (param_3->field0_0x0)._s_0.X;
  local_118 = (param_3->field0_0x0)._s_0.Y;
  local_110 = (param_3->field0_0x0)._s_0.Z;
  local_138._s_0.X = local_120 * __real_bfe0000000000000;
  local_108 = 1;
  local_138._s_0.Z = local_110 * __real_bfe0000000000000;
  local_138._s_0.Y = local_118 * __real_bfe0000000000000;
  local_198.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_198.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_198.Rotation.ZW.m128d_f64[0] = param_2->Z;
  local_198.Rotation.ZW.m128d_f64[1] = param_2->W;
  local_120 = local_120 * __real_3fe0000000000000;
  local_118 = local_118 * __real_3fe0000000000000;
  local_110 = local_110 * __real_3fe0000000000000;
  local_198.Rotation.XY.m128d_f64[0] = param_2->X;
  local_198.Rotation.XY.m128d_f64[1] = param_2->Y;
  local_198.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_198.Translation.ZW.m128d_f64[1] = 0.0;
  local_198.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_198.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_198.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_198.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  pTVar4 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_198,&local_c8);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_138._s_0,&local_100,pTVar4);
  dVar1 = (this->DrawRegion).W;
  dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    (&local_100.Min,&local_100.Max,&(this->DrawRegion).Center);
  if (dVar5 <= dVar1 * dVar1) {
    iVar2 = this->RenderCost;
    iVar3 = iVar2 + 0xc;
    this->RenderCost = iVar3;
    if ((iVar3 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar2 + 0x18;
      if (param_6 <= 0.0) {
        param_6 = __real_322bcc77;
      }
      DrawDebugBox(this->World,param_1,param_3,param_2,param_4,false,param_6,this->DepthPriority,
                   param_5);
    }
  }
  return;
}

// RenderCapsule @ 14631c920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderCapsule
          (FChaosDDRenderer *this,TVector<double> *param_1,TQuat<double> *param_2,float param_3,
          float param_4,FColor *param_5,float param_6,float param_7)

{
  int iVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  undefined1 local_58;
  
  local_a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (param_2,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
  local_58 = 1;
  dVar2 = (double)param_3;
  dVar6 = (param_1->field0_0x0)._s_0.X - dVar2 * local_c8._s_0.X;
  local_88._s_0.X = dVar2 * local_c8._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y - dVar2 * local_c8._s_0.Y;
  local_88._s_0.Y = dVar2 * local_c8._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Z - dVar2 * local_c8._s_0.Z;
  local_70._s_0.Z = dVar2 * local_c8._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  local_70._s_0.X = local_88._s_0.X;
  if (local_88._s_0.X <= dVar6) {
    local_70._s_0.X = dVar6;
  }
  if (dVar6 <= local_88._s_0.X) {
    local_88._s_0.X = dVar6;
  }
  local_70._s_0.Y = local_88._s_0.Y;
  if (local_88._s_0.Y <= dVar5) {
    local_70._s_0.Y = dVar5;
  }
  if (dVar5 <= local_88._s_0.Y) {
    local_88._s_0.Y = dVar5;
  }
  dVar2 = (this->DrawRegion).W;
  local_88._s_0.Z = local_70._s_0.Z;
  if (dVar4 <= local_70._s_0.Z) {
    local_88._s_0.Z = dVar4;
  }
  if (local_70._s_0.Z <= dVar4) {
    local_70._s_0.Z = dVar4;
  }
  dVar4 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0,
                     &(this->DrawRegion).Center);
  if (dVar4 <= dVar2 * dVar2) {
    iVar1 = this->RenderCost;
    iVar3 = iVar1 + 0x10;
    this->RenderCost = iVar3;
    if ((iVar3 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar1 + 0x20;
      if (param_7 <= 0.0) {
        param_7 = __real_322bcc77;
      }
      DrawDebugCapsule(this->World,param_1,param_3,param_4,param_2,param_5,false,param_7,
                       this->DepthPriority,param_6);
    }
  }
  return;
}

// RenderCircle @ 14631cb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderCircle
          (FChaosDDRenderer *this,TVector<double> *param_1,TMatrix<double> *param_2,float param_3,
          FColor *param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  undefined1 auStackY_158 [32];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  undefined1 local_d8;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (this->DrawRegion).W;
  dVar6 = (double)param_3;
  local_d8 = 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  local_108._s_0.X = dVar1 - dVar6;
  local_108._s_0.Y = dVar4 - dVar6;
  local_f0._s_0.X = dVar1 + dVar6;
  local_f0._s_0.Y = dVar4 + dVar6;
  local_108._s_0.Z = dVar2 - dVar6;
  local_f0._s_0.Z = dVar2 + dVar6;
  dVar1 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_108._s_0,(TVector<double> *)&local_f0._s_0,
                     &(this->DrawRegion).Center);
  if (dVar1 <= dVar3 * dVar3) {
    iVar5 = this->RenderCost;
    iVar7 = iVar5 + 8;
    this->RenderCost = iVar7;
    if ((iVar7 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar5 + 0x10;
      local_c8.M[0][0] = param_2->M[0][0];
      local_c8.M[0][1] = param_2->M[0][1];
      local_c8.M[0][2] = param_2->M[0][2];
      local_c8.M[0][3] = param_2->M[0][3];
      local_c8.M[1][0] = param_2->M[1][0];
      local_c8.M[1][1] = param_2->M[1][1];
      local_c8.M[1][2] = param_2->M[1][2];
      local_c8.M[1][3] = param_2->M[1][3];
      local_c8.M[2][0] = param_2->M[2][0];
      local_c8.M[2][1] = param_2->M[2][1];
      local_c8.M[2][2] = param_2->M[2][2];
      local_c8.M[2][3] = param_2->M[2][3];
      local_c8.M[3][0] = (param_1->field0_0x0)._s_0.X;
      local_c8.M[3][1] = (param_1->field0_0x0)._s_0.Y;
      local_c8.M[3][3] = param_2->M[3][3];
      local_c8.M[3][2] = (param_1->field0_0x0)._s_0.Z;
      if (param_6 <= 0.0) {
        param_6 = __real_322bcc77;
      }
      DrawDebugCircle(this->World,&local_c8,dVar6,this->SphereSegments,param_4,false,param_6,
                      this->DepthPriority,param_5,false);
    }
  }
  return;
}

// RenderLatentCommand @ 14631d030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderLatentCommand(FChaosDDRenderer *this,FLatentDrawCommand *param_1)

{
  if (bChaosDebugDraw_DrawMode != 1) {
    DebugDrawChaosCommand(this->World,param_1);
  }
  if (bChaosDebugDraw_DrawMode != 0) {
    VisLogChaosCommand(param_1->TestBaseActor,param_1);
    return;
  }
  return;
}

// RenderLine @ 14631d080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderLine
          (FChaosDDRenderer *this,TVector<double> *param_1,TVector<double> *param_2,FColor *param_3,
          float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  undefined1 local_38;
  
  local_50._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_50._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  local_68._s_0.X = local_50._s_0.X;
  if (dVar1 <= local_50._s_0.X) {
    local_68._s_0.X = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (local_50._s_0.X <= dVar1) {
    local_50._s_0.X = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  local_68._s_0.Y = local_50._s_0.Y;
  if (dVar1 <= local_50._s_0.Y) {
    local_68._s_0.Y = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (local_50._s_0.Y <= dVar1) {
    local_50._s_0.Y = dVar1;
  }
  dVar1 = (this->DrawRegion).W;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  uVar6 = SUB84(dVar5,0);
  uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  local_68._s_0.Z = dVar5;
  if (dVar2 <= dVar5) {
    local_68._s_0.Z = dVar2;
  }
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar5 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_38 = 1;
  local_50._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
                     &(this->DrawRegion).Center);
  if (dVar5 <= dVar1 * dVar1) {
    iVar3 = this->RenderCost;
    iVar4 = iVar3 + 1;
    this->RenderCost = iVar4;
    if ((iVar4 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar3 + 2;
      if (param_5 <= 0.0) {
        param_5 = __real_322bcc77;
      }
      DrawDebugLine(this->World,param_1,param_2,param_3,false,param_5,this->DepthPriority,param_4);
    }
  }
  return;
}

// RenderPoint @ 14631d1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderPoint
          (FChaosDDRenderer *this,TVector<double> *param_1,FColor *param_2,float param_3,
          float param_4)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  undefined1 local_38;
  
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->DrawRegion).W;
  local_38 = 1;
  local_50._s_0.X = local_68._s_0.X;
  local_50._s_0.Y = local_68._s_0.Y;
  local_50._s_0.Z = local_68._s_0.Z;
  dVar3 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
                     &(this->DrawRegion).Center);
  if (dVar3 <= dVar1 * dVar1) {
    iVar2 = this->RenderCost;
    iVar4 = iVar2 + 1;
    this->RenderCost = iVar4;
    if ((iVar4 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar2 + 2;
      if (param_4 <= 0.0) {
        param_4 = __real_322bcc77;
      }
      DrawDebugPoint(this->World,param_1,param_3,param_2,false,param_4,this->DepthPriority);
    }
  }
  return;
}

// RenderSphere @ 14631d9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderSphere
          (FChaosDDRenderer *this,TVector<double> *param_1,float param_2,FColor *param_3,
          float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  undefined1 local_38;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  local_38 = 1;
  dVar4 = (double)param_2;
  local_68._s_0.X = dVar1 - dVar4;
  local_68._s_0.Y = dVar6 - dVar4;
  local_50._s_0.X = dVar1 + dVar4;
  local_50._s_0.Y = dVar6 + dVar4;
  local_68._s_0.Z = dVar2 - dVar4;
  local_50._s_0.Z = dVar2 + dVar4;
  dVar1 = (this->DrawRegion).W;
  dVar6 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
                     &(this->DrawRegion).Center);
  if (dVar6 <= dVar1 * dVar1) {
    iVar3 = this->RenderCost;
    iVar5 = iVar3 + 0x10;
    this->RenderCost = iVar5;
    if ((iVar5 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar3 + 0x20;
      if (param_5 <= 0.0) {
        param_5 = __real_322bcc77;
      }
      DrawDebugSphere(this->World,param_1,param_2,this->SphereSegments,param_3,false,param_5,
                      this->DepthPriority,param_4);
    }
  }
  return;
}

// RenderString @ 14631db20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderString
          (FChaosDDRenderer *this,TVector<double> *param_1,FString *param_2,FColor *param_3,
          float param_4,bool param_5,float param_6)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  undefined1 local_28;
  
  local_58._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->DrawRegion).W;
  local_28 = 1;
  local_40._s_0.X = local_58._s_0.X;
  local_40._s_0.Y = local_58._s_0.Y;
  local_40._s_0.Z = local_58._s_0.Z;
  dVar3 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_58._s_0,(TVector<double> *)&local_40._s_0,
                     &(this->DrawRegion).Center);
  if (dVar3 <= dVar1 * dVar1) {
    iVar2 = this->RenderCost;
    iVar4 = iVar2 + 10;
    this->RenderCost = iVar4;
    if ((iVar4 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar2 + 0x14;
      if (param_6 <= 0.0) {
        param_6 = __real_322bcc77;
      }
      DrawDebugString(this->World,param_1,param_2,(AActor *)0x0,param_3,param_6,param_5,param_4);
    }
  }
  return;
}

// RenderTriangle @ 14631dc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosDDRenderer::RenderTriangle
          (FChaosDDRenderer *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FColor *param_4,float param_5,float param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  undefined1 local_58;
  
  local_70._s_0.X = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  local_88._s_0.X = local_70._s_0.X;
  if (dVar1 <= local_70._s_0.X) {
    local_88._s_0.X = dVar1;
  }
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  uVar6 = SUB84(local_88._s_0.Y,0);
  uVar7 = (undefined4)((ulonglong)local_88._s_0.Y >> 0x20);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (local_70._s_0.X <= dVar1) {
    local_70._s_0.X = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (local_88._s_0.Y <= dVar1) {
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar1 <= local_88._s_0.X) {
    local_88._s_0.X = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar1 <= local_88._s_0.Y) {
    local_88._s_0.Y = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (local_70._s_0.X <= dVar1) {
    local_70._s_0.X = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 8);
  if ((double)CONCAT44(uVar7,uVar6) <= dVar1) {
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar1 <= local_88._s_0.Y) {
    local_88._s_0.Y = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_70._s_0.Y = (double)CONCAT44(uVar7,uVar6);
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  local_88._s_0.Z = dVar1;
  if (dVar5 <= dVar1) {
    local_88._s_0.Z = dVar5;
  }
  dVar5 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar1 <= dVar5) {
    uVar9 = SUB84(dVar5,0);
    uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  dVar1 = (this->DrawRegion).W;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  if (dVar5 <= local_88._s_0.Z) {
    local_88._s_0.Z = dVar5;
  }
  dVar5 = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar10,uVar9) <= dVar5) {
    uVar9 = SUB84(dVar5,0);
    uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  local_58 = 1;
  local_70._s_0.Z = (double)CONCAT44(uVar10,uVar9);
  dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                    ((TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0,
                     &(this->DrawRegion).Center);
  if (dVar5 <= dVar1 * dVar1) {
    iVar2 = this->RenderCost;
    iVar3 = iVar2 + 3;
    this->RenderCost = iVar3;
    fVar8 = __real_322bcc77;
    if ((iVar3 <= this->RenderBudget) || (this->RenderBudget == 0)) {
      this->RenderCost = iVar2 + 6;
      fVar4 = param_6;
      if (param_6 <= 0.0) {
        fVar4 = fVar8;
      }
      DrawDebugLine(this->World,param_1,param_2,param_4,false,fVar4,this->DepthPriority,param_5);
      fVar4 = param_6;
      if (param_6 <= 0.0) {
        fVar4 = fVar8;
      }
      DrawDebugLine(this->World,param_2,param_3,param_4,false,fVar4,this->DepthPriority,param_5);
      if (0.0 < param_6) {
        fVar8 = param_6;
      }
      DrawDebugLine(this->World,param_3,param_1,param_4,false,fVar8,this->DepthPriority,param_5);
    }
  }
  return;
}

