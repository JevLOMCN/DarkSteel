// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// CotanCentroid @ 14c7275f0

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::CotanCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  TCotanCentroid<_UE::Geometry::FMeshWeights::CotanCentroid_::__l2::<lambda_1>_>
            (__return_storage_ptr__,param_1,param_2,(<lambda_1>)param_1);
  return __return_storage_ptr__;
}

// CotanCentroid @ 14c727610

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::CotanCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  TCotanCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
            (__return_storage_ptr__,param_1,param_2,&local_18);
  return __return_storage_ptr__;
}

// CotanCentroidSafe @ 14c727650

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::CotanCentroidSafe
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,double param_3
          ,bool *param_4)

{
  TCotanCentroidSafe<_UE::Geometry::FMeshWeights::CotanCentroidSafe_::__l2::<lambda_1>_>
            (__return_storage_ptr__,param_1,param_2,(<lambda_1>)param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CotanCentroidSafe @ 14c727680

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::CotanCentroidSafe
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4,bool *param_5
          )

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  TCotanCentroidSafe<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
            (__return_storage_ptr__,param_1,param_2,&local_18,param_4,param_5);
  return __return_storage_ptr__;
}

// CotanWeightsBlendSafe @ 14c7276d0

void __cdecl
UE::Geometry::FMeshWeights::CotanWeightsBlendSafe
          (FDynamicMesh3 *param_1,int param_2,TFunctionRef<void___cdecl(int,double)> *param_3,
          double param_4,bool *param_5)

{
  TFunctionRef<void___cdecl(int,double)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  TCotanWeightsBlendSafe<_UE::Geometry::FMeshWeights::CotanWeightsBlendSafe_::__l2::<lambda_1>_>
            (param_1,param_2,(<lambda_1>)param_1,&local_18,param_4,param_5);
  return;
}

