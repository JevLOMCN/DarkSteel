// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FResourceMap @ 145d8e0e0

FResourceMap * __thiscall
FRDGBarrierValidation::FResourceMap::FResourceMap(FResourceMap *this,FResourceMap *param_1)

{
  TMap<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
  *pTVar1;
  TMap<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
  *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FRDGViewableResource_*,FRHITransientAliasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGViewableResource_*,FRHITransientAliasingInfo,0>_>
  *pTVar5;
  TMap<FRDGViewableResource_*,FRHITransientAliasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGViewableResource_*,FRHITransientAliasingInfo,0>_>
  *pTVar6;
  void *pvVar7;
  
  TSet<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)param_1);
  pTVar1 = &this->Buffers;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->Buffers;
  *(undefined8 *)&(this->Buffers).field_0x8 = 0;
  *(undefined8 *)&(this->Buffers).field_0x20 = 0;
  *(undefined4 *)&(this->Buffers).field_0x28 = 0;
  *(undefined4 *)&(this->Buffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Buffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Buffers).field_0x34 = 0;
  *(undefined8 *)&(this->Buffers).field_0x40 = 0;
  *(undefined4 *)&(this->Buffers).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    puVar3 = &(param_1->Buffers).field_0x10;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    puVar4 = &(this->Buffers).field_0x10;
    *(undefined8 *)pTVar2 = 0;
    *(undefined4 *)&(this->Buffers).field_0x8 = *(undefined4 *)&(param_1->Buffers).field_0x8;
    *(undefined4 *)&(this->Buffers).field_0xc = *(undefined4 *)&(param_1->Buffers).field_0xc;
    *(undefined8 *)&(param_1->Buffers).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->Buffers).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar7 = *(void **)&(this->Buffers).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->Buffers).field_0x20 = *(undefined8 *)&(param_1->Buffers).field_0x20;
      *(undefined8 *)&(param_1->Buffers).field_0x20 = 0;
      *(undefined4 *)&(this->Buffers).field_0x28 = *(undefined4 *)&(param_1->Buffers).field_0x28;
      *(undefined4 *)&(this->Buffers).field_0x2c = *(undefined4 *)&(param_1->Buffers).field_0x2c;
      *(undefined8 *)&(param_1->Buffers).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Buffers).field_0x30 = *(undefined4 *)&(param_1->Buffers).field_0x30;
    *(undefined4 *)&(this->Buffers).field_0x34 = *(undefined4 *)&(param_1->Buffers).field_0x34;
    *(undefined4 *)&(param_1->Buffers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Buffers).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Buffers).field_0x40 == 0) {
    *(undefined4 *)&(this->Buffers).field_0x38 = *(undefined4 *)&(param_1->Buffers).field_0x38;
  }
  pvVar7 = *(void **)&(this->Buffers).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  *(undefined8 *)&(this->Buffers).field_0x40 = *(undefined8 *)&(param_1->Buffers).field_0x40;
  *(undefined8 *)&(param_1->Buffers).field_0x40 = 0;
  *(undefined4 *)&(this->Buffers).field_0x48 = *(undefined4 *)&(param_1->Buffers).field_0x48;
  pTVar5 = &param_1->Aliases;
  *(undefined4 *)&(param_1->Buffers).field_0x48 = 0;
  pTVar6 = &this->Aliases;
  *(undefined8 *)pTVar6 = 0;
  *(undefined8 *)&(this->Aliases).field_0x8 = 0;
  *(undefined8 *)&(this->Aliases).field_0x20 = 0;
  *(undefined4 *)&(this->Aliases).field_0x28 = 0;
  *(undefined4 *)&(this->Aliases).field_0x2c = 0x80;
  *(undefined4 *)&(this->Aliases).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Aliases).field_0x34 = 0;
  *(undefined8 *)&(this->Aliases).field_0x40 = 0;
  *(undefined4 *)&(this->Aliases).field_0x48 = 0;
  if (pTVar6 != pTVar5) {
    puVar3 = &(param_1->Aliases).field_0x10;
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    puVar4 = &(this->Aliases).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->Aliases).field_0x8 = *(undefined4 *)&(param_1->Aliases).field_0x8;
    *(undefined4 *)&(this->Aliases).field_0xc = *(undefined4 *)&(param_1->Aliases).field_0xc;
    *(undefined8 *)&(param_1->Aliases).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->Aliases).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar7 = *(void **)&(this->Aliases).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->Aliases).field_0x20 = *(undefined8 *)&(param_1->Aliases).field_0x20;
      *(undefined8 *)&(param_1->Aliases).field_0x20 = 0;
      *(undefined4 *)&(this->Aliases).field_0x28 = *(undefined4 *)&(param_1->Aliases).field_0x28;
      *(undefined4 *)&(this->Aliases).field_0x2c = *(undefined4 *)&(param_1->Aliases).field_0x2c;
      *(undefined8 *)&(param_1->Aliases).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Aliases).field_0x30 = *(undefined4 *)&(param_1->Aliases).field_0x30;
    *(undefined4 *)&(this->Aliases).field_0x34 = *(undefined4 *)&(param_1->Aliases).field_0x34;
    *(undefined4 *)&(param_1->Aliases).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Aliases).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Aliases).field_0x40 == 0) {
    *(undefined4 *)&(this->Aliases).field_0x38 = *(undefined4 *)&(param_1->Aliases).field_0x38;
  }
  pvVar7 = *(void **)&(this->Aliases).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  *(undefined8 *)&(this->Aliases).field_0x40 = *(undefined8 *)&(param_1->Aliases).field_0x40;
  *(undefined8 *)&(param_1->Aliases).field_0x40 = 0;
  *(undefined4 *)&(this->Aliases).field_0x48 = *(undefined4 *)&(param_1->Aliases).field_0x48;
  *(undefined4 *)&(param_1->Aliases).field_0x48 = 0;
  return this;
}

// ~FResourceMap @ 145d91150

void __thiscall FRDGBarrierValidation::FResourceMap::~FResourceMap(FResourceMap *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Aliases).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Aliases).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Aliases);
  *(undefined4 *)&(this->Buffers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Buffers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGBuffer_*,FRDGTransitionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRDGBuffer_*,FRDGTransitionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRDGBuffer_*,FRDGTransitionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Buffers);
  *(undefined4 *)&(this->Textures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Textures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

