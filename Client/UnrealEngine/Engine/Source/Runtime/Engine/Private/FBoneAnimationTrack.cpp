// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147423f40

UScriptStruct * __cdecl FBoneAnimationTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoneAnimationTrack,(UObject *)pUVar1,
                         L"BoneAnimationTrack");
  }
  return Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.OuterSingleton;
}

// operator= @ 14743a0c0

FBoneAnimationTrack * __thiscall
FBoneAnimationTrack::operator=(FBoneAnimationTrack *this,FBoneAnimationTrack *param_1)

{
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)param_1);
  pTVar1 = &(param_1->InternalTrackData).RotKeys;
  pTVar2 = &(this->InternalTrackData).RotKeys;
  if (pTVar2 != pTVar1) {
    iVar4 = (this->InternalTrackData).RotKeys.ArrayMax;
    piVar3 = &(this->InternalTrackData).RotKeys.ArrayMax;
    _Src = (pTVar1->AllocatorInstance).Data;
    iVar5 = (param_1->InternalTrackData).RotKeys.ArrayNum;
    (this->InternalTrackData).RotKeys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 4);
      }
    }
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->InternalTrackData).ScaleKeys,&(param_1->InternalTrackData).ScaleKeys);
  this->BoneTreeIndex = param_1->BoneTreeIndex;
  this->Name = param_1->Name;
  return this;
}

