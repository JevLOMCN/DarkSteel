// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Push @ 1414aba00

void __thiscall
UE::Tasks::Private::FTaskBase::
FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
          (FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          FTaskBase *param_1)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar3;
  int iVar4;
  bool bVar5;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  iVar4 = (this->Prerequisites).ArrayNum;
  piVar1 = &(this->Prerequisites).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                      (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)this,piVar1);
  }
  (this->Prerequisites).ArrayNum = iVar4 + 1;
  FVar3 = (this->Prerequisites).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    this = (FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
  }
  *(FTaskBase **)((longlong)this + (longlong)iVar4 * 8) = param_1;
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// PopAll @ 141a8ddb0

TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
UE::Tasks::Private::FTaskBase::
FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::PopAll
          (FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(&this->Mutex);
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  if ((this->Prerequisites).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    *(undefined8 *)(__return_storage_ptr__->AllocatorInstance).InlineData =
         *(undefined8 *)(this->Prerequisites).AllocatorInstance.InlineData;
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (this->Prerequisites).AllocatorInstance.SecondaryData;
  (this->Prerequisites).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  __return_storage_ptr__->ArrayNum = (this->Prerequisites).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->Prerequisites).ArrayMax;
  (this->Prerequisites).ArrayNum = 0;
  (this->Prerequisites).ArrayMax = 1;
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return __return_storage_ptr__;
}