// FilteredUniformCentroid @ 14c730790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::FilteredUniformCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(int)> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStackY_1f8 [32];
  int local_1c8 [4];
  undefined1 local_1b8 [16];
  double local_1a8 [3];
  undefined8 local_190;
  undefined1 local_188 [32];
  longlong local_168 [3];
  longlong *local_150;
  undefined1 local_148 [64];
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8 [96];
  ulonglong local_88;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar10 = 0;
  FDynamicMesh3::VtxVerticesItr(param_1,(MappedValueEnumerable *)local_188,param_2);
  uVar5 = local_188._8_4_;
  uVar4 = local_188._0_8_;
  local_1b8._0_8_ = local_188._16_8_;
  local_190 = 0;
  if ((double)local_188._16_8_ != 0.0) {
    plVar9 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar9 = local_150;
    }
    (**(code **)*plVar9)(plVar9,local_1a8);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_148,(FSmallListSet *)uVar4,uVar5,false,
             (TFunction<int___cdecl(int)> *)local_1b8);
  local_1b8._0_8_ = local_188._16_8_;
  local_190 = 0;
  if ((double)local_188._16_8_ != 0.0) {
    plVar9 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar9 = local_150;
    }
    (**(code **)*plVar9)(plVar9,local_1a8);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_e8,(FSmallListSet *)local_188._0_8_,local_188._8_4_,true,
             (TFunction<int___cdecl(int)> *)local_1b8);
  while ((((local_148._0_8_ != local_e8._0_8_ || (local_148._8_4_ != local_e8._8_4_)) ||
          (local_148._24_4_ != local_e8._24_4_)) || (local_148._28_4_ != local_e8._28_4_))) {
    local_1c8[0] = local_148._32_4_;
    Core::Private::Function::CheckCallable((void *)local_148._48_8_);
    uVar4 = local_148._48_8_;
    plVar9 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    iVar7 = (*(code *)uVar4)(uVar8,local_1c8);
    local_1c8[0] = iVar7;
    cVar6 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_1c8);
    if (cVar6 != '\0') {
      local_1c8[0] = iVar7;
      (**(code **)param_3)(local_1b8,*(undefined8 *)&param_3->field_0x8,local_1c8);
      uVar1 = (double)uVar1 + (double)local_1b8._0_8_;
      uVar2 = (double)uVar2 + (double)local_1b8._8_8_;
      uVar3 = (double)uVar3 + local_1a8[0];
      iVar10 = iVar10 + 1;
    }
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_148);
  }
  if (local_e8._48_8_ != 0) {
    plVar9 = (longlong *)(local_e8 + 0x40);
    if ((longlong *)local_e8._88_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_e8._88_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((code *)local_148._48_8_ != (code *)0x0) {
    plVar9 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((double)local_188._16_8_ != 0.0) {
    plVar9 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar9 = local_150;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (iVar10 == 0) {
    local_1c8[0] = param_2;
    (**(code **)param_3)(local_1b8,*(undefined8 *)&param_3->field_0x8,local_1c8);
  }
  else {
    local_1a8[0] = __real_3ff0000000000000 / (double)iVar10;
    local_1b8._0_8_ = local_1a8[0] * (double)uVar1;
    local_1b8._8_8_ = local_1a8[0] * (double)uVar2;
    local_1a8[0] = local_1a8[0] * (double)uVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_1b8._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_1b8._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_1a8[0];
  return __return_storage_ptr__;
}

// MeanValueCentroid @ 14c752120

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::MeanValueCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,double param_3
          )

{
  TMeanValueCentroid<_UE::Geometry::FMeshWeights::MeanValueCentroid_::__l2::<lambda_1>_>
            (__return_storage_ptr__,param_1,param_2,(<lambda_1>)param_1,param_3);
  return __return_storage_ptr__;
}

// MeanValueCentroid @ 14c752150

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::MeanValueCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  TMeanValueCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
            (__return_storage_ptr__,param_1,param_2,&local_18,param_4);
  return __return_storage_ptr__;
}

// UniformCentroid @ 14c771030

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::UniformCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  FDynamicMesh3::GetVtxOneRingCentroid(param_1,param_2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// UniformCentroid @ 14c771060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UE::Geometry::FMeshWeights::UniformCentroid
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStackY_1e8 [32];
  int local_1b8 [4];
  undefined1 local_1a8 [16];
  double local_198 [3];
  undefined8 local_180;
  undefined1 local_178 [32];
  longlong local_158 [3];
  longlong *local_140;
  undefined1 local_138 [64];
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar8 = 0;
  FDynamicMesh3::VtxVerticesItr(param_1,(MappedValueEnumerable *)local_178,param_2);
  uVar5 = local_178._8_4_;
  uVar4 = local_178._0_8_;
  local_1a8._0_8_ = local_178._16_8_;
  local_180 = 0;
  if ((double)local_178._16_8_ != 0.0) {
    plVar7 = local_158;
    if (local_140 != (longlong *)0x0) {
      plVar7 = local_140;
    }
    (**(code **)*plVar7)(plVar7,local_198);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_138,(FSmallListSet *)uVar4,uVar5,false,
             (TFunction<int___cdecl(int)> *)local_1a8);
  local_1a8._0_8_ = local_178._16_8_;
  local_180 = 0;
  if ((double)local_178._16_8_ != 0.0) {
    plVar7 = local_158;
    if (local_140 != (longlong *)0x0) {
      plVar7 = local_140;
    }
    (**(code **)*plVar7)(plVar7,local_198);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_d8,(FSmallListSet *)local_178._0_8_,local_178._8_4_,true,
             (TFunction<int___cdecl(int)> *)local_1a8);
  while ((((local_138._0_8_ != local_d8._0_8_ || (local_138._8_4_ != local_d8._8_4_)) ||
          (local_138._24_4_ != local_d8._24_4_)) || (local_138._28_4_ != local_d8._28_4_))) {
    local_1b8[0] = local_138._32_4_;
    Core::Private::Function::CheckCallable((void *)local_138._48_8_);
    uVar4 = local_138._48_8_;
    plVar7 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar7 = local_e0;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    local_1b8[0] = (*(code *)uVar4)(uVar6,local_1b8);
    (**(code **)param_3)(local_1a8,*(undefined8 *)&param_3->field_0x8,local_1b8);
    uVar1 = (double)uVar1 + (double)local_1a8._0_8_;
    uVar2 = (double)uVar2 + (double)local_1a8._8_8_;
    uVar3 = (double)uVar3 + local_198[0];
    iVar8 = iVar8 + 1;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_138);
  }
  if (local_d8._48_8_ != 0) {
    plVar7 = (longlong *)(local_d8 + 0x40);
    if ((longlong *)local_d8._88_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_d8._88_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((code *)local_138._48_8_ != (code *)0x0) {
    plVar7 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar7 = local_e0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((double)local_178._16_8_ != 0.0) {
    plVar7 = local_158;
    if (local_140 != (longlong *)0x0) {
      plVar7 = local_140;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (iVar8 == 0) {
    local_1b8[0] = param_2;
    (**(code **)param_3)(local_1a8,*(undefined8 *)&param_3->field_0x8,local_1b8);
  }
  else {
    local_198[0] = __real_3ff0000000000000 / (double)iVar8;
    local_1a8._0_8_ = local_198[0] * (double)uVar1;
    local_1a8._8_8_ = local_198[0] * (double)uVar2;
    local_198[0] = local_198[0] * (double)uVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_1a8._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_1a8._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_198[0];
  return __return_storage_ptr__;
}

// VoronoiArea @ 14c77c170

double __cdecl UE::Geometry::FMeshWeights::VoronoiArea(FDynamicMesh3 *param_1,int param_2)

{
  double dVar1;
  
  dVar1 = TVoronoiArea<_UE::Geometry::FMeshWeights::VoronoiArea_::__l2::<lambda_1>_>
                    (param_1,param_2,(<lambda_1>)param_1,__real_408f400000000000);
  return dVar1;
}

// VoronoiArea @ 14c77c190

double __cdecl
UE::Geometry::FMeshWeights::VoronoiArea
          (FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3)

{
  double dVar1;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  dVar1 = TVoronoiArea<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
                    (param_1,param_2,&local_18,__real_408f400000000000);
  return dVar1;
}

