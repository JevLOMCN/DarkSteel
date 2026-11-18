// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FMemoryArena @ 141815b70

FMemoryArena * __thiscall FMemoryArena::FMemoryArena(FMemoryArena *this)

{
  ulonglong uVar1;
  FArenaOrFreeLink FVar2;
  code *pcVar3;
  bool bVar4;
  FArenaAllocState *pFVar5;
  FMemoryArena *pFVar6;
  
  this->ArenaFlags = 0;
  this->ArenaId = 0xffff;
  this->_padding_ = (longlong)&___7FMemoryArena__6B_;
  pFVar5 = ArenaTracker();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar5->Lock);
  uVar1 = pFVar5->NextFreeArenaIndex;
  if (0xff < uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewArenaId < MaxArenaCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\MemoryArena.cpp"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryArena *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar2 = pFVar5->KnownArenas[uVar1];
  pFVar5->KnownArenas[uVar1].Arena = this;
  pFVar5->NextFreeArenaIndex = (ulong64)FVar2;
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar5->Lock);
  this->ArenaId = (ushort)uVar1;
  return this;
}

// ~FMemoryArena @ 141816b00

void __thiscall FMemoryArena::~FMemoryArena(FMemoryArena *this)

{
  code *pcVar1;
  bool bVar2;
  FArenaAllocState *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)this->ArenaId;
  this->_padding_ = (longlong)&___7FMemoryArena__6B_;
  pFVar3 = ArenaTracker();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar3->Lock);
  if (pFVar3->KnownArenas[uVar4].Arena != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tracker.KnownArenas[ArenaId].Arena == Arena",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\MemoryArena.cpp"
                       ,0x7b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3->KnownArenas[uVar4] = (FArenaOrFreeLink)pFVar3->NextFreeArenaIndex;
  pFVar3->NextFreeArenaIndex = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000141816b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar3->Lock);
  return;
}

// Alloc @ 14181b490

void * __thiscall FMemoryArena::Alloc(FMemoryArena *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014181b493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->_padding_ + 8))();
  return pvVar1;
}

// Free @ 141823a20

void __thiscall FMemoryArena::Free(FMemoryArena *this,void *param_1)

{
  if ((param_1 != (void *)0x0) && ((this->ArenaFlags & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141823a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
    return;
  }
  return;
}

// GetBlockSize @ 141825380

ulong64 __thiscall FMemoryArena::GetBlockSize(FMemoryArena *this,void *param_1)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141825383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))();
  return uVar1;
}

// GetDebugName @ 141825cb0

wchar_t * __thiscall FMemoryArena::GetDebugName(FMemoryArena *this)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141825cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)(this->_padding_ + 0x20))();
  return pwVar1;
}

// InternalFree @ 141829200

void __thiscall FMemoryArena::InternalFree(FMemoryArena *this,void *param_1,ulong64 param_2)

{
  return;
}

// InternalGetDebugName @ 141829270

wchar_t * __thiscall FMemoryArena::InternalGetDebugName(FMemoryArena *this)

{
  return L"(unnamed)";
}

