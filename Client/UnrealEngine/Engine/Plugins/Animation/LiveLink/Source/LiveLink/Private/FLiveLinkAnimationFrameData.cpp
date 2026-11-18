// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// operator= @ 14d018400

FLiveLinkAnimationFrameData * __thiscall
FLiveLinkAnimationFrameData::operator=
          (FLiveLinkAnimationFrameData *this,FLiveLinkAnimationFrameData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)this,(FLiveLinkBaseFrameData *)param_1);
  pTVar2 = &this->Transforms;
  if (pTVar2 != &param_1->Transforms) {
    iVar3 = (param_1->Transforms).ArrayNum;
    piVar1 = &(this->Transforms).ArrayMax;
    _Src = (param_1->Transforms).AllocatorInstance.Data;
    (this->Transforms).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
      }
    }
  }
  return this;
}

