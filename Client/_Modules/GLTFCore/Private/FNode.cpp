// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 2

// FNode @ 14e62b300

FNode * __thiscall GLTF::FNode::FNode(FNode *this,FNode *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  undefined7 uVar9;
  
  ::FString::FString(&this->Name,&param_1->Name);
  dVar6 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  pTVar1 = &this->Children;
  piVar2 = &(this->Children).ArrayMax;
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar6;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Children).ArrayNum;
  pFVar5 = (param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->MorphTargetWeights;
  this->Type = param_1->Type;
  this->MeshIndex = param_1->MeshIndex;
  this->Skindex = param_1->Skindex;
  this->CameraIndex = param_1->CameraIndex;
  this->LightIndex = param_1->LightIndex;
  fVar7 = (param_1->LightIES).IntensityMultipler;
  bVar8 = (param_1->LightIES).bHasIntensityMultiplier;
  uVar9 = *(undefined7 *)&(param_1->LightIES).field_0x9;
  (this->LightIES).Index = (param_1->LightIES).Index;
  (this->LightIES).IntensityMultipler = fVar7;
  (this->LightIES).bHasIntensityMultiplier = bVar8;
  *(undefined7 *)&(this->LightIES).field_0x9 = uVar9;
  dVar6 = (param_1->LightIES).Color.field0_0x0._s_0.Y;
  (this->LightIES).Color.field0_0x0._s_0.X = (param_1->LightIES).Color.field0_0x0._s_0.X;
  (this->LightIES).Color.field0_0x0._s_0.Y = dVar6;
  bVar8 = (param_1->LightIES).bHasColor;
  uVar9 = *(undefined7 *)&(param_1->LightIES).field_0x29;
  (this->LightIES).Color.field0_0x0._s_0.Z = (param_1->LightIES).Color.field0_0x0._s_0.Z;
  (this->LightIES).bHasColor = bVar8;
  *(undefined7 *)&(this->LightIES).field_0x29 = uVar9;
  this->Index = param_1->Index;
  this->ParentIndex = param_1->ParentIndex;
  this->ParentJointIndex = param_1->ParentJointIndex;
  this->DirectParentJointIndex = param_1->DirectParentJointIndex;
  this->RootJointIndex = param_1->RootJointIndex;
  piVar2 = &(this->MorphTargetWeights).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->MorphTargetWeights).ArrayNum;
  pFVar5 = (param_1->MorphTargetWeights).AllocatorInstance.Data;
  (this->MorphTargetWeights).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x0 = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x8 = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x20 = 0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x28 = 0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x34 = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x40 = 0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x48 = 0;
  TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
               *)&this->SkinIndexToGlobalInverseBindMatrix,
              (TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
               *)&param_1->SkinIndexToGlobalInverseBindMatrix);
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x0 = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x8 = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x20 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x28 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x34 = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x40 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x48 = 0;
  TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
               *)&this->SkinIndexToLocalBindTransform,
              (TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
               *)&param_1->SkinIndexToLocalBindTransform);
  this->bHasLocalBindPose = param_1->bHasLocalBindPose;
  dVar6 = (param_1->LocalBindPose).Rotation.XY.m128d_f64[1];
  (this->LocalBindPose).Rotation.XY.m128d_f64[0] = (param_1->LocalBindPose).Rotation.XY.m128d_f64[0]
  ;
  (this->LocalBindPose).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->LocalBindPose).Rotation.ZW.m128d_f64[1];
  (this->LocalBindPose).Rotation.ZW.m128d_f64[0] = (param_1->LocalBindPose).Rotation.ZW.m128d_f64[0]
  ;
  (this->LocalBindPose).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->LocalBindPose).Translation.XY.m128d_f64[1];
  (this->LocalBindPose).Translation.XY.m128d_f64[0] =
       (param_1->LocalBindPose).Translation.XY.m128d_f64[0];
  (this->LocalBindPose).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->LocalBindPose).Translation.ZW.m128d_f64[1];
  (this->LocalBindPose).Translation.ZW.m128d_f64[0] =
       (param_1->LocalBindPose).Translation.ZW.m128d_f64[0];
  (this->LocalBindPose).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->LocalBindPose).Scale3D.XY.m128d_f64[1];
  (this->LocalBindPose).Scale3D.XY.m128d_f64[0] = (param_1->LocalBindPose).Scale3D.XY.m128d_f64[0];
  (this->LocalBindPose).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->LocalBindPose).Scale3D.ZW.m128d_f64[1];
  (this->LocalBindPose).Scale3D.ZW.m128d_f64[0] = (param_1->LocalBindPose).Scale3D.ZW.m128d_f64[0];
  (this->LocalBindPose).Scale3D.ZW.m128d_f64[1] = dVar6;
  *(undefined8 *)&(this->Extras).field_0x0 = 0;
  *(undefined8 *)&(this->Extras).field_0x8 = 0;
  *(undefined8 *)&(this->Extras).field_0x20 = 0;
  *(undefined4 *)&(this->Extras).field_0x28 = 0;
  *(undefined4 *)&(this->Extras).field_0x2c = 0x80;
  *(undefined4 *)&(this->Extras).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Extras).field_0x34 = 0;
  *(undefined8 *)&(this->Extras).field_0x40 = 0;
  *(undefined4 *)&(this->Extras).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->Extras,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->Extras);
  ::FString::FString(&this->UniqueId,&param_1->UniqueId);
  return this;
}

