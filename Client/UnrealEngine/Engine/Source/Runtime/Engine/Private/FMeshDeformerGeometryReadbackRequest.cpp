// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FMeshDeformerGeometryReadbackRequest @ 1475a9860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDeformerGeometryReadbackRequest::~FMeshDeformerGeometryReadbackRequest
          (FMeshDeformerGeometryReadbackRequest *this)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshDescription *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined4 local_334;
  void *local_330;
  undefined8 local_328;
  void *local_320;
  undefined8 local_318;
  void *local_310;
  undefined8 local_308;
  void *local_300;
  undefined8 local_2f8;
  undefined1 local_2e8 [72];
  undefined4 local_2a0;
  ForAnyElementType local_1e8;
  int local_1e0;
  ForAnyElementType local_1b0;
  int local_1a8;
  ForAnyElementType local_178;
  int local_170;
  ForAnyElementType local_140;
  int local_138;
  ForAnyElementType local_108;
  int local_100;
  ForAnyElementType local_d0;
  int local_c8;
  ForAnyElementType local_98;
  int local_90;
  ForAnyElementType local_60;
  int local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_358;
  if ((*(longlong *)&this->MeshDescriptionCallback_AnyThread != 0) &&
     (this->bMeshDescriptionHandled == false)) {
    pFVar3 = FMeshDescription::FMeshDescription((FMeshDescription *)local_2e8);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->MeshDescriptionCallback_AnyThread);
    plVar1 = *(longlong **)&(this->MeshDescriptionCallback_AnyThread).field_0x28;
    pcVar2 = *(code **)&this->MeshDescriptionCallback_AnyThread;
    plVar5 = (longlong *)&(this->MeshDescriptionCallback_AnyThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,pFVar3);
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_60.Data,local_58);
    if ((FIndexPerChannel *)local_60.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_60.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_98.Data,local_90);
    if ((FIndexPerChannel *)local_98.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_98.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_d0.Data,local_c8);
    if ((FIndexPerChannel *)local_d0.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_108.Data,local_100);
    if ((FIndexPerChannel *)local_108.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_108.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_140.Data,local_138);
    if ((FIndexPerChannel *)local_140.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_140.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_178.Data,local_170);
    if ((FIndexPerChannel *)local_178.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_178.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_1b0.Data,local_1a8);
    if ((FIndexPerChannel *)local_1b0.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)local_1e8.Data,local_1e0);
    if ((FIndexPerChannel *)local_1e8.Data != (FIndexPerChannel *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    local_2a0 = 0;
    if ((void *)local_2e8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2e8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2e8);
  }
  if ((*(void **)&this->VertexDataArraysCallback_AnyThread != (void *)0x0) &&
     (this->bVertexDataArraysHandled == false)) {
    local_334 = 0;
    local_338 = 0xffffffff;
    local_330 = (void *)0x0;
    local_328 = 0;
    local_320 = (void *)0x0;
    local_318 = 0;
    local_310 = (void *)0x0;
    local_308 = 0;
    local_300 = (void *)0x0;
    local_2f8 = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->VertexDataArraysCallback_AnyThread);
    plVar1 = *(longlong **)&(this->VertexDataArraysCallback_AnyThread).field_0x28;
    pcVar2 = *(code **)&this->VertexDataArraysCallback_AnyThread;
    plVar5 = (longlong *)&(this->VertexDataArraysCallback_AnyThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_338);
    if (local_300 != (void *)0x0) {
      FMemory::Free(local_300);
    }
    if (local_310 != (void *)0x0) {
      FMemory::Free(local_310);
    }
    if (local_320 != (void *)0x0) {
      FMemory::Free(local_320);
    }
    if (local_330 != (void *)0x0) {
      FMemory::Free(local_330);
    }
  }
  if (*(longlong *)&this->VertexDataArraysCallback_AnyThread != 0) {
    plVar1 = *(longlong **)&(this->VertexDataArraysCallback_AnyThread).field_0x28;
    plVar5 = (longlong *)&(this->VertexDataArraysCallback_AnyThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->MeshDescriptionCallback_AnyThread != 0) {
    plVar1 = *(longlong **)&(this->MeshDescriptionCallback_AnyThread).field_0x28;
    plVar5 = (longlong *)&(this->MeshDescriptionCallback_AnyThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

