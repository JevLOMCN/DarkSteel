// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 2

// FMeshSectionAttributeData @ 14d264630

FMeshSectionAttributeData * __thiscall
_anon_769F2E2B::FMeshSectionAttributeData::FMeshSectionAttributeData
          (FMeshSectionAttributeData *this,FMeshSectionAttributeData *param_1)

{
  TMap<FVertexInstanceID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,int,0>_>
  *pTVar1;
  TMap<FVertexInstanceID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,int,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->IndexOfInstances;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->IndexOfInstances;
  (this->Positions).AllocatorInstance.Data = (param_1->Positions).AllocatorInstance.Data;
  (param_1->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = (param_1->Positions).ArrayNum;
  (this->Positions).ArrayMax = (param_1->Positions).ArrayMax;
  (param_1->Positions).ArrayNum = 0;
  (param_1->Positions).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).AllocatorInstance.Data = (param_1->Triangles).AllocatorInstance.Data;
  (param_1->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = (param_1->Triangles).ArrayNum;
  (this->Triangles).ArrayMax = (param_1->Triangles).ArrayMax;
  (param_1->Triangles).ArrayNum = 0;
  (param_1->Triangles).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).AllocatorInstance.Data = (param_1->Normals).AllocatorInstance.Data;
  (param_1->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = (param_1->Normals).ArrayNum;
  (this->Normals).ArrayMax = (param_1->Normals).ArrayMax;
  (param_1->Normals).ArrayNum = 0;
  (param_1->Normals).ArrayMax = 0;
  (this->UV0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV0).AllocatorInstance.Data = (param_1->UV0).AllocatorInstance.Data;
  (param_1->UV0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV0).ArrayNum = (param_1->UV0).ArrayNum;
  (this->UV0).ArrayMax = (param_1->UV0).ArrayMax;
  (param_1->UV0).ArrayNum = 0;
  (param_1->UV0).ArrayMax = 0;
  (this->VertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColors).AllocatorInstance.Data = (param_1->VertexColors).AllocatorInstance.Data;
  (param_1->VertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColors).ArrayNum = (param_1->VertexColors).ArrayNum;
  (this->VertexColors).ArrayMax = (param_1->VertexColors).ArrayMax;
  (param_1->VertexColors).ArrayNum = 0;
  (param_1->VertexColors).ArrayMax = 0;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).AllocatorInstance.Data = (param_1->Tangents).AllocatorInstance.Data;
  (param_1->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = (param_1->Tangents).ArrayNum;
  (this->Tangents).ArrayMax = (param_1->Tangents).ArrayMax;
  (param_1->Tangents).ArrayNum = 0;
  (param_1->Tangents).ArrayMax = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->IndexOfInstances).field_0x8 = 0;
  *(undefined8 *)&(this->IndexOfInstances).field_0x20 = 0;
  *(undefined4 *)&(this->IndexOfInstances).field_0x28 = 0;
  *(undefined4 *)&(this->IndexOfInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexOfInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexOfInstances).field_0x34 = 0;
  *(undefined8 *)&(this->IndexOfInstances).field_0x40 = 0;
  *(undefined4 *)&(this->IndexOfInstances).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->IndexOfInstances).field_0x10;
    *(undefined4 *)&(this->IndexOfInstances).field_0x8 =
         *(undefined4 *)&(param_1->IndexOfInstances).field_0x8;
    _Src = &(param_1->IndexOfInstances).field_0x10;
    *(undefined4 *)&(this->IndexOfInstances).field_0xc =
         *(undefined4 *)&(param_1->IndexOfInstances).field_0xc;
    *(undefined8 *)&(param_1->IndexOfInstances).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->IndexOfInstances).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->IndexOfInstances).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->IndexOfInstances).field_0x20 =
           *(undefined8 *)&(param_1->IndexOfInstances).field_0x20;
      *(undefined8 *)&(param_1->IndexOfInstances).field_0x20 = 0;
      *(undefined4 *)&(this->IndexOfInstances).field_0x28 =
           *(undefined4 *)&(param_1->IndexOfInstances).field_0x28;
      *(undefined4 *)&(this->IndexOfInstances).field_0x2c =
           *(undefined4 *)&(param_1->IndexOfInstances).field_0x2c;
      *(undefined8 *)&(param_1->IndexOfInstances).field_0x28 = 0;
    }
    *(undefined4 *)&(this->IndexOfInstances).field_0x30 =
         *(undefined4 *)&(param_1->IndexOfInstances).field_0x30;
    *(undefined4 *)&(this->IndexOfInstances).field_0x34 =
         *(undefined4 *)&(param_1->IndexOfInstances).field_0x34;
    *(undefined4 *)&(param_1->IndexOfInstances).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->IndexOfInstances).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->IndexOfInstances).field_0x40 == 0) {
    *(undefined4 *)&(this->IndexOfInstances).field_0x38 =
         *(undefined4 *)&(param_1->IndexOfInstances).field_0x38;
  }
  pvVar3 = *(void **)&(this->IndexOfInstances).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->IndexOfInstances).field_0x40 =
       *(undefined8 *)&(param_1->IndexOfInstances).field_0x40;
  *(undefined8 *)&(param_1->IndexOfInstances).field_0x40 = 0;
  *(undefined4 *)&(this->IndexOfInstances).field_0x48 =
       *(undefined4 *)&(param_1->IndexOfInstances).field_0x48;
  *(undefined4 *)&(param_1->IndexOfInstances).field_0x48 = 0;
  return this;
}

// ~FMeshSectionAttributeData @ 14d2655b0

void __thiscall
_anon_769F2E2B::FMeshSectionAttributeData::~FMeshSectionAttributeData
          (FMeshSectionAttributeData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->IndexOfInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexOfInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexOfInstances);
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VertexColors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UV0).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Positions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

