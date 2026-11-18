// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FLinearAllocator @ 141815a80

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearAllocator * __thiscall
FLinearAllocator::FLinearAllocator(FLinearAllocator *this,ulong64 param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  FPlatformVirtualMemoryBlock *pFVar3;
  FPlatformVirtualMemoryBlock local_18;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&this->VirtualMemory = 0;
  *(undefined4 *)&(this->VirtualMemory).field_0x8 = 0;
  this->Reserved = param_1;
  this->Committed = 0;
  this->CurrentOffset = 0;
  if (param_1 == 0) {
    if (2 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
  }
  else {
    uVar2 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    pFVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
                       (&local_18,param_1,uVar2);
    uVar1 = *(undefined8 *)&pFVar3->field_0x8;
    *(undefined8 *)&this->VirtualMemory = *(undefined8 *)pFVar3;
    *(undefined8 *)&(this->VirtualMemory).field_0x8 = uVar1;
    if (*(longlong *)&this->VirtualMemory != 0) {
      return this;
    }
    if (2 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
  }
  this->Reserved = 0;
  return this;
}

// Allocate @ 14181b640

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FLinearAllocator::Allocate(FLinearAllocator *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  FLowLevelMemTracker *pFVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  FLLMScope local_res18 [2];
  
  uVar4 = 8;
  if (8 < param_2) {
    uVar4 = (ulonglong)param_2;
  }
  pvVar5 = (void *)0x0;
  if (this == (FLinearAllocator *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar6 = (this->CurrentOffset - 1) + uVar4;
  if (param_1 <= this->Reserved - (~(uVar4 - 1) & uVar6)) {
    uVar6 = -uVar4 & uVar6;
    this->CurrentOffset = uVar6;
    uVar6 = uVar6 + param_1;
    if (this->Committed < uVar6) {
      FLLMScope::FLLMScope(local_res18,FMalloc,false,None,Platform,true);
      uVar1 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
      uVar3 = 0x10000;
      if (0x10000 < uVar1) {
        uVar3 = uVar1;
      }
      uVar6 = (uVar3 - this->Committed) + (uVar6 - 1) & ~(uVar3 - 1);
      FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
                (&this->VirtualMemory,this->Committed,uVar6);
      this->Committed = this->Committed + uVar6;
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar2 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar2 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar2,Platform,(void *)(*(longlong *)&this->VirtualMemory + this->CurrentOffset)
                   ,uVar6,Untagged,None,true);
      }
      FLLMScope::~FLLMScope(local_res18);
    }
    uVar3 = this->CurrentOffset;
    pvVar5 = (void *)(*(longlong *)&this->VirtualMemory + uVar3);
    this->CurrentOffset = uVar3 + param_1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (pvVar5 == (void *)0x0) {
    if (bOnce == false) {
      if (2 < (byte)LogMemory._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      bOnce = true;
    }
    pvVar5 = FMemory::Malloc(param_1,(uint)uVar4);
    return pvVar5;
  }
  pFVar2 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    pFVar2 = FLowLevelMemTracker::Construct();
  }
  FLowLevelMemTracker::OnLowLevelAlloc(pFVar2,Default,pvVar5,param_1,Untagged,FMalloc,true);
  return pvVar5;
}

// CanFit @ 14181d9f0

bool __thiscall FLinearAllocator::CanFit(FLinearAllocator *this,ulong64 param_1,uint param_2)

{
  return param_1 <=
         this->Reserved -
         ((this->CurrentOffset - 1) + (ulonglong)param_2 & ~((ulonglong)param_2 - 1));
}

// ContainsPointer @ 14181f6b0

bool __thiscall FLinearAllocator::ContainsPointer(FLinearAllocator *this,void *param_1)

{
  return (ulonglong)((longlong)param_1 - *(longlong *)&this->VirtualMemory) < this->Reserved;
}

