// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ~FCommonAnalogCursor @ 14b8b3060

void __thiscall FCommonAnalogCursor::~FCommonAnalogCursor(FCommonAnalogCursor *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if ((this->ActiveKeyUpEvent).bIsSet != false) {
    FKeyEvent::~FKeyEvent(&(this->ActiveKeyUpEvent).TypedValue);
  }
  pTVar3 = (this->LastCursorTarget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  (this->PointerButtonDownKeys).HashSize = 0;
  FVar4 = (this->PointerButtonDownKeys).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PointerButtonDownKeys).Elements);
  FAnalogCursor::~FAnalogCursor((FAnalogCursor *)this);
  return;
}

