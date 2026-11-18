// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// operator[] @ 14167c900

uint * __thiscall
FLLMArray<unsigned_int,unsigned_int>::operator[]
          (FLLMArray<unsigned_int,unsigned_int> *this,uint param_1)

{
  if (this->Count <= param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  return this->Array + param_1;
}

// operator[] @ 14167c960

FLowLevelAllocInfo * __thiscall
FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::operator[]
          (FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> *this,
          uint param_1)

{
  if (this->Count <= param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  return this->Array + param_1;
}

// operator[] @ 14167c9c0

PointerKey * __thiscall
FLLMArray<PointerKey,unsigned_int>::operator[]
          (FLLMArray<PointerKey,unsigned_int> *this,uint param_1)

{
  if (this->Count <= param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  return this->Array + param_1;
}

// Add @ 14167ec00

void __thiscall
FLLMArray<unsigned_int,unsigned_int>::Add(FLLMArray<unsigned_int,unsigned_int> *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_res8 [8];
  
  uVar1 = this->Capacity;
  if (this->Count == uVar1) {
    uVar2 = 0x1000;
    if ((uVar1 != 0) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 <= uVar1)) {
      `FLLMArray<unsigned_int,unsigned_int>::Add'::__l8::<lambda_1>::operator()(local_res8);
    }
    Reserve(this,uVar2);
  }
  this->Array[this->Count] = *param_1;
  this->Count = this->Count + 1;
  return;
}

// RemoveLast @ 1416bdb20

uint __thiscall
FLLMArray<unsigned_int,unsigned_int>::RemoveLast(FLLMArray<unsigned_int,unsigned_int> *this)

{
  if (this->Count == 0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->Count = this->Count - 1;
  return this->Array[this->Count];
}

// Reserve @ 1416be0f0

void __thiscall
FLLMArray<unsigned_int,unsigned_int>::Reserve
          (FLLMArray<unsigned_int,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 != this->Capacity) {
    if (param_1 < 0x41) {
      puVar2 = this->StaticArray;
      if (this->Array != puVar2) {
        if (this->Count != 0) {
          memcpy(puVar2,this->Array,(ulonglong)this->Count << 2);
        }
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 2);
        this->Array = puVar2;
        this->Capacity = 0x40;
        return;
      }
    }
    else {
      uVar1 = param_1 + 0xfff & 0xfffff000;
      puVar2 = UE::LLMPrivate::FLLMAllocator::Alloc(this->Allocator,(ulonglong)uVar1 << 2);
      if (this->Count != 0) {
        memcpy(puVar2,this->Array,(ulonglong)this->Count << 2);
      }
      if (this->Array != this->StaticArray) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 2);
      }
      this->Capacity = uVar1;
      this->Array = puVar2;
    }
  }
  return;
}

// Reserve @ 1416be1e0

void __thiscall
FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Reserve
          (FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> *this,
          uint param_1)

{
  uint uVar1;
  FLowLevelAllocInfo *pFVar2;
  
  if (param_1 != this->Capacity) {
    if (param_1 < 0x41) {
      pFVar2 = this->StaticArray;
      if (this->Array != pFVar2) {
        if (this->Count != 0) {
          memcpy(pFVar2,this->Array,(ulonglong)this->Count << 3);
        }
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 3);
        this->Array = pFVar2;
        this->Capacity = 0x40;
        return;
      }
    }
    else {
      uVar1 = param_1 + 0x7ff & 0xfffff800;
      pFVar2 = UE::LLMPrivate::FLLMAllocator::Alloc(this->Allocator,(ulonglong)uVar1 << 3);
      if (this->Count != 0) {
        memcpy(pFVar2,this->Array,(ulonglong)this->Count << 3);
      }
      if (this->Array != this->StaticArray) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 3);
      }
      this->Capacity = uVar1;
      this->Array = pFVar2;
    }
  }
  return;
}

// Reserve @ 1416be2d0

void __thiscall
FLLMArray<PointerKey,unsigned_int>::Reserve(FLLMArray<PointerKey,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  PointerKey *pPVar2;
  
  if (param_1 != this->Capacity) {
    if (param_1 < 0x41) {
      pPVar2 = this->StaticArray;
      if (this->Array != pPVar2) {
        if (this->Count != 0) {
          memcpy(pPVar2,this->Array,(ulonglong)this->Count << 3);
        }
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 3);
        this->Array = pPVar2;
        this->Capacity = 0x40;
        return;
      }
    }
    else {
      uVar1 = param_1 + 0x7ff & 0xfffff800;
      pPVar2 = UE::LLMPrivate::FLLMAllocator::Alloc(this->Allocator,(ulonglong)uVar1 << 3);
      if (this->Count != 0) {
        memcpy(pPVar2,this->Array,(ulonglong)this->Count << 3);
      }
      if (this->Array != this->StaticArray) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (this->Allocator,this->Array,(ulonglong)this->Capacity << 3);
      }
      this->Capacity = uVar1;
      this->Array = pPVar2;
    }
  }
  return;
}

// operator() @ 150479c00

bool __thiscall
`FLLMArray<unsigned_int,unsigned_int>::Add'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<844568656917561423>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<844568656917561423>,
                       &`public:___cdecl_`public:_void___cdecl_FLLMArray<unsigned_int,unsigned_int>::Add(unsigned_int_const&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150479c40

bool __thiscall
`FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<844568656917561423>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<844568656917561423>,
                       &`public:___cdecl_`public:_void___cdecl_FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add(UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo_const&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150479c80

bool __thiscall `FLLMArray<PointerKey,unsigned_int>::Add'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<844568656917561423>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<844568656917561423>,
                       &`public:___cdecl_`public:_void___cdecl_FLLMArray<PointerKey,unsigned_int>::Add(PointerKey_const&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

