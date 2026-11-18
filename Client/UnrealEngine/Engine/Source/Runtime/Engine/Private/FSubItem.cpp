// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSubItem @ 148b1de90

FSubItem * __thiscall UE::FSubItem::FSubItem(FSubItem *this,FSubItem *param_1)

{
  this->Object = param_1->Object;
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  this->ResourceSize = param_1->ResourceSize;
  (this->TrueResourceSize).ResourceSizeMode = (param_1->TrueResourceSize).ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).DedicatedSystemMemoryBytesMap,
             &(param_1->TrueResourceSize).DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).DedicatedVideoMemoryBytesMap,
             &(param_1->TrueResourceSize).DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&(this->TrueResourceSize).UnknownMemoryBytesMap,
             &(param_1->TrueResourceSize).UnknownMemoryBytesMap);
  return this;
}

