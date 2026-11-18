// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 3

// FDragonData_SpineFeetPair @ 14d29e2a0

FDragonData_SpineFeetPair * __thiscall
FDragonData_SpineFeetPair::FDragonData_SpineFeetPair
          (FDragonData_SpineFeetPair *this,FDragonData_SpineFeetPair *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  double dVar11;
  undefined4 uVar12;
  FCompactPoseBoneIndex FVar13;
  
  uVar12 = *(undefined4 *)&(param_1->Spine_Involved).field_0x8;
  FVar13 = (param_1->Spine_Involved).CachedCompactPoseIndex;
  pTVar9 = &this->Spine_Children_Involved;
  piVar1 = &(this->Spine_Children_Involved).ArrayMax;
  (this->Spine_Involved).BoneName = (param_1->Spine_Involved).BoneName;
  *(undefined4 *)&(this->Spine_Involved).field_0x8 = uVar12;
  (this->Spine_Involved).CachedCompactPoseIndex = FVar13;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Spine_Children_Involved).ArrayNum;
  pFVar8 = (param_1->Spine_Children_Involved).AllocatorInstance.Data;
  (this->Spine_Children_Involved).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar7,0,&pTVar9->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
  }
  pTVar9 = &this->Associated_Feet;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Feet).ArrayMax;
  iVar7 = (param_1->Associated_Feet).ArrayNum;
  pFVar8 = (param_1->Associated_Feet).AllocatorInstance.Data;
  (this->Associated_Feet).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar7,0,&pTVar9->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
  }
  pTVar9 = &this->Associated_Knees;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Knees).ArrayMax;
  iVar7 = (param_1->Associated_Knees).ArrayNum;
  pFVar8 = (param_1->Associated_Knees).AllocatorInstance.Data;
  (this->Associated_Knees).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar7,0,&pTVar9->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
  }
  pTVar9 = &this->Associated_Thighs;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Thighs).ArrayMax;
  iVar7 = (param_1->Associated_Thighs).ArrayNum;
  pFVar8 = (param_1->Associated_Thighs).AllocatorInstance.Data;
  (this->Associated_Thighs).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar7,0,&pTVar9->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
  }
  pTVar2 = &this->Feet_Heights;
  this->Spine_Chain_Index = param_1->Spine_Chain_Index;
  piVar1 = &(this->Feet_Heights).ArrayMax;
  dVar11 = (param_1->inverted_spine_tf).Rotation.XY.m128d_f64[1];
  (this->inverted_spine_tf).Rotation.XY.m128d_f64[0] =
       (param_1->inverted_spine_tf).Rotation.XY.m128d_f64[0];
  (this->inverted_spine_tf).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->inverted_spine_tf).Rotation.ZW.m128d_f64[1];
  (this->inverted_spine_tf).Rotation.ZW.m128d_f64[0] =
       (param_1->inverted_spine_tf).Rotation.ZW.m128d_f64[0];
  (this->inverted_spine_tf).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->inverted_spine_tf).Translation.XY.m128d_f64[1];
  (this->inverted_spine_tf).Translation.XY.m128d_f64[0] =
       (param_1->inverted_spine_tf).Translation.XY.m128d_f64[0];
  (this->inverted_spine_tf).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->inverted_spine_tf).Translation.ZW.m128d_f64[1];
  (this->inverted_spine_tf).Translation.ZW.m128d_f64[0] =
       (param_1->inverted_spine_tf).Translation.ZW.m128d_f64[0];
  (this->inverted_spine_tf).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->inverted_spine_tf).Scale3D.XY.m128d_f64[1];
  (this->inverted_spine_tf).Scale3D.XY.m128d_f64[0] =
       (param_1->inverted_spine_tf).Scale3D.XY.m128d_f64[0];
  (this->inverted_spine_tf).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->inverted_spine_tf).Scale3D.ZW.m128d_f64[1];
  (this->inverted_spine_tf).Scale3D.ZW.m128d_f64[0] =
       (param_1->inverted_spine_tf).Scale3D.ZW.m128d_f64[0];
  (this->inverted_spine_tf).Scale3D.ZW.m128d_f64[1] = dVar11;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Feet_Heights).ArrayNum;
  pFVar8 = (param_1->Feet_Heights).AllocatorInstance.Data;
  (this->Feet_Heights).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar3 = &this->feet_rotation_offset;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->feet_rotation_offset).ArrayMax;
  iVar7 = (param_1->feet_rotation_offset).ArrayNum;
  pFVar8 = (param_1->feet_rotation_offset).AllocatorInstance.Data;
  (this->feet_rotation_offset).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  pTVar2 = &this->feet_rotation_limit;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->feet_rotation_limit).ArrayMax;
  iVar7 = (param_1->feet_rotation_limit).ArrayNum;
  pFVar8 = (param_1->feet_rotation_limit).AllocatorInstance.Data;
  (this->feet_rotation_limit).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar4 = &this->knee_direction_offset;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->knee_direction_offset).ArrayMax;
  iVar7 = (param_1->knee_direction_offset).ArrayNum;
  pFVar8 = (param_1->knee_direction_offset).AllocatorInstance.Data;
  (this->knee_direction_offset).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  pTVar5 = &this->Feet_Follow_Bones_Array;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Feet_Follow_Bones_Array).ArrayMax;
  iVar7 = (param_1->Feet_Follow_Bones_Array).ArrayNum;
  pTVar9 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)
           (param_1->Feet_Follow_Bones_Array).AllocatorInstance.Data;
  (this->Feet_Follow_Bones_Array).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar9,iVar7);
  }
  pTVar5 = &this->Fingers_Name_Array;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Fingers_Name_Array).ArrayMax;
  iVar7 = (param_1->Fingers_Name_Array).ArrayNum;
  pTVar9 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)
           (param_1->Fingers_Name_Array).AllocatorInstance.Data;
  (this->Fingers_Name_Array).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar9,iVar7);
  }
  pTVar6 = &this->Fingers_Chain_Num;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Fingers_Chain_Num).ArrayMax;
  iVar7 = (param_1->Fingers_Chain_Num).ArrayNum;
  pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            (param_1->Fingers_Chain_Num).AllocatorInstance.Data;
  (this->Fingers_Chain_Num).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar6->AllocatorInstance).Data,pTVar10,iVar7);
  }
  pTVar10 = &this->order_index;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->order_index).ArrayMax;
  iVar7 = (param_1->order_index).ArrayNum;
  pFVar8 = (param_1->order_index).AllocatorInstance.Data;
  (this->order_index).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar10->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar10->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar4 = &this->feet_trace_offset;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->feet_trace_offset).ArrayMax;
  iVar7 = (param_1->feet_trace_offset).ArrayNum;
  pFVar8 = (param_1->feet_trace_offset).AllocatorInstance.Data;
  (this->feet_trace_offset).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  this->solver_count = param_1->solver_count;
  dVar11 = (param_1->total_spine_locdata).field0_0x0._s_0.Y;
  (this->total_spine_locdata).field0_0x0._s_0.X = (param_1->total_spine_locdata).field0_0x0._s_0.X;
  (this->total_spine_locdata).field0_0x0._s_0.Y = dVar11;
  (this->total_spine_locdata).field0_0x0._s_0.Z = (param_1->total_spine_locdata).field0_0x0._s_0.Z;
  return this;
}

