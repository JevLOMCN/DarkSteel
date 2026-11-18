// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 10

// FInstancedStructArray @ 144431790

FInstancedStructArray * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::FInstancedStructArray
          (FInstancedStructArray *this,FConstStructArrayView *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ScriptStruct = param_1->ScriptStruct;
  InitFromRawData(this,param_1->DataPtr,param_1->ArrayNum);
  return this;
}

// FInstancedStructArray @ 1444317d0

FInstancedStructArray * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::FInstancedStructArray
          (FInstancedStructArray *this,FConstStructView *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ScriptStruct = param_1->ScriptStruct;
  InitFromRawData(this,param_1->StructMemory,1);
  return this;
}

// FInstancedStructArray @ 144431810

FInstancedStructArray * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::FInstancedStructArray
          (FInstancedStructArray *this,UScriptStruct *param_1)

{
  this->ScriptStruct = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return this;
}

// ~FInstancedStructArray @ 144433ba0

void __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::~FInstancedStructArray
          (FInstancedStructArray *this)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  uint uVar3;
  
  pUVar1 = this->ScriptStruct;
  if (pUVar1 != (UScriptStruct *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->_padding_);
    pUVar1 = this->ScriptStruct;
    uVar3 = (uint)*(short *)((longlong)&pUVar1->_padding_ + 4);
    if (pUVar1 == (UScriptStruct *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)pUVar1->_padding_ + -1 + uVar3 & -uVar3;
    }
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,*(int *)((longlong)&this->_padding_ + 4),0,
               (longlong)(int)uVar2,uVar3);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddReferencedObjects @ 1444373b0

void __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::AddReferencedObjects
          (FInstancedStructArray *this,FReferenceCollector *param_1)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FStructOnScope local_38;
  
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < (int)this->_padding_)); iVar4 = iVar4 + 1) {
    pUVar1 = this->ScriptStruct;
    if (pUVar1 == (UScriptStruct *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar3 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      uVar2 = (int)pUVar1->_padding_ + -1 + iVar3 & -iVar3;
    }
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    FStructOnScope::FStructOnScope
              (&local_38,(UStruct *)pUVar1,
               (uchar *)((longlong)(int)(uVar2 * iVar4) + this->_padding_));
    FStructOnScope::AddReferencedObjects(&local_38,param_1);
    FStructOnScope::~FStructOnScope(&local_38);
  }
  return;
}

// GetMemory @ 14444bb90

void * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::GetMemory
          (FInstancedStructArray *this)

{
  return (void *)this->_padding_;
}

// GetScriptStruct @ 14444e020

UScriptStruct * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::GetScriptStruct
          (FInstancedStructArray *this)

{
  return this->ScriptStruct;
}

// GetScriptViewAt @ 14444e030

FConstStructView * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::GetScriptViewAt
          (FInstancedStructArray *this,FConstStructView *__return_storage_ptr__,int param_1)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    pUVar1 = this->ScriptStruct;
    if (pUVar1 == (UScriptStruct *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar3 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      uVar2 = iVar3 + -1 + (int)pUVar1->_padding_ & -iVar3;
    }
    __return_storage_ptr__->ScriptStruct = pUVar1;
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    __return_storage_ptr__->StructMemory =
         (uchar *)((longlong)(int)(uVar2 * param_1) + this->_padding_);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// GetStructureSize @ 14444e280

int __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::GetStructureSize
          (FInstancedStructArray *this)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  int iVar3;
  
  pUVar1 = this->ScriptStruct;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return 1;
  }
  iVar3 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  uVar2 = (int)pUVar1->_padding_ + -1 + iVar3 & -iVar3;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  return uVar2;
}

// InitFromRawData @ 144450430

void __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FInstancedStructArray::InitFromRawData
          (FInstancedStructArray *this,void *param_1,int param_2)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  uint uVar3;
  
  pUVar1 = this->ScriptStruct;
  if (pUVar1 != (UScriptStruct *)0x0) {
    *(int *)&this->_padding_ = param_2;
    *(int *)((longlong)&this->_padding_ + 4) = param_2;
    uVar3 = (uint)*(short *)((longlong)&pUVar1->_padding_ + 4);
    uVar2 = (int)pUVar1->_padding_ + -1 + uVar3 & -uVar3;
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,0,param_2,(longlong)(int)uVar2,uVar3);
    (**(code **)(this->ScriptStruct->_padding_ + 0x2f8))(this->ScriptStruct,this->_padding_,param_2)
    ;
    UScriptStruct::CopyScriptStruct(this->ScriptStruct,(void *)this->_padding_,param_1,param_2);
  }
  return;
}

