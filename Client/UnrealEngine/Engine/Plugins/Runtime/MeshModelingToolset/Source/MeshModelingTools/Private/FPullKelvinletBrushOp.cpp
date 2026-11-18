// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// ApplyStamp @ 14ccdfd00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPullKelvinletBrushOp::ApplyStamp
          (FPullKelvinletBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FPullKelvinletBrushOp *pFVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 *pTVar7;
  TVector<double>_u_0 *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  FSculptBrushStamp *local_168;
  TArray<int,TSizedDefaultAllocator<32>_> *local_160;
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  undefined8 uStack_148;
  int local_140;
  undefined4 uStack_13c;
  FPullKelvinletBrushOp *local_138;
  double local_118;
  double dStack_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FPullKelvinletBrushOp *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  double local_90;
  undefined8 local_88;
  
  FBaseKelvinletBrushOp::SetBaseProperties((FBaseKelvinletBrushOp *)this,param_1,param_2);
  local_198._s_0.X =
       (param_2->LocalFrame).Origin.field0_0x0._s_0.X -
       (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.X;
  local_198._s_0.Y =
       (param_2->LocalFrame).Origin.field0_0x0._s_0.Y -
       (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.Y;
  local_198._s_0.Z =
       (param_2->LocalFrame).Origin.field0_0x0._s_0.Z -
       (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(param_2->LocalFrame).Rotation,(TVector<double> *)&local_180._s_0,
             (TVector<double> *)&local_198._s_0);
  dVar4 = __real_3fd0000000000000;
  dVar6 = __real_3fe0000000000000;
  local_90 = __real_3ff0000000000000;
  iVar2 = *(int *)&this->field_0x64;
  dVar5 = __real_3fb45f306446f9b4 / (double)*(float *)&this->field_0x58;
  uVar13 = SUB84(dVar5,0);
  uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
  fVar12 = (float)((double)*(float *)&this->field_0x60 * __real_3fe3333333333333);
  dVar11 = __real_3ff0000000000000 - (double)*(float *)&this->field_0x5c;
  *(float *)&this->field_0x60 = fVar12;
  dVar5 = (double)fVar12;
  dVar4 = dVar4 / dVar11;
  local_158._8_4_ = SUB84(local_180._s_0.X,0);
  uStack_14c = (undefined4)((ulonglong)local_180._0_8_ >> 0x20);
  local_118 = local_180._s_0.X;
  dStack_110 = local_180._s_0.Y;
  local_90 = local_90 / (__real_4008000000000000 - dVar6 / dVar11);
  local_138 = (FPullKelvinletBrushOp *)(local_90 * __real_3f93813813813814);
  local_90 = local_90 * __real_3fd999999999999a;
  local_f8._8_4_ = uVar13;
  local_f8._0_8_ = dVar5;
  local_f8._12_4_ = uVar14;
  uStack_148._0_4_ = SUB84(local_180._s_0.Y,0);
  uStack_148._4_4_ = (undefined4)((ulonglong)local_180._8_8_ >> 0x20);
  local_158._0_8_ = dVar4;
  local_140 = SUB84(local_180._s_0.Z,0);
  uStack_13c = (undefined4)((ulonglong)local_180._16_8_ >> 0x20);
  local_e8._8_4_ = local_158._8_4_;
  local_e8._0_8_ = dVar4;
  local_e8._12_4_ = uStack_14c;
  local_d8 = (undefined4)uStack_148;
  uStack_d4 = uStack_148._4_4_;
  local_b0._8_4_ = local_158._8_4_;
  local_b0._0_8_ = dVar4;
  local_b0._12_4_ = uStack_14c;
  dVar4 = param_2->Falloff;
  uVar9 = SUB84(dVar4,0);
  uVar10 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (__real_3ff0000000000000 <= dVar4) {
    uVar9 = SUB84(__real_3ff0000000000000,0);
    uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  local_c0._8_4_ = uVar13;
  local_c0._0_8_ = dVar5;
  local_c0._12_4_ = uVar14;
  local_a0 = (undefined4)uStack_148;
  uStack_9c = uStack_148._4_4_;
  if ((double)CONCAT44(uVar10,uVar9) <= 0.0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  local_88 = CONCAT44(uVar10,uVar9);
  iVar3 = param_3->ArrayNum;
  iStack_d0 = local_140;
  uStack_cc = uStack_13c;
  local_c8 = local_138;
  iStack_98 = local_140;
  uStack_94 = uStack_13c;
  if (iVar2 == 0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    pTVar8 = &local_198;
    local_198._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                 ::Call;
    local_198._s_0.Y = (double)&local_168;
    local_180._s_0.X = 0.0;
    pTVar7 = &local_180;
    local_180._s_0.Y = (double)((ulonglong)local_180._s_0.Y & 0xffffffff00000000);
    uStack_148 = this;
  }
  else {
    pFVar1 = *(FPullKelvinletBrushOp **)&this->field_0x68;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar3,No);
    pTVar8 = &local_180;
    local_180._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`FBaseKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                 ::Call;
    local_180._s_0.Y = (double)&local_168;
    pTVar7 = &local_198;
    local_198._s_0.X = 0.0;
    local_198._s_0.Y = (double)((ulonglong)local_198._s_0.Y & 0xffffffff00000000);
    uStack_148 = pFVar1;
    local_140 = iVar2;
    local_138 = this;
  }
  local_168 = (FSculptBrushStamp *)local_f8;
  local_158._0_8_ = param_4;
  local_160 = param_3;
  unique0x10000b8c = &param_2->LocalFrame;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&pTVar8->_s_0,
             param_4._0_1_,None,(TArrayView<std::nullptr_t,int> *)&pTVar7->_s_0);
  local_180._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`FBaseKelvinletBrushOp::ApplyFalloff'::__l2::<lambda_1>,void,int>
               ::Call;
  local_180._s_0.Y = (double)&local_168;
  stack0xfffffffffffffeb0 = (TFrame3<double> *)this;
  local_158._0_8_ = param_4;
  local_198._s_0.X = 0.0;
  local_198._s_0.Y = (double)((ulonglong)local_198._s_0.Y & 0xffffffff00000000);
  local_168 = param_2;
  local_160 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_180._s_0,param_4._0_1_,ForceSingleThread,
             (TArrayView<std::nullptr_t,int> *)&local_198._s_0);
  return;
}

// GetBrushTargetType @ 14ccfe170

ESculptBrushOpTargetType __thiscall
FPullKelvinletBrushOp::GetBrushTargetType(FPullKelvinletBrushOp *this)

{
  return ActivePlane;
}

// IgnoreZeroMovements @ 14cd03b40

bool __thiscall FPullKelvinletBrushOp::IgnoreZeroMovements(FPullKelvinletBrushOp *this)

{
  return true;
}