// FDragonData_SpineFeetPair @ 14d2b87d0

FDragonData_SpineFeetPair * __thiscall
FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(FDragonData_SpineFeetPair *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->Spine_Involved).BoneName.ComparisonIndex = 0;
  (this->Spine_Involved).BoneName.Number = 0;
  puVar1 = &(this->Spine_Involved).field_0x8;
  (this->Spine_Involved).BoneIndex = -1;
  (this->Spine_Involved).bUseSkeletonIndex = 0;
  (this->Spine_Involved).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Spine_Children_Involved).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spine_Children_Involved).ArrayNum = 0;
  (this->Spine_Children_Involved).ArrayMax = 0;
  (this->Associated_Feet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Associated_Feet).ArrayNum = 0;
  (this->Associated_Feet).ArrayMax = 0;
  (this->Associated_Knees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Associated_Knees).ArrayNum = 0;
  (this->Associated_Knees).ArrayMax = 0;
  (this->Associated_Thighs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Associated_Thighs).ArrayNum = 0;
  (this->Associated_Thighs).ArrayMax = 0;
  this->Spine_Chain_Index = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->inverted_spine_tf).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->inverted_spine_tf).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->inverted_spine_tf).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->inverted_spine_tf).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->inverted_spine_tf).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->inverted_spine_tf).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->inverted_spine_tf).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->inverted_spine_tf).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->inverted_spine_tf).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->inverted_spine_tf).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->inverted_spine_tf).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->inverted_spine_tf).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->Feet_Heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Feet_Heights).ArrayNum = 0;
  (this->Feet_Heights).ArrayMax = 0;
  (this->feet_rotation_offset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_rotation_offset).ArrayNum = 0;
  (this->feet_rotation_offset).ArrayMax = 0;
  (this->feet_rotation_limit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_rotation_limit).ArrayNum = 0;
  (this->feet_rotation_limit).ArrayMax = 0;
  (this->knee_direction_offset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->knee_direction_offset).ArrayNum = 0;
  (this->knee_direction_offset).ArrayMax = 0;
  (this->Feet_Follow_Bones_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Feet_Follow_Bones_Array).ArrayNum = 0;
  (this->Feet_Follow_Bones_Array).ArrayMax = 0;
  (this->Fingers_Name_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fingers_Name_Array).ArrayNum = 0;
  (this->Fingers_Name_Array).ArrayMax = 0;
  (this->Fingers_Chain_Num).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fingers_Chain_Num).ArrayNum = 0;
  (this->Fingers_Chain_Num).ArrayMax = 0;
  (this->order_index).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->order_index).ArrayNum = 0;
  (this->order_index).ArrayMax = 0;
  (this->feet_trace_offset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_trace_offset).ArrayNum = 0;
  (this->feet_trace_offset).ArrayMax = 0;
  this->solver_count = 0;
  return this;
}

// ~FDragonData_SpineFeetPair @ 14d2b8940

void __thiscall
FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(FDragonData_SpineFeetPair *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->feet_trace_offset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->order_index).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->Fingers_Chain_Num).AllocatorInstance.Data,(this->Fingers_Chain_Num).ArrayNum);
  pFVar1 = (this->Fingers_Chain_Num).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)
             (this->Fingers_Name_Array).AllocatorInstance.Data,(this->Fingers_Name_Array).ArrayNum);
  pFVar1 = (this->Fingers_Name_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)
             (this->Feet_Follow_Bones_Array).AllocatorInstance.Data,
             (this->Feet_Follow_Bones_Array).ArrayNum);
  pFVar1 = (this->Feet_Follow_Bones_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->knee_direction_offset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->feet_rotation_limit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->feet_rotation_offset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Feet_Heights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Associated_Thighs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Associated_Knees).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Associated_Feet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Spine_Children_Involved).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

