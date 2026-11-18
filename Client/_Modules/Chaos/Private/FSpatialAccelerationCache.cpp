// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FSpatialAccelerationCache @ 143d026a0

FSpatialAccelerationCache * __thiscall
Chaos::FSpatialAccelerationCache::FSpatialAccelerationCache(FSpatialAccelerationCache *this)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSpatialAccelerationCache_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined ***)&this->MHasBoundingBoxes = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined ***)&this->MBounds = &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MPayloads =
       &___7__TArrayCollectionArray_VFAccelerationStructureHandle_Chaos___Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->MHasBoundingBoxes).field_0x8 = 0;
  *(undefined8 *)&(this->MHasBoundingBoxes).field_0x10 = 0;
  *(undefined8 *)&(this->MBounds).field_0x8 = 0;
  *(undefined8 *)&(this->MBounds).field_0x10 = 0;
  *(undefined8 *)&(this->MPayloads).field_0x8 = 0;
  *(undefined8 *)&(this->MPayloads).field_0x10 = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MHasBoundingBoxes);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MBounds);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPayloads)
  ;
  this->MDirtyValidationCount = 0;
  return this;
}

// Bounds @ 143d458d0

TAABB<double,3> * __thiscall
Chaos::FSpatialAccelerationCache::Bounds(FSpatialAccelerationCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABB<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MBounds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABB<double,3> *)((longlong)param_1 * 0x30 + *(longlong *)&(this->MBounds).field_0x8);
}

// HasBounds @ 143d580f0

bool * __thiscall
Chaos::FSpatialAccelerationCache::HasBounds(FSpatialAccelerationCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MHasBoundingBoxes).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)param_1 + *(longlong *)&(this->MHasBoundingBoxes).field_0x8);
}

// Payload @ 143d5b630

FAccelerationStructureHandle * __thiscall
Chaos::FSpatialAccelerationCache::Payload(FSpatialAccelerationCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAccelerationStructureHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPayloads).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAccelerationStructureHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FAccelerationStructureHandle *)
         ((longlong)param_1 * 0x38 + *(longlong *)&(this->MPayloads).field_0x8);
}

