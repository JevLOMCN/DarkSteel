// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~FIntegralCurve @ 146097730

void __thiscall FIntegralCurve::~FIntegralCurve(FIntegralCurve *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FIntegralCurve__6B_;
  pFVar1 = (this->Keys).AllocatorInstance.Data;
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

// Duplicate @ 1460bff90

FIndexedCurve * __thiscall FIntegralCurve::Duplicate(FIntegralCurve *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FIndexedCurve *pFVar3;
  
  pFVar3 = ::operator_new(0x80);
  if (pFVar3 != (FIndexedCurve *)0x0) {
    *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices = 0;
    *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 = 0;
    *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x20 = 0;
    *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x28 = 0;
    *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 = 0;
    *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40 = 0;
    *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
    (pFVar3->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar3->KeyHandlesToIndices).KeyHandles.ArrayNum = 0;
    (pFVar3->KeyHandlesToIndices).KeyHandles.ArrayMax = 0;
    pFVar3->_padding_ = (longlong)&___7FIntegralCurve__6B_;
    pFVar3[1]._padding_ = 0;
    iVar2 = (this->Keys).ArrayNum;
    puVar1 = &pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x4;
    _Src = (this->Keys).AllocatorInstance.Data;
    *(int *)&pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,0,(ForAnyElementType *)(pFVar3 + 1),iVar2,(int *)puVar1);
      memcpy((FScriptContainerElement *)pFVar3[1]._padding_,_Src,(longlong)iVar2 << 3);
    }
    *(int *)&pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x8 = this->DefaultValue;
    pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0xc =
         this->bUseDefaultValueBeforeFirstKey;
    return pFVar3;
  }
  return (FIndexedCurve *)0x0;
}

// GetNumKeys @ 1460ce230

int __thiscall FIntegralCurve::GetNumKeys(FIntegralCurve *this)

{
  return (this->Keys).ArrayNum;
}

