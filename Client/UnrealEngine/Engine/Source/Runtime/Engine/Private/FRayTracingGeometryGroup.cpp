// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRayTracingGeometryGroup @ 148441aa0

FRayTracingGeometryGroup * __thiscall
FRayTracingGeometryManager::FRayTracingGeometryGroup::FRayTracingGeometryGroup
          (FRayTracingGeometryGroup *this,FRayTracingGeometryGroup *param_1)

{
  TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<FPrimitiveSceneProxy_*,DefaultKeyFuncs<FPrimitiveSceneProxy_*,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  (this->GeometryHandles).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->GeometryHandles).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    *(undefined8 *)(this->GeometryHandles).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->GeometryHandles).AllocatorInstance.InlineData;
  }
  pTVar1 = &this->ProxiesWithCachedRayTracingState;
  (this->GeometryHandles).AllocatorInstance.SecondaryData =
       (param_1->GeometryHandles).AllocatorInstance.SecondaryData;
  pTVar2 = &param_1->ProxiesWithCachedRayTracingState;
  (param_1->GeometryHandles).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->GeometryHandles).ArrayNum = (param_1->GeometryHandles).ArrayNum;
  (this->GeometryHandles).ArrayMax = (param_1->GeometryHandles).ArrayMax;
  (param_1->GeometryHandles).ArrayNum = 0;
  (param_1->GeometryHandles).ArrayMax = 2;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x34 = 0;
  (this->ProxiesWithCachedRayTracingState).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProxiesWithCachedRayTracingState).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->ProxiesWithCachedRayTracingState).Elements.field_0x10;
    *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x8 =
         *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x8;
    _Src = &(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x10;
    *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0xc =
         *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0xc;
    *(undefined8 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x20 =
           *(undefined8 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x20;
      *(undefined8 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x28 =
           *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x28;
      *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x2c =
           *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x2c;
      *(undefined8 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x30 =
         *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x30;
    *(undefined4 *)&(this->ProxiesWithCachedRayTracingState).Elements.field_0x34 =
         *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x34;
    *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ProxiesWithCachedRayTracingState).Elements.field_0x34 = 0;
  }
  if ((param_1->ProxiesWithCachedRayTracingState).Hash.SecondaryData ==
      (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->ProxiesWithCachedRayTracingState).Hash.InlineData =
         *(undefined4 *)(param_1->ProxiesWithCachedRayTracingState).Hash.InlineData;
  }
  FVar4 = (this->ProxiesWithCachedRayTracingState).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->ProxiesWithCachedRayTracingState).Hash.SecondaryData =
       (param_1->ProxiesWithCachedRayTracingState).Hash.SecondaryData;
  (param_1->ProxiesWithCachedRayTracingState).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ProxiesWithCachedRayTracingState).HashSize =
       (param_1->ProxiesWithCachedRayTracingState).HashSize;
  (param_1->ProxiesWithCachedRayTracingState).HashSize = 0;
  this->CurrentFirstLODIdx = param_1->CurrentFirstLODIdx;
  this->NumReferences = param_1->NumReferences;
  return this;
}

