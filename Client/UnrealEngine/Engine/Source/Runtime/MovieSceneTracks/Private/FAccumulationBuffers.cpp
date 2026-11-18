// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// ~FAccumulationBuffers @ 14680f1b0

void __thiscall
UE::MovieScene::FAccumulationBuffers::~FAccumulationBuffers(FAccumulationBuffers *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer> *)
             (this->AdditiveAndOverrides).Pairs.AllocatorInstance.Data,
             (this->AdditiveAndOverrides).Pairs.ArrayNum);
  pFVar1 = (this->AdditiveAndOverrides).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *)
             (this->AdditiveFromBase).Pairs.AllocatorInstance.Data,
             (this->AdditiveFromBase).Pairs.ArrayNum);
  pFVar1 = (this->AdditiveFromBase).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Additive).Pairs.AllocatorInstance.Data,(this->Additive).Pairs.ArrayNum);
  pFVar1 = (this->Additive).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Relative).Pairs.AllocatorInstance.Data,(this->Relative).Pairs.ArrayNum);
  pFVar1 = (this->Relative).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Absolute).Pairs.AllocatorInstance.Data,(this->Absolute).Pairs.ArrayNum);
  pFVar1 = (this->Absolute).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FindResults @ 14682e0b0

FAccumulationResult * __thiscall
UE::MovieScene::FAccumulationBuffers::FindResults
          (FAccumulationBuffers *this,FAccumulationResult *__return_storage_ptr__,
          FComponentTypeID param_1)

{
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar1;
  FAdditiveFromBaseBuffer *pFVar2;
  FAdditiveAndOverrideBuffer *pFVar3;
  FComponentTypeID local_res18 [8];
  
  __return_storage_ptr__->Absolutes = (FBlendResult *)0x0;
  __return_storage_ptr__->Relatives = (FBlendResult *)0x0;
  __return_storage_ptr__->Additives = (FBlendResult *)0x0;
  __return_storage_ptr__->AdditivesFromBase = (FBlendResult *)0x0;
  __return_storage_ptr__->Overrides = (FAdditiveAndOverrides *)0x0;
  local_res18[0].Value = param_1.Value;
  pTVar1 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           ::Find(&this->Absolute,local_res18);
  if (pTVar1 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
    __return_storage_ptr__->Absolutes = (FBlendResult *)(pTVar1->AllocatorInstance).Data;
  }
  pTVar1 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           ::Find(&this->Relative,local_res18);
  if (pTVar1 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
    __return_storage_ptr__->Relatives = (FBlendResult *)(pTVar1->AllocatorInstance).Data;
  }
  pTVar1 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           ::Find(&this->Additive,local_res18);
  if (pTVar1 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
    __return_storage_ptr__->Additives = (FBlendResult *)(pTVar1->AllocatorInstance).Data;
  }
  pFVar2 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           ::Find(&this->AdditiveFromBase,local_res18);
  if (pFVar2 != (FAdditiveFromBaseBuffer *)0x0) {
    __return_storage_ptr__->AdditivesFromBase =
         (FBlendResult *)(pFVar2->Buffer).AllocatorInstance.Data;
  }
  pFVar3 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           ::Find(&this->AdditiveAndOverrides,local_res18);
  if (pFVar3 != (FAdditiveAndOverrideBuffer *)0x0) {
    __return_storage_ptr__->Overrides =
         (FAdditiveAndOverrides *)(pFVar3->Values).AllocatorInstance.Data;
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 14683efa0

bool __thiscall UE::MovieScene::FAccumulationBuffers::IsEmpty(FAccumulationBuffers *this)

{
  if (((((this->Absolute).Pairs.ArrayNum == 0) && ((this->Relative).Pairs.ArrayNum == 0)) &&
      ((this->Additive).Pairs.ArrayNum == 0)) &&
     (((this->AdditiveFromBase).Pairs.ArrayNum == 0 &&
      ((this->AdditiveAndOverrides).Pairs.ArrayNum == 0)))) {
    return true;
  }
  return false;
}

// Reset @ 146860120

void __thiscall UE::MovieScene::FAccumulationBuffers::Reset(FAccumulationBuffers *this)

{
  int *piVar1;
  
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Absolute).Pairs.AllocatorInstance.Data,(this->Absolute).Pairs.ArrayNum);
  piVar1 = &(this->Absolute).Pairs.ArrayMax;
  (this->Absolute).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Relative).Pairs.AllocatorInstance.Data,(this->Relative).Pairs.ArrayNum);
  piVar1 = &(this->Relative).Pairs.ArrayMax;
  (this->Relative).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->Relative,0,piVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->Additive).Pairs.AllocatorInstance.Data,(this->Additive).Pairs.ArrayNum);
  piVar1 = &(this->Additive).Pairs.ArrayMax;
  (this->Additive).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->Additive,0,piVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *)
             (this->AdditiveFromBase).Pairs.AllocatorInstance.Data,
             (this->AdditiveFromBase).Pairs.ArrayNum);
  piVar1 = &(this->AdditiveFromBase).Pairs.ArrayMax;
  (this->AdditiveFromBase).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AdditiveFromBase,0,piVar1);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer> *)
             (this->AdditiveAndOverrides).Pairs.AllocatorInstance.Data,
             (this->AdditiveAndOverrides).Pairs.ArrayNum);
  piVar1 = &(this->AdditiveAndOverrides).Pairs.ArrayMax;
  (this->AdditiveAndOverrides).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AdditiveAndOverrides,0,piVar1);
  }
  return;
}

