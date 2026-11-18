// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> @ 14147c6c0

THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> * __thiscall
THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
          (THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> *this,
          atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *param_1,
          FHazardPointerCollection *param_2)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  FHazardRecord *pFVar5;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar6;
  bool bVar7;
  
  pvVar2 = ThreadLocalStoragePointer;
  this->Hazard = param_1;
  lVar1 = *(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0x74) & 1) == 0) {
    *(uint *)(lVar1 + 0x74) = *(uint *)(lVar1 + 0x74) | 1;
    LOCK();
    UNLOCK();
    uVar3 = ((uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                   ::__l2::counter >> 0x10 ^
            (uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                  ::__l2::counter) * 0x45d9f3b;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * 0x45d9f3b;
    `public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
    ::__l2::counter =
         (atomic<unsigned_int>)
         ((int)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
               ::__l2::counter + 1);
    *(uint *)(lVar1 + 0x70) = uVar3 >> 0x10 ^ uVar3;
  }
  uVar4 = 0;
  aVar6 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)param_2;
  while( true ) {
    pFVar5 = (FHazardRecord *)
             ((ulonglong)(*(int *)(lVar1 + 0x70) + (int)uVar4 & 0x1f) * 0x80 + (longlong)aVar6);
    LOCK();
    bVar7 = pFVar5->Hazard == (atomic<unsigned___int64>)0xffffffffffffffff;
    if (bVar7) {
      pFVar5->Hazard = (atomic<unsigned___int64>)0x0;
    }
    UNLOCK();
    if (bVar7) break;
    uVar4 = uVar4 + 1;
    if ((0x1f < uVar4) &&
       (aVar6 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)
                 ((longlong)aVar6 + 0x1000), uVar4 = 0,
       aVar6 == (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0)) {
      pFVar5 = FHazardPointerCollection::Grow<0>(param_2);
      this->Record = pFVar5;
      return this;
    }
  }
  this->Record = pFVar5;
  return this;
}

// Get @ 141496fe0

Node * __thiscall
THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,1>::Get
          (THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,1> *this)

{
  FHazardRecord *pFVar1;
  atomic<unsigned___int64> aVar2;
  
  do {
    pFVar1 = this->Record;
    pFVar1->Hazard = (atomic<unsigned___int64>)*this->Hazard;
    LOCK();
    UNLOCK();
    aVar2 = pFVar1->Hazard;
  } while (aVar2 != *(atomic<unsigned___int64> *)this->Hazard);
  return (Node *)aVar2;
}

