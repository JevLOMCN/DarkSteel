// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSortedParticleSet @ 148b1ddb0

FSortedParticleSet * __thiscall
FSortedParticleSet::FSortedParticleSet(FSortedParticleSet *this,FSortedParticleSet *param_1)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  this->Size = param_1->Size;
  this->PSysSize = param_1->PSysSize;
  this->ModuleSize = param_1->ModuleSize;
  this->ComponentSize = param_1->ComponentSize;
  this->ComponentCount = param_1->ComponentCount;
  (this->ComponentResourceSize).ResourceSizeMode = (param_1->ComponentResourceSize).ResourceSizeMode
  ;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentResourceSize).DedicatedSystemMemoryBytesMap,
             &(param_1->ComponentResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentResourceSize).DedicatedVideoMemoryBytesMap,
             &(param_1->ComponentResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentResourceSize).UnknownMemoryBytesMap,
             &(param_1->ComponentResourceSize).UnknownMemoryBytesMap);
  (this->ComponentTrueResourceSize).ResourceSizeMode =
       (param_1->ComponentTrueResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentTrueResourceSize).DedicatedSystemMemoryBytesMap,
             &(param_1->ComponentTrueResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentTrueResourceSize).DedicatedVideoMemoryBytesMap,
             &(param_1->ComponentTrueResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->ComponentTrueResourceSize).UnknownMemoryBytesMap,
             &(param_1->ComponentTrueResourceSize).UnknownMemoryBytesMap);
  return this;
}

