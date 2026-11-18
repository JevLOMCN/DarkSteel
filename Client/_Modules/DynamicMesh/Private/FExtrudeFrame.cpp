// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FromFramePoint @ 14c7366f0

TVector<double> * __thiscall
UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame::FromFramePoint
          (FExtrudeFrame *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  TVector<double>_u_0 local_78;
  TVector<double> local_60;
  TVector<double> local_48 [2];
  
  dVar5 = __real_3ff0000000000000;
  if (((this->InFrameScaleDirection).bIsSet == false) || (__real_3ff0000000000000 == this->Scaling))
  {
    pTVar7 = operator*<double>(local_48,&(this->Frame).Rotation,param_1);
  }
  else {
    if ((this->InFrameScaleDirection).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar4)();
        return pTVar7;
      }
    }
    dVar5 = ((this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y *
             (param_1->field0_0x0)._s_0.Y +
             (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X *
             (param_1->field0_0x0)._s_0.X +
            (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z *
            (param_1->field0_0x0)._s_0.Z) * (this->Scaling - dVar5);
    local_78._s_0.X =
         dVar5 * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X +
         (param_1->field0_0x0)._s_0.X;
    local_78._s_0.Y =
         dVar5 * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y +
         (param_1->field0_0x0)._s_0.Y;
    local_78._s_0.Z =
         dVar5 * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z +
         (param_1->field0_0x0)._s_0.Z;
    pTVar7 = operator*<double>(&local_60,&(this->Frame).Rotation,(TVector<double> *)&local_78._s_0);
  }
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  dVar1 = (this->Frame).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar7->field0_0x0)._s_0.X + (this->Frame).Origin.field0_0x0._s_0.X;
  dVar2 = (pTVar7->field0_0x0)._s_0.Z;
  dVar3 = (this->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 + dVar3;
  return __return_storage_ptr__;
}

// ToFramePoint @ 14c76be80

TVector<double> * __thiscall
UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame::ToFramePoint
          (FExtrudeFrame *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [3];
  
  dVar4 = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_60[0]._16_8_ = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  local_60[0]._8_4_ = SUB84(dVar4,0);
  local_60[0]._0_8_ = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_60[0]._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  TQuaternion<double>::InverseMultiply
            (&(this->Frame).Rotation,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_60[0]._s_0);
  if (((this->InFrameScaleDirection).bIsSet != false) && (this->Scaling != __real_3ff0000000000000))
  {
    if (this->Scaling != 0.0) {
      dVar4 = local_78._s_0.X * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X +
              local_78._s_0.Y * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y +
              local_78._s_0.Z * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z;
      if (((this->InFrameScaleDirection).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
      dVar4 = dVar4 - dVar4 / this->Scaling;
      dVar1 = (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X;
      dVar2 = (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           local_78._s_0.Z - dVar4 * (this->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_78._s_0.X - dVar4 * dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_78._s_0.Y - dVar4 * dVar2;
      return __return_storage_ptr__;
    }
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8213365985634155816>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                       ,0x2d8,"Scaling != 0");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_78._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_78._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_78._s_0.Z;
  return __return_storage_ptr__;
}

