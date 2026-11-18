// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// ~FStringCurve @ 146621140

void __thiscall FStringCurve::~FStringCurve(FStringCurve *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStringCurve__6B_;
  DestructItems<FStringCurveKey,int>
            ((FStringCurveKey *)(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// Duplicate @ 146666ab0

FIndexedCurve * __thiscall FStringCurve::Duplicate(FStringCurve *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FStringCurveKey *pFVar4;
  FIndexedCurve *pFVar5;
  
  pFVar5 = ::operator_new(0x88);
  if (pFVar5 == (FIndexedCurve *)0x0) {
    return (FIndexedCurve *)0x0;
  }
  *(undefined8 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices = 0;
  *(undefined8 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 = 0;
  *(undefined8 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x20 = 0;
  *(undefined4 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x28 = 0;
  *(undefined4 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x2c = 0x80;
  *(undefined4 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 = 0;
  *(undefined8 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40 = 0;
  *(undefined4 *)&(pFVar5->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
  (pFVar5->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar5->KeyHandlesToIndices).KeyHandles.ArrayNum = 0;
  (pFVar5->KeyHandlesToIndices).KeyHandles.ArrayMax = 0;
  pFVar5->_padding_ = (longlong)&___7FStringCurve__6B_;
  ::FString::FString((FString *)(pFVar5 + 1),&this->DefaultValue);
  puVar1 = &pFVar5[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x8;
  *(undefined8 *)puVar1 = 0;
  puVar2 = &pFVar5[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x14;
  iVar3 = (this->Keys).ArrayNum;
  pFVar4 = (FStringCurveKey *)(this->Keys).AllocatorInstance.Data;
  *(int *)&pFVar5[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x10 = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)puVar2 = 0;
    return pFVar5;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
  ConstructItems<FStringCurveKey,FStringCurveKey,int>(*(void **)puVar1,pFVar4,iVar3);
  return pFVar5;
}

// GetNumKeys @ 14668cbc0

int __thiscall FStringCurve::GetNumKeys(FStringCurve *this)

{
  return (this->Keys).ArrayNum;
}

