// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// FAnimPhysRigidBody @ 1464064e0

FAnimPhysRigidBody * __thiscall
FAnimPhysRigidBody::FAnimPhysRigidBody(FAnimPhysRigidBody *this,FAnimPhysRigidBody *param_1)

{
  int *piVar1;
  TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FAnimPhysShape *pFVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->Mass = param_1->Mass;
  this->InverseMass = param_1->InverseMass;
  dVar6 = (param_1->InverseTensorWithoutMass).M[0][1];
  (this->InverseTensorWithoutMass).M[0][0] = (param_1->InverseTensorWithoutMass).M[0][0];
  (this->InverseTensorWithoutMass).M[0][1] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[0][3];
  (this->InverseTensorWithoutMass).M[0][2] = (param_1->InverseTensorWithoutMass).M[0][2];
  (this->InverseTensorWithoutMass).M[0][3] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[1][1];
  (this->InverseTensorWithoutMass).M[1][0] = (param_1->InverseTensorWithoutMass).M[1][0];
  (this->InverseTensorWithoutMass).M[1][1] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[1][3];
  (this->InverseTensorWithoutMass).M[1][2] = (param_1->InverseTensorWithoutMass).M[1][2];
  (this->InverseTensorWithoutMass).M[1][3] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[2][1];
  (this->InverseTensorWithoutMass).M[2][0] = (param_1->InverseTensorWithoutMass).M[2][0];
  (this->InverseTensorWithoutMass).M[2][1] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[2][3];
  (this->InverseTensorWithoutMass).M[2][2] = (param_1->InverseTensorWithoutMass).M[2][2];
  (this->InverseTensorWithoutMass).M[2][3] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[3][1];
  (this->InverseTensorWithoutMass).M[3][0] = (param_1->InverseTensorWithoutMass).M[3][0];
  (this->InverseTensorWithoutMass).M[3][1] = dVar6;
  dVar6 = (param_1->InverseTensorWithoutMass).M[3][3];
  (this->InverseTensorWithoutMass).M[3][2] = (param_1->InverseTensorWithoutMass).M[3][2];
  (this->InverseTensorWithoutMass).M[3][3] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[0][1];
  (this->InverseWorldSpaceTensor).M[0][0] = (param_1->InverseWorldSpaceTensor).M[0][0];
  (this->InverseWorldSpaceTensor).M[0][1] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[0][3];
  (this->InverseWorldSpaceTensor).M[0][2] = (param_1->InverseWorldSpaceTensor).M[0][2];
  (this->InverseWorldSpaceTensor).M[0][3] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[1][1];
  (this->InverseWorldSpaceTensor).M[1][0] = (param_1->InverseWorldSpaceTensor).M[1][0];
  (this->InverseWorldSpaceTensor).M[1][1] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[1][3];
  (this->InverseWorldSpaceTensor).M[1][2] = (param_1->InverseWorldSpaceTensor).M[1][2];
  (this->InverseWorldSpaceTensor).M[1][3] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[2][1];
  (this->InverseWorldSpaceTensor).M[2][0] = (param_1->InverseWorldSpaceTensor).M[2][0];
  (this->InverseWorldSpaceTensor).M[2][1] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[2][3];
  (this->InverseWorldSpaceTensor).M[2][2] = (param_1->InverseWorldSpaceTensor).M[2][2];
  (this->InverseWorldSpaceTensor).M[2][3] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[3][1];
  (this->InverseWorldSpaceTensor).M[3][0] = (param_1->InverseWorldSpaceTensor).M[3][0];
  (this->InverseWorldSpaceTensor).M[3][1] = dVar6;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[3][3];
  (this->InverseWorldSpaceTensor).M[3][2] = (param_1->InverseWorldSpaceTensor).M[3][2];
  (this->InverseWorldSpaceTensor).M[3][3] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[0][1];
  (this->InertiaTensor).M[0][0] = (param_1->InertiaTensor).M[0][0];
  (this->InertiaTensor).M[0][1] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[0][3];
  (this->InertiaTensor).M[0][2] = (param_1->InertiaTensor).M[0][2];
  (this->InertiaTensor).M[0][3] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[1][1];
  (this->InertiaTensor).M[1][0] = (param_1->InertiaTensor).M[1][0];
  (this->InertiaTensor).M[1][1] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[1][3];
  (this->InertiaTensor).M[1][2] = (param_1->InertiaTensor).M[1][2];
  (this->InertiaTensor).M[1][3] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[2][1];
  (this->InertiaTensor).M[2][0] = (param_1->InertiaTensor).M[2][0];
  (this->InertiaTensor).M[2][1] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[2][3];
  (this->InertiaTensor).M[2][2] = (param_1->InertiaTensor).M[2][2];
  (this->InertiaTensor).M[2][3] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[3][1];
  (this->InertiaTensor).M[3][0] = (param_1->InertiaTensor).M[3][0];
  (this->InertiaTensor).M[3][1] = dVar6;
  dVar6 = (param_1->InertiaTensor).M[3][3];
  (this->InertiaTensor).M[3][2] = (param_1->InertiaTensor).M[3][2];
  (this->InertiaTensor).M[3][3] = dVar6;
  dVar6 = (param_1->NextPosition).field0_0x0._s_0.Y;
  (this->NextPosition).field0_0x0._s_0.X = (param_1->NextPosition).field0_0x0._s_0.X;
  (this->NextPosition).field0_0x0._s_0.Y = dVar6;
  (this->NextPosition).field0_0x0._s_0.Z = (param_1->NextPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->NextOrientation).Y;
  (this->NextOrientation).X = (param_1->NextOrientation).X;
  (this->NextOrientation).Y = dVar6;
  dVar6 = (param_1->NextOrientation).W;
  (this->NextOrientation).Z = (param_1->NextOrientation).Z;
  (this->NextOrientation).W = dVar6;
  dVar6 = (param_1->PreviousPosition).field0_0x0._s_0.Y;
  (this->PreviousPosition).field0_0x0._s_0.X = (param_1->PreviousPosition).field0_0x0._s_0.X;
  (this->PreviousPosition).field0_0x0._s_0.Y = dVar6;
  (this->PreviousPosition).field0_0x0._s_0.Z = (param_1->PreviousPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->PreviousOrientation).Y;
  pTVar2 = &this->Shapes;
  (this->PreviousOrientation).X = (param_1->PreviousOrientation).X;
  (this->PreviousOrientation).Y = dVar6;
  dVar6 = (param_1->PreviousOrientation).W;
  (this->PreviousOrientation).Z = (param_1->PreviousOrientation).Z;
  (this->PreviousOrientation).W = dVar6;
  dVar6 = (param_1->StartPosition).field0_0x0._s_0.Y;
  (this->StartPosition).field0_0x0._s_0.X = (param_1->StartPosition).field0_0x0._s_0.X;
  (this->StartPosition).field0_0x0._s_0.Y = dVar6;
  (this->StartPosition).field0_0x0._s_0.Z = (param_1->StartPosition).field0_0x0._s_0.Z;
  dVar6 = (param_1->StartOrientation).Y;
  (this->StartOrientation).X = (param_1->StartOrientation).X;
  (this->StartOrientation).Y = dVar6;
  dVar6 = (param_1->StartOrientation).W;
  (this->StartOrientation).Z = (param_1->StartOrientation).Z;
  (this->StartOrientation).W = dVar6;
  this->bWindEnabled = param_1->bWindEnabled;
  fVar8 = (param_1->WindData).WindSpeed;
  dVar6 = (param_1->WindData).WindDirection.field0_0x0._s_0.X;
  (this->WindData).BodyWindScale = (param_1->WindData).BodyWindScale;
  (this->WindData).WindSpeed = fVar8;
  (this->WindData).WindDirection.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->WindData).WindDirection.field0_0x0._s_0.Z;
  (this->WindData).WindDirection.field0_0x0._s_0.Y =
       (param_1->WindData).WindDirection.field0_0x0._s_0.Y;
  (this->WindData).WindDirection.field0_0x0._s_0.Z = dVar6;
  uVar9 = *(undefined4 *)&(param_1->WindData).field_0x24;
  (this->WindData).WindAdaption = (param_1->WindData).WindAdaption;
  *(undefined4 *)&(this->WindData).field_0x24 = uVar9;
  this->bAngularDampingOverriden = param_1->bAngularDampingOverriden;
  this->AngularDamping = param_1->AngularDamping;
  this->bLinearDampingOverriden = param_1->bLinearDampingOverriden;
  this->LinearDamping = param_1->LinearDamping;
  this->GravityScale = param_1->GravityScale;
  this->bUseGravityOverride = param_1->bUseGravityOverride;
  dVar6 = (param_1->GravityOverride).field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X = (param_1->GravityOverride).field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = dVar6;
  (this->GravityOverride).field0_0x0._s_0.Z = (param_1->GravityOverride).field0_0x0._s_0.Z;
  dVar6 = (param_1->PreviousState).Pose.Position.field0_0x0._s_0.Y;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.X =
       (param_1->PreviousState).Pose.Position.field0_0x0._s_0.X;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.Y = dVar6;
  uVar7 = *(undefined8 *)&(param_1->PreviousState).Pose.field_0x18;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.Z =
       (param_1->PreviousState).Pose.Position.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PreviousState).Pose.field_0x18 = uVar7;
  dVar6 = (param_1->PreviousState).Pose.Orientation.Y;
  (this->PreviousState).Pose.Orientation.X = (param_1->PreviousState).Pose.Orientation.X;
  (this->PreviousState).Pose.Orientation.Y = dVar6;
  dVar6 = (param_1->PreviousState).Pose.Orientation.W;
  (this->PreviousState).Pose.Orientation.Z = (param_1->PreviousState).Pose.Orientation.Z;
  (this->PreviousState).Pose.Orientation.W = dVar6;
  uVar9 = *(undefined4 *)&(param_1->PreviousState).Pose.field_0x44;
  uVar7 = *(undefined8 *)&(param_1->PreviousState).Pose.field_0x48;
  (this->PreviousState).Pose.Scale = (param_1->PreviousState).Pose.Scale;
  *(undefined4 *)&(this->PreviousState).Pose.field_0x44 = uVar9;
  *(undefined8 *)&(this->PreviousState).Pose.field_0x48 = uVar7;
  dVar6 = (param_1->PreviousState).LinearMomentum.field0_0x0._s_0.Y;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.X =
       (param_1->PreviousState).LinearMomentum.field0_0x0._s_0.X;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->PreviousState).AngularMomentum.field0_0x0._s_0.X;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.Z =
       (param_1->PreviousState).LinearMomentum.field0_0x0._s_0.Z;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->PreviousState).AngularMomentum.field0_0x0._s_0.Z;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.Y =
       (param_1->PreviousState).AngularMomentum.field0_0x0._s_0.Y;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.Z = dVar6;
  dVar6 = (param_1->CenterOfMass).field0_0x0._s_0.Y;
  (this->CenterOfMass).field0_0x0._s_0.X = (param_1->CenterOfMass).field0_0x0._s_0.X;
  (this->CenterOfMass).field0_0x0._s_0.Y = dVar6;
  (this->CenterOfMass).field0_0x0._s_0.Z = (param_1->CenterOfMass).field0_0x0._s_0.Z;
  this->CollisionType = param_1->CollisionType;
  this->SphereCollisionRadius = param_1->SphereCollisionRadius;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Shapes).ArrayMax;
  iVar3 = (param_1->Shapes).ArrayNum;
  pFVar4 = (FAnimPhysShape *)(param_1->Shapes).AllocatorInstance.Data;
  (this->Shapes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FAnimPhysShape,FAnimPhysShape,int>((pTVar2->AllocatorInstance).Data,pFVar4,iVar3)
    ;
  }
  return this;
}

