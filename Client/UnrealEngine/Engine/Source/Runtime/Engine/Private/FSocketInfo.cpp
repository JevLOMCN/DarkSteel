// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSocketInfo @ 1485a4f60

FSocketInfo * __thiscall
USkeletalMesh::FSocketInfo::FSocketInfo
          (FSocketInfo *this,USkeletalMesh *param_1,USkeletalMeshSocket *param_2,int param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  longlong lVar8;
  int *piVar9;
  TQuat<double> local_28;
  
  pTVar7 = UE::Math::TRotator<double>::Quaternion(&param_2->RelativeRotation,&local_28);
  dVar1 = pTVar7->Y;
  uVar2 = *(undefined4 *)&pTVar7->Z;
  uVar3 = *(undefined4 *)((longlong)&pTVar7->Z + 4);
  uVar4 = *(undefined4 *)&pTVar7->W;
  uVar5 = *(undefined4 *)((longlong)&pTVar7->W + 4);
  (this->SocketLocalTransform).Rotation.XY.m128d_f64[0] = pTVar7->X;
  (this->SocketLocalTransform).Rotation.XY.m128d_f64[1] = dVar1;
  *(undefined4 *)(this->SocketLocalTransform).Rotation.ZW.m128d_f64 = uVar2;
  *(undefined4 *)((longlong)(this->SocketLocalTransform).Rotation.ZW.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((this->SocketLocalTransform).Rotation.ZW.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(this->SocketLocalTransform).Rotation.ZW.m128d_f64 + 0xc) = uVar5;
  dVar6 = (param_2->RelativeLocation).field0_0x0._s_0.Y;
  dVar1 = (param_2->RelativeLocation).field0_0x0._s_0.Z;
  (this->SocketLocalTransform).Translation.XY.m128d_f64[0] =
       (param_2->RelativeLocation).field0_0x0._s_0.X;
  (this->SocketLocalTransform).Translation.XY.m128d_f64[1] = dVar6;
  (this->SocketLocalTransform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->SocketLocalTransform).Translation.ZW.m128d_f64[1] = 0.0;
  uVar2 = *(undefined4 *)((longlong)&(param_2->RelativeScale).field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&(param_2->RelativeScale).field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&(param_2->RelativeScale).field0_0x0 + 0xc);
  dVar1 = (param_2->RelativeScale).field0_0x0._s_0.Z;
  *(undefined4 *)(this->SocketLocalTransform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)&(param_2->RelativeScale).field0_0x0;
  *(undefined4 *)((longlong)(this->SocketLocalTransform).Scale3D.XY.m128d_f64 + 4) = uVar2;
  *(undefined4 *)((this->SocketLocalTransform).Scale3D.XY.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(this->SocketLocalTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar4;
  (this->SocketLocalTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->SocketLocalTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  this->Socket = param_2;
  this->SocketIndex = param_3;
  lVar8 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
  if ((param_2->BoneName != (FName)0x0) &&
     (piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)(lVar8 + 0x90),param_2->BoneName), piVar9 != (int *)0x0)) {
    this->SocketBoneIndex = *piVar9;
    return this;
  }
  this->SocketBoneIndex = -1;
  return this;
}

