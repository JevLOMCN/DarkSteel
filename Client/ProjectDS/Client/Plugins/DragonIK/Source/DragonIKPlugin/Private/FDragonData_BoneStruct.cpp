// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// operator= @ 14d2a2f80

FDragonData_BoneStruct * __thiscall
FDragonData_BoneStruct::operator=(FDragonData_BoneStruct *this,FDragonData_BoneStruct *param_1)

{
  undefined4 uVar1;
  
  (this->Start_Spine).BoneName = (param_1->Start_Spine).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Start_Spine).field_0x8;
  *(uint *)&(this->Start_Spine).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Start_Spine).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Start_Spine).field_0x8 =
       ((param_1->Start_Spine).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->Start_Spine).field_0x8;
  (this->Start_Spine).CachedCompactPoseIndex = (param_1->Start_Spine).CachedCompactPoseIndex;
  (this->Pelvis).BoneName = (param_1->Pelvis).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Pelvis).field_0x8;
  *(uint *)&(this->Pelvis).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Pelvis).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Pelvis).field_0x8 =
       ((param_1->Pelvis).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->Pelvis).field_0x8;
  (this->Pelvis).CachedCompactPoseIndex = (param_1->Pelvis).CachedCompactPoseIndex;
  (this->Head_Bone).BoneName = (param_1->Head_Bone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Head_Bone).field_0x8;
  *(uint *)&(this->Head_Bone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Head_Bone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Head_Bone).field_0x8 =
       ((param_1->Head_Bone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->Head_Bone).field_0x8;
  (this->Head_Bone).CachedCompactPoseIndex = (param_1->Head_Bone).CachedCompactPoseIndex;
  (this->LookLimit_Bone).BoneName = (param_1->LookLimit_Bone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->LookLimit_Bone).field_0x8;
  *(uint *)&(this->LookLimit_Bone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->LookLimit_Bone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->LookLimit_Bone).field_0x8 =
       ((param_1->LookLimit_Bone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->LookLimit_Bone).field_0x8;
  (this->LookLimit_Bone).CachedCompactPoseIndex = (param_1->LookLimit_Bone).CachedCompactPoseIndex;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->FeetBones,&param_1->FeetBones);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->KneeBones,&param_1->KneeBones);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->SecondKneeBones,&param_1->SecondKneeBones);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->ThighBones,&param_1->ThighBones);
  return this;
}

