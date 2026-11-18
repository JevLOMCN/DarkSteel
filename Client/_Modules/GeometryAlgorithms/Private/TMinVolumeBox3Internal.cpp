// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 2

// ComputeResult @ 1495100d0

bool __thiscall
UE::Geometry::TMinVolumeBox3Internal<float>::ComputeResult
          (TMinVolumeBox3Internal<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,FProgressCancel *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  short sVar6;
  TOrientedBox3<float> *pTVar7;
  undefined1 local_res8 [8];
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  TOrientedBox3<float> local_58;
  TOrientedBox3<float> local_30;
  
  if (this->bMostAccurateFit == false) {
    local_68 = *(code **)param_2;
    local_60 = *(undefined1 **)&param_2->field_0x8;
    ComputeOrientedBBox<float>
              (&local_58,this->DiTODirections,param_1,
               (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_68);
    local_60 = local_res8;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3Internal<float>::ComputeResult'::__l10::<lambda_2>,bool,int>
               ::Call;
    local_78 = *(code **)param_2;
    local_70 = *(undefined1 **)&param_2->field_0x8;
    pTVar7 = OptimizeOrientedBox3Points<float>
                       (&local_30,&local_58,this->OptimizeIterations,param_1,
                        (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_78,
                        (TFunctionRef<bool___cdecl(int)> *)&local_68,this->FitCriteria,param_3);
  }
  else {
    local_70 = local_res8;
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3Internal<float>::ComputeResult'::__l5::<lambda_1>,bool,int>
               ::Call;
    local_68 = *(code **)param_2;
    local_60 = *(undefined1 **)&param_2->field_0x8;
    pTVar7 = FitOrientedBox3Points<float>
                       (&local_58,param_1,
                        (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_68,
                        (TFunctionRef<bool___cdecl(int)> *)&local_78,this->FitCriteria,
                        this->SameNormalTolerance,param_3);
  }
  uVar4 = *(undefined8 *)((longlong)&(pTVar7->Frame).Origin.field0_0x0 + 8);
  *(undefined8 *)&(this->Result).Frame.Origin.field0_0x0 =
       *(undefined8 *)&(pTVar7->Frame).Origin.field0_0x0;
  *(undefined8 *)((longlong)&(this->Result).Frame.Origin.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(pTVar7->Frame).Rotation.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Result).Frame.Rotation.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pTVar7->Frame).Rotation.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Result).Frame.Rotation.field0_0x0 + 0xc) = uVar4;
  *(undefined8 *)((longlong)&(this->Result).Extents.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pTVar7->Extents).field0_0x0 + 4);
  if ((param_3 == (FProgressCancel *)0x0) || (bVar5 = FProgressCancel::Cancelled(param_3), !bVar5))
  {
    fVar1 = (this->Result).Extents.field0_0x0._s_0.X;
    fVar2 = (this->Result).Extents.field0_0x0._s_0.Y;
    fVar3 = (this->Result).Extents.field0_0x0._s_0.Z;
    sVar6 = _dclass(SUB84((double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3),0));
    if (sVar6 < 1) {
      this->bSolutionOK = true;
      return true;
    }
    this->bSolutionOK = false;
  }
  return false;
}

// ComputeResult @ 149510260

bool __thiscall
UE::Geometry::TMinVolumeBox3Internal<double>::ComputeResult
          (TMinVolumeBox3Internal<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,FProgressCancel *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  short sVar5;
  TOrientedBox3<double> *pTVar6;
  undefined1 local_res8 [8];
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  TOrientedBox3<double> local_a8;
  TOrientedBox3<double> local_58;
  
  if (this->bMostAccurateFit == false) {
    local_c8 = *(code **)param_2;
    local_c0 = *(undefined1 **)&param_2->field_0x8;
    ComputeOrientedBBox<double>
              (&local_a8,this->DiTODirections,param_1,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_c8);
    local_c0 = local_res8;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3Internal<double>::ComputeResult'::__l10::<lambda_2>,bool,int>
               ::Call;
    local_b8 = *(code **)param_2;
    local_b0 = *(undefined1 **)&param_2->field_0x8;
    pTVar6 = OptimizeOrientedBox3Points<double>
                       (&local_58,&local_a8,this->OptimizeIterations,param_1,
                        (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_b8,
                        (TFunctionRef<bool___cdecl(int)> *)&local_c8,this->FitCriteria,param_3);
  }
  else {
    local_b0 = local_res8;
    local_b8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3Internal<double>::ComputeResult'::__l5::<lambda_1>,bool,int>
               ::Call;
    local_c8 = *(code **)param_2;
    local_c0 = *(undefined1 **)&param_2->field_0x8;
    pTVar6 = FitOrientedBox3Points<double>
                       (&local_a8,param_1,
                        (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_c8,
                        (TFunctionRef<bool___cdecl(int)> *)&local_b8,this->FitCriteria,
                        this->SameNormalTolerance,param_3);
  }
  dVar1 = (pTVar6->Frame).Origin.field0_0x0._s_0.Y;
  (this->Result).Frame.Origin.field0_0x0._s_0.X = (pTVar6->Frame).Origin.field0_0x0._s_0.X;
  (this->Result).Frame.Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar6->Frame).Rotation.field0_0x0._s_0.X;
  (this->Result).Frame.Origin.field0_0x0._s_0.Z = (pTVar6->Frame).Origin.field0_0x0._s_0.Z;
  (this->Result).Frame.Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (pTVar6->Frame).Rotation.field0_0x0._s_0.Z;
  (this->Result).Frame.Rotation.field0_0x0._s_0.Y = (pTVar6->Frame).Rotation.field0_0x0._s_0.Y;
  (this->Result).Frame.Rotation.field0_0x0._s_0.Z = dVar1;
  dVar1 = (pTVar6->Extents).field0_0x0._s_0.X;
  (this->Result).Frame.Rotation.field0_0x0._s_0.W = (pTVar6->Frame).Rotation.field0_0x0._s_0.W;
  (this->Result).Extents.field0_0x0._s_0.X = dVar1;
  dVar1 = (pTVar6->Extents).field0_0x0._s_0.Z;
  (this->Result).Extents.field0_0x0._s_0.Y = (pTVar6->Extents).field0_0x0._s_0.Y;
  (this->Result).Extents.field0_0x0._s_0.Z = dVar1;
  if ((param_3 == (FProgressCancel *)0x0) || (bVar4 = FProgressCancel::Cancelled(param_3), !bVar4))
  {
    dVar1 = (this->Result).Extents.field0_0x0._s_0.X;
    dVar2 = (this->Result).Extents.field0_0x0._s_0.Y;
    dVar3 = (this->Result).Extents.field0_0x0._s_0.Z;
    sVar5 = _dclass(SUB84(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3,0));
    if (sVar5 < 1) {
      this->bSolutionOK = true;
      return true;
    }
    this->bSolutionOK = false;
  }
  return false;
}

