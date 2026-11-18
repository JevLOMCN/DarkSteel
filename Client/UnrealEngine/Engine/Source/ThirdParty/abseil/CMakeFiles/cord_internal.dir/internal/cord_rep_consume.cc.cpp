// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 4

// operator() @ 1501d0900

/* public: void __cdecl absl::lts_20240722::FunctionRef<void __cdecl(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64,unsigned
   __int64)>::operator()(struct absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned
   __int64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::
FunctionRef<void___cdecl(absl::lts_20240722::cord_internal::CordRep*___ptr64,unsigned___int64,unsigned___int64)>
::operator()(FunctionRef<void___cdecl(absl::lts_20240722::cord_internal::CordRep*___ptr64,unsigned___int64,unsigned___int64)>
             *this,CordRep *param_1,__uint64 param_2,__uint64 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001501d0906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 8))(*(undefined8 *)this);
  return;
}

// FUN_1501d0910 @ 1501d0910

longlong FUN_1501d0910(CordRep *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)&param_1[1].refcount;
  if ((param_1->refcount).count_ == (atomic<int>)0x2) {
    operator_delete(param_1,0x20);
    return lVar3;
  }
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 2;
  UNLOCK();
  LOCK();
  pRVar1 = &param_1->refcount;
  aVar2 = pRVar1->count_;
  pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x2) {
    absl::lts_20240722::cord_internal::CordRep::Destroy(param_1);
  }
  return lVar3;
}

// Consume @ 1501d0960

/* void __cdecl absl::lts_20240722::cord_internal::Consume(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class absl::lts_20240722::FunctionRef<void
   __cdecl(struct absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64,unsigned
   __int64)>) */

void __cdecl absl::lts_20240722::cord_internal::Consume(CordRep *param_1,undefined8 *param_2)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  CordRep *pCVar4;
  ulong64 uVar5;
  
  uVar3 = param_1->length;
  uVar5 = 0;
  pCVar4 = param_1;
  if (param_1->tag == '\x01') {
    uVar5 = param_1[1].length;
    pCVar4 = *(CordRep **)&param_1[1].refcount;
    if ((param_1->refcount).count_ == (atomic<int>)0x2) {
      ::operator_delete(param_1,0x20);
    }
    else {
      LOCK();
      (pCVar4->refcount).count_ = (atomic<int>)((int)(pCVar4->refcount).count_ + 2);
      UNLOCK();
      LOCK();
      pRVar1 = &param_1->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        CordRep::Destroy(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001501d09dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(*param_2,pCVar4,uVar5,uVar3);
  return;
}

// ReverseConsume @ 1501d09f0

/* void __cdecl absl::lts_20240722::cord_internal::ReverseConsume(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class absl::lts_20240722::FunctionRef<void
   __cdecl(struct absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64,unsigned
   __int64)>) */

void __cdecl absl::lts_20240722::cord_internal::ReverseConsume(CordRep *param_1,undefined8 *param_2)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  CordRep *pCVar5;
  ulong64 uVar6;
  
  uVar4 = *param_2;
  UNRECOVERED_JUMPTABLE = (code *)param_2[1];
  uVar3 = param_1->length;
  uVar6 = 0;
  pCVar5 = param_1;
  if (param_1->tag == '\x01') {
    uVar6 = param_1[1].length;
    pCVar5 = *(CordRep **)&param_1[1].refcount;
    if ((param_1->refcount).count_ == (atomic<int>)0x2) {
      ::operator_delete(param_1,0x20);
    }
    else {
      LOCK();
      (pCVar5->refcount).count_ = (atomic<int>)((int)(pCVar5->refcount).count_ + 2);
      UNLOCK();
      LOCK();
      pRVar1 = &param_1->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        CordRep::Destroy(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001501d0a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4,pCVar5,uVar6,uVar3);
  return;
}