// FNode @ 14e62b5f0

FNode * __thiscall GLTF::FNode::FNode(FNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->LightIES).Index = -1;
  (this->LightIES).IntensityMultipler = 1.0;
  (this->LightIES).bHasIntensityMultiplier = false;
  (this->LightIES).bHasColor = false;
  (this->MorphTargetWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargetWeights).ArrayNum = 0;
  (this->MorphTargetWeights).ArrayMax = 0;
  *(undefined8 *)&this->SkinIndexToGlobalInverseBindMatrix = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x8 = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x20 = 0;
  this->Type = None;
  this->MeshIndex = -1;
  this->Skindex = -1;
  this->CameraIndex = -1;
  this->LightIndex = -1;
  this->Index = -1;
  this->ParentIndex = -1;
  this->ParentJointIndex = -1;
  this->DirectParentJointIndex = -1;
  this->RootJointIndex = -1;
  (this->LightIES).Color.field0_0x0._s_0.X = 1.0;
  (this->LightIES).Color.field0_0x0._s_0.Y = 1.0;
  (this->LightIES).Color.field0_0x0._s_0.Z = 1.0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x28 = 0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x34 = 0;
  *(undefined8 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x40 = 0;
  *(undefined4 *)&(this->SkinIndexToGlobalInverseBindMatrix).field_0x48 = 0;
  *(undefined8 *)&this->SkinIndexToLocalBindTransform = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x8 = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x20 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x28 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x34 = 0;
  *(undefined8 *)&(this->SkinIndexToLocalBindTransform).field_0x40 = 0;
  *(undefined4 *)&(this->SkinIndexToLocalBindTransform).field_0x48 = 0;
  this->bHasLocalBindPose = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalBindPose).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalBindPose).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalBindPose).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalBindPose).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalBindPose).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalBindPose).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalBindPose).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalBindPose).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalBindPose).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalBindPose).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalBindPose).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalBindPose).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->Extras = 0;
  *(undefined8 *)&(this->Extras).field_0x8 = 0;
  *(undefined8 *)&(this->Extras).field_0x20 = 0;
  *(undefined4 *)&(this->Extras).field_0x28 = 0;
  *(undefined4 *)&(this->Extras).field_0x2c = 0x80;
  *(undefined4 *)&(this->Extras).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Extras).field_0x34 = 0;
  *(undefined8 *)&(this->Extras).field_0x40 = 0;
  *(undefined4 *)&(this->Extras).field_0x48 = 0;
  (this->UniqueId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).Data.ArrayNum = 0;
  (this->UniqueId).Data.ArrayMax = 0;
  return this;
}

