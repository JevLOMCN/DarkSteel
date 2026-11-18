// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Add @ 1417b2880

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
UE::Logging::Private::FLocalizedLogFormatTable::Add
          (FLocalizedLogFormatTable *this,FTextFormat *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  bool bVar8;
  FSparseArrayAllocationInfo local_28;
  
  LOCK();
  bVar8 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    FMutex::LockSlow(&this->Mutex);
  }
  iVar3 = *(int *)&(this->Table).field_0x34;
  if (iVar3 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Table).field_0x8,
                       (int *)&(this->Table).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Table).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Table).field_0x30;
    lVar5 = *(longlong *)&this->Table;
    iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar7 * 0x10);
    iVar3 = iVar3 + -1;
    *(int *)&(this->Table).field_0x30 = iVar4;
    *(int *)&(this->Table).field_0x34 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)this,&local_28,iVar7);
  if (local_28.Pointer != (undefined8 *)0x0) {
    *(FTextFormatData **)local_28.Pointer = (param_1->TextFormatData).Object;
    pTVar6 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return local_28.Index;
}

