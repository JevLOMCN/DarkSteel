// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FUpdateScope @ 147cc5d70

FUpdateScope * __thiscall FGPUBaseSkinVertexFactory::FUpdateScope::FUpdateScope(FUpdateScope *this)

{
  code *pcVar1;
  FUpdateScope *pFVar2;
  bool bVar3;
  
  (this->Cloth).Pool =
       (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)&GClothBufferPool;
  (this->Cloth).Lock.Mutex = (FMutex *)&GClothBufferPool.field_0x10;
  LOCK();
  bVar3 = GClothBufferPool._16_1_ == '\0';
  if (bVar3) {
    GClothBufferPool._16_1_ = 1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow((FMutex *)&GClothBufferPool.field_0x10);
  }
  if ((((this->Cloth).Pool)->bLocked != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pool.bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0xb0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar2 = (FUpdateScope *)(*pcVar1)();
    return pFVar2;
  }
  ((this->Cloth).Pool)->bLocked = true;
  (this->Bone).Pool =
       (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)&GBoneBufferPool;
  (this->Bone).Lock.Mutex = (FMutex *)&GBoneBufferPool.field_0x10;
  LOCK();
  bVar3 = GBoneBufferPool._16_1_ == '\0';
  if (bVar3) {
    GBoneBufferPool._16_1_ = 1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow((FMutex *)&GBoneBufferPool.field_0x10);
  }
  if ((((this->Bone).Pool)->bLocked != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pool.bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ResourcePool.h"
                         ,0xb0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar2 = (FUpdateScope *)(*pcVar1)();
    return pFVar2;
  }
  ((this->Bone).Pool)->bLocked = true;
  return this;
}

// ~FUpdateScope @ 148625800

void __thiscall FGPUBaseSkinVertexFactory::FUpdateScope::~FUpdateScope(FUpdateScope *this)

{
  atomic<unsigned_char> aVar1;
  FMutex *pFVar2;
  
  ((this->Bone).Pool)->bLocked = false;
  pFVar2 = (this->Bone).Lock.Mutex;
  if (pFVar2 != (FMutex *)0x0) {
    LOCK();
    aVar1 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar2);
    }
    (this->Bone).Lock.Mutex = (FMutex *)0x0;
  }
  ((this->Cloth).Pool)->bLocked = false;
  pFVar2 = (this->Cloth).Lock.Mutex;
  if (pFVar2 != (FMutex *)0x0) {
    LOCK();
    aVar1 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar2);
    }
    (this->Cloth).Lock.Mutex = (FMutex *)0x0;
  }
  return;
}

