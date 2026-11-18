// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// ~TStaticArray<FVulkanCustomMemManager::FType,5,4294967295> @ 145b04c60

void __thiscall
TStaticArray<FVulkanCustomMemManager::FType,5,4294967295>::
~TStaticArray<FVulkanCustomMemManager::FType,5,4294967295>
          (TStaticArray<FVulkanCustomMemManager::FType,5,4294967295> *this)

{
  void *pvVar1;
  
  *(undefined4 *)&this->Elements[4].Allocs.field_0x48 = 0;
  pvVar1 = *(void **)&this->Elements[4].Allocs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Elements[4].Allocs);
  *(undefined4 *)&this->Elements[3].Allocs.field_0x48 = 0;
  pvVar1 = *(void **)&this->Elements[3].Allocs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Elements[3].Allocs);
  *(undefined4 *)&this->Elements[2].Allocs.field_0x48 = 0;
  pvVar1 = *(void **)&this->Elements[2].Allocs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Elements[2].Allocs);
  *(undefined4 *)&this->Elements[1].Allocs.field_0x48 = 0;
  pvVar1 = *(void **)&this->Elements[1].Allocs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Elements[1].Allocs);
  *(undefined4 *)&this->Elements[0].Allocs.field_0x48 = 0;
  pvVar1 = *(void **)&this->Elements[0].Allocs.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Elements[0].Allocs);
  return;
}

// TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> @ 145b43ee0

TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> * __thiscall
TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::
TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>
          (TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *this,
          TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *param_1)

