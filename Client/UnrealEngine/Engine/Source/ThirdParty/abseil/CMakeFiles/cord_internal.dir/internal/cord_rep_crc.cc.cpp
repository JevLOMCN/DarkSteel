// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 4

// CordRepCrc @ 1501d07a0

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepCrc::CordRepCrc(void) __ptr64 */

CordRepCrc * __thiscall absl::lts_20240722::cord_internal::CordRepCrc::CordRepCrc(CordRepCrc *this)

{
  *(undefined4 *)&this->_padding_ = 2;
  crc_internal::CrcCordState::CrcCordState(&this->crc_cord_state);
  return this;
}

// Destroy @ 1501d07d0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepCrc::Destroy(struct
   absl::lts_20240722::cord_internal::CordRepCrc * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRepCrc::Destroy(CordRepCrc *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  
  pCVar3 = param_1->child;
  if (pCVar3 != (CordRep *)0x0) {
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar3);
    }
  }
  crc_internal::CrcCordState::~CrcCordState(&param_1->crc_cord_state);
  ::operator_delete(param_1,0x20);
  return;
}

// New @ 1501d0820

/* public: static struct absl::lts_20240722::cord_internal::CordRepCrc * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepCrc::New(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class
   absl::lts_20240722::crc_internal::CrcCordState) */

CordRepCrc * __cdecl
absl::lts_20240722::cord_internal::CordRepCrc::New(CordRep *param_1,CrcCordState param_2)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRepCrc *pCVar3;
  CordRep *pCVar4;
  CordRepCrc *pCVar5;
  CordRepCrc *pCVar6;
  
  pCVar4 = param_1;
  if ((param_1 != (CordRep *)0x0) && (param_1->tag == '\x02')) {
    if ((param_1->refcount).count_ == (atomic<int>)0x2) {
      crc_internal::CrcCordState::operator=
                ((CrcCordState *)&param_1[1].refcount,(CrcCordState *)param_2.refcounted_rep_);
      crc_internal::CrcCordState::~CrcCordState((CrcCordState *)param_2.refcounted_rep_);
      return (CordRepCrc *)param_1;
    }
    pCVar4 = (CordRep *)param_1[1].length;
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
  pCVar3 = ::operator_new(0x20);
  pCVar5 = (CordRepCrc *)0x0;
  pCVar6 = pCVar5;
  if (pCVar3 != (CordRepCrc *)0x0) {
    *(undefined4 *)&pCVar3->_padding_ = 2;
    crc_internal::CrcCordState::CrcCordState(&pCVar3->crc_cord_state);
    pCVar6 = pCVar3;
  }
  if (pCVar4 != (CordRep *)0x0) {
    pCVar5 = (CordRepCrc *)pCVar4->length;
  }
  pCVar6->_padding_ = (longlong)pCVar5;
  *(undefined1 *)((longlong)&pCVar6->_padding_ + 4) = 2;
  pCVar6->child = pCVar4;
  crc_internal::CrcCordState::operator=
            (&pCVar6->crc_cord_state,(CrcCordState *)param_2.refcounted_rep_);
  crc_internal::CrcCordState::~CrcCordState((CrcCordState *)param_2.refcounted_rep_);
  return pCVar6;
}

// FUN_150330020 @ 150330020

void FUN_150330020(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x20);
  return;
}

