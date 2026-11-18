// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAudioStats @ 14761d180

FAudioStats * __thiscall Audio::FAudioStats::FAudioStats(FAudioStats *this,FAudioStats *param_1)

{
  this->DisplayFlags = param_1->DisplayFlags;
  this->DisplaySort = param_1->DisplaySort;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            (&this->EnabledStats,&param_1->EnabledStats);
  (this->ListenerTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerTransforms).AllocatorInstance.Data =
       (param_1->ListenerTransforms).AllocatorInstance.Data;
  (param_1->ListenerTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerTransforms).ArrayNum = (param_1->ListenerTransforms).ArrayNum;
  (this->ListenerTransforms).ArrayMax = (param_1->ListenerTransforms).ArrayMax;
  (param_1->ListenerTransforms).ArrayNum = 0;
  (param_1->ListenerTransforms).ArrayMax = 0;
  (this->StatSoundInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSoundInfos).AllocatorInstance.Data = (param_1->StatSoundInfos).AllocatorInstance.Data;
  (param_1->StatSoundInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSoundInfos).ArrayNum = (param_1->StatSoundInfos).ArrayNum;
  (this->StatSoundInfos).ArrayMax = (param_1->StatSoundInfos).ArrayMax;
  (param_1->StatSoundInfos).ArrayNum = 0;
  (param_1->StatSoundInfos).ArrayMax = 0;
  (this->StatSoundMixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSoundMixes).AllocatorInstance.Data = (param_1->StatSoundMixes).AllocatorInstance.Data;
  (param_1->StatSoundMixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSoundMixes).ArrayNum = (param_1->StatSoundMixes).ArrayNum;
  (this->StatSoundMixes).ArrayMax = (param_1->StatSoundMixes).ArrayMax;
  (param_1->StatSoundMixes).ArrayNum = 0;
  (param_1->StatSoundMixes).ArrayMax = 0;
  return this;
}

// ~FAudioStats @ 147621480

void __thiscall Audio::FAudioStats::~FAudioStats(FAudioStats *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<Audio::FAudioStats::FStatSoundMix,int>
            ((FStatSoundMix *)(this->StatSoundMixes).AllocatorInstance.Data,
             (this->StatSoundMixes).ArrayNum);
  pFVar1 = (this->StatSoundMixes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FAudioStats::FStatSoundInfo,int>
            ((FStatSoundInfo *)(this->StatSoundInfos).AllocatorInstance.Data,
             (this->StatSoundInfos).ArrayNum);
  pFVar1 = (this->StatSoundInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ListenerTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EnabledStats).HashSize = 0;
  FVar2 = (this->EnabledStats).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EnabledStats).Elements);
  return;
}

