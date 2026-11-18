// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetAdditiveAndOverrideResult @ 1468342a0

FAdditiveAndOverrides * __thiscall
UE::MovieScene::FAccumulationResult::GetAdditiveAndOverrideResult
          (FAccumulationResult *this,FAdditiveAndOverrides *__return_storage_ptr__,ushort param_1)

{
  FAdditiveAndOverrides *pFVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar2;
  longlong lVar3;
  FAdditiveAndOverrides local_28;
  FAdditiveAndOverrides local_18;
  
  pFVar1 = this->Overrides;
  if (pFVar1 == (FAdditiveAndOverrides *)0x0) {
    local_18.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.Pairs.ArrayNum = 0;
    local_18.Data.Pairs.ArrayMax = 0;
    FAdditiveAndOverrides::FAdditiveAndOverrides(__return_storage_ptr__,&local_18);
    FVar2.Data = local_18.Data.Pairs.AllocatorInstance.Data;
  }
  else {
    local_28.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.Pairs.ArrayNum = pFVar1[param_1].Data.Pairs.ArrayNum;
    lVar3 = (longlong)local_28.Data.Pairs.ArrayNum;
    _Src = pFVar1[param_1].Data.Pairs.AllocatorInstance.Data;
    if (local_28.Data.Pairs.ArrayNum == 0) {
      local_28.Data.Pairs.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_28.Data.Pairs.ArrayNum,0,(ForAnyElementType *)&local_28,
                 local_28.Data.Pairs.ArrayNum,&local_28.Data.Pairs.ArrayMax);
      memcpy(local_28.Data.Pairs.AllocatorInstance.Data,_Src,lVar3 << 5);
    }
    FAdditiveAndOverrides::FAdditiveAndOverrides(__return_storage_ptr__,&local_28);
    FVar2.Data = local_28.Data.Pairs.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

