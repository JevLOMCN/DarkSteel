// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FRichCurve @ 146094570

FRichCurve * __thiscall FRichCurve::FRichCurve(FRichCurve *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->_padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x404;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  return this;
}

// Duplicate @ 1460c0090

FIndexedCurve * __thiscall FRichCurve::Duplicate(FRichCurve *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FIndexedCurve *pFVar3;
  
  pFVar3 = ::operator_new(0x80);
  if (pFVar3 == (FIndexedCurve *)0x0) {
    return (FIndexedCurve *)0x0;
  }
  *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices = 0;
  *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 = 0;
  *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x20 = 0;
  *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x28 = 0;
  *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x2c = 0x80;
  *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 = 0;
  *(undefined8 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40 = 0;
  *(undefined4 *)&(pFVar3->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
  (pFVar3->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->KeyHandlesToIndices).KeyHandles.ArrayNum = 0;
  (pFVar3->KeyHandlesToIndices).KeyHandles.ArrayMax = 0;
  pFVar3->_padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&pFVar3[1]._padding_ = (int)this->_padding_;
  *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&this->_padding_ + 5);
  pFVar3->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)&pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices = 0;
  iVar2 = (this->Keys).ArrayNum;
  _Src = (this->Keys).AllocatorInstance.Data;
  *(int *)&pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x8 = iVar2;
  puVar1 = &pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0xc;
  if (iVar2 == 0) {
    *(undefined4 *)puVar1 = 0;
    return pFVar3;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,iVar2,0,(ForAnyElementType *)&pFVar3[1].KeyHandlesToIndices,iVar2,(int *)puVar1)
  ;
  memcpy(*(void **)&pFVar3[1].KeyHandlesToIndices.KeyHandlesToIndices,_Src,(longlong)iVar2 * 0x1c);
  return pFVar3;
}

// GetNumKeys @ 1460ce260

int __thiscall FRichCurve::GetNumKeys(FRichCurve *this)

{
  return (this->Keys).ArrayNum;
}

