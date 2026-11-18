// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 380

// ~TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0> @ 143369810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>::
~TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>
          (TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0> @ 143369830

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0>::
~TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0>
          (TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AMMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0> @ 143369850

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6ANNN_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0> @ 143369870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEAV__TIntrTriangle3Triangle3_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14338e200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>
                    *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14338e240

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AMMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_float_float_float **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6ANNN_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_double_double_double **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NAEAV__TIntrTriangle3Triangle3_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TIntrTriangle3Triangle3<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__BoundaryEdgeIndicesItr_FDynamicMesh3_Geometry_UE__QEBA_AVFilteredEnumerable_FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14338e300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`34'::FHullMeshWrapper>::GetBox'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`34'::FHullMeshWrapper>::TestIntersection'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEBA_NPEBVFDynamicMesh3_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e3c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<float>'::__l4::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__3____OptimizeOrientedBox3Points_M_Geometry_UE__YA_AU__TOrientedBox3_M_23_AEBU423_HHV__TFunctionRef___A6A_AU__TVector_M_Math_UE__H_Z__V__TFunctionRef___A6A_NH_Z__W4EBox3FitCriteria_23_PEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<double>'::__l4::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__3____OptimizeOrientedBox3Points_N_Geometry_UE__YA_AU__TOrientedBox3_N_23_AEBU423_HHV__TFunctionRef___A6A_AU__TVector_N_Math_UE__H_Z__V__TFunctionRef___A6A_NH_Z__W4EBox3FitCriteria_23_PEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__1___R1_1____FitOrientedBox3Points_M_Geometry_UE__YA_AU__TOrientedBox3_M_23_HV__TFunctionRef___A6A_AU__TVector_M_Math_UE__H_Z__V__TFunctionRef___A6A_NH_Z__W4EBox3FitCriteria_23_MPEAVFProgressCancel___Z_QEBA_AUFResult__1____FitOrientedBox3Points_M_23_YA_AU423_H012M3_Z_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__1___R1_1____FitOrientedBox3Points_N_Geometry_UE__YA_AU__TOrientedBox3_N_23_HV__TFunctionRef___A6A_AU__TVector_N_Math_UE__H_Z__V__TFunctionRef___A6A_NH_Z__W4EBox3FitCriteria_23_NPEAVFProgressCancel___Z_QEBA_AUFResult__1____FitOrientedBox3Points_N_23_YA_AU423_H012N3_Z_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14338e440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`37'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14338e4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`39'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 143397920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>::
Destroy(TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 143397930

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0>::Destroy
          (TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 143397940

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 143397950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 143397960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<float>'::__l4::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1433979f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<double>'::__l4::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001433979f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143397a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143397a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 143397a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1433a2240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>::
GetAddress(TFunction_OwnedObject<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),1,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1433a2250

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0>::GetAddress
          (TFunction_OwnedObject<float_(__cdecl*)(float,float),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1433a2260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(double,double),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1433a2270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1433a2280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a22f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<float>'::__l4::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::OptimizeOrientedBox3Points<double>'::__l4::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1433a2350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> @ 143453610

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>::
~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 143484750

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<float>_int **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434847b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434847d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434847f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434848b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434848d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434848f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x18);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x28);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x38);
  puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  puVar2[7] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x48);
  puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar2[9] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x58);
  puVar2[10] = *(undefined8 *)((longlong)this + 0x50);
  puVar2[0xb] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x68);
  puVar2[0xc] = *(undefined8 *)((longlong)this + 0x60);
  puVar2[0xd] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x78);
  puVar2[0xe] = *(undefined8 *)((longlong)this + 0x70);
  puVar2[0xf] = uVar1;
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 143484a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__UEBA_NPEBVFColliderMesh_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`5'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`9'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143484ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_5>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434850b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434850d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1434850f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_7>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_8>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143485170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_9>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1434b05e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>::
Destroy(TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b05e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1434b05f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b05f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b06f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b06f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1434b0730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b07f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b07f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b08f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b08f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b09f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b09f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1434b0ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b0ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1434bcd50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>::
GetAddress(TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1434bcd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcdd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcdf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1434bce80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bce90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bceb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bced0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcf90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcfb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcfc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcfd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bcff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1434bd230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0> @ 143568550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__PEBVFDynamicMesh3_Geometry_3_H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0> @ 143568570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
::
~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0> @ 143568590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
::
~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0> @ 1435685b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::
~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0> @ 1435685d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::
~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0> @ 1435685f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
::
~TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VISplineInterface_Spline_Geometry_UE__U__TDefaultDelete_VISplineInterface_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14357ae30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__PEBVFDynamicMesh3_Geometry_3_H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<double>_FDynamicMesh3_ptr_int **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357ae50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE__U__TDefaultDelete_V__TBSpline_U__TVector_N_Math_UE___02_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357ae70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357ae90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TPolyBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357aeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357aed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VISplineInterface_Spline_Geometry_UE__U__TDefaultDelete_VISplineInterface_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357aef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357af10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357af30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357af50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FMeshSelfUnion::Compute'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357af70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357af90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357afb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UELocal::SetTriangleNormals'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14357aff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``UE::Geometry::FMeshSelfUnion::Compute'::`63'::<lambda_2>::operator()'::`11'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14357b050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`5'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357b070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`5'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357b090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::`62'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357b0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`9'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357b0d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`9'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14357b0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l91::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14358c850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UELocal::SetTriangleNormals'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14358c950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l5::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l5::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14358c9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l91::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014358c9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1435b0590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 1435b05f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UELocal::SetTriangleNormals'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l5::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l5::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b0690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b06a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b06b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1435b06c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::EmbedProjectedPaths'::__l91::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1435f4370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1435f4390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1435f43d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::`6'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1435f43f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1435f4430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1435f4450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1435f8dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001435f8dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1435f8de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1435f8e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001435f8e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1435f8e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1435f8e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001435f8e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1435f8e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001435f8e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1436064f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143606500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 143606510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143606520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143606530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143606540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