{
  int *piVar1;
  FStageInfo *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &this->Elements[0].Types.ArrayMax;
  this->Elements[0].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[0].Types.ArrayNum;
  pFVar4 = param_1->Elements[0].Types.AllocatorInstance.Data;
  this->Elements[0].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy(this->Elements[0].Types.AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pFVar2 = this->Elements + 1;
  this->Elements[0].PackedGlobalsSize = param_1->Elements[0].PackedGlobalsSize;
  this->Elements[0].NumBoundUniformBuffers = param_1->Elements[0].NumBoundUniformBuffers;
  this->Elements[0].NumImageInfos = param_1->Elements[0].NumImageInfos;
  this->Elements[0].NumBufferInfos = param_1->Elements[0].NumBufferInfos;
  this->Elements[0].NumAccelerationStructures = param_1->Elements[0].NumAccelerationStructures;
  piVar1 = &this->Elements[1].Types.ArrayMax;
  (pFVar2->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[1].Types.ArrayNum;
  pFVar4 = param_1->Elements[1].Types.AllocatorInstance.Data;
  this->Elements[1].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pFVar2 = this->Elements + 2;
  this->Elements[1].PackedGlobalsSize = param_1->Elements[1].PackedGlobalsSize;
  this->Elements[1].NumBoundUniformBuffers = param_1->Elements[1].NumBoundUniformBuffers;
  this->Elements[1].NumImageInfos = param_1->Elements[1].NumImageInfos;
  this->Elements[1].NumBufferInfos = param_1->Elements[1].NumBufferInfos;
  this->Elements[1].NumAccelerationStructures = param_1->Elements[1].NumAccelerationStructures;
  piVar1 = &this->Elements[2].Types.ArrayMax;
  (pFVar2->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[2].Types.ArrayNum;
  pFVar4 = param_1->Elements[2].Types.AllocatorInstance.Data;
  this->Elements[2].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pFVar2 = this->Elements + 3;
  this->Elements[2].PackedGlobalsSize = param_1->Elements[2].PackedGlobalsSize;
  this->Elements[2].NumBoundUniformBuffers = param_1->Elements[2].NumBoundUniformBuffers;
  this->Elements[2].NumImageInfos = param_1->Elements[2].NumImageInfos;
  this->Elements[2].NumBufferInfos = param_1->Elements[2].NumBufferInfos;
  this->Elements[2].NumAccelerationStructures = param_1->Elements[2].NumAccelerationStructures;
  piVar1 = &this->Elements[3].Types.ArrayMax;
  (pFVar2->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[3].Types.ArrayNum;
  pFVar4 = param_1->Elements[3].Types.AllocatorInstance.Data;
  this->Elements[3].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pFVar2 = this->Elements + 4;
  this->Elements[3].PackedGlobalsSize = param_1->Elements[3].PackedGlobalsSize;
  this->Elements[3].NumBoundUniformBuffers = param_1->Elements[3].NumBoundUniformBuffers;
  this->Elements[3].NumImageInfos = param_1->Elements[3].NumImageInfos;
  this->Elements[3].NumBufferInfos = param_1->Elements[3].NumBufferInfos;
  this->Elements[3].NumAccelerationStructures = param_1->Elements[3].NumAccelerationStructures;
  piVar1 = &this->Elements[4].Types.ArrayMax;
  (pFVar2->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[4].Types.ArrayNum;
  pFVar4 = param_1->Elements[4].Types.AllocatorInstance.Data;
  this->Elements[4].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pFVar2 = this->Elements + 5;
  this->Elements[4].PackedGlobalsSize = param_1->Elements[4].PackedGlobalsSize;
  this->Elements[4].NumBoundUniformBuffers = param_1->Elements[4].NumBoundUniformBuffers;
  this->Elements[4].NumImageInfos = param_1->Elements[4].NumImageInfos;
  this->Elements[4].NumBufferInfos = param_1->Elements[4].NumBufferInfos;
  this->Elements[4].NumAccelerationStructures = param_1->Elements[4].NumAccelerationStructures;
  piVar1 = &this->Elements[5].Types.ArrayMax;
  (pFVar2->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->Elements[5].Types.ArrayNum;
  pFVar4 = param_1->Elements[5].Types.AllocatorInstance.Data;
  this->Elements[5].Types.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->Elements[5].PackedGlobalsSize = param_1->Elements[5].PackedGlobalsSize;
  this->Elements[5].NumBoundUniformBuffers = param_1->Elements[5].NumBoundUniformBuffers;
  this->Elements[5].NumImageInfos = param_1->Elements[5].NumImageInfos;
  this->Elements[5].NumBufferInfos = param_1->Elements[5].NumBufferInfos;
  this->Elements[5].NumAccelerationStructures = param_1->Elements[5].NumAccelerationStructures;
  return this;
}

// operator= @ 145b510f0

TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> * __thiscall
TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::operator=
          (TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *this,
          TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *param_1)

{
  int *piVar1;
  FStageInfo *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    iVar3 = param_1->Elements[0].Types.ArrayNum;
    piVar1 = &this->Elements[0].Types.ArrayMax;
    pFVar5 = param_1->Elements[0].Types.AllocatorInstance.Data;
    iVar4 = *piVar1;
    this->Elements[0].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(this->Elements[0].Types.AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[0].PackedGlobalsSize = param_1->Elements[0].PackedGlobalsSize;
  pFVar2 = this->Elements + 1;
  this->Elements[0].NumBoundUniformBuffers = param_1->Elements[0].NumBoundUniformBuffers;
  this->Elements[0].NumImageInfos = param_1->Elements[0].NumImageInfos;
  this->Elements[0].NumBufferInfos = param_1->Elements[0].NumBufferInfos;
  this->Elements[0].NumAccelerationStructures = param_1->Elements[0].NumAccelerationStructures;
  if (pFVar2 != param_1->Elements + 1) {
    iVar3 = param_1->Elements[1].Types.ArrayNum;
    piVar1 = &this->Elements[1].Types.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[1].Types.AllocatorInstance.Data;
    this->Elements[1].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[1].PackedGlobalsSize = param_1->Elements[1].PackedGlobalsSize;
  this->Elements[1].NumBoundUniformBuffers = param_1->Elements[1].NumBoundUniformBuffers;
  this->Elements[1].NumImageInfos = param_1->Elements[1].NumImageInfos;
  this->Elements[1].NumBufferInfos = param_1->Elements[1].NumBufferInfos;
  this->Elements[1].NumAccelerationStructures = param_1->Elements[1].NumAccelerationStructures;
  pFVar2 = this->Elements + 2;
  if (pFVar2 != param_1->Elements + 2) {
    iVar3 = param_1->Elements[2].Types.ArrayNum;
    piVar1 = &this->Elements[2].Types.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[2].Types.AllocatorInstance.Data;
    this->Elements[2].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[2].PackedGlobalsSize = param_1->Elements[2].PackedGlobalsSize;
  this->Elements[2].NumBoundUniformBuffers = param_1->Elements[2].NumBoundUniformBuffers;
  this->Elements[2].NumImageInfos = param_1->Elements[2].NumImageInfos;
  this->Elements[2].NumBufferInfos = param_1->Elements[2].NumBufferInfos;
  this->Elements[2].NumAccelerationStructures = param_1->Elements[2].NumAccelerationStructures;
  pFVar2 = this->Elements + 3;
  if (pFVar2 != param_1->Elements + 3) {
    iVar3 = param_1->Elements[3].Types.ArrayNum;
    piVar1 = &this->Elements[3].Types.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[3].Types.AllocatorInstance.Data;
    this->Elements[3].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[3].PackedGlobalsSize = param_1->Elements[3].PackedGlobalsSize;
  this->Elements[3].NumBoundUniformBuffers = param_1->Elements[3].NumBoundUniformBuffers;
  this->Elements[3].NumImageInfos = param_1->Elements[3].NumImageInfos;
  this->Elements[3].NumBufferInfos = param_1->Elements[3].NumBufferInfos;
  this->Elements[3].NumAccelerationStructures = param_1->Elements[3].NumAccelerationStructures;
  pFVar2 = this->Elements + 4;
  if (pFVar2 != param_1->Elements + 4) {
    iVar3 = param_1->Elements[4].Types.ArrayNum;
    piVar1 = &this->Elements[4].Types.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[4].Types.AllocatorInstance.Data;
    this->Elements[4].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[4].PackedGlobalsSize = param_1->Elements[4].PackedGlobalsSize;
  this->Elements[4].NumBoundUniformBuffers = param_1->Elements[4].NumBoundUniformBuffers;
  this->Elements[4].NumImageInfos = param_1->Elements[4].NumImageInfos;
  this->Elements[4].NumBufferInfos = param_1->Elements[4].NumBufferInfos;
  this->Elements[4].NumAccelerationStructures = param_1->Elements[4].NumAccelerationStructures;
  pFVar2 = this->Elements + 5;
  if (pFVar2 != param_1->Elements + 5) {
    iVar3 = param_1->Elements[5].Types.ArrayNum;
    piVar1 = &this->Elements[5].Types.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = param_1->Elements[5].Types.AllocatorInstance.Data;
    this->Elements[5].Types.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Types).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  this->Elements[5].PackedGlobalsSize = param_1->Elements[5].PackedGlobalsSize;
  this->Elements[5].NumBoundUniformBuffers = param_1->Elements[5].NumBoundUniformBuffers;
  this->Elements[5].NumImageInfos = param_1->Elements[5].NumImageInfos;
  this->Elements[5].NumBufferInfos = param_1->Elements[5].NumBufferInfos;
  this->Elements[5].NumAccelerationStructures = param_1->Elements[5].NumAccelerationStructures;
  return this;
}

// operator== @ 145b52a60

bool __thiscall
TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::operator==
          (TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *this,
          TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *param_1)

{
  int iVar1;
  
  if (((((this->Elements[0].PackedGlobalsSize == param_1->Elements[0].PackedGlobalsSize) &&
        (this->Elements[0].NumBoundUniformBuffers == param_1->Elements[0].NumBoundUniformBuffers))
       && (this->Elements[0].NumBufferInfos == param_1->Elements[0].NumBufferInfos)) &&
      ((this->Elements[0].NumImageInfos == param_1->Elements[0].NumImageInfos &&
       (this->Elements[0].NumAccelerationStructures ==
        param_1->Elements[0].NumAccelerationStructures)))) &&
     (iVar1 = this->Elements[0].Types.ArrayNum, iVar1 == param_1->Elements[0].Types.ArrayNum)) {
    iVar1 = memcmp(this->Elements[0].Types.AllocatorInstance.Data,
                   param_1->Elements[0].Types.AllocatorInstance.Data,(longlong)iVar1 << 2);
    if ((((iVar1 == 0) &&
         (this->Elements[1].PackedGlobalsSize == param_1->Elements[1].PackedGlobalsSize)) &&
        ((this->Elements[1].NumBoundUniformBuffers == param_1->Elements[1].NumBoundUniformBuffers &&
         (((this->Elements[1].NumBufferInfos == param_1->Elements[1].NumBufferInfos &&
           (this->Elements[1].NumImageInfos == param_1->Elements[1].NumImageInfos)) &&
          (this->Elements[1].NumAccelerationStructures ==
           param_1->Elements[1].NumAccelerationStructures)))))) &&
       (iVar1 = this->Elements[1].Types.ArrayNum, iVar1 == param_1->Elements[1].Types.ArrayNum)) {
      iVar1 = memcmp(this->Elements[1].Types.AllocatorInstance.Data,
                     param_1->Elements[1].Types.AllocatorInstance.Data,(longlong)iVar1 << 2);
      if ((((iVar1 == 0) &&
           (this->Elements[2].PackedGlobalsSize == param_1->Elements[2].PackedGlobalsSize)) &&
          ((this->Elements[2].NumBoundUniformBuffers == param_1->Elements[2].NumBoundUniformBuffers
           && ((this->Elements[2].NumBufferInfos == param_1->Elements[2].NumBufferInfos &&
               (this->Elements[2].NumImageInfos == param_1->Elements[2].NumImageInfos)))))) &&
         ((this->Elements[2].NumAccelerationStructures ==
           param_1->Elements[2].NumAccelerationStructures &&
          (iVar1 = this->Elements[2].Types.ArrayNum, iVar1 == param_1->Elements[2].Types.ArrayNum)))
         ) {
        iVar1 = memcmp(this->Elements[2].Types.AllocatorInstance.Data,
                       param_1->Elements[2].Types.AllocatorInstance.Data,(longlong)iVar1 << 2);
        if ((((iVar1 == 0) &&
             (this->Elements[3].PackedGlobalsSize == param_1->Elements[3].PackedGlobalsSize)) &&
            (this->Elements[3].NumBoundUniformBuffers == param_1->Elements[3].NumBoundUniformBuffers
            )) && (((this->Elements[3].NumBufferInfos == param_1->Elements[3].NumBufferInfos &&
                    (this->Elements[3].NumImageInfos == param_1->Elements[3].NumImageInfos)) &&
                   ((this->Elements[3].NumAccelerationStructures ==
                     param_1->Elements[3].NumAccelerationStructures &&
                    (iVar1 = this->Elements[3].Types.ArrayNum,
                    iVar1 == param_1->Elements[3].Types.ArrayNum)))))) {
          iVar1 = memcmp(this->Elements[3].Types.AllocatorInstance.Data,
                         param_1->Elements[3].Types.AllocatorInstance.Data,(longlong)iVar1 << 2);
          if (((iVar1 == 0) &&
              (this->Elements[4].PackedGlobalsSize == param_1->Elements[4].PackedGlobalsSize)) &&
             ((this->Elements[4].NumBoundUniformBuffers ==
               param_1->Elements[4].NumBoundUniformBuffers &&
              ((((this->Elements[4].NumBufferInfos == param_1->Elements[4].NumBufferInfos &&
                 (this->Elements[4].NumImageInfos == param_1->Elements[4].NumImageInfos)) &&
                (this->Elements[4].NumAccelerationStructures ==
                 param_1->Elements[4].NumAccelerationStructures)) &&
               (iVar1 = this->Elements[4].Types.ArrayNum,
               iVar1 == param_1->Elements[4].Types.ArrayNum)))))) {
            iVar1 = memcmp(this->Elements[4].Types.AllocatorInstance.Data,
                           param_1->Elements[4].Types.AllocatorInstance.Data,(longlong)iVar1 << 2);
            if ((((iVar1 == 0) &&
                 (this->Elements[5].PackedGlobalsSize == param_1->Elements[5].PackedGlobalsSize)) &&
                ((this->Elements[5].NumBoundUniformBuffers ==
                  param_1->Elements[5].NumBoundUniformBuffers &&
                 ((this->Elements[5].NumBufferInfos == param_1->Elements[5].NumBufferInfos &&
                  (this->Elements[5].NumImageInfos == param_1->Elements[5].NumImageInfos)))))) &&
               ((this->Elements[5].NumAccelerationStructures ==
                 param_1->Elements[5].NumAccelerationStructures &&
                (iVar1 = this->Elements[5].Types.ArrayNum,
                iVar1 == param_1->Elements[5].Types.ArrayNum)))) {
              iVar1 = memcmp(this->Elements[5].Types.AllocatorInstance.Data,
                             param_1->Elements[5].Types.AllocatorInstance.Data,(longlong)iVar1 << 2)
              ;
              if (iVar1 == 0) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

