// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FGenericStackBasedMallocCrash @ 14161de20

FGenericStackBasedMallocCrash * __thiscall
FGenericStackBasedMallocCrash::FGenericStackBasedMallocCrash
          (FGenericStackBasedMallocCrash *this,FMalloc *param_1)

{
  uchar *puVar1;
  
  this->_padding_ = (longlong)&___7FGenericStackBasedMallocCrash__6B_;
  puVar1 = FMemory::Malloc(0x40000,0);
  this->CurrentFreeMemPtr = puVar1;
  this->FreeMemoryEndPtr = puVar1 + 0x40000;
  return this;
}

// ~FGenericStackBasedMallocCrash @ 141621020

void __thiscall
FGenericStackBasedMallocCrash::~FGenericStackBasedMallocCrash(FGenericStackBasedMallocCrash *this)

{
  this->_padding_ = (longlong)&___7FGenericStackBasedMallocCrash__6B_;
  FExec::~FExec((FExec *)this);
  return;
}

// Free @ 14163cc50

void __thiscall
FGenericStackBasedMallocCrash::Free(FGenericStackBasedMallocCrash *this,void *param_1)

{
  return;
}

// Get @ 14163df30

FGenericStackBasedMallocCrash * __cdecl FGenericStackBasedMallocCrash::Get(FMalloc *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      CrashMalloc.CurrentFreeMemPtr = FMemory::Malloc(0x40000,0);
      CrashMalloc.FreeMemoryEndPtr = CrashMalloc.CurrentFreeMemPtr + 0x40000;
      atexit(`FGenericStackBasedMallocCrash::Get'::__l2::
             _dynamic_atexit_destructor_for__CrashMalloc__);
      _Init_thread_footer(&::_TSS0);
      return &CrashMalloc;
    }
  }
  return &CrashMalloc;
}

// GetDescriptiveName @ 141641070

wchar_t * __thiscall
FGenericStackBasedMallocCrash::GetDescriptiveName(FGenericStackBasedMallocCrash *this)

{
  return L"FGenericStackBasedMallocCrash";
}

// IsActive @ 141649c10

bool __cdecl FGenericStackBasedMallocCrash::IsActive(void)

{
  return GIsMallocCrashActive;
}

// Malloc @ 14164d960

void * __thiscall
FGenericStackBasedMallocCrash::Malloc
          (FGenericStackBasedMallocCrash *this,ulong64 param_1,uint param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  puVar1 = this->CurrentFreeMemPtr;
  uVar4 = 8;
  if (0xf < param_1) {
    uVar4 = 0x10;
  }
  if (param_2 < uVar4) {
    param_2 = uVar4;
  }
  uVar6 = (ulonglong)param_2;
  if (puVar1 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                       ,0x2cd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (this->FreeMemoryEndPtr < puVar1 + param_1 + 8 + uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                       ,0x2d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)((ulonglong)(puVar1 + uVar6 + 7) & -uVar6);
    *(ulong64 *)((longlong)pvVar5 - 8) = param_1;
    this->CurrentFreeMemPtr = puVar1 + param_1 + 8 + uVar6;
  }
  return pvVar5;
}

// Realloc @ 141652820

void * __thiscall
FGenericStackBasedMallocCrash::Realloc
          (FGenericStackBasedMallocCrash *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  ulonglong _Size;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    _Size = *(ulonglong *)((longlong)param_1 + -8);
    if (_Size == param_2) {
      return param_1;
    }
    pvVar1 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,param_3);
    if (param_2 < _Size) {
      _Size = param_2;
    }
    memcpy(pvVar1,param_1,_Size);
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416528af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,param_3);
  return pvVar1;
}

// SetAsGMalloc @ 14165cdd0

void __thiscall FGenericStackBasedMallocCrash::SetAsGMalloc(FGenericStackBasedMallocCrash *this)

{
  UE::Private::GMalloc = (FMalloc *)this;
  GIsMallocCrashActive = true;
  return;
}

