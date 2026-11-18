// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FRDGBuffer @ 145d8be10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
FRDGBuffer::FRDGBuffer
          (FRDGBuffer *this,wchar_t *param_1,FRDGBufferDesc *param_2,ERDGBufferFlags param_3)

{
  uint uVar1;
  EBufferUsageFlags EVar2;
  undefined4 uVar3;
  
  FRDGViewableResource::FRDGViewableResource
            ((FRDGViewableResource *)this,param_1,Buffer,(bool)(param_3 >> 1 & 1),
             (bool)(~(param_3 >> 2) & 1));
  this->_padding_ = (longlong)&___7FRDGBuffer__6B_;
  uVar1 = param_2->NumElements;
  EVar2 = param_2->Usage;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  (this->Desc).BytesPerElement = param_2->BytesPerElement;
  (this->Desc).NumElements = uVar1;
  (this->Desc).Usage = EVar2;
  *(undefined4 *)&(this->Desc).field_0xc = uVar3;
  (this->Desc).Metadata = param_2->Metadata;
  (this->Allocation).Reference = (FRDGPooledBuffer *)0x0;
  this->Handle = 0xffffffff;
  this->PreviousOwner = 0xffffffff;
  (this->NextOwner).Index = 0xffffffff;
  this->PooledBuffer = (FRDGPooledBuffer *)0x0;
  this->TransientBuffer = (FRHITransientBuffer *)0x0;
  this->ViewCache = (FRHIBufferViewCache *)0x0;
  this->Flags = param_3;
  *(undefined8 *)&this->LastProducer = 0;
  *(undefined8 *)&(this->LastProducer).field_0x8 = 0;
  *(undefined8 *)&(this->LastProducer).field_0x10 = 0;
  *(undefined4 *)&(this->LastProducer).field_0x18 = 0;
  *(undefined4 *)&(this->LastProducer).field_0x1c = 0xffffffff;
  *(undefined8 *)&(this->LastProducer).field_0x20 = 0;
  *(undefined8 *)&(this->LastProducer).field_0x28 = 0;
  *(undefined8 *)&(this->LastProducer).field_0x30 = 0;
  *(undefined4 *)&(this->LastProducer).field_0x38 = 0;
  *(undefined4 *)&(this->LastProducer).field_0x3c = 0xffffffff;
  this->NumElementsCallback = (TFunction<unsigned_int___cdecl(void)> *)0x0;
  this->PendingCommitSize = 0;
  this->State = (FRDGSubresourceState *)0x0;
  this->FirstState = (FRDGSubresourceState *)0x0;
  this->MergeState = (FRDGSubresourceState *)0x0;
  return this;
}

// FRDGBuffer @ 145d8bf30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
FRDGBuffer::FRDGBuffer
          (FRDGBuffer *this,wchar_t *param_1,FRDGBufferDesc *param_2,ERDGBufferFlags param_3,
          TFunction<unsigned_int___cdecl(void)> *param_4)

{
  FRDGBuffer(this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FRDGBuffer__6B_;
  this->NumElementsCallback = param_4;
  return this;
}

// FinalizeDesc @ 145db5700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGBuffer::FinalizeDesc(FRDGBuffer *this)

{
  TFunction<unsigned_int___cdecl(void)> *pTVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  
  pTVar1 = this->NumElementsCallback;
  if (pTVar1 != (TFunction<unsigned_int___cdecl(void)> *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
    pcVar2 = *(code **)pTVar1;
    plVar6 = (longlong *)&pTVar1->field_0x10;
    if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&pTVar1->field_0x28;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    uVar3 = (*pcVar2)(uVar4);
    pTVar1 = this->NumElementsCallback;
    uVar5 = 1;
    if (1 < uVar3) {
      uVar5 = uVar3;
    }
    (this->Desc).NumElements = uVar5;
    if (*(longlong *)pTVar1 != 0) {
      plVar6 = (longlong *)&pTVar1->field_0x10;
      if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
        plVar6 = *(longlong **)&pTVar1->field_0x28;
      }
      (**(code **)(*plVar6 + 0x10))();
      *(longlong *)pTVar1 = 0;
    }
    this->NumElementsCallback = (TFunction<unsigned_int___cdecl(void)> *)0x0;
  }
  return;
}

