// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FAdditiveAndOverrides @ 1468078a0

FAdditiveAndOverrides * __thiscall
UE::MovieScene::FAdditiveAndOverrides::FAdditiveAndOverrides
          (FAdditiveAndOverrides *this,FAdditiveAndOverrides *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Data).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).Pairs.ArrayMax;
  iVar2 = (param_1->Data).Pairs.ArrayNum;
  _Src = (param_1->Data).Pairs.AllocatorInstance.Data;
  (this->Data).Pairs.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Data).Pairs.AllocatorInstance.Data,_Src,(longlong)iVar2 << 5);
  return this;
}

