// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 110

// ~TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0> @ 14c948d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
::
~TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
          (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(void),1,0> @ 14c948db0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(void),1,0>::
~TFunction_OwnedObject<int_(__cdecl*)(void),1,0>
          (TFunction_OwnedObject<int_(__cdecl*)(void),1,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 14c977270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_TGeneralPolygon2<double>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977290

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(void),1,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<int_(__cdecl*)(void),1,0> *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14c9772d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9772f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__ComputeFirstPass___TImplicitMorphology_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEAAXNN_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c977360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__ComputeSecondPass___TImplicitMorphology_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEAAXNN_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c9773d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GenerateBlendAnalytic___TImplicitBlend_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEAAX_N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9773f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x70,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::`10'::<lambda_1>,0,1>
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
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x50);
  puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  puVar2[10] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x60);
  puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
  puVar2[0xc] = uVar1;
  puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c9774b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9774d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x70,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`19'::<lambda_1>,0,1>
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
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x50);
  puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  puVar2[10] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x60);
  puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
  puVar2[0xc] = uVar1;
  puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c977550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l28::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::`28'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`30'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::__l47::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9775b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9775d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::__l14::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9775f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__O___Generate___TImplicitSolidify_VFDynamicMesh3_Geometry_UE___Geometry_UE__QEAAAEBVFMeshShapeGenerator_45_XZ__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14c977660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9776a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l8::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::`8'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9776c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l10::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::`10'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9776e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l16::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BA___Generate___TImplicitSolidify_VFDynamicMesh3_Geometry_UE___Geometry_UE__QEAAAEBVFMeshShapeGenerator_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l30::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::`30'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`32'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l35::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`35'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l13::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::`13'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l15::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::`15'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9777a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9777c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9777e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l10::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::`10'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l17::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::`17'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l37::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`37'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l39::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`39'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c977880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l44::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`44'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14c9778a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l46::<lambda_6>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`46'::<lambda_6>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14c97bc10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bc20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(void),1,0>::Destroy
          (TFunction_OwnedObject<int_(__cdecl*)(void),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c97bc70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c97bca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bcb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bcb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bcc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bcc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bcd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c97bd00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c97bd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l28::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::__l47::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::__l14::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bd90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14c97bdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bdc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bdd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bdd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l8::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bde5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bdf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l10::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bdf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l16::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l30::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l35::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l13::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l15::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97be90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l10::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97be95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l17::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97beb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l37::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97beb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l39::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l44::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14c97bee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l46::<lambda_6>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c97bee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14c97e250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14c97e260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(void),1,0>::GetAddress
          (TFunction_OwnedObject<int_(__cdecl*)(void),1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14c97e270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l28::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::__l47::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::__l14::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l8::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l10::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l16::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l30::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l35::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l13::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l15::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l10::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l17::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l37::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l39::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l44::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14c97e480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l46::<lambda_6>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

