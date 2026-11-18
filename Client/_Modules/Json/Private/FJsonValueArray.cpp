// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 8

// FJsonValueArray @ 141dc4c50

FJsonValueArray * __thiscall
FJsonValueArray::FJsonValueArray
          (FJsonValueArray *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FJsonValueArray__6B_;
  (this->Value).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Value).ArrayNum = param_1->ArrayNum;
  (this->Value).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 5;
  return this;
}

// FJsonValueArray @ 141dc4c90

FJsonValueArray * __thiscall
FJsonValueArray::FJsonValueArray
          (FJsonValueArray *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  
  pTVar1 = &this->Value;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FJsonValueArray__6B_;
  piVar2 = &(this->Value).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pTVar4 = (TSharedPtr<FJsonValue,1> *)(param_1->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  *(undefined4 *)&this->_padding_ = 5;
  return this;
}

// ~FJsonValueArray @ 141dc64d0

void __thiscall FJsonValueArray::~FJsonValueArray(FJsonValueArray *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FJsonValueArray__6B_;
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)(this->Value).AllocatorInstance.Data,(this->Value).ArrayNum
            );
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return;
}

// GetAllocatedSize @ 141dd50c0

ulong64 __thiscall FJsonValueArray::GetAllocatedSize(FJsonValueArray *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Value).ArrayNum;
  pFVar3 = (this->Value).AllocatorInstance.Data;
  uVar5 = (longlong)(this->Value).ArrayMax << 4;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Value).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong **)pFVar3 == (longlong *)0x0) {
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      lVar2 = (**(code **)(**(longlong **)pFVar3 + 0x98))();
      uVar5 = uVar5 + lVar2;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return uVar5;
}

// GetMemoryFootprint @ 141dd67e0

ulong64 __thiscall FJsonValueArray::GetMemoryFootprint(FJsonValueArray *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Value).ArrayNum;
  pFVar3 = (this->Value).AllocatorInstance.Data;
  lVar5 = (longlong)(this->Value).ArrayMax << 4;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Value).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong **)pFVar3 == (longlong *)0x0) {
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      lVar2 = (**(code **)(**(longlong **)pFVar3 + 0x98))();
      lVar5 = lVar5 + lVar2;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return lVar5 + 0x20;
}

// GetType @ 141dd7370

FString * __thiscall FJsonValueArray::GetType(FJsonValueArray *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Array");
  return __return_storage_ptr__;
}

// TryGetArray @ 141df9960

bool __thiscall
FJsonValueArray::TryGetArray
          (FJsonValueArray *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **param_1)

{
  *param_1 = &this->Value;
  return true;
}

// TryGetArray @ 141df9970

bool __thiscall
FJsonValueArray::TryGetArray
          (FJsonValueArray *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **param_1)

{
  *param_1 = &this->Value;
  return true;
}

