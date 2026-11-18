// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// ClearAndDisableTLSCachesOnCurrentThread @ 1416e30e0

void __thiscall
FMallocPurgatoryProxy::ClearAndDisableTLSCachesOnCurrentThread(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001416e30e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x90))();
  return;
}

// DumpAllocatorStats @ 1416ec0b0

void __thiscall
FMallocPurgatoryProxy::DumpAllocatorStats(FMallocPurgatoryProxy *this,FOutputDevice *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416ec0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xb0))();
  return;
}

// Exec @ 1416ed0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMallocPurgatoryProxy::Exec
          (FMallocPurgatoryProxy *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ed0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 8))();
  return (bool)uVar1;
}

// Free @ 1416f0ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocPurgatoryProxy::Free(FMallocPurgatoryProxy *this,void *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  atomic<void_*> aVar7;
  uint uVar8;
  atomic<void_*> aVar9;
  atomic<void_*> aVar10;
  atomic<void_*> local_res18;
  size_t local_res20;
  
  if (param_1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416f0acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->UsedMalloc + 0x48))();
    return;
  }
  aVar10 = (atomic<void_*>)0x0;
  local_res20 = 0;
  cVar4 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_res20);
  if (((cVar4 == '\0') || (local_res20 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetAllocationSize(Ptr, Size) && Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                         ,0x76,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memset(param_1,0xdc,local_res20);
  uVar8 = GFrameNumber & 3;
  uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
  aVar7 = aVar10;
  if (uVar6 != 0) {
    aVar7 = (atomic<void_*>)
            (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + (uVar6 & 0x3fff));
  }
  *(void **)((longlong)aVar7 + 8) = param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)(this->Purgatory + uVar8),uVar6);
  LOCK();
  (this->OutstandingSizeInKB).Counter =
       (this->OutstandingSizeInKB).Counter + (int)(local_res20 + 0x3ff >> 10);
  uVar8 = GFrameNumber;
  UNLOCK();
  uVar6 = this->LastCheckFrame;
  if ((this->OutstandingSizeInKB).Counter < 0x17d79) {
    if (uVar6 == GFrameNumber) {
      return;
    }
    LOCK();
    bVar5 = uVar6 == this->LastCheckFrame;
    if (bVar5) {
      this->LastCheckFrame = GFrameNumber;
    }
    UNLOCK();
    if (!bVar5) {
      return;
    }
  }
  else {
    LOCK();
    pFVar1 = &this->NextOversizeClear;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    uVar8 = iVar2 + 1;
  }
  while( true ) {
    uVar6 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)(this->Purgatory + (uVar8 - 1 & 3)));
    aVar7 = aVar10;
    if (uVar6 != 0) {
      aVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar6 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
    }
    if (aVar7 == (atomic<void_*>)0x0) break;
    local_res18 = (atomic<void_*>)0x0;
    cVar4 = (**(code **)(this->_padding_ + 0x68))(this,aVar7,&local_res18);
    if (((cVar4 == '\0') || (local_res18 == (atomic<void_*>)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetAllocationSize(Pop, Size) && Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                           ,0x8f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    aVar9 = aVar10;
    if (local_res18 != (atomic<void_*>)0x0) {
      do {
        if (*(char *)((longlong)aVar7 + (longlong)aVar9) != -0x24) {
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"Freed memory at %p + %d == %x (should be %x)\r\n");
          UE::Logging::Private::BasicFatalLog
                    (&`public:_virtual_void___cdecl_FMallocPurgatoryProxy::Free(void*___ptr64)___ptr64'
                      ::__l37::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        aVar9 = (atomic<void_*>)((longlong)aVar9 + 1);
      } while ((ulonglong)aVar9 < (ulonglong)local_res18);
    }
    (**(code **)((longlong)*this->UsedMalloc + 0x48))(this->UsedMalloc,aVar7);
    LOCK();
    (this->OutstandingSizeInKB).Counter =
         (this->OutstandingSizeInKB).Counter -
         (int)((ulonglong)((longlong)local_res18 + 0x3ff) >> 10);
    UNLOCK();
  }
  return;
}

// GetAllocationSize @ 1416f1eb0

bool __thiscall
FMallocPurgatoryProxy::GetAllocationSize(FMallocPurgatoryProxy *this,void *param_1,ulong64 *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f1eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x68))();
  return (bool)uVar1;
}

// GetAllocatorStats @ 1416f2090

void __thiscall
FMallocPurgatoryProxy::GetAllocatorStats(FMallocPurgatoryProxy *this,FGenericMemoryStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416f2097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xa8))();
  return;
}

// GetDescriptiveName @ 1416f7d70

wchar_t * __thiscall FMallocPurgatoryProxy::GetDescriptiveName(FMallocPurgatoryProxy *this)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f7d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((longlong)*this->UsedMalloc + 200))();
  return pwVar1;
}

// InitializeStatsMetadata @ 141700cb0

void __thiscall FMallocPurgatoryProxy::InitializeStatsMetadata(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141700cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x98))();
  return;
}

// Malloc @ 1417046d0

void * __thiscall
FMallocPurgatoryProxy::Malloc(FMallocPurgatoryProxy *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417046d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))();
  return pvVar1;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 141704b10

void __thiscall
FMallocPurgatoryProxy::MarkTLSCachesAsUnusedOnCurrentThread(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x88))();
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 141704b90

void __thiscall
FMallocPurgatoryProxy::MarkTLSCachesAsUsedOnCurrentThread(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x80))();
  return;
}

// OnMallocInitialized @ 141706150

void __thiscall FMallocPurgatoryProxy::OnMallocInitialized(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd0))();
  return;
}

// OnPostFork @ 141706250

void __thiscall FMallocPurgatoryProxy::OnPostFork(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xe0))();
  return;
}

// OnPreFork @ 1417063c0

void __thiscall FMallocPurgatoryProxy::OnPreFork(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001417063c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd8))();
  return;
}

// QuantizeSize @ 141708660

ulong64 __thiscall
FMallocPurgatoryProxy::QuantizeSize(FMallocPurgatoryProxy *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141708667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x60))();
  return uVar1;
}

// Realloc @ 141708e30

void * __thiscall
FMallocPurgatoryProxy::Realloc
          (FMallocPurgatoryProxy *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141708e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x38))();
  return pvVar1;
}

// SetupTLSCachesOnCurrentThread @ 141712850

void __thiscall FMallocPurgatoryProxy::SetupTLSCachesOnCurrentThread(FMallocPurgatoryProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141712857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x78))();
  return;
}

// Trim @ 141716f90

void __thiscall FMallocPurgatoryProxy::Trim(FMallocPurgatoryProxy *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141716f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x70))();
  return;
}

// ValidateHeap @ 14171a840

bool __thiscall FMallocPurgatoryProxy::ValidateHeap(FMallocPurgatoryProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014171a847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0xc0))();
  return (bool)uVar1;
}

