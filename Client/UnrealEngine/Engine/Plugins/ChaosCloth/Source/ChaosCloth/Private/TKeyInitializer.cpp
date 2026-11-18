// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// operator<int,FClothSimulData>_TTuple<int,FClothSimulData> @ 14db7ad60

TTuple<int,FClothSimulData> * __thiscall
TKeyInitializer<int_const_&>::operator<int,FClothSimulData>_TTuple<int,FClothSimulData>
          (TKeyInitializer<int_const_&> *this,TTuple<int,FClothSimulData> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FClothSimulData local_108;
  
  local_108.LODIndex = 0;
  local_108._228_4_ = 0;
  local_108._232_8_ = 0;
  uVar3 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar4 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Positions.ArrayNum = 0;
  local_108.Positions.ArrayMax = 0;
  local_108.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Normals.ArrayNum = 0;
  local_108.Normals.ArrayMax = 0;
  local_108.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Transform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Transform.Translation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_108.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar3;
  local_108.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar4;
  local_108.ComponentRelativeTransform.Rotation.XY.m128d_f64[1]._0_4_ = uVar3;
  local_108.ComponentRelativeTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.ComponentRelativeTransform.Rotation.XY.m128d_f64[1]._4_4_ = uVar4;
  local_108.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Transform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_108.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_108.Transform.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
  ;
  *(int *)__return_storage_ptr__ = *this->Key;
  local_108.Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar1;
  local_108.Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar2;
  local_108.ComponentRelativeTransform.Rotation.ZW.m128d_f64[0] =
       local_108.Transform.Rotation.ZW.m128d_f64[0];
  local_108.ComponentRelativeTransform.Rotation.ZW.m128d_f64[1] =
       local_108.Transform.Rotation.ZW.m128d_f64[1];
  local_108.ComponentRelativeTransform.Translation.XY.m128d_f64[0] =
       local_108.Transform.Translation.XY.m128d_f64[0];
  local_108.ComponentRelativeTransform.Translation.XY.m128d_f64[1] =
       local_108.Transform.Translation.XY.m128d_f64[1];
  local_108.ComponentRelativeTransform.Translation.ZW.m128d_f64[0] =
       local_108.Transform.Translation.ZW.m128d_f64[0];
  local_108.ComponentRelativeTransform.Translation.ZW.m128d_f64[1] =
       local_108.Transform.Translation.ZW.m128d_f64[1];
  local_108.ComponentRelativeTransform.Scale3D.XY.m128d_f64[0] =
       local_108.Transform.Scale3D.XY.m128d_f64[0];
  local_108.ComponentRelativeTransform.Scale3D.XY.m128d_f64[1] =
       local_108.Transform.Scale3D.XY.m128d_f64[1];
  local_108.ComponentRelativeTransform.Scale3D.ZW.m128d_f64[0] =
       local_108.Transform.Scale3D.ZW.m128d_f64[0];
  local_108.ComponentRelativeTransform.Scale3D.ZW.m128d_f64[1] =
       local_108.Transform.Scale3D.ZW.m128d_f64[1];
  FClothSimulData::FClothSimulData
            ((FClothSimulData *)&__return_storage_ptr__->field_0x10,&local_108);
  if (local_108.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Normals.AllocatorInstance.Data);
  }
  if (local_108.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Positions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>_TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData> @ 14db7ae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData> *
__thiscall
TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&>::
operator<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>_TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
          (TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&> *this,
          TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_1f8 [32];
  undefined4 local_1c8;
  undefined4 local_1c4;
  FTriangleMesh local_1c0;
  undefined4 local_78;
  undefined1 local_70 [32];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  memset(&local_1c8,0,0x1a8);
  Chaos::FTriangleMesh::FTriangleMesh(&local_1c0);
  local_78 = 0xffffffff;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  *(FClothingSimulationSolver **)__return_storage_ptr__ = *this->Key;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_1c8;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_1c4;
  Chaos::FTriangleMesh::FTriangleMesh
            ((FTriangleMesh *)&__return_storage_ptr__->field_0x10,&local_1c0);
  *(undefined4 *)&__return_storage_ptr__->field_0x158 = local_78;
  TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x160,
             (TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
              *)local_70);
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar1 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  Chaos::FTriangleMesh::~FTriangleMesh(&local_1c0);
  return __return_storage_ptr__;
}

