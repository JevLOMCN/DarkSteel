// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 18

// CloneToEmptyStorage @ 14c9b9be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UE::PlanarCut::MergeUVIslands'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9b9c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFGeomFlatUVMesh_PlanarCut_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9b9c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFGeomMesh_PlanarCut_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9b9c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::__l37::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::`37'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c9b9ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFGeomFlatUVMesh_PlanarCut_UE___Geometry_UE__UEBA_NPEBUFGeomFlatUVMesh_PlanarCut_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9b9cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFGeomMesh_PlanarCut_UE___Geometry_UE__UEBA_NPEBUFGeomMesh_PlanarCut_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14c9c9c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c9c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c9c9c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c9c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c9c9c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c9c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c9c9ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::__l37::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c9c9cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c9cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c9c9ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c9c9ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14c9d15c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c9d15d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c9d15e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c9d15f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::__l37::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c9d1600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c9d1610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

