// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AllocateBin @ 1416808b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinned3::FPoolInfoSmall::AllocateBin(FPoolInfoSmall *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FPoolInfoSmall FVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (this->Canary != 1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (this->NoFirstFreeIndex != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasFreeBin()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  FVar5 = *this;
  FVar5 = (FPoolInfoSmall)(((int)FVar5 + 4U ^ (uint)FVar5) & 0x1fffc ^ (uint)FVar5);
  *this = FVar5;
  if (FVar5.Taken == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Taken != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                       ,0xd2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  puVar8 = (uint *)(param_1 + this->FirstFreeIndex * param_2);
  uVar7 = puVar8[1];
  uVar1 = *puVar8;
  uVar6 = uVar7 - 1 & 0xfff;
  uVar7 = (uVar7 - 1 ^ uVar7) & 0xfff ^ uVar7;
  puVar8[1] = uVar7;
  if (uVar6 == 0) {
    uVar7 = uVar7 & 0x1fff000;
    if (uVar7 == 0x1000000) {
      *this = (FPoolInfoSmall)((uint)*this & 0x3ffff | 0x20000);
    }
    else {
      *this = (FPoolInfoSmall)(uVar7 << 6 | (uint)*this & 0x3ffff);
      if (uVar7 != (puVar8[1] & 0x1fff000)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("uint32(FirstFreeIndex) == Free->NextFreeBlockIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0xdf,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pvVar4 = (void *)(*pcVar2)();
          return pvVar4;
        }
      }
      if ((*(uint *)(param_1 + (ulonglong)(this->FirstFreeIndex * param_2) + 4) & 0xfff) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("((FFreeBlock*)(BlockPtr + BinSize * FirstFreeIndex))->GetNumFreeBins()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0xe0,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pvVar4 = (void *)(*pcVar2)();
          return pvVar4;
        }
      }
    }
  }
  return (void *)((ulonglong)((uVar1 & 0x7fff) * 8 * uVar6) + (longlong)puVar8);
}

// AllocateRegularBlock @ 141681f00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinnedGPU::FPoolInfoSmall::AllocateRegularBlock
          (FPoolInfoSmall *this,FMallocBinnedGPU *param_1,uchar param_2)

{
  ushort uVar1;
  uint uVar2;
  FFreeBlock *pFVar3;
  FFreeBlock *pFVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  if (this->Canary != 0x69ffeed) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::CheckCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (this->FirstFreeProxy == (FFreeBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasFreeRegularBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                       ,0x58,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  this->Taken = this->Taken + 1;
  pFVar3 = this->FirstFreeProxy;
  pFVar3->NumFreeBlocks = pFVar3->NumFreeBlocks - 1;
  uVar2 = pFVar3->NumFreeBlocks;
  uVar1 = pFVar3->BlockSizeShifted;
  pFVar4 = pFVar3[1].NextFreeBlock;
  if (uVar2 == 0) {
    this->FirstFreeProxy = pFVar3->NextFreeBlock;
    ::operator_delete(pFVar3,0x20);
    LOCK();
    param_1->GPUProxyMemory = (TAtomic<__int64>)((longlong)param_1->GPUProxyMemory + -0x20);
    UNLOCK();
  }
  return (void *)((longlong)&pFVar4->BlockSizeShifted +
                 (ulonglong)(((uint)uVar1 << (param_2 & 0x1f)) * uVar2));
}

