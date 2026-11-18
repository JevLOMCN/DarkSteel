// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// operator= @ 14d9c16b0

FCSPose<FCompactHeapPose> * __thiscall
FCSPose<FCompactHeapPose>::operator=
          (FCSPose<FCompactHeapPose> *this,FCSPose<FCompactHeapPose> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  if (this != param_1) {
    iVar2 = *(int *)&(this->Pose).field_0xc;
    puVar1 = &(this->Pose).field_0xc;
    _Src = *(void **)&param_1->Pose;
    iVar3 = *(int *)&(param_1->Pose).field_0x8;
    *(int *)&(this->Pose).field_0x8 = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar3,iVar2,(ForAnyElementType *)this,iVar3,(int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)&this->Pose,_Src,(longlong)iVar3 * 0x60);
      }
    }
  }
  *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&this->ComponentSpaceFlags,&param_1->ComponentSpaceFlags);
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&this->BoneMask,&param_1->BoneMask);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->BonesToConvert,&param_1->BonesToConvert);
  return this;
}

