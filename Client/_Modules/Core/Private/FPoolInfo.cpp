// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FPoolInfo @ 14167a7f0

FPoolInfo * __thiscall FMallocBinned2::FPoolInfo::FPoolInfo(FPoolInfo *this)

{
  this->Taken = 0;
  this->Canary = Unassigned;
  this->AllocSize = 0;
  this->FirstFreeBlock = (FFreeBlock *)0x0;
  this->Next = (FPoolInfo *)0x0;
  this->PtrToPrevNext = (FPoolInfo **)0x0;
  return this;
}

// FPoolInfo @ 14167a810

FPoolInfo * __thiscall FMallocBinned3::FPoolInfo::FPoolInfo(FPoolInfo *this)

{
  this->Canary = Unassigned;
  this->AllocSize = 0;
  this->VMSizeDivVirtualSizeAlignment = 0;
  this->CommitSize = 0;
  return this;
}

// AllocateBin @ 1416807b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMallocBinned2::FPoolInfo::AllocateBin(FPoolInfo *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  FFreeBlock *pFVar6;
  
  if (this->Canary != FirstFreeBlockIsPtr) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if ((this->FirstFreeBlock == (FFreeBlock *)0x0) || (this->FirstFreeBlock->NumFreeBins == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasFreeBin()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                       ,0xae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  pFVar6 = this->FirstFreeBlock;
  this->Taken = this->Taken + 1;
  uVar2 = pFVar6->NumFreeBins;
  uVar1 = uVar2 - 1;
  pFVar6->NumFreeBins = uVar1;
  if ((short)pFVar6 == 0) {
    pvVar5 = (void *)((longlong)pFVar6 + (0x10000 - (ulonglong)(pFVar6->BinSize * uVar2)));
  }
  else {
    pvVar5 = (void *)((longlong)&pFVar6->BinSize + (ulonglong)(pFVar6->BinSize * uVar1));
  }
  pFVar6 = this->FirstFreeBlock;
  if (pFVar6->NumFreeBins == 0) {
    pFVar6 = pFVar6->NextFreeBlock;
    this->FirstFreeBlock = pFVar6;
  }
  if ((pFVar6 != (FFreeBlock *)0x0) && (pFVar6->NumFreeBins == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FirstFreeBlock || FirstFreeBlock->GetNumFreeBins() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                       ,0xe5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  return pvVar5;
}

// CheckCanary @ 14168a4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned2::FPoolInfo::CheckCanary(FPoolInfo *this,ECanary param_1)

{
  if (this->Canary != param_1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    return;
  }
  return;
}

// CheckCanary @ 14168a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::FPoolInfo::CheckCanary(FPoolInfo *this,ECanary param_1)

{
  if (this->Canary != param_1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    return;
  }
  return;
}

// ExhaustPoolIfNecessary @ 1416924d0

void __thiscall FMallocBinned2::FPoolInfo::ExhaustPoolIfNecessary(FPoolInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FFreeBlock *pFVar3;
  
  pFVar3 = this->FirstFreeBlock;
  if (pFVar3->NumFreeBins == 0) {
    pFVar3 = pFVar3->NextFreeBlock;
    this->FirstFreeBlock = pFVar3;
  }
  if ((pFVar3 != (FFreeBlock *)0x0) && (pFVar3->NumFreeBins == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FirstFreeBlock || FirstFreeBlock->GetNumFreeBins() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                       ,0xe5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetOSRequestedBytes @ 141699a80

ulong64 __thiscall FMallocBinned2::FPoolInfo::GetOSRequestedBytes(FPoolInfo *this)

{
  return (ulonglong)this->AllocSize << 3;
}

// GetOSRequestedBytes @ 141699a90

uint __thiscall FMallocBinned3::FPoolInfo::GetOSRequestedBytes(FPoolInfo *this)

{
  return this->AllocSize;
}

// GetOsAllocatedBytes @ 14169a990

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FMallocBinned2::FPoolInfo::GetOsAllocatedBytes(FPoolInfo *this)

{
  if (this->Canary != FirstFreeBlockIsOSAllocSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    return (ulong64)this->FirstFreeBlock;
  }
  return (ulong64)this->FirstFreeBlock;
}

// GetOsCommittedBytes @ 14169a9e0

uint __thiscall FMallocBinned3::FPoolInfo::GetOsCommittedBytes(FPoolInfo *this)

{
  return this->CommitSize;
}

// GetOsVMPages @ 14169a9f0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMallocBinned3::FPoolInfo::GetOsVMPages(FPoolInfo *this)

{
  if (this->Canary != Assigned) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    return this->VMSizeDivVirtualSizeAlignment;
  }
  return this->VMSizeDivVirtualSizeAlignment;
}

// HasFreeBin @ 1416a2130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMallocBinned2::FPoolInfo::HasFreeBin(FPoolInfo *this)

{
  if (this->Canary != FirstFreeBlockIsPtr) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if ((this->FirstFreeBlock != (FFreeBlock *)0x0) && (this->FirstFreeBlock->NumFreeBins != 0)) {
    return true;
  }
  return false;
}

// Link @ 1416b1c10

void __thiscall FMallocBinned2::FPoolInfo::Link(FPoolInfo *this,FPoolInfo **param_1)

{
  if (*param_1 != (FPoolInfo *)0x0) {
    (*param_1)->PtrToPrevNext = &this->Next;
  }
  this->Next = *param_1;
  this->PtrToPrevNext = param_1;
  *param_1 = this;
  return;
}

// SetCanary @ 1416c01d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocBinned2::FPoolInfo::SetCanary(FPoolInfo *this,ECanary param_1,bool param_2,bool param_3)

{
  ECanary *pEVar1;
  ECanary EVar2;
  FStaticBasicLogRecord *pFVar3;
  
  pEVar1 = &this->Canary;
  if (!param_2) {
    EVar2 = *pEVar1;
    if (param_3) {
      if (EVar2 == Unassigned) goto LAB_1416c02a8;
      pFVar3 = &::LOG_Static;
    }
    else {
      if ((EVar2 == param_1) || (EVar2 == Unassigned)) goto LAB_1416c02a8;
      pFVar3 = &::LOG_Static;
    }
    UE::Logging::Private::BasicFatalLog(pFVar3,(FLogCategoryBase *)&LogMemory);
LAB_1416c02a8:
    *pEVar1 = param_1;
    return;
  }
  if (param_3) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  EVar2 = *pEVar1;
  if (param_1 == Unassigned) {
    if ((EVar2 == FirstFreeBlockIsOSAllocSize) || (EVar2 == FirstFreeBlockIsPtr))
    goto LAB_1416c0252;
    pFVar3 = &::LOG_Static;
  }
  else {
    if (EVar2 == param_1) goto LAB_1416c0252;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicFatalLog(pFVar3,(FLogCategoryBase *)&LogMemory);
LAB_1416c0252:
  *pEVar1 = param_1;
  return;
}

// SetCanary @ 1416c02c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocBinned3::FPoolInfo::SetCanary(FPoolInfo *this,ECanary param_1,bool param_2,bool param_3)

{
  ECanary EVar1;
  undefined **ppuVar2;
  
  if (param_2) {
    if (param_3) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661f20,
                 (FLogCategoryBase *)&LogMemory);
    }
    if (param_1 == Unassigned) {
      if (this->Canary == Assigned) goto LAB_1416c035e;
      ppuVar2 = &PTR_u_MallocBinned3_C_150661f40;
    }
    else {
      if (this->Canary == param_1) goto LAB_1416c035e;
      ppuVar2 = &PTR_u_MallocBinned3_C_150661f60;
    }
  }
  else {
    EVar1 = this->Canary;
    if (param_3) {
      if (EVar1 == Unassigned) goto LAB_1416c035e;
      ppuVar2 = &PTR_u_MallocBinned3_C_150661f80;
    }
    else {
      if ((EVar1 == param_1) || (EVar1 == Unassigned)) goto LAB_1416c035e;
      ppuVar2 = &PTR_u_MallocBinned3_C_150661fa0;
    }
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)ppuVar2,(FLogCategoryBase *)&LogMemory);
LAB_1416c035e:
  this->Canary = param_1;
  return;
}

// SetOSAllocationSize @ 1416c05e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::FPoolInfo::SetOSAllocationSize(FPoolInfo *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  
  if (this->Canary != Assigned) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  this->AllocSize = param_1;
  if (((param_1 != 0) && (uVar1 = this->CommitSize, param_1 <= uVar1)) &&
     (uVar2 = this->VMSizeDivVirtualSizeAlignment,
     uVar5 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment(),
     (ulonglong)uVar1 <= uVar5 * uVar2)) {
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AllocSize > 0 && CommitSize >= AllocSize && VMSizeDivVirtualSizeAlignment * FPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment() >= CommitSize"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                     ,0x111,L"");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetOSAllocationSizes @ 1416c0680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocBinned2::FPoolInfo::SetOSAllocationSizes(FPoolInfo *this,ulong64 param_1,ulong64 param_2)

{
  if (this->Canary != FirstFreeBlockIsOSAllocSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  this->AllocSize = (uint)(param_1 >> 3);
  this->FirstFreeBlock = (FFreeBlock *)param_2;
  return;
}

// SetOSAllocationSizes @ 1416c06e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocBinned3::FPoolInfo::SetOSAllocationSizes
          (FPoolInfo *this,uint param_1,ulong64 param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->Canary != Assigned) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  this->AllocSize = param_1;
  this->CommitSize = (uint)param_2;
  this->VMSizeDivVirtualSizeAlignment = param_3;
  if (((param_1 != 0) && (param_1 <= (uint)param_2)) &&
     (uVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment(),
     (param_2 & 0xffffffff) <= uVar3 * param_3)) {
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AllocSize > 0 && CommitSize >= AllocSize && VMSizeDivVirtualSizeAlignment * FPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment() >= CommitSize"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                     ,0x11a,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Unlink @ 1416c4f70

void __thiscall FMallocBinned2::FPoolInfo::Unlink(FPoolInfo *this)

{
  if (this->Next != (FPoolInfo *)0x0) {
    this->Next->PtrToPrevNext = this->PtrToPrevNext;
  }
  *this->PtrToPrevNext = this->Next;
  return;
}

