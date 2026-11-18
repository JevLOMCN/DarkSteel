// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FNameEntryAllocator @ 141a72bd0

void __thiscall FNameEntryAllocator::~FNameEntryAllocator(FNameEntryAllocator *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  longlong lVar4;
  uchar **ppuVar5;
  
  lVar4 = (longlong)(int)this->CurrentBlock;
  if (-1 < lVar4) {
    ppuVar5 = this->Blocks + lVar4;
    do {
      FMemory::Free(*ppuVar5);
      lVar4 = lVar4 + -1;
      ppuVar5 = ppuVar5 + -1;
    } while (-1 < lVar4);
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (!bVar3) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a72c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// AllocBlock @ 141a752e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __thiscall FNameEntryAllocator::AllocBlock(FNameEntryAllocator *this)

{
  longlong lVar1;
  uchar *puVar2;
  FWriteBuffer *pFVar3;
  undefined1 auStackY_68 [32];
  FLLMScope local_34;
  FLLMScope local_30;
  FLLMScope local_2c;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  FLLMScope::FLLMScope(&local_2c,FName,false,None,Default,true);
  FMemScope::FMemScope(&local_28,FName,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_30,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_34,AssetClasses,Default);
  if (MetadataChannel->Enabled < 0) {
    puVar2 = FMemory::Malloc(0x20000,2);
  }
  else {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
    *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    puVar2 = FMemory::Malloc(0x20000,2);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar3 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar3 - *(int *)&pFVar3->Cursor < 1) {
      pFVar3 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar3->Cursor = '\n';
    pFVar3->Cursor = pFVar3->Cursor + 1;
    pFVar3->Committed = pFVar3->Cursor;
  }
  FLLMScope::~FLLMScope(&local_34);
  FLLMScope::~FLLMScope(&local_30);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(&local_2c);
  return puVar2;
}

// AllocateNewBlock @ 141a757b0

void __thiscall FNameEntryAllocator::AllocateNewBlock(FNameEntryAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (this->CurrentByteCursor + 2 < 0x20001) {
    *(ushort *)(this->Blocks[this->CurrentBlock] + this->CurrentByteCursor) =
         *(ushort *)(this->Blocks[this->CurrentBlock] + this->CurrentByteCursor) & 0x3f;
  }
  if (this->CurrentByteCursor < 0x20000) {
    this->Waste = this->Waste + (ulonglong)(0x20000 - this->CurrentByteCursor);
  }
  this->CurrentBlock = this->CurrentBlock + 1;
  this->CurrentByteCursor = 0;
  if ((0x1fff < this->CurrentBlock) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBlock < FNameMaxBlocks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x366,
                         L"FName overflow, allocated %dMB of string data. FName strings are never freed and should be created sparingly. Some system might be generating too many FNames, see call stack. "
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->Blocks[this->CurrentBlock] == (uchar *)0x0) {
    puVar3 = AllocBlock(this);
    this->Blocks[this->CurrentBlock] = puVar3;
  }
  return;
}

// DebugDumpBlock @ 141a7d6c0

void __cdecl
FNameEntryAllocator::DebugDumpBlock
          (uchar *param_1,uint param_2,
          TArray<FNameEntry_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  ushort *local_18 [2];
  
  puVar5 = (ushort *)(param_1 + ((ulonglong)param_2 - 2));
  while( true ) {
    if ((puVar5 <= param_1) || (*(ushort *)param_1 < 0x40)) {
      return;
    }
    pFVar1 = (param_3->AllocatorInstance).Data;
    local_18[0] = (ushort *)param_1;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       (((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_3->ArrayMax * 8 &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)))) break;
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar4;
    }
    param_3->ArrayNum = iVar4 + 1;
    *(ushort **)((param_3->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    param_1 = (uchar *)((longlong)param_1 +
                       ((ulonglong)((uint)(*local_18[0] >> 6) * (((byte)*local_18[0] & 1) + 1) + 3)
                       & 0xfffffffe));
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

